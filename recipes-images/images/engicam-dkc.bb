# in .conf viene definita MACHINEOVERRIDES
#conf/machine/microgea.conf:MACHINEOVERRIDES =. "mx6:mx6ull:gea:"conf/machine/microgea.conf:MACHINEOVERRIDES =. "mx6:mx6ull:gea:"

DESCRIPTION = "Engicam image with QT5 demo image for Frame Buffer"

LICENSE = "MIT"

inherit core-image
inherit distro_features_check
inherit populate_sdk
inherit populate_sdk_${@bb.utils.contains('MACHINEOVERRIDES', 'icoremx6', 'qt5_icore', 'qt5_geam6ul', d)}

EXTRA_IMAGE_FEATURES = " debug-tweaks ssh-server-openssh tools-debug \
			"
IMAGE_INSTALL_append  = " \
	qtbase-dev \
	qtbase-mkspecs \
	qtbase-plugins \
	qtbase-staticdev \
	packagegroup-qt5-eng-qtcreator-debug \
	qtimageformats-plugins \
	qtxmlpatterns-dev \
	qtxmlpatterns-mkspecs \
	engicam-emmc-script \
	tslib \
	evtest \
	tslib-conf \
	tslib-tests \
	tslib-calibrate \
	packagegroup-fonts-truetype \
	binutils \
	engicam-mtd-script \
	mtd-utils imx-kobs mtd-utils-ubifs \
	qtimageformats-dev \
	u-boot-eng-fw-utils \
	opkg \
"

IMAGE_INSTALL_remove  = " \
	qtsvg-dev \
	qtsvg-mkspecs \
	qtsvg-plugins \
	psplash \
"

###############RECIPES GEAM6UL##############

#PACKAGES QT
IMAGE_INSTALL_append_gea = " \
  fincantieri-app fincantieri-service \
"
IMAGE_INSTALL_remove ="qt3d nativesdk-qt3d qt3d-native ruby-native"

IMAGE_INSTALL_remove_gea  += "qtdeclarative-plugins"

export IMAGE_BASENAME = "engicam-demo-qt"

IMAGE_INSTALL_append += " iproute2 canutils "

