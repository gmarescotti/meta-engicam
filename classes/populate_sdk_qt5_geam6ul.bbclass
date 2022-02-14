# Copyright (C) 2014 O.S. Systems Software LTDA.

inherit populate_sdk_qt5_base

TOOLCHAIN_HOST_TASK += "nativesdk-packagegroup-qt5-toolchain-host"
TOOLCHAIN_TARGET_TASK += "packagegroup-qt5-geam6ul-toolchain-target"

FEATURE_PACKAGES_qtcreator-debug = "packagegroup-qt5-qtcreator-debug"

# aggiunto cantools qui per renderlo disponibile a SDK che compila (qmake)
# fincantieri_app... (ma ancora non funziona...)
# TOOLCHAIN_HOST_TASK += " nativesdk-python3 cantools"

