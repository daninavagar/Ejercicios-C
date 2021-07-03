#ifndef __FBD_H__
#define __FBD_H__

#ifdef __cplusplus
extern "C" {
#endif
    void info ();
    void open_fb ();
    void close_fb ();
    void put (int x, int y, char r, char g, char b, char a);

#ifdef __cplusplus
}
#endif

#endif
