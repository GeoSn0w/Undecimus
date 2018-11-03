//
//  mx_common.c
//  Undecimus
//
//  Created by GeoSn0w on 11/3/18.
//  Copyright © 2018 Pwn20wnd. All rights reserved.
//
// Had to make it a special file because it would conflict otherwise and the linker begone thot!

#include "mx_common.h"

int message_size_for_kalloc_size(int kalloc_size) {
    return ((3*kalloc_size)/4) - 0x74;
}
