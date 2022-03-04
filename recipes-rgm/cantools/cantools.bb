SUMMARY = "cantools"
HOMEPAGE = "http://gitlab.rgm5.it/generic/pyutilities.git"
AUTHOR = "Giulio Marescotti <giulio.marescotti@rgm.it>"
LICENSE = "CLOSED"

inherit setuptools3

SRC_URI = "http://intranet.rgm.it/pip/cantools/cantools-36.4.8.tar.gz"
SRC_URI[md5sum] = "380c203054cd9266b1d917522134d656"

S = "${WORKDIR}/cantools-36.4.8"

DEPENDS += " "
