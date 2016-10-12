; MODERNGADGETS STYLESHEET "NEW"

[Variables]
; General positioning and background
bgOffset=6
bgWidth=160
bgWidthAbs=(#bgWidth# + (#bgOffset# * 2))

contentMarginAbs=2
contentMargin=(#bgOffset# + #contentMarginAbs#)
contentMarginCenter=((#bgWidth# / 2) + #bgOffset#)
contentMarginRight=(#bgWidth# + #bgOffset# - 2)
contentWidth=(#bgWidth# - (#contentMarginAbs# * 2))

rowSpacing=1
barHeight=1
graphHeight=41

; Font options
fontFace=Roboto
fontSize=8

; Colors
colorBg=0,0,0,255
colorBgA=255
colorBgBorder=#colorDim#
colorBgBorderA=#colorBgA#

colorGraphBorder=#colorDim#
colorGraphBorderA=#colorBgA#

colorMain=255,255,255,#colorBgA#
colorMainA=#colorBgA#
colorInfo=150,150,150,#colorBgA#
colorInfoA=#colorBgA#
colorDim=60,60,60,#colorBgA#
colorDimA=#colorBgA#

colorBarBg=#colorDim#

colorAccent=138,210,250,220
colorAccentRgb=138,210,250

colorButtonPress=255,50,50

colorHwinfoValueInputBg=50,50,50,255
colorHwinfoError=255,50,50,255

colorInputBoxBorder=#colorDim#

colorIntel=0,125,198

; Paths
imgPath=#@#Assets\Images\
soundPath=#@#Assets\Sounds\
fontPath=#@#Fonts\
scriptPath=#@#Scripts\

cpuMeterPath=#ROOTCONFIGPATH#CPU\CPU.ini
cpuMeterConfig=ModernGadgets\CPU
cpuSettingsPath=#SETTINGSPATH#ModernGadgetsSettings\CpuSettings.inc

; Styles
[StyleString]
FontColor=#colorMain#
FontSize=#fontSize#
FontFace=#fontFace#
X=#contentMargin#
Y=#rowSpacing#R
Antialias=1

[StyleStringGadgetHeader]
FontSize=10
X=#contentMargin#
Y=(#contentMargin# - 1)

[StyleStringCenterAlign]
StringAlign=Center
X=#contentMarginCenter#

[StyleStringRightAlign]
StringAlign=Right
X=#contentMarginRight#
Y=r

[StyleStringInfo]
StringAlign=Center
X=#contentMarginCenter#
Y=r
FontColor=#colorInfo#

[StyleStringToggleLabel]
FontSize=10
X=#contentMargin#
Y=4R

[StyleToggleImage]
X=(#contentMarginRight# - 35)
; X=5R
Y=-1r
W=31
H=20
Group=ToggleButtons

[StyleStringConfigSectionHeader]
FontFace=#fontFace# Bl
FontColor=#colorInfo#
Y=5R

[StyleStringInputBox]
FontColor=#colorInfo#
FontFace=Roboto Lt
FontSize=10
X=3r
Y=3r
W=(#contentWidth# - 10)
H=16

[StyleBar]
SolidColor=#colorBarBg#
X=(#contentMargin# + 2)
Y=R
W=(#contentWidth# - 4)
w=(#contentWidth# - 4)
h=#barHeight#
BarOrientation=Horizontal
DynamicVariables=1