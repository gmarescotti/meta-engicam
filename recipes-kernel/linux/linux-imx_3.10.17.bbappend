FILESEXTRAPATHS_prepend := "${THISDIR}/${PN}:"
SRC_URI += "file://defconfig"
SRC_URI += "file://0001-Added-i.Core-M6-support.patch"
SRC_URI += "file://0002-Added-iomux-for-sdhc2-and-uart3.patch"

