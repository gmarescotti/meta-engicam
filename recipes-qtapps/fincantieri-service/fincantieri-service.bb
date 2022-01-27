SUMMARY = "add fincantieri service"
DESCRIPTION = "This package provides to execute the fincantieri app"
LICENSE = "CLOSED"

SRC_URI = "file://S99StartUpEngicam.sh"

do_install () {
	install -d ${D}${sysconfdir}
	install -d ${D}${sysconfdir}/rc5.d
	install -m 0644 ${WORKDIR}/S99StartUpEngicam.sh  ${D}${sysconfdir}/rc5.d/
}

FILES_${PN} = "/etc/rc5.d"


