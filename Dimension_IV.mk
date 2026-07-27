######################################
#
# Dimension_IV
#
######################################

DIMENSION_IV_VERSION = bf8bdaa55e09daa050f167e75e215be970d7925d
DIMENSION_IV_SITE = https://github.com/Mondomod/Dimension_IV.git
DIMENSION_IV_SITE_METHOD = git
DIMENSION_IV_CONF_OPTS = -DBUILD_GUI="Off"
DIMENSION_IV_BUNDLES = Dimension_IV.lv2

define DIMENSION_IV_BUILD_CMDS
	$(MAKE) -C $(@D) all
endef

define DIMENSION_IV_INSTALL_TARGET_CMDS
	cp -rL $(@D)/bin/Dimension_IV.lv2 $(TARGET_DIR)/usr/lib/lv2/
endef

$(eval $(cmake-package))
