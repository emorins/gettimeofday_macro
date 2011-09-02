#ifndef gettimeofday_macro_H
#define gettimeofday_macro_H

#define start() struct timeval ts;gettimeofday(&ts, NULL)
#define end()   struct timeval te;gettimeofday(&te, NULL);double startTime=ts.tv_sec+ts.tv_usec*1e-6;double endTime = te.tv_sec+te.tv_usec*1e-6
#define TIME    endTime - startTime
