#############################################################################
# Makefile for building: Vigil_3G
# Generated by qmake (3.0) (Qt 5.7.0)
# Project:  Vigil_3G.pro
# Template: app
# Command: /opt/mxe/usr/bin/x86_64-w64-mingw32.static-qmake-qt5 -o Makefile Vigil_3G.pro
#############################################################################

MAKEFILE      = Makefile

first: release
install: release-install
uninstall: release-uninstall
QMAKE         = /opt/mxe/usr/bin/x86_64-w64-mingw32.static-qmake-qt5
DEL_FILE      = rm -f
CHK_DIR_EXISTS= test -d
MKDIR         = mkdir -p
COPY          = cp -f
COPY_FILE     = cp -f
COPY_DIR      = cp -f -R
INSTALL_FILE  = install -m 644 -p
INSTALL_PROGRAM = install -m 755 -p
INSTALL_DIR   = cp -f -R
DEL_FILE      = rm -f
SYMLINK       = ln -f -s
DEL_DIR       = rmdir
MOVE          = mv -f
SUBTARGETS    =  \
		release \
		debug


release: FORCE
	$(MAKE) -f $(MAKEFILE).Release
release-make_first: FORCE
	$(MAKE) -f $(MAKEFILE).Release 
release-all: FORCE
	$(MAKE) -f $(MAKEFILE).Release all
release-clean: FORCE
	$(MAKE) -f $(MAKEFILE).Release clean
release-distclean: FORCE
	$(MAKE) -f $(MAKEFILE).Release distclean
release-install: FORCE
	$(MAKE) -f $(MAKEFILE).Release install
release-uninstall: FORCE
	$(MAKE) -f $(MAKEFILE).Release uninstall
debug: FORCE
	$(MAKE) -f $(MAKEFILE).Debug
debug-make_first: FORCE
	$(MAKE) -f $(MAKEFILE).Debug 
debug-all: FORCE
	$(MAKE) -f $(MAKEFILE).Debug all
debug-clean: FORCE
	$(MAKE) -f $(MAKEFILE).Debug clean
debug-distclean: FORCE
	$(MAKE) -f $(MAKEFILE).Debug distclean
debug-install: FORCE
	$(MAKE) -f $(MAKEFILE).Debug install
debug-uninstall: FORCE
	$(MAKE) -f $(MAKEFILE).Debug uninstall

