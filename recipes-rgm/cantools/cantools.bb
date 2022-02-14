SUMMARY = "cantools"
HOMEPAGE = "http://gitlab.rgm5.it/generic/pyutilities.git"
AUTHOR = "Giulio Marescotti <giulio.marescotti@rgm.it>"
LICENSE = "CLOSED"

inherit setuptools3

SRC_URI = "http://intranet.rgm.it/pip/cantools/cantools-36.4.7.tar.gz"
SRC_URI[md5sum] = "0c630a19627674b1fb36898442d454cc"

S = "${WORKDIR}/cantools-36.4.7"

DEPENDS += " "
