SUMMARY = "cantools"
HOMEPAGE = "http://gitlab.rgm5.it/generic/pyutilities.git"
AUTHOR = "Giulio Marescotti <giulio.marescotti@rgm.it>"
LICENSE = "CLOSED"

BBCLASSEXTEND = "native nativesdk" 
TOOLCHAIN_HOST_TASK_append += " nativesdk-lib-name"
TOOLCHAIN_HOST_TASK_append += " nativesdk-cantools "

RDEPENDS_${PN} += " cantools"
RPROVIDES_${PN} += " cantools"

DEPENDS += " cantools"