Makefile: Vigil_3G.pro /opt/mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/win32-g++/qmake.conf /opt/mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/features/spec_pre.prf \
		/opt/mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/qdevice.pri \
		/opt/mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/features/device_config.prf \
		/opt/mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/common/angle.conf \
		/opt/mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/qconfig.pri \
		/opt/mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_lib_bootstrap_private.pri \
		/opt/mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_lib_concurrent.pri \
		/opt/mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_lib_concurrent_private.pri \
		/opt/mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_lib_core.pri \
		/opt/mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_lib_core_private.pri \
		/opt/mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_lib_dbus.pri \
		/opt/mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_lib_dbus_private.pri \
		/opt/mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_lib_gui.pri \
		/opt/mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_lib_gui_private.pri \
		/opt/mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_lib_network.pri \
		/opt/mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_lib_network_private.pri \
		/opt/mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_lib_opengl.pri \
		/opt/mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_lib_opengl_private.pri \
		/opt/mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_lib_openglextensions.pri \
		/opt/mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_lib_openglextensions_private.pri \
		/opt/mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_lib_packetprotocol_private.pri \
		/opt/mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_lib_platformsupport_private.pri \
		/opt/mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_lib_printsupport.pri \
		/opt/mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_lib_printsupport_private.pri \
		/opt/mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_lib_qml.pri \
		/opt/mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_lib_qml_private.pri \
		/opt/mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_lib_qmldebug_private.pri \
		/opt/mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_lib_qmldevtools_private.pri \
		/opt/mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_lib_qmltest.pri \
		/opt/mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_lib_qmltest_private.pri \
		/opt/mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_lib_quick.pri \
		/opt/mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_lib_quick_private.pri \
		/opt/mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_lib_quickparticles_private.pri \
		/opt/mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_lib_quickwidgets.pri \
		/opt/mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_lib_quickwidgets_private.pri \
		/opt/mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_lib_sql.pri \
		/opt/mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_lib_sql_private.pri \
		/opt/mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_lib_svg.pri \
		/opt/mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_lib_svg_private.pri \
		/opt/mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_lib_testlib.pri \
		/opt/mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_lib_testlib_private.pri \
		/opt/mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_lib_widgets.pri \
		/opt/mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_lib_widgets_private.pri \
		/opt/mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_lib_xml.pri \
		/opt/mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_lib_xml_private.pri \
		/opt/mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_lib_xmlpatterns.pri \
		/opt/mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_lib_xmlpatterns_private.pri \
		/opt/mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_lib_zlib_private.pri \
		/opt/mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_plugin_qgenericbearer.pri \
		/opt/mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_plugin_qico.pri \
		/opt/mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_plugin_qminimal.pri \
		/opt/mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_plugin_qmldbg_debugger.pri \
		/opt/mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_plugin_qmldbg_inspector.pri \
		/opt/mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_plugin_qmldbg_local.pri \
		/opt/mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_plugin_qmldbg_native.pri \
		/opt/mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_plugin_qmldbg_profiler.pri \
		/opt/mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_plugin_qmldbg_quickprofiler.pri \
		/opt/mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_plugin_qmldbg_server.pri \
		/opt/mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_plugin_qmldbg_tcp.pri \
		/opt/mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_plugin_qnativewifibearer.pri \
		/opt/mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_plugin_qsqlite.pri \
		/opt/mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_plugin_qsqlmysql.pri \
		/opt/mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_plugin_qsqlodbc.pri \
		/opt/mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_plugin_qsqlpsql.pri \
		/opt/mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_plugin_qsqltds.pri \
		/opt/mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_plugin_qsvg.pri \
		/opt/mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_plugin_qsvgicon.pri \
		/opt/mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_plugin_qtuiotouchplugin.pri \
		/opt/mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_plugin_qwindows.pri \
		/opt/mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_plugin_windowsprintersupport.pri \
		/opt/mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/features/qt_functions.prf \
		/opt/mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/features/qt_config.prf \
		/opt/mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/features/win32/qt_config.prf \
		/opt/mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/win32-g++/qmake.conf \
		/opt/mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/features/spec_post.prf \
		.qmake.stash \
		/opt/mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/features/exclusive_builds.prf \
		/opt/mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/features/default_pre.prf \
		/opt/mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/features/win32/default_pre.prf \
		/opt/mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/features/resolve_config.prf \
		/opt/mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/features/exclusive_builds_post.prf \
		/opt/mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/features/default_post.prf \
		/opt/mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/features/win32/rtti.prf \
		/opt/mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/features/precompile_header.prf \
		/opt/mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/features/warn_on.prf \
		/opt/mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/features/qt.prf \
		/opt/mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/features/resources.prf \
		/opt/mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/features/moc.prf \
		/opt/mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/features/win32/opengl.prf \
		/opt/mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/features/uic.prf \
		/opt/mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/features/file_copies.prf \
		/opt/mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/features/win32/windows.prf \
		/opt/mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/features/testcase_targets.prf \
		/opt/mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/features/exceptions.prf \
		/opt/mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/features/yacc.prf \
		/opt/mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/features/lex.prf \
		Vigil_3G.pro \
		/opt/mxe/usr/x86_64-w64-mingw32.static/qt5/lib/qtmain.prl \
		/opt/mxe/usr/x86_64-w64-mingw32.static/qt5/lib/Qt5Widgets.prl \
		/opt/mxe/usr/x86_64-w64-mingw32.static/qt5/lib/Qt5Gui.prl \
		/opt/mxe/usr/x86_64-w64-mingw32.static/qt5/lib/Qt5Core.prl \
		/opt/mxe/usr/x86_64-w64-mingw32.static/qt5/plugins/platforms/qwindows.prl \
		/opt/mxe/usr/x86_64-w64-mingw32.static/qt5/plugins/imageformats/qico.prl
	$(QMAKE) -o Makefile Vigil_3G.pro
