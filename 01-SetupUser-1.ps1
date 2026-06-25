# 1. รับค่าข้อมูลจากนักศึกษา
Write-Host "=== Workshop Environment Setup ===" -ForegroundColor Cyan
$firstName = Read-Host "กรุณากรอกชื่อภาษาอังกฤษ (เช่น noppon)"
$lastName = Read-Host "กรุณากรอกนามสกุลภาษาอังกฤษ (เช่น wongta)"
# เช็คว่ารันด้วยสิทธิ์ Admin หรือไม่
$currentPrincipal = New-Object Security.Principal.WindowsPrincipal([Security.Principal.WindowsIdentity]::GetCurrent())
if (-not $currentPrincipal.IsInRole([Security.Principal.WindowsBuiltInRole]::Administrator)) {
    Write-Host "❌ ERROR: กรุณารัน PowerShell ในฐานะ 'Administrator' เท่านั้น!" -ForegroundColor Red
    Pause
    exit
}

# --- ต่อด้วย Code เดิมด้านล่าง ---

$studentID = Read-Host "กรุณากรอกรหัสนักศึกษา (เช่น 502110036)"

# 2. ประมวลผลชื่อ Account และรหัสผ่านตามเงื่อนไข
# ชื่อ: ชื่อจริง + อักษรแรกนามสกุล
$userName = ($firstName.ToLower() + $lastName.Substring(0,1).ToLower())

# รหัสผ่าน: อักษรแรกชื่อ + อักษรแรกนามสกุล + รหัส 3 ตัวท้าย
$firstInitial = $firstName.Substring(0,1).ToLower()
$lastInitial = $lastName.Substring(0,1).ToLower()
$lastThreeDigits = $studentID.Substring($studentID.Length - 3)
$passwordText = $firstInitial + $lastInitial + $lastThreeDigits

# แปลงรหัสผ่านเป็น Secure String
$securePassword = ConvertTo-SecureString $passwordText -AsPlainText -Force

# 3. เริ่มขั้นตอนการสร้าง Account
try {
    # ตรวจสอบว่ามี User นี้อยู่แล้วหรือไม่
    if (Get-LocalUser -Name $userName -ErrorAction SilentlyContinue) {
        Write-Host "Account '$userName' มีอยู่ในระบบแล้ว!" -ForegroundColor Yellow
    } else {
        # สร้าง User ใหม่
        New-LocalUser -Name $userName -Password $securePassword -FullName "$firstName $lastName" -Description "Student Account for Workshop"
        
        # เพิ่มสิทธิ์เป็น Administrator
        Add-LocalGroupMember -Group "Administrators" -Member $userName
        
        Write-Host "------------------------------------" -ForegroundColor Green
        Write-Host "สร้าง Account สำเร็จ!" -ForegroundColor Green
        Write-Host "Username: $userName"
        Write-Host "Password: $passwordText"
        Write-Host "------------------------------------"
        Write-Host "กรุณา Sign out แล้วเข้าใช้งานด้วย Account ใหม่ของคุณ"
    }
}
catch {
    Write-Host "เกิดข้อผิดพลาด: $_" -ForegroundColor Red
}

Pause