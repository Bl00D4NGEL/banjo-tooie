#ifndef __BS_KAZTORPEDO_H__
#define __BS_KAZTORPEDO_H__

#include <ultra64.h>

#include "ba/anim.h"
#include "ba/flag.h"
#include "ba/input.h"
#include "ba/physics.h"
#include "ba/yaw.h"
#include "bs/kaz.h"
#include "funcs.h"
#include "player.h"

extern f32 func_800136E4(f32 maybe_yaw);
extern s32 func_8008DF8C(PlayerState *self, s32);
extern f32 func_80092BE8(PlayerState *self);
extern void func_800931AC(PlayerState *self, s32);
extern void func_8009BA9C(PlayerState *self, f32 *);
extern f32 func_8009BB5C(PlayerState *self);
extern void func_8009C128(PlayerState *self, f32[3]);
extern void func_8009DEC0(PlayerState *self, s32, f32, f32, s32, s32);
extern void func_8009DF18(PlayerState *self, s32, f32, s32);
extern void func_8009DF94(PlayerState *self, s32, f32, s32);
extern void func_8009E474(PlayerState *self);
extern void func_8009E4AC(PlayerState *self);
extern void func_8009E55C(PlayerState *self, s32, f32);
extern void func_8009E5A4(PlayerState *self, s32, s32);
extern s32 func_800B5BE4(s32);
extern s32 func_800BABB8(s32, f32[3], f32[3], f32, s32[]);
extern f32 func_800F10B4(f32 value, f32 in_min, f32 in_max, f32 out_min, f32 out_max);
extern f32 func_8009E138(PlayerState *self, s32);
extern void func_8009328C(PlayerState *self, f32);
extern void func_8009B9F0(PlayerState *self, f32);
extern s32 func_8009EA2C();
extern void func_800BA670(s32, s32);
extern void func_800BA77C(s32, s32, s16, s16);
extern f32 func_800F13F0(f32, f32);
extern f32 func_800F1DF4(f32[3], f32[3]);
extern f32 func_800F3780(f32, s32[], s32);
extern void func_800F3BD0(PlayerState *self, s32, f32[3]);

#endif // __BS_KAZTORPEDO_H__