/opt/mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/features/spec_pre.prf:
/opt/mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/qdevice.pri:
/opt/mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/features/device_config.prf:
/opt/mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/common/angle.conf:
/opt/mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/qconfig.pri:
/opt/mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_lib_bootstrap_private.pri:
/opt/mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_lib_concurrent.pri:
/opt/mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_lib_concurrent_private.pri:
/opt/mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_lib_core.pri:
/opt/mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_lib_core_private.pri:
/opt/mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_lib_dbus.pri:
/opt/mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_lib_dbus_private.pri:
/opt/mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_lib_gui.pri:
/opt/mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_lib_gui_private.pri:
/opt/mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_lib_network.pri:
/opt/mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_lib_network_private.pri:
/opt/mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_lib_opengl.pri:
/opt/mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_lib_opengl_private.pri:
/opt/mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_lib_openglextensions.pri:
/opt/mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_lib_openglextensions_private.pri:
/opt/mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_lib_packetprotocol_private.pri:
/opt/mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_lib_platformsupport_private.pri:
/opt/mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_lib_printsupport.pri:
/opt/mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_lib_printsupport_private.pri:
/opt/mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_lib_qml.pri:
/opt/mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_lib_qml_private.pri:
/opt/mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_lib_qmldebug_private.pri:
/opt/mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_lib_qmldevtools_private.pri:
/opt/mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_lib_qmltest.pri:
/opt/mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_lib_qmltest_private.pri:
/opt/mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_lib_quick.pri:
/opt/mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_lib_quick_private.pri:
/opt/mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_lib_quickparticles_private.pri:
/opt/mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_lib_quickwidgets.pri:
/opt/mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_lib_quickwidgets_private.pri:
/opt/mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_lib_sql.pri:
/opt/mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_lib_sql_private.pri:
/opt/mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_lib_svg.pri:
/opt/mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_lib_svg_private.pri:
/opt/mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_lib_testlib.pri:
/opt/mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_lib_testlib_private.pri:
/opt/mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_lib_widgets.pri:
/opt/mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_lib_widgets_private.pri:
/opt/mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_lib_xml.pri:
/opt/mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_lib_xml_private.pri:
/opt/mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_lib_xmlpatterns.pri:
/opt/mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_lib_xmlpatterns_private.pri:
/opt/mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_lib_zlib_private.pri:
/opt/mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_plugin_qgenericbearer.pri:
/opt/mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_plugin_qico.pri:
/opt/mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_plugin_qminimal.pri:
/opt/mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_plugin_qmldbg_debugger.pri:
/opt/mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_plugin_qmldbg_inspector.pri:
/opt/mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_plugin_qmldbg_local.pri:
/opt/mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_plugin_qmldbg_native.pri:
/opt/mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_plugin_qmldbg_profiler.pri:
/opt/mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_plugin_qmldbg_quickprofiler.pri:
/opt/mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_plugin_qmldbg_server.pri:
/opt/mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_plugin_qmldbg_tcp.pri:
/opt/mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_plugin_qnativewifibearer.pri:
/opt/mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_plugin_qsqlite.pri:
/opt/mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_plugin_qsqlmysql.pri:
/opt/mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_plugin_qsqlodbc.pri:
/opt/mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_plugin_qsqlpsql.pri:
/opt/mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_plugin_qsqltds.pri:
/opt/mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_plugin_qsvg.pri:
/opt/mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_plugin_qsvgicon.pri:
/opt/mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_plugin_qtuiotouchplugin.pri:
/opt/mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_plugin_qwindows.pri:
/opt/mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/modules/qt_plugin_windowsprintersupport.pri:
/opt/mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/features/qt_functions.prf:
/opt/mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/features/qt_config.prf:
/opt/mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/features/win32/qt_config.prf:
/opt/mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/win32-g++/qmake.conf:
/opt/mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/features/spec_post.prf:
.qmake.stash:
/opt/mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/features/exclusive_builds.prf:
/opt/mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/features/default_pre.prf:
/opt/mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/features/win32/default_pre.prf:
/opt/mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/features/resolve_config.prf:
/opt/mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/features/exclusive_builds_post.prf:
/opt/mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/features/default_post.prf:
/opt/mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/features/win32/rtti.prf:
/opt/mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/features/precompile_header.prf:
/opt/mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/features/warn_on.prf:
/opt/mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/features/qt.prf:
/opt/mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/features/resources.prf:
/opt/mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/features/moc.prf:
/opt/mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/features/win32/opengl.prf:
/opt/mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/features/uic.prf:
/opt/mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/features/file_copies.prf:
/opt/mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/features/win32/windows.prf:
/opt/mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/features/testcase_targets.prf:
/opt/mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/features/exceptions.prf:
/opt/mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/features/yacc.prf:
/opt/mxe/usr/x86_64-w64-mingw32.static/qt5/mkspecs/features/lex.prf:
Vigil_3G.pro:
/opt/mxe/usr/x86_64-w64-mingw32.static/qt5/lib/qtmain.prl:
/opt/mxe/usr/x86_64-w64-mingw32.static/qt5/lib/Qt5Widgets.prl:
/opt/mxe/usr/x86_64-w64-mingw32.static/qt5/lib/Qt5Gui.prl:
/opt/mxe/usr/x86_64-w64-mingw32.static/qt5/lib/Qt5Core.prl:
/opt/mxe/usr/x86_64-w64-mingw32.static/qt5/plugins/platforms/qwindows.prl:
/opt/mxe/usr/x86_64-w64-mingw32.static/qt5/plugins/imageformats/qico.prl:
qmake: FORCE
	@$(QMAKE) -o Makefile Vigil_3G.pro

qmake_all: FORCE

make_first: release-make_first debug-make_first  FORCE
all: release-all debug-all  FORCE
clean: release-clean debug-clean  FORCE
distclean: release-distclean debug-distclean  FORCE
	-$(DEL_FILE) Makefile
	-$(DEL_FILE) /home/ethel/qwt-5.2/test-ethel/Vigil_3G/vigil_3g_plugin_import.cpp .qmake.stash

release-mocclean:
	$(MAKE) -f $(MAKEFILE).Release mocclean
debug-mocclean:
	$(MAKE) -f $(MAKEFILE).Debug mocclean
mocclean: release-mocclean debug-mocclean

release-mocables:
	$(MAKE) -f $(MAKEFILE).Release mocables
debug-mocables:
	$(MAKE) -f $(MAKEFILE).Debug mocables
mocables: release-mocables debug-mocables

check: first

benchmark: first
FORCE:

$(MAKEFILE).Release: Makefile
$(MAKEFILE).Debug: Makefile
