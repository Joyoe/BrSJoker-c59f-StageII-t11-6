#pragma once

#include <string>

#define MAIN_SOCKET  "d30138f2310a9fb9c54a3e0c21f58591"
#define JAVA_PACKAGE_NAME "com.brightsight.joker"
#define LOGFILE         "/cache/joker.log"
#define UNBLOCKFILE     "/dev/.magisk_unblock"
#define SECURE_DIR      "/data/adb"
#define MODULEROOT      SECURE_DIR "/modules"
#define MODULEUPGRADE   SECURE_DIR "/modules_update"
#define DATABIN         SECURE_DIR "/joker"
#define MAGISKDB        SECURE_DIR "/joker.db"
#define MANAGERAPK      DATABIN "/joker.apk"

// tmpfs paths
extern std::string  MAGISKTMP;
#define INTLROOT    ".joker"
#define MIRRDIR     INTLROOT "/mirror"
#define RULESDIR    MIRRDIR "/sepolicy.rules"
#define BLOCKDIR    INTLROOT "/block"
#define MODULEMNT   INTLROOT "/modules"
#define BBPATH      INTLROOT "/busybox"
#define ROOTOVL     INTLROOT "/rootdir"
#define ROOTMNT     ROOTOVL "/.mount_list"

constexpr const char *applet_names[] = { "jojo", "joyoeprop", "jokerhide", nullptr };
constexpr const char *init_applet[] = { "jokerpolicy", "jojopolicy", nullptr };

#define POST_FS_DATA_WAIT_TIME       40
#define POST_FS_DATA_SCRIPT_MAX_TIME 35

extern int SDK_INT;
#define APP_DATA_DIR (SDK_INT >= 24 ? "/data/user_de" : "/data/user")

// Multi-call entrypoints
int magisk_main(int argc, char *argv[]);
int jokerhide_main(int argc, char *argv[]);
int jokerpolicy_main(int argc, char *argv[]);
int su_client_main(int argc, char *argv[]);
int joyoeprop_main(int argc, char *argv[]);
int app_process_main(int argc, char *argv[]);
