DESCRIPTION = "GPE time tracker"
SECTION = "gpe"
PRIORITY = "optional"
LICENSE = "GPL"
DEPENDS = "libgpewidget gtk+ sqlite libtododb"
RDEPENDS_${PN} = "gpe-icons"

inherit autotools gpe

GPE_TARBALL_SUFFIX = "bz2"
