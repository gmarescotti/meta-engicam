DESCRIPTION = "fincantieri qt app"

SECTION = "applications"
LICENSE = "CLOSED"

DEPENDS += "qtbase"

SRC_URI = " \
	file://fincantieri-app-1.0 \	
"

inherit qmake5

EXTRA_QMAKEVARS_PRE = "CONFIG+=release"

FILES_${PN} += "/usr/bin/fincantieri_app"

do_install () {
          install -d ${D}/usr/bin
          install -m 0755 ${WORKDIR}/build/fincantieri_app ${D}/usr/bin
}

RDEPENDS_${PN} = ""
