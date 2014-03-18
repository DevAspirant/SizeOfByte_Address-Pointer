//
//  main.c
//  SizeOfByte_Address&Pointer
//
//  Created by ammar falmban on 3/18/14.
//  Copyright (c) 2014 SDKaizen.com. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
    int i = 17;
    int *addressOfI = &i;
    
    printf(" i stored it,s value : %d \n",*addressOfI);
    *addressOfI = 89;
    printf(" Now the new value of i : %d \n",i);
    
    /*  SizeOF */
    printf("An integer is %zu bytes \n",sizeof(i));
    printf("A Pointer is %zu bytes \n",sizeof(addressOfI));
    
    return 0;
    
}

