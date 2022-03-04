DESCRIPTION = "fincantieri qt app"

SECTION = "applications"
LICENSE = "CLOSED"

DEPENDS += "qtquick1 qtbase qtdeclarative qtserialbus "

SRC_URI = " \
	file://fincantieri-app-1.1 \	
"

BB_NUMBER_THREADS = "1"
PARALLEL_MAKE = "-j 1"

inherit qmake5 populate_sdk_qt5_geam6ul populate_sdk_qt5

EXTRA_QMAKEVARS_PRE = "CONFIG+=release"

FILES_${PN} += "/usr/bin/fincantieri_app"

do_install () {
          install -d ${D}/usr/bin
          install -m 0755 ${WORKDIR}/build/release/fincantieri_app ${D}/usr/bin
}

RDEPENDS_${PN} = "qtdeclarative-qmlplugins qtserialbus "
