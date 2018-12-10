#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

#include "m_structure.h"
#include "init.h"
#include "operation.h"

#define INFOUTPUT    printf
#define DEBUG    printf
#define INFINPUT scanf

#define FALSE	false
#define TRUE	true

/*main.h  in_____________________________________ main.c begin*/ 
int selectfunction();

void setrandseed();

int firstinit();
/*main.h  in_______________________________________ main.c end*/ 


#endif   //_MAIN_H_
