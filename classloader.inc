#if defined _classloader_included
    #endinput
#endif
#define _classloader_included

#pragma reqlib classloader

native cl_registerClassLoader(const callback[], const extension[], ...);
native cl_loadClasses(const path[], const bool: recursive = true);

stock cl_loadClass(const path[]) {
  cl_loadClasses(path, false);
}
