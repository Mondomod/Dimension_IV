######################################
#
# DimensionIV
#
######################################

DIMENSIONIV_VERSION = bf8bdaa55e09daa050f167e75e215be970d7925d
DIMENSIONIV_SITE = https://github.com/Mondomod/dimensioniv
DIMENSIONIV_SITE_METHOD = git
DIMENSIONIV_CONF_OPTS = -DBUILD_GUI="Off"
DIMENSIONIV_BUNDLES = dimensioniv.lv2

define DIMENSIONIV_BUILD_CMDS
	$(MAKE) -C $(@D) all
endef

define DIMENSIONIV_INSTALL_TARGET_CMDS
	cp -rL $(@D)/bin/dimensioniv.lv2 $(TARGET_DIR)/usr/lib/lv2/
endef

$(eval $(cmake-package))
