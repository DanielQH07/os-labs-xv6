#ifndef SYSINFO_H
#define SYSINFO_H

struct sysinfo {
    int freemem;    // Tổng bộ nhớ trống
    int nproc;      // Số tiến trình đang chạy
};

#endif
