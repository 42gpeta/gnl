==387739== Invalid write of size 1
==387739==    at 0x40734C: get_next_line (get_next_line.c:38)
==387739==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387739==    by 0x404BC6: main (mandatory.cpp:25)
==387739==  Address 0x4de329f is 1 bytes before a block of size 2 alloc'd
==387739==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387739==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387739==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387739==    by 0x404BC6: main (mandatory.cpp:25)
==387739== 
==387739== Conditional jump or move depends on uninitialised value(s)
==387739==    at 0x4074ED: ft_strlen (get_next_line_utils.c:43)
==387739==    by 0x407523: ft_strjoin (get_next_line_utils.c:59)
==387739==    by 0x40738B: get_next_line (get_next_line.c:48)
==387739==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387739==    by 0x404BC6: main (mandatory.cpp:25)
==387739== 
==387739== Conditional jump or move depends on uninitialised value(s)
==387739==    at 0x4075E0: ft_strjoin (get_next_line_utils.c:75)
==387739==    by 0x40738B: get_next_line (get_next_line.c:48)
==387739==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387739==    by 0x404BC6: main (mandatory.cpp:25)
==387739== 
==387739== Invalid write of size 1
==387739==    at 0x40734C: get_next_line (get_next_line.c:38)
==387739==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387739==    by 0x404BE8: main (mandatory.cpp:25)
==387739==  Address 0x4de43cf is 1 bytes before a block of size 2 alloc'd
==387739==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387739==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387739==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387739==    by 0x404BE8: main (mandatory.cpp:25)
==387739== 
==387739== Conditional jump or move depends on uninitialised value(s)
==387739==    at 0x4075E0: ft_strjoin (get_next_line_utils.c:75)
==387739==    by 0x40738B: get_next_line (get_next_line.c:48)
==387739==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387739==    by 0x404BE8: main (mandatory.cpp:25)
==387739== 
==387739== 1 bytes in 1 blocks are definitely lost in loss record 2 of 3
==387739==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387739==    by 0x407364: get_next_line (get_next_line.c:43)
==387739==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387739==    by 0x404BC6: main (mandatory.cpp:25)
==387739== 
==387739== 1 bytes in 1 blocks are definitely lost in loss record 3 of 3
==387739==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387739==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==387739==    by 0x40738B: get_next_line (get_next_line.c:48)
==387739==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387739==    by 0x404BC6: main (mandatory.cpp:25)
==387739== 
==387742== Invalid read of size 1
==387742==    at 0x4074E8: ft_strlen (get_next_line_utils.c:43)
==387742==    by 0x407515: ft_strjoin (get_next_line_utils.c:59)
==387742==    by 0x40738B: get_next_line (get_next_line.c:48)
==387742==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387742==    by 0x404E6F: main (mandatory.cpp:31)
==387742==  Address 0x4de4690 is 0 bytes inside a block of size 1 free'd
==387742==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387742==    by 0x407430: get_next_line (get_next_line.c:67)
==387742==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387742==    by 0x404E63: main (mandatory.cpp:31)
==387742==  Block was alloc'd at
==387742==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387742==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==387742==    by 0x40738B: get_next_line (get_next_line.c:48)
==387742==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387742==    by 0x404E63: main (mandatory.cpp:31)
==387742== 
==387742== Invalid read of size 1
==387742==    at 0x40758F: ft_strjoin (get_next_line_utils.c:68)
==387742==    by 0x40738B: get_next_line (get_next_line.c:48)
==387742==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387742==    by 0x404E6F: main (mandatory.cpp:31)
==387742==  Address 0x4de4690 is 0 bytes inside a block of size 1 free'd
==387742==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387742==    by 0x407430: get_next_line (get_next_line.c:67)
==387742==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387742==    by 0x404E63: main (mandatory.cpp:31)
==387742==  Block was alloc'd at
==387742==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387742==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==387742==    by 0x40738B: get_next_line (get_next_line.c:48)
==387742==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387742==    by 0x404E63: main (mandatory.cpp:31)
==387742== 
==387742== 1 bytes in 1 blocks are definitely lost in loss record 1 of 1
==387742==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387742==    by 0x407364: get_next_line (get_next_line.c:43)
==387742==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387742==    by 0x404E63: main (mandatory.cpp:31)
==387742== 
==387764== Invalid read of size 1
==387764==    at 0x407715: f_del_front_bn (get_next_line_utils.c:163)
==387764==    by 0x4073CD: get_next_line (get_next_line.c:52)
==387764==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387764==    by 0x40508F: main (mandatory.cpp:36)
==387764==  Address 0x4de4690 is 0 bytes inside a block of size 2 free'd
==387764==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387764==    by 0x4076F3: f_search_bn (get_next_line_utils.c:119)
==387764==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387764==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387764==    by 0x40508F: main (mandatory.cpp:36)
==387764==  Block was alloc'd at
==387764==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387764==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==387764==    by 0x40738B: get_next_line (get_next_line.c:48)
==387764==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387764==    by 0x40508F: main (mandatory.cpp:36)
==387764== 
==387764== Invalid free() / delete / delete[] / realloc()
==387764==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387764==    by 0x4073E0: get_next_line (get_next_line.c:53)
==387764==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387764==    by 0x40508F: main (mandatory.cpp:36)
==387764==  Address 0x4de45f0 is 0 bytes inside a block of size 2 free'd
==387764==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387764==    by 0x407602: ft_strjoin (get_next_line_utils.c:82)
==387764==    by 0x40738B: get_next_line (get_next_line.c:48)
==387764==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387764==    by 0x40508F: main (mandatory.cpp:36)
==387764==  Block was alloc'd at
==387764==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387764==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387764==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387764==    by 0x40508F: main (mandatory.cpp:36)
==387764== 
==387764== Invalid read of size 1
==387764==    at 0x4074E8: ft_strlen (get_next_line_utils.c:43)
==387764==    by 0x407515: ft_strjoin (get_next_line_utils.c:59)
==387764==    by 0x40738B: get_next_line (get_next_line.c:48)
==387764==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387764==    by 0x40509B: main (mandatory.cpp:36)
==387764==  Address 0x4de4691 is 1 bytes inside a block of size 2 free'd
==387764==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387764==    by 0x4076F3: f_search_bn (get_next_line_utils.c:119)
==387764==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387764==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387764==    by 0x40508F: main (mandatory.cpp:36)
==387764==  Block was alloc'd at
==387764==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387764==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==387764==    by 0x40738B: get_next_line (get_next_line.c:48)
==387764==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387764==    by 0x40508F: main (mandatory.cpp:36)
==387764== 
==387764== Invalid read of size 1
==387764==    at 0x40758F: ft_strjoin (get_next_line_utils.c:68)
==387764==    by 0x40738B: get_next_line (get_next_line.c:48)
==387764==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387764==    by 0x40509B: main (mandatory.cpp:36)
==387764==  Address 0x4de4691 is 1 bytes inside a block of size 2 free'd
==387764==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387764==    by 0x4076F3: f_search_bn (get_next_line_utils.c:119)
==387764==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387764==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387764==    by 0x40508F: main (mandatory.cpp:36)
==387764==  Block was alloc'd at
==387764==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387764==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==387764==    by 0x40738B: get_next_line (get_next_line.c:48)
==387764==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387764==    by 0x40508F: main (mandatory.cpp:36)
==387764== 
==387764== 1 bytes in 1 blocks are definitely lost in loss record 1 of 1
==387764==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387764==    by 0x407364: get_next_line (get_next_line.c:43)
==387764==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387764==    by 0x40508F: main (mandatory.cpp:36)
==387764== 
==387786== Syscall param read(buf) points to unaddressable byte(s)
==387786==    at 0x4CB8992: read (read.c:26)
==387786==    by 0x40733B: get_next_line (get_next_line.c:37)
==387786==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387786==    by 0x4052BB: main (mandatory.cpp:41)
==387786==  Address 0x4de4900 is 0 bytes inside a block of size 2 free'd
==387786==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387786==    by 0x407602: ft_strjoin (get_next_line_utils.c:82)
==387786==    by 0x40738B: get_next_line (get_next_line.c:48)
==387786==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387786==    by 0x4052BB: main (mandatory.cpp:41)
==387786==  Block was alloc'd at
==387786==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387786==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387786==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387786==    by 0x4052BB: main (mandatory.cpp:41)
==387786== 
==387786== Invalid write of size 1
==387786==    at 0x40734C: get_next_line (get_next_line.c:38)
==387786==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387786==    by 0x4052BB: main (mandatory.cpp:41)
==387786==  Address 0x4de4901 is 1 bytes inside a block of size 2 free'd
==387786==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387786==    by 0x407602: ft_strjoin (get_next_line_utils.c:82)
==387786==    by 0x40738B: get_next_line (get_next_line.c:48)
==387786==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387786==    by 0x4052BB: main (mandatory.cpp:41)
==387786==  Block was alloc'd at
==387786==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387786==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387786==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387786==    by 0x4052BB: main (mandatory.cpp:41)
==387786== 
==387786== Invalid read of size 1
==387786==    at 0x4074E8: ft_strlen (get_next_line_utils.c:43)
==387786==    by 0x407523: ft_strjoin (get_next_line_utils.c:59)
==387786==    by 0x40738B: get_next_line (get_next_line.c:48)
==387786==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387786==    by 0x4052BB: main (mandatory.cpp:41)
==387786==  Address 0x4de4901 is 1 bytes inside a block of size 2 free'd
==387786==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387786==    by 0x407602: ft_strjoin (get_next_line_utils.c:82)
==387786==    by 0x40738B: get_next_line (get_next_line.c:48)
==387786==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387786==    by 0x4052BB: main (mandatory.cpp:41)
==387786==  Block was alloc'd at
==387786==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387786==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387786==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387786==    by 0x4052BB: main (mandatory.cpp:41)
==387786== 
==387786== Invalid read of size 1
==387786==    at 0x4075DB: ft_strjoin (get_next_line_utils.c:75)
==387786==    by 0x40738B: get_next_line (get_next_line.c:48)
==387786==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387786==    by 0x4052BB: main (mandatory.cpp:41)
==387786==  Address 0x4de4901 is 1 bytes inside a block of size 2 free'd
==387786==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387786==    by 0x407602: ft_strjoin (get_next_line_utils.c:82)
==387786==    by 0x40738B: get_next_line (get_next_line.c:48)
==387786==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387786==    by 0x4052BB: main (mandatory.cpp:41)
==387786==  Block was alloc'd at
==387786==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387786==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387786==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387786==    by 0x4052BB: main (mandatory.cpp:41)
==387786== 
==387786== Invalid free() / delete / delete[] / realloc()
==387786==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387786==    by 0x407602: ft_strjoin (get_next_line_utils.c:82)
==387786==    by 0x40738B: get_next_line (get_next_line.c:48)
==387786==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387786==    by 0x4052BB: main (mandatory.cpp:41)
==387786==  Address 0x4de4900 is 0 bytes inside a block of size 2 free'd
==387786==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387786==    by 0x407602: ft_strjoin (get_next_line_utils.c:82)
==387786==    by 0x40738B: get_next_line (get_next_line.c:48)
==387786==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387786==    by 0x4052BB: main (mandatory.cpp:41)
==387786==  Block was alloc'd at
==387786==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387786==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387786==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387786==    by 0x4052BB: main (mandatory.cpp:41)
==387786== 
==387786== Invalid read of size 1
==387786==    at 0x484FBD4: strcmp (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387786==    by 0x402D0A: gnl(int, char const*) (gnl.cpp:24)
==387786==    by 0x4052BB: main (mandatory.cpp:41)
==387786==  Address 0x0 is not stack'd, malloc'd or (recently) free'd
==387786== 
==387786== 1 bytes in 1 blocks are definitely lost in loss record 1 of 2
==387786==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387786==    by 0x407364: get_next_line (get_next_line.c:43)
==387786==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387786==    by 0x4052BB: main (mandatory.cpp:41)
==387786== 
==387786== 902 bytes in 41 blocks are definitely lost in loss record 2 of 2
==387786==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387786==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==387786==    by 0x40738B: get_next_line (get_next_line.c:48)
==387786==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387786==    by 0x4052BB: main (mandatory.cpp:41)
==387786== 
==387789== Syscall param read(buf) points to unaddressable byte(s)
==387789==    at 0x4CB8992: read (read.c:26)
==387789==    by 0x40733B: get_next_line (get_next_line.c:37)
==387789==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387789==    by 0x4054E7: main (mandatory.cpp:46)
==387789==  Address 0x4de4c10 is 0 bytes inside a block of size 2 free'd
==387789==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387789==    by 0x407602: ft_strjoin (get_next_line_utils.c:82)
==387789==    by 0x40738B: get_next_line (get_next_line.c:48)
==387789==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387789==    by 0x4054E7: main (mandatory.cpp:46)
==387789==  Block was alloc'd at
==387789==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387789==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387789==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387789==    by 0x4054E7: main (mandatory.cpp:46)
==387789== 
==387789== Invalid write of size 1
==387789==    at 0x40734C: get_next_line (get_next_line.c:38)
==387789==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387789==    by 0x4054E7: main (mandatory.cpp:46)
==387789==  Address 0x4de4c11 is 1 bytes inside a block of size 2 free'd
==387789==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387789==    by 0x407602: ft_strjoin (get_next_line_utils.c:82)
==387789==    by 0x40738B: get_next_line (get_next_line.c:48)
==387789==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387789==    by 0x4054E7: main (mandatory.cpp:46)
==387789==  Block was alloc'd at
==387789==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387789==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387789==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387789==    by 0x4054E7: main (mandatory.cpp:46)
==387789== 
==387789== Invalid read of size 1
==387789==    at 0x4074E8: ft_strlen (get_next_line_utils.c:43)
==387789==    by 0x407523: ft_strjoin (get_next_line_utils.c:59)
==387789==    by 0x40738B: get_next_line (get_next_line.c:48)
==387789==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387789==    by 0x4054E7: main (mandatory.cpp:46)
==387789==  Address 0x4de4c11 is 1 bytes inside a block of size 2 free'd
==387789==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387789==    by 0x407602: ft_strjoin (get_next_line_utils.c:82)
==387789==    by 0x40738B: get_next_line (get_next_line.c:48)
==387789==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387789==    by 0x4054E7: main (mandatory.cpp:46)
==387789==  Block was alloc'd at
==387789==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387789==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387789==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387789==    by 0x4054E7: main (mandatory.cpp:46)
==387789== 
==387789== Invalid read of size 1
==387789==    at 0x4075DB: ft_strjoin (get_next_line_utils.c:75)
==387789==    by 0x40738B: get_next_line (get_next_line.c:48)
==387789==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387789==    by 0x4054E7: main (mandatory.cpp:46)
==387789==  Address 0x4de4c11 is 1 bytes inside a block of size 2 free'd
==387789==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387789==    by 0x407602: ft_strjoin (get_next_line_utils.c:82)
==387789==    by 0x40738B: get_next_line (get_next_line.c:48)
==387789==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387789==    by 0x4054E7: main (mandatory.cpp:46)
==387789==  Block was alloc'd at
==387789==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387789==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387789==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387789==    by 0x4054E7: main (mandatory.cpp:46)
==387789== 
==387789== Invalid free() / delete / delete[] / realloc()
==387789==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387789==    by 0x407602: ft_strjoin (get_next_line_utils.c:82)
==387789==    by 0x40738B: get_next_line (get_next_line.c:48)
==387789==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387789==    by 0x4054E7: main (mandatory.cpp:46)
==387789==  Address 0x4de4c10 is 0 bytes inside a block of size 2 free'd
==387789==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387789==    by 0x407602: ft_strjoin (get_next_line_utils.c:82)
==387789==    by 0x40738B: get_next_line (get_next_line.c:48)
==387789==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387789==    by 0x4054E7: main (mandatory.cpp:46)
==387789==  Block was alloc'd at
==387789==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387789==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387789==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387789==    by 0x4054E7: main (mandatory.cpp:46)
==387789== 
==387789== Invalid read of size 1
==387789==    at 0x407715: f_del_front_bn (get_next_line_utils.c:163)
==387789==    by 0x4073CD: get_next_line (get_next_line.c:52)
==387789==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387789==    by 0x4054E7: main (mandatory.cpp:46)
==387789==  Address 0x4de5b50 is 0 bytes inside a block of size 42 free'd
==387789==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387789==    by 0x4076F3: f_search_bn (get_next_line_utils.c:119)
==387789==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387789==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387789==    by 0x4054E7: main (mandatory.cpp:46)
==387789==  Block was alloc'd at
==387789==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387789==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==387789==    by 0x40738B: get_next_line (get_next_line.c:48)
==387789==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387789==    by 0x4054E7: main (mandatory.cpp:46)
==387789== 
==387789== Invalid free() / delete / delete[] / realloc()
==387789==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387789==    by 0x4073E0: get_next_line (get_next_line.c:53)
==387789==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387789==    by 0x4054E7: main (mandatory.cpp:46)
==387789==  Address 0x4de4c10 is 0 bytes inside a block of size 2 free'd
==387789==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387789==    by 0x407602: ft_strjoin (get_next_line_utils.c:82)
==387789==    by 0x40738B: get_next_line (get_next_line.c:48)
==387789==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387789==    by 0x4054E7: main (mandatory.cpp:46)
==387789==  Block was alloc'd at
==387789==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387789==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387789==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387789==    by 0x4054E7: main (mandatory.cpp:46)
==387789== 
==387789== Invalid read of size 1
==387789==    at 0x4074E8: ft_strlen (get_next_line_utils.c:43)
==387789==    by 0x407515: ft_strjoin (get_next_line_utils.c:59)
==387789==    by 0x40738B: get_next_line (get_next_line.c:48)
==387789==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387789==    by 0x4054F9: main (mandatory.cpp:46)
==387789==  Address 0x4de5b79 is 41 bytes inside a block of size 42 free'd
==387789==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387789==    by 0x4076F3: f_search_bn (get_next_line_utils.c:119)
==387789==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387789==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387789==    by 0x4054E7: main (mandatory.cpp:46)
==387789==  Block was alloc'd at
==387789==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387789==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==387789==    by 0x40738B: get_next_line (get_next_line.c:48)
==387789==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387789==    by 0x4054E7: main (mandatory.cpp:46)
==387789== 
==387789== Invalid read of size 1
==387789==    at 0x40758F: ft_strjoin (get_next_line_utils.c:68)
==387789==    by 0x40738B: get_next_line (get_next_line.c:48)
==387789==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387789==    by 0x4054F9: main (mandatory.cpp:46)
==387789==  Address 0x4de5b79 is 41 bytes inside a block of size 42 free'd
==387789==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387789==    by 0x4076F3: f_search_bn (get_next_line_utils.c:119)
==387789==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387789==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387789==    by 0x4054E7: main (mandatory.cpp:46)
==387789==  Block was alloc'd at
==387789==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387789==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==387789==    by 0x40738B: get_next_line (get_next_line.c:48)
==387789==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387789==    by 0x4054E7: main (mandatory.cpp:46)
==387789== 
==387789== Syscall param read(buf) points to unaddressable byte(s)
==387789==    at 0x4CB8992: read (read.c:26)
==387789==    by 0x40733B: get_next_line (get_next_line.c:37)
==387789==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387789==    by 0x4054F9: main (mandatory.cpp:46)
==387789==  Address 0x4de5c30 is 0 bytes inside a block of size 2 free'd
==387789==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387789==    by 0x407602: ft_strjoin (get_next_line_utils.c:82)
==387789==    by 0x40738B: get_next_line (get_next_line.c:48)
==387789==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387789==    by 0x4054F9: main (mandatory.cpp:46)
==387789==  Block was alloc'd at
==387789==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387789==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387789==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387789==    by 0x4054F9: main (mandatory.cpp:46)
==387789== 
==387789== Invalid write of size 1
==387789==    at 0x40734C: get_next_line (get_next_line.c:38)
==387789==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387789==    by 0x4054F9: main (mandatory.cpp:46)
==387789==  Address 0x4de5c30 is 0 bytes inside a block of size 2 free'd
==387789==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387789==    by 0x407602: ft_strjoin (get_next_line_utils.c:82)
==387789==    by 0x40738B: get_next_line (get_next_line.c:48)
==387789==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387789==    by 0x4054F9: main (mandatory.cpp:46)
==387789==  Block was alloc'd at
==387789==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387789==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387789==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387789==    by 0x4054F9: main (mandatory.cpp:46)
==387789== 
==387789== Invalid read of size 1
==387789==    at 0x4075DB: ft_strjoin (get_next_line_utils.c:75)
==387789==    by 0x40738B: get_next_line (get_next_line.c:48)
==387789==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387789==    by 0x4054F9: main (mandatory.cpp:46)
==387789==  Address 0x4de5c30 is 0 bytes inside a block of size 2 free'd
==387789==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387789==    by 0x407602: ft_strjoin (get_next_line_utils.c:82)
==387789==    by 0x40738B: get_next_line (get_next_line.c:48)
==387789==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387789==    by 0x4054F9: main (mandatory.cpp:46)
==387789==  Block was alloc'd at
==387789==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387789==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387789==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387789==    by 0x4054F9: main (mandatory.cpp:46)
==387789== 
==387789== Invalid read of size 1
==387789==    at 0x484FBD4: strcmp (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387789==    by 0x402D0A: gnl(int, char const*) (gnl.cpp:24)
==387789==    by 0x4054F9: main (mandatory.cpp:46)
==387789==  Address 0x0 is not stack'd, malloc'd or (recently) free'd
==387789== 
==387789== 1 bytes in 1 blocks are definitely lost in loss record 1 of 3
==387789==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387789==    by 0x407364: get_next_line (get_next_line.c:43)
==387789==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387789==    by 0x4054E7: main (mandatory.cpp:46)
==387789== 
==387789== 2 bytes in 1 blocks are definitely lost in loss record 2 of 3
==387789==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387789==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==387789==    by 0x40738B: get_next_line (get_next_line.c:48)
==387789==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387789==    by 0x4054F9: main (mandatory.cpp:46)
==387789== 
==387789== 860 bytes in 40 blocks are definitely lost in loss record 3 of 3
==387789==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387789==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==387789==    by 0x40738B: get_next_line (get_next_line.c:48)
==387789==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387789==    by 0x4054E7: main (mandatory.cpp:46)
==387789== 
==387790== Syscall param read(buf) points to unaddressable byte(s)
==387790==    at 0x4CB8992: read (read.c:26)
==387790==    by 0x40733B: get_next_line (get_next_line.c:37)
==387790==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387790==    by 0x405725: main (mandatory.cpp:52)
==387790==  Address 0x4de4f20 is 0 bytes inside a block of size 2 free'd
==387790==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387790==    by 0x407602: ft_strjoin (get_next_line_utils.c:82)
==387790==    by 0x40738B: get_next_line (get_next_line.c:48)
==387790==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387790==    by 0x405725: main (mandatory.cpp:52)
==387790==  Block was alloc'd at
==387790==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387790==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387790==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387790==    by 0x405725: main (mandatory.cpp:52)
==387790== 
==387790== Invalid write of size 1
==387790==    at 0x40734C: get_next_line (get_next_line.c:38)
==387790==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387790==    by 0x405725: main (mandatory.cpp:52)
==387790==  Address 0x4de4f21 is 1 bytes inside a block of size 2 free'd
==387790==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387790==    by 0x407602: ft_strjoin (get_next_line_utils.c:82)
==387790==    by 0x40738B: get_next_line (get_next_line.c:48)
==387790==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387790==    by 0x405725: main (mandatory.cpp:52)
==387790==  Block was alloc'd at
==387790==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387790==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387790==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387790==    by 0x405725: main (mandatory.cpp:52)
==387790== 
==387790== Invalid read of size 1
==387790==    at 0x4074E8: ft_strlen (get_next_line_utils.c:43)
==387790==    by 0x407523: ft_strjoin (get_next_line_utils.c:59)
==387790==    by 0x40738B: get_next_line (get_next_line.c:48)
==387790==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387790==    by 0x405725: main (mandatory.cpp:52)
==387790==  Address 0x4de4f21 is 1 bytes inside a block of size 2 free'd
==387790==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387790==    by 0x407602: ft_strjoin (get_next_line_utils.c:82)
==387790==    by 0x40738B: get_next_line (get_next_line.c:48)
==387790==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387790==    by 0x405725: main (mandatory.cpp:52)
==387790==  Block was alloc'd at
==387790==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387790==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387790==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387790==    by 0x405725: main (mandatory.cpp:52)
==387790== 
==387790== Invalid read of size 1
==387790==    at 0x4075DB: ft_strjoin (get_next_line_utils.c:75)
==387790==    by 0x40738B: get_next_line (get_next_line.c:48)
==387790==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387790==    by 0x405725: main (mandatory.cpp:52)
==387790==  Address 0x4de4f21 is 1 bytes inside a block of size 2 free'd
==387790==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387790==    by 0x407602: ft_strjoin (get_next_line_utils.c:82)
==387790==    by 0x40738B: get_next_line (get_next_line.c:48)
==387790==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387790==    by 0x405725: main (mandatory.cpp:52)
==387790==  Block was alloc'd at
==387790==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387790==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387790==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387790==    by 0x405725: main (mandatory.cpp:52)
==387790== 
==387790== Invalid free() / delete / delete[] / realloc()
==387790==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387790==    by 0x407602: ft_strjoin (get_next_line_utils.c:82)
==387790==    by 0x40738B: get_next_line (get_next_line.c:48)
==387790==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387790==    by 0x405725: main (mandatory.cpp:52)
==387790==  Address 0x4de4f20 is 0 bytes inside a block of size 2 free'd
==387790==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387790==    by 0x407602: ft_strjoin (get_next_line_utils.c:82)
==387790==    by 0x40738B: get_next_line (get_next_line.c:48)
==387790==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387790==    by 0x405725: main (mandatory.cpp:52)
==387790==  Block was alloc'd at
==387790==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387790==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387790==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387790==    by 0x405725: main (mandatory.cpp:52)
==387790== 
==387790== Invalid read of size 1
==387790==    at 0x484FBD4: strcmp (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387790==    by 0x402D0A: gnl(int, char const*) (gnl.cpp:24)
==387790==    by 0x405725: main (mandatory.cpp:52)
==387790==  Address 0x0 is not stack'd, malloc'd or (recently) free'd
==387790== 
==387790== 1 bytes in 1 blocks are definitely lost in loss record 1 of 2
==387790==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387790==    by 0x407364: get_next_line (get_next_line.c:43)
==387790==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387790==    by 0x405725: main (mandatory.cpp:52)
==387790== 
==387790== 945 bytes in 42 blocks are definitely lost in loss record 2 of 2
==387790==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387790==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==387790==    by 0x40738B: get_next_line (get_next_line.c:48)
==387790==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387790==    by 0x405725: main (mandatory.cpp:52)
==387790== 
==387793== Syscall param read(buf) points to unaddressable byte(s)
==387793==    at 0x4CB8992: read (read.c:26)
==387793==    by 0x40733B: get_next_line (get_next_line.c:37)
==387793==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387793==    by 0x405951: main (mandatory.cpp:57)
==387793==  Address 0x4de5230 is 0 bytes inside a block of size 2 free'd
==387793==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387793==    by 0x407602: ft_strjoin (get_next_line_utils.c:82)
==387793==    by 0x40738B: get_next_line (get_next_line.c:48)
==387793==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387793==    by 0x405951: main (mandatory.cpp:57)
==387793==  Block was alloc'd at
==387793==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387793==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387793==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387793==    by 0x405951: main (mandatory.cpp:57)
==387793== 
==387793== Invalid write of size 1
==387793==    at 0x40734C: get_next_line (get_next_line.c:38)
==387793==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387793==    by 0x405951: main (mandatory.cpp:57)
==387793==  Address 0x4de5231 is 1 bytes inside a block of size 2 free'd
==387793==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387793==    by 0x407602: ft_strjoin (get_next_line_utils.c:82)
==387793==    by 0x40738B: get_next_line (get_next_line.c:48)
==387793==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387793==    by 0x405951: main (mandatory.cpp:57)
==387793==  Block was alloc'd at
==387793==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387793==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387793==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387793==    by 0x405951: main (mandatory.cpp:57)
==387793== 
==387793== Invalid read of size 1
==387793==    at 0x4074E8: ft_strlen (get_next_line_utils.c:43)
==387793==    by 0x407523: ft_strjoin (get_next_line_utils.c:59)
==387793==    by 0x40738B: get_next_line (get_next_line.c:48)
==387793==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387793==    by 0x405951: main (mandatory.cpp:57)
==387793==  Address 0x4de5231 is 1 bytes inside a block of size 2 free'd
==387793==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387793==    by 0x407602: ft_strjoin (get_next_line_utils.c:82)
==387793==    by 0x40738B: get_next_line (get_next_line.c:48)
==387793==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387793==    by 0x405951: main (mandatory.cpp:57)
==387793==  Block was alloc'd at
==387793==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387793==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387793==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387793==    by 0x405951: main (mandatory.cpp:57)
==387793== 
==387793== Invalid read of size 1
==387793==    at 0x4075DB: ft_strjoin (get_next_line_utils.c:75)
==387793==    by 0x40738B: get_next_line (get_next_line.c:48)
==387793==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387793==    by 0x405951: main (mandatory.cpp:57)
==387793==  Address 0x4de5231 is 1 bytes inside a block of size 2 free'd
==387793==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387793==    by 0x407602: ft_strjoin (get_next_line_utils.c:82)
==387793==    by 0x40738B: get_next_line (get_next_line.c:48)
==387793==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387793==    by 0x405951: main (mandatory.cpp:57)
==387793==  Block was alloc'd at
==387793==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387793==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387793==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387793==    by 0x405951: main (mandatory.cpp:57)
==387793== 
==387793== Invalid free() / delete / delete[] / realloc()
==387793==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387793==    by 0x407602: ft_strjoin (get_next_line_utils.c:82)
==387793==    by 0x40738B: get_next_line (get_next_line.c:48)
==387793==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387793==    by 0x405951: main (mandatory.cpp:57)
==387793==  Address 0x4de5230 is 0 bytes inside a block of size 2 free'd
==387793==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387793==    by 0x407602: ft_strjoin (get_next_line_utils.c:82)
==387793==    by 0x40738B: get_next_line (get_next_line.c:48)
==387793==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387793==    by 0x405951: main (mandatory.cpp:57)
==387793==  Block was alloc'd at
==387793==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387793==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387793==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387793==    by 0x405951: main (mandatory.cpp:57)
==387793== 
==387793== Invalid read of size 1
==387793==    at 0x407715: f_del_front_bn (get_next_line_utils.c:163)
==387793==    by 0x4073CD: get_next_line (get_next_line.c:52)
==387793==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387793==    by 0x405951: main (mandatory.cpp:57)
==387793==  Address 0x4de61e0 is 0 bytes inside a block of size 43 free'd
==387793==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387793==    by 0x4076F3: f_search_bn (get_next_line_utils.c:119)
==387793==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387793==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387793==    by 0x405951: main (mandatory.cpp:57)
==387793==  Block was alloc'd at
==387793==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387793==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==387793==    by 0x40738B: get_next_line (get_next_line.c:48)
==387793==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387793==    by 0x405951: main (mandatory.cpp:57)
==387793== 
==387793== Invalid free() / delete / delete[] / realloc()
==387793==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387793==    by 0x4073E0: get_next_line (get_next_line.c:53)
==387793==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387793==    by 0x405951: main (mandatory.cpp:57)
==387793==  Address 0x4de5230 is 0 bytes inside a block of size 2 free'd
==387793==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387793==    by 0x407602: ft_strjoin (get_next_line_utils.c:82)
==387793==    by 0x40738B: get_next_line (get_next_line.c:48)
==387793==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387793==    by 0x405951: main (mandatory.cpp:57)
==387793==  Block was alloc'd at
==387793==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387793==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387793==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387793==    by 0x405951: main (mandatory.cpp:57)
==387793== 
==387793== Invalid read of size 1
==387793==    at 0x4074E8: ft_strlen (get_next_line_utils.c:43)
==387793==    by 0x407515: ft_strjoin (get_next_line_utils.c:59)
==387793==    by 0x40738B: get_next_line (get_next_line.c:48)
==387793==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387793==    by 0x405963: main (mandatory.cpp:57)
==387793==  Address 0x4de620a is 42 bytes inside a block of size 43 free'd
==387793==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387793==    by 0x4076F3: f_search_bn (get_next_line_utils.c:119)
==387793==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387793==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387793==    by 0x405951: main (mandatory.cpp:57)
==387793==  Block was alloc'd at
==387793==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387793==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==387793==    by 0x40738B: get_next_line (get_next_line.c:48)
==387793==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387793==    by 0x405951: main (mandatory.cpp:57)
==387793== 
==387793== Invalid read of size 1
==387793==    at 0x40758F: ft_strjoin (get_next_line_utils.c:68)
==387793==    by 0x40738B: get_next_line (get_next_line.c:48)
==387793==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387793==    by 0x405963: main (mandatory.cpp:57)
==387793==  Address 0x4de620a is 42 bytes inside a block of size 43 free'd
==387793==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387793==    by 0x4076F3: f_search_bn (get_next_line_utils.c:119)
==387793==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387793==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387793==    by 0x405951: main (mandatory.cpp:57)
==387793==  Block was alloc'd at
==387793==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387793==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==387793==    by 0x40738B: get_next_line (get_next_line.c:48)
==387793==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387793==    by 0x405951: main (mandatory.cpp:57)
==387793== 
==387793== Syscall param read(buf) points to unaddressable byte(s)
==387793==    at 0x4CB8992: read (read.c:26)
==387793==    by 0x40733B: get_next_line (get_next_line.c:37)
==387793==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387793==    by 0x405963: main (mandatory.cpp:57)
==387793==  Address 0x4de62c0 is 0 bytes inside a block of size 2 free'd
==387793==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387793==    by 0x407602: ft_strjoin (get_next_line_utils.c:82)
==387793==    by 0x40738B: get_next_line (get_next_line.c:48)
==387793==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387793==    by 0x405963: main (mandatory.cpp:57)
==387793==  Block was alloc'd at
==387793==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387793==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387793==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387793==    by 0x405963: main (mandatory.cpp:57)
==387793== 
==387793== Invalid write of size 1
==387793==    at 0x40734C: get_next_line (get_next_line.c:38)
==387793==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387793==    by 0x405963: main (mandatory.cpp:57)
==387793==  Address 0x4de62c0 is 0 bytes inside a block of size 2 free'd
==387793==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387793==    by 0x407602: ft_strjoin (get_next_line_utils.c:82)
==387793==    by 0x40738B: get_next_line (get_next_line.c:48)
==387793==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387793==    by 0x405963: main (mandatory.cpp:57)
==387793==  Block was alloc'd at
==387793==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387793==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387793==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387793==    by 0x405963: main (mandatory.cpp:57)
==387793== 
==387793== Invalid read of size 1
==387793==    at 0x4075DB: ft_strjoin (get_next_line_utils.c:75)
==387793==    by 0x40738B: get_next_line (get_next_line.c:48)
==387793==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387793==    by 0x405963: main (mandatory.cpp:57)
==387793==  Address 0x4de62c0 is 0 bytes inside a block of size 2 free'd
==387793==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387793==    by 0x407602: ft_strjoin (get_next_line_utils.c:82)
==387793==    by 0x40738B: get_next_line (get_next_line.c:48)
==387793==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387793==    by 0x405963: main (mandatory.cpp:57)
==387793==  Block was alloc'd at
==387793==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387793==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387793==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387793==    by 0x405963: main (mandatory.cpp:57)
==387793== 
==387793== Invalid read of size 1
==387793==    at 0x484FBD4: strcmp (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387793==    by 0x402D0A: gnl(int, char const*) (gnl.cpp:24)
==387793==    by 0x405963: main (mandatory.cpp:57)
==387793==  Address 0x0 is not stack'd, malloc'd or (recently) free'd
==387793== 
==387793== 1 bytes in 1 blocks are definitely lost in loss record 1 of 3
==387793==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387793==    by 0x407364: get_next_line (get_next_line.c:43)
==387793==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387793==    by 0x405951: main (mandatory.cpp:57)
==387793== 
==387793== 2 bytes in 1 blocks are definitely lost in loss record 2 of 3
==387793==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387793==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==387793==    by 0x40738B: get_next_line (get_next_line.c:48)
==387793==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387793==    by 0x405963: main (mandatory.cpp:57)
==387793== 
==387793== 902 bytes in 41 blocks are definitely lost in loss record 3 of 3
==387793==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387793==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==387793==    by 0x40738B: get_next_line (get_next_line.c:48)
==387793==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387793==    by 0x405951: main (mandatory.cpp:57)
==387793== 
==387795== Syscall param read(buf) points to unaddressable byte(s)
==387795==    at 0x4CB8992: read (read.c:26)
==387795==    by 0x40733B: get_next_line (get_next_line.c:37)
==387795==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387795==    by 0x405B99: main (mandatory.cpp:68)
==387795==  Address 0x4de5540 is 0 bytes inside a block of size 2 free'd
==387795==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387795==    by 0x407602: ft_strjoin (get_next_line_utils.c:82)
==387795==    by 0x40738B: get_next_line (get_next_line.c:48)
==387795==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387795==    by 0x405B99: main (mandatory.cpp:68)
==387795==  Block was alloc'd at
==387795==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387795==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387795==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387795==    by 0x405B99: main (mandatory.cpp:68)
==387795== 
==387795== Invalid write of size 1
==387795==    at 0x40734C: get_next_line (get_next_line.c:38)
==387795==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387795==    by 0x405B99: main (mandatory.cpp:68)
==387795==  Address 0x4de5541 is 1 bytes inside a block of size 2 free'd
==387795==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387795==    by 0x407602: ft_strjoin (get_next_line_utils.c:82)
==387795==    by 0x40738B: get_next_line (get_next_line.c:48)
==387795==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387795==    by 0x405B99: main (mandatory.cpp:68)
==387795==  Block was alloc'd at
==387795==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387795==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387795==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387795==    by 0x405B99: main (mandatory.cpp:68)
==387795== 
==387795== Invalid read of size 1
==387795==    at 0x4074E8: ft_strlen (get_next_line_utils.c:43)
==387795==    by 0x407523: ft_strjoin (get_next_line_utils.c:59)
==387795==    by 0x40738B: get_next_line (get_next_line.c:48)
==387795==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387795==    by 0x405B99: main (mandatory.cpp:68)
==387795==  Address 0x4de5541 is 1 bytes inside a block of size 2 free'd
==387795==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387795==    by 0x407602: ft_strjoin (get_next_line_utils.c:82)
==387795==    by 0x40738B: get_next_line (get_next_line.c:48)
==387795==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387795==    by 0x405B99: main (mandatory.cpp:68)
==387795==  Block was alloc'd at
==387795==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387795==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387795==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387795==    by 0x405B99: main (mandatory.cpp:68)
==387795== 
==387795== Invalid read of size 1
==387795==    at 0x4075DB: ft_strjoin (get_next_line_utils.c:75)
==387795==    by 0x40738B: get_next_line (get_next_line.c:48)
==387795==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387795==    by 0x405B99: main (mandatory.cpp:68)
==387795==  Address 0x4de5541 is 1 bytes inside a block of size 2 free'd
==387795==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387795==    by 0x407602: ft_strjoin (get_next_line_utils.c:82)
==387795==    by 0x40738B: get_next_line (get_next_line.c:48)
==387795==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387795==    by 0x405B99: main (mandatory.cpp:68)
==387795==  Block was alloc'd at
==387795==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387795==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387795==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387795==    by 0x405B99: main (mandatory.cpp:68)
==387795== 
==387795== Invalid free() / delete / delete[] / realloc()
==387795==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387795==    by 0x407602: ft_strjoin (get_next_line_utils.c:82)
==387795==    by 0x40738B: get_next_line (get_next_line.c:48)
==387795==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387795==    by 0x405B99: main (mandatory.cpp:68)
==387795==  Address 0x4de5540 is 0 bytes inside a block of size 2 free'd
==387795==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387795==    by 0x407602: ft_strjoin (get_next_line_utils.c:82)
==387795==    by 0x40738B: get_next_line (get_next_line.c:48)
==387795==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387795==    by 0x405B99: main (mandatory.cpp:68)
==387795==  Block was alloc'd at
==387795==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387795==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387795==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387795==    by 0x405B99: main (mandatory.cpp:68)
==387795== 
==387795== Invalid read of size 1
==387795==    at 0x484FBD4: strcmp (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387795==    by 0x402D0A: gnl(int, char const*) (gnl.cpp:24)
==387795==    by 0x405B99: main (mandatory.cpp:68)
==387795==  Address 0x0 is not stack'd, malloc'd or (recently) free'd
==387795== 
==387795== 1 bytes in 1 blocks are definitely lost in loss record 1 of 2
==387795==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387795==    by 0x407364: get_next_line (get_next_line.c:43)
==387795==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387795==    by 0x405B99: main (mandatory.cpp:68)
==387795== 
==387795== 989 bytes in 43 blocks are definitely lost in loss record 2 of 2
==387795==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387795==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==387795==    by 0x40738B: get_next_line (get_next_line.c:48)
==387795==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387795==    by 0x405B99: main (mandatory.cpp:68)
==387795== 
==387801== Syscall param read(buf) points to unaddressable byte(s)
==387801==    at 0x4CB8992: read (read.c:26)
==387801==    by 0x40733B: get_next_line (get_next_line.c:37)
==387801==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387801==    by 0x405DC5: main (mandatory.cpp:73)
==387801==  Address 0x4de5850 is 0 bytes inside a block of size 2 free'd
==387801==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387801==    by 0x407602: ft_strjoin (get_next_line_utils.c:82)
==387801==    by 0x40738B: get_next_line (get_next_line.c:48)
==387801==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387801==    by 0x405DC5: main (mandatory.cpp:73)
==387801==  Block was alloc'd at
==387801==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387801==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387801==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387801==    by 0x405DC5: main (mandatory.cpp:73)
==387801== 
==387801== Invalid write of size 1
==387801==    at 0x40734C: get_next_line (get_next_line.c:38)
==387801==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387801==    by 0x405DC5: main (mandatory.cpp:73)
==387801==  Address 0x4de5851 is 1 bytes inside a block of size 2 free'd
==387801==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387801==    by 0x407602: ft_strjoin (get_next_line_utils.c:82)
==387801==    by 0x40738B: get_next_line (get_next_line.c:48)
==387801==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387801==    by 0x405DC5: main (mandatory.cpp:73)
==387801==  Block was alloc'd at
==387801==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387801==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387801==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387801==    by 0x405DC5: main (mandatory.cpp:73)
==387801== 
==387801== Invalid read of size 1
==387801==    at 0x4074E8: ft_strlen (get_next_line_utils.c:43)
==387801==    by 0x407523: ft_strjoin (get_next_line_utils.c:59)
==387801==    by 0x40738B: get_next_line (get_next_line.c:48)
==387801==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387801==    by 0x405DC5: main (mandatory.cpp:73)
==387801==  Address 0x4de5851 is 1 bytes inside a block of size 2 free'd
==387801==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387801==    by 0x407602: ft_strjoin (get_next_line_utils.c:82)
==387801==    by 0x40738B: get_next_line (get_next_line.c:48)
==387801==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387801==    by 0x405DC5: main (mandatory.cpp:73)
==387801==  Block was alloc'd at
==387801==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387801==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387801==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387801==    by 0x405DC5: main (mandatory.cpp:73)
==387801== 
==387801== Invalid read of size 1
==387801==    at 0x4075DB: ft_strjoin (get_next_line_utils.c:75)
==387801==    by 0x40738B: get_next_line (get_next_line.c:48)
==387801==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387801==    by 0x405DC5: main (mandatory.cpp:73)
==387801==  Address 0x4de5851 is 1 bytes inside a block of size 2 free'd
==387801==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387801==    by 0x407602: ft_strjoin (get_next_line_utils.c:82)
==387801==    by 0x40738B: get_next_line (get_next_line.c:48)
==387801==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387801==    by 0x405DC5: main (mandatory.cpp:73)
==387801==  Block was alloc'd at
==387801==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387801==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387801==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387801==    by 0x405DC5: main (mandatory.cpp:73)
==387801== 
==387801== Invalid free() / delete / delete[] / realloc()
==387801==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387801==    by 0x407602: ft_strjoin (get_next_line_utils.c:82)
==387801==    by 0x40738B: get_next_line (get_next_line.c:48)
==387801==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387801==    by 0x405DC5: main (mandatory.cpp:73)
==387801==  Address 0x4de5850 is 0 bytes inside a block of size 2 free'd
==387801==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387801==    by 0x407602: ft_strjoin (get_next_line_utils.c:82)
==387801==    by 0x40738B: get_next_line (get_next_line.c:48)
==387801==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387801==    by 0x405DC5: main (mandatory.cpp:73)
==387801==  Block was alloc'd at
==387801==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387801==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387801==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387801==    by 0x405DC5: main (mandatory.cpp:73)
==387801== 
==387801== Invalid read of size 1
==387801==    at 0x407715: f_del_front_bn (get_next_line_utils.c:163)
==387801==    by 0x4073CD: get_next_line (get_next_line.c:52)
==387801==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387801==    by 0x405DC5: main (mandatory.cpp:73)
==387801==  Address 0x4de6870 is 0 bytes inside a block of size 44 free'd
==387801==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387801==    by 0x4076F3: f_search_bn (get_next_line_utils.c:119)
==387801==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387801==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387801==    by 0x405DC5: main (mandatory.cpp:73)
==387801==  Block was alloc'd at
==387801==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387801==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==387801==    by 0x40738B: get_next_line (get_next_line.c:48)
==387801==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387801==    by 0x405DC5: main (mandatory.cpp:73)
==387801== 
==387801== Invalid free() / delete / delete[] / realloc()
==387801==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387801==    by 0x4073E0: get_next_line (get_next_line.c:53)
==387801==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387801==    by 0x405DC5: main (mandatory.cpp:73)
==387801==  Address 0x4de5850 is 0 bytes inside a block of size 2 free'd
==387801==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387801==    by 0x407602: ft_strjoin (get_next_line_utils.c:82)
==387801==    by 0x40738B: get_next_line (get_next_line.c:48)
==387801==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387801==    by 0x405DC5: main (mandatory.cpp:73)
==387801==  Block was alloc'd at
==387801==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387801==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387801==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387801==    by 0x405DC5: main (mandatory.cpp:73)
==387801== 
==387801== Invalid read of size 1
==387801==    at 0x4074E8: ft_strlen (get_next_line_utils.c:43)
==387801==    by 0x407515: ft_strjoin (get_next_line_utils.c:59)
==387801==    by 0x40738B: get_next_line (get_next_line.c:48)
==387801==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387801==    by 0x405DD7: main (mandatory.cpp:73)
==387801==  Address 0x4de689b is 43 bytes inside a block of size 44 free'd
==387801==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387801==    by 0x4076F3: f_search_bn (get_next_line_utils.c:119)
==387801==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387801==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387801==    by 0x405DC5: main (mandatory.cpp:73)
==387801==  Block was alloc'd at
==387801==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387801==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==387801==    by 0x40738B: get_next_line (get_next_line.c:48)
==387801==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387801==    by 0x405DC5: main (mandatory.cpp:73)
==387801== 
==387801== Invalid read of size 1
==387801==    at 0x40758F: ft_strjoin (get_next_line_utils.c:68)
==387801==    by 0x40738B: get_next_line (get_next_line.c:48)
==387801==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387801==    by 0x405DD7: main (mandatory.cpp:73)
==387801==  Address 0x4de689b is 43 bytes inside a block of size 44 free'd
==387801==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387801==    by 0x4076F3: f_search_bn (get_next_line_utils.c:119)
==387801==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387801==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387801==    by 0x405DC5: main (mandatory.cpp:73)
==387801==  Block was alloc'd at
==387801==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387801==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==387801==    by 0x40738B: get_next_line (get_next_line.c:48)
==387801==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387801==    by 0x405DC5: main (mandatory.cpp:73)
==387801== 
==387801== Syscall param read(buf) points to unaddressable byte(s)
==387801==    at 0x4CB8992: read (read.c:26)
==387801==    by 0x40733B: get_next_line (get_next_line.c:37)
==387801==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387801==    by 0x405DD7: main (mandatory.cpp:73)
==387801==  Address 0x4de6950 is 0 bytes inside a block of size 2 free'd
==387801==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387801==    by 0x407602: ft_strjoin (get_next_line_utils.c:82)
==387801==    by 0x40738B: get_next_line (get_next_line.c:48)
==387801==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387801==    by 0x405DD7: main (mandatory.cpp:73)
==387801==  Block was alloc'd at
==387801==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387801==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387801==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387801==    by 0x405DD7: main (mandatory.cpp:73)
==387801== 
==387801== Invalid write of size 1
==387801==    at 0x40734C: get_next_line (get_next_line.c:38)
==387801==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387801==    by 0x405DD7: main (mandatory.cpp:73)
==387801==  Address 0x4de6950 is 0 bytes inside a block of size 2 free'd
==387801==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387801==    by 0x407602: ft_strjoin (get_next_line_utils.c:82)
==387801==    by 0x40738B: get_next_line (get_next_line.c:48)
==387801==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387801==    by 0x405DD7: main (mandatory.cpp:73)
==387801==  Block was alloc'd at
==387801==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387801==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387801==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387801==    by 0x405DD7: main (mandatory.cpp:73)
==387801== 
==387801== Invalid read of size 1
==387801==    at 0x4075DB: ft_strjoin (get_next_line_utils.c:75)
==387801==    by 0x40738B: get_next_line (get_next_line.c:48)
==387801==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387801==    by 0x405DD7: main (mandatory.cpp:73)
==387801==  Address 0x4de6950 is 0 bytes inside a block of size 2 free'd
==387801==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387801==    by 0x407602: ft_strjoin (get_next_line_utils.c:82)
==387801==    by 0x40738B: get_next_line (get_next_line.c:48)
==387801==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387801==    by 0x405DD7: main (mandatory.cpp:73)
==387801==  Block was alloc'd at
==387801==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387801==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387801==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387801==    by 0x405DD7: main (mandatory.cpp:73)
==387801== 
==387801== Invalid read of size 1
==387801==    at 0x484FBD4: strcmp (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387801==    by 0x402D0A: gnl(int, char const*) (gnl.cpp:24)
==387801==    by 0x405DD7: main (mandatory.cpp:73)
==387801==  Address 0x0 is not stack'd, malloc'd or (recently) free'd
==387801== 
==387801== 1 bytes in 1 blocks are definitely lost in loss record 1 of 3
==387801==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387801==    by 0x407364: get_next_line (get_next_line.c:43)
==387801==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387801==    by 0x405DC5: main (mandatory.cpp:73)
==387801== 
==387801== 2 bytes in 1 blocks are definitely lost in loss record 2 of 3
==387801==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387801==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==387801==    by 0x40738B: get_next_line (get_next_line.c:48)
==387801==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387801==    by 0x405DD7: main (mandatory.cpp:73)
==387801== 
==387801== 945 bytes in 42 blocks are definitely lost in loss record 3 of 3
==387801==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387801==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==387801==    by 0x40738B: get_next_line (get_next_line.c:48)
==387801==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387801==    by 0x405DC5: main (mandatory.cpp:73)
==387801== 
==387804== Invalid read of size 1
==387804==    at 0x407715: f_del_front_bn (get_next_line_utils.c:163)
==387804==    by 0x4073CD: get_next_line (get_next_line.c:52)
==387804==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387804==    by 0x406003: main (mandatory.cpp:79)
==387804==  Address 0x4de5c00 is 0 bytes inside a block of size 2 free'd
==387804==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387804==    by 0x4076F3: f_search_bn (get_next_line_utils.c:119)
==387804==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387804==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387804==    by 0x406003: main (mandatory.cpp:79)
==387804==  Block was alloc'd at
==387804==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387804==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==387804==    by 0x40738B: get_next_line (get_next_line.c:48)
==387804==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387804==    by 0x406003: main (mandatory.cpp:79)
==387804== 
==387804== Invalid free() / delete / delete[] / realloc()
==387804==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387804==    by 0x4073E0: get_next_line (get_next_line.c:53)
==387804==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387804==    by 0x406003: main (mandatory.cpp:79)
==387804==  Address 0x4de5b60 is 0 bytes inside a block of size 2 free'd
==387804==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387804==    by 0x407602: ft_strjoin (get_next_line_utils.c:82)
==387804==    by 0x40738B: get_next_line (get_next_line.c:48)
==387804==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387804==    by 0x406003: main (mandatory.cpp:79)
==387804==  Block was alloc'd at
==387804==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387804==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387804==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387804==    by 0x406003: main (mandatory.cpp:79)
==387804== 
==387804== Invalid read of size 1
==387804==    at 0x4074E8: ft_strlen (get_next_line_utils.c:43)
==387804==    by 0x407515: ft_strjoin (get_next_line_utils.c:59)
==387804==    by 0x40738B: get_next_line (get_next_line.c:48)
==387804==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387804==    by 0x406015: main (mandatory.cpp:79)
==387804==  Address 0x4de5c01 is 1 bytes inside a block of size 2 free'd
==387804==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387804==    by 0x4076F3: f_search_bn (get_next_line_utils.c:119)
==387804==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387804==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387804==    by 0x406003: main (mandatory.cpp:79)
==387804==  Block was alloc'd at
==387804==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387804==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==387804==    by 0x40738B: get_next_line (get_next_line.c:48)
==387804==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387804==    by 0x406003: main (mandatory.cpp:79)
==387804== 
==387804== Invalid read of size 1
==387804==    at 0x40758F: ft_strjoin (get_next_line_utils.c:68)
==387804==    by 0x40738B: get_next_line (get_next_line.c:48)
==387804==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387804==    by 0x406015: main (mandatory.cpp:79)
==387804==  Address 0x4de5c01 is 1 bytes inside a block of size 2 free'd
==387804==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387804==    by 0x4076F3: f_search_bn (get_next_line_utils.c:119)
==387804==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387804==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387804==    by 0x406003: main (mandatory.cpp:79)
==387804==  Block was alloc'd at
==387804==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387804==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==387804==    by 0x40738B: get_next_line (get_next_line.c:48)
==387804==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387804==    by 0x406003: main (mandatory.cpp:79)
==387804== 
==387804== Invalid read of size 1
==387804==    at 0x407715: f_del_front_bn (get_next_line_utils.c:163)
==387804==    by 0x4073CD: get_next_line (get_next_line.c:52)
==387804==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387804==    by 0x406015: main (mandatory.cpp:79)
==387804==  Address 0x4de5cf0 is 0 bytes inside a block of size 2 free'd
==387804==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387804==    by 0x4076F3: f_search_bn (get_next_line_utils.c:119)
==387804==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387804==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387804==    by 0x406015: main (mandatory.cpp:79)
==387804==  Block was alloc'd at
==387804==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387804==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==387804==    by 0x40738B: get_next_line (get_next_line.c:48)
==387804==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387804==    by 0x406015: main (mandatory.cpp:79)
==387804== 
==387804== Invalid free() / delete / delete[] / realloc()
==387804==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387804==    by 0x4073E0: get_next_line (get_next_line.c:53)
==387804==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387804==    by 0x406015: main (mandatory.cpp:79)
==387804==  Address 0x4de5ca0 is 0 bytes inside a block of size 2 free'd
==387804==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387804==    by 0x407602: ft_strjoin (get_next_line_utils.c:82)
==387804==    by 0x40738B: get_next_line (get_next_line.c:48)
==387804==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387804==    by 0x406015: main (mandatory.cpp:79)
==387804==  Block was alloc'd at
==387804==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387804==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387804==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387804==    by 0x406015: main (mandatory.cpp:79)
==387804== 
==387804== Invalid read of size 1
==387804==    at 0x40758F: ft_strjoin (get_next_line_utils.c:68)
==387804==    by 0x40738B: get_next_line (get_next_line.c:48)
==387804==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387804==    by 0x406027: main (mandatory.cpp:79)
==387804==  Address 0x4de5cf1 is 1 bytes inside a block of size 2 free'd
==387804==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387804==    by 0x4076F3: f_search_bn (get_next_line_utils.c:119)
==387804==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387804==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387804==    by 0x406015: main (mandatory.cpp:79)
==387804==  Block was alloc'd at
==387804==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387804==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==387804==    by 0x40738B: get_next_line (get_next_line.c:48)
==387804==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387804==    by 0x406015: main (mandatory.cpp:79)
==387804== 
==387804== Invalid read of size 1
==387804==    at 0x407715: f_del_front_bn (get_next_line_utils.c:163)
==387804==    by 0x4073CD: get_next_line (get_next_line.c:52)
==387804==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387804==    by 0x406027: main (mandatory.cpp:79)
==387804==  Address 0x4de5de0 is 0 bytes inside a block of size 2 free'd
==387804==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387804==    by 0x4076F3: f_search_bn (get_next_line_utils.c:119)
==387804==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387804==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387804==    by 0x406027: main (mandatory.cpp:79)
==387804==  Block was alloc'd at
==387804==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387804==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==387804==    by 0x40738B: get_next_line (get_next_line.c:48)
==387804==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387804==    by 0x406027: main (mandatory.cpp:79)
==387804== 
==387804== Invalid free() / delete / delete[] / realloc()
==387804==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387804==    by 0x4073E0: get_next_line (get_next_line.c:53)
==387804==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387804==    by 0x406027: main (mandatory.cpp:79)
==387804==  Address 0x4de5d90 is 0 bytes inside a block of size 2 free'd
==387804==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387804==    by 0x407602: ft_strjoin (get_next_line_utils.c:82)
==387804==    by 0x40738B: get_next_line (get_next_line.c:48)
==387804==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387804==    by 0x406027: main (mandatory.cpp:79)
==387804==  Block was alloc'd at
==387804==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387804==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387804==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387804==    by 0x406027: main (mandatory.cpp:79)
==387804== 
==387804== Invalid read of size 1
==387804==    at 0x40758F: ft_strjoin (get_next_line_utils.c:68)
==387804==    by 0x40738B: get_next_line (get_next_line.c:48)
==387804==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387804==    by 0x406039: main (mandatory.cpp:79)
==387804==  Address 0x4de5de1 is 1 bytes inside a block of size 2 free'd
==387804==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387804==    by 0x4076F3: f_search_bn (get_next_line_utils.c:119)
==387804==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387804==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387804==    by 0x406027: main (mandatory.cpp:79)
==387804==  Block was alloc'd at
==387804==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387804==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==387804==    by 0x40738B: get_next_line (get_next_line.c:48)
==387804==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387804==    by 0x406027: main (mandatory.cpp:79)
==387804== 
==387804== Invalid read of size 1
==387804==    at 0x407715: f_del_front_bn (get_next_line_utils.c:163)
==387804==    by 0x4073CD: get_next_line (get_next_line.c:52)
==387804==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387804==    by 0x406039: main (mandatory.cpp:79)
==387804==  Address 0x4de5ed0 is 0 bytes inside a block of size 2 free'd
==387804==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387804==    by 0x4076F3: f_search_bn (get_next_line_utils.c:119)
==387804==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387804==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387804==    by 0x406039: main (mandatory.cpp:79)
==387804==  Block was alloc'd at
==387804==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387804==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==387804==    by 0x40738B: get_next_line (get_next_line.c:48)
==387804==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387804==    by 0x406039: main (mandatory.cpp:79)
==387804== 
==387804== Invalid free() / delete / delete[] / realloc()
==387804==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387804==    by 0x4073E0: get_next_line (get_next_line.c:53)
==387804==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387804==    by 0x406039: main (mandatory.cpp:79)
==387804==  Address 0x4de5e80 is 0 bytes inside a block of size 2 free'd
==387804==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387804==    by 0x407602: ft_strjoin (get_next_line_utils.c:82)
==387804==    by 0x40738B: get_next_line (get_next_line.c:48)
==387804==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387804==    by 0x406039: main (mandatory.cpp:79)
==387804==  Block was alloc'd at
==387804==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387804==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387804==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387804==    by 0x406039: main (mandatory.cpp:79)
==387804== 
==387804== Invalid read of size 1
==387804==    at 0x40758F: ft_strjoin (get_next_line_utils.c:68)
==387804==    by 0x40738B: get_next_line (get_next_line.c:48)
==387804==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387804==    by 0x40604B: main (mandatory.cpp:79)
==387804==  Address 0x4de5ed1 is 1 bytes inside a block of size 2 free'd
==387804==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387804==    by 0x4076F3: f_search_bn (get_next_line_utils.c:119)
==387804==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387804==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387804==    by 0x406039: main (mandatory.cpp:79)
==387804==  Block was alloc'd at
==387804==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387804==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==387804==    by 0x40738B: get_next_line (get_next_line.c:48)
==387804==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387804==    by 0x406039: main (mandatory.cpp:79)
==387804== 
==387804== Invalid read of size 1
==387804==    at 0x407715: f_del_front_bn (get_next_line_utils.c:163)
==387804==    by 0x4073CD: get_next_line (get_next_line.c:52)
==387804==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387804==    by 0x40604B: main (mandatory.cpp:79)
==387804==  Address 0x4de5fc0 is 0 bytes inside a block of size 2 free'd
==387804==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387804==    by 0x4076F3: f_search_bn (get_next_line_utils.c:119)
==387804==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387804==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387804==    by 0x40604B: main (mandatory.cpp:79)
==387804==  Block was alloc'd at
==387804==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387804==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==387804==    by 0x40738B: get_next_line (get_next_line.c:48)
==387804==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387804==    by 0x40604B: main (mandatory.cpp:79)
==387804== 
==387804== Invalid free() / delete / delete[] / realloc()
==387804==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387804==    by 0x4073E0: get_next_line (get_next_line.c:53)
==387804==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387804==    by 0x40604B: main (mandatory.cpp:79)
==387804==  Address 0x4de5f70 is 0 bytes inside a block of size 2 free'd
==387804==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387804==    by 0x407602: ft_strjoin (get_next_line_utils.c:82)
==387804==    by 0x40738B: get_next_line (get_next_line.c:48)
==387804==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387804==    by 0x40604B: main (mandatory.cpp:79)
==387804==  Block was alloc'd at
==387804==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387804==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387804==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387804==    by 0x40604B: main (mandatory.cpp:79)
==387804== 
==387804== Invalid read of size 1
==387804==    at 0x40758F: ft_strjoin (get_next_line_utils.c:68)
==387804==    by 0x40738B: get_next_line (get_next_line.c:48)
==387804==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387804==    by 0x406057: main (mandatory.cpp:79)
==387804==  Address 0x4de5fc1 is 1 bytes inside a block of size 2 free'd
==387804==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387804==    by 0x4076F3: f_search_bn (get_next_line_utils.c:119)
==387804==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387804==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387804==    by 0x40604B: main (mandatory.cpp:79)
==387804==  Block was alloc'd at
==387804==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387804==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==387804==    by 0x40738B: get_next_line (get_next_line.c:48)
==387804==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387804==    by 0x40604B: main (mandatory.cpp:79)
==387804== 
==387804== 1 bytes in 1 blocks are definitely lost in loss record 1 of 1
==387804==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387804==    by 0x407364: get_next_line (get_next_line.c:43)
==387804==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387804==    by 0x406003: main (mandatory.cpp:79)
==387804== 
==387805== Syscall param read(buf) points to unaddressable byte(s)
==387805==    at 0x4CB8992: read (read.c:26)
==387805==    by 0x40733B: get_next_line (get_next_line.c:37)
==387805==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387805==    by 0x406277: main (mandatory.cpp:88)
==387805==  Address 0x4de5e90 is 0 bytes inside a block of size 2 free'd
==387805==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387805==    by 0x407602: ft_strjoin (get_next_line_utils.c:82)
==387805==    by 0x40738B: get_next_line (get_next_line.c:48)
==387805==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387805==    by 0x406277: main (mandatory.cpp:88)
==387805==  Block was alloc'd at
==387805==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387805==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387805==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387805==    by 0x406277: main (mandatory.cpp:88)
==387805== 
==387805== Invalid write of size 1
==387805==    at 0x40734C: get_next_line (get_next_line.c:38)
==387805==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387805==    by 0x406277: main (mandatory.cpp:88)
==387805==  Address 0x4de5e91 is 1 bytes inside a block of size 2 free'd
==387805==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387805==    by 0x407602: ft_strjoin (get_next_line_utils.c:82)
==387805==    by 0x40738B: get_next_line (get_next_line.c:48)
==387805==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387805==    by 0x406277: main (mandatory.cpp:88)
==387805==  Block was alloc'd at
==387805==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387805==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387805==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387805==    by 0x406277: main (mandatory.cpp:88)
==387805== 
==387805== Invalid read of size 1
==387805==    at 0x4074E8: ft_strlen (get_next_line_utils.c:43)
==387805==    by 0x407523: ft_strjoin (get_next_line_utils.c:59)
==387805==    by 0x40738B: get_next_line (get_next_line.c:48)
==387805==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387805==    by 0x406277: main (mandatory.cpp:88)
==387805==  Address 0x4de5e91 is 1 bytes inside a block of size 2 free'd
==387805==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387805==    by 0x407602: ft_strjoin (get_next_line_utils.c:82)
==387805==    by 0x40738B: get_next_line (get_next_line.c:48)
==387805==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387805==    by 0x406277: main (mandatory.cpp:88)
==387805==  Block was alloc'd at
==387805==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387805==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387805==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387805==    by 0x406277: main (mandatory.cpp:88)
==387805== 
==387805== Invalid read of size 1
==387805==    at 0x4075DB: ft_strjoin (get_next_line_utils.c:75)
==387805==    by 0x40738B: get_next_line (get_next_line.c:48)
==387805==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387805==    by 0x406277: main (mandatory.cpp:88)
==387805==  Address 0x4de5e91 is 1 bytes inside a block of size 2 free'd
==387805==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387805==    by 0x407602: ft_strjoin (get_next_line_utils.c:82)
==387805==    by 0x40738B: get_next_line (get_next_line.c:48)
==387805==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387805==    by 0x406277: main (mandatory.cpp:88)
==387805==  Block was alloc'd at
==387805==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387805==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387805==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387805==    by 0x406277: main (mandatory.cpp:88)
==387805== 
==387805== Invalid free() / delete / delete[] / realloc()
==387805==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387805==    by 0x407602: ft_strjoin (get_next_line_utils.c:82)
==387805==    by 0x40738B: get_next_line (get_next_line.c:48)
==387805==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387805==    by 0x406277: main (mandatory.cpp:88)
==387805==  Address 0x4de5e90 is 0 bytes inside a block of size 2 free'd
==387805==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387805==    by 0x407602: ft_strjoin (get_next_line_utils.c:82)
==387805==    by 0x40738B: get_next_line (get_next_line.c:48)
==387805==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387805==    by 0x406277: main (mandatory.cpp:88)
==387805==  Block was alloc'd at
==387805==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387805==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387805==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387805==    by 0x406277: main (mandatory.cpp:88)
==387805== 
==387805== Invalid read of size 1
==387805==    at 0x407715: f_del_front_bn (get_next_line_utils.c:163)
==387805==    by 0x4073CD: get_next_line (get_next_line.c:52)
==387805==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387805==    by 0x406277: main (mandatory.cpp:88)
==387805==  Address 0x4de6e40 is 0 bytes inside a block of size 43 free'd
==387805==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387805==    by 0x4076F3: f_search_bn (get_next_line_utils.c:119)
==387805==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387805==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387805==    by 0x406277: main (mandatory.cpp:88)
==387805==  Block was alloc'd at
==387805==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387805==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==387805==    by 0x40738B: get_next_line (get_next_line.c:48)
==387805==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387805==    by 0x406277: main (mandatory.cpp:88)
==387805== 
==387805== Invalid free() / delete / delete[] / realloc()
==387805==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387805==    by 0x4073E0: get_next_line (get_next_line.c:53)
==387805==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387805==    by 0x406277: main (mandatory.cpp:88)
==387805==  Address 0x4de5e90 is 0 bytes inside a block of size 2 free'd
==387805==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387805==    by 0x407602: ft_strjoin (get_next_line_utils.c:82)
==387805==    by 0x40738B: get_next_line (get_next_line.c:48)
==387805==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387805==    by 0x406277: main (mandatory.cpp:88)
==387805==  Block was alloc'd at
==387805==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387805==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387805==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387805==    by 0x406277: main (mandatory.cpp:88)
==387805== 
==387805== Invalid read of size 1
==387805==    at 0x4074E8: ft_strlen (get_next_line_utils.c:43)
==387805==    by 0x407515: ft_strjoin (get_next_line_utils.c:59)
==387805==    by 0x40738B: get_next_line (get_next_line.c:48)
==387805==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387805==    by 0x406289: main (mandatory.cpp:88)
==387805==  Address 0x4de6e6a is 42 bytes inside a block of size 43 free'd
==387805==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387805==    by 0x4076F3: f_search_bn (get_next_line_utils.c:119)
==387805==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387805==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387805==    by 0x406277: main (mandatory.cpp:88)
==387805==  Block was alloc'd at
==387805==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387805==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==387805==    by 0x40738B: get_next_line (get_next_line.c:48)
==387805==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387805==    by 0x406277: main (mandatory.cpp:88)
==387805== 
==387805== Invalid read of size 1
==387805==    at 0x40758F: ft_strjoin (get_next_line_utils.c:68)
==387805==    by 0x40738B: get_next_line (get_next_line.c:48)
==387805==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387805==    by 0x406289: main (mandatory.cpp:88)
==387805==  Address 0x4de6e6a is 42 bytes inside a block of size 43 free'd
==387805==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387805==    by 0x4076F3: f_search_bn (get_next_line_utils.c:119)
==387805==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387805==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387805==    by 0x406277: main (mandatory.cpp:88)
==387805==  Block was alloc'd at
==387805==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387805==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==387805==    by 0x40738B: get_next_line (get_next_line.c:48)
==387805==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387805==    by 0x406277: main (mandatory.cpp:88)
==387805== 
==387805== Syscall param read(buf) points to unaddressable byte(s)
==387805==    at 0x4CB8992: read (read.c:26)
==387805==    by 0x40733B: get_next_line (get_next_line.c:37)
==387805==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387805==    by 0x406289: main (mandatory.cpp:88)
==387805==  Address 0x4de6f20 is 0 bytes inside a block of size 2 free'd
==387805==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387805==    by 0x407602: ft_strjoin (get_next_line_utils.c:82)
==387805==    by 0x40738B: get_next_line (get_next_line.c:48)
==387805==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387805==    by 0x406289: main (mandatory.cpp:88)
==387805==  Block was alloc'd at
==387805==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387805==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387805==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387805==    by 0x406289: main (mandatory.cpp:88)
==387805== 
==387805== Invalid write of size 1
==387805==    at 0x40734C: get_next_line (get_next_line.c:38)
==387805==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387805==    by 0x406289: main (mandatory.cpp:88)
==387805==  Address 0x4de6f21 is 1 bytes inside a block of size 2 free'd
==387805==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387805==    by 0x407602: ft_strjoin (get_next_line_utils.c:82)
==387805==    by 0x40738B: get_next_line (get_next_line.c:48)
==387805==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387805==    by 0x406289: main (mandatory.cpp:88)
==387805==  Block was alloc'd at
==387805==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387805==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387805==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387805==    by 0x406289: main (mandatory.cpp:88)
==387805== 
==387805== Invalid read of size 1
==387805==    at 0x4075DB: ft_strjoin (get_next_line_utils.c:75)
==387805==    by 0x40738B: get_next_line (get_next_line.c:48)
==387805==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387805==    by 0x406289: main (mandatory.cpp:88)
==387805==  Address 0x4de6f21 is 1 bytes inside a block of size 2 free'd
==387805==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387805==    by 0x407602: ft_strjoin (get_next_line_utils.c:82)
==387805==    by 0x40738B: get_next_line (get_next_line.c:48)
==387805==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387805==    by 0x406289: main (mandatory.cpp:88)
==387805==  Block was alloc'd at
==387805==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387805==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387805==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387805==    by 0x406289: main (mandatory.cpp:88)
==387805== 
==387805== Invalid read of size 1
==387805==    at 0x407715: f_del_front_bn (get_next_line_utils.c:163)
==387805==    by 0x4073CD: get_next_line (get_next_line.c:52)
==387805==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387805==    by 0x406289: main (mandatory.cpp:88)
==387805==  Address 0x4de7ef0 is 0 bytes inside a block of size 44 free'd
==387805==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387805==    by 0x4076F3: f_search_bn (get_next_line_utils.c:119)
==387805==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387805==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387805==    by 0x406289: main (mandatory.cpp:88)
==387805==  Block was alloc'd at
==387805==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387805==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==387805==    by 0x40738B: get_next_line (get_next_line.c:48)
==387805==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387805==    by 0x406289: main (mandatory.cpp:88)
==387805== 
==387805== Invalid free() / delete / delete[] / realloc()
==387805==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387805==    by 0x4073E0: get_next_line (get_next_line.c:53)
==387805==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387805==    by 0x406289: main (mandatory.cpp:88)
==387805==  Address 0x4de6f20 is 0 bytes inside a block of size 2 free'd
==387805==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387805==    by 0x407602: ft_strjoin (get_next_line_utils.c:82)
==387805==    by 0x40738B: get_next_line (get_next_line.c:48)
==387805==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387805==    by 0x406289: main (mandatory.cpp:88)
==387805==  Block was alloc'd at
==387805==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387805==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387805==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387805==    by 0x406289: main (mandatory.cpp:88)
==387805== 
==387805== Invalid read of size 1
==387805==    at 0x40758F: ft_strjoin (get_next_line_utils.c:68)
==387805==    by 0x40738B: get_next_line (get_next_line.c:48)
==387805==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387805==    by 0x40629B: main (mandatory.cpp:88)
==387805==  Address 0x4de7f1b is 43 bytes inside a block of size 44 free'd
==387805==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387805==    by 0x4076F3: f_search_bn (get_next_line_utils.c:119)
==387805==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387805==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387805==    by 0x406289: main (mandatory.cpp:88)
==387805==  Block was alloc'd at
==387805==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387805==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==387805==    by 0x40738B: get_next_line (get_next_line.c:48)
==387805==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387805==    by 0x406289: main (mandatory.cpp:88)
==387805== 
==387805== Syscall param read(buf) points to unaddressable byte(s)
==387805==    at 0x4CB8992: read (read.c:26)
==387805==    by 0x40733B: get_next_line (get_next_line.c:37)
==387805==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387805==    by 0x40629B: main (mandatory.cpp:88)
==387805==  Address 0x4de7fd0 is 0 bytes inside a block of size 2 free'd
==387805==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387805==    by 0x407602: ft_strjoin (get_next_line_utils.c:82)
==387805==    by 0x40738B: get_next_line (get_next_line.c:48)
==387805==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387805==    by 0x40629B: main (mandatory.cpp:88)
==387805==  Block was alloc'd at
==387805==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387805==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387805==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387805==    by 0x40629B: main (mandatory.cpp:88)
==387805== 
==387805== Invalid write of size 1
==387805==    at 0x40734C: get_next_line (get_next_line.c:38)
==387805==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387805==    by 0x40629B: main (mandatory.cpp:88)
==387805==  Address 0x4de7fd1 is 1 bytes inside a block of size 2 free'd
==387805==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387805==    by 0x407602: ft_strjoin (get_next_line_utils.c:82)
==387805==    by 0x40738B: get_next_line (get_next_line.c:48)
==387805==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387805==    by 0x40629B: main (mandatory.cpp:88)
==387805==  Block was alloc'd at
==387805==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387805==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387805==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387805==    by 0x40629B: main (mandatory.cpp:88)
==387805== 
==387805== Invalid read of size 1
==387805==    at 0x4075DB: ft_strjoin (get_next_line_utils.c:75)
==387805==    by 0x40738B: get_next_line (get_next_line.c:48)
==387805==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387805==    by 0x40629B: main (mandatory.cpp:88)
==387805==  Address 0x4de7fd1 is 1 bytes inside a block of size 2 free'd
==387805==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387805==    by 0x407602: ft_strjoin (get_next_line_utils.c:82)
==387805==    by 0x40738B: get_next_line (get_next_line.c:48)
==387805==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387805==    by 0x40629B: main (mandatory.cpp:88)
==387805==  Block was alloc'd at
==387805==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387805==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387805==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387805==    by 0x40629B: main (mandatory.cpp:88)
==387805== 
==387805== Invalid read of size 1
==387805==    at 0x407715: f_del_front_bn (get_next_line_utils.c:163)
==387805==    by 0x4073CD: get_next_line (get_next_line.c:52)
==387805==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387805==    by 0x40629B: main (mandatory.cpp:88)
==387805==  Address 0x4de9010 is 0 bytes inside a block of size 45 free'd
==387805==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387805==    by 0x4076F3: f_search_bn (get_next_line_utils.c:119)
==387805==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387805==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387805==    by 0x40629B: main (mandatory.cpp:88)
==387805==  Block was alloc'd at
==387805==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387805==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==387805==    by 0x40738B: get_next_line (get_next_line.c:48)
==387805==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387805==    by 0x40629B: main (mandatory.cpp:88)
==387805== 
==387805== Invalid free() / delete / delete[] / realloc()
==387805==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387805==    by 0x4073E0: get_next_line (get_next_line.c:53)
==387805==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387805==    by 0x40629B: main (mandatory.cpp:88)
==387805==  Address 0x4de7fd0 is 0 bytes inside a block of size 2 free'd
==387805==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387805==    by 0x407602: ft_strjoin (get_next_line_utils.c:82)
==387805==    by 0x40738B: get_next_line (get_next_line.c:48)
==387805==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387805==    by 0x40629B: main (mandatory.cpp:88)
==387805==  Block was alloc'd at
==387805==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387805==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387805==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387805==    by 0x40629B: main (mandatory.cpp:88)
==387805== 
==387805== Invalid read of size 1
==387805==    at 0x40758F: ft_strjoin (get_next_line_utils.c:68)
==387805==    by 0x40738B: get_next_line (get_next_line.c:48)
==387805==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387805==    by 0x4062AD: main (mandatory.cpp:88)
==387805==  Address 0x4de903c is 44 bytes inside a block of size 45 free'd
==387805==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387805==    by 0x4076F3: f_search_bn (get_next_line_utils.c:119)
==387805==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387805==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387805==    by 0x40629B: main (mandatory.cpp:88)
==387805==  Block was alloc'd at
==387805==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387805==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==387805==    by 0x40738B: get_next_line (get_next_line.c:48)
==387805==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387805==    by 0x40629B: main (mandatory.cpp:88)
==387805== 
==387805== Syscall param read(buf) points to unaddressable byte(s)
==387805==    at 0x4CB8992: read (read.c:26)
==387805==    by 0x40733B: get_next_line (get_next_line.c:37)
==387805==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387805==    by 0x4062AD: main (mandatory.cpp:88)
==387805==  Address 0x4de90f0 is 0 bytes inside a block of size 2 free'd
==387805==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387805==    by 0x407602: ft_strjoin (get_next_line_utils.c:82)
==387805==    by 0x40738B: get_next_line (get_next_line.c:48)
==387805==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387805==    by 0x4062AD: main (mandatory.cpp:88)
==387805==  Block was alloc'd at
==387805==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387805==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387805==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387805==    by 0x4062AD: main (mandatory.cpp:88)
==387805== 
==387805== Invalid write of size 1
==387805==    at 0x40734C: get_next_line (get_next_line.c:38)
==387805==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387805==    by 0x4062AD: main (mandatory.cpp:88)
==387805==  Address 0x4de90f1 is 1 bytes inside a block of size 2 free'd
==387805==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387805==    by 0x407602: ft_strjoin (get_next_line_utils.c:82)
==387805==    by 0x40738B: get_next_line (get_next_line.c:48)
==387805==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387805==    by 0x4062AD: main (mandatory.cpp:88)
==387805==  Block was alloc'd at
==387805==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387805==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387805==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387805==    by 0x4062AD: main (mandatory.cpp:88)
==387805== 
==387805== Invalid read of size 1
==387805==    at 0x4075DB: ft_strjoin (get_next_line_utils.c:75)
==387805==    by 0x40738B: get_next_line (get_next_line.c:48)
==387805==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387805==    by 0x4062AD: main (mandatory.cpp:88)
==387805==  Address 0x4de90f1 is 1 bytes inside a block of size 2 free'd
==387805==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387805==    by 0x407602: ft_strjoin (get_next_line_utils.c:82)
==387805==    by 0x40738B: get_next_line (get_next_line.c:48)
==387805==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387805==    by 0x4062AD: main (mandatory.cpp:88)
==387805==  Block was alloc'd at
==387805==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387805==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387805==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387805==    by 0x4062AD: main (mandatory.cpp:88)
==387805== 
==387805== Invalid read of size 1
==387805==    at 0x407715: f_del_front_bn (get_next_line_utils.c:163)
==387805==    by 0x4073CD: get_next_line (get_next_line.c:52)
==387805==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387805==    by 0x4062AD: main (mandatory.cpp:88)
==387805==  Address 0x4dea0c0 is 0 bytes inside a block of size 44 free'd
==387805==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387805==    by 0x4076F3: f_search_bn (get_next_line_utils.c:119)
==387805==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387805==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387805==    by 0x4062AD: main (mandatory.cpp:88)
==387805==  Block was alloc'd at
==387805==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387805==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==387805==    by 0x40738B: get_next_line (get_next_line.c:48)
==387805==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387805==    by 0x4062AD: main (mandatory.cpp:88)
==387805== 
==387805== Invalid free() / delete / delete[] / realloc()
==387805==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387805==    by 0x4073E0: get_next_line (get_next_line.c:53)
==387805==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387805==    by 0x4062AD: main (mandatory.cpp:88)
==387805==  Address 0x4de90f0 is 0 bytes inside a block of size 2 free'd
==387805==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387805==    by 0x407602: ft_strjoin (get_next_line_utils.c:82)
==387805==    by 0x40738B: get_next_line (get_next_line.c:48)
==387805==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387805==    by 0x4062AD: main (mandatory.cpp:88)
==387805==  Block was alloc'd at
==387805==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387805==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387805==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387805==    by 0x4062AD: main (mandatory.cpp:88)
==387805== 
==387805== Invalid read of size 1
==387805==    at 0x40758F: ft_strjoin (get_next_line_utils.c:68)
==387805==    by 0x40738B: get_next_line (get_next_line.c:48)
==387805==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387805==    by 0x4062BF: main (mandatory.cpp:88)
==387805==  Address 0x4dea0eb is 43 bytes inside a block of size 44 free'd
==387805==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387805==    by 0x4076F3: f_search_bn (get_next_line_utils.c:119)
==387805==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387805==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387805==    by 0x4062AD: main (mandatory.cpp:88)
==387805==  Block was alloc'd at
==387805==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387805==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==387805==    by 0x40738B: get_next_line (get_next_line.c:48)
==387805==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387805==    by 0x4062AD: main (mandatory.cpp:88)
==387805== 
==387805== Syscall param read(buf) points to unaddressable byte(s)
==387805==    at 0x4CB8992: read (read.c:26)
==387805==    by 0x40733B: get_next_line (get_next_line.c:37)
==387805==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387805==    by 0x4062BF: main (mandatory.cpp:88)
==387805==  Address 0x4dea1a0 is 0 bytes inside a block of size 2 free'd
==387805==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387805==    by 0x407602: ft_strjoin (get_next_line_utils.c:82)
==387805==    by 0x40738B: get_next_line (get_next_line.c:48)
==387805==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387805==    by 0x4062BF: main (mandatory.cpp:88)
==387805==  Block was alloc'd at
==387805==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387805==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387805==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387805==    by 0x4062BF: main (mandatory.cpp:88)
==387805== 
==387805== Invalid write of size 1
==387805==    at 0x40734C: get_next_line (get_next_line.c:38)
==387805==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387805==    by 0x4062BF: main (mandatory.cpp:88)
==387805==  Address 0x4dea1a1 is 1 bytes inside a block of size 2 free'd
==387805==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387805==    by 0x407602: ft_strjoin (get_next_line_utils.c:82)
==387805==    by 0x40738B: get_next_line (get_next_line.c:48)
==387805==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387805==    by 0x4062BF: main (mandatory.cpp:88)
==387805==  Block was alloc'd at
==387805==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387805==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387805==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387805==    by 0x4062BF: main (mandatory.cpp:88)
==387805== 
==387805== Invalid read of size 1
==387805==    at 0x4075DB: ft_strjoin (get_next_line_utils.c:75)
==387805==    by 0x40738B: get_next_line (get_next_line.c:48)
==387805==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387805==    by 0x4062BF: main (mandatory.cpp:88)
==387805==  Address 0x4dea1a1 is 1 bytes inside a block of size 2 free'd
==387805==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387805==    by 0x407602: ft_strjoin (get_next_line_utils.c:82)
==387805==    by 0x40738B: get_next_line (get_next_line.c:48)
==387805==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387805==    by 0x4062BF: main (mandatory.cpp:88)
==387805==  Block was alloc'd at
==387805==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387805==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387805==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387805==    by 0x4062BF: main (mandatory.cpp:88)
==387805== 
==387805== Invalid read of size 1
==387805==    at 0x484FBD4: strcmp (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387805==    by 0x402D0A: gnl(int, char const*) (gnl.cpp:24)
==387805==    by 0x4062BF: main (mandatory.cpp:88)
==387805==  Address 0x0 is not stack'd, malloc'd or (recently) free'd
==387805== 
==387805== 1 bytes in 1 blocks are definitely lost in loss record 1 of 6
==387805==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387805==    by 0x407364: get_next_line (get_next_line.c:43)
==387805==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387805==    by 0x406277: main (mandatory.cpp:88)
==387805== 
==387805== 902 bytes in 41 blocks are definitely lost in loss record 2 of 6
==387805==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387805==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==387805==    by 0x40738B: get_next_line (get_next_line.c:48)
==387805==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387805==    by 0x406277: main (mandatory.cpp:88)
==387805== 
==387805== 902 bytes in 41 blocks are definitely lost in loss record 3 of 6
==387805==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387805==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==387805==    by 0x40738B: get_next_line (get_next_line.c:48)
==387805==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387805==    by 0x4062BF: main (mandatory.cpp:88)
==387805== 
==387805== 945 bytes in 42 blocks are definitely lost in loss record 4 of 6
==387805==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387805==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==387805==    by 0x40738B: get_next_line (get_next_line.c:48)
==387805==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387805==    by 0x406289: main (mandatory.cpp:88)
==387805== 
==387805== 945 bytes in 42 blocks are definitely lost in loss record 5 of 6
==387805==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387805==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==387805==    by 0x40738B: get_next_line (get_next_line.c:48)
==387805==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387805==    by 0x4062AD: main (mandatory.cpp:88)
==387805== 
==387805== 989 bytes in 43 blocks are definitely lost in loss record 6 of 6
==387805==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387805==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==387805==    by 0x40738B: get_next_line (get_next_line.c:48)
==387805==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387805==    by 0x40629B: main (mandatory.cpp:88)
==387805== 
==387813== Syscall param read(buf) points to unaddressable byte(s)
==387813==    at 0x4CB8992: read (read.c:26)
==387813==    by 0x40733B: get_next_line (get_next_line.c:37)
==387813==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387813==    by 0x4064EB: main (mandatory.cpp:97)
==387813==  Address 0x4de61c0 is 0 bytes inside a block of size 2 free'd
==387813==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387813==    by 0x407602: ft_strjoin (get_next_line_utils.c:82)
==387813==    by 0x40738B: get_next_line (get_next_line.c:48)
==387813==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387813==    by 0x4064EB: main (mandatory.cpp:97)
==387813==  Block was alloc'd at
==387813==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387813==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387813==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387813==    by 0x4064EB: main (mandatory.cpp:97)
==387813== 
==387813== Invalid write of size 1
==387813==    at 0x40734C: get_next_line (get_next_line.c:38)
==387813==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387813==    by 0x4064EB: main (mandatory.cpp:97)
==387813==  Address 0x4de61c1 is 1 bytes inside a block of size 2 free'd
==387813==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387813==    by 0x407602: ft_strjoin (get_next_line_utils.c:82)
==387813==    by 0x40738B: get_next_line (get_next_line.c:48)
==387813==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387813==    by 0x4064EB: main (mandatory.cpp:97)
==387813==  Block was alloc'd at
==387813==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387813==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387813==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387813==    by 0x4064EB: main (mandatory.cpp:97)
==387813== 
==387813== Invalid read of size 1
==387813==    at 0x4074E8: ft_strlen (get_next_line_utils.c:43)
==387813==    by 0x407523: ft_strjoin (get_next_line_utils.c:59)
==387813==    by 0x40738B: get_next_line (get_next_line.c:48)
==387813==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387813==    by 0x4064EB: main (mandatory.cpp:97)
==387813==  Address 0x4de61c1 is 1 bytes inside a block of size 2 free'd
==387813==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387813==    by 0x407602: ft_strjoin (get_next_line_utils.c:82)
==387813==    by 0x40738B: get_next_line (get_next_line.c:48)
==387813==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387813==    by 0x4064EB: main (mandatory.cpp:97)
==387813==  Block was alloc'd at
==387813==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387813==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387813==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387813==    by 0x4064EB: main (mandatory.cpp:97)
==387813== 
==387813== Invalid read of size 1
==387813==    at 0x4075DB: ft_strjoin (get_next_line_utils.c:75)
==387813==    by 0x40738B: get_next_line (get_next_line.c:48)
==387813==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387813==    by 0x4064EB: main (mandatory.cpp:97)
==387813==  Address 0x4de61c1 is 1 bytes inside a block of size 2 free'd
==387813==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387813==    by 0x407602: ft_strjoin (get_next_line_utils.c:82)
==387813==    by 0x40738B: get_next_line (get_next_line.c:48)
==387813==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387813==    by 0x4064EB: main (mandatory.cpp:97)
==387813==  Block was alloc'd at
==387813==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387813==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387813==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387813==    by 0x4064EB: main (mandatory.cpp:97)
==387813== 
==387813== Invalid free() / delete / delete[] / realloc()
==387813==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387813==    by 0x407602: ft_strjoin (get_next_line_utils.c:82)
==387813==    by 0x40738B: get_next_line (get_next_line.c:48)
==387813==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387813==    by 0x4064EB: main (mandatory.cpp:97)
==387813==  Address 0x4de61c0 is 0 bytes inside a block of size 2 free'd
==387813==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387813==    by 0x407602: ft_strjoin (get_next_line_utils.c:82)
==387813==    by 0x40738B: get_next_line (get_next_line.c:48)
==387813==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387813==    by 0x4064EB: main (mandatory.cpp:97)
==387813==  Block was alloc'd at
==387813==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387813==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387813==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387813==    by 0x4064EB: main (mandatory.cpp:97)
==387813== 
==387813== Invalid read of size 1
==387813==    at 0x407715: f_del_front_bn (get_next_line_utils.c:163)
==387813==    by 0x4073CD: get_next_line (get_next_line.c:52)
==387813==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387813==    by 0x4064EB: main (mandatory.cpp:97)
==387813==  Address 0x4de7100 is 0 bytes inside a block of size 42 free'd
==387813==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387813==    by 0x4076F3: f_search_bn (get_next_line_utils.c:119)
==387813==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387813==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387813==    by 0x4064EB: main (mandatory.cpp:97)
==387813==  Block was alloc'd at
==387813==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387813==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==387813==    by 0x40738B: get_next_line (get_next_line.c:48)
==387813==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387813==    by 0x4064EB: main (mandatory.cpp:97)
==387813== 
==387813== Invalid free() / delete / delete[] / realloc()
==387813==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387813==    by 0x4073E0: get_next_line (get_next_line.c:53)
==387813==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387813==    by 0x4064EB: main (mandatory.cpp:97)
==387813==  Address 0x4de61c0 is 0 bytes inside a block of size 2 free'd
==387813==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387813==    by 0x407602: ft_strjoin (get_next_line_utils.c:82)
==387813==    by 0x40738B: get_next_line (get_next_line.c:48)
==387813==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387813==    by 0x4064EB: main (mandatory.cpp:97)
==387813==  Block was alloc'd at
==387813==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387813==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387813==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387813==    by 0x4064EB: main (mandatory.cpp:97)
==387813== 
==387813== Invalid read of size 1
==387813==    at 0x4074E8: ft_strlen (get_next_line_utils.c:43)
==387813==    by 0x407515: ft_strjoin (get_next_line_utils.c:59)
==387813==    by 0x40738B: get_next_line (get_next_line.c:48)
==387813==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387813==    by 0x4064FD: main (mandatory.cpp:97)
==387813==  Address 0x4de7129 is 41 bytes inside a block of size 42 free'd
==387813==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387813==    by 0x4076F3: f_search_bn (get_next_line_utils.c:119)
==387813==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387813==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387813==    by 0x4064EB: main (mandatory.cpp:97)
==387813==  Block was alloc'd at
==387813==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387813==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==387813==    by 0x40738B: get_next_line (get_next_line.c:48)
==387813==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387813==    by 0x4064EB: main (mandatory.cpp:97)
==387813== 
==387813== Invalid read of size 1
==387813==    at 0x40758F: ft_strjoin (get_next_line_utils.c:68)
==387813==    by 0x40738B: get_next_line (get_next_line.c:48)
==387813==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387813==    by 0x4064FD: main (mandatory.cpp:97)
==387813==  Address 0x4de7129 is 41 bytes inside a block of size 42 free'd
==387813==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387813==    by 0x4076F3: f_search_bn (get_next_line_utils.c:119)
==387813==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387813==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387813==    by 0x4064EB: main (mandatory.cpp:97)
==387813==  Block was alloc'd at
==387813==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387813==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==387813==    by 0x40738B: get_next_line (get_next_line.c:48)
==387813==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387813==    by 0x4064EB: main (mandatory.cpp:97)
==387813== 
==387813== Syscall param read(buf) points to unaddressable byte(s)
==387813==    at 0x4CB8992: read (read.c:26)
==387813==    by 0x40733B: get_next_line (get_next_line.c:37)
==387813==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387813==    by 0x4064FD: main (mandatory.cpp:97)
==387813==  Address 0x4de71e0 is 0 bytes inside a block of size 2 free'd
==387813==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387813==    by 0x407602: ft_strjoin (get_next_line_utils.c:82)
==387813==    by 0x40738B: get_next_line (get_next_line.c:48)
==387813==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387813==    by 0x4064FD: main (mandatory.cpp:97)
==387813==  Block was alloc'd at
==387813==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387813==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387813==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387813==    by 0x4064FD: main (mandatory.cpp:97)
==387813== 
==387813== Invalid write of size 1
==387813==    at 0x40734C: get_next_line (get_next_line.c:38)
==387813==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387813==    by 0x4064FD: main (mandatory.cpp:97)
==387813==  Address 0x4de71e1 is 1 bytes inside a block of size 2 free'd
==387813==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387813==    by 0x407602: ft_strjoin (get_next_line_utils.c:82)
==387813==    by 0x40738B: get_next_line (get_next_line.c:48)
==387813==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387813==    by 0x4064FD: main (mandatory.cpp:97)
==387813==  Block was alloc'd at
==387813==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387813==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387813==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387813==    by 0x4064FD: main (mandatory.cpp:97)
==387813== 
==387813== Invalid read of size 1
==387813==    at 0x4075DB: ft_strjoin (get_next_line_utils.c:75)
==387813==    by 0x40738B: get_next_line (get_next_line.c:48)
==387813==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387813==    by 0x4064FD: main (mandatory.cpp:97)
==387813==  Address 0x4de71e1 is 1 bytes inside a block of size 2 free'd
==387813==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387813==    by 0x407602: ft_strjoin (get_next_line_utils.c:82)
==387813==    by 0x40738B: get_next_line (get_next_line.c:48)
==387813==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387813==    by 0x4064FD: main (mandatory.cpp:97)
==387813==  Block was alloc'd at
==387813==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387813==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387813==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387813==    by 0x4064FD: main (mandatory.cpp:97)
==387813== 
==387813== Invalid read of size 1
==387813==    at 0x407715: f_del_front_bn (get_next_line_utils.c:163)
==387813==    by 0x4073CD: get_next_line (get_next_line.c:52)
==387813==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387813==    by 0x4064FD: main (mandatory.cpp:97)
==387813==  Address 0x4de8140 is 0 bytes inside a block of size 43 free'd
==387813==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387813==    by 0x4076F3: f_search_bn (get_next_line_utils.c:119)
==387813==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387813==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387813==    by 0x4064FD: main (mandatory.cpp:97)
==387813==  Block was alloc'd at
==387813==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387813==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==387813==    by 0x40738B: get_next_line (get_next_line.c:48)
==387813==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387813==    by 0x4064FD: main (mandatory.cpp:97)
==387813== 
==387813== Invalid free() / delete / delete[] / realloc()
==387813==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387813==    by 0x4073E0: get_next_line (get_next_line.c:53)
==387813==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387813==    by 0x4064FD: main (mandatory.cpp:97)
==387813==  Address 0x4de71e0 is 0 bytes inside a block of size 2 free'd
==387813==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387813==    by 0x407602: ft_strjoin (get_next_line_utils.c:82)
==387813==    by 0x40738B: get_next_line (get_next_line.c:48)
==387813==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387813==    by 0x4064FD: main (mandatory.cpp:97)
==387813==  Block was alloc'd at
==387813==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387813==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387813==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387813==    by 0x4064FD: main (mandatory.cpp:97)
==387813== 
==387813== Invalid read of size 1
==387813==    at 0x40758F: ft_strjoin (get_next_line_utils.c:68)
==387813==    by 0x40738B: get_next_line (get_next_line.c:48)
==387813==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387813==    by 0x40650F: main (mandatory.cpp:97)
==387813==  Address 0x4de816a is 42 bytes inside a block of size 43 free'd
==387813==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387813==    by 0x4076F3: f_search_bn (get_next_line_utils.c:119)
==387813==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387813==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387813==    by 0x4064FD: main (mandatory.cpp:97)
==387813==  Block was alloc'd at
==387813==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387813==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==387813==    by 0x40738B: get_next_line (get_next_line.c:48)
==387813==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387813==    by 0x4064FD: main (mandatory.cpp:97)
==387813== 
==387813== Syscall param read(buf) points to unaddressable byte(s)
==387813==    at 0x4CB8992: read (read.c:26)
==387813==    by 0x40733B: get_next_line (get_next_line.c:37)
==387813==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387813==    by 0x40650F: main (mandatory.cpp:97)
==387813==  Address 0x4de8220 is 0 bytes inside a block of size 2 free'd
==387813==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387813==    by 0x407602: ft_strjoin (get_next_line_utils.c:82)
==387813==    by 0x40738B: get_next_line (get_next_line.c:48)
==387813==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387813==    by 0x40650F: main (mandatory.cpp:97)
==387813==  Block was alloc'd at
==387813==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387813==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387813==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387813==    by 0x40650F: main (mandatory.cpp:97)
==387813== 
==387813== Invalid write of size 1
==387813==    at 0x40734C: get_next_line (get_next_line.c:38)
==387813==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387813==    by 0x40650F: main (mandatory.cpp:97)
==387813==  Address 0x4de8221 is 1 bytes inside a block of size 2 free'd
==387813==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387813==    by 0x407602: ft_strjoin (get_next_line_utils.c:82)
==387813==    by 0x40738B: get_next_line (get_next_line.c:48)
==387813==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387813==    by 0x40650F: main (mandatory.cpp:97)
==387813==  Block was alloc'd at
==387813==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387813==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387813==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387813==    by 0x40650F: main (mandatory.cpp:97)
==387813== 
==387813== Invalid read of size 1
==387813==    at 0x4075DB: ft_strjoin (get_next_line_utils.c:75)
==387813==    by 0x40738B: get_next_line (get_next_line.c:48)
==387813==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387813==    by 0x40650F: main (mandatory.cpp:97)
==387813==  Address 0x4de8221 is 1 bytes inside a block of size 2 free'd
==387813==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387813==    by 0x407602: ft_strjoin (get_next_line_utils.c:82)
==387813==    by 0x40738B: get_next_line (get_next_line.c:48)
==387813==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387813==    by 0x40650F: main (mandatory.cpp:97)
==387813==  Block was alloc'd at
==387813==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387813==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387813==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387813==    by 0x40650F: main (mandatory.cpp:97)
==387813== 
==387813== Invalid read of size 1
==387813==    at 0x407715: f_del_front_bn (get_next_line_utils.c:163)
==387813==    by 0x4073CD: get_next_line (get_next_line.c:52)
==387813==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387813==    by 0x40650F: main (mandatory.cpp:97)
==387813==  Address 0x4de91f0 is 0 bytes inside a block of size 44 free'd
==387813==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387813==    by 0x4076F3: f_search_bn (get_next_line_utils.c:119)
==387813==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387813==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387813==    by 0x40650F: main (mandatory.cpp:97)
==387813==  Block was alloc'd at
==387813==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387813==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==387813==    by 0x40738B: get_next_line (get_next_line.c:48)
==387813==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387813==    by 0x40650F: main (mandatory.cpp:97)
==387813== 
==387813== Invalid free() / delete / delete[] / realloc()
==387813==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387813==    by 0x4073E0: get_next_line (get_next_line.c:53)
==387813==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387813==    by 0x40650F: main (mandatory.cpp:97)
==387813==  Address 0x4de8220 is 0 bytes inside a block of size 2 free'd
==387813==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387813==    by 0x407602: ft_strjoin (get_next_line_utils.c:82)
==387813==    by 0x40738B: get_next_line (get_next_line.c:48)
==387813==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387813==    by 0x40650F: main (mandatory.cpp:97)
==387813==  Block was alloc'd at
==387813==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387813==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387813==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387813==    by 0x40650F: main (mandatory.cpp:97)
==387813== 
==387813== Invalid read of size 1
==387813==    at 0x40758F: ft_strjoin (get_next_line_utils.c:68)
==387813==    by 0x40738B: get_next_line (get_next_line.c:48)
==387813==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387813==    by 0x406521: main (mandatory.cpp:97)
==387813==  Address 0x4de921b is 43 bytes inside a block of size 44 free'd
==387813==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387813==    by 0x4076F3: f_search_bn (get_next_line_utils.c:119)
==387813==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387813==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387813==    by 0x40650F: main (mandatory.cpp:97)
==387813==  Block was alloc'd at
==387813==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387813==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==387813==    by 0x40738B: get_next_line (get_next_line.c:48)
==387813==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387813==    by 0x40650F: main (mandatory.cpp:97)
==387813== 
==387813== Syscall param read(buf) points to unaddressable byte(s)
==387813==    at 0x4CB8992: read (read.c:26)
==387813==    by 0x40733B: get_next_line (get_next_line.c:37)
==387813==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387813==    by 0x406521: main (mandatory.cpp:97)
==387813==  Address 0x4de92d0 is 0 bytes inside a block of size 2 free'd
==387813==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387813==    by 0x407602: ft_strjoin (get_next_line_utils.c:82)
==387813==    by 0x40738B: get_next_line (get_next_line.c:48)
==387813==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387813==    by 0x406521: main (mandatory.cpp:97)
==387813==  Block was alloc'd at
==387813==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387813==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387813==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387813==    by 0x406521: main (mandatory.cpp:97)
==387813== 
==387813== Invalid write of size 1
==387813==    at 0x40734C: get_next_line (get_next_line.c:38)
==387813==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387813==    by 0x406521: main (mandatory.cpp:97)
==387813==  Address 0x4de92d1 is 1 bytes inside a block of size 2 free'd
==387813==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387813==    by 0x407602: ft_strjoin (get_next_line_utils.c:82)
==387813==    by 0x40738B: get_next_line (get_next_line.c:48)
==387813==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387813==    by 0x406521: main (mandatory.cpp:97)
==387813==  Block was alloc'd at
==387813==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387813==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387813==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387813==    by 0x406521: main (mandatory.cpp:97)
==387813== 
==387813== Invalid read of size 1
==387813==    at 0x4075DB: ft_strjoin (get_next_line_utils.c:75)
==387813==    by 0x40738B: get_next_line (get_next_line.c:48)
==387813==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387813==    by 0x406521: main (mandatory.cpp:97)
==387813==  Address 0x4de92d1 is 1 bytes inside a block of size 2 free'd
==387813==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387813==    by 0x407602: ft_strjoin (get_next_line_utils.c:82)
==387813==    by 0x40738B: get_next_line (get_next_line.c:48)
==387813==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387813==    by 0x406521: main (mandatory.cpp:97)
==387813==  Block was alloc'd at
==387813==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387813==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387813==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387813==    by 0x406521: main (mandatory.cpp:97)
==387813== 
==387813== Invalid read of size 1
==387813==    at 0x407715: f_del_front_bn (get_next_line_utils.c:163)
==387813==    by 0x4073CD: get_next_line (get_next_line.c:52)
==387813==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387813==    by 0x406521: main (mandatory.cpp:97)
==387813==  Address 0x4dea230 is 0 bytes inside a block of size 43 free'd
==387813==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387813==    by 0x4076F3: f_search_bn (get_next_line_utils.c:119)
==387813==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387813==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387813==    by 0x406521: main (mandatory.cpp:97)
==387813==  Block was alloc'd at
==387813==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387813==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==387813==    by 0x40738B: get_next_line (get_next_line.c:48)
==387813==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387813==    by 0x406521: main (mandatory.cpp:97)
==387813== 
==387813== Invalid free() / delete / delete[] / realloc()
==387813==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387813==    by 0x4073E0: get_next_line (get_next_line.c:53)
==387813==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387813==    by 0x406521: main (mandatory.cpp:97)
==387813==  Address 0x4de92d0 is 0 bytes inside a block of size 2 free'd
==387813==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387813==    by 0x407602: ft_strjoin (get_next_line_utils.c:82)
==387813==    by 0x40738B: get_next_line (get_next_line.c:48)
==387813==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387813==    by 0x406521: main (mandatory.cpp:97)
==387813==  Block was alloc'd at
==387813==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387813==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387813==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387813==    by 0x406521: main (mandatory.cpp:97)
==387813== 
==387813== Invalid read of size 1
==387813==    at 0x40758F: ft_strjoin (get_next_line_utils.c:68)
==387813==    by 0x40738B: get_next_line (get_next_line.c:48)
==387813==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387813==    by 0x406533: main (mandatory.cpp:97)
==387813==  Address 0x4dea25a is 42 bytes inside a block of size 43 free'd
==387813==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387813==    by 0x4076F3: f_search_bn (get_next_line_utils.c:119)
==387813==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387813==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387813==    by 0x406521: main (mandatory.cpp:97)
==387813==  Block was alloc'd at
==387813==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387813==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==387813==    by 0x40738B: get_next_line (get_next_line.c:48)
==387813==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387813==    by 0x406521: main (mandatory.cpp:97)
==387813== 
==387813== Syscall param read(buf) points to unaddressable byte(s)
==387813==    at 0x4CB8992: read (read.c:26)
==387813==    by 0x40733B: get_next_line (get_next_line.c:37)
==387813==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387813==    by 0x406533: main (mandatory.cpp:97)
==387813==  Address 0x4dea310 is 0 bytes inside a block of size 2 free'd
==387813==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387813==    by 0x407602: ft_strjoin (get_next_line_utils.c:82)
==387813==    by 0x40738B: get_next_line (get_next_line.c:48)
==387813==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387813==    by 0x406533: main (mandatory.cpp:97)
==387813==  Block was alloc'd at
==387813==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387813==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387813==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387813==    by 0x406533: main (mandatory.cpp:97)
==387813== 
==387813== Invalid write of size 1
==387813==    at 0x40734C: get_next_line (get_next_line.c:38)
==387813==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387813==    by 0x406533: main (mandatory.cpp:97)
==387813==  Address 0x4dea311 is 1 bytes inside a block of size 2 free'd
==387813==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387813==    by 0x407602: ft_strjoin (get_next_line_utils.c:82)
==387813==    by 0x40738B: get_next_line (get_next_line.c:48)
==387813==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387813==    by 0x406533: main (mandatory.cpp:97)
==387813==  Block was alloc'd at
==387813==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387813==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387813==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387813==    by 0x406533: main (mandatory.cpp:97)
==387813== 
==387813== Invalid read of size 1
==387813==    at 0x4075DB: ft_strjoin (get_next_line_utils.c:75)
==387813==    by 0x40738B: get_next_line (get_next_line.c:48)
==387813==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387813==    by 0x406533: main (mandatory.cpp:97)
==387813==  Address 0x4dea311 is 1 bytes inside a block of size 2 free'd
==387813==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387813==    by 0x407602: ft_strjoin (get_next_line_utils.c:82)
==387813==    by 0x40738B: get_next_line (get_next_line.c:48)
==387813==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387813==    by 0x406533: main (mandatory.cpp:97)
==387813==  Block was alloc'd at
==387813==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387813==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387813==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387813==    by 0x406533: main (mandatory.cpp:97)
==387813== 
==387813== Invalid read of size 1
==387813==    at 0x407715: f_del_front_bn (get_next_line_utils.c:163)
==387813==    by 0x4073CD: get_next_line (get_next_line.c:52)
==387813==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387813==    by 0x406533: main (mandatory.cpp:97)
==387813==  Address 0x4deb200 is 0 bytes inside a block of size 42 free'd
==387813==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387813==    by 0x4076F3: f_search_bn (get_next_line_utils.c:119)
==387813==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387813==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387813==    by 0x406533: main (mandatory.cpp:97)
==387813==  Block was alloc'd at
==387813==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387813==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==387813==    by 0x40738B: get_next_line (get_next_line.c:48)
==387813==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387813==    by 0x406533: main (mandatory.cpp:97)
==387813== 
==387813== Invalid free() / delete / delete[] / realloc()
==387813==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387813==    by 0x4073E0: get_next_line (get_next_line.c:53)
==387813==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387813==    by 0x406533: main (mandatory.cpp:97)
==387813==  Address 0x4dea310 is 0 bytes inside a block of size 2 free'd
==387813==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387813==    by 0x407602: ft_strjoin (get_next_line_utils.c:82)
==387813==    by 0x40738B: get_next_line (get_next_line.c:48)
==387813==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387813==    by 0x406533: main (mandatory.cpp:97)
==387813==  Block was alloc'd at
==387813==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387813==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387813==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387813==    by 0x406533: main (mandatory.cpp:97)
==387813== 
==387813== Invalid read of size 1
==387813==    at 0x40758F: ft_strjoin (get_next_line_utils.c:68)
==387813==    by 0x40738B: get_next_line (get_next_line.c:48)
==387813==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387813==    by 0x40653F: main (mandatory.cpp:97)
==387813==  Address 0x4deb229 is 41 bytes inside a block of size 42 free'd
==387813==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387813==    by 0x4076F3: f_search_bn (get_next_line_utils.c:119)
==387813==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387813==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387813==    by 0x406533: main (mandatory.cpp:97)
==387813==  Block was alloc'd at
==387813==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387813==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==387813==    by 0x40738B: get_next_line (get_next_line.c:48)
==387813==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387813==    by 0x406533: main (mandatory.cpp:97)
==387813== 
==387813== 1 bytes in 1 blocks are definitely lost in loss record 1 of 6
==387813==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387813==    by 0x407364: get_next_line (get_next_line.c:43)
==387813==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387813==    by 0x4064EB: main (mandatory.cpp:97)
==387813== 
==387813== 860 bytes in 40 blocks are definitely lost in loss record 2 of 6
==387813==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387813==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==387813==    by 0x40738B: get_next_line (get_next_line.c:48)
==387813==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387813==    by 0x4064EB: main (mandatory.cpp:97)
==387813== 
==387813== 860 bytes in 40 blocks are definitely lost in loss record 3 of 6
==387813==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387813==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==387813==    by 0x40738B: get_next_line (get_next_line.c:48)
==387813==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387813==    by 0x406533: main (mandatory.cpp:97)
==387813== 
==387813== 902 bytes in 41 blocks are definitely lost in loss record 4 of 6
==387813==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387813==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==387813==    by 0x40738B: get_next_line (get_next_line.c:48)
==387813==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387813==    by 0x4064FD: main (mandatory.cpp:97)
==387813== 
==387813== 902 bytes in 41 blocks are definitely lost in loss record 5 of 6
==387813==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387813==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==387813==    by 0x40738B: get_next_line (get_next_line.c:48)
==387813==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387813==    by 0x406521: main (mandatory.cpp:97)
==387813== 
==387813== 945 bytes in 42 blocks are definitely lost in loss record 6 of 6
==387813==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387813==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==387813==    by 0x40738B: get_next_line (get_next_line.c:48)
==387813==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387813==    by 0x40650F: main (mandatory.cpp:97)
==387813== 
==387814== Syscall param read(buf) points to unaddressable byte(s)
==387814==    at 0x4CB8992: read (read.c:26)
==387814==    by 0x40733B: get_next_line (get_next_line.c:37)
==387814==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387814==    by 0x40675F: main (mandatory.cpp:106)
==387814==  Address 0x4de64f0 is 0 bytes inside a block of size 2 free'd
==387814==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387814==    by 0x407602: ft_strjoin (get_next_line_utils.c:82)
==387814==    by 0x40738B: get_next_line (get_next_line.c:48)
==387814==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387814==    by 0x40675F: main (mandatory.cpp:106)
==387814==  Block was alloc'd at
==387814==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387814==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387814==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387814==    by 0x40675F: main (mandatory.cpp:106)
==387814== 
==387814== Invalid write of size 1
==387814==    at 0x40734C: get_next_line (get_next_line.c:38)
==387814==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387814==    by 0x40675F: main (mandatory.cpp:106)
==387814==  Address 0x4de64f1 is 1 bytes inside a block of size 2 free'd
==387814==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387814==    by 0x407602: ft_strjoin (get_next_line_utils.c:82)
==387814==    by 0x40738B: get_next_line (get_next_line.c:48)
==387814==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387814==    by 0x40675F: main (mandatory.cpp:106)
==387814==  Block was alloc'd at
==387814==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387814==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387814==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387814==    by 0x40675F: main (mandatory.cpp:106)
==387814== 
==387814== Invalid read of size 1
==387814==    at 0x4074E8: ft_strlen (get_next_line_utils.c:43)
==387814==    by 0x407523: ft_strjoin (get_next_line_utils.c:59)
==387814==    by 0x40738B: get_next_line (get_next_line.c:48)
==387814==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387814==    by 0x40675F: main (mandatory.cpp:106)
==387814==  Address 0x4de64f1 is 1 bytes inside a block of size 2 free'd
==387814==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387814==    by 0x407602: ft_strjoin (get_next_line_utils.c:82)
==387814==    by 0x40738B: get_next_line (get_next_line.c:48)
==387814==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387814==    by 0x40675F: main (mandatory.cpp:106)
==387814==  Block was alloc'd at
==387814==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387814==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387814==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387814==    by 0x40675F: main (mandatory.cpp:106)
==387814== 
==387814== Invalid read of size 1
==387814==    at 0x4075DB: ft_strjoin (get_next_line_utils.c:75)
==387814==    by 0x40738B: get_next_line (get_next_line.c:48)
==387814==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387814==    by 0x40675F: main (mandatory.cpp:106)
==387814==  Address 0x4de64f1 is 1 bytes inside a block of size 2 free'd
==387814==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387814==    by 0x407602: ft_strjoin (get_next_line_utils.c:82)
==387814==    by 0x40738B: get_next_line (get_next_line.c:48)
==387814==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387814==    by 0x40675F: main (mandatory.cpp:106)
==387814==  Block was alloc'd at
==387814==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387814==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387814==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387814==    by 0x40675F: main (mandatory.cpp:106)
==387814== 
==387814== Invalid free() / delete / delete[] / realloc()
==387814==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387814==    by 0x407602: ft_strjoin (get_next_line_utils.c:82)
==387814==    by 0x40738B: get_next_line (get_next_line.c:48)
==387814==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387814==    by 0x40675F: main (mandatory.cpp:106)
==387814==  Address 0x4de64f0 is 0 bytes inside a block of size 2 free'd
==387814==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387814==    by 0x407602: ft_strjoin (get_next_line_utils.c:82)
==387814==    by 0x40738B: get_next_line (get_next_line.c:48)
==387814==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387814==    by 0x40675F: main (mandatory.cpp:106)
==387814==  Block was alloc'd at
==387814==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387814==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387814==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387814==    by 0x40675F: main (mandatory.cpp:106)
==387814== 
==387814== Invalid read of size 1
==387814==    at 0x407715: f_del_front_bn (get_next_line_utils.c:163)
==387814==    by 0x4073CD: get_next_line (get_next_line.c:52)
==387814==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387814==    by 0x40675F: main (mandatory.cpp:106)
==387814==  Address 0x4de74a0 is 0 bytes inside a block of size 43 free'd
==387814==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387814==    by 0x4076F3: f_search_bn (get_next_line_utils.c:119)
==387814==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387814==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387814==    by 0x40675F: main (mandatory.cpp:106)
==387814==  Block was alloc'd at
==387814==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387814==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==387814==    by 0x40738B: get_next_line (get_next_line.c:48)
==387814==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387814==    by 0x40675F: main (mandatory.cpp:106)
==387814== 
==387814== Invalid free() / delete / delete[] / realloc()
==387814==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387814==    by 0x4073E0: get_next_line (get_next_line.c:53)
==387814==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387814==    by 0x40675F: main (mandatory.cpp:106)
==387814==  Address 0x4de64f0 is 0 bytes inside a block of size 2 free'd
==387814==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387814==    by 0x407602: ft_strjoin (get_next_line_utils.c:82)
==387814==    by 0x40738B: get_next_line (get_next_line.c:48)
==387814==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387814==    by 0x40675F: main (mandatory.cpp:106)
==387814==  Block was alloc'd at
==387814==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387814==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387814==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387814==    by 0x40675F: main (mandatory.cpp:106)
==387814== 
==387814== Invalid read of size 1
==387814==    at 0x4074E8: ft_strlen (get_next_line_utils.c:43)
==387814==    by 0x407515: ft_strjoin (get_next_line_utils.c:59)
==387814==    by 0x40738B: get_next_line (get_next_line.c:48)
==387814==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387814==    by 0x406771: main (mandatory.cpp:106)
==387814==  Address 0x4de74ca is 42 bytes inside a block of size 43 free'd
==387814==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387814==    by 0x4076F3: f_search_bn (get_next_line_utils.c:119)
==387814==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387814==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387814==    by 0x40675F: main (mandatory.cpp:106)
==387814==  Block was alloc'd at
==387814==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387814==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==387814==    by 0x40738B: get_next_line (get_next_line.c:48)
==387814==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387814==    by 0x40675F: main (mandatory.cpp:106)
==387814== 
==387814== Invalid read of size 1
==387814==    at 0x40758F: ft_strjoin (get_next_line_utils.c:68)
==387814==    by 0x40738B: get_next_line (get_next_line.c:48)
==387814==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387814==    by 0x406771: main (mandatory.cpp:106)
==387814==  Address 0x4de74ca is 42 bytes inside a block of size 43 free'd
==387814==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387814==    by 0x4076F3: f_search_bn (get_next_line_utils.c:119)
==387814==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387814==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387814==    by 0x40675F: main (mandatory.cpp:106)
==387814==  Block was alloc'd at
==387814==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387814==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==387814==    by 0x40738B: get_next_line (get_next_line.c:48)
==387814==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387814==    by 0x40675F: main (mandatory.cpp:106)
==387814== 
==387814== Invalid read of size 1
==387814==    at 0x407715: f_del_front_bn (get_next_line_utils.c:163)
==387814==    by 0x4073CD: get_next_line (get_next_line.c:52)
==387814==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387814==    by 0x406771: main (mandatory.cpp:106)
==387814==  Address 0x4de75d0 is 0 bytes inside a block of size 2 free'd
==387814==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387814==    by 0x4076F3: f_search_bn (get_next_line_utils.c:119)
==387814==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387814==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387814==    by 0x406771: main (mandatory.cpp:106)
==387814==  Block was alloc'd at
==387814==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387814==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==387814==    by 0x40738B: get_next_line (get_next_line.c:48)
==387814==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387814==    by 0x406771: main (mandatory.cpp:106)
==387814== 
==387814== Invalid free() / delete / delete[] / realloc()
==387814==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387814==    by 0x4073E0: get_next_line (get_next_line.c:53)
==387814==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387814==    by 0x406771: main (mandatory.cpp:106)
==387814==  Address 0x4de7580 is 0 bytes inside a block of size 2 free'd
==387814==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387814==    by 0x407602: ft_strjoin (get_next_line_utils.c:82)
==387814==    by 0x40738B: get_next_line (get_next_line.c:48)
==387814==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387814==    by 0x406771: main (mandatory.cpp:106)
==387814==  Block was alloc'd at
==387814==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387814==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387814==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387814==    by 0x406771: main (mandatory.cpp:106)
==387814== 
==387814== Invalid read of size 1
==387814==    at 0x40758F: ft_strjoin (get_next_line_utils.c:68)
==387814==    by 0x40738B: get_next_line (get_next_line.c:48)
==387814==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387814==    by 0x406783: main (mandatory.cpp:106)
==387814==  Address 0x4de75d1 is 1 bytes inside a block of size 2 free'd
==387814==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387814==    by 0x4076F3: f_search_bn (get_next_line_utils.c:119)
==387814==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387814==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387814==    by 0x406771: main (mandatory.cpp:106)
==387814==  Block was alloc'd at
==387814==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387814==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==387814==    by 0x40738B: get_next_line (get_next_line.c:48)
==387814==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387814==    by 0x406771: main (mandatory.cpp:106)
==387814== 
==387814== Syscall param read(buf) points to unaddressable byte(s)
==387814==    at 0x4CB8992: read (read.c:26)
==387814==    by 0x40733B: get_next_line (get_next_line.c:37)
==387814==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387814==    by 0x406783: main (mandatory.cpp:106)
==387814==  Address 0x4de7670 is 0 bytes inside a block of size 2 free'd
==387814==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387814==    by 0x407602: ft_strjoin (get_next_line_utils.c:82)
==387814==    by 0x40738B: get_next_line (get_next_line.c:48)
==387814==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387814==    by 0x406783: main (mandatory.cpp:106)
==387814==  Block was alloc'd at
==387814==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387814==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387814==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387814==    by 0x406783: main (mandatory.cpp:106)
==387814== 
==387814== Invalid write of size 1
==387814==    at 0x40734C: get_next_line (get_next_line.c:38)
==387814==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387814==    by 0x406783: main (mandatory.cpp:106)
==387814==  Address 0x4de7671 is 1 bytes inside a block of size 2 free'd
==387814==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387814==    by 0x407602: ft_strjoin (get_next_line_utils.c:82)
==387814==    by 0x40738B: get_next_line (get_next_line.c:48)
==387814==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387814==    by 0x406783: main (mandatory.cpp:106)
==387814==  Block was alloc'd at
==387814==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387814==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387814==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387814==    by 0x406783: main (mandatory.cpp:106)
==387814== 
==387814== Invalid read of size 1
==387814==    at 0x4075DB: ft_strjoin (get_next_line_utils.c:75)
==387814==    by 0x40738B: get_next_line (get_next_line.c:48)
==387814==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387814==    by 0x406783: main (mandatory.cpp:106)
==387814==  Address 0x4de7671 is 1 bytes inside a block of size 2 free'd
==387814==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387814==    by 0x407602: ft_strjoin (get_next_line_utils.c:82)
==387814==    by 0x40738B: get_next_line (get_next_line.c:48)
==387814==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387814==    by 0x406783: main (mandatory.cpp:106)
==387814==  Block was alloc'd at
==387814==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387814==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387814==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387814==    by 0x406783: main (mandatory.cpp:106)
==387814== 
==387814== Invalid read of size 1
==387814==    at 0x407715: f_del_front_bn (get_next_line_utils.c:163)
==387814==    by 0x4073CD: get_next_line (get_next_line.c:52)
==387814==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387814==    by 0x406783: main (mandatory.cpp:106)
==387814==  Address 0x4de8640 is 0 bytes inside a block of size 44 free'd
==387814==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387814==    by 0x4076F3: f_search_bn (get_next_line_utils.c:119)
==387814==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387814==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387814==    by 0x406783: main (mandatory.cpp:106)
==387814==  Block was alloc'd at
==387814==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387814==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==387814==    by 0x40738B: get_next_line (get_next_line.c:48)
==387814==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387814==    by 0x406783: main (mandatory.cpp:106)
==387814== 
==387814== Invalid free() / delete / delete[] / realloc()
==387814==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387814==    by 0x4073E0: get_next_line (get_next_line.c:53)
==387814==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387814==    by 0x406783: main (mandatory.cpp:106)
==387814==  Address 0x4de7670 is 0 bytes inside a block of size 2 free'd
==387814==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387814==    by 0x407602: ft_strjoin (get_next_line_utils.c:82)
==387814==    by 0x40738B: get_next_line (get_next_line.c:48)
==387814==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387814==    by 0x406783: main (mandatory.cpp:106)
==387814==  Block was alloc'd at
==387814==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387814==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387814==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387814==    by 0x406783: main (mandatory.cpp:106)
==387814== 
==387814== Invalid read of size 1
==387814==    at 0x40758F: ft_strjoin (get_next_line_utils.c:68)
==387814==    by 0x40738B: get_next_line (get_next_line.c:48)
==387814==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387814==    by 0x406795: main (mandatory.cpp:106)
==387814==  Address 0x4de866b is 43 bytes inside a block of size 44 free'd
==387814==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387814==    by 0x4076F3: f_search_bn (get_next_line_utils.c:119)
==387814==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387814==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387814==    by 0x406783: main (mandatory.cpp:106)
==387814==  Block was alloc'd at
==387814==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387814==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==387814==    by 0x40738B: get_next_line (get_next_line.c:48)
==387814==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387814==    by 0x406783: main (mandatory.cpp:106)
==387814== 
==387814== Invalid read of size 1
==387814==    at 0x407715: f_del_front_bn (get_next_line_utils.c:163)
==387814==    by 0x4073CD: get_next_line (get_next_line.c:52)
==387814==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387814==    by 0x406795: main (mandatory.cpp:106)
==387814==  Address 0x4de8770 is 0 bytes inside a block of size 2 free'd
==387814==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387814==    by 0x4076F3: f_search_bn (get_next_line_utils.c:119)
==387814==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387814==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387814==    by 0x406795: main (mandatory.cpp:106)
==387814==  Block was alloc'd at
==387814==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387814==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==387814==    by 0x40738B: get_next_line (get_next_line.c:48)
==387814==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387814==    by 0x406795: main (mandatory.cpp:106)
==387814== 
==387814== Invalid free() / delete / delete[] / realloc()
==387814==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387814==    by 0x4073E0: get_next_line (get_next_line.c:53)
==387814==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387814==    by 0x406795: main (mandatory.cpp:106)
==387814==  Address 0x4de8720 is 0 bytes inside a block of size 2 free'd
==387814==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387814==    by 0x407602: ft_strjoin (get_next_line_utils.c:82)
==387814==    by 0x40738B: get_next_line (get_next_line.c:48)
==387814==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387814==    by 0x406795: main (mandatory.cpp:106)
==387814==  Block was alloc'd at
==387814==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387814==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387814==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387814==    by 0x406795: main (mandatory.cpp:106)
==387814== 
==387814== Invalid read of size 1
==387814==    at 0x40758F: ft_strjoin (get_next_line_utils.c:68)
==387814==    by 0x40738B: get_next_line (get_next_line.c:48)
==387814==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387814==    by 0x4067A7: main (mandatory.cpp:106)
==387814==  Address 0x4de8771 is 1 bytes inside a block of size 2 free'd
==387814==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387814==    by 0x4076F3: f_search_bn (get_next_line_utils.c:119)
==387814==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387814==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387814==    by 0x406795: main (mandatory.cpp:106)
==387814==  Block was alloc'd at
==387814==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387814==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==387814==    by 0x40738B: get_next_line (get_next_line.c:48)
==387814==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387814==    by 0x406795: main (mandatory.cpp:106)
==387814== 
==387814== Syscall param read(buf) points to unaddressable byte(s)
==387814==    at 0x4CB8992: read (read.c:26)
==387814==    by 0x40733B: get_next_line (get_next_line.c:37)
==387814==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387814==    by 0x4067A7: main (mandatory.cpp:106)
==387814==  Address 0x4de8810 is 0 bytes inside a block of size 2 free'd
==387814==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387814==    by 0x407602: ft_strjoin (get_next_line_utils.c:82)
==387814==    by 0x40738B: get_next_line (get_next_line.c:48)
==387814==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387814==    by 0x4067A7: main (mandatory.cpp:106)
==387814==  Block was alloc'd at
==387814==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387814==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387814==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387814==    by 0x4067A7: main (mandatory.cpp:106)
==387814== 
==387814== Invalid write of size 1
==387814==    at 0x40734C: get_next_line (get_next_line.c:38)
==387814==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387814==    by 0x4067A7: main (mandatory.cpp:106)
==387814==  Address 0x4de8811 is 1 bytes inside a block of size 2 free'd
==387814==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387814==    by 0x407602: ft_strjoin (get_next_line_utils.c:82)
==387814==    by 0x40738B: get_next_line (get_next_line.c:48)
==387814==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387814==    by 0x4067A7: main (mandatory.cpp:106)
==387814==  Block was alloc'd at
==387814==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387814==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387814==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387814==    by 0x4067A7: main (mandatory.cpp:106)
==387814== 
==387814== Invalid read of size 1
==387814==    at 0x4075DB: ft_strjoin (get_next_line_utils.c:75)
==387814==    by 0x40738B: get_next_line (get_next_line.c:48)
==387814==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387814==    by 0x4067A7: main (mandatory.cpp:106)
==387814==  Address 0x4de8811 is 1 bytes inside a block of size 2 free'd
==387814==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387814==    by 0x407602: ft_strjoin (get_next_line_utils.c:82)
==387814==    by 0x40738B: get_next_line (get_next_line.c:48)
==387814==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387814==    by 0x4067A7: main (mandatory.cpp:106)
==387814==  Block was alloc'd at
==387814==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387814==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387814==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387814==    by 0x4067A7: main (mandatory.cpp:106)
==387814== 
==387814== Invalid read of size 1
==387814==    at 0x407715: f_del_front_bn (get_next_line_utils.c:163)
==387814==    by 0x4073CD: get_next_line (get_next_line.c:52)
==387814==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387814==    by 0x4067A7: main (mandatory.cpp:106)
==387814==  Address 0x4de9850 is 0 bytes inside a block of size 45 free'd
==387814==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387814==    by 0x4076F3: f_search_bn (get_next_line_utils.c:119)
==387814==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387814==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387814==    by 0x4067A7: main (mandatory.cpp:106)
==387814==  Block was alloc'd at
==387814==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387814==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==387814==    by 0x40738B: get_next_line (get_next_line.c:48)
==387814==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387814==    by 0x4067A7: main (mandatory.cpp:106)
==387814== 
==387814== Invalid free() / delete / delete[] / realloc()
==387814==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387814==    by 0x4073E0: get_next_line (get_next_line.c:53)
==387814==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387814==    by 0x4067A7: main (mandatory.cpp:106)
==387814==  Address 0x4de8810 is 0 bytes inside a block of size 2 free'd
==387814==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387814==    by 0x407602: ft_strjoin (get_next_line_utils.c:82)
==387814==    by 0x40738B: get_next_line (get_next_line.c:48)
==387814==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387814==    by 0x4067A7: main (mandatory.cpp:106)
==387814==  Block was alloc'd at
==387814==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387814==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387814==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387814==    by 0x4067A7: main (mandatory.cpp:106)
==387814== 
==387814== Invalid read of size 1
==387814==    at 0x40758F: ft_strjoin (get_next_line_utils.c:68)
==387814==    by 0x40738B: get_next_line (get_next_line.c:48)
==387814==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387814==    by 0x4067B9: main (mandatory.cpp:106)
==387814==  Address 0x4de987c is 44 bytes inside a block of size 45 free'd
==387814==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387814==    by 0x4076F3: f_search_bn (get_next_line_utils.c:119)
==387814==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387814==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387814==    by 0x4067A7: main (mandatory.cpp:106)
==387814==  Block was alloc'd at
==387814==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387814==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==387814==    by 0x40738B: get_next_line (get_next_line.c:48)
==387814==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387814==    by 0x4067A7: main (mandatory.cpp:106)
==387814== 
==387814== Invalid read of size 1
==387814==    at 0x407715: f_del_front_bn (get_next_line_utils.c:163)
==387814==    by 0x4073CD: get_next_line (get_next_line.c:52)
==387814==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387814==    by 0x4067B9: main (mandatory.cpp:106)
==387814==  Address 0x4de9980 is 0 bytes inside a block of size 2 free'd
==387814==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387814==    by 0x4076F3: f_search_bn (get_next_line_utils.c:119)
==387814==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387814==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387814==    by 0x4067B9: main (mandatory.cpp:106)
==387814==  Block was alloc'd at
==387814==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387814==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==387814==    by 0x40738B: get_next_line (get_next_line.c:48)
==387814==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387814==    by 0x4067B9: main (mandatory.cpp:106)
==387814== 
==387814== Invalid free() / delete / delete[] / realloc()
==387814==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387814==    by 0x4073E0: get_next_line (get_next_line.c:53)
==387814==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387814==    by 0x4067B9: main (mandatory.cpp:106)
==387814==  Address 0x4de9930 is 0 bytes inside a block of size 2 free'd
==387814==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387814==    by 0x407602: ft_strjoin (get_next_line_utils.c:82)
==387814==    by 0x40738B: get_next_line (get_next_line.c:48)
==387814==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387814==    by 0x4067B9: main (mandatory.cpp:106)
==387814==  Block was alloc'd at
==387814==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387814==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387814==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387814==    by 0x4067B9: main (mandatory.cpp:106)
==387814== 
==387814== Invalid read of size 1
==387814==    at 0x40758F: ft_strjoin (get_next_line_utils.c:68)
==387814==    by 0x40738B: get_next_line (get_next_line.c:48)
==387814==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387814==    by 0x4067CB: main (mandatory.cpp:106)
==387814==  Address 0x4de9981 is 1 bytes inside a block of size 2 free'd
==387814==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387814==    by 0x4076F3: f_search_bn (get_next_line_utils.c:119)
==387814==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387814==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387814==    by 0x4067B9: main (mandatory.cpp:106)
==387814==  Block was alloc'd at
==387814==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387814==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==387814==    by 0x40738B: get_next_line (get_next_line.c:48)
==387814==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387814==    by 0x4067B9: main (mandatory.cpp:106)
==387814== 
==387814== Syscall param read(buf) points to unaddressable byte(s)
==387814==    at 0x4CB8992: read (read.c:26)
==387814==    by 0x40733B: get_next_line (get_next_line.c:37)
==387814==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387814==    by 0x4067CB: main (mandatory.cpp:106)
==387814==  Address 0x4de9a20 is 0 bytes inside a block of size 2 free'd
==387814==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387814==    by 0x407602: ft_strjoin (get_next_line_utils.c:82)
==387814==    by 0x40738B: get_next_line (get_next_line.c:48)
==387814==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387814==    by 0x4067CB: main (mandatory.cpp:106)
==387814==  Block was alloc'd at
==387814==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387814==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387814==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387814==    by 0x4067CB: main (mandatory.cpp:106)
==387814== 
==387814== Invalid write of size 1
==387814==    at 0x40734C: get_next_line (get_next_line.c:38)
==387814==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387814==    by 0x4067CB: main (mandatory.cpp:106)
==387814==  Address 0x4de9a21 is 1 bytes inside a block of size 2 free'd
==387814==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387814==    by 0x407602: ft_strjoin (get_next_line_utils.c:82)
==387814==    by 0x40738B: get_next_line (get_next_line.c:48)
==387814==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387814==    by 0x4067CB: main (mandatory.cpp:106)
==387814==  Block was alloc'd at
==387814==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387814==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387814==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387814==    by 0x4067CB: main (mandatory.cpp:106)
==387814== 
==387814== Invalid read of size 1
==387814==    at 0x4075DB: ft_strjoin (get_next_line_utils.c:75)
==387814==    by 0x40738B: get_next_line (get_next_line.c:48)
==387814==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387814==    by 0x4067CB: main (mandatory.cpp:106)
==387814==  Address 0x4de9a21 is 1 bytes inside a block of size 2 free'd
==387814==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387814==    by 0x407602: ft_strjoin (get_next_line_utils.c:82)
==387814==    by 0x40738B: get_next_line (get_next_line.c:48)
==387814==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387814==    by 0x4067CB: main (mandatory.cpp:106)
==387814==  Block was alloc'd at
==387814==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387814==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387814==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387814==    by 0x4067CB: main (mandatory.cpp:106)
==387814== 
==387814== Invalid read of size 1
==387814==    at 0x407715: f_del_front_bn (get_next_line_utils.c:163)
==387814==    by 0x4073CD: get_next_line (get_next_line.c:52)
==387814==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387814==    by 0x4067CB: main (mandatory.cpp:106)
==387814==  Address 0x4dea9f0 is 0 bytes inside a block of size 44 free'd
==387814==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387814==    by 0x4076F3: f_search_bn (get_next_line_utils.c:119)
==387814==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387814==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387814==    by 0x4067CB: main (mandatory.cpp:106)
==387814==  Block was alloc'd at
==387814==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387814==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==387814==    by 0x40738B: get_next_line (get_next_line.c:48)
==387814==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387814==    by 0x4067CB: main (mandatory.cpp:106)
==387814== 
==387814== Invalid free() / delete / delete[] / realloc()
==387814==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387814==    by 0x4073E0: get_next_line (get_next_line.c:53)
==387814==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387814==    by 0x4067CB: main (mandatory.cpp:106)
==387814==  Address 0x4de9a20 is 0 bytes inside a block of size 2 free'd
==387814==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387814==    by 0x407602: ft_strjoin (get_next_line_utils.c:82)
==387814==    by 0x40738B: get_next_line (get_next_line.c:48)
==387814==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387814==    by 0x4067CB: main (mandatory.cpp:106)
==387814==  Block was alloc'd at
==387814==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387814==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387814==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387814==    by 0x4067CB: main (mandatory.cpp:106)
==387814== 
==387814== Invalid read of size 1
==387814==    at 0x40758F: ft_strjoin (get_next_line_utils.c:68)
==387814==    by 0x40738B: get_next_line (get_next_line.c:48)
==387814==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387814==    by 0x4067DD: main (mandatory.cpp:106)
==387814==  Address 0x4deaa1b is 43 bytes inside a block of size 44 free'd
==387814==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387814==    by 0x4076F3: f_search_bn (get_next_line_utils.c:119)
==387814==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387814==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387814==    by 0x4067CB: main (mandatory.cpp:106)
==387814==  Block was alloc'd at
==387814==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387814==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==387814==    by 0x40738B: get_next_line (get_next_line.c:48)
==387814==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387814==    by 0x4067CB: main (mandatory.cpp:106)
==387814== 
==387814== Invalid read of size 1
==387814==    at 0x407715: f_del_front_bn (get_next_line_utils.c:163)
==387814==    by 0x4073CD: get_next_line (get_next_line.c:52)
==387814==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387814==    by 0x4067DD: main (mandatory.cpp:106)
==387814==  Address 0x4deab20 is 0 bytes inside a block of size 2 free'd
==387814==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387814==    by 0x4076F3: f_search_bn (get_next_line_utils.c:119)
==387814==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387814==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387814==    by 0x4067DD: main (mandatory.cpp:106)
==387814==  Block was alloc'd at
==387814==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387814==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==387814==    by 0x40738B: get_next_line (get_next_line.c:48)
==387814==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387814==    by 0x4067DD: main (mandatory.cpp:106)
==387814== 
==387814== Invalid free() / delete / delete[] / realloc()
==387814==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387814==    by 0x4073E0: get_next_line (get_next_line.c:53)
==387814==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387814==    by 0x4067DD: main (mandatory.cpp:106)
==387814==  Address 0x4deaad0 is 0 bytes inside a block of size 2 free'd
==387814==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387814==    by 0x407602: ft_strjoin (get_next_line_utils.c:82)
==387814==    by 0x40738B: get_next_line (get_next_line.c:48)
==387814==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387814==    by 0x4067DD: main (mandatory.cpp:106)
==387814==  Block was alloc'd at
==387814==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387814==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387814==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387814==    by 0x4067DD: main (mandatory.cpp:106)
==387814== 
==387814== Invalid read of size 1
==387814==    at 0x40758F: ft_strjoin (get_next_line_utils.c:68)
==387814==    by 0x40738B: get_next_line (get_next_line.c:48)
==387814==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387814==    by 0x4067EF: main (mandatory.cpp:106)
==387814==  Address 0x4deab21 is 1 bytes inside a block of size 2 free'd
==387814==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387814==    by 0x4076F3: f_search_bn (get_next_line_utils.c:119)
==387814==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387814==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387814==    by 0x4067DD: main (mandatory.cpp:106)
==387814==  Block was alloc'd at
==387814==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387814==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==387814==    by 0x40738B: get_next_line (get_next_line.c:48)
==387814==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387814==    by 0x4067DD: main (mandatory.cpp:106)
==387814== 
==387814== Syscall param read(buf) points to unaddressable byte(s)
==387814==    at 0x4CB8992: read (read.c:26)
==387814==    by 0x40733B: get_next_line (get_next_line.c:37)
==387814==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387814==    by 0x4067EF: main (mandatory.cpp:106)
==387814==  Address 0x4deabc0 is 0 bytes inside a block of size 2 free'd
==387814==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387814==    by 0x407602: ft_strjoin (get_next_line_utils.c:82)
==387814==    by 0x40738B: get_next_line (get_next_line.c:48)
==387814==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387814==    by 0x4067EF: main (mandatory.cpp:106)
==387814==  Block was alloc'd at
==387814==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387814==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387814==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387814==    by 0x4067EF: main (mandatory.cpp:106)
==387814== 
==387814== Invalid write of size 1
==387814==    at 0x40734C: get_next_line (get_next_line.c:38)
==387814==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387814==    by 0x4067EF: main (mandatory.cpp:106)
==387814==  Address 0x4deabc1 is 1 bytes inside a block of size 2 free'd
==387814==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387814==    by 0x407602: ft_strjoin (get_next_line_utils.c:82)
==387814==    by 0x40738B: get_next_line (get_next_line.c:48)
==387814==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387814==    by 0x4067EF: main (mandatory.cpp:106)
==387814==  Block was alloc'd at
==387814==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387814==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387814==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387814==    by 0x4067EF: main (mandatory.cpp:106)
==387814== 
==387814== Invalid read of size 1
==387814==    at 0x4075DB: ft_strjoin (get_next_line_utils.c:75)
==387814==    by 0x40738B: get_next_line (get_next_line.c:48)
==387814==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387814==    by 0x4067EF: main (mandatory.cpp:106)
==387814==  Address 0x4deabc1 is 1 bytes inside a block of size 2 free'd
==387814==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387814==    by 0x407602: ft_strjoin (get_next_line_utils.c:82)
==387814==    by 0x40738B: get_next_line (get_next_line.c:48)
==387814==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387814==    by 0x4067EF: main (mandatory.cpp:106)
==387814==  Block was alloc'd at
==387814==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387814==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387814==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387814==    by 0x4067EF: main (mandatory.cpp:106)
==387814== 
==387814== Invalid read of size 1
==387814==    at 0x484FBD4: strcmp (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387814==    by 0x402D0A: gnl(int, char const*) (gnl.cpp:24)
==387814==    by 0x4067EF: main (mandatory.cpp:106)
==387814==  Address 0x0 is not stack'd, malloc'd or (recently) free'd
==387814== 
==387814== 1 bytes in 1 blocks are definitely lost in loss record 1 of 6
==387814==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387814==    by 0x407364: get_next_line (get_next_line.c:43)
==387814==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387814==    by 0x40675F: main (mandatory.cpp:106)
==387814== 
==387814== 902 bytes in 41 blocks are definitely lost in loss record 2 of 6
==387814==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387814==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==387814==    by 0x40738B: get_next_line (get_next_line.c:48)
==387814==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387814==    by 0x40675F: main (mandatory.cpp:106)
==387814== 
==387814== 902 bytes in 41 blocks are definitely lost in loss record 3 of 6
==387814==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387814==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==387814==    by 0x40738B: get_next_line (get_next_line.c:48)
==387814==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387814==    by 0x4067EF: main (mandatory.cpp:106)
==387814== 
==387814== 945 bytes in 42 blocks are definitely lost in loss record 4 of 6
==387814==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387814==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==387814==    by 0x40738B: get_next_line (get_next_line.c:48)
==387814==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387814==    by 0x406783: main (mandatory.cpp:106)
==387814== 
==387814== 945 bytes in 42 blocks are definitely lost in loss record 5 of 6
==387814==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387814==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==387814==    by 0x40738B: get_next_line (get_next_line.c:48)
==387814==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387814==    by 0x4067CB: main (mandatory.cpp:106)
==387814== 
==387814== 989 bytes in 43 blocks are definitely lost in loss record 6 of 6
==387814==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387814==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==387814==    by 0x40738B: get_next_line (get_next_line.c:48)
==387814==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387814==    by 0x4067A7: main (mandatory.cpp:106)
==387814== 
==387820== Syscall param read(buf) points to unaddressable byte(s)
==387820==    at 0x4CB8992: read (read.c:26)
==387820==    by 0x40733B: get_next_line (get_next_line.c:37)
==387820==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387820==    by 0x406A1B: main (mandatory.cpp:119)
==387820==  Address 0x4de6820 is 0 bytes inside a block of size 2 free'd
==387820==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387820==    by 0x407602: ft_strjoin (get_next_line_utils.c:82)
==387820==    by 0x40738B: get_next_line (get_next_line.c:48)
==387820==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387820==    by 0x406A1B: main (mandatory.cpp:119)
==387820==  Block was alloc'd at
==387820==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387820==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387820==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387820==    by 0x406A1B: main (mandatory.cpp:119)
==387820== 
==387820== Invalid write of size 1
==387820==    at 0x40734C: get_next_line (get_next_line.c:38)
==387820==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387820==    by 0x406A1B: main (mandatory.cpp:119)
==387820==  Address 0x4de6821 is 1 bytes inside a block of size 2 free'd
==387820==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387820==    by 0x407602: ft_strjoin (get_next_line_utils.c:82)
==387820==    by 0x40738B: get_next_line (get_next_line.c:48)
==387820==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387820==    by 0x406A1B: main (mandatory.cpp:119)
==387820==  Block was alloc'd at
==387820==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387820==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387820==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387820==    by 0x406A1B: main (mandatory.cpp:119)
==387820== 
==387820== Invalid read of size 1
==387820==    at 0x4074E8: ft_strlen (get_next_line_utils.c:43)
==387820==    by 0x407523: ft_strjoin (get_next_line_utils.c:59)
==387820==    by 0x40738B: get_next_line (get_next_line.c:48)
==387820==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387820==    by 0x406A1B: main (mandatory.cpp:119)
==387820==  Address 0x4de6821 is 1 bytes inside a block of size 2 free'd
==387820==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387820==    by 0x407602: ft_strjoin (get_next_line_utils.c:82)
==387820==    by 0x40738B: get_next_line (get_next_line.c:48)
==387820==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387820==    by 0x406A1B: main (mandatory.cpp:119)
==387820==  Block was alloc'd at
==387820==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387820==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387820==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387820==    by 0x406A1B: main (mandatory.cpp:119)
==387820== 
==387820== Invalid read of size 1
==387820==    at 0x4075DB: ft_strjoin (get_next_line_utils.c:75)
==387820==    by 0x40738B: get_next_line (get_next_line.c:48)
==387820==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387820==    by 0x406A1B: main (mandatory.cpp:119)
==387820==  Address 0x4de6821 is 1 bytes inside a block of size 2 free'd
==387820==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387820==    by 0x407602: ft_strjoin (get_next_line_utils.c:82)
==387820==    by 0x40738B: get_next_line (get_next_line.c:48)
==387820==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387820==    by 0x406A1B: main (mandatory.cpp:119)
==387820==  Block was alloc'd at
==387820==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387820==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387820==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387820==    by 0x406A1B: main (mandatory.cpp:119)
==387820== 
==387820== Invalid free() / delete / delete[] / realloc()
==387820==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387820==    by 0x407602: ft_strjoin (get_next_line_utils.c:82)
==387820==    by 0x40738B: get_next_line (get_next_line.c:48)
==387820==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387820==    by 0x406A1B: main (mandatory.cpp:119)
==387820==  Address 0x4de6820 is 0 bytes inside a block of size 2 free'd
==387820==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387820==    by 0x407602: ft_strjoin (get_next_line_utils.c:82)
==387820==    by 0x40738B: get_next_line (get_next_line.c:48)
==387820==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387820==    by 0x406A1B: main (mandatory.cpp:119)
==387820==  Block was alloc'd at
==387820==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387820==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387820==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387820==    by 0x406A1B: main (mandatory.cpp:119)
==387820== 
==387820== Invalid read of size 1
==387820==    at 0x407715: f_del_front_bn (get_next_line_utils.c:163)
==387820==    by 0x4073CD: get_next_line (get_next_line.c:52)
==387820==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387820==    by 0x406A1B: main (mandatory.cpp:119)
==387820==  Address 0x4de77d0 is 0 bytes inside a block of size 43 free'd
==387820==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387820==    by 0x4076F3: f_search_bn (get_next_line_utils.c:119)
==387820==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387820==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387820==    by 0x406A1B: main (mandatory.cpp:119)
==387820==  Block was alloc'd at
==387820==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387820==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==387820==    by 0x40738B: get_next_line (get_next_line.c:48)
==387820==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387820==    by 0x406A1B: main (mandatory.cpp:119)
==387820== 
==387820== Invalid free() / delete / delete[] / realloc()
==387820==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387820==    by 0x4073E0: get_next_line (get_next_line.c:53)
==387820==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387820==    by 0x406A1B: main (mandatory.cpp:119)
==387820==  Address 0x4de6820 is 0 bytes inside a block of size 2 free'd
==387820==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387820==    by 0x407602: ft_strjoin (get_next_line_utils.c:82)
==387820==    by 0x40738B: get_next_line (get_next_line.c:48)
==387820==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387820==    by 0x406A1B: main (mandatory.cpp:119)
==387820==  Block was alloc'd at
==387820==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387820==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387820==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387820==    by 0x406A1B: main (mandatory.cpp:119)
==387820== 
==387820== Invalid read of size 1
==387820==    at 0x4074E8: ft_strlen (get_next_line_utils.c:43)
==387820==    by 0x407515: ft_strjoin (get_next_line_utils.c:59)
==387820==    by 0x40738B: get_next_line (get_next_line.c:48)
==387820==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387820==    by 0x406A2D: main (mandatory.cpp:119)
==387820==  Address 0x4de77fa is 42 bytes inside a block of size 43 free'd
==387820==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387820==    by 0x4076F3: f_search_bn (get_next_line_utils.c:119)
==387820==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387820==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387820==    by 0x406A1B: main (mandatory.cpp:119)
==387820==  Block was alloc'd at
==387820==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387820==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==387820==    by 0x40738B: get_next_line (get_next_line.c:48)
==387820==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387820==    by 0x406A1B: main (mandatory.cpp:119)
==387820== 
==387820== Invalid read of size 1
==387820==    at 0x40758F: ft_strjoin (get_next_line_utils.c:68)
==387820==    by 0x40738B: get_next_line (get_next_line.c:48)
==387820==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387820==    by 0x406A2D: main (mandatory.cpp:119)
==387820==  Address 0x4de77fa is 42 bytes inside a block of size 43 free'd
==387820==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387820==    by 0x4076F3: f_search_bn (get_next_line_utils.c:119)
==387820==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387820==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387820==    by 0x406A1B: main (mandatory.cpp:119)
==387820==  Block was alloc'd at
==387820==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387820==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==387820==    by 0x40738B: get_next_line (get_next_line.c:48)
==387820==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387820==    by 0x406A1B: main (mandatory.cpp:119)
==387820== 
==387820== Invalid read of size 1
==387820==    at 0x407715: f_del_front_bn (get_next_line_utils.c:163)
==387820==    by 0x4073CD: get_next_line (get_next_line.c:52)
==387820==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387820==    by 0x406A2D: main (mandatory.cpp:119)
==387820==  Address 0x4de7900 is 0 bytes inside a block of size 2 free'd
==387820==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387820==    by 0x4076F3: f_search_bn (get_next_line_utils.c:119)
==387820==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387820==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387820==    by 0x406A2D: main (mandatory.cpp:119)
==387820==  Block was alloc'd at
==387820==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387820==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==387820==    by 0x40738B: get_next_line (get_next_line.c:48)
==387820==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387820==    by 0x406A2D: main (mandatory.cpp:119)
==387820== 
==387820== Invalid free() / delete / delete[] / realloc()
==387820==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387820==    by 0x4073E0: get_next_line (get_next_line.c:53)
==387820==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387820==    by 0x406A2D: main (mandatory.cpp:119)
==387820==  Address 0x4de78b0 is 0 bytes inside a block of size 2 free'd
==387820==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387820==    by 0x407602: ft_strjoin (get_next_line_utils.c:82)
==387820==    by 0x40738B: get_next_line (get_next_line.c:48)
==387820==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387820==    by 0x406A2D: main (mandatory.cpp:119)
==387820==  Block was alloc'd at
==387820==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387820==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387820==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387820==    by 0x406A2D: main (mandatory.cpp:119)
==387820== 
==387820== Invalid read of size 1
==387820==    at 0x40758F: ft_strjoin (get_next_line_utils.c:68)
==387820==    by 0x40738B: get_next_line (get_next_line.c:48)
==387820==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387820==    by 0x406A3F: main (mandatory.cpp:119)
==387820==  Address 0x4de7901 is 1 bytes inside a block of size 2 free'd
==387820==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387820==    by 0x4076F3: f_search_bn (get_next_line_utils.c:119)
==387820==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387820==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387820==    by 0x406A2D: main (mandatory.cpp:119)
==387820==  Block was alloc'd at
==387820==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387820==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==387820==    by 0x40738B: get_next_line (get_next_line.c:48)
==387820==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387820==    by 0x406A2D: main (mandatory.cpp:119)
==387820== 
==387820== Syscall param read(buf) points to unaddressable byte(s)
==387820==    at 0x4CB8992: read (read.c:26)
==387820==    by 0x40733B: get_next_line (get_next_line.c:37)
==387820==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387820==    by 0x406A3F: main (mandatory.cpp:119)
==387820==  Address 0x4de79a0 is 0 bytes inside a block of size 2 free'd
==387820==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387820==    by 0x407602: ft_strjoin (get_next_line_utils.c:82)
==387820==    by 0x40738B: get_next_line (get_next_line.c:48)
==387820==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387820==    by 0x406A3F: main (mandatory.cpp:119)
==387820==  Block was alloc'd at
==387820==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387820==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387820==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387820==    by 0x406A3F: main (mandatory.cpp:119)
==387820== 
==387820== Invalid write of size 1
==387820==    at 0x40734C: get_next_line (get_next_line.c:38)
==387820==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387820==    by 0x406A3F: main (mandatory.cpp:119)
==387820==  Address 0x4de79a1 is 1 bytes inside a block of size 2 free'd
==387820==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387820==    by 0x407602: ft_strjoin (get_next_line_utils.c:82)
==387820==    by 0x40738B: get_next_line (get_next_line.c:48)
==387820==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387820==    by 0x406A3F: main (mandatory.cpp:119)
==387820==  Block was alloc'd at
==387820==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387820==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387820==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387820==    by 0x406A3F: main (mandatory.cpp:119)
==387820== 
==387820== Invalid read of size 1
==387820==    at 0x4075DB: ft_strjoin (get_next_line_utils.c:75)
==387820==    by 0x40738B: get_next_line (get_next_line.c:48)
==387820==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387820==    by 0x406A3F: main (mandatory.cpp:119)
==387820==  Address 0x4de79a1 is 1 bytes inside a block of size 2 free'd
==387820==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387820==    by 0x407602: ft_strjoin (get_next_line_utils.c:82)
==387820==    by 0x40738B: get_next_line (get_next_line.c:48)
==387820==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387820==    by 0x406A3F: main (mandatory.cpp:119)
==387820==  Block was alloc'd at
==387820==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387820==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387820==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387820==    by 0x406A3F: main (mandatory.cpp:119)
==387820== 
==387820== Invalid read of size 1
==387820==    at 0x407715: f_del_front_bn (get_next_line_utils.c:163)
==387820==    by 0x4073CD: get_next_line (get_next_line.c:52)
==387820==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387820==    by 0x406A3F: main (mandatory.cpp:119)
==387820==  Address 0x4de8970 is 0 bytes inside a block of size 44 free'd
==387820==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387820==    by 0x4076F3: f_search_bn (get_next_line_utils.c:119)
==387820==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387820==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387820==    by 0x406A3F: main (mandatory.cpp:119)
==387820==  Block was alloc'd at
==387820==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387820==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==387820==    by 0x40738B: get_next_line (get_next_line.c:48)
==387820==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387820==    by 0x406A3F: main (mandatory.cpp:119)
==387820== 
==387820== Invalid free() / delete / delete[] / realloc()
==387820==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387820==    by 0x4073E0: get_next_line (get_next_line.c:53)
==387820==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387820==    by 0x406A3F: main (mandatory.cpp:119)
==387820==  Address 0x4de79a0 is 0 bytes inside a block of size 2 free'd
==387820==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387820==    by 0x407602: ft_strjoin (get_next_line_utils.c:82)
==387820==    by 0x40738B: get_next_line (get_next_line.c:48)
==387820==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387820==    by 0x406A3F: main (mandatory.cpp:119)
==387820==  Block was alloc'd at
==387820==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387820==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387820==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387820==    by 0x406A3F: main (mandatory.cpp:119)
==387820== 
==387820== Invalid read of size 1
==387820==    at 0x40758F: ft_strjoin (get_next_line_utils.c:68)
==387820==    by 0x40738B: get_next_line (get_next_line.c:48)
==387820==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387820==    by 0x406A51: main (mandatory.cpp:119)
==387820==  Address 0x4de899b is 43 bytes inside a block of size 44 free'd
==387820==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387820==    by 0x4076F3: f_search_bn (get_next_line_utils.c:119)
==387820==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387820==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387820==    by 0x406A3F: main (mandatory.cpp:119)
==387820==  Block was alloc'd at
==387820==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387820==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==387820==    by 0x40738B: get_next_line (get_next_line.c:48)
==387820==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387820==    by 0x406A3F: main (mandatory.cpp:119)
==387820== 
==387820== Invalid read of size 1
==387820==    at 0x407715: f_del_front_bn (get_next_line_utils.c:163)
==387820==    by 0x4073CD: get_next_line (get_next_line.c:52)
==387820==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387820==    by 0x406A51: main (mandatory.cpp:119)
==387820==  Address 0x4de8aa0 is 0 bytes inside a block of size 2 free'd
==387820==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387820==    by 0x4076F3: f_search_bn (get_next_line_utils.c:119)
==387820==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387820==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387820==    by 0x406A51: main (mandatory.cpp:119)
==387820==  Block was alloc'd at
==387820==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387820==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==387820==    by 0x40738B: get_next_line (get_next_line.c:48)
==387820==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387820==    by 0x406A51: main (mandatory.cpp:119)
==387820== 
==387820== Invalid free() / delete / delete[] / realloc()
==387820==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387820==    by 0x4073E0: get_next_line (get_next_line.c:53)
==387820==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387820==    by 0x406A51: main (mandatory.cpp:119)
==387820==  Address 0x4de8a50 is 0 bytes inside a block of size 2 free'd
==387820==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387820==    by 0x407602: ft_strjoin (get_next_line_utils.c:82)
==387820==    by 0x40738B: get_next_line (get_next_line.c:48)
==387820==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387820==    by 0x406A51: main (mandatory.cpp:119)
==387820==  Block was alloc'd at
==387820==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387820==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387820==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387820==    by 0x406A51: main (mandatory.cpp:119)
==387820== 
==387820== Invalid read of size 1
==387820==    at 0x40758F: ft_strjoin (get_next_line_utils.c:68)
==387820==    by 0x40738B: get_next_line (get_next_line.c:48)
==387820==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387820==    by 0x406A63: main (mandatory.cpp:119)
==387820==  Address 0x4de8aa1 is 1 bytes inside a block of size 2 free'd
==387820==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387820==    by 0x4076F3: f_search_bn (get_next_line_utils.c:119)
==387820==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387820==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387820==    by 0x406A51: main (mandatory.cpp:119)
==387820==  Block was alloc'd at
==387820==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387820==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==387820==    by 0x40738B: get_next_line (get_next_line.c:48)
==387820==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387820==    by 0x406A51: main (mandatory.cpp:119)
==387820== 
==387820== Syscall param read(buf) points to unaddressable byte(s)
==387820==    at 0x4CB8992: read (read.c:26)
==387820==    by 0x40733B: get_next_line (get_next_line.c:37)
==387820==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387820==    by 0x406A63: main (mandatory.cpp:119)
==387820==  Address 0x4de8b40 is 0 bytes inside a block of size 2 free'd
==387820==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387820==    by 0x407602: ft_strjoin (get_next_line_utils.c:82)
==387820==    by 0x40738B: get_next_line (get_next_line.c:48)
==387820==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387820==    by 0x406A63: main (mandatory.cpp:119)
==387820==  Block was alloc'd at
==387820==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387820==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387820==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387820==    by 0x406A63: main (mandatory.cpp:119)
==387820== 
==387820== Invalid write of size 1
==387820==    at 0x40734C: get_next_line (get_next_line.c:38)
==387820==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387820==    by 0x406A63: main (mandatory.cpp:119)
==387820==  Address 0x4de8b41 is 1 bytes inside a block of size 2 free'd
==387820==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387820==    by 0x407602: ft_strjoin (get_next_line_utils.c:82)
==387820==    by 0x40738B: get_next_line (get_next_line.c:48)
==387820==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387820==    by 0x406A63: main (mandatory.cpp:119)
==387820==  Block was alloc'd at
==387820==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387820==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387820==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387820==    by 0x406A63: main (mandatory.cpp:119)
==387820== 
==387820== Invalid read of size 1
==387820==    at 0x4075DB: ft_strjoin (get_next_line_utils.c:75)
==387820==    by 0x40738B: get_next_line (get_next_line.c:48)
==387820==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387820==    by 0x406A63: main (mandatory.cpp:119)
==387820==  Address 0x4de8b41 is 1 bytes inside a block of size 2 free'd
==387820==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387820==    by 0x407602: ft_strjoin (get_next_line_utils.c:82)
==387820==    by 0x40738B: get_next_line (get_next_line.c:48)
==387820==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387820==    by 0x406A63: main (mandatory.cpp:119)
==387820==  Block was alloc'd at
==387820==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387820==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387820==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387820==    by 0x406A63: main (mandatory.cpp:119)
==387820== 
==387820== Invalid read of size 1
==387820==    at 0x407715: f_del_front_bn (get_next_line_utils.c:163)
==387820==    by 0x4073CD: get_next_line (get_next_line.c:52)
==387820==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387820==    by 0x406A63: main (mandatory.cpp:119)
==387820==  Address 0x4de9b80 is 0 bytes inside a block of size 45 free'd
==387820==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387820==    by 0x4076F3: f_search_bn (get_next_line_utils.c:119)
==387820==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387820==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387820==    by 0x406A63: main (mandatory.cpp:119)
==387820==  Block was alloc'd at
==387820==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387820==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==387820==    by 0x40738B: get_next_line (get_next_line.c:48)
==387820==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387820==    by 0x406A63: main (mandatory.cpp:119)
==387820== 
==387820== Invalid free() / delete / delete[] / realloc()
==387820==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387820==    by 0x4073E0: get_next_line (get_next_line.c:53)
==387820==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387820==    by 0x406A63: main (mandatory.cpp:119)
==387820==  Address 0x4de8b40 is 0 bytes inside a block of size 2 free'd
==387820==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387820==    by 0x407602: ft_strjoin (get_next_line_utils.c:82)
==387820==    by 0x40738B: get_next_line (get_next_line.c:48)
==387820==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387820==    by 0x406A63: main (mandatory.cpp:119)
==387820==  Block was alloc'd at
==387820==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387820==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387820==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387820==    by 0x406A63: main (mandatory.cpp:119)
==387820== 
==387820== Invalid read of size 1
==387820==    at 0x40758F: ft_strjoin (get_next_line_utils.c:68)
==387820==    by 0x40738B: get_next_line (get_next_line.c:48)
==387820==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387820==    by 0x406A75: main (mandatory.cpp:119)
==387820==  Address 0x4de9bac is 44 bytes inside a block of size 45 free'd
==387820==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387820==    by 0x4076F3: f_search_bn (get_next_line_utils.c:119)
==387820==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387820==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387820==    by 0x406A63: main (mandatory.cpp:119)
==387820==  Block was alloc'd at
==387820==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387820==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==387820==    by 0x40738B: get_next_line (get_next_line.c:48)
==387820==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387820==    by 0x406A63: main (mandatory.cpp:119)
==387820== 
==387820== Invalid read of size 1
==387820==    at 0x407715: f_del_front_bn (get_next_line_utils.c:163)
==387820==    by 0x4073CD: get_next_line (get_next_line.c:52)
==387820==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387820==    by 0x406A75: main (mandatory.cpp:119)
==387820==  Address 0x4de9cb0 is 0 bytes inside a block of size 2 free'd
==387820==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387820==    by 0x4076F3: f_search_bn (get_next_line_utils.c:119)
==387820==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387820==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387820==    by 0x406A75: main (mandatory.cpp:119)
==387820==  Block was alloc'd at
==387820==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387820==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==387820==    by 0x40738B: get_next_line (get_next_line.c:48)
==387820==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387820==    by 0x406A75: main (mandatory.cpp:119)
==387820== 
==387820== Invalid free() / delete / delete[] / realloc()
==387820==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387820==    by 0x4073E0: get_next_line (get_next_line.c:53)
==387820==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387820==    by 0x406A75: main (mandatory.cpp:119)
==387820==  Address 0x4de9c60 is 0 bytes inside a block of size 2 free'd
==387820==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387820==    by 0x407602: ft_strjoin (get_next_line_utils.c:82)
==387820==    by 0x40738B: get_next_line (get_next_line.c:48)
==387820==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387820==    by 0x406A75: main (mandatory.cpp:119)
==387820==  Block was alloc'd at
==387820==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387820==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387820==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387820==    by 0x406A75: main (mandatory.cpp:119)
==387820== 
==387820== Invalid read of size 1
==387820==    at 0x40758F: ft_strjoin (get_next_line_utils.c:68)
==387820==    by 0x40738B: get_next_line (get_next_line.c:48)
==387820==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387820==    by 0x406A87: main (mandatory.cpp:119)
==387820==  Address 0x4de9cb1 is 1 bytes inside a block of size 2 free'd
==387820==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387820==    by 0x4076F3: f_search_bn (get_next_line_utils.c:119)
==387820==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387820==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387820==    by 0x406A75: main (mandatory.cpp:119)
==387820==  Block was alloc'd at
==387820==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387820==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==387820==    by 0x40738B: get_next_line (get_next_line.c:48)
==387820==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387820==    by 0x406A75: main (mandatory.cpp:119)
==387820== 
==387820== Syscall param read(buf) points to unaddressable byte(s)
==387820==    at 0x4CB8992: read (read.c:26)
==387820==    by 0x40733B: get_next_line (get_next_line.c:37)
==387820==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387820==    by 0x406A87: main (mandatory.cpp:119)
==387820==  Address 0x4de9d50 is 0 bytes inside a block of size 2 free'd
==387820==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387820==    by 0x407602: ft_strjoin (get_next_line_utils.c:82)
==387820==    by 0x40738B: get_next_line (get_next_line.c:48)
==387820==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387820==    by 0x406A87: main (mandatory.cpp:119)
==387820==  Block was alloc'd at
==387820==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387820==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387820==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387820==    by 0x406A87: main (mandatory.cpp:119)
==387820== 
==387820== Invalid write of size 1
==387820==    at 0x40734C: get_next_line (get_next_line.c:38)
==387820==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387820==    by 0x406A87: main (mandatory.cpp:119)
==387820==  Address 0x4de9d51 is 1 bytes inside a block of size 2 free'd
==387820==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387820==    by 0x407602: ft_strjoin (get_next_line_utils.c:82)
==387820==    by 0x40738B: get_next_line (get_next_line.c:48)
==387820==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387820==    by 0x406A87: main (mandatory.cpp:119)
==387820==  Block was alloc'd at
==387820==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387820==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387820==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387820==    by 0x406A87: main (mandatory.cpp:119)
==387820== 
==387820== Invalid read of size 1
==387820==    at 0x4075DB: ft_strjoin (get_next_line_utils.c:75)
==387820==    by 0x40738B: get_next_line (get_next_line.c:48)
==387820==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387820==    by 0x406A87: main (mandatory.cpp:119)
==387820==  Address 0x4de9d51 is 1 bytes inside a block of size 2 free'd
==387820==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387820==    by 0x407602: ft_strjoin (get_next_line_utils.c:82)
==387820==    by 0x40738B: get_next_line (get_next_line.c:48)
==387820==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387820==    by 0x406A87: main (mandatory.cpp:119)
==387820==  Block was alloc'd at
==387820==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387820==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387820==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387820==    by 0x406A87: main (mandatory.cpp:119)
==387820== 
==387820== Invalid read of size 1
==387820==    at 0x407715: f_del_front_bn (get_next_line_utils.c:163)
==387820==    by 0x4073CD: get_next_line (get_next_line.c:52)
==387820==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387820==    by 0x406A87: main (mandatory.cpp:119)
==387820==  Address 0x4dead20 is 0 bytes inside a block of size 44 free'd
==387820==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387820==    by 0x4076F3: f_search_bn (get_next_line_utils.c:119)
==387820==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387820==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387820==    by 0x406A87: main (mandatory.cpp:119)
==387820==  Block was alloc'd at
==387820==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387820==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==387820==    by 0x40738B: get_next_line (get_next_line.c:48)
==387820==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387820==    by 0x406A87: main (mandatory.cpp:119)
==387820== 
==387820== Invalid free() / delete / delete[] / realloc()
==387820==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387820==    by 0x4073E0: get_next_line (get_next_line.c:53)
==387820==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387820==    by 0x406A87: main (mandatory.cpp:119)
==387820==  Address 0x4de9d50 is 0 bytes inside a block of size 2 free'd
==387820==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387820==    by 0x407602: ft_strjoin (get_next_line_utils.c:82)
==387820==    by 0x40738B: get_next_line (get_next_line.c:48)
==387820==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387820==    by 0x406A87: main (mandatory.cpp:119)
==387820==  Block was alloc'd at
==387820==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387820==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387820==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387820==    by 0x406A87: main (mandatory.cpp:119)
==387820== 
==387820== Invalid read of size 1
==387820==    at 0x40758F: ft_strjoin (get_next_line_utils.c:68)
==387820==    by 0x40738B: get_next_line (get_next_line.c:48)
==387820==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387820==    by 0x406A99: main (mandatory.cpp:119)
==387820==  Address 0x4dead4b is 43 bytes inside a block of size 44 free'd
==387820==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387820==    by 0x4076F3: f_search_bn (get_next_line_utils.c:119)
==387820==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387820==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387820==    by 0x406A87: main (mandatory.cpp:119)
==387820==  Block was alloc'd at
==387820==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387820==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==387820==    by 0x40738B: get_next_line (get_next_line.c:48)
==387820==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387820==    by 0x406A87: main (mandatory.cpp:119)
==387820== 
==387820== Invalid read of size 1
==387820==    at 0x407715: f_del_front_bn (get_next_line_utils.c:163)
==387820==    by 0x4073CD: get_next_line (get_next_line.c:52)
==387820==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387820==    by 0x406A99: main (mandatory.cpp:119)
==387820==  Address 0x4deae50 is 0 bytes inside a block of size 2 free'd
==387820==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387820==    by 0x4076F3: f_search_bn (get_next_line_utils.c:119)
==387820==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387820==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387820==    by 0x406A99: main (mandatory.cpp:119)
==387820==  Block was alloc'd at
==387820==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387820==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==387820==    by 0x40738B: get_next_line (get_next_line.c:48)
==387820==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387820==    by 0x406A99: main (mandatory.cpp:119)
==387820== 
==387820== Invalid free() / delete / delete[] / realloc()
==387820==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387820==    by 0x4073E0: get_next_line (get_next_line.c:53)
==387820==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387820==    by 0x406A99: main (mandatory.cpp:119)
==387820==  Address 0x4deae00 is 0 bytes inside a block of size 2 free'd
==387820==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387820==    by 0x407602: ft_strjoin (get_next_line_utils.c:82)
==387820==    by 0x40738B: get_next_line (get_next_line.c:48)
==387820==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387820==    by 0x406A99: main (mandatory.cpp:119)
==387820==  Block was alloc'd at
==387820==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387820==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387820==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387820==    by 0x406A99: main (mandatory.cpp:119)
==387820== 
==387820== Invalid read of size 1
==387820==    at 0x40758F: ft_strjoin (get_next_line_utils.c:68)
==387820==    by 0x40738B: get_next_line (get_next_line.c:48)
==387820==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387820==    by 0x406AAB: main (mandatory.cpp:119)
==387820==  Address 0x4deae51 is 1 bytes inside a block of size 2 free'd
==387820==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387820==    by 0x4076F3: f_search_bn (get_next_line_utils.c:119)
==387820==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387820==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387820==    by 0x406A99: main (mandatory.cpp:119)
==387820==  Block was alloc'd at
==387820==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387820==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==387820==    by 0x40738B: get_next_line (get_next_line.c:48)
==387820==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387820==    by 0x406A99: main (mandatory.cpp:119)
==387820== 
==387820== Syscall param read(buf) points to unaddressable byte(s)
==387820==    at 0x4CB8992: read (read.c:26)
==387820==    by 0x40733B: get_next_line (get_next_line.c:37)
==387820==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387820==    by 0x406AAB: main (mandatory.cpp:119)
==387820==  Address 0x4deaef0 is 0 bytes inside a block of size 2 free'd
==387820==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387820==    by 0x407602: ft_strjoin (get_next_line_utils.c:82)
==387820==    by 0x40738B: get_next_line (get_next_line.c:48)
==387820==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387820==    by 0x406AAB: main (mandatory.cpp:119)
==387820==  Block was alloc'd at
==387820==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387820==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387820==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387820==    by 0x406AAB: main (mandatory.cpp:119)
==387820== 
==387820== Invalid write of size 1
==387820==    at 0x40734C: get_next_line (get_next_line.c:38)
==387820==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387820==    by 0x406AAB: main (mandatory.cpp:119)
==387820==  Address 0x4deaef1 is 1 bytes inside a block of size 2 free'd
==387820==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387820==    by 0x407602: ft_strjoin (get_next_line_utils.c:82)
==387820==    by 0x40738B: get_next_line (get_next_line.c:48)
==387820==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387820==    by 0x406AAB: main (mandatory.cpp:119)
==387820==  Block was alloc'd at
==387820==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387820==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387820==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387820==    by 0x406AAB: main (mandatory.cpp:119)
==387820== 
==387820== Invalid read of size 1
==387820==    at 0x4075DB: ft_strjoin (get_next_line_utils.c:75)
==387820==    by 0x40738B: get_next_line (get_next_line.c:48)
==387820==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387820==    by 0x406AAB: main (mandatory.cpp:119)
==387820==  Address 0x4deaef1 is 1 bytes inside a block of size 2 free'd
==387820==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387820==    by 0x407602: ft_strjoin (get_next_line_utils.c:82)
==387820==    by 0x40738B: get_next_line (get_next_line.c:48)
==387820==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387820==    by 0x406AAB: main (mandatory.cpp:119)
==387820==  Block was alloc'd at
==387820==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387820==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387820==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387820==    by 0x406AAB: main (mandatory.cpp:119)
==387820== 
==387820== Invalid read of size 1
==387820==    at 0x407715: f_del_front_bn (get_next_line_utils.c:163)
==387820==    by 0x4073CD: get_next_line (get_next_line.c:52)
==387820==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387820==    by 0x406AAB: main (mandatory.cpp:119)
==387820==  Address 0x4debe50 is 0 bytes inside a block of size 43 free'd
==387820==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387820==    by 0x4076F3: f_search_bn (get_next_line_utils.c:119)
==387820==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387820==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387820==    by 0x406AAB: main (mandatory.cpp:119)
==387820==  Block was alloc'd at
==387820==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387820==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==387820==    by 0x40738B: get_next_line (get_next_line.c:48)
==387820==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387820==    by 0x406AAB: main (mandatory.cpp:119)
==387820== 
==387820== Invalid free() / delete / delete[] / realloc()
==387820==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387820==    by 0x4073E0: get_next_line (get_next_line.c:53)
==387820==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387820==    by 0x406AAB: main (mandatory.cpp:119)
==387820==  Address 0x4deaef0 is 0 bytes inside a block of size 2 free'd
==387820==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387820==    by 0x407602: ft_strjoin (get_next_line_utils.c:82)
==387820==    by 0x40738B: get_next_line (get_next_line.c:48)
==387820==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387820==    by 0x406AAB: main (mandatory.cpp:119)
==387820==  Block was alloc'd at
==387820==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387820==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387820==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387820==    by 0x406AAB: main (mandatory.cpp:119)
==387820== 
==387820== Invalid read of size 1
==387820==    at 0x40758F: ft_strjoin (get_next_line_utils.c:68)
==387820==    by 0x40738B: get_next_line (get_next_line.c:48)
==387820==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387820==    by 0x406AB7: main (mandatory.cpp:119)
==387820==  Address 0x4debe7a is 42 bytes inside a block of size 43 free'd
==387820==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387820==    by 0x4076F3: f_search_bn (get_next_line_utils.c:119)
==387820==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387820==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387820==    by 0x406AAB: main (mandatory.cpp:119)
==387820==  Block was alloc'd at
==387820==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387820==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==387820==    by 0x40738B: get_next_line (get_next_line.c:48)
==387820==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387820==    by 0x406AAB: main (mandatory.cpp:119)
==387820== 
==387820== 1 bytes in 1 blocks are definitely lost in loss record 1 of 6
==387820==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387820==    by 0x407364: get_next_line (get_next_line.c:43)
==387820==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387820==    by 0x406A1B: main (mandatory.cpp:119)
==387820== 
==387820== 902 bytes in 41 blocks are definitely lost in loss record 2 of 6
==387820==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387820==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==387820==    by 0x40738B: get_next_line (get_next_line.c:48)
==387820==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387820==    by 0x406A1B: main (mandatory.cpp:119)
==387820== 
==387820== 902 bytes in 41 blocks are definitely lost in loss record 3 of 6
==387820==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387820==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==387820==    by 0x40738B: get_next_line (get_next_line.c:48)
==387820==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387820==    by 0x406AAB: main (mandatory.cpp:119)
==387820== 
==387820== 945 bytes in 42 blocks are definitely lost in loss record 4 of 6
==387820==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387820==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==387820==    by 0x40738B: get_next_line (get_next_line.c:48)
==387820==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387820==    by 0x406A3F: main (mandatory.cpp:119)
==387820== 
==387820== 945 bytes in 42 blocks are definitely lost in loss record 5 of 6
==387820==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387820==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==387820==    by 0x40738B: get_next_line (get_next_line.c:48)
==387820==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387820==    by 0x406A87: main (mandatory.cpp:119)
==387820== 
==387820== 989 bytes in 43 blocks are definitely lost in loss record 6 of 6
==387820==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387820==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==387820==    by 0x40738B: get_next_line (get_next_line.c:48)
==387820==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387820==    by 0x406A63: main (mandatory.cpp:119)
==387820== 
==387823== Syscall param read(buf) points to unaddressable byte(s)
==387823==    at 0x4CB8992: read (read.c:26)
==387823==    by 0x40733B: get_next_line (get_next_line.c:37)
==387823==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387823==    by 0x406CD7: main (mandatory.cpp:132)
==387823==  Address 0x4de6b30 is 0 bytes inside a block of size 2 free'd
==387823==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387823==    by 0x407602: ft_strjoin (get_next_line_utils.c:82)
==387823==    by 0x40738B: get_next_line (get_next_line.c:48)
==387823==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387823==    by 0x406CD7: main (mandatory.cpp:132)
==387823==  Block was alloc'd at
==387823==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387823==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387823==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387823==    by 0x406CD7: main (mandatory.cpp:132)
==387823== 
==387823== Invalid write of size 1
==387823==    at 0x40734C: get_next_line (get_next_line.c:38)
==387823==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387823==    by 0x406CD7: main (mandatory.cpp:132)
==387823==  Address 0x4de6b31 is 1 bytes inside a block of size 2 free'd
==387823==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387823==    by 0x407602: ft_strjoin (get_next_line_utils.c:82)
==387823==    by 0x40738B: get_next_line (get_next_line.c:48)
==387823==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387823==    by 0x406CD7: main (mandatory.cpp:132)
==387823==  Block was alloc'd at
==387823==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387823==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387823==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387823==    by 0x406CD7: main (mandatory.cpp:132)
==387823== 
==387823== Invalid read of size 1
==387823==    at 0x4074E8: ft_strlen (get_next_line_utils.c:43)
==387823==    by 0x407523: ft_strjoin (get_next_line_utils.c:59)
==387823==    by 0x40738B: get_next_line (get_next_line.c:48)
==387823==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387823==    by 0x406CD7: main (mandatory.cpp:132)
==387823==  Address 0x4de6b31 is 1 bytes inside a block of size 2 free'd
==387823==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387823==    by 0x407602: ft_strjoin (get_next_line_utils.c:82)
==387823==    by 0x40738B: get_next_line (get_next_line.c:48)
==387823==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387823==    by 0x406CD7: main (mandatory.cpp:132)
==387823==  Block was alloc'd at
==387823==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387823==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387823==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387823==    by 0x406CD7: main (mandatory.cpp:132)
==387823== 
==387823== Invalid read of size 1
==387823==    at 0x4075DB: ft_strjoin (get_next_line_utils.c:75)
==387823==    by 0x40738B: get_next_line (get_next_line.c:48)
==387823==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387823==    by 0x406CD7: main (mandatory.cpp:132)
==387823==  Address 0x4de6b31 is 1 bytes inside a block of size 2 free'd
==387823==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387823==    by 0x407602: ft_strjoin (get_next_line_utils.c:82)
==387823==    by 0x40738B: get_next_line (get_next_line.c:48)
==387823==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387823==    by 0x406CD7: main (mandatory.cpp:132)
==387823==  Block was alloc'd at
==387823==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387823==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387823==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387823==    by 0x406CD7: main (mandatory.cpp:132)
==387823== 
==387823== Invalid free() / delete / delete[] / realloc()
==387823==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387823==    by 0x407602: ft_strjoin (get_next_line_utils.c:82)
==387823==    by 0x40738B: get_next_line (get_next_line.c:48)
==387823==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387823==    by 0x406CD7: main (mandatory.cpp:132)
==387823==  Address 0x4de6b30 is 0 bytes inside a block of size 2 free'd
==387823==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387823==    by 0x407602: ft_strjoin (get_next_line_utils.c:82)
==387823==    by 0x40738B: get_next_line (get_next_line.c:48)
==387823==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387823==    by 0x406CD7: main (mandatory.cpp:132)
==387823==  Block was alloc'd at
==387823==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387823==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387823==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387823==    by 0x406CD7: main (mandatory.cpp:132)
==387823== 
==387824== Syscall param read(buf) points to unaddressable byte(s)
==387824==    at 0x4CB8992: read (read.c:26)
==387824==    by 0x40733B: get_next_line (get_next_line.c:37)
==387824==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387824==    by 0x406F03: main (mandatory.cpp:136)
==387824==  Address 0x4de6e40 is 0 bytes inside a block of size 2 free'd
==387824==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387824==    by 0x407602: ft_strjoin (get_next_line_utils.c:82)
==387824==    by 0x40738B: get_next_line (get_next_line.c:48)
==387824==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387824==    by 0x406F03: main (mandatory.cpp:136)
==387824==  Block was alloc'd at
==387824==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387824==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387824==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387824==    by 0x406F03: main (mandatory.cpp:136)
==387824== 
==387824== Invalid write of size 1
==387824==    at 0x40734C: get_next_line (get_next_line.c:38)
==387824==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387824==    by 0x406F03: main (mandatory.cpp:136)
==387824==  Address 0x4de6e41 is 1 bytes inside a block of size 2 free'd
==387824==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387824==    by 0x407602: ft_strjoin (get_next_line_utils.c:82)
==387824==    by 0x40738B: get_next_line (get_next_line.c:48)
==387824==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387824==    by 0x406F03: main (mandatory.cpp:136)
==387824==  Block was alloc'd at
==387824==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387824==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387824==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387824==    by 0x406F03: main (mandatory.cpp:136)
==387824== 
==387824== Invalid read of size 1
==387824==    at 0x4074E8: ft_strlen (get_next_line_utils.c:43)
==387824==    by 0x407523: ft_strjoin (get_next_line_utils.c:59)
==387824==    by 0x40738B: get_next_line (get_next_line.c:48)
==387824==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387824==    by 0x406F03: main (mandatory.cpp:136)
==387824==  Address 0x4de6e41 is 1 bytes inside a block of size 2 free'd
==387824==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387824==    by 0x407602: ft_strjoin (get_next_line_utils.c:82)
==387824==    by 0x40738B: get_next_line (get_next_line.c:48)
==387824==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387824==    by 0x406F03: main (mandatory.cpp:136)
==387824==  Block was alloc'd at
==387824==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387824==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387824==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387824==    by 0x406F03: main (mandatory.cpp:136)
==387824== 
==387824== Invalid read of size 1
==387824==    at 0x4075DB: ft_strjoin (get_next_line_utils.c:75)
==387824==    by 0x40738B: get_next_line (get_next_line.c:48)
==387824==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387824==    by 0x406F03: main (mandatory.cpp:136)
==387824==  Address 0x4de6e41 is 1 bytes inside a block of size 2 free'd
==387824==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387824==    by 0x407602: ft_strjoin (get_next_line_utils.c:82)
==387824==    by 0x40738B: get_next_line (get_next_line.c:48)
==387824==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387824==    by 0x406F03: main (mandatory.cpp:136)
==387824==  Block was alloc'd at
==387824==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387824==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387824==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387824==    by 0x406F03: main (mandatory.cpp:136)
==387824== 
==387824== Invalid free() / delete / delete[] / realloc()
==387824==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387824==    by 0x407602: ft_strjoin (get_next_line_utils.c:82)
==387824==    by 0x40738B: get_next_line (get_next_line.c:48)
==387824==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387824==    by 0x406F03: main (mandatory.cpp:136)
==387824==  Address 0x4de6e40 is 0 bytes inside a block of size 2 free'd
==387824==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387824==    by 0x407602: ft_strjoin (get_next_line_utils.c:82)
==387824==    by 0x40738B: get_next_line (get_next_line.c:48)
==387824==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387824==    by 0x406F03: main (mandatory.cpp:136)
==387824==  Block was alloc'd at
==387824==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387824==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387824==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387824==    by 0x406F03: main (mandatory.cpp:136)
==387824== 
==387827== Syscall param read(buf) points to unaddressable byte(s)
==387827==    at 0x4CB8992: read (read.c:26)
==387827==    by 0x40733B: get_next_line (get_next_line.c:37)
==387827==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387827==    by 0x40712E: main (mandatory.cpp:141)
==387827==  Address 0x4de6e40 is 0 bytes inside a block of size 2 free'd
==387827==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387827==    by 0x407602: ft_strjoin (get_next_line_utils.c:82)
==387827==    by 0x40738B: get_next_line (get_next_line.c:48)
==387827==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387827==    by 0x40712E: main (mandatory.cpp:141)
==387827==  Block was alloc'd at
==387827==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387827==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387827==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387827==    by 0x40712E: main (mandatory.cpp:141)
==387827== 
==387827== Invalid write of size 1
==387827==    at 0x40734C: get_next_line (get_next_line.c:38)
==387827==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387827==    by 0x40712E: main (mandatory.cpp:141)
==387827==  Address 0x4de6e41 is 1 bytes inside a block of size 2 free'd
==387827==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387827==    by 0x407602: ft_strjoin (get_next_line_utils.c:82)
==387827==    by 0x40738B: get_next_line (get_next_line.c:48)
==387827==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387827==    by 0x40712E: main (mandatory.cpp:141)
==387827==  Block was alloc'd at
==387827==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387827==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387827==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387827==    by 0x40712E: main (mandatory.cpp:141)
==387827== 
==387827== Invalid read of size 1
==387827==    at 0x4074E8: ft_strlen (get_next_line_utils.c:43)
==387827==    by 0x407523: ft_strjoin (get_next_line_utils.c:59)
==387827==    by 0x40738B: get_next_line (get_next_line.c:48)
==387827==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387827==    by 0x40712E: main (mandatory.cpp:141)
==387827==  Address 0x4de6e41 is 1 bytes inside a block of size 2 free'd
==387827==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387827==    by 0x407602: ft_strjoin (get_next_line_utils.c:82)
==387827==    by 0x40738B: get_next_line (get_next_line.c:48)
==387827==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387827==    by 0x40712E: main (mandatory.cpp:141)
==387827==  Block was alloc'd at
==387827==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387827==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387827==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387827==    by 0x40712E: main (mandatory.cpp:141)
==387827== 
==387827== Invalid read of size 1
==387827==    at 0x4075DB: ft_strjoin (get_next_line_utils.c:75)
==387827==    by 0x40738B: get_next_line (get_next_line.c:48)
==387827==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387827==    by 0x40712E: main (mandatory.cpp:141)
==387827==  Address 0x4de6e41 is 1 bytes inside a block of size 2 free'd
==387827==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387827==    by 0x407602: ft_strjoin (get_next_line_utils.c:82)
==387827==    by 0x40738B: get_next_line (get_next_line.c:48)
==387827==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387827==    by 0x40712E: main (mandatory.cpp:141)
==387827==  Block was alloc'd at
==387827==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387827==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387827==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387827==    by 0x40712E: main (mandatory.cpp:141)
==387827== 
==387827== Invalid free() / delete / delete[] / realloc()
==387827==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387827==    by 0x407602: ft_strjoin (get_next_line_utils.c:82)
==387827==    by 0x40738B: get_next_line (get_next_line.c:48)
==387827==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387827==    by 0x40712E: main (mandatory.cpp:141)
==387827==  Address 0x4de6e40 is 0 bytes inside a block of size 2 free'd
==387827==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387827==    by 0x407602: ft_strjoin (get_next_line_utils.c:82)
==387827==    by 0x40738B: get_next_line (get_next_line.c:48)
==387827==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387827==    by 0x40712E: main (mandatory.cpp:141)
==387827==  Block was alloc'd at
==387827==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387827==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387827==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387827==    by 0x40712E: main (mandatory.cpp:141)
==387827== 
==387827== Invalid read of size 1
==387827==    at 0x407715: f_del_front_bn (get_next_line_utils.c:163)
==387827==    by 0x4073CD: get_next_line (get_next_line.c:52)
==387827==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387827==    by 0x40712E: main (mandatory.cpp:141)
==387827==  Address 0x4de7df0 is 0 bytes inside a block of size 43 free'd
==387827==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387827==    by 0x4076F3: f_search_bn (get_next_line_utils.c:119)
==387827==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387827==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387827==    by 0x40712E: main (mandatory.cpp:141)
==387827==  Block was alloc'd at
==387827==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387827==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==387827==    by 0x40738B: get_next_line (get_next_line.c:48)
==387827==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387827==    by 0x40712E: main (mandatory.cpp:141)
==387827== 
==387827== Invalid free() / delete / delete[] / realloc()
==387827==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387827==    by 0x4073E0: get_next_line (get_next_line.c:53)
==387827==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387827==    by 0x40712E: main (mandatory.cpp:141)
==387827==  Address 0x4de6e40 is 0 bytes inside a block of size 2 free'd
==387827==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387827==    by 0x407602: ft_strjoin (get_next_line_utils.c:82)
==387827==    by 0x40738B: get_next_line (get_next_line.c:48)
==387827==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387827==    by 0x40712E: main (mandatory.cpp:141)
==387827==  Block was alloc'd at
==387827==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387827==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387827==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387827==    by 0x40712E: main (mandatory.cpp:141)
==387827== 
==387827== Invalid read of size 1
==387827==    at 0x4074E8: ft_strlen (get_next_line_utils.c:43)
==387827==    by 0x407515: ft_strjoin (get_next_line_utils.c:59)
==387827==    by 0x40738B: get_next_line (get_next_line.c:48)
==387827==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387827==    by 0x40713F: main (mandatory.cpp:141)
==387827==  Address 0x4de7e1a is 42 bytes inside a block of size 43 free'd
==387827==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387827==    by 0x4076F3: f_search_bn (get_next_line_utils.c:119)
==387827==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387827==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387827==    by 0x40712E: main (mandatory.cpp:141)
==387827==  Block was alloc'd at
==387827==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387827==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==387827==    by 0x40738B: get_next_line (get_next_line.c:48)
==387827==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387827==    by 0x40712E: main (mandatory.cpp:141)
==387827== 
==387827== Invalid read of size 1
==387827==    at 0x40758F: ft_strjoin (get_next_line_utils.c:68)
==387827==    by 0x40738B: get_next_line (get_next_line.c:48)
==387827==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387827==    by 0x40713F: main (mandatory.cpp:141)
==387827==  Address 0x4de7e1a is 42 bytes inside a block of size 43 free'd
==387827==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387827==    by 0x4076F3: f_search_bn (get_next_line_utils.c:119)
==387827==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387827==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387827==    by 0x40712E: main (mandatory.cpp:141)
==387827==  Block was alloc'd at
==387827==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387827==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==387827==    by 0x40738B: get_next_line (get_next_line.c:48)
==387827==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387827==    by 0x40712E: main (mandatory.cpp:141)
==387827== 
==387827== Invalid read of size 1
==387827==    at 0x407715: f_del_front_bn (get_next_line_utils.c:163)
==387827==    by 0x4073CD: get_next_line (get_next_line.c:52)
==387827==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387827==    by 0x40713F: main (mandatory.cpp:141)
==387827==  Address 0x4de7f20 is 0 bytes inside a block of size 2 free'd
==387827==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387827==    by 0x4076F3: f_search_bn (get_next_line_utils.c:119)
==387827==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387827==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387827==    by 0x40713F: main (mandatory.cpp:141)
==387827==  Block was alloc'd at
==387827==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387827==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==387827==    by 0x40738B: get_next_line (get_next_line.c:48)
==387827==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387827==    by 0x40713F: main (mandatory.cpp:141)
==387827== 
==387827== Invalid free() / delete / delete[] / realloc()
==387827==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387827==    by 0x4073E0: get_next_line (get_next_line.c:53)
==387827==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387827==    by 0x40713F: main (mandatory.cpp:141)
==387827==  Address 0x4de7ed0 is 0 bytes inside a block of size 2 free'd
==387827==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387827==    by 0x407602: ft_strjoin (get_next_line_utils.c:82)
==387827==    by 0x40738B: get_next_line (get_next_line.c:48)
==387827==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387827==    by 0x40713F: main (mandatory.cpp:141)
==387827==  Block was alloc'd at
==387827==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387827==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387827==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387827==    by 0x40713F: main (mandatory.cpp:141)
==387827== 
==387827== Invalid read of size 1
==387827==    at 0x40758F: ft_strjoin (get_next_line_utils.c:68)
==387827==    by 0x40738B: get_next_line (get_next_line.c:48)
==387827==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387827==    by 0x407150: main (mandatory.cpp:141)
==387827==  Address 0x4de7f21 is 1 bytes inside a block of size 2 free'd
==387827==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387827==    by 0x4076F3: f_search_bn (get_next_line_utils.c:119)
==387827==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387827==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387827==    by 0x40713F: main (mandatory.cpp:141)
==387827==  Block was alloc'd at
==387827==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387827==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==387827==    by 0x40738B: get_next_line (get_next_line.c:48)
==387827==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387827==    by 0x40713F: main (mandatory.cpp:141)
==387827== 
==387827== Syscall param read(buf) points to unaddressable byte(s)
==387827==    at 0x4CB8992: read (read.c:26)
==387827==    by 0x40733B: get_next_line (get_next_line.c:37)
==387827==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387827==    by 0x407150: main (mandatory.cpp:141)
==387827==  Address 0x4de7fc0 is 0 bytes inside a block of size 2 free'd
==387827==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387827==    by 0x407602: ft_strjoin (get_next_line_utils.c:82)
==387827==    by 0x40738B: get_next_line (get_next_line.c:48)
==387827==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387827==    by 0x407150: main (mandatory.cpp:141)
==387827==  Block was alloc'd at
==387827==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387827==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387827==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387827==    by 0x407150: main (mandatory.cpp:141)
==387827== 
==387827== Invalid write of size 1
==387827==    at 0x40734C: get_next_line (get_next_line.c:38)
==387827==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387827==    by 0x407150: main (mandatory.cpp:141)
==387827==  Address 0x4de7fc1 is 1 bytes inside a block of size 2 free'd
==387827==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387827==    by 0x407602: ft_strjoin (get_next_line_utils.c:82)
==387827==    by 0x40738B: get_next_line (get_next_line.c:48)
==387827==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387827==    by 0x407150: main (mandatory.cpp:141)
==387827==  Block was alloc'd at
==387827==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387827==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387827==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387827==    by 0x407150: main (mandatory.cpp:141)
==387827== 
==387827== Invalid read of size 1
==387827==    at 0x4075DB: ft_strjoin (get_next_line_utils.c:75)
==387827==    by 0x40738B: get_next_line (get_next_line.c:48)
==387827==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387827==    by 0x407150: main (mandatory.cpp:141)
==387827==  Address 0x4de7fc1 is 1 bytes inside a block of size 2 free'd
==387827==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387827==    by 0x407602: ft_strjoin (get_next_line_utils.c:82)
==387827==    by 0x40738B: get_next_line (get_next_line.c:48)
==387827==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387827==    by 0x407150: main (mandatory.cpp:141)
==387827==  Block was alloc'd at
==387827==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387827==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387827==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387827==    by 0x407150: main (mandatory.cpp:141)
==387827== 
==387827== Invalid read of size 1
==387827==    at 0x407715: f_del_front_bn (get_next_line_utils.c:163)
==387827==    by 0x4073CD: get_next_line (get_next_line.c:52)
==387827==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387827==    by 0x407150: main (mandatory.cpp:141)
==387827==  Address 0x4de8f90 is 0 bytes inside a block of size 44 free'd
==387827==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387827==    by 0x4076F3: f_search_bn (get_next_line_utils.c:119)
==387827==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387827==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387827==    by 0x407150: main (mandatory.cpp:141)
==387827==  Block was alloc'd at
==387827==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387827==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==387827==    by 0x40738B: get_next_line (get_next_line.c:48)
==387827==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387827==    by 0x407150: main (mandatory.cpp:141)
==387827== 
==387827== Invalid free() / delete / delete[] / realloc()
==387827==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387827==    by 0x4073E0: get_next_line (get_next_line.c:53)
==387827==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387827==    by 0x407150: main (mandatory.cpp:141)
==387827==  Address 0x4de7fc0 is 0 bytes inside a block of size 2 free'd
==387827==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387827==    by 0x407602: ft_strjoin (get_next_line_utils.c:82)
==387827==    by 0x40738B: get_next_line (get_next_line.c:48)
==387827==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387827==    by 0x407150: main (mandatory.cpp:141)
==387827==  Block was alloc'd at
==387827==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387827==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387827==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387827==    by 0x407150: main (mandatory.cpp:141)
==387827== 
==387827== Invalid read of size 1
==387827==    at 0x40758F: ft_strjoin (get_next_line_utils.c:68)
==387827==    by 0x40738B: get_next_line (get_next_line.c:48)
==387827==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387827==    by 0x407161: main (mandatory.cpp:141)
==387827==  Address 0x4de8fbb is 43 bytes inside a block of size 44 free'd
==387827==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387827==    by 0x4076F3: f_search_bn (get_next_line_utils.c:119)
==387827==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387827==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387827==    by 0x407150: main (mandatory.cpp:141)
==387827==  Block was alloc'd at
==387827==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387827==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==387827==    by 0x40738B: get_next_line (get_next_line.c:48)
==387827==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387827==    by 0x407150: main (mandatory.cpp:141)
==387827== 
==387827== Invalid read of size 1
==387827==    at 0x407715: f_del_front_bn (get_next_line_utils.c:163)
==387827==    by 0x4073CD: get_next_line (get_next_line.c:52)
==387827==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387827==    by 0x407161: main (mandatory.cpp:141)
==387827==  Address 0x4de90c0 is 0 bytes inside a block of size 2 free'd
==387827==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387827==    by 0x4076F3: f_search_bn (get_next_line_utils.c:119)
==387827==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387827==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387827==    by 0x407161: main (mandatory.cpp:141)
==387827==  Block was alloc'd at
==387827==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387827==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==387827==    by 0x40738B: get_next_line (get_next_line.c:48)
==387827==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387827==    by 0x407161: main (mandatory.cpp:141)
==387827== 
==387827== Invalid free() / delete / delete[] / realloc()
==387827==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387827==    by 0x4073E0: get_next_line (get_next_line.c:53)
==387827==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387827==    by 0x407161: main (mandatory.cpp:141)
==387827==  Address 0x4de9070 is 0 bytes inside a block of size 2 free'd
==387827==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387827==    by 0x407602: ft_strjoin (get_next_line_utils.c:82)
==387827==    by 0x40738B: get_next_line (get_next_line.c:48)
==387827==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387827==    by 0x407161: main (mandatory.cpp:141)
==387827==  Block was alloc'd at
==387827==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387827==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387827==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387827==    by 0x407161: main (mandatory.cpp:141)
==387827== 
==387827== Invalid read of size 1
==387827==    at 0x40758F: ft_strjoin (get_next_line_utils.c:68)
==387827==    by 0x40738B: get_next_line (get_next_line.c:48)
==387827==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387827==    by 0x407172: main (mandatory.cpp:141)
==387827==  Address 0x4de90c1 is 1 bytes inside a block of size 2 free'd
==387827==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387827==    by 0x4076F3: f_search_bn (get_next_line_utils.c:119)
==387827==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387827==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387827==    by 0x407161: main (mandatory.cpp:141)
==387827==  Block was alloc'd at
==387827==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387827==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==387827==    by 0x40738B: get_next_line (get_next_line.c:48)
==387827==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387827==    by 0x407161: main (mandatory.cpp:141)
==387827== 
==387827== Syscall param read(buf) points to unaddressable byte(s)
==387827==    at 0x4CB8992: read (read.c:26)
==387827==    by 0x40733B: get_next_line (get_next_line.c:37)
==387827==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387827==    by 0x407172: main (mandatory.cpp:141)
==387827==  Address 0x4de9160 is 0 bytes inside a block of size 2 free'd
==387827==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387827==    by 0x407602: ft_strjoin (get_next_line_utils.c:82)
==387827==    by 0x40738B: get_next_line (get_next_line.c:48)
==387827==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387827==    by 0x407172: main (mandatory.cpp:141)
==387827==  Block was alloc'd at
==387827==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387827==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387827==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387827==    by 0x407172: main (mandatory.cpp:141)
==387827== 
==387827== Invalid write of size 1
==387827==    at 0x40734C: get_next_line (get_next_line.c:38)
==387827==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387827==    by 0x407172: main (mandatory.cpp:141)
==387827==  Address 0x4de9161 is 1 bytes inside a block of size 2 free'd
==387827==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387827==    by 0x407602: ft_strjoin (get_next_line_utils.c:82)
==387827==    by 0x40738B: get_next_line (get_next_line.c:48)
==387827==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387827==    by 0x407172: main (mandatory.cpp:141)
==387827==  Block was alloc'd at
==387827==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387827==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387827==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387827==    by 0x407172: main (mandatory.cpp:141)
==387827== 
==387827== Invalid read of size 1
==387827==    at 0x4075DB: ft_strjoin (get_next_line_utils.c:75)
==387827==    by 0x40738B: get_next_line (get_next_line.c:48)
==387827==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387827==    by 0x407172: main (mandatory.cpp:141)
==387827==  Address 0x4de9161 is 1 bytes inside a block of size 2 free'd
==387827==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387827==    by 0x407602: ft_strjoin (get_next_line_utils.c:82)
==387827==    by 0x40738B: get_next_line (get_next_line.c:48)
==387827==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387827==    by 0x407172: main (mandatory.cpp:141)
==387827==  Block was alloc'd at
==387827==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387827==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387827==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387827==    by 0x407172: main (mandatory.cpp:141)
==387827== 
==387827== Invalid read of size 1
==387827==    at 0x407715: f_del_front_bn (get_next_line_utils.c:163)
==387827==    by 0x4073CD: get_next_line (get_next_line.c:52)
==387827==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387827==    by 0x407172: main (mandatory.cpp:141)
==387827==  Address 0x4dea1a0 is 0 bytes inside a block of size 45 free'd
==387827==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387827==    by 0x4076F3: f_search_bn (get_next_line_utils.c:119)
==387827==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387827==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387827==    by 0x407172: main (mandatory.cpp:141)
==387827==  Block was alloc'd at
==387827==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387827==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==387827==    by 0x40738B: get_next_line (get_next_line.c:48)
==387827==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387827==    by 0x407172: main (mandatory.cpp:141)
==387827== 
==387827== Invalid free() / delete / delete[] / realloc()
==387827==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387827==    by 0x4073E0: get_next_line (get_next_line.c:53)
==387827==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387827==    by 0x407172: main (mandatory.cpp:141)
==387827==  Address 0x4de9160 is 0 bytes inside a block of size 2 free'd
==387827==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387827==    by 0x407602: ft_strjoin (get_next_line_utils.c:82)
==387827==    by 0x40738B: get_next_line (get_next_line.c:48)
==387827==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387827==    by 0x407172: main (mandatory.cpp:141)
==387827==  Block was alloc'd at
==387827==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387827==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387827==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387827==    by 0x407172: main (mandatory.cpp:141)
==387827== 
==387827== Invalid read of size 1
==387827==    at 0x40758F: ft_strjoin (get_next_line_utils.c:68)
==387827==    by 0x40738B: get_next_line (get_next_line.c:48)
==387827==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387827==    by 0x407183: main (mandatory.cpp:141)
==387827==  Address 0x4dea1cc is 44 bytes inside a block of size 45 free'd
==387827==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387827==    by 0x4076F3: f_search_bn (get_next_line_utils.c:119)
==387827==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387827==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387827==    by 0x407172: main (mandatory.cpp:141)
==387827==  Block was alloc'd at
==387827==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387827==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==387827==    by 0x40738B: get_next_line (get_next_line.c:48)
==387827==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387827==    by 0x407172: main (mandatory.cpp:141)
==387827== 
==387827== Invalid read of size 1
==387827==    at 0x407715: f_del_front_bn (get_next_line_utils.c:163)
==387827==    by 0x4073CD: get_next_line (get_next_line.c:52)
==387827==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387827==    by 0x407183: main (mandatory.cpp:141)
==387827==  Address 0x4dea2d0 is 0 bytes inside a block of size 2 free'd
==387827==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387827==    by 0x4076F3: f_search_bn (get_next_line_utils.c:119)
==387827==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387827==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387827==    by 0x407183: main (mandatory.cpp:141)
==387827==  Block was alloc'd at
==387827==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387827==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==387827==    by 0x40738B: get_next_line (get_next_line.c:48)
==387827==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387827==    by 0x407183: main (mandatory.cpp:141)
==387827== 
==387827== Invalid free() / delete / delete[] / realloc()
==387827==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387827==    by 0x4073E0: get_next_line (get_next_line.c:53)
==387827==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387827==    by 0x407183: main (mandatory.cpp:141)
==387827==  Address 0x4dea280 is 0 bytes inside a block of size 2 free'd
==387827==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387827==    by 0x407602: ft_strjoin (get_next_line_utils.c:82)
==387827==    by 0x40738B: get_next_line (get_next_line.c:48)
==387827==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387827==    by 0x407183: main (mandatory.cpp:141)
==387827==  Block was alloc'd at
==387827==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387827==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387827==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387827==    by 0x407183: main (mandatory.cpp:141)
==387827== 
==387827== Invalid read of size 1
==387827==    at 0x40758F: ft_strjoin (get_next_line_utils.c:68)
==387827==    by 0x40738B: get_next_line (get_next_line.c:48)
==387827==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387827==    by 0x407194: main (mandatory.cpp:141)
==387827==  Address 0x4dea2d1 is 1 bytes inside a block of size 2 free'd
==387827==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387827==    by 0x4076F3: f_search_bn (get_next_line_utils.c:119)
==387827==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387827==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387827==    by 0x407183: main (mandatory.cpp:141)
==387827==  Block was alloc'd at
==387827==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387827==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==387827==    by 0x40738B: get_next_line (get_next_line.c:48)
==387827==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387827==    by 0x407183: main (mandatory.cpp:141)
==387827== 
==387827== Syscall param read(buf) points to unaddressable byte(s)
==387827==    at 0x4CB8992: read (read.c:26)
==387827==    by 0x40733B: get_next_line (get_next_line.c:37)
==387827==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387827==    by 0x407194: main (mandatory.cpp:141)
==387827==  Address 0x4dea370 is 0 bytes inside a block of size 2 free'd
==387827==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387827==    by 0x407602: ft_strjoin (get_next_line_utils.c:82)
==387827==    by 0x40738B: get_next_line (get_next_line.c:48)
==387827==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387827==    by 0x407194: main (mandatory.cpp:141)
==387827==  Block was alloc'd at
==387827==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387827==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387827==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387827==    by 0x407194: main (mandatory.cpp:141)
==387827== 
==387827== Invalid write of size 1
==387827==    at 0x40734C: get_next_line (get_next_line.c:38)
==387827==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387827==    by 0x407194: main (mandatory.cpp:141)
==387827==  Address 0x4dea371 is 1 bytes inside a block of size 2 free'd
==387827==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387827==    by 0x407602: ft_strjoin (get_next_line_utils.c:82)
==387827==    by 0x40738B: get_next_line (get_next_line.c:48)
==387827==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387827==    by 0x407194: main (mandatory.cpp:141)
==387827==  Block was alloc'd at
==387827==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387827==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387827==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387827==    by 0x407194: main (mandatory.cpp:141)
==387827== 
==387827== Invalid read of size 1
==387827==    at 0x4075DB: ft_strjoin (get_next_line_utils.c:75)
==387827==    by 0x40738B: get_next_line (get_next_line.c:48)
==387827==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387827==    by 0x407194: main (mandatory.cpp:141)
==387827==  Address 0x4dea371 is 1 bytes inside a block of size 2 free'd
==387827==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387827==    by 0x407602: ft_strjoin (get_next_line_utils.c:82)
==387827==    by 0x40738B: get_next_line (get_next_line.c:48)
==387827==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387827==    by 0x407194: main (mandatory.cpp:141)
==387827==  Block was alloc'd at
==387827==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387827==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387827==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387827==    by 0x407194: main (mandatory.cpp:141)
==387827== 
==387827== Invalid read of size 1
==387827==    at 0x407715: f_del_front_bn (get_next_line_utils.c:163)
==387827==    by 0x4073CD: get_next_line (get_next_line.c:52)
==387827==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387827==    by 0x407194: main (mandatory.cpp:141)
==387827==  Address 0x4deb340 is 0 bytes inside a block of size 44 free'd
==387827==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387827==    by 0x4076F3: f_search_bn (get_next_line_utils.c:119)
==387827==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387827==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387827==    by 0x407194: main (mandatory.cpp:141)
==387827==  Block was alloc'd at
==387827==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387827==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==387827==    by 0x40738B: get_next_line (get_next_line.c:48)
==387827==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387827==    by 0x407194: main (mandatory.cpp:141)
==387827== 
==387827== Invalid free() / delete / delete[] / realloc()
==387827==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387827==    by 0x4073E0: get_next_line (get_next_line.c:53)
==387827==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387827==    by 0x407194: main (mandatory.cpp:141)
==387827==  Address 0x4dea370 is 0 bytes inside a block of size 2 free'd
==387827==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387827==    by 0x407602: ft_strjoin (get_next_line_utils.c:82)
==387827==    by 0x40738B: get_next_line (get_next_line.c:48)
==387827==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387827==    by 0x407194: main (mandatory.cpp:141)
==387827==  Block was alloc'd at
==387827==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387827==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387827==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387827==    by 0x407194: main (mandatory.cpp:141)
==387827== 
==387827== Invalid read of size 1
==387827==    at 0x40758F: ft_strjoin (get_next_line_utils.c:68)
==387827==    by 0x40738B: get_next_line (get_next_line.c:48)
==387827==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387827==    by 0x4071A5: main (mandatory.cpp:141)
==387827==  Address 0x4deb36b is 43 bytes inside a block of size 44 free'd
==387827==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387827==    by 0x4076F3: f_search_bn (get_next_line_utils.c:119)
==387827==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387827==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387827==    by 0x407194: main (mandatory.cpp:141)
==387827==  Block was alloc'd at
==387827==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387827==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==387827==    by 0x40738B: get_next_line (get_next_line.c:48)
==387827==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387827==    by 0x407194: main (mandatory.cpp:141)
==387827== 
==387827== Invalid read of size 1
==387827==    at 0x407715: f_del_front_bn (get_next_line_utils.c:163)
==387827==    by 0x4073CD: get_next_line (get_next_line.c:52)
==387827==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387827==    by 0x4071A5: main (mandatory.cpp:141)
==387827==  Address 0x4deb470 is 0 bytes inside a block of size 2 free'd
==387827==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387827==    by 0x4076F3: f_search_bn (get_next_line_utils.c:119)
==387827==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387827==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387827==    by 0x4071A5: main (mandatory.cpp:141)
==387827==  Block was alloc'd at
==387827==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387827==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==387827==    by 0x40738B: get_next_line (get_next_line.c:48)
==387827==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387827==    by 0x4071A5: main (mandatory.cpp:141)
==387827== 
==387827== Invalid free() / delete / delete[] / realloc()
==387827==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387827==    by 0x4073E0: get_next_line (get_next_line.c:53)
==387827==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387827==    by 0x4071A5: main (mandatory.cpp:141)
==387827==  Address 0x4deb420 is 0 bytes inside a block of size 2 free'd
==387827==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387827==    by 0x407602: ft_strjoin (get_next_line_utils.c:82)
==387827==    by 0x40738B: get_next_line (get_next_line.c:48)
==387827==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387827==    by 0x4071A5: main (mandatory.cpp:141)
==387827==  Block was alloc'd at
==387827==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387827==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387827==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387827==    by 0x4071A5: main (mandatory.cpp:141)
==387827== 
==387827== Invalid read of size 1
==387827==    at 0x40758F: ft_strjoin (get_next_line_utils.c:68)
==387827==    by 0x40738B: get_next_line (get_next_line.c:48)
==387827==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387827==    by 0x4071B6: main (mandatory.cpp:141)
==387827==  Address 0x4deb471 is 1 bytes inside a block of size 2 free'd
==387827==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387827==    by 0x4076F3: f_search_bn (get_next_line_utils.c:119)
==387827==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387827==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387827==    by 0x4071A5: main (mandatory.cpp:141)
==387827==  Block was alloc'd at
==387827==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387827==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==387827==    by 0x40738B: get_next_line (get_next_line.c:48)
==387827==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387827==    by 0x4071A5: main (mandatory.cpp:141)
==387827== 
==387827== Syscall param read(buf) points to unaddressable byte(s)
==387827==    at 0x4CB8992: read (read.c:26)
==387827==    by 0x40733B: get_next_line (get_next_line.c:37)
==387827==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387827==    by 0x4071B6: main (mandatory.cpp:141)
==387827==  Address 0x4deb510 is 0 bytes inside a block of size 2 free'd
==387827==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387827==    by 0x407602: ft_strjoin (get_next_line_utils.c:82)
==387827==    by 0x40738B: get_next_line (get_next_line.c:48)
==387827==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387827==    by 0x4071B6: main (mandatory.cpp:141)
==387827==  Block was alloc'd at
==387827==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387827==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387827==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387827==    by 0x4071B6: main (mandatory.cpp:141)
==387827== 
==387827== Invalid write of size 1
==387827==    at 0x40734C: get_next_line (get_next_line.c:38)
==387827==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387827==    by 0x4071B6: main (mandatory.cpp:141)
==387827==  Address 0x4deb511 is 1 bytes inside a block of size 2 free'd
==387827==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387827==    by 0x407602: ft_strjoin (get_next_line_utils.c:82)
==387827==    by 0x40738B: get_next_line (get_next_line.c:48)
==387827==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387827==    by 0x4071B6: main (mandatory.cpp:141)
==387827==  Block was alloc'd at
==387827==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387827==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387827==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387827==    by 0x4071B6: main (mandatory.cpp:141)
==387827== 
==387827== Invalid read of size 1
==387827==    at 0x4075DB: ft_strjoin (get_next_line_utils.c:75)
==387827==    by 0x40738B: get_next_line (get_next_line.c:48)
==387827==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387827==    by 0x4071B6: main (mandatory.cpp:141)
==387827==  Address 0x4deb511 is 1 bytes inside a block of size 2 free'd
==387827==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387827==    by 0x407602: ft_strjoin (get_next_line_utils.c:82)
==387827==    by 0x40738B: get_next_line (get_next_line.c:48)
==387827==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387827==    by 0x4071B6: main (mandatory.cpp:141)
==387827==  Block was alloc'd at
==387827==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387827==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387827==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387827==    by 0x4071B6: main (mandatory.cpp:141)
==387827== 
==387827== Invalid read of size 1
==387827==    at 0x407715: f_del_front_bn (get_next_line_utils.c:163)
==387827==    by 0x4073CD: get_next_line (get_next_line.c:52)
==387827==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387827==    by 0x4071B6: main (mandatory.cpp:141)
==387827==  Address 0x4dec470 is 0 bytes inside a block of size 43 free'd
==387827==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387827==    by 0x4076F3: f_search_bn (get_next_line_utils.c:119)
==387827==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387827==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387827==    by 0x4071B6: main (mandatory.cpp:141)
==387827==  Block was alloc'd at
==387827==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387827==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==387827==    by 0x40738B: get_next_line (get_next_line.c:48)
==387827==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387827==    by 0x4071B6: main (mandatory.cpp:141)
==387827== 
==387827== Invalid free() / delete / delete[] / realloc()
==387827==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387827==    by 0x4073E0: get_next_line (get_next_line.c:53)
==387827==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387827==    by 0x4071B6: main (mandatory.cpp:141)
==387827==  Address 0x4deb510 is 0 bytes inside a block of size 2 free'd
==387827==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387827==    by 0x407602: ft_strjoin (get_next_line_utils.c:82)
==387827==    by 0x40738B: get_next_line (get_next_line.c:48)
==387827==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387827==    by 0x4071B6: main (mandatory.cpp:141)
==387827==  Block was alloc'd at
==387827==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387827==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387827==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387827==    by 0x4071B6: main (mandatory.cpp:141)
==387827== 
==387827== Invalid read of size 1
==387827==    at 0x40758F: ft_strjoin (get_next_line_utils.c:68)
==387827==    by 0x40738B: get_next_line (get_next_line.c:48)
==387827==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387827==    by 0x4071C1: main (mandatory.cpp:141)
==387827==  Address 0x4dec49a is 42 bytes inside a block of size 43 free'd
==387827==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387827==    by 0x4076F3: f_search_bn (get_next_line_utils.c:119)
==387827==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387827==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387827==    by 0x4071B6: main (mandatory.cpp:141)
==387827==  Block was alloc'd at
==387827==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387827==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==387827==    by 0x40738B: get_next_line (get_next_line.c:48)
==387827==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387827==    by 0x4071B6: main (mandatory.cpp:141)
==387827== 
==387827== 1 bytes in 1 blocks are definitely lost in loss record 1 of 6
==387827==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387827==    by 0x407364: get_next_line (get_next_line.c:43)
==387827==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387827==    by 0x40712E: main (mandatory.cpp:141)
==387827== 
==387827== 902 bytes in 41 blocks are definitely lost in loss record 2 of 6
==387827==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387827==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==387827==    by 0x40738B: get_next_line (get_next_line.c:48)
==387827==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387827==    by 0x40712E: main (mandatory.cpp:141)
==387827== 
==387827== 902 bytes in 41 blocks are definitely lost in loss record 3 of 6
==387827==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387827==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==387827==    by 0x40738B: get_next_line (get_next_line.c:48)
==387827==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387827==    by 0x4071B6: main (mandatory.cpp:141)
==387827== 
==387827== 945 bytes in 42 blocks are definitely lost in loss record 4 of 6
==387827==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387827==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==387827==    by 0x40738B: get_next_line (get_next_line.c:48)
==387827==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387827==    by 0x407150: main (mandatory.cpp:141)
==387827== 
==387827== 945 bytes in 42 blocks are definitely lost in loss record 5 of 6
==387827==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387827==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==387827==    by 0x40738B: get_next_line (get_next_line.c:48)
==387827==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387827==    by 0x407194: main (mandatory.cpp:141)
==387827== 
==387827== 989 bytes in 43 blocks are definitely lost in loss record 6 of 6
==387827==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387827==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==387827==    by 0x40738B: get_next_line (get_next_line.c:48)
==387827==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387827==    by 0x407172: main (mandatory.cpp:141)
==387827== 
==387856== Invalid write of size 1
==387856==    at 0x40737E: get_next_line (get_next_line.c:38)
==387856==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387856==    by 0x404BC6: main (mandatory.cpp:25)
==387856==  Address 0x4de329f is 1 bytes before a block of size 43 alloc'd
==387856==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387856==    by 0x40732E: get_next_line (get_next_line.c:27)
==387856==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387856==    by 0x404BC6: main (mandatory.cpp:25)
==387856== 
==387856== Conditional jump or move depends on uninitialised value(s)
==387856==    at 0x40751F: ft_strlen (get_next_line_utils.c:43)
==387856==    by 0x407555: ft_strjoin (get_next_line_utils.c:59)
==387856==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387856==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387856==    by 0x404BC6: main (mandatory.cpp:25)
==387856== 
==387856== Conditional jump or move depends on uninitialised value(s)
==387856==    at 0x407612: ft_strjoin (get_next_line_utils.c:75)
==387856==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387856==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387856==    by 0x404BC6: main (mandatory.cpp:25)
==387856== 
==387856== Invalid write of size 1
==387856==    at 0x40737E: get_next_line (get_next_line.c:38)
==387856==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387856==    by 0x404BE8: main (mandatory.cpp:25)
==387856==  Address 0x4de43ef is 1 bytes before a block of size 43 alloc'd
==387856==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387856==    by 0x40732E: get_next_line (get_next_line.c:27)
==387856==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387856==    by 0x404BE8: main (mandatory.cpp:25)
==387856== 
==387856== Conditional jump or move depends on uninitialised value(s)
==387856==    at 0x407612: ft_strjoin (get_next_line_utils.c:75)
==387856==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387856==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387856==    by 0x404BE8: main (mandatory.cpp:25)
==387856== 
==387856== 1 bytes in 1 blocks are definitely lost in loss record 2 of 3
==387856==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387856==    by 0x407396: get_next_line (get_next_line.c:43)
==387856==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387856==    by 0x404BC6: main (mandatory.cpp:25)
==387856== 
==387856== 1 bytes in 1 blocks are definitely lost in loss record 3 of 3
==387856==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387856==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==387856==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387856==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387856==    by 0x404BC6: main (mandatory.cpp:25)
==387856== 
==387860== Invalid read of size 1
==387860==    at 0x40751A: ft_strlen (get_next_line_utils.c:43)
==387860==    by 0x407547: ft_strjoin (get_next_line_utils.c:59)
==387860==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387860==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387860==    by 0x404E6F: main (mandatory.cpp:31)
==387860==  Address 0x4de46b0 is 0 bytes inside a block of size 1 free'd
==387860==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387860==    by 0x407462: get_next_line (get_next_line.c:67)
==387860==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387860==    by 0x404E63: main (mandatory.cpp:31)
==387860==  Block was alloc'd at
==387860==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387860==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==387860==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387860==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387860==    by 0x404E63: main (mandatory.cpp:31)
==387860== 
==387860== Invalid read of size 1
==387860==    at 0x4075C1: ft_strjoin (get_next_line_utils.c:68)
==387860==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387860==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387860==    by 0x404E6F: main (mandatory.cpp:31)
==387860==  Address 0x4de46b0 is 0 bytes inside a block of size 1 free'd
==387860==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387860==    by 0x407462: get_next_line (get_next_line.c:67)
==387860==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387860==    by 0x404E63: main (mandatory.cpp:31)
==387860==  Block was alloc'd at
==387860==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387860==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==387860==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387860==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387860==    by 0x404E63: main (mandatory.cpp:31)
==387860== 
==387860== 1 bytes in 1 blocks are definitely lost in loss record 1 of 1
==387860==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387860==    by 0x407396: get_next_line (get_next_line.c:43)
==387860==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387860==    by 0x404E63: main (mandatory.cpp:31)
==387860== 
==387861== Invalid read of size 1
==387861==    at 0x407747: f_del_front_bn (get_next_line_utils.c:163)
==387861==    by 0x4073FF: get_next_line (get_next_line.c:52)
==387861==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387861==    by 0x40508F: main (mandatory.cpp:36)
==387861==  Address 0x4de46b0 is 0 bytes inside a block of size 2 free'd
==387861==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387861==    by 0x407725: f_search_bn (get_next_line_utils.c:119)
==387861==    by 0x4073EC: get_next_line (get_next_line.c:51)
==387861==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387861==    by 0x40508F: main (mandatory.cpp:36)
==387861==  Block was alloc'd at
==387861==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387861==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==387861==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387861==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387861==    by 0x40508F: main (mandatory.cpp:36)
==387861== 
==387861== Invalid free() / delete / delete[] / realloc()
==387861==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387861==    by 0x407412: get_next_line (get_next_line.c:53)
==387861==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387861==    by 0x40508F: main (mandatory.cpp:36)
==387861==  Address 0x4de45f0 is 0 bytes inside a block of size 43 free'd
==387861==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387861==    by 0x407634: ft_strjoin (get_next_line_utils.c:82)
==387861==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387861==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387861==    by 0x40508F: main (mandatory.cpp:36)
==387861==  Block was alloc'd at
==387861==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387861==    by 0x40732E: get_next_line (get_next_line.c:27)
==387861==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387861==    by 0x40508F: main (mandatory.cpp:36)
==387861== 
==387861== Invalid read of size 1
==387861==    at 0x40751A: ft_strlen (get_next_line_utils.c:43)
==387861==    by 0x407547: ft_strjoin (get_next_line_utils.c:59)
==387861==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387861==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387861==    by 0x40509B: main (mandatory.cpp:36)
==387861==  Address 0x4de46b1 is 1 bytes inside a block of size 2 free'd
==387861==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387861==    by 0x407725: f_search_bn (get_next_line_utils.c:119)
==387861==    by 0x4073EC: get_next_line (get_next_line.c:51)
==387861==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387861==    by 0x40508F: main (mandatory.cpp:36)
==387861==  Block was alloc'd at
==387861==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387861==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==387861==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387861==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387861==    by 0x40508F: main (mandatory.cpp:36)
==387861== 
==387861== Invalid read of size 1
==387861==    at 0x4075C1: ft_strjoin (get_next_line_utils.c:68)
==387861==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387861==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387861==    by 0x40509B: main (mandatory.cpp:36)
==387861==  Address 0x4de46b1 is 1 bytes inside a block of size 2 free'd
==387861==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387861==    by 0x407725: f_search_bn (get_next_line_utils.c:119)
==387861==    by 0x4073EC: get_next_line (get_next_line.c:51)
==387861==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387861==    by 0x40508F: main (mandatory.cpp:36)
==387861==  Block was alloc'd at
==387861==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387861==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==387861==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387861==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387861==    by 0x40508F: main (mandatory.cpp:36)
==387861== 
==387861== 1 bytes in 1 blocks are definitely lost in loss record 1 of 1
==387861==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387861==    by 0x407396: get_next_line (get_next_line.c:43)
==387861==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387861==    by 0x40508F: main (mandatory.cpp:36)
==387861== 
==387867== 1 bytes in 1 blocks are definitely lost in loss record 1 of 2
==387867==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387867==    by 0x407396: get_next_line (get_next_line.c:43)
==387867==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387867==    by 0x4052BB: main (mandatory.cpp:41)
==387867== 
==387867== 42 bytes in 1 blocks are definitely lost in loss record 2 of 2
==387867==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387867==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==387867==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387867==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387867==    by 0x4052BB: main (mandatory.cpp:41)
==387867== 
==387874== Invalid read of size 1
==387874==    at 0x407747: f_del_front_bn (get_next_line_utils.c:163)
==387874==    by 0x4073FF: get_next_line (get_next_line.c:52)
==387874==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387874==    by 0x4054E7: main (mandatory.cpp:46)
==387874==  Address 0x4de4cd0 is 0 bytes inside a block of size 43 free'd
==387874==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387874==    by 0x407725: f_search_bn (get_next_line_utils.c:119)
==387874==    by 0x4073EC: get_next_line (get_next_line.c:51)
==387874==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387874==    by 0x4054E7: main (mandatory.cpp:46)
==387874==  Block was alloc'd at
==387874==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387874==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==387874==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387874==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387874==    by 0x4054E7: main (mandatory.cpp:46)
==387874== 
==387874== Invalid free() / delete / delete[] / realloc()
==387874==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387874==    by 0x407412: get_next_line (get_next_line.c:53)
==387874==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387874==    by 0x4054E7: main (mandatory.cpp:46)
==387874==  Address 0x4de4c10 is 0 bytes inside a block of size 43 free'd
==387874==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387874==    by 0x407634: ft_strjoin (get_next_line_utils.c:82)
==387874==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387874==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387874==    by 0x4054E7: main (mandatory.cpp:46)
==387874==  Block was alloc'd at
==387874==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387874==    by 0x40732E: get_next_line (get_next_line.c:27)
==387874==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387874==    by 0x4054E7: main (mandatory.cpp:46)
==387874== 
==387874== Invalid read of size 1
==387874==    at 0x40751A: ft_strlen (get_next_line_utils.c:43)
==387874==    by 0x407547: ft_strjoin (get_next_line_utils.c:59)
==387874==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387874==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387874==    by 0x4054F9: main (mandatory.cpp:46)
==387874==  Address 0x4de4cf9 is 41 bytes inside a block of size 43 free'd
==387874==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387874==    by 0x407725: f_search_bn (get_next_line_utils.c:119)
==387874==    by 0x4073EC: get_next_line (get_next_line.c:51)
==387874==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387874==    by 0x4054E7: main (mandatory.cpp:46)
==387874==  Block was alloc'd at
==387874==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387874==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==387874==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387874==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387874==    by 0x4054E7: main (mandatory.cpp:46)
==387874== 
==387874== Invalid read of size 1
==387874==    at 0x4075C1: ft_strjoin (get_next_line_utils.c:68)
==387874==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387874==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387874==    by 0x4054F9: main (mandatory.cpp:46)
==387874==  Address 0x4de4cf9 is 41 bytes inside a block of size 43 free'd
==387874==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387874==    by 0x407725: f_search_bn (get_next_line_utils.c:119)
==387874==    by 0x4073EC: get_next_line (get_next_line.c:51)
==387874==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387874==    by 0x4054E7: main (mandatory.cpp:46)
==387874==  Block was alloc'd at
==387874==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387874==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==387874==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387874==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387874==    by 0x4054E7: main (mandatory.cpp:46)
==387874== 
==387874== Invalid read of size 1
==387874==    at 0x4075A4: ft_strjoin (get_next_line_utils.c:70)
==387874==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387874==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387874==    by 0x4054F9: main (mandatory.cpp:46)
==387874==  Address 0x4de4cf9 is 41 bytes inside a block of size 43 free'd
==387874==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387874==    by 0x407725: f_search_bn (get_next_line_utils.c:119)
==387874==    by 0x4073EC: get_next_line (get_next_line.c:51)
==387874==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387874==    by 0x4054E7: main (mandatory.cpp:46)
==387874==  Block was alloc'd at
==387874==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387874==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==387874==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387874==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387874==    by 0x4054E7: main (mandatory.cpp:46)
==387874== 
==387874== Invalid read of size 1
==387874==    at 0x484FBD4: strcmp (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387874==    by 0x402D0A: gnl(int, char const*) (gnl.cpp:24)
==387874==    by 0x4054F9: main (mandatory.cpp:46)
==387874==  Address 0x0 is not stack'd, malloc'd or (recently) free'd
==387874== 
==387874== 1 bytes in 1 blocks are definitely lost in loss record 1 of 1
==387874==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387874==    by 0x407396: get_next_line (get_next_line.c:43)
==387874==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387874==    by 0x4054E7: main (mandatory.cpp:46)
==387874== 
==387875== Syscall param read(buf) points to unaddressable byte(s)
==387875==    at 0x4CB8992: read (read.c:26)
==387875==    by 0x40736D: get_next_line (get_next_line.c:37)
==387875==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387875==    by 0x405725: main (mandatory.cpp:52)
==387875==  Address 0x4de4f20 is 0 bytes inside a block of size 43 free'd
==387875==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387875==    by 0x407634: ft_strjoin (get_next_line_utils.c:82)
==387875==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387875==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387875==    by 0x405725: main (mandatory.cpp:52)
==387875==  Block was alloc'd at
==387875==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387875==    by 0x40732E: get_next_line (get_next_line.c:27)
==387875==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387875==    by 0x405725: main (mandatory.cpp:52)
==387875== 
==387875== Invalid write of size 1
==387875==    at 0x40737E: get_next_line (get_next_line.c:38)
==387875==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387875==    by 0x405725: main (mandatory.cpp:52)
==387875==  Address 0x4de4f20 is 0 bytes inside a block of size 43 free'd
==387875==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387875==    by 0x407634: ft_strjoin (get_next_line_utils.c:82)
==387875==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387875==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387875==    by 0x405725: main (mandatory.cpp:52)
==387875==  Block was alloc'd at
==387875==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387875==    by 0x40732E: get_next_line (get_next_line.c:27)
==387875==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387875==    by 0x405725: main (mandatory.cpp:52)
==387875== 
==387875== Invalid read of size 1
==387875==    at 0x40751A: ft_strlen (get_next_line_utils.c:43)
==387875==    by 0x407555: ft_strjoin (get_next_line_utils.c:59)
==387875==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387875==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387875==    by 0x405725: main (mandatory.cpp:52)
==387875==  Address 0x4de4f20 is 0 bytes inside a block of size 43 free'd
==387875==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387875==    by 0x407634: ft_strjoin (get_next_line_utils.c:82)
==387875==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387875==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387875==    by 0x405725: main (mandatory.cpp:52)
==387875==  Block was alloc'd at
==387875==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387875==    by 0x40732E: get_next_line (get_next_line.c:27)
==387875==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387875==    by 0x405725: main (mandatory.cpp:52)
==387875== 
==387875== Invalid read of size 1
==387875==    at 0x40760D: ft_strjoin (get_next_line_utils.c:75)
==387875==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387875==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387875==    by 0x405725: main (mandatory.cpp:52)
==387875==  Address 0x4de4f20 is 0 bytes inside a block of size 43 free'd
==387875==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387875==    by 0x407634: ft_strjoin (get_next_line_utils.c:82)
==387875==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387875==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387875==    by 0x405725: main (mandatory.cpp:52)
==387875==  Block was alloc'd at
==387875==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387875==    by 0x40732E: get_next_line (get_next_line.c:27)
==387875==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387875==    by 0x405725: main (mandatory.cpp:52)
==387875== 
==387875== Invalid free() / delete / delete[] / realloc()
==387875==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387875==    by 0x407634: ft_strjoin (get_next_line_utils.c:82)
==387875==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387875==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387875==    by 0x405725: main (mandatory.cpp:52)
==387875==  Address 0x4de4f20 is 0 bytes inside a block of size 43 free'd
==387875==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387875==    by 0x407634: ft_strjoin (get_next_line_utils.c:82)
==387875==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387875==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387875==    by 0x405725: main (mandatory.cpp:52)
==387875==  Block was alloc'd at
==387875==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387875==    by 0x40732E: get_next_line (get_next_line.c:27)
==387875==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387875==    by 0x405725: main (mandatory.cpp:52)
==387875== 
==387875== Invalid read of size 1
==387875==    at 0x484FBD4: strcmp (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387875==    by 0x402D0A: gnl(int, char const*) (gnl.cpp:24)
==387875==    by 0x405725: main (mandatory.cpp:52)
==387875==  Address 0x0 is not stack'd, malloc'd or (recently) free'd
==387875== 
==387875== 1 bytes in 1 blocks are definitely lost in loss record 1 of 2
==387875==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387875==    by 0x407396: get_next_line (get_next_line.c:43)
==387875==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387875==    by 0x405725: main (mandatory.cpp:52)
==387875== 
==387875== 43 bytes in 1 blocks are definitely lost in loss record 2 of 2
==387875==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387875==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==387875==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387875==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387875==    by 0x405725: main (mandatory.cpp:52)
==387875== 
==387878== Invalid read of size 1
==387878==    at 0x407747: f_del_front_bn (get_next_line_utils.c:163)
==387878==    by 0x4073FF: get_next_line (get_next_line.c:52)
==387878==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387878==    by 0x405951: main (mandatory.cpp:57)
==387878==  Address 0x4de52f0 is 0 bytes inside a block of size 43 free'd
==387878==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387878==    by 0x407725: f_search_bn (get_next_line_utils.c:119)
==387878==    by 0x4073EC: get_next_line (get_next_line.c:51)
==387878==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387878==    by 0x405951: main (mandatory.cpp:57)
==387878==  Block was alloc'd at
==387878==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387878==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==387878==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387878==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387878==    by 0x405951: main (mandatory.cpp:57)
==387878== 
==387878== Invalid free() / delete / delete[] / realloc()
==387878==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387878==    by 0x407412: get_next_line (get_next_line.c:53)
==387878==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387878==    by 0x405951: main (mandatory.cpp:57)
==387878==  Address 0x4de5230 is 0 bytes inside a block of size 43 free'd
==387878==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387878==    by 0x407634: ft_strjoin (get_next_line_utils.c:82)
==387878==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387878==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387878==    by 0x405951: main (mandatory.cpp:57)
==387878==  Block was alloc'd at
==387878==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387878==    by 0x40732E: get_next_line (get_next_line.c:27)
==387878==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387878==    by 0x405951: main (mandatory.cpp:57)
==387878== 
==387878== Invalid read of size 1
==387878==    at 0x40751A: ft_strlen (get_next_line_utils.c:43)
==387878==    by 0x407547: ft_strjoin (get_next_line_utils.c:59)
==387878==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387878==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387878==    by 0x4059A1: main (mandatory.cpp:57)
==387878==  Address 0x4de531a is 42 bytes inside a block of size 43 free'd
==387878==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387878==    by 0x407725: f_search_bn (get_next_line_utils.c:119)
==387878==    by 0x4073EC: get_next_line (get_next_line.c:51)
==387878==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387878==    by 0x405951: main (mandatory.cpp:57)
==387878==  Block was alloc'd at
==387878==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387878==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==387878==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387878==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387878==    by 0x405951: main (mandatory.cpp:57)
==387878== 
==387878== Invalid read of size 1
==387878==    at 0x4075C1: ft_strjoin (get_next_line_utils.c:68)
==387878==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387878==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387878==    by 0x4059A1: main (mandatory.cpp:57)
==387878==  Address 0x4de531a is 42 bytes inside a block of size 43 free'd
==387878==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387878==    by 0x407725: f_search_bn (get_next_line_utils.c:119)
==387878==    by 0x4073EC: get_next_line (get_next_line.c:51)
==387878==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387878==    by 0x405951: main (mandatory.cpp:57)
==387878==  Block was alloc'd at
==387878==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387878==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==387878==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387878==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387878==    by 0x405951: main (mandatory.cpp:57)
==387878== 
==387878== 1 bytes in 1 blocks are definitely lost in loss record 1 of 1
==387878==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387878==    by 0x407396: get_next_line (get_next_line.c:43)
==387878==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387878==    by 0x405951: main (mandatory.cpp:57)
==387878== 
==387879== Syscall param read(buf) points to unaddressable byte(s)
==387879==    at 0x4CB8992: read (read.c:26)
==387879==    by 0x40736D: get_next_line (get_next_line.c:37)
==387879==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387879==    by 0x405BCB: main (mandatory.cpp:68)
==387879==  Address 0x4de5540 is 0 bytes inside a block of size 43 free'd
==387879==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387879==    by 0x407634: ft_strjoin (get_next_line_utils.c:82)
==387879==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387879==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387879==    by 0x405BCB: main (mandatory.cpp:68)
==387879==  Block was alloc'd at
==387879==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387879==    by 0x40732E: get_next_line (get_next_line.c:27)
==387879==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387879==    by 0x405BCB: main (mandatory.cpp:68)
==387879== 
==387879== Invalid write of size 1
==387879==    at 0x40737E: get_next_line (get_next_line.c:38)
==387879==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387879==    by 0x405BCB: main (mandatory.cpp:68)
==387879==  Address 0x4de5541 is 1 bytes inside a block of size 43 free'd
==387879==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387879==    by 0x407634: ft_strjoin (get_next_line_utils.c:82)
==387879==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387879==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387879==    by 0x405BCB: main (mandatory.cpp:68)
==387879==  Block was alloc'd at
==387879==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387879==    by 0x40732E: get_next_line (get_next_line.c:27)
==387879==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387879==    by 0x405BCB: main (mandatory.cpp:68)
==387879== 
==387879== Invalid read of size 1
==387879==    at 0x40751A: ft_strlen (get_next_line_utils.c:43)
==387879==    by 0x407555: ft_strjoin (get_next_line_utils.c:59)
==387879==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387879==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387879==    by 0x405BCB: main (mandatory.cpp:68)
==387879==  Address 0x4de5541 is 1 bytes inside a block of size 43 free'd
==387879==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387879==    by 0x407634: ft_strjoin (get_next_line_utils.c:82)
==387879==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387879==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387879==    by 0x405BCB: main (mandatory.cpp:68)
==387879==  Block was alloc'd at
==387879==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387879==    by 0x40732E: get_next_line (get_next_line.c:27)
==387879==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387879==    by 0x405BCB: main (mandatory.cpp:68)
==387879== 
==387879== Invalid read of size 1
==387879==    at 0x40760D: ft_strjoin (get_next_line_utils.c:75)
==387879==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387879==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387879==    by 0x405BCB: main (mandatory.cpp:68)
==387879==  Address 0x4de5541 is 1 bytes inside a block of size 43 free'd
==387879==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387879==    by 0x407634: ft_strjoin (get_next_line_utils.c:82)
==387879==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387879==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387879==    by 0x405BCB: main (mandatory.cpp:68)
==387879==  Block was alloc'd at
==387879==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387879==    by 0x40732E: get_next_line (get_next_line.c:27)
==387879==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387879==    by 0x405BCB: main (mandatory.cpp:68)
==387879== 
==387879== Invalid free() / delete / delete[] / realloc()
==387879==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387879==    by 0x407634: ft_strjoin (get_next_line_utils.c:82)
==387879==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387879==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387879==    by 0x405BCB: main (mandatory.cpp:68)
==387879==  Address 0x4de5540 is 0 bytes inside a block of size 43 free'd
==387879==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387879==    by 0x407634: ft_strjoin (get_next_line_utils.c:82)
==387879==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387879==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387879==    by 0x405BCB: main (mandatory.cpp:68)
==387879==  Block was alloc'd at
==387879==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387879==    by 0x40732E: get_next_line (get_next_line.c:27)
==387879==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387879==    by 0x405BCB: main (mandatory.cpp:68)
==387879== 
==387879== 1 bytes in 1 blocks are definitely lost in loss record 1 of 2
==387879==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387879==    by 0x407396: get_next_line (get_next_line.c:43)
==387879==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387879==    by 0x405BCB: main (mandatory.cpp:68)
==387879== 
==387879== 87 bytes in 2 blocks are definitely lost in loss record 2 of 2
==387879==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387879==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==387879==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387879==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387879==    by 0x405BCB: main (mandatory.cpp:68)
==387879== 
==387885== Syscall param read(buf) points to unaddressable byte(s)
==387885==    at 0x4CB8992: read (read.c:26)
==387885==    by 0x40736D: get_next_line (get_next_line.c:37)
==387885==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387885==    by 0x405DF7: main (mandatory.cpp:73)
==387885==  Address 0x4de5850 is 0 bytes inside a block of size 43 free'd
==387885==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387885==    by 0x407634: ft_strjoin (get_next_line_utils.c:82)
==387885==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387885==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387885==    by 0x405DF7: main (mandatory.cpp:73)
==387885==  Block was alloc'd at
==387885==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387885==    by 0x40732E: get_next_line (get_next_line.c:27)
==387885==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387885==    by 0x405DF7: main (mandatory.cpp:73)
==387885== 
==387885== Invalid write of size 1
==387885==    at 0x40737E: get_next_line (get_next_line.c:38)
==387885==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387885==    by 0x405DF7: main (mandatory.cpp:73)
==387885==  Address 0x4de5852 is 2 bytes inside a block of size 43 free'd
==387885==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387885==    by 0x407634: ft_strjoin (get_next_line_utils.c:82)
==387885==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387885==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387885==    by 0x405DF7: main (mandatory.cpp:73)
==387885==  Block was alloc'd at
==387885==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387885==    by 0x40732E: get_next_line (get_next_line.c:27)
==387885==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387885==    by 0x405DF7: main (mandatory.cpp:73)
==387885== 
==387885== Invalid read of size 1
==387885==    at 0x40751A: ft_strlen (get_next_line_utils.c:43)
==387885==    by 0x407555: ft_strjoin (get_next_line_utils.c:59)
==387885==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387885==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387885==    by 0x405DF7: main (mandatory.cpp:73)
==387885==  Address 0x4de5852 is 2 bytes inside a block of size 43 free'd
==387885==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387885==    by 0x407634: ft_strjoin (get_next_line_utils.c:82)
==387885==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387885==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387885==    by 0x405DF7: main (mandatory.cpp:73)
==387885==  Block was alloc'd at
==387885==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387885==    by 0x40732E: get_next_line (get_next_line.c:27)
==387885==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387885==    by 0x405DF7: main (mandatory.cpp:73)
==387885== 
==387885== Invalid read of size 1
==387885==    at 0x40760D: ft_strjoin (get_next_line_utils.c:75)
==387885==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387885==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387885==    by 0x405DF7: main (mandatory.cpp:73)
==387885==  Address 0x4de5852 is 2 bytes inside a block of size 43 free'd
==387885==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387885==    by 0x407634: ft_strjoin (get_next_line_utils.c:82)
==387885==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387885==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387885==    by 0x405DF7: main (mandatory.cpp:73)
==387885==  Block was alloc'd at
==387885==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387885==    by 0x40732E: get_next_line (get_next_line.c:27)
==387885==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387885==    by 0x405DF7: main (mandatory.cpp:73)
==387885== 
==387885== Invalid free() / delete / delete[] / realloc()
==387885==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387885==    by 0x407634: ft_strjoin (get_next_line_utils.c:82)
==387885==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387885==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387885==    by 0x405DF7: main (mandatory.cpp:73)
==387885==  Address 0x4de5850 is 0 bytes inside a block of size 43 free'd
==387885==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387885==    by 0x407634: ft_strjoin (get_next_line_utils.c:82)
==387885==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387885==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387885==    by 0x405DF7: main (mandatory.cpp:73)
==387885==  Block was alloc'd at
==387885==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387885==    by 0x40732E: get_next_line (get_next_line.c:27)
==387885==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387885==    by 0x405DF7: main (mandatory.cpp:73)
==387885== 
==387885== Invalid read of size 1
==387885==    at 0x407747: f_del_front_bn (get_next_line_utils.c:163)
==387885==    by 0x4073FF: get_next_line (get_next_line.c:52)
==387885==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387885==    by 0x405DF7: main (mandatory.cpp:73)
==387885==  Address 0x4de5980 is 0 bytes inside a block of size 45 free'd
==387885==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387885==    by 0x407725: f_search_bn (get_next_line_utils.c:119)
==387885==    by 0x4073EC: get_next_line (get_next_line.c:51)
==387885==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387885==    by 0x405DF7: main (mandatory.cpp:73)
==387885==  Block was alloc'd at
==387885==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387885==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==387885==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387885==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387885==    by 0x405DF7: main (mandatory.cpp:73)
==387885== 
==387885== Invalid free() / delete / delete[] / realloc()
==387885==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387885==    by 0x407412: get_next_line (get_next_line.c:53)
==387885==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387885==    by 0x405DF7: main (mandatory.cpp:73)
==387885==  Address 0x4de5850 is 0 bytes inside a block of size 43 free'd
==387885==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387885==    by 0x407634: ft_strjoin (get_next_line_utils.c:82)
==387885==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387885==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387885==    by 0x405DF7: main (mandatory.cpp:73)
==387885==  Block was alloc'd at
==387885==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387885==    by 0x40732E: get_next_line (get_next_line.c:27)
==387885==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387885==    by 0x405DF7: main (mandatory.cpp:73)
==387885== 
==387885== Invalid read of size 1
==387885==    at 0x40751A: ft_strlen (get_next_line_utils.c:43)
==387885==    by 0x407547: ft_strjoin (get_next_line_utils.c:59)
==387885==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387885==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387885==    by 0x405E09: main (mandatory.cpp:73)
==387885==  Address 0x4de59ab is 43 bytes inside a block of size 45 free'd
==387885==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387885==    by 0x407725: f_search_bn (get_next_line_utils.c:119)
==387885==    by 0x4073EC: get_next_line (get_next_line.c:51)
==387885==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387885==    by 0x405DF7: main (mandatory.cpp:73)
==387885==  Block was alloc'd at
==387885==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387885==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==387885==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387885==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387885==    by 0x405DF7: main (mandatory.cpp:73)
==387885== 
==387885== Invalid read of size 1
==387885==    at 0x4075C1: ft_strjoin (get_next_line_utils.c:68)
==387885==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387885==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387885==    by 0x405E09: main (mandatory.cpp:73)
==387885==  Address 0x4de59ab is 43 bytes inside a block of size 45 free'd
==387885==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387885==    by 0x407725: f_search_bn (get_next_line_utils.c:119)
==387885==    by 0x4073EC: get_next_line (get_next_line.c:51)
==387885==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387885==    by 0x405DF7: main (mandatory.cpp:73)
==387885==  Block was alloc'd at
==387885==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387885==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==387885==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387885==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387885==    by 0x405DF7: main (mandatory.cpp:73)
==387885== 
==387885== Invalid read of size 1
==387885==    at 0x4075A4: ft_strjoin (get_next_line_utils.c:70)
==387885==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387885==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387885==    by 0x405E09: main (mandatory.cpp:73)
==387885==  Address 0x4de59ab is 43 bytes inside a block of size 45 free'd
==387885==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387885==    by 0x407725: f_search_bn (get_next_line_utils.c:119)
==387885==    by 0x4073EC: get_next_line (get_next_line.c:51)
==387885==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387885==    by 0x405DF7: main (mandatory.cpp:73)
==387885==  Block was alloc'd at
==387885==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387885==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==387885==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387885==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387885==    by 0x405DF7: main (mandatory.cpp:73)
==387885== 
==387885== Invalid read of size 1
==387885==    at 0x484FBD4: strcmp (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387885==    by 0x402D0A: gnl(int, char const*) (gnl.cpp:24)
==387885==    by 0x405E09: main (mandatory.cpp:73)
==387885==  Address 0x0 is not stack'd, malloc'd or (recently) free'd
==387885== 
==387885== 1 bytes in 1 blocks are definitely lost in loss record 1 of 2
==387885==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387885==    by 0x407396: get_next_line (get_next_line.c:43)
==387885==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387885==    by 0x405DF7: main (mandatory.cpp:73)
==387885== 
==387885== 43 bytes in 1 blocks are definitely lost in loss record 2 of 2
==387885==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387885==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==387885==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387885==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387885==    by 0x405DF7: main (mandatory.cpp:73)
==387885== 
==387888== Invalid read of size 1
==387888==    at 0x407747: f_del_front_bn (get_next_line_utils.c:163)
==387888==    by 0x4073FF: get_next_line (get_next_line.c:52)
==387888==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387888==    by 0x406035: main (mandatory.cpp:79)
==387888==  Address 0x4de5c20 is 0 bytes inside a block of size 6 free'd
==387888==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387888==    by 0x407725: f_search_bn (get_next_line_utils.c:119)
==387888==    by 0x4073EC: get_next_line (get_next_line.c:51)
==387888==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387888==    by 0x406035: main (mandatory.cpp:79)
==387888==  Block was alloc'd at
==387888==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387888==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==387888==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387888==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387888==    by 0x406035: main (mandatory.cpp:79)
==387888== 
==387888== Invalid free() / delete / delete[] / realloc()
==387888==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387888==    by 0x407412: get_next_line (get_next_line.c:53)
==387888==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387888==    by 0x406035: main (mandatory.cpp:79)
==387888==  Address 0x4de5b60 is 0 bytes inside a block of size 43 free'd
==387888==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387888==    by 0x407634: ft_strjoin (get_next_line_utils.c:82)
==387888==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387888==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387888==    by 0x406035: main (mandatory.cpp:79)
==387888==  Block was alloc'd at
==387888==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387888==    by 0x40732E: get_next_line (get_next_line.c:27)
==387888==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387888==    by 0x406035: main (mandatory.cpp:79)
==387888== 
==387888== Invalid read of size 1
==387888==    at 0x40751A: ft_strlen (get_next_line_utils.c:43)
==387888==    by 0x407547: ft_strjoin (get_next_line_utils.c:59)
==387888==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387888==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387888==    by 0x406047: main (mandatory.cpp:79)
==387888==  Address 0x4de5c21 is 1 bytes inside a block of size 6 free'd
==387888==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387888==    by 0x407725: f_search_bn (get_next_line_utils.c:119)
==387888==    by 0x4073EC: get_next_line (get_next_line.c:51)
==387888==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387888==    by 0x406035: main (mandatory.cpp:79)
==387888==  Block was alloc'd at
==387888==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387888==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==387888==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387888==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387888==    by 0x406035: main (mandatory.cpp:79)
==387888== 
==387888== Invalid read of size 1
==387888==    at 0x4075C1: ft_strjoin (get_next_line_utils.c:68)
==387888==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387888==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387888==    by 0x406047: main (mandatory.cpp:79)
==387888==  Address 0x4de5c21 is 1 bytes inside a block of size 6 free'd
==387888==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387888==    by 0x407725: f_search_bn (get_next_line_utils.c:119)
==387888==    by 0x4073EC: get_next_line (get_next_line.c:51)
==387888==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387888==    by 0x406035: main (mandatory.cpp:79)
==387888==  Block was alloc'd at
==387888==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387888==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==387888==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387888==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387888==    by 0x406035: main (mandatory.cpp:79)
==387888== 
==387888== Invalid read of size 1
==387888==    at 0x4075A4: ft_strjoin (get_next_line_utils.c:70)
==387888==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387888==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387888==    by 0x406047: main (mandatory.cpp:79)
==387888==  Address 0x4de5c21 is 1 bytes inside a block of size 6 free'd
==387888==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387888==    by 0x407725: f_search_bn (get_next_line_utils.c:119)
==387888==    by 0x4073EC: get_next_line (get_next_line.c:51)
==387888==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387888==    by 0x406035: main (mandatory.cpp:79)
==387888==  Block was alloc'd at
==387888==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387888==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==387888==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387888==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387888==    by 0x406035: main (mandatory.cpp:79)
==387888== 
==387888== Invalid read of size 1
==387888==    at 0x407747: f_del_front_bn (get_next_line_utils.c:163)
==387888==    by 0x4073FF: get_next_line (get_next_line.c:52)
==387888==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387888==    by 0x406047: main (mandatory.cpp:79)
==387888==  Address 0x4de5d30 is 0 bytes inside a block of size 5 free'd
==387888==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387888==    by 0x407725: f_search_bn (get_next_line_utils.c:119)
==387888==    by 0x4073EC: get_next_line (get_next_line.c:51)
==387888==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387888==    by 0x406047: main (mandatory.cpp:79)
==387888==  Block was alloc'd at
==387888==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387888==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==387888==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387888==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387888==    by 0x406047: main (mandatory.cpp:79)
==387888== 
==387888== Invalid free() / delete / delete[] / realloc()
==387888==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387888==    by 0x407412: get_next_line (get_next_line.c:53)
==387888==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387888==    by 0x406047: main (mandatory.cpp:79)
==387888==  Address 0x4de5cc0 is 0 bytes inside a block of size 43 free'd
==387888==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387888==    by 0x407634: ft_strjoin (get_next_line_utils.c:82)
==387888==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387888==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387888==    by 0x406047: main (mandatory.cpp:79)
==387888==  Block was alloc'd at
==387888==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387888==    by 0x40732E: get_next_line (get_next_line.c:27)
==387888==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387888==    by 0x406047: main (mandatory.cpp:79)
==387888== 
==387888== Invalid read of size 1
==387888==    at 0x4075C1: ft_strjoin (get_next_line_utils.c:68)
==387888==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387888==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387888==    by 0x406059: main (mandatory.cpp:79)
==387888==  Address 0x4de5d31 is 1 bytes inside a block of size 5 free'd
==387888==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387888==    by 0x407725: f_search_bn (get_next_line_utils.c:119)
==387888==    by 0x4073EC: get_next_line (get_next_line.c:51)
==387888==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387888==    by 0x406047: main (mandatory.cpp:79)
==387888==  Block was alloc'd at
==387888==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387888==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==387888==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387888==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387888==    by 0x406047: main (mandatory.cpp:79)
==387888== 
==387888== Invalid read of size 1
==387888==    at 0x4075A4: ft_strjoin (get_next_line_utils.c:70)
==387888==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387888==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387888==    by 0x406059: main (mandatory.cpp:79)
==387888==  Address 0x4de5d31 is 1 bytes inside a block of size 5 free'd
==387888==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387888==    by 0x407725: f_search_bn (get_next_line_utils.c:119)
==387888==    by 0x4073EC: get_next_line (get_next_line.c:51)
==387888==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387888==    by 0x406047: main (mandatory.cpp:79)
==387888==  Block was alloc'd at
==387888==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387888==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==387888==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387888==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387888==    by 0x406047: main (mandatory.cpp:79)
==387888== 
==387888== Invalid read of size 1
==387888==    at 0x407747: f_del_front_bn (get_next_line_utils.c:163)
==387888==    by 0x4073FF: get_next_line (get_next_line.c:52)
==387888==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387888==    by 0x406059: main (mandatory.cpp:79)
==387888==  Address 0x4de5e40 is 0 bytes inside a block of size 4 free'd
==387888==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387888==    by 0x407725: f_search_bn (get_next_line_utils.c:119)
==387888==    by 0x4073EC: get_next_line (get_next_line.c:51)
==387888==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387888==    by 0x406059: main (mandatory.cpp:79)
==387888==  Block was alloc'd at
==387888==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387888==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==387888==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387888==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387888==    by 0x406059: main (mandatory.cpp:79)
==387888== 
==387888== Invalid free() / delete / delete[] / realloc()
==387888==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387888==    by 0x407412: get_next_line (get_next_line.c:53)
==387888==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387888==    by 0x406059: main (mandatory.cpp:79)
==387888==  Address 0x4de5dd0 is 0 bytes inside a block of size 43 free'd
==387888==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387888==    by 0x407634: ft_strjoin (get_next_line_utils.c:82)
==387888==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387888==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387888==    by 0x406059: main (mandatory.cpp:79)
==387888==  Block was alloc'd at
==387888==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387888==    by 0x40732E: get_next_line (get_next_line.c:27)
==387888==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387888==    by 0x406059: main (mandatory.cpp:79)
==387888== 
==387888== Invalid read of size 1
==387888==    at 0x4075C1: ft_strjoin (get_next_line_utils.c:68)
==387888==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387888==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387888==    by 0x40606B: main (mandatory.cpp:79)
==387888==  Address 0x4de5e41 is 1 bytes inside a block of size 4 free'd
==387888==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387888==    by 0x407725: f_search_bn (get_next_line_utils.c:119)
==387888==    by 0x4073EC: get_next_line (get_next_line.c:51)
==387888==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387888==    by 0x406059: main (mandatory.cpp:79)
==387888==  Block was alloc'd at
==387888==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387888==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==387888==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387888==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387888==    by 0x406059: main (mandatory.cpp:79)
==387888== 
==387888== Invalid read of size 1
==387888==    at 0x4075A4: ft_strjoin (get_next_line_utils.c:70)
==387888==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387888==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387888==    by 0x40606B: main (mandatory.cpp:79)
==387888==  Address 0x4de5e41 is 1 bytes inside a block of size 4 free'd
==387888==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387888==    by 0x407725: f_search_bn (get_next_line_utils.c:119)
==387888==    by 0x4073EC: get_next_line (get_next_line.c:51)
==387888==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387888==    by 0x406059: main (mandatory.cpp:79)
==387888==  Block was alloc'd at
==387888==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387888==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==387888==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387888==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387888==    by 0x406059: main (mandatory.cpp:79)
==387888== 
==387888== Invalid read of size 1
==387888==    at 0x407747: f_del_front_bn (get_next_line_utils.c:163)
==387888==    by 0x4073FF: get_next_line (get_next_line.c:52)
==387888==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387888==    by 0x40606B: main (mandatory.cpp:79)
==387888==  Address 0x4de5f50 is 0 bytes inside a block of size 3 free'd
==387888==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387888==    by 0x407725: f_search_bn (get_next_line_utils.c:119)
==387888==    by 0x4073EC: get_next_line (get_next_line.c:51)
==387888==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387888==    by 0x40606B: main (mandatory.cpp:79)
==387888==  Block was alloc'd at
==387888==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387888==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==387888==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387888==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387888==    by 0x40606B: main (mandatory.cpp:79)
==387888== 
==387888== Invalid free() / delete / delete[] / realloc()
==387888==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387888==    by 0x407412: get_next_line (get_next_line.c:53)
==387888==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387888==    by 0x40606B: main (mandatory.cpp:79)
==387888==  Address 0x4de5ee0 is 0 bytes inside a block of size 43 free'd
==387888==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387888==    by 0x407634: ft_strjoin (get_next_line_utils.c:82)
==387888==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387888==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387888==    by 0x40606B: main (mandatory.cpp:79)
==387888==  Block was alloc'd at
==387888==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387888==    by 0x40732E: get_next_line (get_next_line.c:27)
==387888==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387888==    by 0x40606B: main (mandatory.cpp:79)
==387888== 
==387888== Invalid read of size 1
==387888==    at 0x4075C1: ft_strjoin (get_next_line_utils.c:68)
==387888==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387888==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387888==    by 0x40607D: main (mandatory.cpp:79)
==387888==  Address 0x4de5f51 is 1 bytes inside a block of size 3 free'd
==387888==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387888==    by 0x407725: f_search_bn (get_next_line_utils.c:119)
==387888==    by 0x4073EC: get_next_line (get_next_line.c:51)
==387888==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387888==    by 0x40606B: main (mandatory.cpp:79)
==387888==  Block was alloc'd at
==387888==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387888==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==387888==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387888==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387888==    by 0x40606B: main (mandatory.cpp:79)
==387888== 
==387888== Invalid read of size 1
==387888==    at 0x4075A4: ft_strjoin (get_next_line_utils.c:70)
==387888==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387888==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387888==    by 0x40607D: main (mandatory.cpp:79)
==387888==  Address 0x4de5f51 is 1 bytes inside a block of size 3 free'd
==387888==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387888==    by 0x407725: f_search_bn (get_next_line_utils.c:119)
==387888==    by 0x4073EC: get_next_line (get_next_line.c:51)
==387888==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387888==    by 0x40606B: main (mandatory.cpp:79)
==387888==  Block was alloc'd at
==387888==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387888==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==387888==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387888==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387888==    by 0x40606B: main (mandatory.cpp:79)
==387888== 
==387888== Invalid read of size 1
==387888==    at 0x407747: f_del_front_bn (get_next_line_utils.c:163)
==387888==    by 0x4073FF: get_next_line (get_next_line.c:52)
==387888==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387888==    by 0x40607D: main (mandatory.cpp:79)
==387888==  Address 0x4de6060 is 0 bytes inside a block of size 2 free'd
==387888==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387888==    by 0x407725: f_search_bn (get_next_line_utils.c:119)
==387888==    by 0x4073EC: get_next_line (get_next_line.c:51)
==387888==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387888==    by 0x40607D: main (mandatory.cpp:79)
==387888==  Block was alloc'd at
==387888==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387888==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==387888==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387888==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387888==    by 0x40607D: main (mandatory.cpp:79)
==387888== 
==387888== Invalid free() / delete / delete[] / realloc()
==387888==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387888==    by 0x407412: get_next_line (get_next_line.c:53)
==387888==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387888==    by 0x40607D: main (mandatory.cpp:79)
==387888==  Address 0x4de5ff0 is 0 bytes inside a block of size 43 free'd
==387888==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387888==    by 0x407634: ft_strjoin (get_next_line_utils.c:82)
==387888==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387888==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387888==    by 0x40607D: main (mandatory.cpp:79)
==387888==  Block was alloc'd at
==387888==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387888==    by 0x40732E: get_next_line (get_next_line.c:27)
==387888==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387888==    by 0x40607D: main (mandatory.cpp:79)
==387888== 
==387888== Invalid read of size 1
==387888==    at 0x4075C1: ft_strjoin (get_next_line_utils.c:68)
==387888==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387888==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387888==    by 0x406089: main (mandatory.cpp:79)
==387888==  Address 0x4de6061 is 1 bytes inside a block of size 2 free'd
==387888==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387888==    by 0x407725: f_search_bn (get_next_line_utils.c:119)
==387888==    by 0x4073EC: get_next_line (get_next_line.c:51)
==387888==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387888==    by 0x40607D: main (mandatory.cpp:79)
==387888==  Block was alloc'd at
==387888==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387888==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==387888==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387888==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387888==    by 0x40607D: main (mandatory.cpp:79)
==387888== 
==387888== 1 bytes in 1 blocks are definitely lost in loss record 1 of 1
==387888==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387888==    by 0x407396: get_next_line (get_next_line.c:43)
==387888==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387888==    by 0x406035: main (mandatory.cpp:79)
==387888== 
==387889== Invalid read of size 1
==387889==    at 0x407747: f_del_front_bn (get_next_line_utils.c:163)
==387889==    by 0x4073FF: get_next_line (get_next_line.c:52)
==387889==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387889==    by 0x4062A9: main (mandatory.cpp:88)
==387889==  Address 0x4de5f50 is 0 bytes inside a block of size 43 free'd
==387889==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387889==    by 0x407725: f_search_bn (get_next_line_utils.c:119)
==387889==    by 0x4073EC: get_next_line (get_next_line.c:51)
==387889==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387889==    by 0x4062A9: main (mandatory.cpp:88)
==387889==  Block was alloc'd at
==387889==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387889==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==387889==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387889==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387889==    by 0x4062A9: main (mandatory.cpp:88)
==387889== 
==387889== Invalid free() / delete / delete[] / realloc()
==387889==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387889==    by 0x407412: get_next_line (get_next_line.c:53)
==387889==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387889==    by 0x4062A9: main (mandatory.cpp:88)
==387889==  Address 0x4de5e90 is 0 bytes inside a block of size 43 free'd
==387889==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387889==    by 0x407634: ft_strjoin (get_next_line_utils.c:82)
==387889==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387889==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387889==    by 0x4062A9: main (mandatory.cpp:88)
==387889==  Block was alloc'd at
==387889==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387889==    by 0x40732E: get_next_line (get_next_line.c:27)
==387889==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387889==    by 0x4062A9: main (mandatory.cpp:88)
==387889== 
==387889== Invalid read of size 1
==387889==    at 0x40751A: ft_strlen (get_next_line_utils.c:43)
==387889==    by 0x407547: ft_strjoin (get_next_line_utils.c:59)
==387889==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387889==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387889==    by 0x4062BB: main (mandatory.cpp:88)
==387889==  Address 0x4de5f7a is 42 bytes inside a block of size 43 free'd
==387889==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387889==    by 0x407725: f_search_bn (get_next_line_utils.c:119)
==387889==    by 0x4073EC: get_next_line (get_next_line.c:51)
==387889==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387889==    by 0x4062A9: main (mandatory.cpp:88)
==387889==  Block was alloc'd at
==387889==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387889==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==387889==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387889==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387889==    by 0x4062A9: main (mandatory.cpp:88)
==387889== 
==387889== Invalid read of size 1
==387889==    at 0x4075C1: ft_strjoin (get_next_line_utils.c:68)
==387889==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387889==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387889==    by 0x4062BB: main (mandatory.cpp:88)
==387889==  Address 0x4de5f7a is 42 bytes inside a block of size 43 free'd
==387889==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387889==    by 0x407725: f_search_bn (get_next_line_utils.c:119)
==387889==    by 0x4073EC: get_next_line (get_next_line.c:51)
==387889==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387889==    by 0x4062A9: main (mandatory.cpp:88)
==387889==  Block was alloc'd at
==387889==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387889==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==387889==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387889==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387889==    by 0x4062A9: main (mandatory.cpp:88)
==387889== 
==387889== Syscall param read(buf) points to unaddressable byte(s)
==387889==    at 0x4CB8992: read (read.c:26)
==387889==    by 0x40736D: get_next_line (get_next_line.c:37)
==387889==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387889==    by 0x4062BB: main (mandatory.cpp:88)
==387889==  Address 0x4de6030 is 0 bytes inside a block of size 43 free'd
==387889==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387889==    by 0x407634: ft_strjoin (get_next_line_utils.c:82)
==387889==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387889==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387889==    by 0x4062BB: main (mandatory.cpp:88)
==387889==  Block was alloc'd at
==387889==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387889==    by 0x40732E: get_next_line (get_next_line.c:27)
==387889==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387889==    by 0x4062BB: main (mandatory.cpp:88)
==387889== 
==387889== Invalid write of size 1
==387889==    at 0x40737E: get_next_line (get_next_line.c:38)
==387889==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387889==    by 0x4062BB: main (mandatory.cpp:88)
==387889==  Address 0x4de605a is 42 bytes inside a block of size 43 free'd
==387889==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387889==    by 0x407634: ft_strjoin (get_next_line_utils.c:82)
==387889==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387889==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387889==    by 0x4062BB: main (mandatory.cpp:88)
==387889==  Block was alloc'd at
==387889==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387889==    by 0x40732E: get_next_line (get_next_line.c:27)
==387889==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387889==    by 0x4062BB: main (mandatory.cpp:88)
==387889== 
==387889== Invalid read of size 1
==387889==    at 0x40751A: ft_strlen (get_next_line_utils.c:43)
==387889==    by 0x407555: ft_strjoin (get_next_line_utils.c:59)
==387889==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387889==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387889==    by 0x4062BB: main (mandatory.cpp:88)
==387889==  Address 0x4de605a is 42 bytes inside a block of size 43 free'd
==387889==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387889==    by 0x407634: ft_strjoin (get_next_line_utils.c:82)
==387889==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387889==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387889==    by 0x4062BB: main (mandatory.cpp:88)
==387889==  Block was alloc'd at
==387889==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387889==    by 0x40732E: get_next_line (get_next_line.c:27)
==387889==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387889==    by 0x4062BB: main (mandatory.cpp:88)
==387889== 
==387889== Invalid read of size 1
==387889==    at 0x40760D: ft_strjoin (get_next_line_utils.c:75)
==387889==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387889==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387889==    by 0x4062BB: main (mandatory.cpp:88)
==387889==  Address 0x4de605a is 42 bytes inside a block of size 43 free'd
==387889==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387889==    by 0x407634: ft_strjoin (get_next_line_utils.c:82)
==387889==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387889==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387889==    by 0x4062BB: main (mandatory.cpp:88)
==387889==  Block was alloc'd at
==387889==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387889==    by 0x40732E: get_next_line (get_next_line.c:27)
==387889==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387889==    by 0x4062BB: main (mandatory.cpp:88)
==387889== 
==387889== Invalid free() / delete / delete[] / realloc()
==387889==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387889==    by 0x407634: ft_strjoin (get_next_line_utils.c:82)
==387889==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387889==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387889==    by 0x4062BB: main (mandatory.cpp:88)
==387889==  Address 0x4de6030 is 0 bytes inside a block of size 43 free'd
==387889==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387889==    by 0x407634: ft_strjoin (get_next_line_utils.c:82)
==387889==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387889==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387889==    by 0x4062BB: main (mandatory.cpp:88)
==387889==  Block was alloc'd at
==387889==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387889==    by 0x40732E: get_next_line (get_next_line.c:27)
==387889==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387889==    by 0x4062BB: main (mandatory.cpp:88)
==387889== 
==387889== Invalid read of size 1
==387889==    at 0x407747: f_del_front_bn (get_next_line_utils.c:163)
==387889==    by 0x4073FF: get_next_line (get_next_line.c:52)
==387889==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387889==    by 0x4062BB: main (mandatory.cpp:88)
==387889==  Address 0x4de6110 is 0 bytes inside a block of size 85 free'd
==387889==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387889==    by 0x407725: f_search_bn (get_next_line_utils.c:119)
==387889==    by 0x4073EC: get_next_line (get_next_line.c:51)
==387889==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387889==    by 0x4062BB: main (mandatory.cpp:88)
==387889==  Block was alloc'd at
==387889==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387889==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==387889==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387889==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387889==    by 0x4062BB: main (mandatory.cpp:88)
==387889== 
==387889== Invalid free() / delete / delete[] / realloc()
==387889==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387889==    by 0x407412: get_next_line (get_next_line.c:53)
==387889==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387889==    by 0x4062BB: main (mandatory.cpp:88)
==387889==  Address 0x4de6030 is 0 bytes inside a block of size 43 free'd
==387889==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387889==    by 0x407634: ft_strjoin (get_next_line_utils.c:82)
==387889==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387889==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387889==    by 0x4062BB: main (mandatory.cpp:88)
==387889==  Block was alloc'd at
==387889==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387889==    by 0x40732E: get_next_line (get_next_line.c:27)
==387889==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387889==    by 0x4062BB: main (mandatory.cpp:88)
==387889== 
==387889== Invalid read of size 1
==387889==    at 0x4075C1: ft_strjoin (get_next_line_utils.c:68)
==387889==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387889==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387889==    by 0x4062CD: main (mandatory.cpp:88)
==387889==  Address 0x4de613b is 43 bytes inside a block of size 85 free'd
==387889==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387889==    by 0x407725: f_search_bn (get_next_line_utils.c:119)
==387889==    by 0x4073EC: get_next_line (get_next_line.c:51)
==387889==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387889==    by 0x4062BB: main (mandatory.cpp:88)
==387889==  Block was alloc'd at
==387889==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387889==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==387889==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387889==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387889==    by 0x4062BB: main (mandatory.cpp:88)
==387889== 
==387889== Invalid read of size 1
==387889==    at 0x4075A4: ft_strjoin (get_next_line_utils.c:70)
==387889==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387889==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387889==    by 0x4062CD: main (mandatory.cpp:88)
==387889==  Address 0x4de613b is 43 bytes inside a block of size 85 free'd
==387889==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387889==    by 0x407725: f_search_bn (get_next_line_utils.c:119)
==387889==    by 0x4073EC: get_next_line (get_next_line.c:51)
==387889==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387889==    by 0x4062BB: main (mandatory.cpp:88)
==387889==  Block was alloc'd at
==387889==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387889==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==387889==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387889==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387889==    by 0x4062BB: main (mandatory.cpp:88)
==387889== 
==387889== Invalid read of size 1
==387889==    at 0x407747: f_del_front_bn (get_next_line_utils.c:163)
==387889==    by 0x4073FF: get_next_line (get_next_line.c:52)
==387889==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387889==    by 0x4062CD: main (mandatory.cpp:88)
==387889==  Address 0x4de6290 is 0 bytes inside a block of size 84 free'd
==387889==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387889==    by 0x407725: f_search_bn (get_next_line_utils.c:119)
==387889==    by 0x4073EC: get_next_line (get_next_line.c:51)
==387889==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387889==    by 0x4062CD: main (mandatory.cpp:88)
==387889==  Block was alloc'd at
==387889==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387889==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==387889==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387889==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387889==    by 0x4062CD: main (mandatory.cpp:88)
==387889== 
==387889== Invalid free() / delete / delete[] / realloc()
==387889==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387889==    by 0x407412: get_next_line (get_next_line.c:53)
==387889==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387889==    by 0x4062CD: main (mandatory.cpp:88)
==387889==  Address 0x4de6220 is 0 bytes inside a block of size 43 free'd
==387889==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387889==    by 0x407634: ft_strjoin (get_next_line_utils.c:82)
==387889==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387889==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387889==    by 0x4062CD: main (mandatory.cpp:88)
==387889==  Block was alloc'd at
==387889==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387889==    by 0x40732E: get_next_line (get_next_line.c:27)
==387889==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387889==    by 0x4062CD: main (mandatory.cpp:88)
==387889== 
==387889== Invalid read of size 1
==387889==    at 0x4075C1: ft_strjoin (get_next_line_utils.c:68)
==387889==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387889==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387889==    by 0x4062DF: main (mandatory.cpp:88)
==387889==  Address 0x4de62bc is 44 bytes inside a block of size 84 free'd
==387889==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387889==    by 0x407725: f_search_bn (get_next_line_utils.c:119)
==387889==    by 0x4073EC: get_next_line (get_next_line.c:51)
==387889==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387889==    by 0x4062CD: main (mandatory.cpp:88)
==387889==  Block was alloc'd at
==387889==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387889==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==387889==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387889==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387889==    by 0x4062CD: main (mandatory.cpp:88)
==387889== 
==387889== Invalid read of size 1
==387889==    at 0x4075A4: ft_strjoin (get_next_line_utils.c:70)
==387889==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387889==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387889==    by 0x4062DF: main (mandatory.cpp:88)
==387889==  Address 0x4de62bc is 44 bytes inside a block of size 84 free'd
==387889==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387889==    by 0x407725: f_search_bn (get_next_line_utils.c:119)
==387889==    by 0x4073EC: get_next_line (get_next_line.c:51)
==387889==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387889==    by 0x4062CD: main (mandatory.cpp:88)
==387889==  Block was alloc'd at
==387889==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387889==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==387889==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387889==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387889==    by 0x4062CD: main (mandatory.cpp:88)
==387889== 
==387889== Invalid read of size 1
==387889==    at 0x407747: f_del_front_bn (get_next_line_utils.c:163)
==387889==    by 0x4073FF: get_next_line (get_next_line.c:52)
==387889==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387889==    by 0x4062DF: main (mandatory.cpp:88)
==387889==  Address 0x4de6410 is 0 bytes inside a block of size 82 free'd
==387889==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387889==    by 0x407725: f_search_bn (get_next_line_utils.c:119)
==387889==    by 0x4073EC: get_next_line (get_next_line.c:51)
==387889==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387889==    by 0x4062DF: main (mandatory.cpp:88)
==387889==  Block was alloc'd at
==387889==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387889==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==387889==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387889==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387889==    by 0x4062DF: main (mandatory.cpp:88)
==387889== 
==387889== Invalid free() / delete / delete[] / realloc()
==387889==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387889==    by 0x407412: get_next_line (get_next_line.c:53)
==387889==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387889==    by 0x4062DF: main (mandatory.cpp:88)
==387889==  Address 0x4de63a0 is 0 bytes inside a block of size 43 free'd
==387889==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387889==    by 0x407634: ft_strjoin (get_next_line_utils.c:82)
==387889==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387889==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387889==    by 0x4062DF: main (mandatory.cpp:88)
==387889==  Block was alloc'd at
==387889==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387889==    by 0x40732E: get_next_line (get_next_line.c:27)
==387889==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387889==    by 0x4062DF: main (mandatory.cpp:88)
==387889== 
==387889== Invalid read of size 1
==387889==    at 0x4075C1: ft_strjoin (get_next_line_utils.c:68)
==387889==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387889==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387889==    by 0x4062F1: main (mandatory.cpp:88)
==387889==  Address 0x4de643b is 43 bytes inside a block of size 82 free'd
==387889==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387889==    by 0x407725: f_search_bn (get_next_line_utils.c:119)
==387889==    by 0x4073EC: get_next_line (get_next_line.c:51)
==387889==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387889==    by 0x4062DF: main (mandatory.cpp:88)
==387889==  Block was alloc'd at
==387889==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387889==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==387889==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387889==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387889==    by 0x4062DF: main (mandatory.cpp:88)
==387889== 
==387889== Invalid read of size 1
==387889==    at 0x4075A4: ft_strjoin (get_next_line_utils.c:70)
==387889==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387889==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387889==    by 0x4062F1: main (mandatory.cpp:88)
==387889==  Address 0x4de643b is 43 bytes inside a block of size 82 free'd
==387889==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387889==    by 0x407725: f_search_bn (get_next_line_utils.c:119)
==387889==    by 0x4073EC: get_next_line (get_next_line.c:51)
==387889==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387889==    by 0x4062DF: main (mandatory.cpp:88)
==387889==  Block was alloc'd at
==387889==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387889==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==387889==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387889==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387889==    by 0x4062DF: main (mandatory.cpp:88)
==387889== 
==387889== 1 bytes in 1 blocks are definitely lost in loss record 1 of 3
==387889==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387889==    by 0x407396: get_next_line (get_next_line.c:43)
==387889==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387889==    by 0x4062A9: main (mandatory.cpp:88)
==387889== 
==387889== 42 bytes in 1 blocks are definitely lost in loss record 2 of 3
==387889==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387889==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==387889==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387889==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387889==    by 0x4062F1: main (mandatory.cpp:88)
==387889== 
==387889== 43 bytes in 1 blocks are definitely lost in loss record 3 of 3
==387889==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387889==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==387889==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387889==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387889==    by 0x4062BB: main (mandatory.cpp:88)
==387889== 
==387892== Invalid read of size 1
==387892==    at 0x407747: f_del_front_bn (get_next_line_utils.c:163)
==387892==    by 0x4073FF: get_next_line (get_next_line.c:52)
==387892==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387892==    by 0x40651D: main (mandatory.cpp:97)
==387892==  Address 0x4de6280 is 0 bytes inside a block of size 43 free'd
==387892==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387892==    by 0x407725: f_search_bn (get_next_line_utils.c:119)
==387892==    by 0x4073EC: get_next_line (get_next_line.c:51)
==387892==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387892==    by 0x40651D: main (mandatory.cpp:97)
==387892==  Block was alloc'd at
==387892==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387892==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==387892==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387892==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387892==    by 0x40651D: main (mandatory.cpp:97)
==387892== 
==387892== Invalid free() / delete / delete[] / realloc()
==387892==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387892==    by 0x407412: get_next_line (get_next_line.c:53)
==387892==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387892==    by 0x40651D: main (mandatory.cpp:97)
==387892==  Address 0x4de61c0 is 0 bytes inside a block of size 43 free'd
==387892==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387892==    by 0x407634: ft_strjoin (get_next_line_utils.c:82)
==387892==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387892==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387892==    by 0x40651D: main (mandatory.cpp:97)
==387892==  Block was alloc'd at
==387892==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387892==    by 0x40732E: get_next_line (get_next_line.c:27)
==387892==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387892==    by 0x40651D: main (mandatory.cpp:97)
==387892== 
==387892== Invalid read of size 1
==387892==    at 0x40751A: ft_strlen (get_next_line_utils.c:43)
==387892==    by 0x407547: ft_strjoin (get_next_line_utils.c:59)
==387892==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387892==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387892==    by 0x40652F: main (mandatory.cpp:97)
==387892==  Address 0x4de62a9 is 41 bytes inside a block of size 43 free'd
==387892==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387892==    by 0x407725: f_search_bn (get_next_line_utils.c:119)
==387892==    by 0x4073EC: get_next_line (get_next_line.c:51)
==387892==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387892==    by 0x40651D: main (mandatory.cpp:97)
==387892==  Block was alloc'd at
==387892==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387892==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==387892==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387892==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387892==    by 0x40651D: main (mandatory.cpp:97)
==387892== 
==387892== Invalid read of size 1
==387892==    at 0x4075C1: ft_strjoin (get_next_line_utils.c:68)
==387892==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387892==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387892==    by 0x40652F: main (mandatory.cpp:97)
==387892==  Address 0x4de62a9 is 41 bytes inside a block of size 43 free'd
==387892==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387892==    by 0x407725: f_search_bn (get_next_line_utils.c:119)
==387892==    by 0x4073EC: get_next_line (get_next_line.c:51)
==387892==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387892==    by 0x40651D: main (mandatory.cpp:97)
==387892==  Block was alloc'd at
==387892==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387892==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==387892==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387892==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387892==    by 0x40651D: main (mandatory.cpp:97)
==387892== 
==387892== Invalid read of size 1
==387892==    at 0x4075A4: ft_strjoin (get_next_line_utils.c:70)
==387892==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387892==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387892==    by 0x40652F: main (mandatory.cpp:97)
==387892==  Address 0x4de62a9 is 41 bytes inside a block of size 43 free'd
==387892==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387892==    by 0x407725: f_search_bn (get_next_line_utils.c:119)
==387892==    by 0x4073EC: get_next_line (get_next_line.c:51)
==387892==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387892==    by 0x40651D: main (mandatory.cpp:97)
==387892==  Block was alloc'd at
==387892==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387892==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==387892==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387892==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387892==    by 0x40651D: main (mandatory.cpp:97)
==387892== 
==387892== Invalid read of size 1
==387892==    at 0x407747: f_del_front_bn (get_next_line_utils.c:163)
==387892==    by 0x4073FF: get_next_line (get_next_line.c:52)
==387892==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387892==    by 0x40652F: main (mandatory.cpp:97)
==387892==  Address 0x4de63d0 is 0 bytes inside a block of size 44 free'd
==387892==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387892==    by 0x407725: f_search_bn (get_next_line_utils.c:119)
==387892==    by 0x4073EC: get_next_line (get_next_line.c:51)
==387892==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387892==    by 0x40652F: main (mandatory.cpp:97)
==387892==  Block was alloc'd at
==387892==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387892==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==387892==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387892==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387892==    by 0x40652F: main (mandatory.cpp:97)
==387892== 
==387892== Invalid free() / delete / delete[] / realloc()
==387892==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387892==    by 0x407412: get_next_line (get_next_line.c:53)
==387892==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387892==    by 0x40652F: main (mandatory.cpp:97)
==387892==  Address 0x4de6360 is 0 bytes inside a block of size 43 free'd
==387892==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387892==    by 0x407634: ft_strjoin (get_next_line_utils.c:82)
==387892==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387892==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387892==    by 0x40652F: main (mandatory.cpp:97)
==387892==  Block was alloc'd at
==387892==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387892==    by 0x40732E: get_next_line (get_next_line.c:27)
==387892==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387892==    by 0x40652F: main (mandatory.cpp:97)
==387892== 
==387892== Invalid read of size 1
==387892==    at 0x4075C1: ft_strjoin (get_next_line_utils.c:68)
==387892==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387892==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387892==    by 0x406541: main (mandatory.cpp:97)
==387892==  Address 0x4de63fa is 42 bytes inside a block of size 44 free'd
==387892==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387892==    by 0x407725: f_search_bn (get_next_line_utils.c:119)
==387892==    by 0x4073EC: get_next_line (get_next_line.c:51)
==387892==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387892==    by 0x40652F: main (mandatory.cpp:97)
==387892==  Block was alloc'd at
==387892==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387892==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==387892==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387892==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387892==    by 0x40652F: main (mandatory.cpp:97)
==387892== 
==387892== Invalid read of size 1
==387892==    at 0x4075A4: ft_strjoin (get_next_line_utils.c:70)
==387892==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387892==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387892==    by 0x406541: main (mandatory.cpp:97)
==387892==  Address 0x4de63fa is 42 bytes inside a block of size 44 free'd
==387892==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387892==    by 0x407725: f_search_bn (get_next_line_utils.c:119)
==387892==    by 0x4073EC: get_next_line (get_next_line.c:51)
==387892==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387892==    by 0x40652F: main (mandatory.cpp:97)
==387892==  Block was alloc'd at
==387892==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387892==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==387892==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387892==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387892==    by 0x40652F: main (mandatory.cpp:97)
==387892== 
==387892== Invalid read of size 1
==387892==    at 0x407747: f_del_front_bn (get_next_line_utils.c:163)
==387892==    by 0x4073FF: get_next_line (get_next_line.c:52)
==387892==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387892==    by 0x406541: main (mandatory.cpp:97)
==387892==  Address 0x4de6520 is 0 bytes inside a block of size 44 free'd
==387892==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387892==    by 0x407725: f_search_bn (get_next_line_utils.c:119)
==387892==    by 0x4073EC: get_next_line (get_next_line.c:51)
==387892==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387892==    by 0x406541: main (mandatory.cpp:97)
==387892==  Block was alloc'd at
==387892==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387892==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==387892==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387892==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387892==    by 0x406541: main (mandatory.cpp:97)
==387892== 
==387892== Invalid free() / delete / delete[] / realloc()
==387892==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387892==    by 0x407412: get_next_line (get_next_line.c:53)
==387892==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387892==    by 0x406541: main (mandatory.cpp:97)
==387892==  Address 0x4de64b0 is 0 bytes inside a block of size 43 free'd
==387892==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387892==    by 0x407634: ft_strjoin (get_next_line_utils.c:82)
==387892==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387892==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387892==    by 0x406541: main (mandatory.cpp:97)
==387892==  Block was alloc'd at
==387892==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387892==    by 0x40732E: get_next_line (get_next_line.c:27)
==387892==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387892==    by 0x406541: main (mandatory.cpp:97)
==387892== 
==387892== Invalid read of size 1
==387892==    at 0x4075C1: ft_strjoin (get_next_line_utils.c:68)
==387892==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387892==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387892==    by 0x406553: main (mandatory.cpp:97)
==387892==  Address 0x4de654b is 43 bytes inside a block of size 44 free'd
==387892==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387892==    by 0x407725: f_search_bn (get_next_line_utils.c:119)
==387892==    by 0x4073EC: get_next_line (get_next_line.c:51)
==387892==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387892==    by 0x406541: main (mandatory.cpp:97)
==387892==  Block was alloc'd at
==387892==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387892==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==387892==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387892==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387892==    by 0x406541: main (mandatory.cpp:97)
==387892== 
==387892== Invalid read of size 1
==387892==    at 0x407747: f_del_front_bn (get_next_line_utils.c:163)
==387892==    by 0x4073FF: get_next_line (get_next_line.c:52)
==387892==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387892==    by 0x406553: main (mandatory.cpp:97)
==387892==  Address 0x4de6670 is 0 bytes inside a block of size 43 free'd
==387892==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387892==    by 0x407725: f_search_bn (get_next_line_utils.c:119)
==387892==    by 0x4073EC: get_next_line (get_next_line.c:51)
==387892==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387892==    by 0x406553: main (mandatory.cpp:97)
==387892==  Block was alloc'd at
==387892==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387892==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==387892==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387892==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387892==    by 0x406553: main (mandatory.cpp:97)
==387892== 
==387892== Invalid free() / delete / delete[] / realloc()
==387892==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387892==    by 0x407412: get_next_line (get_next_line.c:53)
==387892==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387892==    by 0x406553: main (mandatory.cpp:97)
==387892==  Address 0x4de6600 is 0 bytes inside a block of size 43 free'd
==387892==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387892==    by 0x407634: ft_strjoin (get_next_line_utils.c:82)
==387892==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387892==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387892==    by 0x406553: main (mandatory.cpp:97)
==387892==  Block was alloc'd at
==387892==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387892==    by 0x40732E: get_next_line (get_next_line.c:27)
==387892==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387892==    by 0x406553: main (mandatory.cpp:97)
==387892== 
==387892== Invalid read of size 1
==387892==    at 0x4075C1: ft_strjoin (get_next_line_utils.c:68)
==387892==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387892==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387892==    by 0x406565: main (mandatory.cpp:97)
==387892==  Address 0x4de669a is 42 bytes inside a block of size 43 free'd
==387892==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387892==    by 0x407725: f_search_bn (get_next_line_utils.c:119)
==387892==    by 0x4073EC: get_next_line (get_next_line.c:51)
==387892==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387892==    by 0x406553: main (mandatory.cpp:97)
==387892==  Block was alloc'd at
==387892==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387892==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==387892==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387892==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387892==    by 0x406553: main (mandatory.cpp:97)
==387892== 
==387892== Invalid read of size 1
==387892==    at 0x407747: f_del_front_bn (get_next_line_utils.c:163)
==387892==    by 0x4073FF: get_next_line (get_next_line.c:52)
==387892==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387892==    by 0x406565: main (mandatory.cpp:97)
==387892==  Address 0x4de67c0 is 0 bytes inside a block of size 42 free'd
==387892==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387892==    by 0x407725: f_search_bn (get_next_line_utils.c:119)
==387892==    by 0x4073EC: get_next_line (get_next_line.c:51)
==387892==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387892==    by 0x406565: main (mandatory.cpp:97)
==387892==  Block was alloc'd at
==387892==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387892==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==387892==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387892==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387892==    by 0x406565: main (mandatory.cpp:97)
==387892== 
==387892== Invalid free() / delete / delete[] / realloc()
==387892==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387892==    by 0x407412: get_next_line (get_next_line.c:53)
==387892==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387892==    by 0x406565: main (mandatory.cpp:97)
==387892==  Address 0x4de6750 is 0 bytes inside a block of size 43 free'd
==387892==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387892==    by 0x407634: ft_strjoin (get_next_line_utils.c:82)
==387892==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387892==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387892==    by 0x406565: main (mandatory.cpp:97)
==387892==  Block was alloc'd at
==387892==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387892==    by 0x40732E: get_next_line (get_next_line.c:27)
==387892==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387892==    by 0x406565: main (mandatory.cpp:97)
==387892== 
==387892== Invalid read of size 1
==387892==    at 0x4075C1: ft_strjoin (get_next_line_utils.c:68)
==387892==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387892==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387892==    by 0x406571: main (mandatory.cpp:97)
==387892==  Address 0x4de67e9 is 41 bytes inside a block of size 42 free'd
==387892==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387892==    by 0x407725: f_search_bn (get_next_line_utils.c:119)
==387892==    by 0x4073EC: get_next_line (get_next_line.c:51)
==387892==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387892==    by 0x406565: main (mandatory.cpp:97)
==387892==  Block was alloc'd at
==387892==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387892==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==387892==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387892==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387892==    by 0x406565: main (mandatory.cpp:97)
==387892== 
==387892== 1 bytes in 1 blocks are definitely lost in loss record 1 of 1
==387892==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387892==    by 0x407396: get_next_line (get_next_line.c:43)
==387892==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387892==    by 0x40651D: main (mandatory.cpp:97)
==387892== 
==387893== Invalid read of size 1
==387893==    at 0x407747: f_del_front_bn (get_next_line_utils.c:163)
==387893==    by 0x4073FF: get_next_line (get_next_line.c:52)
==387893==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387893==    by 0x406791: main (mandatory.cpp:106)
==387893==  Address 0x4de65b0 is 0 bytes inside a block of size 43 free'd
==387893==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387893==    by 0x407725: f_search_bn (get_next_line_utils.c:119)
==387893==    by 0x4073EC: get_next_line (get_next_line.c:51)
==387893==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387893==    by 0x406791: main (mandatory.cpp:106)
==387893==  Block was alloc'd at
==387893==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387893==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==387893==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387893==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387893==    by 0x406791: main (mandatory.cpp:106)
==387893== 
==387893== Invalid free() / delete / delete[] / realloc()
==387893==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387893==    by 0x407412: get_next_line (get_next_line.c:53)
==387893==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387893==    by 0x406791: main (mandatory.cpp:106)
==387893==  Address 0x4de64f0 is 0 bytes inside a block of size 43 free'd
==387893==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387893==    by 0x407634: ft_strjoin (get_next_line_utils.c:82)
==387893==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387893==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387893==    by 0x406791: main (mandatory.cpp:106)
==387893==  Block was alloc'd at
==387893==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387893==    by 0x40732E: get_next_line (get_next_line.c:27)
==387893==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387893==    by 0x406791: main (mandatory.cpp:106)
==387893== 
==387893== Invalid read of size 1
==387893==    at 0x40751A: ft_strlen (get_next_line_utils.c:43)
==387893==    by 0x407547: ft_strjoin (get_next_line_utils.c:59)
==387893==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387893==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387893==    by 0x4067A3: main (mandatory.cpp:106)
==387893==  Address 0x4de65da is 42 bytes inside a block of size 43 free'd
==387893==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387893==    by 0x407725: f_search_bn (get_next_line_utils.c:119)
==387893==    by 0x4073EC: get_next_line (get_next_line.c:51)
==387893==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387893==    by 0x406791: main (mandatory.cpp:106)
==387893==  Block was alloc'd at
==387893==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387893==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==387893==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387893==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387893==    by 0x406791: main (mandatory.cpp:106)
==387893== 
==387893== Invalid read of size 1
==387893==    at 0x4075C1: ft_strjoin (get_next_line_utils.c:68)
==387893==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387893==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387893==    by 0x4067A3: main (mandatory.cpp:106)
==387893==  Address 0x4de65da is 42 bytes inside a block of size 43 free'd
==387893==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387893==    by 0x407725: f_search_bn (get_next_line_utils.c:119)
==387893==    by 0x4073EC: get_next_line (get_next_line.c:51)
==387893==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387893==    by 0x406791: main (mandatory.cpp:106)
==387893==  Block was alloc'd at
==387893==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387893==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==387893==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387893==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387893==    by 0x406791: main (mandatory.cpp:106)
==387893== 
==387893== Invalid read of size 1
==387893==    at 0x407747: f_del_front_bn (get_next_line_utils.c:163)
==387893==    by 0x4073FF: get_next_line (get_next_line.c:52)
==387893==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387893==    by 0x4067A3: main (mandatory.cpp:106)
==387893==  Address 0x4de6700 is 0 bytes inside a block of size 43 free'd
==387893==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387893==    by 0x407725: f_search_bn (get_next_line_utils.c:119)
==387893==    by 0x4073EC: get_next_line (get_next_line.c:51)
==387893==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387893==    by 0x4067A3: main (mandatory.cpp:106)
==387893==  Block was alloc'd at
==387893==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387893==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==387893==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387893==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387893==    by 0x4067A3: main (mandatory.cpp:106)
==387893== 
==387893== Invalid free() / delete / delete[] / realloc()
==387893==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387893==    by 0x407412: get_next_line (get_next_line.c:53)
==387893==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387893==    by 0x4067A3: main (mandatory.cpp:106)
==387893==  Address 0x4de6690 is 0 bytes inside a block of size 43 free'd
==387893==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387893==    by 0x407634: ft_strjoin (get_next_line_utils.c:82)
==387893==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387893==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387893==    by 0x4067A3: main (mandatory.cpp:106)
==387893==  Block was alloc'd at
==387893==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387893==    by 0x40732E: get_next_line (get_next_line.c:27)
==387893==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387893==    by 0x4067A3: main (mandatory.cpp:106)
==387893== 
==387893== Invalid read of size 1
==387893==    at 0x4075C1: ft_strjoin (get_next_line_utils.c:68)
==387893==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387893==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387893==    by 0x4067B5: main (mandatory.cpp:106)
==387893==  Address 0x4de6701 is 1 bytes inside a block of size 43 free'd
==387893==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387893==    by 0x407725: f_search_bn (get_next_line_utils.c:119)
==387893==    by 0x4073EC: get_next_line (get_next_line.c:51)
==387893==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387893==    by 0x4067A3: main (mandatory.cpp:106)
==387893==  Block was alloc'd at
==387893==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387893==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==387893==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387893==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387893==    by 0x4067A3: main (mandatory.cpp:106)
==387893== 
==387893== Invalid read of size 1
==387893==    at 0x4075A4: ft_strjoin (get_next_line_utils.c:70)
==387893==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387893==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387893==    by 0x4067B5: main (mandatory.cpp:106)
==387893==  Address 0x4de6701 is 1 bytes inside a block of size 43 free'd
==387893==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387893==    by 0x407725: f_search_bn (get_next_line_utils.c:119)
==387893==    by 0x4073EC: get_next_line (get_next_line.c:51)
==387893==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387893==    by 0x4067A3: main (mandatory.cpp:106)
==387893==  Block was alloc'd at
==387893==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387893==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==387893==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387893==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387893==    by 0x4067A3: main (mandatory.cpp:106)
==387893== 
==387893== Invalid read of size 1
==387893==    at 0x407747: f_del_front_bn (get_next_line_utils.c:163)
==387893==    by 0x4073FF: get_next_line (get_next_line.c:52)
==387893==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387893==    by 0x4067B5: main (mandatory.cpp:106)
==387893==  Address 0x4de6830 is 0 bytes inside a block of size 84 free'd
==387893==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387893==    by 0x407725: f_search_bn (get_next_line_utils.c:119)
==387893==    by 0x4073EC: get_next_line (get_next_line.c:51)
==387893==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387893==    by 0x4067B5: main (mandatory.cpp:106)
==387893==  Block was alloc'd at
==387893==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387893==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==387893==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387893==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387893==    by 0x4067B5: main (mandatory.cpp:106)
==387893== 
==387893== Invalid free() / delete / delete[] / realloc()
==387893==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387893==    by 0x407412: get_next_line (get_next_line.c:53)
==387893==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387893==    by 0x4067B5: main (mandatory.cpp:106)
==387893==  Address 0x4de67c0 is 0 bytes inside a block of size 43 free'd
==387893==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387893==    by 0x407634: ft_strjoin (get_next_line_utils.c:82)
==387893==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387893==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387893==    by 0x4067B5: main (mandatory.cpp:106)
==387893==  Block was alloc'd at
==387893==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387893==    by 0x40732E: get_next_line (get_next_line.c:27)
==387893==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387893==    by 0x4067B5: main (mandatory.cpp:106)
==387893== 
==387893== Invalid read of size 1
==387893==    at 0x4075C1: ft_strjoin (get_next_line_utils.c:68)
==387893==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387893==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387893==    by 0x4067C7: main (mandatory.cpp:106)
==387893==  Address 0x4de685b is 43 bytes inside a block of size 84 free'd
==387893==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387893==    by 0x407725: f_search_bn (get_next_line_utils.c:119)
==387893==    by 0x4073EC: get_next_line (get_next_line.c:51)
==387893==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387893==    by 0x4067B5: main (mandatory.cpp:106)
==387893==  Block was alloc'd at
==387893==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387893==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==387893==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387893==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387893==    by 0x4067B5: main (mandatory.cpp:106)
==387893== 
==387893== Invalid read of size 1
==387893==    at 0x4075A4: ft_strjoin (get_next_line_utils.c:70)
==387893==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387893==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387893==    by 0x4067C7: main (mandatory.cpp:106)
==387893==  Address 0x4de685b is 43 bytes inside a block of size 84 free'd
==387893==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387893==    by 0x407725: f_search_bn (get_next_line_utils.c:119)
==387893==    by 0x4073EC: get_next_line (get_next_line.c:51)
==387893==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387893==    by 0x4067B5: main (mandatory.cpp:106)
==387893==  Block was alloc'd at
==387893==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387893==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==387893==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387893==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387893==    by 0x4067B5: main (mandatory.cpp:106)
==387893== 
==387893== Invalid read of size 1
==387893==    at 0x407747: f_del_front_bn (get_next_line_utils.c:163)
==387893==    by 0x4073FF: get_next_line (get_next_line.c:52)
==387893==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387893==    by 0x4067C7: main (mandatory.cpp:106)
==387893==  Address 0x4de69b0 is 0 bytes inside a block of size 83 free'd
==387893==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387893==    by 0x407725: f_search_bn (get_next_line_utils.c:119)
==387893==    by 0x4073EC: get_next_line (get_next_line.c:51)
==387893==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387893==    by 0x4067C7: main (mandatory.cpp:106)
==387893==  Block was alloc'd at
==387893==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387893==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==387893==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387893==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387893==    by 0x4067C7: main (mandatory.cpp:106)
==387893== 
==387893== Invalid free() / delete / delete[] / realloc()
==387893==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387893==    by 0x407412: get_next_line (get_next_line.c:53)
==387893==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387893==    by 0x4067C7: main (mandatory.cpp:106)
==387893==  Address 0x4de6940 is 0 bytes inside a block of size 43 free'd
==387893==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387893==    by 0x407634: ft_strjoin (get_next_line_utils.c:82)
==387893==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387893==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387893==    by 0x4067C7: main (mandatory.cpp:106)
==387893==  Block was alloc'd at
==387893==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387893==    by 0x40732E: get_next_line (get_next_line.c:27)
==387893==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387893==    by 0x4067C7: main (mandatory.cpp:106)
==387893== 
==387893== Invalid read of size 1
==387893==    at 0x4075C1: ft_strjoin (get_next_line_utils.c:68)
==387893==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387893==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387893==    by 0x4067D9: main (mandatory.cpp:106)
==387893==  Address 0x4de69b1 is 1 bytes inside a block of size 83 free'd
==387893==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387893==    by 0x407725: f_search_bn (get_next_line_utils.c:119)
==387893==    by 0x4073EC: get_next_line (get_next_line.c:51)
==387893==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387893==    by 0x4067C7: main (mandatory.cpp:106)
==387893==  Block was alloc'd at
==387893==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387893==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==387893==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387893==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387893==    by 0x4067C7: main (mandatory.cpp:106)
==387893== 
==387893== Invalid read of size 1
==387893==    at 0x4075A4: ft_strjoin (get_next_line_utils.c:70)
==387893==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387893==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387893==    by 0x4067D9: main (mandatory.cpp:106)
==387893==  Address 0x4de69b1 is 1 bytes inside a block of size 83 free'd
==387893==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387893==    by 0x407725: f_search_bn (get_next_line_utils.c:119)
==387893==    by 0x4073EC: get_next_line (get_next_line.c:51)
==387893==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387893==    by 0x4067C7: main (mandatory.cpp:106)
==387893==  Block was alloc'd at
==387893==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387893==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==387893==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387893==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387893==    by 0x4067C7: main (mandatory.cpp:106)
==387893== 
==387893== Invalid read of size 1
==387893==    at 0x407747: f_del_front_bn (get_next_line_utils.c:163)
==387893==    by 0x4073FF: get_next_line (get_next_line.c:52)
==387893==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387893==    by 0x4067D9: main (mandatory.cpp:106)
==387893==  Address 0x4de6b10 is 0 bytes inside a block of size 124 free'd
==387893==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387893==    by 0x407725: f_search_bn (get_next_line_utils.c:119)
==387893==    by 0x4073EC: get_next_line (get_next_line.c:51)
==387893==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387893==    by 0x4067D9: main (mandatory.cpp:106)
==387893==  Block was alloc'd at
==387893==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387893==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==387893==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387893==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387893==    by 0x4067D9: main (mandatory.cpp:106)
==387893== 
==387893== Invalid free() / delete / delete[] / realloc()
==387893==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387893==    by 0x407412: get_next_line (get_next_line.c:53)
==387893==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387893==    by 0x4067D9: main (mandatory.cpp:106)
==387893==  Address 0x4de6aa0 is 0 bytes inside a block of size 43 free'd
==387893==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387893==    by 0x407634: ft_strjoin (get_next_line_utils.c:82)
==387893==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387893==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387893==    by 0x4067D9: main (mandatory.cpp:106)
==387893==  Block was alloc'd at
==387893==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387893==    by 0x40732E: get_next_line (get_next_line.c:27)
==387893==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387893==    by 0x4067D9: main (mandatory.cpp:106)
==387893== 
==387893== Invalid read of size 1
==387893==    at 0x4075C1: ft_strjoin (get_next_line_utils.c:68)
==387893==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387893==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387893==    by 0x4067EB: main (mandatory.cpp:106)
==387893==  Address 0x4de6b3c is 44 bytes inside a block of size 124 free'd
==387893==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387893==    by 0x407725: f_search_bn (get_next_line_utils.c:119)
==387893==    by 0x4073EC: get_next_line (get_next_line.c:51)
==387893==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387893==    by 0x4067D9: main (mandatory.cpp:106)
==387893==  Block was alloc'd at
==387893==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387893==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==387893==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387893==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387893==    by 0x4067D9: main (mandatory.cpp:106)
==387893== 
==387893== Invalid read of size 1
==387893==    at 0x4075A4: ft_strjoin (get_next_line_utils.c:70)
==387893==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387893==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387893==    by 0x4067EB: main (mandatory.cpp:106)
==387893==  Address 0x4de6b3c is 44 bytes inside a block of size 124 free'd
==387893==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387893==    by 0x407725: f_search_bn (get_next_line_utils.c:119)
==387893==    by 0x4073EC: get_next_line (get_next_line.c:51)
==387893==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387893==    by 0x4067D9: main (mandatory.cpp:106)
==387893==  Block was alloc'd at
==387893==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387893==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==387893==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387893==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387893==    by 0x4067D9: main (mandatory.cpp:106)
==387893== 
==387893== Invalid read of size 1
==387893==    at 0x407747: f_del_front_bn (get_next_line_utils.c:163)
==387893==    by 0x4073FF: get_next_line (get_next_line.c:52)
==387893==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387893==    by 0x4067EB: main (mandatory.cpp:106)
==387893==  Address 0x4de6cb0 is 0 bytes inside a block of size 87 free'd
==387893==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387893==    by 0x407725: f_search_bn (get_next_line_utils.c:119)
==387893==    by 0x4073EC: get_next_line (get_next_line.c:51)
==387893==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387893==    by 0x4067EB: main (mandatory.cpp:106)
==387893==  Block was alloc'd at
==387893==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387893==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==387893==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387893==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387893==    by 0x4067EB: main (mandatory.cpp:106)
==387893== 
==387893== Invalid free() / delete / delete[] / realloc()
==387893==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387893==    by 0x407412: get_next_line (get_next_line.c:53)
==387893==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387893==    by 0x4067EB: main (mandatory.cpp:106)
==387893==  Address 0x4de6c40 is 0 bytes inside a block of size 43 free'd
==387893==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387893==    by 0x407634: ft_strjoin (get_next_line_utils.c:82)
==387893==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387893==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387893==    by 0x4067EB: main (mandatory.cpp:106)
==387893==  Block was alloc'd at
==387893==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387893==    by 0x40732E: get_next_line (get_next_line.c:27)
==387893==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387893==    by 0x4067EB: main (mandatory.cpp:106)
==387893== 
==387893== Invalid read of size 1
==387893==    at 0x4075C1: ft_strjoin (get_next_line_utils.c:68)
==387893==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387893==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387893==    by 0x4067FD: main (mandatory.cpp:106)
==387893==  Address 0x4de6cb1 is 1 bytes inside a block of size 87 free'd
==387893==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387893==    by 0x407725: f_search_bn (get_next_line_utils.c:119)
==387893==    by 0x4073EC: get_next_line (get_next_line.c:51)
==387893==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387893==    by 0x4067EB: main (mandatory.cpp:106)
==387893==  Block was alloc'd at
==387893==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387893==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==387893==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387893==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387893==    by 0x4067EB: main (mandatory.cpp:106)
==387893== 
==387893== Invalid read of size 1
==387893==    at 0x4075A4: ft_strjoin (get_next_line_utils.c:70)
==387893==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387893==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387893==    by 0x4067FD: main (mandatory.cpp:106)
==387893==  Address 0x4de6cb1 is 1 bytes inside a block of size 87 free'd
==387893==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387893==    by 0x407725: f_search_bn (get_next_line_utils.c:119)
==387893==    by 0x4073EC: get_next_line (get_next_line.c:51)
==387893==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387893==    by 0x4067EB: main (mandatory.cpp:106)
==387893==  Block was alloc'd at
==387893==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387893==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==387893==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387893==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387893==    by 0x4067EB: main (mandatory.cpp:106)
==387893== 
==387893== Invalid read of size 1
==387893==    at 0x407747: f_del_front_bn (get_next_line_utils.c:163)
==387893==    by 0x4073FF: get_next_line (get_next_line.c:52)
==387893==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387893==    by 0x4067FD: main (mandatory.cpp:106)
==387893==  Address 0x4de6e10 is 0 bytes inside a block of size 86 free'd
==387893==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387893==    by 0x407725: f_search_bn (get_next_line_utils.c:119)
==387893==    by 0x4073EC: get_next_line (get_next_line.c:51)
==387893==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387893==    by 0x4067FD: main (mandatory.cpp:106)
==387893==  Block was alloc'd at
==387893==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387893==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==387893==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387893==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387893==    by 0x4067FD: main (mandatory.cpp:106)
==387893== 
==387893== Invalid free() / delete / delete[] / realloc()
==387893==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387893==    by 0x407412: get_next_line (get_next_line.c:53)
==387893==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387893==    by 0x4067FD: main (mandatory.cpp:106)
==387893==  Address 0x4de6da0 is 0 bytes inside a block of size 43 free'd
==387893==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387893==    by 0x407634: ft_strjoin (get_next_line_utils.c:82)
==387893==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387893==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387893==    by 0x4067FD: main (mandatory.cpp:106)
==387893==  Block was alloc'd at
==387893==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387893==    by 0x40732E: get_next_line (get_next_line.c:27)
==387893==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387893==    by 0x4067FD: main (mandatory.cpp:106)
==387893== 
==387893== Invalid read of size 1
==387893==    at 0x4075C1: ft_strjoin (get_next_line_utils.c:68)
==387893==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387893==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387893==    by 0x40680F: main (mandatory.cpp:106)
==387893==  Address 0x4de6e3b is 43 bytes inside a block of size 86 free'd
==387893==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387893==    by 0x407725: f_search_bn (get_next_line_utils.c:119)
==387893==    by 0x4073EC: get_next_line (get_next_line.c:51)
==387893==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387893==    by 0x4067FD: main (mandatory.cpp:106)
==387893==  Block was alloc'd at
==387893==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387893==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==387893==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387893==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387893==    by 0x4067FD: main (mandatory.cpp:106)
==387893== 
==387893== Invalid read of size 1
==387893==    at 0x4075A4: ft_strjoin (get_next_line_utils.c:70)
==387893==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387893==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387893==    by 0x40680F: main (mandatory.cpp:106)
==387893==  Address 0x4de6e3b is 43 bytes inside a block of size 86 free'd
==387893==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387893==    by 0x407725: f_search_bn (get_next_line_utils.c:119)
==387893==    by 0x4073EC: get_next_line (get_next_line.c:51)
==387893==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387893==    by 0x4067FD: main (mandatory.cpp:106)
==387893==  Block was alloc'd at
==387893==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387893==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==387893==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387893==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387893==    by 0x4067FD: main (mandatory.cpp:106)
==387893== 
==387893== Invalid read of size 1
==387893==    at 0x407747: f_del_front_bn (get_next_line_utils.c:163)
==387893==    by 0x4073FF: get_next_line (get_next_line.c:52)
==387893==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387893==    by 0x40680F: main (mandatory.cpp:106)
==387893==  Address 0x4de6f90 is 0 bytes inside a block of size 43 free'd
==387893==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387893==    by 0x407725: f_search_bn (get_next_line_utils.c:119)
==387893==    by 0x4073EC: get_next_line (get_next_line.c:51)
==387893==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387893==    by 0x40680F: main (mandatory.cpp:106)
==387893==  Block was alloc'd at
==387893==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387893==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==387893==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387893==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387893==    by 0x40680F: main (mandatory.cpp:106)
==387893== 
==387893== Invalid free() / delete / delete[] / realloc()
==387893==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387893==    by 0x407412: get_next_line (get_next_line.c:53)
==387893==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387893==    by 0x40680F: main (mandatory.cpp:106)
==387893==  Address 0x4de6f20 is 0 bytes inside a block of size 43 free'd
==387893==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387893==    by 0x407634: ft_strjoin (get_next_line_utils.c:82)
==387893==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387893==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387893==    by 0x40680F: main (mandatory.cpp:106)
==387893==  Block was alloc'd at
==387893==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387893==    by 0x40732E: get_next_line (get_next_line.c:27)
==387893==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387893==    by 0x40680F: main (mandatory.cpp:106)
==387893== 
==387893== Invalid read of size 1
==387893==    at 0x4075C1: ft_strjoin (get_next_line_utils.c:68)
==387893==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387893==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387893==    by 0x406821: main (mandatory.cpp:106)
==387893==  Address 0x4de6f91 is 1 bytes inside a block of size 43 free'd
==387893==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387893==    by 0x407725: f_search_bn (get_next_line_utils.c:119)
==387893==    by 0x4073EC: get_next_line (get_next_line.c:51)
==387893==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387893==    by 0x40680F: main (mandatory.cpp:106)
==387893==  Block was alloc'd at
==387893==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387893==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==387893==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387893==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387893==    by 0x40680F: main (mandatory.cpp:106)
==387893== 
==387893== Invalid read of size 1
==387893==    at 0x4075A4: ft_strjoin (get_next_line_utils.c:70)
==387893==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387893==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387893==    by 0x406821: main (mandatory.cpp:106)
==387893==  Address 0x4de6f91 is 1 bytes inside a block of size 43 free'd
==387893==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387893==    by 0x407725: f_search_bn (get_next_line_utils.c:119)
==387893==    by 0x4073EC: get_next_line (get_next_line.c:51)
==387893==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387893==    by 0x40680F: main (mandatory.cpp:106)
==387893==  Block was alloc'd at
==387893==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387893==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==387893==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387893==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387893==    by 0x40680F: main (mandatory.cpp:106)
==387893== 
==387893== Invalid read of size 1
==387893==    at 0x484FBD4: strcmp (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387893==    by 0x402D0A: gnl(int, char const*) (gnl.cpp:24)
==387893==    by 0x406821: main (mandatory.cpp:106)
==387893==  Address 0x0 is not stack'd, malloc'd or (recently) free'd
==387893== 
==387893== 1 bytes in 1 blocks are definitely lost in loss record 1 of 1
==387893==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387893==    by 0x407396: get_next_line (get_next_line.c:43)
==387893==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387893==    by 0x406791: main (mandatory.cpp:106)
==387893== 
==387899== Invalid read of size 1
==387899==    at 0x407747: f_del_front_bn (get_next_line_utils.c:163)
==387899==    by 0x4073FF: get_next_line (get_next_line.c:52)
==387899==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387899==    by 0x406A4D: main (mandatory.cpp:119)
==387899==  Address 0x4de68e0 is 0 bytes inside a block of size 43 free'd
==387899==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387899==    by 0x407725: f_search_bn (get_next_line_utils.c:119)
==387899==    by 0x4073EC: get_next_line (get_next_line.c:51)
==387899==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387899==    by 0x406A4D: main (mandatory.cpp:119)
==387899==  Block was alloc'd at
==387899==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387899==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==387899==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387899==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387899==    by 0x406A4D: main (mandatory.cpp:119)
==387899== 
==387899== Invalid free() / delete / delete[] / realloc()
==387899==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387899==    by 0x407412: get_next_line (get_next_line.c:53)
==387899==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387899==    by 0x406A4D: main (mandatory.cpp:119)
==387899==  Address 0x4de6820 is 0 bytes inside a block of size 43 free'd
==387899==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387899==    by 0x407634: ft_strjoin (get_next_line_utils.c:82)
==387899==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387899==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387899==    by 0x406A4D: main (mandatory.cpp:119)
==387899==  Block was alloc'd at
==387899==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387899==    by 0x40732E: get_next_line (get_next_line.c:27)
==387899==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387899==    by 0x406A4D: main (mandatory.cpp:119)
==387899== 
==387899== Invalid read of size 1
==387899==    at 0x40751A: ft_strlen (get_next_line_utils.c:43)
==387899==    by 0x407547: ft_strjoin (get_next_line_utils.c:59)
==387899==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387899==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387899==    by 0x406A5F: main (mandatory.cpp:119)
==387899==  Address 0x4de690a is 42 bytes inside a block of size 43 free'd
==387899==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387899==    by 0x407725: f_search_bn (get_next_line_utils.c:119)
==387899==    by 0x4073EC: get_next_line (get_next_line.c:51)
==387899==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387899==    by 0x406A4D: main (mandatory.cpp:119)
==387899==  Block was alloc'd at
==387899==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387899==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==387899==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387899==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387899==    by 0x406A4D: main (mandatory.cpp:119)
==387899== 
==387899== Invalid read of size 1
==387899==    at 0x4075C1: ft_strjoin (get_next_line_utils.c:68)
==387899==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387899==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387899==    by 0x406A5F: main (mandatory.cpp:119)
==387899==  Address 0x4de690a is 42 bytes inside a block of size 43 free'd
==387899==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387899==    by 0x407725: f_search_bn (get_next_line_utils.c:119)
==387899==    by 0x4073EC: get_next_line (get_next_line.c:51)
==387899==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387899==    by 0x406A4D: main (mandatory.cpp:119)
==387899==  Block was alloc'd at
==387899==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387899==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==387899==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387899==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387899==    by 0x406A4D: main (mandatory.cpp:119)
==387899== 
==387899== Invalid read of size 1
==387899==    at 0x407747: f_del_front_bn (get_next_line_utils.c:163)
==387899==    by 0x4073FF: get_next_line (get_next_line.c:52)
==387899==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387899==    by 0x406A5F: main (mandatory.cpp:119)
==387899==  Address 0x4de6a30 is 0 bytes inside a block of size 43 free'd
==387899==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387899==    by 0x407725: f_search_bn (get_next_line_utils.c:119)
==387899==    by 0x4073EC: get_next_line (get_next_line.c:51)
==387899==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387899==    by 0x406A5F: main (mandatory.cpp:119)
==387899==  Block was alloc'd at
==387899==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387899==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==387899==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387899==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387899==    by 0x406A5F: main (mandatory.cpp:119)
==387899== 
==387899== Invalid free() / delete / delete[] / realloc()
==387899==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387899==    by 0x407412: get_next_line (get_next_line.c:53)
==387899==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387899==    by 0x406A5F: main (mandatory.cpp:119)
==387899==  Address 0x4de69c0 is 0 bytes inside a block of size 43 free'd
==387899==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387899==    by 0x407634: ft_strjoin (get_next_line_utils.c:82)
==387899==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387899==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387899==    by 0x406A5F: main (mandatory.cpp:119)
==387899==  Block was alloc'd at
==387899==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387899==    by 0x40732E: get_next_line (get_next_line.c:27)
==387899==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387899==    by 0x406A5F: main (mandatory.cpp:119)
==387899== 
==387899== Invalid read of size 1
==387899==    at 0x4075C1: ft_strjoin (get_next_line_utils.c:68)
==387899==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387899==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387899==    by 0x406A71: main (mandatory.cpp:119)
==387899==  Address 0x4de6a31 is 1 bytes inside a block of size 43 free'd
==387899==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387899==    by 0x407725: f_search_bn (get_next_line_utils.c:119)
==387899==    by 0x4073EC: get_next_line (get_next_line.c:51)
==387899==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387899==    by 0x406A5F: main (mandatory.cpp:119)
==387899==  Block was alloc'd at
==387899==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387899==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==387899==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387899==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387899==    by 0x406A5F: main (mandatory.cpp:119)
==387899== 
==387899== Invalid read of size 1
==387899==    at 0x4075A4: ft_strjoin (get_next_line_utils.c:70)
==387899==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387899==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387899==    by 0x406A71: main (mandatory.cpp:119)
==387899==  Address 0x4de6a31 is 1 bytes inside a block of size 43 free'd
==387899==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387899==    by 0x407725: f_search_bn (get_next_line_utils.c:119)
==387899==    by 0x4073EC: get_next_line (get_next_line.c:51)
==387899==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387899==    by 0x406A5F: main (mandatory.cpp:119)
==387899==  Block was alloc'd at
==387899==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387899==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==387899==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387899==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387899==    by 0x406A5F: main (mandatory.cpp:119)
==387899== 
==387899== Invalid read of size 1
==387899==    at 0x407747: f_del_front_bn (get_next_line_utils.c:163)
==387899==    by 0x4073FF: get_next_line (get_next_line.c:52)
==387899==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387899==    by 0x406A71: main (mandatory.cpp:119)
==387899==  Address 0x4de6b60 is 0 bytes inside a block of size 84 free'd
==387899==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387899==    by 0x407725: f_search_bn (get_next_line_utils.c:119)
==387899==    by 0x4073EC: get_next_line (get_next_line.c:51)
==387899==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387899==    by 0x406A71: main (mandatory.cpp:119)
==387899==  Block was alloc'd at
==387899==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387899==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==387899==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387899==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387899==    by 0x406A71: main (mandatory.cpp:119)
==387899== 
==387899== Invalid free() / delete / delete[] / realloc()
==387899==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387899==    by 0x407412: get_next_line (get_next_line.c:53)
==387899==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387899==    by 0x406A71: main (mandatory.cpp:119)
==387899==  Address 0x4de6af0 is 0 bytes inside a block of size 43 free'd
==387899==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387899==    by 0x407634: ft_strjoin (get_next_line_utils.c:82)
==387899==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387899==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387899==    by 0x406A71: main (mandatory.cpp:119)
==387899==  Block was alloc'd at
==387899==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387899==    by 0x40732E: get_next_line (get_next_line.c:27)
==387899==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387899==    by 0x406A71: main (mandatory.cpp:119)
==387899== 
==387899== Invalid read of size 1
==387899==    at 0x4075C1: ft_strjoin (get_next_line_utils.c:68)
==387899==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387899==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387899==    by 0x406A83: main (mandatory.cpp:119)
==387899==  Address 0x4de6b8b is 43 bytes inside a block of size 84 free'd
==387899==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387899==    by 0x407725: f_search_bn (get_next_line_utils.c:119)
==387899==    by 0x4073EC: get_next_line (get_next_line.c:51)
==387899==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387899==    by 0x406A71: main (mandatory.cpp:119)
==387899==  Block was alloc'd at
==387899==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387899==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==387899==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387899==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387899==    by 0x406A71: main (mandatory.cpp:119)
==387899== 
==387899== Invalid read of size 1
==387899==    at 0x4075A4: ft_strjoin (get_next_line_utils.c:70)
==387899==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387899==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387899==    by 0x406A83: main (mandatory.cpp:119)
==387899==  Address 0x4de6b8b is 43 bytes inside a block of size 84 free'd
==387899==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387899==    by 0x407725: f_search_bn (get_next_line_utils.c:119)
==387899==    by 0x4073EC: get_next_line (get_next_line.c:51)
==387899==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387899==    by 0x406A71: main (mandatory.cpp:119)
==387899==  Block was alloc'd at
==387899==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387899==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==387899==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387899==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387899==    by 0x406A71: main (mandatory.cpp:119)
==387899== 
==387899== Invalid read of size 1
==387899==    at 0x407747: f_del_front_bn (get_next_line_utils.c:163)
==387899==    by 0x4073FF: get_next_line (get_next_line.c:52)
==387899==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387899==    by 0x406A83: main (mandatory.cpp:119)
==387899==  Address 0x4de6ce0 is 0 bytes inside a block of size 83 free'd
==387899==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387899==    by 0x407725: f_search_bn (get_next_line_utils.c:119)
==387899==    by 0x4073EC: get_next_line (get_next_line.c:51)
==387899==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387899==    by 0x406A83: main (mandatory.cpp:119)
==387899==  Block was alloc'd at
==387899==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387899==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==387899==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387899==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387899==    by 0x406A83: main (mandatory.cpp:119)
==387899== 
==387899== Invalid free() / delete / delete[] / realloc()
==387899==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387899==    by 0x407412: get_next_line (get_next_line.c:53)
==387899==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387899==    by 0x406A83: main (mandatory.cpp:119)
==387899==  Address 0x4de6c70 is 0 bytes inside a block of size 43 free'd
==387899==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387899==    by 0x407634: ft_strjoin (get_next_line_utils.c:82)
==387899==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387899==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387899==    by 0x406A83: main (mandatory.cpp:119)
==387899==  Block was alloc'd at
==387899==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387899==    by 0x40732E: get_next_line (get_next_line.c:27)
==387899==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387899==    by 0x406A83: main (mandatory.cpp:119)
==387899== 
==387899== Invalid read of size 1
==387899==    at 0x4075C1: ft_strjoin (get_next_line_utils.c:68)
==387899==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387899==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387899==    by 0x406A95: main (mandatory.cpp:119)
==387899==  Address 0x4de6ce1 is 1 bytes inside a block of size 83 free'd
==387899==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387899==    by 0x407725: f_search_bn (get_next_line_utils.c:119)
==387899==    by 0x4073EC: get_next_line (get_next_line.c:51)
==387899==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387899==    by 0x406A83: main (mandatory.cpp:119)
==387899==  Block was alloc'd at
==387899==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387899==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==387899==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387899==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387899==    by 0x406A83: main (mandatory.cpp:119)
==387899== 
==387899== Invalid read of size 1
==387899==    at 0x4075A4: ft_strjoin (get_next_line_utils.c:70)
==387899==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387899==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387899==    by 0x406A95: main (mandatory.cpp:119)
==387899==  Address 0x4de6ce1 is 1 bytes inside a block of size 83 free'd
==387899==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387899==    by 0x407725: f_search_bn (get_next_line_utils.c:119)
==387899==    by 0x4073EC: get_next_line (get_next_line.c:51)
==387899==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387899==    by 0x406A83: main (mandatory.cpp:119)
==387899==  Block was alloc'd at
==387899==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387899==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==387899==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387899==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387899==    by 0x406A83: main (mandatory.cpp:119)
==387899== 
==387899== Invalid read of size 1
==387899==    at 0x407747: f_del_front_bn (get_next_line_utils.c:163)
==387899==    by 0x4073FF: get_next_line (get_next_line.c:52)
==387899==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387899==    by 0x406A95: main (mandatory.cpp:119)
==387899==  Address 0x4de6e40 is 0 bytes inside a block of size 124 free'd
==387899==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387899==    by 0x407725: f_search_bn (get_next_line_utils.c:119)
==387899==    by 0x4073EC: get_next_line (get_next_line.c:51)
==387899==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387899==    by 0x406A95: main (mandatory.cpp:119)
==387899==  Block was alloc'd at
==387899==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387899==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==387899==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387899==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387899==    by 0x406A95: main (mandatory.cpp:119)
==387899== 
==387899== Invalid free() / delete / delete[] / realloc()
==387899==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387899==    by 0x407412: get_next_line (get_next_line.c:53)
==387899==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387899==    by 0x406A95: main (mandatory.cpp:119)
==387899==  Address 0x4de6dd0 is 0 bytes inside a block of size 43 free'd
==387899==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387899==    by 0x407634: ft_strjoin (get_next_line_utils.c:82)
==387899==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387899==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387899==    by 0x406A95: main (mandatory.cpp:119)
==387899==  Block was alloc'd at
==387899==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387899==    by 0x40732E: get_next_line (get_next_line.c:27)
==387899==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387899==    by 0x406A95: main (mandatory.cpp:119)
==387899== 
==387899== Invalid read of size 1
==387899==    at 0x4075C1: ft_strjoin (get_next_line_utils.c:68)
==387899==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387899==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387899==    by 0x406AA7: main (mandatory.cpp:119)
==387899==  Address 0x4de6e6c is 44 bytes inside a block of size 124 free'd
==387899==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387899==    by 0x407725: f_search_bn (get_next_line_utils.c:119)
==387899==    by 0x4073EC: get_next_line (get_next_line.c:51)
==387899==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387899==    by 0x406A95: main (mandatory.cpp:119)
==387899==  Block was alloc'd at
==387899==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387899==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==387899==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387899==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387899==    by 0x406A95: main (mandatory.cpp:119)
==387899== 
==387899== Invalid read of size 1
==387899==    at 0x4075A4: ft_strjoin (get_next_line_utils.c:70)
==387899==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387899==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387899==    by 0x406AA7: main (mandatory.cpp:119)
==387899==  Address 0x4de6e6c is 44 bytes inside a block of size 124 free'd
==387899==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387899==    by 0x407725: f_search_bn (get_next_line_utils.c:119)
==387899==    by 0x4073EC: get_next_line (get_next_line.c:51)
==387899==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387899==    by 0x406A95: main (mandatory.cpp:119)
==387899==  Block was alloc'd at
==387899==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387899==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==387899==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387899==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387899==    by 0x406A95: main (mandatory.cpp:119)
==387899== 
==387899== Invalid read of size 1
==387899==    at 0x407747: f_del_front_bn (get_next_line_utils.c:163)
==387899==    by 0x4073FF: get_next_line (get_next_line.c:52)
==387899==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387899==    by 0x406AA7: main (mandatory.cpp:119)
==387899==  Address 0x4de6fe0 is 0 bytes inside a block of size 88 free'd
==387899==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387899==    by 0x407725: f_search_bn (get_next_line_utils.c:119)
==387899==    by 0x4073EC: get_next_line (get_next_line.c:51)
==387899==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387899==    by 0x406AA7: main (mandatory.cpp:119)
==387899==  Block was alloc'd at
==387899==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387899==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==387899==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387899==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387899==    by 0x406AA7: main (mandatory.cpp:119)
==387899== 
==387899== Invalid free() / delete / delete[] / realloc()
==387899==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387899==    by 0x407412: get_next_line (get_next_line.c:53)
==387899==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387899==    by 0x406AA7: main (mandatory.cpp:119)
==387899==  Address 0x4de6f70 is 0 bytes inside a block of size 43 free'd
==387899==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387899==    by 0x407634: ft_strjoin (get_next_line_utils.c:82)
==387899==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387899==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387899==    by 0x406AA7: main (mandatory.cpp:119)
==387899==  Block was alloc'd at
==387899==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387899==    by 0x40732E: get_next_line (get_next_line.c:27)
==387899==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387899==    by 0x406AA7: main (mandatory.cpp:119)
==387899== 
==387899== Invalid read of size 1
==387899==    at 0x4075C1: ft_strjoin (get_next_line_utils.c:68)
==387899==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387899==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387899==    by 0x406AB9: main (mandatory.cpp:119)
==387899==  Address 0x4de6fe1 is 1 bytes inside a block of size 88 free'd
==387899==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387899==    by 0x407725: f_search_bn (get_next_line_utils.c:119)
==387899==    by 0x4073EC: get_next_line (get_next_line.c:51)
==387899==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387899==    by 0x406AA7: main (mandatory.cpp:119)
==387899==  Block was alloc'd at
==387899==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387899==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==387899==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387899==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387899==    by 0x406AA7: main (mandatory.cpp:119)
==387899== 
==387899== Invalid read of size 1
==387899==    at 0x4075A4: ft_strjoin (get_next_line_utils.c:70)
==387899==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387899==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387899==    by 0x406AB9: main (mandatory.cpp:119)
==387899==  Address 0x4de6fe1 is 1 bytes inside a block of size 88 free'd
==387899==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387899==    by 0x407725: f_search_bn (get_next_line_utils.c:119)
==387899==    by 0x4073EC: get_next_line (get_next_line.c:51)
==387899==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387899==    by 0x406AA7: main (mandatory.cpp:119)
==387899==  Block was alloc'd at
==387899==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387899==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==387899==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387899==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387899==    by 0x406AA7: main (mandatory.cpp:119)
==387899== 
==387899== Invalid read of size 1
==387899==    at 0x407747: f_del_front_bn (get_next_line_utils.c:163)
==387899==    by 0x4073FF: get_next_line (get_next_line.c:52)
==387899==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387899==    by 0x406AB9: main (mandatory.cpp:119)
==387899==  Address 0x4de7140 is 0 bytes inside a block of size 87 free'd
==387899==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387899==    by 0x407725: f_search_bn (get_next_line_utils.c:119)
==387899==    by 0x4073EC: get_next_line (get_next_line.c:51)
==387899==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387899==    by 0x406AB9: main (mandatory.cpp:119)
==387899==  Block was alloc'd at
==387899==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387899==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==387899==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387899==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387899==    by 0x406AB9: main (mandatory.cpp:119)
==387899== 
==387899== Invalid free() / delete / delete[] / realloc()
==387899==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387899==    by 0x407412: get_next_line (get_next_line.c:53)
==387899==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387899==    by 0x406AB9: main (mandatory.cpp:119)
==387899==  Address 0x4de70d0 is 0 bytes inside a block of size 43 free'd
==387899==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387899==    by 0x407634: ft_strjoin (get_next_line_utils.c:82)
==387899==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387899==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387899==    by 0x406AB9: main (mandatory.cpp:119)
==387899==  Block was alloc'd at
==387899==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387899==    by 0x40732E: get_next_line (get_next_line.c:27)
==387899==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387899==    by 0x406AB9: main (mandatory.cpp:119)
==387899== 
==387899== Invalid read of size 1
==387899==    at 0x4075C1: ft_strjoin (get_next_line_utils.c:68)
==387899==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387899==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387899==    by 0x406ACB: main (mandatory.cpp:119)
==387899==  Address 0x4de716b is 43 bytes inside a block of size 87 free'd
==387899==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387899==    by 0x407725: f_search_bn (get_next_line_utils.c:119)
==387899==    by 0x4073EC: get_next_line (get_next_line.c:51)
==387899==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387899==    by 0x406AB9: main (mandatory.cpp:119)
==387899==  Block was alloc'd at
==387899==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387899==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==387899==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387899==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387899==    by 0x406AB9: main (mandatory.cpp:119)
==387899== 
==387899== Invalid read of size 1
==387899==    at 0x4075A4: ft_strjoin (get_next_line_utils.c:70)
==387899==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387899==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387899==    by 0x406ACB: main (mandatory.cpp:119)
==387899==  Address 0x4de716b is 43 bytes inside a block of size 87 free'd
==387899==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387899==    by 0x407725: f_search_bn (get_next_line_utils.c:119)
==387899==    by 0x4073EC: get_next_line (get_next_line.c:51)
==387899==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387899==    by 0x406AB9: main (mandatory.cpp:119)
==387899==  Block was alloc'd at
==387899==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387899==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==387899==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387899==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387899==    by 0x406AB9: main (mandatory.cpp:119)
==387899== 
==387899== Invalid read of size 1
==387899==    at 0x407747: f_del_front_bn (get_next_line_utils.c:163)
==387899==    by 0x4073FF: get_next_line (get_next_line.c:52)
==387899==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387899==    by 0x406ACB: main (mandatory.cpp:119)
==387899==  Address 0x4de72c0 is 0 bytes inside a block of size 44 free'd
==387899==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387899==    by 0x407725: f_search_bn (get_next_line_utils.c:119)
==387899==    by 0x4073EC: get_next_line (get_next_line.c:51)
==387899==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387899==    by 0x406ACB: main (mandatory.cpp:119)
==387899==  Block was alloc'd at
==387899==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387899==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==387899==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387899==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387899==    by 0x406ACB: main (mandatory.cpp:119)
==387899== 
==387899== Invalid free() / delete / delete[] / realloc()
==387899==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387899==    by 0x407412: get_next_line (get_next_line.c:53)
==387899==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387899==    by 0x406ACB: main (mandatory.cpp:119)
==387899==  Address 0x4de7250 is 0 bytes inside a block of size 43 free'd
==387899==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387899==    by 0x407634: ft_strjoin (get_next_line_utils.c:82)
==387899==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387899==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387899==    by 0x406ACB: main (mandatory.cpp:119)
==387899==  Block was alloc'd at
==387899==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387899==    by 0x40732E: get_next_line (get_next_line.c:27)
==387899==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387899==    by 0x406ACB: main (mandatory.cpp:119)
==387899== 
==387899== Invalid read of size 1
==387899==    at 0x4075C1: ft_strjoin (get_next_line_utils.c:68)
==387899==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387899==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387899==    by 0x406ADD: main (mandatory.cpp:119)
==387899==  Address 0x4de72c1 is 1 bytes inside a block of size 44 free'd
==387899==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387899==    by 0x407725: f_search_bn (get_next_line_utils.c:119)
==387899==    by 0x4073EC: get_next_line (get_next_line.c:51)
==387899==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387899==    by 0x406ACB: main (mandatory.cpp:119)
==387899==  Block was alloc'd at
==387899==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387899==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==387899==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387899==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387899==    by 0x406ACB: main (mandatory.cpp:119)
==387899== 
==387899== Invalid read of size 1
==387899==    at 0x4075A4: ft_strjoin (get_next_line_utils.c:70)
==387899==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387899==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387899==    by 0x406ADD: main (mandatory.cpp:119)
==387899==  Address 0x4de72c1 is 1 bytes inside a block of size 44 free'd
==387899==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387899==    by 0x407725: f_search_bn (get_next_line_utils.c:119)
==387899==    by 0x4073EC: get_next_line (get_next_line.c:51)
==387899==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387899==    by 0x406ACB: main (mandatory.cpp:119)
==387899==  Block was alloc'd at
==387899==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387899==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==387899==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387899==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387899==    by 0x406ACB: main (mandatory.cpp:119)
==387899== 
==387899== Invalid read of size 1
==387899==    at 0x407747: f_del_front_bn (get_next_line_utils.c:163)
==387899==    by 0x4073FF: get_next_line (get_next_line.c:52)
==387899==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387899==    by 0x406ADD: main (mandatory.cpp:119)
==387899==  Address 0x4de73f0 is 0 bytes inside a block of size 43 free'd
==387899==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387899==    by 0x407725: f_search_bn (get_next_line_utils.c:119)
==387899==    by 0x4073EC: get_next_line (get_next_line.c:51)
==387899==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387899==    by 0x406ADD: main (mandatory.cpp:119)
==387899==  Block was alloc'd at
==387899==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387899==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==387899==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387899==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387899==    by 0x406ADD: main (mandatory.cpp:119)
==387899== 
==387899== Invalid free() / delete / delete[] / realloc()
==387899==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387899==    by 0x407412: get_next_line (get_next_line.c:53)
==387899==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387899==    by 0x406ADD: main (mandatory.cpp:119)
==387899==  Address 0x4de7380 is 0 bytes inside a block of size 43 free'd
==387899==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387899==    by 0x407634: ft_strjoin (get_next_line_utils.c:82)
==387899==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387899==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387899==    by 0x406ADD: main (mandatory.cpp:119)
==387899==  Block was alloc'd at
==387899==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387899==    by 0x40732E: get_next_line (get_next_line.c:27)
==387899==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387899==    by 0x406ADD: main (mandatory.cpp:119)
==387899== 
==387899== Invalid read of size 1
==387899==    at 0x4075C1: ft_strjoin (get_next_line_utils.c:68)
==387899==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387899==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387899==    by 0x406AE9: main (mandatory.cpp:119)
==387899==  Address 0x4de741a is 42 bytes inside a block of size 43 free'd
==387899==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387899==    by 0x407725: f_search_bn (get_next_line_utils.c:119)
==387899==    by 0x4073EC: get_next_line (get_next_line.c:51)
==387899==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387899==    by 0x406ADD: main (mandatory.cpp:119)
==387899==  Block was alloc'd at
==387899==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387899==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==387899==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387899==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387899==    by 0x406ADD: main (mandatory.cpp:119)
==387899== 
==387899== 1 bytes in 1 blocks are definitely lost in loss record 1 of 1
==387899==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387899==    by 0x407396: get_next_line (get_next_line.c:43)
==387899==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387899==    by 0x406A4D: main (mandatory.cpp:119)
==387899== 
==387902== Syscall param read(buf) points to unaddressable byte(s)
==387902==    at 0x4CB8992: read (read.c:26)
==387902==    by 0x40736D: get_next_line (get_next_line.c:37)
==387902==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387902==    by 0x406D09: main (mandatory.cpp:132)
==387902==  Address 0x4de6b30 is 0 bytes inside a block of size 43 free'd
==387902==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387902==    by 0x407634: ft_strjoin (get_next_line_utils.c:82)
==387902==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387902==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387902==    by 0x406D09: main (mandatory.cpp:132)
==387902==  Block was alloc'd at
==387902==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387902==    by 0x40732E: get_next_line (get_next_line.c:27)
==387902==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387902==    by 0x406D09: main (mandatory.cpp:132)
==387902== 
==387902== Invalid write of size 1
==387902==    at 0x40737E: get_next_line (get_next_line.c:38)
==387902==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387902==    by 0x406D09: main (mandatory.cpp:132)
==387902==  Address 0x4de6b5a is 42 bytes inside a block of size 43 free'd
==387902==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387902==    by 0x407634: ft_strjoin (get_next_line_utils.c:82)
==387902==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387902==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387902==    by 0x406D09: main (mandatory.cpp:132)
==387902==  Block was alloc'd at
==387902==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387902==    by 0x40732E: get_next_line (get_next_line.c:27)
==387902==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387902==    by 0x406D09: main (mandatory.cpp:132)
==387902== 
==387902== Invalid read of size 1
==387902==    at 0x40751A: ft_strlen (get_next_line_utils.c:43)
==387902==    by 0x407555: ft_strjoin (get_next_line_utils.c:59)
==387902==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387902==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387902==    by 0x406D09: main (mandatory.cpp:132)
==387902==  Address 0x4de6b5a is 42 bytes inside a block of size 43 free'd
==387902==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387902==    by 0x407634: ft_strjoin (get_next_line_utils.c:82)
==387902==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387902==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387902==    by 0x406D09: main (mandatory.cpp:132)
==387902==  Block was alloc'd at
==387902==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387902==    by 0x40732E: get_next_line (get_next_line.c:27)
==387902==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387902==    by 0x406D09: main (mandatory.cpp:132)
==387902== 
==387902== Invalid read of size 1
==387902==    at 0x40760D: ft_strjoin (get_next_line_utils.c:75)
==387902==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387902==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387902==    by 0x406D09: main (mandatory.cpp:132)
==387902==  Address 0x4de6b5a is 42 bytes inside a block of size 43 free'd
==387902==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387902==    by 0x407634: ft_strjoin (get_next_line_utils.c:82)
==387902==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387902==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387902==    by 0x406D09: main (mandatory.cpp:132)
==387902==  Block was alloc'd at
==387902==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387902==    by 0x40732E: get_next_line (get_next_line.c:27)
==387902==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387902==    by 0x406D09: main (mandatory.cpp:132)
==387902== 
==387902== Invalid free() / delete / delete[] / realloc()
==387902==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387902==    by 0x407634: ft_strjoin (get_next_line_utils.c:82)
==387902==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387902==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387902==    by 0x406D09: main (mandatory.cpp:132)
==387902==  Address 0x4de6b30 is 0 bytes inside a block of size 43 free'd
==387902==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387902==    by 0x407634: ft_strjoin (get_next_line_utils.c:82)
==387902==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387902==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387902==    by 0x406D09: main (mandatory.cpp:132)
==387902==  Block was alloc'd at
==387902==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387902==    by 0x40732E: get_next_line (get_next_line.c:27)
==387902==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387902==    by 0x406D09: main (mandatory.cpp:132)
==387902== 
==387902== 1 bytes in 1 blocks are definitely lost in loss record 1 of 2
==387902==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387902==    by 0x407396: get_next_line (get_next_line.c:43)
==387902==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387902==    by 0x406D09: main (mandatory.cpp:132)
==387902== 
==387902== 1,204,761 bytes in 239 blocks are definitely lost in loss record 2 of 2
==387902==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387902==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==387902==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387902==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387902==    by 0x406D09: main (mandatory.cpp:132)
==387902== 
==387903== Syscall param read(buf) points to unaddressable byte(s)
==387903==    at 0x4CB8992: read (read.c:26)
==387903==    by 0x40736D: get_next_line (get_next_line.c:37)
==387903==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387903==    by 0x406F35: main (mandatory.cpp:136)
==387903==  Address 0x4de6e40 is 0 bytes inside a block of size 43 free'd
==387903==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387903==    by 0x407634: ft_strjoin (get_next_line_utils.c:82)
==387903==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387903==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387903==    by 0x406F35: main (mandatory.cpp:136)
==387903==  Block was alloc'd at
==387903==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387903==    by 0x40732E: get_next_line (get_next_line.c:27)
==387903==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387903==    by 0x406F35: main (mandatory.cpp:136)
==387903== 
==387903== Invalid write of size 1
==387903==    at 0x40737E: get_next_line (get_next_line.c:38)
==387903==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387903==    by 0x406F35: main (mandatory.cpp:136)
==387903==  Address 0x4de6e6a is 42 bytes inside a block of size 43 free'd
==387903==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387903==    by 0x407634: ft_strjoin (get_next_line_utils.c:82)
==387903==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387903==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387903==    by 0x406F35: main (mandatory.cpp:136)
==387903==  Block was alloc'd at
==387903==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387903==    by 0x40732E: get_next_line (get_next_line.c:27)
==387903==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387903==    by 0x406F35: main (mandatory.cpp:136)
==387903== 
==387903== Invalid read of size 1
==387903==    at 0x40751A: ft_strlen (get_next_line_utils.c:43)
==387903==    by 0x407555: ft_strjoin (get_next_line_utils.c:59)
==387903==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387903==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387903==    by 0x406F35: main (mandatory.cpp:136)
==387903==  Address 0x4de6e6a is 42 bytes inside a block of size 43 free'd
==387903==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387903==    by 0x407634: ft_strjoin (get_next_line_utils.c:82)
==387903==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387903==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387903==    by 0x406F35: main (mandatory.cpp:136)
==387903==  Block was alloc'd at
==387903==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387903==    by 0x40732E: get_next_line (get_next_line.c:27)
==387903==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387903==    by 0x406F35: main (mandatory.cpp:136)
==387903== 
==387903== Invalid read of size 1
==387903==    at 0x40760D: ft_strjoin (get_next_line_utils.c:75)
==387903==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387903==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387903==    by 0x406F35: main (mandatory.cpp:136)
==387903==  Address 0x4de6e6a is 42 bytes inside a block of size 43 free'd
==387903==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387903==    by 0x407634: ft_strjoin (get_next_line_utils.c:82)
==387903==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387903==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387903==    by 0x406F35: main (mandatory.cpp:136)
==387903==  Block was alloc'd at
==387903==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387903==    by 0x40732E: get_next_line (get_next_line.c:27)
==387903==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387903==    by 0x406F35: main (mandatory.cpp:136)
==387903== 
==387903== Invalid free() / delete / delete[] / realloc()
==387903==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387903==    by 0x407634: ft_strjoin (get_next_line_utils.c:82)
==387903==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387903==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387903==    by 0x406F35: main (mandatory.cpp:136)
==387903==  Address 0x4de6e40 is 0 bytes inside a block of size 43 free'd
==387903==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387903==    by 0x407634: ft_strjoin (get_next_line_utils.c:82)
==387903==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387903==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387903==    by 0x406F35: main (mandatory.cpp:136)
==387903==  Block was alloc'd at
==387903==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387903==    by 0x40732E: get_next_line (get_next_line.c:27)
==387903==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387903==    by 0x406F35: main (mandatory.cpp:136)
==387903== 
==387903== Invalid read of size 1
==387903==    at 0x407747: f_del_front_bn (get_next_line_utils.c:163)
==387903==    by 0x4073FF: get_next_line (get_next_line.c:52)
==387903==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387903==    by 0x406F35: main (mandatory.cpp:136)
==387903==  Address 0x4f0ecf0 is 0 bytes inside a block of size 10,002 free'd
==387903==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387903==    by 0x407725: f_search_bn (get_next_line_utils.c:119)
==387903==    by 0x4073EC: get_next_line (get_next_line.c:51)
==387903==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387903==    by 0x406F35: main (mandatory.cpp:136)
==387903==  Block was alloc'd at
==387903==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387903==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==387903==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387903==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387903==    by 0x406F35: main (mandatory.cpp:136)
==387903== 
==387903== Invalid free() / delete / delete[] / realloc()
==387903==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387903==    by 0x407412: get_next_line (get_next_line.c:53)
==387903==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387903==    by 0x406F35: main (mandatory.cpp:136)
==387903==  Address 0x4de6e40 is 0 bytes inside a block of size 43 free'd
==387903==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387903==    by 0x407634: ft_strjoin (get_next_line_utils.c:82)
==387903==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387903==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387903==    by 0x406F35: main (mandatory.cpp:136)
==387903==  Block was alloc'd at
==387903==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387903==    by 0x40732E: get_next_line (get_next_line.c:27)
==387903==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387903==    by 0x406F35: main (mandatory.cpp:136)
==387903== 
==387903== Invalid read of size 1
==387903==    at 0x40751A: ft_strlen (get_next_line_utils.c:43)
==387903==    by 0x407547: ft_strjoin (get_next_line_utils.c:59)
==387903==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387903==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387903==    by 0x406F41: main (mandatory.cpp:136)
==387903==  Address 0x4f11401 is 10,001 bytes inside a block of size 10,002 free'd
==387903==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387903==    by 0x407725: f_search_bn (get_next_line_utils.c:119)
==387903==    by 0x4073EC: get_next_line (get_next_line.c:51)
==387903==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387903==    by 0x406F35: main (mandatory.cpp:136)
==387903==  Block was alloc'd at
==387903==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387903==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==387903==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387903==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387903==    by 0x406F35: main (mandatory.cpp:136)
==387903== 
==387903== Invalid read of size 1
==387903==    at 0x4075C1: ft_strjoin (get_next_line_utils.c:68)
==387903==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387903==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387903==    by 0x406F41: main (mandatory.cpp:136)
==387903==  Address 0x4f11401 is 10,001 bytes inside a block of size 10,002 free'd
==387903==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387903==    by 0x407725: f_search_bn (get_next_line_utils.c:119)
==387903==    by 0x4073EC: get_next_line (get_next_line.c:51)
==387903==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387903==    by 0x406F35: main (mandatory.cpp:136)
==387903==  Block was alloc'd at
==387903==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387903==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==387903==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387903==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387903==    by 0x406F35: main (mandatory.cpp:136)
==387903== 
==387903== 1 bytes in 1 blocks are definitely lost in loss record 1 of 2
==387903==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387903==    by 0x407396: get_next_line (get_next_line.c:43)
==387903==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387903==    by 0x406F35: main (mandatory.cpp:136)
==387903== 
==387903== 1,194,760 bytes in 238 blocks are definitely lost in loss record 2 of 2
==387903==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387903==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==387903==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387903==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387903==    by 0x406F35: main (mandatory.cpp:136)
==387903== 
==387906== Invalid read of size 1
==387906==    at 0x407747: f_del_front_bn (get_next_line_utils.c:163)
==387906==    by 0x4073FF: get_next_line (get_next_line.c:52)
==387906==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387906==    by 0x407160: main (mandatory.cpp:141)
==387906==  Address 0x4de6f00 is 0 bytes inside a block of size 43 free'd
==387906==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387906==    by 0x407725: f_search_bn (get_next_line_utils.c:119)
==387906==    by 0x4073EC: get_next_line (get_next_line.c:51)
==387906==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387906==    by 0x407160: main (mandatory.cpp:141)
==387906==  Block was alloc'd at
==387906==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387906==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==387906==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387906==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387906==    by 0x407160: main (mandatory.cpp:141)
==387906== 
==387906== Invalid free() / delete / delete[] / realloc()
==387906==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387906==    by 0x407412: get_next_line (get_next_line.c:53)
==387906==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387906==    by 0x407160: main (mandatory.cpp:141)
==387906==  Address 0x4de6e40 is 0 bytes inside a block of size 43 free'd
==387906==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387906==    by 0x407634: ft_strjoin (get_next_line_utils.c:82)
==387906==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387906==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387906==    by 0x407160: main (mandatory.cpp:141)
==387906==  Block was alloc'd at
==387906==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387906==    by 0x40732E: get_next_line (get_next_line.c:27)
==387906==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387906==    by 0x407160: main (mandatory.cpp:141)
==387906== 
==387906== Invalid read of size 1
==387906==    at 0x40751A: ft_strlen (get_next_line_utils.c:43)
==387906==    by 0x407547: ft_strjoin (get_next_line_utils.c:59)
==387906==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387906==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387906==    by 0x407171: main (mandatory.cpp:141)
==387906==  Address 0x4de6f2a is 42 bytes inside a block of size 43 free'd
==387906==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387906==    by 0x407725: f_search_bn (get_next_line_utils.c:119)
==387906==    by 0x4073EC: get_next_line (get_next_line.c:51)
==387906==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387906==    by 0x407160: main (mandatory.cpp:141)
==387906==  Block was alloc'd at
==387906==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387906==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==387906==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387906==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387906==    by 0x407160: main (mandatory.cpp:141)
==387906== 
==387906== Invalid read of size 1
==387906==    at 0x4075C1: ft_strjoin (get_next_line_utils.c:68)
==387906==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387906==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387906==    by 0x407171: main (mandatory.cpp:141)
==387906==  Address 0x4de6f2a is 42 bytes inside a block of size 43 free'd
==387906==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387906==    by 0x407725: f_search_bn (get_next_line_utils.c:119)
==387906==    by 0x4073EC: get_next_line (get_next_line.c:51)
==387906==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387906==    by 0x407160: main (mandatory.cpp:141)
==387906==  Block was alloc'd at
==387906==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387906==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==387906==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387906==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387906==    by 0x407160: main (mandatory.cpp:141)
==387906== 
==387906== Invalid read of size 1
==387906==    at 0x407747: f_del_front_bn (get_next_line_utils.c:163)
==387906==    by 0x4073FF: get_next_line (get_next_line.c:52)
==387906==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387906==    by 0x407171: main (mandatory.cpp:141)
==387906==  Address 0x4de7050 is 0 bytes inside a block of size 43 free'd
==387906==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387906==    by 0x407725: f_search_bn (get_next_line_utils.c:119)
==387906==    by 0x4073EC: get_next_line (get_next_line.c:51)
==387906==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387906==    by 0x407171: main (mandatory.cpp:141)
==387906==  Block was alloc'd at
==387906==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387906==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==387906==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387906==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387906==    by 0x407171: main (mandatory.cpp:141)
==387906== 
==387906== Invalid free() / delete / delete[] / realloc()
==387906==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387906==    by 0x407412: get_next_line (get_next_line.c:53)
==387906==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387906==    by 0x407171: main (mandatory.cpp:141)
==387906==  Address 0x4de6fe0 is 0 bytes inside a block of size 43 free'd
==387906==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387906==    by 0x407634: ft_strjoin (get_next_line_utils.c:82)
==387906==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387906==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387906==    by 0x407171: main (mandatory.cpp:141)
==387906==  Block was alloc'd at
==387906==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387906==    by 0x40732E: get_next_line (get_next_line.c:27)
==387906==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387906==    by 0x407171: main (mandatory.cpp:141)
==387906== 
==387906== Invalid read of size 1
==387906==    at 0x4075C1: ft_strjoin (get_next_line_utils.c:68)
==387906==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387906==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387906==    by 0x407182: main (mandatory.cpp:141)
==387906==  Address 0x4de7051 is 1 bytes inside a block of size 43 free'd
==387906==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387906==    by 0x407725: f_search_bn (get_next_line_utils.c:119)
==387906==    by 0x4073EC: get_next_line (get_next_line.c:51)
==387906==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387906==    by 0x407171: main (mandatory.cpp:141)
==387906==  Block was alloc'd at
==387906==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387906==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==387906==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387906==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387906==    by 0x407171: main (mandatory.cpp:141)
==387906== 
==387906== Invalid read of size 1
==387906==    at 0x4075A4: ft_strjoin (get_next_line_utils.c:70)
==387906==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387906==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387906==    by 0x407182: main (mandatory.cpp:141)
==387906==  Address 0x4de7051 is 1 bytes inside a block of size 43 free'd
==387906==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387906==    by 0x407725: f_search_bn (get_next_line_utils.c:119)
==387906==    by 0x4073EC: get_next_line (get_next_line.c:51)
==387906==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387906==    by 0x407171: main (mandatory.cpp:141)
==387906==  Block was alloc'd at
==387906==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387906==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==387906==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387906==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387906==    by 0x407171: main (mandatory.cpp:141)
==387906== 
==387906== Invalid read of size 1
==387906==    at 0x407747: f_del_front_bn (get_next_line_utils.c:163)
==387906==    by 0x4073FF: get_next_line (get_next_line.c:52)
==387906==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387906==    by 0x407182: main (mandatory.cpp:141)
==387906==  Address 0x4de7180 is 0 bytes inside a block of size 84 free'd
==387906==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387906==    by 0x407725: f_search_bn (get_next_line_utils.c:119)
==387906==    by 0x4073EC: get_next_line (get_next_line.c:51)
==387906==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387906==    by 0x407182: main (mandatory.cpp:141)
==387906==  Block was alloc'd at
==387906==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387906==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==387906==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387906==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387906==    by 0x407182: main (mandatory.cpp:141)
==387906== 
==387906== Invalid free() / delete / delete[] / realloc()
==387906==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387906==    by 0x407412: get_next_line (get_next_line.c:53)
==387906==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387906==    by 0x407182: main (mandatory.cpp:141)
==387906==  Address 0x4de7110 is 0 bytes inside a block of size 43 free'd
==387906==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387906==    by 0x407634: ft_strjoin (get_next_line_utils.c:82)
==387906==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387906==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387906==    by 0x407182: main (mandatory.cpp:141)
==387906==  Block was alloc'd at
==387906==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387906==    by 0x40732E: get_next_line (get_next_line.c:27)
==387906==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387906==    by 0x407182: main (mandatory.cpp:141)
==387906== 
==387906== Invalid read of size 1
==387906==    at 0x4075C1: ft_strjoin (get_next_line_utils.c:68)
==387906==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387906==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387906==    by 0x407193: main (mandatory.cpp:141)
==387906==  Address 0x4de71ab is 43 bytes inside a block of size 84 free'd
==387906==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387906==    by 0x407725: f_search_bn (get_next_line_utils.c:119)
==387906==    by 0x4073EC: get_next_line (get_next_line.c:51)
==387906==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387906==    by 0x407182: main (mandatory.cpp:141)
==387906==  Block was alloc'd at
==387906==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387906==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==387906==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387906==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387906==    by 0x407182: main (mandatory.cpp:141)
==387906== 
==387906== Invalid read of size 1
==387906==    at 0x4075A4: ft_strjoin (get_next_line_utils.c:70)
==387906==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387906==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387906==    by 0x407193: main (mandatory.cpp:141)
==387906==  Address 0x4de71ab is 43 bytes inside a block of size 84 free'd
==387906==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387906==    by 0x407725: f_search_bn (get_next_line_utils.c:119)
==387906==    by 0x4073EC: get_next_line (get_next_line.c:51)
==387906==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387906==    by 0x407182: main (mandatory.cpp:141)
==387906==  Block was alloc'd at
==387906==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387906==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==387906==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387906==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387906==    by 0x407182: main (mandatory.cpp:141)
==387906== 
==387906== Invalid read of size 1
==387906==    at 0x407747: f_del_front_bn (get_next_line_utils.c:163)
==387906==    by 0x4073FF: get_next_line (get_next_line.c:52)
==387906==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387906==    by 0x407193: main (mandatory.cpp:141)
==387906==  Address 0x4de7300 is 0 bytes inside a block of size 83 free'd
==387906==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387906==    by 0x407725: f_search_bn (get_next_line_utils.c:119)
==387906==    by 0x4073EC: get_next_line (get_next_line.c:51)
==387906==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387906==    by 0x407193: main (mandatory.cpp:141)
==387906==  Block was alloc'd at
==387906==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387906==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==387906==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387906==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387906==    by 0x407193: main (mandatory.cpp:141)
==387906== 
==387906== Invalid free() / delete / delete[] / realloc()
==387906==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387906==    by 0x407412: get_next_line (get_next_line.c:53)
==387906==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387906==    by 0x407193: main (mandatory.cpp:141)
==387906==  Address 0x4de7290 is 0 bytes inside a block of size 43 free'd
==387906==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387906==    by 0x407634: ft_strjoin (get_next_line_utils.c:82)
==387906==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387906==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387906==    by 0x407193: main (mandatory.cpp:141)
==387906==  Block was alloc'd at
==387906==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387906==    by 0x40732E: get_next_line (get_next_line.c:27)
==387906==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387906==    by 0x407193: main (mandatory.cpp:141)
==387906== 
==387906== Invalid read of size 1
==387906==    at 0x4075C1: ft_strjoin (get_next_line_utils.c:68)
==387906==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387906==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387906==    by 0x4071A4: main (mandatory.cpp:141)
==387906==  Address 0x4de7301 is 1 bytes inside a block of size 83 free'd
==387906==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387906==    by 0x407725: f_search_bn (get_next_line_utils.c:119)
==387906==    by 0x4073EC: get_next_line (get_next_line.c:51)
==387906==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387906==    by 0x407193: main (mandatory.cpp:141)
==387906==  Block was alloc'd at
==387906==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387906==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==387906==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387906==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387906==    by 0x407193: main (mandatory.cpp:141)
==387906== 
==387906== Invalid read of size 1
==387906==    at 0x4075A4: ft_strjoin (get_next_line_utils.c:70)
==387906==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387906==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387906==    by 0x4071A4: main (mandatory.cpp:141)
==387906==  Address 0x4de7301 is 1 bytes inside a block of size 83 free'd
==387906==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387906==    by 0x407725: f_search_bn (get_next_line_utils.c:119)
==387906==    by 0x4073EC: get_next_line (get_next_line.c:51)
==387906==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387906==    by 0x407193: main (mandatory.cpp:141)
==387906==  Block was alloc'd at
==387906==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387906==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==387906==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387906==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387906==    by 0x407193: main (mandatory.cpp:141)
==387906== 
==387906== Invalid read of size 1
==387906==    at 0x407747: f_del_front_bn (get_next_line_utils.c:163)
==387906==    by 0x4073FF: get_next_line (get_next_line.c:52)
==387906==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387906==    by 0x4071A4: main (mandatory.cpp:141)
==387906==  Address 0x4de7460 is 0 bytes inside a block of size 124 free'd
==387906==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387906==    by 0x407725: f_search_bn (get_next_line_utils.c:119)
==387906==    by 0x4073EC: get_next_line (get_next_line.c:51)
==387906==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387906==    by 0x4071A4: main (mandatory.cpp:141)
==387906==  Block was alloc'd at
==387906==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387906==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==387906==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387906==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387906==    by 0x4071A4: main (mandatory.cpp:141)
==387906== 
==387906== Invalid free() / delete / delete[] / realloc()
==387906==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387906==    by 0x407412: get_next_line (get_next_line.c:53)
==387906==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387906==    by 0x4071A4: main (mandatory.cpp:141)
==387906==  Address 0x4de73f0 is 0 bytes inside a block of size 43 free'd
==387906==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387906==    by 0x407634: ft_strjoin (get_next_line_utils.c:82)
==387906==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387906==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387906==    by 0x4071A4: main (mandatory.cpp:141)
==387906==  Block was alloc'd at
==387906==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387906==    by 0x40732E: get_next_line (get_next_line.c:27)
==387906==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387906==    by 0x4071A4: main (mandatory.cpp:141)
==387906== 
==387906== Invalid read of size 1
==387906==    at 0x4075C1: ft_strjoin (get_next_line_utils.c:68)
==387906==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387906==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387906==    by 0x4071B5: main (mandatory.cpp:141)
==387906==  Address 0x4de748c is 44 bytes inside a block of size 124 free'd
==387906==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387906==    by 0x407725: f_search_bn (get_next_line_utils.c:119)
==387906==    by 0x4073EC: get_next_line (get_next_line.c:51)
==387906==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387906==    by 0x4071A4: main (mandatory.cpp:141)
==387906==  Block was alloc'd at
==387906==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387906==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==387906==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387906==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387906==    by 0x4071A4: main (mandatory.cpp:141)
==387906== 
==387906== Invalid read of size 1
==387906==    at 0x4075A4: ft_strjoin (get_next_line_utils.c:70)
==387906==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387906==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387906==    by 0x4071B5: main (mandatory.cpp:141)
==387906==  Address 0x4de748c is 44 bytes inside a block of size 124 free'd
==387906==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387906==    by 0x407725: f_search_bn (get_next_line_utils.c:119)
==387906==    by 0x4073EC: get_next_line (get_next_line.c:51)
==387906==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387906==    by 0x4071A4: main (mandatory.cpp:141)
==387906==  Block was alloc'd at
==387906==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387906==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==387906==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387906==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387906==    by 0x4071A4: main (mandatory.cpp:141)
==387906== 
==387906== Invalid read of size 1
==387906==    at 0x407747: f_del_front_bn (get_next_line_utils.c:163)
==387906==    by 0x4073FF: get_next_line (get_next_line.c:52)
==387906==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387906==    by 0x4071B5: main (mandatory.cpp:141)
==387906==  Address 0x4de7600 is 0 bytes inside a block of size 88 free'd
==387906==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387906==    by 0x407725: f_search_bn (get_next_line_utils.c:119)
==387906==    by 0x4073EC: get_next_line (get_next_line.c:51)
==387906==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387906==    by 0x4071B5: main (mandatory.cpp:141)
==387906==  Block was alloc'd at
==387906==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387906==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==387906==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387906==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387906==    by 0x4071B5: main (mandatory.cpp:141)
==387906== 
==387906== Invalid free() / delete / delete[] / realloc()
==387906==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387906==    by 0x407412: get_next_line (get_next_line.c:53)
==387906==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387906==    by 0x4071B5: main (mandatory.cpp:141)
==387906==  Address 0x4de7590 is 0 bytes inside a block of size 43 free'd
==387906==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387906==    by 0x407634: ft_strjoin (get_next_line_utils.c:82)
==387906==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387906==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387906==    by 0x4071B5: main (mandatory.cpp:141)
==387906==  Block was alloc'd at
==387906==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387906==    by 0x40732E: get_next_line (get_next_line.c:27)
==387906==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387906==    by 0x4071B5: main (mandatory.cpp:141)
==387906== 
==387906== Invalid read of size 1
==387906==    at 0x4075C1: ft_strjoin (get_next_line_utils.c:68)
==387906==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387906==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387906==    by 0x4071C6: main (mandatory.cpp:141)
==387906==  Address 0x4de7601 is 1 bytes inside a block of size 88 free'd
==387906==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387906==    by 0x407725: f_search_bn (get_next_line_utils.c:119)
==387906==    by 0x4073EC: get_next_line (get_next_line.c:51)
==387906==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387906==    by 0x4071B5: main (mandatory.cpp:141)
==387906==  Block was alloc'd at
==387906==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387906==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==387906==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387906==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387906==    by 0x4071B5: main (mandatory.cpp:141)
==387906== 
==387906== Invalid read of size 1
==387906==    at 0x4075A4: ft_strjoin (get_next_line_utils.c:70)
==387906==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387906==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387906==    by 0x4071C6: main (mandatory.cpp:141)
==387906==  Address 0x4de7601 is 1 bytes inside a block of size 88 free'd
==387906==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387906==    by 0x407725: f_search_bn (get_next_line_utils.c:119)
==387906==    by 0x4073EC: get_next_line (get_next_line.c:51)
==387906==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387906==    by 0x4071B5: main (mandatory.cpp:141)
==387906==  Block was alloc'd at
==387906==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387906==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==387906==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387906==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387906==    by 0x4071B5: main (mandatory.cpp:141)
==387906== 
==387906== Invalid read of size 1
==387906==    at 0x407747: f_del_front_bn (get_next_line_utils.c:163)
==387906==    by 0x4073FF: get_next_line (get_next_line.c:52)
==387906==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387906==    by 0x4071C6: main (mandatory.cpp:141)
==387906==  Address 0x4de7760 is 0 bytes inside a block of size 87 free'd
==387906==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387906==    by 0x407725: f_search_bn (get_next_line_utils.c:119)
==387906==    by 0x4073EC: get_next_line (get_next_line.c:51)
==387906==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387906==    by 0x4071C6: main (mandatory.cpp:141)
==387906==  Block was alloc'd at
==387906==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387906==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==387906==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387906==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387906==    by 0x4071C6: main (mandatory.cpp:141)
==387906== 
==387906== Invalid free() / delete / delete[] / realloc()
==387906==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387906==    by 0x407412: get_next_line (get_next_line.c:53)
==387906==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387906==    by 0x4071C6: main (mandatory.cpp:141)
==387906==  Address 0x4de76f0 is 0 bytes inside a block of size 43 free'd
==387906==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387906==    by 0x407634: ft_strjoin (get_next_line_utils.c:82)
==387906==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387906==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387906==    by 0x4071C6: main (mandatory.cpp:141)
==387906==  Block was alloc'd at
==387906==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387906==    by 0x40732E: get_next_line (get_next_line.c:27)
==387906==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387906==    by 0x4071C6: main (mandatory.cpp:141)
==387906== 
==387906== Invalid read of size 1
==387906==    at 0x4075C1: ft_strjoin (get_next_line_utils.c:68)
==387906==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387906==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387906==    by 0x4071D7: main (mandatory.cpp:141)
==387906==  Address 0x4de778b is 43 bytes inside a block of size 87 free'd
==387906==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387906==    by 0x407725: f_search_bn (get_next_line_utils.c:119)
==387906==    by 0x4073EC: get_next_line (get_next_line.c:51)
==387906==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387906==    by 0x4071C6: main (mandatory.cpp:141)
==387906==  Block was alloc'd at
==387906==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387906==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==387906==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387906==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387906==    by 0x4071C6: main (mandatory.cpp:141)
==387906== 
==387906== Invalid read of size 1
==387906==    at 0x4075A4: ft_strjoin (get_next_line_utils.c:70)
==387906==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387906==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387906==    by 0x4071D7: main (mandatory.cpp:141)
==387906==  Address 0x4de778b is 43 bytes inside a block of size 87 free'd
==387906==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387906==    by 0x407725: f_search_bn (get_next_line_utils.c:119)
==387906==    by 0x4073EC: get_next_line (get_next_line.c:51)
==387906==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387906==    by 0x4071C6: main (mandatory.cpp:141)
==387906==  Block was alloc'd at
==387906==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387906==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==387906==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387906==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387906==    by 0x4071C6: main (mandatory.cpp:141)
==387906== 
==387906== Invalid read of size 1
==387906==    at 0x407747: f_del_front_bn (get_next_line_utils.c:163)
==387906==    by 0x4073FF: get_next_line (get_next_line.c:52)
==387906==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387906==    by 0x4071D7: main (mandatory.cpp:141)
==387906==  Address 0x4de78e0 is 0 bytes inside a block of size 44 free'd
==387906==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387906==    by 0x407725: f_search_bn (get_next_line_utils.c:119)
==387906==    by 0x4073EC: get_next_line (get_next_line.c:51)
==387906==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387906==    by 0x4071D7: main (mandatory.cpp:141)
==387906==  Block was alloc'd at
==387906==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387906==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==387906==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387906==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387906==    by 0x4071D7: main (mandatory.cpp:141)
==387906== 
==387906== Invalid free() / delete / delete[] / realloc()
==387906==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387906==    by 0x407412: get_next_line (get_next_line.c:53)
==387906==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387906==    by 0x4071D7: main (mandatory.cpp:141)
==387906==  Address 0x4de7870 is 0 bytes inside a block of size 43 free'd
==387906==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387906==    by 0x407634: ft_strjoin (get_next_line_utils.c:82)
==387906==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387906==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387906==    by 0x4071D7: main (mandatory.cpp:141)
==387906==  Block was alloc'd at
==387906==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387906==    by 0x40732E: get_next_line (get_next_line.c:27)
==387906==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387906==    by 0x4071D7: main (mandatory.cpp:141)
==387906== 
==387906== Invalid read of size 1
==387906==    at 0x4075C1: ft_strjoin (get_next_line_utils.c:68)
==387906==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387906==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387906==    by 0x4071E8: main (mandatory.cpp:141)
==387906==  Address 0x4de78e1 is 1 bytes inside a block of size 44 free'd
==387906==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387906==    by 0x407725: f_search_bn (get_next_line_utils.c:119)
==387906==    by 0x4073EC: get_next_line (get_next_line.c:51)
==387906==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387906==    by 0x4071D7: main (mandatory.cpp:141)
==387906==  Block was alloc'd at
==387906==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387906==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==387906==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387906==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387906==    by 0x4071D7: main (mandatory.cpp:141)
==387906== 
==387906== Invalid read of size 1
==387906==    at 0x4075A4: ft_strjoin (get_next_line_utils.c:70)
==387906==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387906==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387906==    by 0x4071E8: main (mandatory.cpp:141)
==387906==  Address 0x4de78e1 is 1 bytes inside a block of size 44 free'd
==387906==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387906==    by 0x407725: f_search_bn (get_next_line_utils.c:119)
==387906==    by 0x4073EC: get_next_line (get_next_line.c:51)
==387906==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387906==    by 0x4071D7: main (mandatory.cpp:141)
==387906==  Block was alloc'd at
==387906==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387906==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==387906==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387906==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387906==    by 0x4071D7: main (mandatory.cpp:141)
==387906== 
==387906== Invalid read of size 1
==387906==    at 0x407747: f_del_front_bn (get_next_line_utils.c:163)
==387906==    by 0x4073FF: get_next_line (get_next_line.c:52)
==387906==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387906==    by 0x4071E8: main (mandatory.cpp:141)
==387906==  Address 0x4de7a10 is 0 bytes inside a block of size 43 free'd
==387906==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387906==    by 0x407725: f_search_bn (get_next_line_utils.c:119)
==387906==    by 0x4073EC: get_next_line (get_next_line.c:51)
==387906==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387906==    by 0x4071E8: main (mandatory.cpp:141)
==387906==  Block was alloc'd at
==387906==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387906==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==387906==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387906==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387906==    by 0x4071E8: main (mandatory.cpp:141)
==387906== 
==387906== Invalid free() / delete / delete[] / realloc()
==387906==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387906==    by 0x407412: get_next_line (get_next_line.c:53)
==387906==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387906==    by 0x4071E8: main (mandatory.cpp:141)
==387906==  Address 0x4de79a0 is 0 bytes inside a block of size 43 free'd
==387906==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387906==    by 0x407634: ft_strjoin (get_next_line_utils.c:82)
==387906==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387906==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387906==    by 0x4071E8: main (mandatory.cpp:141)
==387906==  Block was alloc'd at
==387906==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387906==    by 0x40732E: get_next_line (get_next_line.c:27)
==387906==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387906==    by 0x4071E8: main (mandatory.cpp:141)
==387906== 
==387906== Invalid read of size 1
==387906==    at 0x4075C1: ft_strjoin (get_next_line_utils.c:68)
==387906==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387906==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387906==    by 0x4071F3: main (mandatory.cpp:141)
==387906==  Address 0x4de7a3a is 42 bytes inside a block of size 43 free'd
==387906==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387906==    by 0x407725: f_search_bn (get_next_line_utils.c:119)
==387906==    by 0x4073EC: get_next_line (get_next_line.c:51)
==387906==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387906==    by 0x4071E8: main (mandatory.cpp:141)
==387906==  Block was alloc'd at
==387906==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387906==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==387906==    by 0x4073BD: get_next_line (get_next_line.c:48)
==387906==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387906==    by 0x4071E8: main (mandatory.cpp:141)
==387906== 
==387906== 1 bytes in 1 blocks are definitely lost in loss record 1 of 1
==387906==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387906==    by 0x407396: get_next_line (get_next_line.c:43)
==387906==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387906==    by 0x407160: main (mandatory.cpp:141)
==387906== 
==387933== Invalid write of size 1
==387933==    at 0x40734C: get_next_line (get_next_line.c:38)
==387933==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387933==    by 0x404BC6: main (mandatory.cpp:25)
==387933==  Address 0x51d103f is 1 bytes before a block of size 10,000,001 alloc'd
==387933==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387933==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387933==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387933==    by 0x404BC6: main (mandatory.cpp:25)
==387933== 
==387933== Conditional jump or move depends on uninitialised value(s)
==387933==    at 0x4074F3: ft_strlen (get_next_line_utils.c:43)
==387933==    by 0x407529: ft_strjoin (get_next_line_utils.c:59)
==387933==    by 0x40738B: get_next_line (get_next_line.c:48)
==387933==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387933==    by 0x404BC6: main (mandatory.cpp:25)
==387933== 
==387933== Conditional jump or move depends on uninitialised value(s)
==387933==    at 0x4075E6: ft_strjoin (get_next_line_utils.c:75)
==387933==    by 0x40738B: get_next_line (get_next_line.c:48)
==387933==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387933==    by 0x404BC6: main (mandatory.cpp:25)
==387933== 
==387933== Invalid write of size 1
==387933==    at 0x40734C: get_next_line (get_next_line.c:38)
==387933==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387933==    by 0x404BE8: main (mandatory.cpp:25)
==387933==  Address 0x5b5b03f is 1 bytes before a block of size 10,000,001 alloc'd
==387933==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387933==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387933==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387933==    by 0x404BE8: main (mandatory.cpp:25)
==387933== 
==387933== Conditional jump or move depends on uninitialised value(s)
==387933==    at 0x4075E6: ft_strjoin (get_next_line_utils.c:75)
==387933==    by 0x40738B: get_next_line (get_next_line.c:48)
==387933==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387933==    by 0x404BE8: main (mandatory.cpp:25)
==387933== 
==387933== 1 bytes in 1 blocks are definitely lost in loss record 2 of 3
==387933==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387933==    by 0x407364: get_next_line (get_next_line.c:43)
==387933==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387933==    by 0x404BC6: main (mandatory.cpp:25)
==387933== 
==387933== 1 bytes in 1 blocks are definitely lost in loss record 3 of 3
==387933==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387933==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==387933==    by 0x40738B: get_next_line (get_next_line.c:48)
==387933==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387933==    by 0x404BC6: main (mandatory.cpp:25)
==387933== 
==387936== Invalid read of size 1
==387936==    at 0x4074EE: ft_strlen (get_next_line_utils.c:43)
==387936==    by 0x40751B: ft_strjoin (get_next_line_utils.c:59)
==387936==    by 0x40738B: get_next_line (get_next_line.c:48)
==387936==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387936==    by 0x404E6F: main (mandatory.cpp:31)
==387936==  Address 0x4de4660 is 0 bytes inside a block of size 1 free'd
==387936==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387936==    by 0x407433: get_next_line (get_next_line.c:67)
==387936==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387936==    by 0x404E63: main (mandatory.cpp:31)
==387936==  Block was alloc'd at
==387936==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387936==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==387936==    by 0x40738B: get_next_line (get_next_line.c:48)
==387936==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387936==    by 0x404E63: main (mandatory.cpp:31)
==387936== 
==387936== Invalid read of size 1
==387936==    at 0x407595: ft_strjoin (get_next_line_utils.c:68)
==387936==    by 0x40738B: get_next_line (get_next_line.c:48)
==387936==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387936==    by 0x404E6F: main (mandatory.cpp:31)
==387936==  Address 0x4de4660 is 0 bytes inside a block of size 1 free'd
==387936==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387936==    by 0x407433: get_next_line (get_next_line.c:67)
==387936==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387936==    by 0x404E63: main (mandatory.cpp:31)
==387936==  Block was alloc'd at
==387936==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387936==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==387936==    by 0x40738B: get_next_line (get_next_line.c:48)
==387936==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387936==    by 0x404E63: main (mandatory.cpp:31)
==387936== 
==387936== 1 bytes in 1 blocks are definitely lost in loss record 1 of 1
==387936==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387936==    by 0x407364: get_next_line (get_next_line.c:43)
==387936==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387936==    by 0x404E63: main (mandatory.cpp:31)
==387936== 
==387938== Invalid read of size 1
==387938==    at 0x40771B: f_del_front_bn (get_next_line_utils.c:163)
==387938==    by 0x4073CD: get_next_line (get_next_line.c:52)
==387938==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387938==    by 0x40508F: main (mandatory.cpp:36)
==387938==  Address 0x4de4660 is 0 bytes inside a block of size 2 free'd
==387938==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387938==    by 0x4076F9: f_search_bn (get_next_line_utils.c:119)
==387938==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387938==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387938==    by 0x40508F: main (mandatory.cpp:36)
==387938==  Block was alloc'd at
==387938==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387938==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==387938==    by 0x40738B: get_next_line (get_next_line.c:48)
==387938==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387938==    by 0x40508F: main (mandatory.cpp:36)
==387938== 
==387938== Invalid free() / delete / delete[] / realloc()
==387938==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387938==    by 0x4073E0: get_next_line (get_next_line.c:53)
==387938==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387938==    by 0x40508F: main (mandatory.cpp:36)
==387938==  Address 0x51d1040 is 0 bytes inside a block of size 10,000,001 free'd
==387938==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387938==    by 0x407608: ft_strjoin (get_next_line_utils.c:82)
==387938==    by 0x40738B: get_next_line (get_next_line.c:48)
==387938==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387938==    by 0x40508F: main (mandatory.cpp:36)
==387938==  Block was alloc'd at
==387938==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387938==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387938==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387938==    by 0x40508F: main (mandatory.cpp:36)
==387938== 
==387938== Invalid read of size 1
==387938==    at 0x4074EE: ft_strlen (get_next_line_utils.c:43)
==387938==    by 0x40751B: ft_strjoin (get_next_line_utils.c:59)
==387938==    by 0x40738B: get_next_line (get_next_line.c:48)
==387938==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387938==    by 0x40509B: main (mandatory.cpp:36)
==387938==  Address 0x4de4661 is 1 bytes inside a block of size 2 free'd
==387938==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387938==    by 0x4076F9: f_search_bn (get_next_line_utils.c:119)
==387938==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387938==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387938==    by 0x40508F: main (mandatory.cpp:36)
==387938==  Block was alloc'd at
==387938==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387938==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==387938==    by 0x40738B: get_next_line (get_next_line.c:48)
==387938==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387938==    by 0x40508F: main (mandatory.cpp:36)
==387938== 
==387938== Invalid read of size 1
==387938==    at 0x407595: ft_strjoin (get_next_line_utils.c:68)
==387938==    by 0x40738B: get_next_line (get_next_line.c:48)
==387938==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387938==    by 0x40509B: main (mandatory.cpp:36)
==387938==  Address 0x4de4661 is 1 bytes inside a block of size 2 free'd
==387938==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387938==    by 0x4076F9: f_search_bn (get_next_line_utils.c:119)
==387938==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387938==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387938==    by 0x40508F: main (mandatory.cpp:36)
==387938==  Block was alloc'd at
==387938==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387938==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==387938==    by 0x40738B: get_next_line (get_next_line.c:48)
==387938==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387938==    by 0x40508F: main (mandatory.cpp:36)
==387938== 
==387938== 1 bytes in 1 blocks are definitely lost in loss record 1 of 1
==387938==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387938==    by 0x407364: get_next_line (get_next_line.c:43)
==387938==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387938==    by 0x40508F: main (mandatory.cpp:36)
==387938== 
==387944== 1 bytes in 1 blocks are definitely lost in loss record 1 of 2
==387944==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387944==    by 0x407364: get_next_line (get_next_line.c:43)
==387944==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387944==    by 0x4052BB: main (mandatory.cpp:41)
==387944== 
==387944== 42 bytes in 1 blocks are definitely lost in loss record 2 of 2
==387944==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387944==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==387944==    by 0x40738B: get_next_line (get_next_line.c:48)
==387944==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387944==    by 0x4052BB: main (mandatory.cpp:41)
==387944== 
==387951== Invalid read of size 1
==387951==    at 0x40771B: f_del_front_bn (get_next_line_utils.c:163)
==387951==    by 0x4073CD: get_next_line (get_next_line.c:52)
==387951==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387951==    by 0x4054E7: main (mandatory.cpp:46)
==387951==  Address 0x4de4c80 is 0 bytes inside a block of size 43 free'd
==387951==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387951==    by 0x4076F9: f_search_bn (get_next_line_utils.c:119)
==387951==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387951==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387951==    by 0x4054E7: main (mandatory.cpp:46)
==387951==  Block was alloc'd at
==387951==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387951==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==387951==    by 0x40738B: get_next_line (get_next_line.c:48)
==387951==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387951==    by 0x4054E7: main (mandatory.cpp:46)
==387951== 
==387951== Invalid free() / delete / delete[] / realloc()
==387951==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387951==    by 0x4073E0: get_next_line (get_next_line.c:53)
==387951==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387951==    by 0x4054E7: main (mandatory.cpp:46)
==387951==  Address 0x51d1040 is 0 bytes inside a block of size 10,000,001 free'd
==387951==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387951==    by 0x407608: ft_strjoin (get_next_line_utils.c:82)
==387951==    by 0x40738B: get_next_line (get_next_line.c:48)
==387951==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387951==    by 0x4054E7: main (mandatory.cpp:46)
==387951==  Block was alloc'd at
==387951==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387951==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387951==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387951==    by 0x4054E7: main (mandatory.cpp:46)
==387951== 
==387951== Invalid read of size 1
==387951==    at 0x4074EE: ft_strlen (get_next_line_utils.c:43)
==387951==    by 0x40751B: ft_strjoin (get_next_line_utils.c:59)
==387951==    by 0x40738B: get_next_line (get_next_line.c:48)
==387951==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387951==    by 0x4054F9: main (mandatory.cpp:46)
==387951==  Address 0x4de4ca9 is 41 bytes inside a block of size 43 free'd
==387951==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387951==    by 0x4076F9: f_search_bn (get_next_line_utils.c:119)
==387951==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387951==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387951==    by 0x4054E7: main (mandatory.cpp:46)
==387951==  Block was alloc'd at
==387951==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387951==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==387951==    by 0x40738B: get_next_line (get_next_line.c:48)
==387951==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387951==    by 0x4054E7: main (mandatory.cpp:46)
==387951== 
==387951== Invalid read of size 1
==387951==    at 0x407595: ft_strjoin (get_next_line_utils.c:68)
==387951==    by 0x40738B: get_next_line (get_next_line.c:48)
==387951==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387951==    by 0x4054F9: main (mandatory.cpp:46)
==387951==  Address 0x4de4ca9 is 41 bytes inside a block of size 43 free'd
==387951==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387951==    by 0x4076F9: f_search_bn (get_next_line_utils.c:119)
==387951==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387951==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387951==    by 0x4054E7: main (mandatory.cpp:46)
==387951==  Block was alloc'd at
==387951==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387951==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==387951==    by 0x40738B: get_next_line (get_next_line.c:48)
==387951==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387951==    by 0x4054E7: main (mandatory.cpp:46)
==387951== 
==387951== Invalid read of size 1
==387951==    at 0x407578: ft_strjoin (get_next_line_utils.c:70)
==387951==    by 0x40738B: get_next_line (get_next_line.c:48)
==387951==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387951==    by 0x4054F9: main (mandatory.cpp:46)
==387951==  Address 0x4de4ca9 is 41 bytes inside a block of size 43 free'd
==387951==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387951==    by 0x4076F9: f_search_bn (get_next_line_utils.c:119)
==387951==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387951==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387951==    by 0x4054E7: main (mandatory.cpp:46)
==387951==  Block was alloc'd at
==387951==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387951==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==387951==    by 0x40738B: get_next_line (get_next_line.c:48)
==387951==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387951==    by 0x4054E7: main (mandatory.cpp:46)
==387951== 
==387951== Invalid read of size 1
==387951==    at 0x484FBD4: strcmp (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387951==    by 0x402D0A: gnl(int, char const*) (gnl.cpp:24)
==387951==    by 0x4054F9: main (mandatory.cpp:46)
==387951==  Address 0x0 is not stack'd, malloc'd or (recently) free'd
==387951== 
==387951== 1 bytes in 1 blocks are definitely lost in loss record 1 of 1
==387951==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387951==    by 0x407364: get_next_line (get_next_line.c:43)
==387951==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387951==    by 0x4054E7: main (mandatory.cpp:46)
==387951== 
==387952== 1 bytes in 1 blocks are definitely lost in loss record 1 of 2
==387952==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387952==    by 0x407364: get_next_line (get_next_line.c:43)
==387952==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387952==    by 0x405725: main (mandatory.cpp:52)
==387952== 
==387952== 43 bytes in 1 blocks are definitely lost in loss record 2 of 2
==387952==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387952==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==387952==    by 0x40738B: get_next_line (get_next_line.c:48)
==387952==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387952==    by 0x405725: main (mandatory.cpp:52)
==387952== 
==387955== Invalid read of size 1
==387955==    at 0x40771B: f_del_front_bn (get_next_line_utils.c:163)
==387955==    by 0x4073CD: get_next_line (get_next_line.c:52)
==387955==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387955==    by 0x405951: main (mandatory.cpp:57)
==387955==  Address 0x4de52a0 is 0 bytes inside a block of size 44 free'd
==387955==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387955==    by 0x4076F9: f_search_bn (get_next_line_utils.c:119)
==387955==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387955==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387955==    by 0x405951: main (mandatory.cpp:57)
==387955==  Block was alloc'd at
==387955==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387955==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==387955==    by 0x40738B: get_next_line (get_next_line.c:48)
==387955==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387955==    by 0x405951: main (mandatory.cpp:57)
==387955== 
==387955== Invalid free() / delete / delete[] / realloc()
==387955==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387955==    by 0x4073E0: get_next_line (get_next_line.c:53)
==387955==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387955==    by 0x405951: main (mandatory.cpp:57)
==387955==  Address 0x51d1040 is 0 bytes inside a block of size 10,000,001 free'd
==387955==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387955==    by 0x407608: ft_strjoin (get_next_line_utils.c:82)
==387955==    by 0x40738B: get_next_line (get_next_line.c:48)
==387955==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387955==    by 0x405951: main (mandatory.cpp:57)
==387955==  Block was alloc'd at
==387955==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387955==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387955==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387955==    by 0x405951: main (mandatory.cpp:57)
==387955== 
==387955== Invalid read of size 1
==387955==    at 0x4074EE: ft_strlen (get_next_line_utils.c:43)
==387955==    by 0x40751B: ft_strjoin (get_next_line_utils.c:59)
==387955==    by 0x40738B: get_next_line (get_next_line.c:48)
==387955==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387955==    by 0x405963: main (mandatory.cpp:57)
==387955==  Address 0x4de52ca is 42 bytes inside a block of size 44 free'd
==387955==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387955==    by 0x4076F9: f_search_bn (get_next_line_utils.c:119)
==387955==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387955==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387955==    by 0x405951: main (mandatory.cpp:57)
==387955==  Block was alloc'd at
==387955==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387955==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==387955==    by 0x40738B: get_next_line (get_next_line.c:48)
==387955==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387955==    by 0x405951: main (mandatory.cpp:57)
==387955== 
==387955== Invalid read of size 1
==387955==    at 0x407595: ft_strjoin (get_next_line_utils.c:68)
==387955==    by 0x40738B: get_next_line (get_next_line.c:48)
==387955==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387955==    by 0x405963: main (mandatory.cpp:57)
==387955==  Address 0x4de52ca is 42 bytes inside a block of size 44 free'd
==387955==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387955==    by 0x4076F9: f_search_bn (get_next_line_utils.c:119)
==387955==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387955==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387955==    by 0x405951: main (mandatory.cpp:57)
==387955==  Block was alloc'd at
==387955==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387955==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==387955==    by 0x40738B: get_next_line (get_next_line.c:48)
==387955==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387955==    by 0x405951: main (mandatory.cpp:57)
==387955== 
==387955== Invalid read of size 1
==387955==    at 0x407578: ft_strjoin (get_next_line_utils.c:70)
==387955==    by 0x40738B: get_next_line (get_next_line.c:48)
==387955==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387955==    by 0x405963: main (mandatory.cpp:57)
==387955==  Address 0x4de52ca is 42 bytes inside a block of size 44 free'd
==387955==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387955==    by 0x4076F9: f_search_bn (get_next_line_utils.c:119)
==387955==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387955==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387955==    by 0x405951: main (mandatory.cpp:57)
==387955==  Block was alloc'd at
==387955==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387955==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==387955==    by 0x40738B: get_next_line (get_next_line.c:48)
==387955==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387955==    by 0x405951: main (mandatory.cpp:57)
==387955== 
==387955== Invalid read of size 1
==387955==    at 0x484FBD4: strcmp (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387955==    by 0x402D0A: gnl(int, char const*) (gnl.cpp:24)
==387955==    by 0x405963: main (mandatory.cpp:57)
==387955==  Address 0x0 is not stack'd, malloc'd or (recently) free'd
==387955== 
==387955== 1 bytes in 1 blocks are definitely lost in loss record 1 of 1
==387955==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387955==    by 0x407364: get_next_line (get_next_line.c:43)
==387955==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387955==    by 0x405951: main (mandatory.cpp:57)
==387955== 
==387956== 1 bytes in 1 blocks are definitely lost in loss record 1 of 2
==387956==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387956==    by 0x407364: get_next_line (get_next_line.c:43)
==387956==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387956==    by 0x405B99: main (mandatory.cpp:68)
==387956== 
==387956== 44 bytes in 1 blocks are definitely lost in loss record 2 of 2
==387956==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387956==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==387956==    by 0x40738B: get_next_line (get_next_line.c:48)
==387956==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387956==    by 0x405B99: main (mandatory.cpp:68)
==387956== 
==387962== Invalid read of size 1
==387962==    at 0x40771B: f_del_front_bn (get_next_line_utils.c:163)
==387962==    by 0x4073CD: get_next_line (get_next_line.c:52)
==387962==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387962==    by 0x405DC5: main (mandatory.cpp:73)
==387962==  Address 0x4de58c0 is 0 bytes inside a block of size 45 free'd
==387962==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387962==    by 0x4076F9: f_search_bn (get_next_line_utils.c:119)
==387962==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387962==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387962==    by 0x405DC5: main (mandatory.cpp:73)
==387962==  Block was alloc'd at
==387962==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387962==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==387962==    by 0x40738B: get_next_line (get_next_line.c:48)
==387962==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387962==    by 0x405DC5: main (mandatory.cpp:73)
==387962== 
==387962== Invalid free() / delete / delete[] / realloc()
==387962==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387962==    by 0x4073E0: get_next_line (get_next_line.c:53)
==387962==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387962==    by 0x405DC5: main (mandatory.cpp:73)
==387962==  Address 0x51d1040 is 0 bytes inside a block of size 10,000,001 free'd
==387962==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387962==    by 0x407608: ft_strjoin (get_next_line_utils.c:82)
==387962==    by 0x40738B: get_next_line (get_next_line.c:48)
==387962==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387962==    by 0x405DC5: main (mandatory.cpp:73)
==387962==  Block was alloc'd at
==387962==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387962==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387962==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387962==    by 0x405DC5: main (mandatory.cpp:73)
==387962== 
==387962== Invalid read of size 1
==387962==    at 0x4074EE: ft_strlen (get_next_line_utils.c:43)
==387962==    by 0x40751B: ft_strjoin (get_next_line_utils.c:59)
==387962==    by 0x40738B: get_next_line (get_next_line.c:48)
==387962==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387962==    by 0x405DD7: main (mandatory.cpp:73)
==387962==  Address 0x4de58eb is 43 bytes inside a block of size 45 free'd
==387962==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387962==    by 0x4076F9: f_search_bn (get_next_line_utils.c:119)
==387962==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387962==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387962==    by 0x405DC5: main (mandatory.cpp:73)
==387962==  Block was alloc'd at
==387962==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387962==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==387962==    by 0x40738B: get_next_line (get_next_line.c:48)
==387962==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387962==    by 0x405DC5: main (mandatory.cpp:73)
==387962== 
==387962== Invalid read of size 1
==387962==    at 0x407595: ft_strjoin (get_next_line_utils.c:68)
==387962==    by 0x40738B: get_next_line (get_next_line.c:48)
==387962==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387962==    by 0x405DD7: main (mandatory.cpp:73)
==387962==  Address 0x4de58eb is 43 bytes inside a block of size 45 free'd
==387962==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387962==    by 0x4076F9: f_search_bn (get_next_line_utils.c:119)
==387962==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387962==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387962==    by 0x405DC5: main (mandatory.cpp:73)
==387962==  Block was alloc'd at
==387962==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387962==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==387962==    by 0x40738B: get_next_line (get_next_line.c:48)
==387962==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387962==    by 0x405DC5: main (mandatory.cpp:73)
==387962== 
==387962== Invalid read of size 1
==387962==    at 0x407578: ft_strjoin (get_next_line_utils.c:70)
==387962==    by 0x40738B: get_next_line (get_next_line.c:48)
==387962==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387962==    by 0x405DD7: main (mandatory.cpp:73)
==387962==  Address 0x4de58eb is 43 bytes inside a block of size 45 free'd
==387962==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387962==    by 0x4076F9: f_search_bn (get_next_line_utils.c:119)
==387962==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387962==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387962==    by 0x405DC5: main (mandatory.cpp:73)
==387962==  Block was alloc'd at
==387962==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387962==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==387962==    by 0x40738B: get_next_line (get_next_line.c:48)
==387962==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387962==    by 0x405DC5: main (mandatory.cpp:73)
==387962== 
==387962== Invalid read of size 1
==387962==    at 0x484FBD4: strcmp (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387962==    by 0x402D0A: gnl(int, char const*) (gnl.cpp:24)
==387962==    by 0x405DD7: main (mandatory.cpp:73)
==387962==  Address 0x0 is not stack'd, malloc'd or (recently) free'd
==387962== 
==387962== 1 bytes in 1 blocks are definitely lost in loss record 1 of 1
==387962==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387962==    by 0x407364: get_next_line (get_next_line.c:43)
==387962==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387962==    by 0x405DC5: main (mandatory.cpp:73)
==387962== 
==387965== Invalid read of size 1
==387965==    at 0x40771B: f_del_front_bn (get_next_line_utils.c:163)
==387965==    by 0x4073CD: get_next_line (get_next_line.c:52)
==387965==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387965==    by 0x406003: main (mandatory.cpp:79)
==387965==  Address 0x4de5bd0 is 0 bytes inside a block of size 6 free'd
==387965==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387965==    by 0x4076F9: f_search_bn (get_next_line_utils.c:119)
==387965==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387965==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387965==    by 0x406003: main (mandatory.cpp:79)
==387965==  Block was alloc'd at
==387965==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387965==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==387965==    by 0x40738B: get_next_line (get_next_line.c:48)
==387965==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387965==    by 0x406003: main (mandatory.cpp:79)
==387965== 
==387965== Invalid free() / delete / delete[] / realloc()
==387965==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387965==    by 0x4073E0: get_next_line (get_next_line.c:53)
==387965==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387965==    by 0x406003: main (mandatory.cpp:79)
==387965==  Address 0x51d1040 is 0 bytes inside a block of size 10,000,001 free'd
==387965==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387965==    by 0x407608: ft_strjoin (get_next_line_utils.c:82)
==387965==    by 0x40738B: get_next_line (get_next_line.c:48)
==387965==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387965==    by 0x406003: main (mandatory.cpp:79)
==387965==  Block was alloc'd at
==387965==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387965==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387965==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387965==    by 0x406003: main (mandatory.cpp:79)
==387965== 
==387965== Invalid read of size 1
==387965==    at 0x4074EE: ft_strlen (get_next_line_utils.c:43)
==387965==    by 0x40751B: ft_strjoin (get_next_line_utils.c:59)
==387965==    by 0x40738B: get_next_line (get_next_line.c:48)
==387965==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387965==    by 0x406015: main (mandatory.cpp:79)
==387965==  Address 0x4de5bd1 is 1 bytes inside a block of size 6 free'd
==387965==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387965==    by 0x4076F9: f_search_bn (get_next_line_utils.c:119)
==387965==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387965==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387965==    by 0x406003: main (mandatory.cpp:79)
==387965==  Block was alloc'd at
==387965==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387965==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==387965==    by 0x40738B: get_next_line (get_next_line.c:48)
==387965==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387965==    by 0x406003: main (mandatory.cpp:79)
==387965== 
==387965== Invalid read of size 1
==387965==    at 0x407595: ft_strjoin (get_next_line_utils.c:68)
==387965==    by 0x40738B: get_next_line (get_next_line.c:48)
==387965==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387965==    by 0x406015: main (mandatory.cpp:79)
==387965==  Address 0x4de5bd1 is 1 bytes inside a block of size 6 free'd
==387965==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387965==    by 0x4076F9: f_search_bn (get_next_line_utils.c:119)
==387965==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387965==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387965==    by 0x406003: main (mandatory.cpp:79)
==387965==  Block was alloc'd at
==387965==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387965==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==387965==    by 0x40738B: get_next_line (get_next_line.c:48)
==387965==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387965==    by 0x406003: main (mandatory.cpp:79)
==387965== 
==387965== Invalid read of size 1
==387965==    at 0x407578: ft_strjoin (get_next_line_utils.c:70)
==387965==    by 0x40738B: get_next_line (get_next_line.c:48)
==387965==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387965==    by 0x406015: main (mandatory.cpp:79)
==387965==  Address 0x4de5bd1 is 1 bytes inside a block of size 6 free'd
==387965==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387965==    by 0x4076F9: f_search_bn (get_next_line_utils.c:119)
==387965==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387965==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387965==    by 0x406003: main (mandatory.cpp:79)
==387965==  Block was alloc'd at
==387965==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387965==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==387965==    by 0x40738B: get_next_line (get_next_line.c:48)
==387965==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387965==    by 0x406003: main (mandatory.cpp:79)
==387965== 
==387965== Invalid read of size 1
==387965==    at 0x40771B: f_del_front_bn (get_next_line_utils.c:163)
==387965==    by 0x4073CD: get_next_line (get_next_line.c:52)
==387965==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387965==    by 0x406015: main (mandatory.cpp:79)
==387965==  Address 0x4de5c70 is 0 bytes inside a block of size 5 free'd
==387965==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387965==    by 0x4076F9: f_search_bn (get_next_line_utils.c:119)
==387965==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387965==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387965==    by 0x406015: main (mandatory.cpp:79)
==387965==  Block was alloc'd at
==387965==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387965==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==387965==    by 0x40738B: get_next_line (get_next_line.c:48)
==387965==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387965==    by 0x406015: main (mandatory.cpp:79)
==387965== 
==387965== Invalid free() / delete / delete[] / realloc()
==387965==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387965==    by 0x4073E0: get_next_line (get_next_line.c:53)
==387965==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387965==    by 0x406015: main (mandatory.cpp:79)
==387965==  Address 0x5b5b040 is 0 bytes inside a block of size 10,000,001 free'd
==387965==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387965==    by 0x407608: ft_strjoin (get_next_line_utils.c:82)
==387965==    by 0x40738B: get_next_line (get_next_line.c:48)
==387965==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387965==    by 0x406015: main (mandatory.cpp:79)
==387965==  Block was alloc'd at
==387965==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387965==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387965==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387965==    by 0x406015: main (mandatory.cpp:79)
==387965== 
==387965== Invalid read of size 1
==387965==    at 0x407595: ft_strjoin (get_next_line_utils.c:68)
==387965==    by 0x40738B: get_next_line (get_next_line.c:48)
==387965==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387965==    by 0x406027: main (mandatory.cpp:79)
==387965==  Address 0x4de5c71 is 1 bytes inside a block of size 5 free'd
==387965==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387965==    by 0x4076F9: f_search_bn (get_next_line_utils.c:119)
==387965==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387965==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387965==    by 0x406015: main (mandatory.cpp:79)
==387965==  Block was alloc'd at
==387965==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387965==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==387965==    by 0x40738B: get_next_line (get_next_line.c:48)
==387965==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387965==    by 0x406015: main (mandatory.cpp:79)
==387965== 
==387965== Invalid read of size 1
==387965==    at 0x407578: ft_strjoin (get_next_line_utils.c:70)
==387965==    by 0x40738B: get_next_line (get_next_line.c:48)
==387965==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387965==    by 0x406027: main (mandatory.cpp:79)
==387965==  Address 0x4de5c71 is 1 bytes inside a block of size 5 free'd
==387965==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387965==    by 0x4076F9: f_search_bn (get_next_line_utils.c:119)
==387965==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387965==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387965==    by 0x406015: main (mandatory.cpp:79)
==387965==  Block was alloc'd at
==387965==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387965==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==387965==    by 0x40738B: get_next_line (get_next_line.c:48)
==387965==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387965==    by 0x406015: main (mandatory.cpp:79)
==387965== 
==387965== Invalid read of size 1
==387965==    at 0x40771B: f_del_front_bn (get_next_line_utils.c:163)
==387965==    by 0x4073CD: get_next_line (get_next_line.c:52)
==387965==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387965==    by 0x406027: main (mandatory.cpp:79)
==387965==  Address 0x4de5d10 is 0 bytes inside a block of size 4 free'd
==387965==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387965==    by 0x4076F9: f_search_bn (get_next_line_utils.c:119)
==387965==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387965==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387965==    by 0x406027: main (mandatory.cpp:79)
==387965==  Block was alloc'd at
==387965==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387965==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==387965==    by 0x40738B: get_next_line (get_next_line.c:48)
==387965==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387965==    by 0x406027: main (mandatory.cpp:79)
==387965== 
==387965== Invalid free() / delete / delete[] / realloc()
==387965==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387965==    by 0x4073E0: get_next_line (get_next_line.c:53)
==387965==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387965==    by 0x406027: main (mandatory.cpp:79)
==387965==  Address 0x51d1040 is 0 bytes inside a block of size 10,000,001 free'd
==387965==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387965==    by 0x407608: ft_strjoin (get_next_line_utils.c:82)
==387965==    by 0x40738B: get_next_line (get_next_line.c:48)
==387965==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387965==    by 0x406027: main (mandatory.cpp:79)
==387965==  Block was alloc'd at
==387965==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387965==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387965==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387965==    by 0x406027: main (mandatory.cpp:79)
==387965== 
==387965== Invalid read of size 1
==387965==    at 0x407595: ft_strjoin (get_next_line_utils.c:68)
==387965==    by 0x40738B: get_next_line (get_next_line.c:48)
==387965==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387965==    by 0x406039: main (mandatory.cpp:79)
==387965==  Address 0x4de5d11 is 1 bytes inside a block of size 4 free'd
==387965==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387965==    by 0x4076F9: f_search_bn (get_next_line_utils.c:119)
==387965==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387965==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387965==    by 0x406027: main (mandatory.cpp:79)
==387965==  Block was alloc'd at
==387965==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387965==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==387965==    by 0x40738B: get_next_line (get_next_line.c:48)
==387965==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387965==    by 0x406027: main (mandatory.cpp:79)
==387965== 
==387965== Invalid read of size 1
==387965==    at 0x407578: ft_strjoin (get_next_line_utils.c:70)
==387965==    by 0x40738B: get_next_line (get_next_line.c:48)
==387965==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387965==    by 0x406039: main (mandatory.cpp:79)
==387965==  Address 0x4de5d11 is 1 bytes inside a block of size 4 free'd
==387965==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387965==    by 0x4076F9: f_search_bn (get_next_line_utils.c:119)
==387965==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387965==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387965==    by 0x406027: main (mandatory.cpp:79)
==387965==  Block was alloc'd at
==387965==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387965==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==387965==    by 0x40738B: get_next_line (get_next_line.c:48)
==387965==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387965==    by 0x406027: main (mandatory.cpp:79)
==387965== 
==387965== Invalid read of size 1
==387965==    at 0x40771B: f_del_front_bn (get_next_line_utils.c:163)
==387965==    by 0x4073CD: get_next_line (get_next_line.c:52)
==387965==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387965==    by 0x406039: main (mandatory.cpp:79)
==387965==  Address 0x4de5db0 is 0 bytes inside a block of size 3 free'd
==387965==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387965==    by 0x4076F9: f_search_bn (get_next_line_utils.c:119)
==387965==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387965==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387965==    by 0x406039: main (mandatory.cpp:79)
==387965==  Block was alloc'd at
==387965==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387965==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==387965==    by 0x40738B: get_next_line (get_next_line.c:48)
==387965==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387965==    by 0x406039: main (mandatory.cpp:79)
==387965== 
==387965== Invalid free() / delete / delete[] / realloc()
==387965==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387965==    by 0x4073E0: get_next_line (get_next_line.c:53)
==387965==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387965==    by 0x406039: main (mandatory.cpp:79)
==387965==  Address 0x5b5b040 is 0 bytes inside a block of size 10,000,001 free'd
==387965==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387965==    by 0x407608: ft_strjoin (get_next_line_utils.c:82)
==387965==    by 0x40738B: get_next_line (get_next_line.c:48)
==387965==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387965==    by 0x406039: main (mandatory.cpp:79)
==387965==  Block was alloc'd at
==387965==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387965==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387965==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387965==    by 0x406039: main (mandatory.cpp:79)
==387965== 
==387965== Invalid read of size 1
==387965==    at 0x407595: ft_strjoin (get_next_line_utils.c:68)
==387965==    by 0x40738B: get_next_line (get_next_line.c:48)
==387965==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387965==    by 0x40604B: main (mandatory.cpp:79)
==387965==  Address 0x4de5db1 is 1 bytes inside a block of size 3 free'd
==387965==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387965==    by 0x4076F9: f_search_bn (get_next_line_utils.c:119)
==387965==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387965==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387965==    by 0x406039: main (mandatory.cpp:79)
==387965==  Block was alloc'd at
==387965==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387965==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==387965==    by 0x40738B: get_next_line (get_next_line.c:48)
==387965==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387965==    by 0x406039: main (mandatory.cpp:79)
==387965== 
==387965== Invalid read of size 1
==387965==    at 0x407578: ft_strjoin (get_next_line_utils.c:70)
==387965==    by 0x40738B: get_next_line (get_next_line.c:48)
==387965==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387965==    by 0x40604B: main (mandatory.cpp:79)
==387965==  Address 0x4de5db1 is 1 bytes inside a block of size 3 free'd
==387965==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387965==    by 0x4076F9: f_search_bn (get_next_line_utils.c:119)
==387965==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387965==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387965==    by 0x406039: main (mandatory.cpp:79)
==387965==  Block was alloc'd at
==387965==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387965==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==387965==    by 0x40738B: get_next_line (get_next_line.c:48)
==387965==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387965==    by 0x406039: main (mandatory.cpp:79)
==387965== 
==387965== Invalid read of size 1
==387965==    at 0x40771B: f_del_front_bn (get_next_line_utils.c:163)
==387965==    by 0x4073CD: get_next_line (get_next_line.c:52)
==387965==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387965==    by 0x40604B: main (mandatory.cpp:79)
==387965==  Address 0x4de5e50 is 0 bytes inside a block of size 2 free'd
==387965==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387965==    by 0x4076F9: f_search_bn (get_next_line_utils.c:119)
==387965==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387965==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387965==    by 0x40604B: main (mandatory.cpp:79)
==387965==  Block was alloc'd at
==387965==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387965==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==387965==    by 0x40738B: get_next_line (get_next_line.c:48)
==387965==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387965==    by 0x40604B: main (mandatory.cpp:79)
==387965== 
==387965== Invalid free() / delete / delete[] / realloc()
==387965==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387965==    by 0x4073E0: get_next_line (get_next_line.c:53)
==387965==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387965==    by 0x40604B: main (mandatory.cpp:79)
==387965==  Address 0x51d1040 is 0 bytes inside a block of size 10,000,001 free'd
==387965==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387965==    by 0x407608: ft_strjoin (get_next_line_utils.c:82)
==387965==    by 0x40738B: get_next_line (get_next_line.c:48)
==387965==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387965==    by 0x40604B: main (mandatory.cpp:79)
==387965==  Block was alloc'd at
==387965==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387965==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387965==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387965==    by 0x40604B: main (mandatory.cpp:79)
==387965== 
==387965== Invalid read of size 1
==387965==    at 0x407595: ft_strjoin (get_next_line_utils.c:68)
==387965==    by 0x40738B: get_next_line (get_next_line.c:48)
==387965==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387965==    by 0x406057: main (mandatory.cpp:79)
==387965==  Address 0x4de5e51 is 1 bytes inside a block of size 2 free'd
==387965==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387965==    by 0x4076F9: f_search_bn (get_next_line_utils.c:119)
==387965==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387965==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387965==    by 0x40604B: main (mandatory.cpp:79)
==387965==  Block was alloc'd at
==387965==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387965==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==387965==    by 0x40738B: get_next_line (get_next_line.c:48)
==387965==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387965==    by 0x40604B: main (mandatory.cpp:79)
==387965== 
==387965== 1 bytes in 1 blocks are definitely lost in loss record 1 of 1
==387965==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387965==    by 0x407364: get_next_line (get_next_line.c:43)
==387965==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387965==    by 0x406003: main (mandatory.cpp:79)
==387965== 
==387967== Invalid read of size 1
==387967==    at 0x40771B: f_del_front_bn (get_next_line_utils.c:163)
==387967==    by 0x4073CD: get_next_line (get_next_line.c:52)
==387967==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387967==    by 0x406277: main (mandatory.cpp:88)
==387967==  Address 0x4de5f00 is 0 bytes inside a block of size 214 free'd
==387967==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387967==    by 0x4076F9: f_search_bn (get_next_line_utils.c:119)
==387967==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387967==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387967==    by 0x406277: main (mandatory.cpp:88)
==387967==  Block was alloc'd at
==387967==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387967==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==387967==    by 0x40738B: get_next_line (get_next_line.c:48)
==387967==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387967==    by 0x406277: main (mandatory.cpp:88)
==387967== 
==387967== Invalid free() / delete / delete[] / realloc()
==387967==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387967==    by 0x4073E0: get_next_line (get_next_line.c:53)
==387967==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387967==    by 0x406277: main (mandatory.cpp:88)
==387967==  Address 0x51d1040 is 0 bytes inside a block of size 10,000,001 free'd
==387967==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387967==    by 0x407608: ft_strjoin (get_next_line_utils.c:82)
==387967==    by 0x40738B: get_next_line (get_next_line.c:48)
==387967==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387967==    by 0x406277: main (mandatory.cpp:88)
==387967==  Block was alloc'd at
==387967==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387967==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387967==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387967==    by 0x406277: main (mandatory.cpp:88)
==387967== 
==387967== Invalid read of size 1
==387967==    at 0x4074EE: ft_strlen (get_next_line_utils.c:43)
==387967==    by 0x40751B: ft_strjoin (get_next_line_utils.c:59)
==387967==    by 0x40738B: get_next_line (get_next_line.c:48)
==387967==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387967==    by 0x406289: main (mandatory.cpp:88)
==387967==  Address 0x4de5f2a is 42 bytes inside a block of size 214 free'd
==387967==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387967==    by 0x4076F9: f_search_bn (get_next_line_utils.c:119)
==387967==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387967==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387967==    by 0x406277: main (mandatory.cpp:88)
==387967==  Block was alloc'd at
==387967==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387967==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==387967==    by 0x40738B: get_next_line (get_next_line.c:48)
==387967==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387967==    by 0x406277: main (mandatory.cpp:88)
==387967== 
==387967== Invalid read of size 1
==387967==    at 0x407595: ft_strjoin (get_next_line_utils.c:68)
==387967==    by 0x40738B: get_next_line (get_next_line.c:48)
==387967==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387967==    by 0x406289: main (mandatory.cpp:88)
==387967==  Address 0x4de5f2a is 42 bytes inside a block of size 214 free'd
==387967==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387967==    by 0x4076F9: f_search_bn (get_next_line_utils.c:119)
==387967==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387967==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387967==    by 0x406277: main (mandatory.cpp:88)
==387967==  Block was alloc'd at
==387967==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387967==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==387967==    by 0x40738B: get_next_line (get_next_line.c:48)
==387967==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387967==    by 0x406277: main (mandatory.cpp:88)
==387967== 
==387967== Invalid read of size 1
==387967==    at 0x407578: ft_strjoin (get_next_line_utils.c:70)
==387967==    by 0x40738B: get_next_line (get_next_line.c:48)
==387967==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387967==    by 0x406289: main (mandatory.cpp:88)
==387967==  Address 0x4de5f2a is 42 bytes inside a block of size 214 free'd
==387967==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387967==    by 0x4076F9: f_search_bn (get_next_line_utils.c:119)
==387967==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387967==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387967==    by 0x406277: main (mandatory.cpp:88)
==387967==  Block was alloc'd at
==387967==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387967==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==387967==    by 0x40738B: get_next_line (get_next_line.c:48)
==387967==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387967==    by 0x406277: main (mandatory.cpp:88)
==387967== 
==387967== Invalid read of size 1
==387967==    at 0x40771B: f_del_front_bn (get_next_line_utils.c:163)
==387967==    by 0x4073CD: get_next_line (get_next_line.c:52)
==387967==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387967==    by 0x406289: main (mandatory.cpp:88)
==387967==  Address 0x4de6090 is 0 bytes inside a block of size 172 free'd
==387967==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387967==    by 0x4076F9: f_search_bn (get_next_line_utils.c:119)
==387967==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387967==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387967==    by 0x406289: main (mandatory.cpp:88)
==387967==  Block was alloc'd at
==387967==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387967==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==387967==    by 0x40738B: get_next_line (get_next_line.c:48)
==387967==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387967==    by 0x406289: main (mandatory.cpp:88)
==387967== 
==387967== Invalid free() / delete / delete[] / realloc()
==387967==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387967==    by 0x4073E0: get_next_line (get_next_line.c:53)
==387967==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387967==    by 0x406289: main (mandatory.cpp:88)
==387967==  Address 0x5b5b040 is 0 bytes inside a block of size 10,000,001 free'd
==387967==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387967==    by 0x407608: ft_strjoin (get_next_line_utils.c:82)
==387967==    by 0x40738B: get_next_line (get_next_line.c:48)
==387967==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387967==    by 0x406289: main (mandatory.cpp:88)
==387967==  Block was alloc'd at
==387967==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387967==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387967==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387967==    by 0x406289: main (mandatory.cpp:88)
==387967== 
==387967== Invalid read of size 1
==387967==    at 0x407595: ft_strjoin (get_next_line_utils.c:68)
==387967==    by 0x40738B: get_next_line (get_next_line.c:48)
==387967==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387967==    by 0x40629B: main (mandatory.cpp:88)
==387967==  Address 0x4de60bb is 43 bytes inside a block of size 172 free'd
==387967==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387967==    by 0x4076F9: f_search_bn (get_next_line_utils.c:119)
==387967==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387967==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387967==    by 0x406289: main (mandatory.cpp:88)
==387967==  Block was alloc'd at
==387967==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387967==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==387967==    by 0x40738B: get_next_line (get_next_line.c:48)
==387967==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387967==    by 0x406289: main (mandatory.cpp:88)
==387967== 
==387967== Invalid read of size 1
==387967==    at 0x407578: ft_strjoin (get_next_line_utils.c:70)
==387967==    by 0x40738B: get_next_line (get_next_line.c:48)
==387967==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387967==    by 0x40629B: main (mandatory.cpp:88)
==387967==  Address 0x4de60bb is 43 bytes inside a block of size 172 free'd
==387967==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387967==    by 0x4076F9: f_search_bn (get_next_line_utils.c:119)
==387967==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387967==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387967==    by 0x406289: main (mandatory.cpp:88)
==387967==  Block was alloc'd at
==387967==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387967==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==387967==    by 0x40738B: get_next_line (get_next_line.c:48)
==387967==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387967==    by 0x406289: main (mandatory.cpp:88)
==387967== 
==387967== Invalid read of size 1
==387967==    at 0x40771B: f_del_front_bn (get_next_line_utils.c:163)
==387967==    by 0x4073CD: get_next_line (get_next_line.c:52)
==387967==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387967==    by 0x40629B: main (mandatory.cpp:88)
==387967==  Address 0x4de61f0 is 0 bytes inside a block of size 129 free'd
==387967==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387967==    by 0x4076F9: f_search_bn (get_next_line_utils.c:119)
==387967==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387967==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387967==    by 0x40629B: main (mandatory.cpp:88)
==387967==  Block was alloc'd at
==387967==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387967==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==387967==    by 0x40738B: get_next_line (get_next_line.c:48)
==387967==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387967==    by 0x40629B: main (mandatory.cpp:88)
==387967== 
==387967== Invalid free() / delete / delete[] / realloc()
==387967==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387967==    by 0x4073E0: get_next_line (get_next_line.c:53)
==387967==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387967==    by 0x40629B: main (mandatory.cpp:88)
==387967==  Address 0x51d1040 is 0 bytes inside a block of size 10,000,001 free'd
==387967==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387967==    by 0x407608: ft_strjoin (get_next_line_utils.c:82)
==387967==    by 0x40738B: get_next_line (get_next_line.c:48)
==387967==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387967==    by 0x40629B: main (mandatory.cpp:88)
==387967==  Block was alloc'd at
==387967==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387967==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387967==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387967==    by 0x40629B: main (mandatory.cpp:88)
==387967== 
==387967== Invalid read of size 1
==387967==    at 0x407595: ft_strjoin (get_next_line_utils.c:68)
==387967==    by 0x40738B: get_next_line (get_next_line.c:48)
==387967==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387967==    by 0x4062AD: main (mandatory.cpp:88)
==387967==  Address 0x4de621c is 44 bytes inside a block of size 129 free'd
==387967==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387967==    by 0x4076F9: f_search_bn (get_next_line_utils.c:119)
==387967==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387967==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387967==    by 0x40629B: main (mandatory.cpp:88)
==387967==  Block was alloc'd at
==387967==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387967==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==387967==    by 0x40738B: get_next_line (get_next_line.c:48)
==387967==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387967==    by 0x40629B: main (mandatory.cpp:88)
==387967== 
==387967== Invalid read of size 1
==387967==    at 0x407578: ft_strjoin (get_next_line_utils.c:70)
==387967==    by 0x40738B: get_next_line (get_next_line.c:48)
==387967==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387967==    by 0x4062AD: main (mandatory.cpp:88)
==387967==  Address 0x4de621c is 44 bytes inside a block of size 129 free'd
==387967==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387967==    by 0x4076F9: f_search_bn (get_next_line_utils.c:119)
==387967==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387967==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387967==    by 0x40629B: main (mandatory.cpp:88)
==387967==  Block was alloc'd at
==387967==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387967==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==387967==    by 0x40738B: get_next_line (get_next_line.c:48)
==387967==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387967==    by 0x40629B: main (mandatory.cpp:88)
==387967== 
==387967== Invalid read of size 1
==387967==    at 0x40771B: f_del_front_bn (get_next_line_utils.c:163)
==387967==    by 0x4073CD: get_next_line (get_next_line.c:52)
==387967==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387967==    by 0x4062AD: main (mandatory.cpp:88)
==387967==  Address 0x4de6330 is 0 bytes inside a block of size 85 free'd
==387967==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387967==    by 0x4076F9: f_search_bn (get_next_line_utils.c:119)
==387967==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387967==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387967==    by 0x4062AD: main (mandatory.cpp:88)
==387967==  Block was alloc'd at
==387967==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387967==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==387967==    by 0x40738B: get_next_line (get_next_line.c:48)
==387967==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387967==    by 0x4062AD: main (mandatory.cpp:88)
==387967== 
==387967== Invalid free() / delete / delete[] / realloc()
==387967==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387967==    by 0x4073E0: get_next_line (get_next_line.c:53)
==387967==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387967==    by 0x4062AD: main (mandatory.cpp:88)
==387967==  Address 0x5b5b040 is 0 bytes inside a block of size 10,000,001 free'd
==387967==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387967==    by 0x407608: ft_strjoin (get_next_line_utils.c:82)
==387967==    by 0x40738B: get_next_line (get_next_line.c:48)
==387967==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387967==    by 0x4062AD: main (mandatory.cpp:88)
==387967==  Block was alloc'd at
==387967==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387967==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387967==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387967==    by 0x4062AD: main (mandatory.cpp:88)
==387967== 
==387967== Invalid read of size 1
==387967==    at 0x407595: ft_strjoin (get_next_line_utils.c:68)
==387967==    by 0x40738B: get_next_line (get_next_line.c:48)
==387967==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387967==    by 0x4062BF: main (mandatory.cpp:88)
==387967==  Address 0x4de635b is 43 bytes inside a block of size 85 free'd
==387967==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387967==    by 0x4076F9: f_search_bn (get_next_line_utils.c:119)
==387967==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387967==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387967==    by 0x4062AD: main (mandatory.cpp:88)
==387967==  Block was alloc'd at
==387967==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387967==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==387967==    by 0x40738B: get_next_line (get_next_line.c:48)
==387967==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387967==    by 0x4062AD: main (mandatory.cpp:88)
==387967== 
==387967== Invalid read of size 1
==387967==    at 0x407578: ft_strjoin (get_next_line_utils.c:70)
==387967==    by 0x40738B: get_next_line (get_next_line.c:48)
==387967==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387967==    by 0x4062BF: main (mandatory.cpp:88)
==387967==  Address 0x4de635b is 43 bytes inside a block of size 85 free'd
==387967==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387967==    by 0x4076F9: f_search_bn (get_next_line_utils.c:119)
==387967==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387967==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387967==    by 0x4062AD: main (mandatory.cpp:88)
==387967==  Block was alloc'd at
==387967==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387967==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==387967==    by 0x40738B: get_next_line (get_next_line.c:48)
==387967==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387967==    by 0x4062AD: main (mandatory.cpp:88)
==387967== 
==387967== Invalid read of size 1
==387967==    at 0x484FBD4: strcmp (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387967==    by 0x402D0A: gnl(int, char const*) (gnl.cpp:24)
==387967==    by 0x4062BF: main (mandatory.cpp:88)
==387967==  Address 0x0 is not stack'd, malloc'd or (recently) free'd
==387967== 
==387967== 1 bytes in 1 blocks are definitely lost in loss record 1 of 1
==387967==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387967==    by 0x407364: get_next_line (get_next_line.c:43)
==387967==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387967==    by 0x406277: main (mandatory.cpp:88)
==387967== 
==387970== Invalid read of size 1
==387970==    at 0x40771B: f_del_front_bn (get_next_line_utils.c:163)
==387970==    by 0x4073CD: get_next_line (get_next_line.c:52)
==387970==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387970==    by 0x4064EB: main (mandatory.cpp:97)
==387970==  Address 0x4de6230 is 0 bytes inside a block of size 210 free'd
==387970==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387970==    by 0x4076F9: f_search_bn (get_next_line_utils.c:119)
==387970==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387970==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387970==    by 0x4064EB: main (mandatory.cpp:97)
==387970==  Block was alloc'd at
==387970==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387970==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==387970==    by 0x40738B: get_next_line (get_next_line.c:48)
==387970==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387970==    by 0x4064EB: main (mandatory.cpp:97)
==387970== 
==387970== Invalid free() / delete / delete[] / realloc()
==387970==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387970==    by 0x4073E0: get_next_line (get_next_line.c:53)
==387970==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387970==    by 0x4064EB: main (mandatory.cpp:97)
==387970==  Address 0x51d1040 is 0 bytes inside a block of size 10,000,001 free'd
==387970==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387970==    by 0x407608: ft_strjoin (get_next_line_utils.c:82)
==387970==    by 0x40738B: get_next_line (get_next_line.c:48)
==387970==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387970==    by 0x4064EB: main (mandatory.cpp:97)
==387970==  Block was alloc'd at
==387970==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387970==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387970==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387970==    by 0x4064EB: main (mandatory.cpp:97)
==387970== 
==387970== Invalid read of size 1
==387970==    at 0x4074EE: ft_strlen (get_next_line_utils.c:43)
==387970==    by 0x40751B: ft_strjoin (get_next_line_utils.c:59)
==387970==    by 0x40738B: get_next_line (get_next_line.c:48)
==387970==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387970==    by 0x4064FD: main (mandatory.cpp:97)
==387970==  Address 0x4de6259 is 41 bytes inside a block of size 210 free'd
==387970==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387970==    by 0x4076F9: f_search_bn (get_next_line_utils.c:119)
==387970==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387970==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387970==    by 0x4064EB: main (mandatory.cpp:97)
==387970==  Block was alloc'd at
==387970==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387970==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==387970==    by 0x40738B: get_next_line (get_next_line.c:48)
==387970==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387970==    by 0x4064EB: main (mandatory.cpp:97)
==387970== 
==387970== Invalid read of size 1
==387970==    at 0x407595: ft_strjoin (get_next_line_utils.c:68)
==387970==    by 0x40738B: get_next_line (get_next_line.c:48)
==387970==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387970==    by 0x4064FD: main (mandatory.cpp:97)
==387970==  Address 0x4de6259 is 41 bytes inside a block of size 210 free'd
==387970==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387970==    by 0x4076F9: f_search_bn (get_next_line_utils.c:119)
==387970==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387970==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387970==    by 0x4064EB: main (mandatory.cpp:97)
==387970==  Block was alloc'd at
==387970==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387970==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==387970==    by 0x40738B: get_next_line (get_next_line.c:48)
==387970==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387970==    by 0x4064EB: main (mandatory.cpp:97)
==387970== 
==387970== Invalid read of size 1
==387970==    at 0x407578: ft_strjoin (get_next_line_utils.c:70)
==387970==    by 0x40738B: get_next_line (get_next_line.c:48)
==387970==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387970==    by 0x4064FD: main (mandatory.cpp:97)
==387970==  Address 0x4de6259 is 41 bytes inside a block of size 210 free'd
==387970==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387970==    by 0x4076F9: f_search_bn (get_next_line_utils.c:119)
==387970==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387970==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387970==    by 0x4064EB: main (mandatory.cpp:97)
==387970==  Block was alloc'd at
==387970==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387970==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==387970==    by 0x40738B: get_next_line (get_next_line.c:48)
==387970==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387970==    by 0x4064EB: main (mandatory.cpp:97)
==387970== 
==387970== Invalid read of size 1
==387970==    at 0x40771B: f_del_front_bn (get_next_line_utils.c:163)
==387970==    by 0x4073CD: get_next_line (get_next_line.c:52)
==387970==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387970==    by 0x4064FD: main (mandatory.cpp:97)
==387970==  Address 0x4de63c0 is 0 bytes inside a block of size 169 free'd
==387970==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387970==    by 0x4076F9: f_search_bn (get_next_line_utils.c:119)
==387970==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387970==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387970==    by 0x4064FD: main (mandatory.cpp:97)
==387970==  Block was alloc'd at
==387970==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387970==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==387970==    by 0x40738B: get_next_line (get_next_line.c:48)
==387970==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387970==    by 0x4064FD: main (mandatory.cpp:97)
==387970== 
==387970== Invalid free() / delete / delete[] / realloc()
==387970==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387970==    by 0x4073E0: get_next_line (get_next_line.c:53)
==387970==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387970==    by 0x4064FD: main (mandatory.cpp:97)
==387970==  Address 0x5b5b040 is 0 bytes inside a block of size 10,000,001 free'd
==387970==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387970==    by 0x407608: ft_strjoin (get_next_line_utils.c:82)
==387970==    by 0x40738B: get_next_line (get_next_line.c:48)
==387970==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387970==    by 0x4064FD: main (mandatory.cpp:97)
==387970==  Block was alloc'd at
==387970==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387970==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387970==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387970==    by 0x4064FD: main (mandatory.cpp:97)
==387970== 
==387970== Invalid read of size 1
==387970==    at 0x407595: ft_strjoin (get_next_line_utils.c:68)
==387970==    by 0x40738B: get_next_line (get_next_line.c:48)
==387970==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387970==    by 0x40650F: main (mandatory.cpp:97)
==387970==  Address 0x4de63ea is 42 bytes inside a block of size 169 free'd
==387970==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387970==    by 0x4076F9: f_search_bn (get_next_line_utils.c:119)
==387970==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387970==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387970==    by 0x4064FD: main (mandatory.cpp:97)
==387970==  Block was alloc'd at
==387970==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387970==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==387970==    by 0x40738B: get_next_line (get_next_line.c:48)
==387970==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387970==    by 0x4064FD: main (mandatory.cpp:97)
==387970== 
==387970== Invalid read of size 1
==387970==    at 0x407578: ft_strjoin (get_next_line_utils.c:70)
==387970==    by 0x40738B: get_next_line (get_next_line.c:48)
==387970==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387970==    by 0x40650F: main (mandatory.cpp:97)
==387970==  Address 0x4de63ea is 42 bytes inside a block of size 169 free'd
==387970==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387970==    by 0x4076F9: f_search_bn (get_next_line_utils.c:119)
==387970==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387970==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387970==    by 0x4064FD: main (mandatory.cpp:97)
==387970==  Block was alloc'd at
==387970==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387970==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==387970==    by 0x40738B: get_next_line (get_next_line.c:48)
==387970==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387970==    by 0x4064FD: main (mandatory.cpp:97)
==387970== 
==387970== Invalid read of size 1
==387970==    at 0x40771B: f_del_front_bn (get_next_line_utils.c:163)
==387970==    by 0x4073CD: get_next_line (get_next_line.c:52)
==387970==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387970==    by 0x40650F: main (mandatory.cpp:97)
==387970==  Address 0x4de6520 is 0 bytes inside a block of size 127 free'd
==387970==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387970==    by 0x4076F9: f_search_bn (get_next_line_utils.c:119)
==387970==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387970==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387970==    by 0x40650F: main (mandatory.cpp:97)
==387970==  Block was alloc'd at
==387970==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387970==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==387970==    by 0x40738B: get_next_line (get_next_line.c:48)
==387970==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387970==    by 0x40650F: main (mandatory.cpp:97)
==387970== 
==387970== Invalid free() / delete / delete[] / realloc()
==387970==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387970==    by 0x4073E0: get_next_line (get_next_line.c:53)
==387970==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387970==    by 0x40650F: main (mandatory.cpp:97)
==387970==  Address 0x51d1040 is 0 bytes inside a block of size 10,000,001 free'd
==387970==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387970==    by 0x407608: ft_strjoin (get_next_line_utils.c:82)
==387970==    by 0x40738B: get_next_line (get_next_line.c:48)
==387970==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387970==    by 0x40650F: main (mandatory.cpp:97)
==387970==  Block was alloc'd at
==387970==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387970==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387970==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387970==    by 0x40650F: main (mandatory.cpp:97)
==387970== 
==387970== Invalid read of size 1
==387970==    at 0x407595: ft_strjoin (get_next_line_utils.c:68)
==387970==    by 0x40738B: get_next_line (get_next_line.c:48)
==387970==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387970==    by 0x406521: main (mandatory.cpp:97)
==387970==  Address 0x4de654b is 43 bytes inside a block of size 127 free'd
==387970==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387970==    by 0x4076F9: f_search_bn (get_next_line_utils.c:119)
==387970==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387970==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387970==    by 0x40650F: main (mandatory.cpp:97)
==387970==  Block was alloc'd at
==387970==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387970==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==387970==    by 0x40738B: get_next_line (get_next_line.c:48)
==387970==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387970==    by 0x40650F: main (mandatory.cpp:97)
==387970== 
==387970== Invalid read of size 1
==387970==    at 0x407578: ft_strjoin (get_next_line_utils.c:70)
==387970==    by 0x40738B: get_next_line (get_next_line.c:48)
==387970==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387970==    by 0x406521: main (mandatory.cpp:97)
==387970==  Address 0x4de654b is 43 bytes inside a block of size 127 free'd
==387970==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387970==    by 0x4076F9: f_search_bn (get_next_line_utils.c:119)
==387970==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387970==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387970==    by 0x40650F: main (mandatory.cpp:97)
==387970==  Block was alloc'd at
==387970==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387970==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==387970==    by 0x40738B: get_next_line (get_next_line.c:48)
==387970==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387970==    by 0x40650F: main (mandatory.cpp:97)
==387970== 
==387970== Invalid read of size 1
==387970==    at 0x40771B: f_del_front_bn (get_next_line_utils.c:163)
==387970==    by 0x4073CD: get_next_line (get_next_line.c:52)
==387970==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387970==    by 0x406521: main (mandatory.cpp:97)
==387970==  Address 0x4de6650 is 0 bytes inside a block of size 84 free'd
==387970==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387970==    by 0x4076F9: f_search_bn (get_next_line_utils.c:119)
==387970==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387970==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387970==    by 0x406521: main (mandatory.cpp:97)
==387970==  Block was alloc'd at
==387970==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387970==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==387970==    by 0x40738B: get_next_line (get_next_line.c:48)
==387970==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387970==    by 0x406521: main (mandatory.cpp:97)
==387970== 
==387970== Invalid free() / delete / delete[] / realloc()
==387970==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387970==    by 0x4073E0: get_next_line (get_next_line.c:53)
==387970==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387970==    by 0x406521: main (mandatory.cpp:97)
==387970==  Address 0x5b5b040 is 0 bytes inside a block of size 10,000,001 free'd
==387970==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387970==    by 0x407608: ft_strjoin (get_next_line_utils.c:82)
==387970==    by 0x40738B: get_next_line (get_next_line.c:48)
==387970==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387970==    by 0x406521: main (mandatory.cpp:97)
==387970==  Block was alloc'd at
==387970==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387970==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387970==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387970==    by 0x406521: main (mandatory.cpp:97)
==387970== 
==387970== Invalid read of size 1
==387970==    at 0x407595: ft_strjoin (get_next_line_utils.c:68)
==387970==    by 0x40738B: get_next_line (get_next_line.c:48)
==387970==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387970==    by 0x406533: main (mandatory.cpp:97)
==387970==  Address 0x4de667a is 42 bytes inside a block of size 84 free'd
==387970==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387970==    by 0x4076F9: f_search_bn (get_next_line_utils.c:119)
==387970==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387970==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387970==    by 0x406521: main (mandatory.cpp:97)
==387970==  Block was alloc'd at
==387970==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387970==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==387970==    by 0x40738B: get_next_line (get_next_line.c:48)
==387970==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387970==    by 0x406521: main (mandatory.cpp:97)
==387970== 
==387970== Invalid read of size 1
==387970==    at 0x407578: ft_strjoin (get_next_line_utils.c:70)
==387970==    by 0x40738B: get_next_line (get_next_line.c:48)
==387970==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387970==    by 0x406533: main (mandatory.cpp:97)
==387970==  Address 0x4de667a is 42 bytes inside a block of size 84 free'd
==387970==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387970==    by 0x4076F9: f_search_bn (get_next_line_utils.c:119)
==387970==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387970==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387970==    by 0x406521: main (mandatory.cpp:97)
==387970==  Block was alloc'd at
==387970==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387970==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==387970==    by 0x40738B: get_next_line (get_next_line.c:48)
==387970==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387970==    by 0x406521: main (mandatory.cpp:97)
==387970== 
==387970== Invalid read of size 1
==387970==    at 0x40771B: f_del_front_bn (get_next_line_utils.c:163)
==387970==    by 0x4073CD: get_next_line (get_next_line.c:52)
==387970==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387970==    by 0x406533: main (mandatory.cpp:97)
==387970==  Address 0x4de6760 is 0 bytes inside a block of size 42 free'd
==387970==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387970==    by 0x4076F9: f_search_bn (get_next_line_utils.c:119)
==387970==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387970==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387970==    by 0x406533: main (mandatory.cpp:97)
==387970==  Block was alloc'd at
==387970==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387970==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==387970==    by 0x40738B: get_next_line (get_next_line.c:48)
==387970==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387970==    by 0x406533: main (mandatory.cpp:97)
==387970== 
==387970== Invalid free() / delete / delete[] / realloc()
==387970==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387970==    by 0x4073E0: get_next_line (get_next_line.c:53)
==387970==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387970==    by 0x406533: main (mandatory.cpp:97)
==387970==  Address 0x51d1040 is 0 bytes inside a block of size 10,000,001 free'd
==387970==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387970==    by 0x407608: ft_strjoin (get_next_line_utils.c:82)
==387970==    by 0x40738B: get_next_line (get_next_line.c:48)
==387970==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387970==    by 0x406533: main (mandatory.cpp:97)
==387970==  Block was alloc'd at
==387970==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387970==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387970==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387970==    by 0x406533: main (mandatory.cpp:97)
==387970== 
==387970== Invalid read of size 1
==387970==    at 0x407595: ft_strjoin (get_next_line_utils.c:68)
==387970==    by 0x40738B: get_next_line (get_next_line.c:48)
==387970==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387970==    by 0x40653F: main (mandatory.cpp:97)
==387970==  Address 0x4de6789 is 41 bytes inside a block of size 42 free'd
==387970==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387970==    by 0x4076F9: f_search_bn (get_next_line_utils.c:119)
==387970==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387970==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387970==    by 0x406533: main (mandatory.cpp:97)
==387970==  Block was alloc'd at
==387970==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387970==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==387970==    by 0x40738B: get_next_line (get_next_line.c:48)
==387970==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387970==    by 0x406533: main (mandatory.cpp:97)
==387970== 
==387970== 1 bytes in 1 blocks are definitely lost in loss record 1 of 1
==387970==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387970==    by 0x407364: get_next_line (get_next_line.c:43)
==387970==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387970==    by 0x4064EB: main (mandatory.cpp:97)
==387970== 
==387971== Invalid read of size 1
==387971==    at 0x40771B: f_del_front_bn (get_next_line_utils.c:163)
==387971==    by 0x4073CD: get_next_line (get_next_line.c:52)
==387971==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387971==    by 0x40675F: main (mandatory.cpp:106)
==387971==  Address 0x4de6560 is 0 bytes inside a block of size 218 free'd
==387971==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387971==    by 0x4076F9: f_search_bn (get_next_line_utils.c:119)
==387971==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387971==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387971==    by 0x40675F: main (mandatory.cpp:106)
==387971==  Block was alloc'd at
==387971==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387971==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==387971==    by 0x40738B: get_next_line (get_next_line.c:48)
==387971==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387971==    by 0x40675F: main (mandatory.cpp:106)
==387971== 
==387971== Invalid free() / delete / delete[] / realloc()
==387971==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387971==    by 0x4073E0: get_next_line (get_next_line.c:53)
==387971==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387971==    by 0x40675F: main (mandatory.cpp:106)
==387971==  Address 0x51d1040 is 0 bytes inside a block of size 10,000,001 free'd
==387971==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387971==    by 0x407608: ft_strjoin (get_next_line_utils.c:82)
==387971==    by 0x40738B: get_next_line (get_next_line.c:48)
==387971==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387971==    by 0x40675F: main (mandatory.cpp:106)
==387971==  Block was alloc'd at
==387971==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387971==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387971==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387971==    by 0x40675F: main (mandatory.cpp:106)
==387971== 
==387971== Invalid read of size 1
==387971==    at 0x4074EE: ft_strlen (get_next_line_utils.c:43)
==387971==    by 0x40751B: ft_strjoin (get_next_line_utils.c:59)
==387971==    by 0x40738B: get_next_line (get_next_line.c:48)
==387971==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387971==    by 0x406771: main (mandatory.cpp:106)
==387971==  Address 0x4de658a is 42 bytes inside a block of size 218 free'd
==387971==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387971==    by 0x4076F9: f_search_bn (get_next_line_utils.c:119)
==387971==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387971==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387971==    by 0x40675F: main (mandatory.cpp:106)
==387971==  Block was alloc'd at
==387971==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387971==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==387971==    by 0x40738B: get_next_line (get_next_line.c:48)
==387971==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387971==    by 0x40675F: main (mandatory.cpp:106)
==387971== 
==387971== Invalid read of size 1
==387971==    at 0x407595: ft_strjoin (get_next_line_utils.c:68)
==387971==    by 0x40738B: get_next_line (get_next_line.c:48)
==387971==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387971==    by 0x406771: main (mandatory.cpp:106)
==387971==  Address 0x4de658a is 42 bytes inside a block of size 218 free'd
==387971==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387971==    by 0x4076F9: f_search_bn (get_next_line_utils.c:119)
==387971==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387971==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387971==    by 0x40675F: main (mandatory.cpp:106)
==387971==  Block was alloc'd at
==387971==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387971==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==387971==    by 0x40738B: get_next_line (get_next_line.c:48)
==387971==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387971==    by 0x40675F: main (mandatory.cpp:106)
==387971== 
==387971== Invalid read of size 1
==387971==    at 0x407578: ft_strjoin (get_next_line_utils.c:70)
==387971==    by 0x40738B: get_next_line (get_next_line.c:48)
==387971==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387971==    by 0x406771: main (mandatory.cpp:106)
==387971==  Address 0x4de658a is 42 bytes inside a block of size 218 free'd
==387971==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387971==    by 0x4076F9: f_search_bn (get_next_line_utils.c:119)
==387971==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387971==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387971==    by 0x40675F: main (mandatory.cpp:106)
==387971==  Block was alloc'd at
==387971==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387971==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==387971==    by 0x40738B: get_next_line (get_next_line.c:48)
==387971==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387971==    by 0x40675F: main (mandatory.cpp:106)
==387971== 
==387971== Invalid read of size 1
==387971==    at 0x40771B: f_del_front_bn (get_next_line_utils.c:163)
==387971==    by 0x4073CD: get_next_line (get_next_line.c:52)
==387971==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387971==    by 0x406771: main (mandatory.cpp:106)
==387971==  Address 0x4de66f0 is 0 bytes inside a block of size 176 free'd
==387971==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387971==    by 0x4076F9: f_search_bn (get_next_line_utils.c:119)
==387971==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387971==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387971==    by 0x406771: main (mandatory.cpp:106)
==387971==  Block was alloc'd at
==387971==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387971==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==387971==    by 0x40738B: get_next_line (get_next_line.c:48)
==387971==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387971==    by 0x406771: main (mandatory.cpp:106)
==387971== 
==387971== Invalid free() / delete / delete[] / realloc()
==387971==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387971==    by 0x4073E0: get_next_line (get_next_line.c:53)
==387971==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387971==    by 0x406771: main (mandatory.cpp:106)
==387971==  Address 0x5b5b040 is 0 bytes inside a block of size 10,000,001 free'd
==387971==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387971==    by 0x407608: ft_strjoin (get_next_line_utils.c:82)
==387971==    by 0x40738B: get_next_line (get_next_line.c:48)
==387971==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387971==    by 0x406771: main (mandatory.cpp:106)
==387971==  Block was alloc'd at
==387971==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387971==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387971==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387971==    by 0x406771: main (mandatory.cpp:106)
==387971== 
==387971== Invalid read of size 1
==387971==    at 0x407595: ft_strjoin (get_next_line_utils.c:68)
==387971==    by 0x40738B: get_next_line (get_next_line.c:48)
==387971==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387971==    by 0x406783: main (mandatory.cpp:106)
==387971==  Address 0x4de66f1 is 1 bytes inside a block of size 176 free'd
==387971==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387971==    by 0x4076F9: f_search_bn (get_next_line_utils.c:119)
==387971==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387971==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387971==    by 0x406771: main (mandatory.cpp:106)
==387971==  Block was alloc'd at
==387971==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387971==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==387971==    by 0x40738B: get_next_line (get_next_line.c:48)
==387971==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387971==    by 0x406771: main (mandatory.cpp:106)
==387971== 
==387971== Invalid read of size 1
==387971==    at 0x407578: ft_strjoin (get_next_line_utils.c:70)
==387971==    by 0x40738B: get_next_line (get_next_line.c:48)
==387971==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387971==    by 0x406783: main (mandatory.cpp:106)
==387971==  Address 0x4de66f1 is 1 bytes inside a block of size 176 free'd
==387971==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387971==    by 0x4076F9: f_search_bn (get_next_line_utils.c:119)
==387971==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387971==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387971==    by 0x406771: main (mandatory.cpp:106)
==387971==  Block was alloc'd at
==387971==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387971==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==387971==    by 0x40738B: get_next_line (get_next_line.c:48)
==387971==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387971==    by 0x406771: main (mandatory.cpp:106)
==387971== 
==387971== Invalid read of size 1
==387971==    at 0x40771B: f_del_front_bn (get_next_line_utils.c:163)
==387971==    by 0x4073CD: get_next_line (get_next_line.c:52)
==387971==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387971==    by 0x406783: main (mandatory.cpp:106)
==387971==  Address 0x4de6830 is 0 bytes inside a block of size 175 free'd
==387971==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387971==    by 0x4076F9: f_search_bn (get_next_line_utils.c:119)
==387971==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387971==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387971==    by 0x406783: main (mandatory.cpp:106)
==387971==  Block was alloc'd at
==387971==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387971==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==387971==    by 0x40738B: get_next_line (get_next_line.c:48)
==387971==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387971==    by 0x406783: main (mandatory.cpp:106)
==387971== 
==387971== Invalid free() / delete / delete[] / realloc()
==387971==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387971==    by 0x4073E0: get_next_line (get_next_line.c:53)
==387971==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387971==    by 0x406783: main (mandatory.cpp:106)
==387971==  Address 0x51d1040 is 0 bytes inside a block of size 10,000,001 free'd
==387971==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387971==    by 0x407608: ft_strjoin (get_next_line_utils.c:82)
==387971==    by 0x40738B: get_next_line (get_next_line.c:48)
==387971==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387971==    by 0x406783: main (mandatory.cpp:106)
==387971==  Block was alloc'd at
==387971==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387971==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387971==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387971==    by 0x406783: main (mandatory.cpp:106)
==387971== 
==387971== Invalid read of size 1
==387971==    at 0x407595: ft_strjoin (get_next_line_utils.c:68)
==387971==    by 0x40738B: get_next_line (get_next_line.c:48)
==387971==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387971==    by 0x406795: main (mandatory.cpp:106)
==387971==  Address 0x4de685b is 43 bytes inside a block of size 175 free'd
==387971==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387971==    by 0x4076F9: f_search_bn (get_next_line_utils.c:119)
==387971==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387971==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387971==    by 0x406783: main (mandatory.cpp:106)
==387971==  Block was alloc'd at
==387971==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387971==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==387971==    by 0x40738B: get_next_line (get_next_line.c:48)
==387971==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387971==    by 0x406783: main (mandatory.cpp:106)
==387971== 
==387971== Invalid read of size 1
==387971==    at 0x407578: ft_strjoin (get_next_line_utils.c:70)
==387971==    by 0x40738B: get_next_line (get_next_line.c:48)
==387971==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387971==    by 0x406795: main (mandatory.cpp:106)
==387971==  Address 0x4de685b is 43 bytes inside a block of size 175 free'd
==387971==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387971==    by 0x4076F9: f_search_bn (get_next_line_utils.c:119)
==387971==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387971==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387971==    by 0x406783: main (mandatory.cpp:106)
==387971==  Block was alloc'd at
==387971==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387971==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==387971==    by 0x40738B: get_next_line (get_next_line.c:48)
==387971==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387971==    by 0x406783: main (mandatory.cpp:106)
==387971== 
==387971== Invalid read of size 1
==387971==    at 0x40771B: f_del_front_bn (get_next_line_utils.c:163)
==387971==    by 0x4073CD: get_next_line (get_next_line.c:52)
==387971==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387971==    by 0x406795: main (mandatory.cpp:106)
==387971==  Address 0x4de6990 is 0 bytes inside a block of size 132 free'd
==387971==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387971==    by 0x4076F9: f_search_bn (get_next_line_utils.c:119)
==387971==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387971==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387971==    by 0x406795: main (mandatory.cpp:106)
==387971==  Block was alloc'd at
==387971==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387971==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==387971==    by 0x40738B: get_next_line (get_next_line.c:48)
==387971==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387971==    by 0x406795: main (mandatory.cpp:106)
==387971== 
==387971== Invalid free() / delete / delete[] / realloc()
==387971==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387971==    by 0x4073E0: get_next_line (get_next_line.c:53)
==387971==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387971==    by 0x406795: main (mandatory.cpp:106)
==387971==  Address 0x5b5b040 is 0 bytes inside a block of size 10,000,001 free'd
==387971==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387971==    by 0x407608: ft_strjoin (get_next_line_utils.c:82)
==387971==    by 0x40738B: get_next_line (get_next_line.c:48)
==387971==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387971==    by 0x406795: main (mandatory.cpp:106)
==387971==  Block was alloc'd at
==387971==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387971==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387971==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387971==    by 0x406795: main (mandatory.cpp:106)
==387971== 
==387971== Invalid read of size 1
==387971==    at 0x407595: ft_strjoin (get_next_line_utils.c:68)
==387971==    by 0x40738B: get_next_line (get_next_line.c:48)
==387971==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387971==    by 0x4067A7: main (mandatory.cpp:106)
==387971==  Address 0x4de6991 is 1 bytes inside a block of size 132 free'd
==387971==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387971==    by 0x4076F9: f_search_bn (get_next_line_utils.c:119)
==387971==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387971==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387971==    by 0x406795: main (mandatory.cpp:106)
==387971==  Block was alloc'd at
==387971==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387971==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==387971==    by 0x40738B: get_next_line (get_next_line.c:48)
==387971==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387971==    by 0x406795: main (mandatory.cpp:106)
==387971== 
==387971== Invalid read of size 1
==387971==    at 0x407578: ft_strjoin (get_next_line_utils.c:70)
==387971==    by 0x40738B: get_next_line (get_next_line.c:48)
==387971==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387971==    by 0x4067A7: main (mandatory.cpp:106)
==387971==  Address 0x4de6991 is 1 bytes inside a block of size 132 free'd
==387971==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387971==    by 0x4076F9: f_search_bn (get_next_line_utils.c:119)
==387971==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387971==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387971==    by 0x406795: main (mandatory.cpp:106)
==387971==  Block was alloc'd at
==387971==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387971==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==387971==    by 0x40738B: get_next_line (get_next_line.c:48)
==387971==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387971==    by 0x406795: main (mandatory.cpp:106)
==387971== 
==387971== Invalid read of size 1
==387971==    at 0x40771B: f_del_front_bn (get_next_line_utils.c:163)
==387971==    by 0x4073CD: get_next_line (get_next_line.c:52)
==387971==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387971==    by 0x4067A7: main (mandatory.cpp:106)
==387971==  Address 0x4de6ab0 is 0 bytes inside a block of size 131 free'd
==387971==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387971==    by 0x4076F9: f_search_bn (get_next_line_utils.c:119)
==387971==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387971==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387971==    by 0x4067A7: main (mandatory.cpp:106)
==387971==  Block was alloc'd at
==387971==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387971==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==387971==    by 0x40738B: get_next_line (get_next_line.c:48)
==387971==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387971==    by 0x4067A7: main (mandatory.cpp:106)
==387971== 
==387971== Invalid free() / delete / delete[] / realloc()
==387971==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387971==    by 0x4073E0: get_next_line (get_next_line.c:53)
==387971==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387971==    by 0x4067A7: main (mandatory.cpp:106)
==387971==  Address 0x51d1040 is 0 bytes inside a block of size 10,000,001 free'd
==387971==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387971==    by 0x407608: ft_strjoin (get_next_line_utils.c:82)
==387971==    by 0x40738B: get_next_line (get_next_line.c:48)
==387971==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387971==    by 0x4067A7: main (mandatory.cpp:106)
==387971==  Block was alloc'd at
==387971==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387971==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387971==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387971==    by 0x4067A7: main (mandatory.cpp:106)
==387971== 
==387971== Invalid read of size 1
==387971==    at 0x407595: ft_strjoin (get_next_line_utils.c:68)
==387971==    by 0x40738B: get_next_line (get_next_line.c:48)
==387971==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387971==    by 0x4067B9: main (mandatory.cpp:106)
==387971==  Address 0x4de6adc is 44 bytes inside a block of size 131 free'd
==387971==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387971==    by 0x4076F9: f_search_bn (get_next_line_utils.c:119)
==387971==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387971==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387971==    by 0x4067A7: main (mandatory.cpp:106)
==387971==  Block was alloc'd at
==387971==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387971==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==387971==    by 0x40738B: get_next_line (get_next_line.c:48)
==387971==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387971==    by 0x4067A7: main (mandatory.cpp:106)
==387971== 
==387971== Invalid read of size 1
==387971==    at 0x407578: ft_strjoin (get_next_line_utils.c:70)
==387971==    by 0x40738B: get_next_line (get_next_line.c:48)
==387971==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387971==    by 0x4067B9: main (mandatory.cpp:106)
==387971==  Address 0x4de6adc is 44 bytes inside a block of size 131 free'd
==387971==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387971==    by 0x4076F9: f_search_bn (get_next_line_utils.c:119)
==387971==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387971==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387971==    by 0x4067A7: main (mandatory.cpp:106)
==387971==  Block was alloc'd at
==387971==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387971==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==387971==    by 0x40738B: get_next_line (get_next_line.c:48)
==387971==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387971==    by 0x4067A7: main (mandatory.cpp:106)
==387971== 
==387971== Invalid read of size 1
==387971==    at 0x40771B: f_del_front_bn (get_next_line_utils.c:163)
==387971==    by 0x4073CD: get_next_line (get_next_line.c:52)
==387971==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387971==    by 0x4067B9: main (mandatory.cpp:106)
==387971==  Address 0x4de6bf0 is 0 bytes inside a block of size 87 free'd
==387971==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387971==    by 0x4076F9: f_search_bn (get_next_line_utils.c:119)
==387971==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387971==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387971==    by 0x4067B9: main (mandatory.cpp:106)
==387971==  Block was alloc'd at
==387971==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387971==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==387971==    by 0x40738B: get_next_line (get_next_line.c:48)
==387971==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387971==    by 0x4067B9: main (mandatory.cpp:106)
==387971== 
==387971== Invalid free() / delete / delete[] / realloc()
==387971==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387971==    by 0x4073E0: get_next_line (get_next_line.c:53)
==387971==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387971==    by 0x4067B9: main (mandatory.cpp:106)
==387971==  Address 0x5b5b040 is 0 bytes inside a block of size 10,000,001 free'd
==387971==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387971==    by 0x407608: ft_strjoin (get_next_line_utils.c:82)
==387971==    by 0x40738B: get_next_line (get_next_line.c:48)
==387971==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387971==    by 0x4067B9: main (mandatory.cpp:106)
==387971==  Block was alloc'd at
==387971==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387971==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387971==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387971==    by 0x4067B9: main (mandatory.cpp:106)
==387971== 
==387971== Invalid read of size 1
==387971==    at 0x407595: ft_strjoin (get_next_line_utils.c:68)
==387971==    by 0x40738B: get_next_line (get_next_line.c:48)
==387971==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387971==    by 0x4067CB: main (mandatory.cpp:106)
==387971==  Address 0x4de6bf1 is 1 bytes inside a block of size 87 free'd
==387971==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387971==    by 0x4076F9: f_search_bn (get_next_line_utils.c:119)
==387971==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387971==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387971==    by 0x4067B9: main (mandatory.cpp:106)
==387971==  Block was alloc'd at
==387971==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387971==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==387971==    by 0x40738B: get_next_line (get_next_line.c:48)
==387971==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387971==    by 0x4067B9: main (mandatory.cpp:106)
==387971== 
==387971== Invalid read of size 1
==387971==    at 0x407578: ft_strjoin (get_next_line_utils.c:70)
==387971==    by 0x40738B: get_next_line (get_next_line.c:48)
==387971==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387971==    by 0x4067CB: main (mandatory.cpp:106)
==387971==  Address 0x4de6bf1 is 1 bytes inside a block of size 87 free'd
==387971==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387971==    by 0x4076F9: f_search_bn (get_next_line_utils.c:119)
==387971==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387971==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387971==    by 0x4067B9: main (mandatory.cpp:106)
==387971==  Block was alloc'd at
==387971==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387971==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==387971==    by 0x40738B: get_next_line (get_next_line.c:48)
==387971==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387971==    by 0x4067B9: main (mandatory.cpp:106)
==387971== 
==387971== Invalid read of size 1
==387971==    at 0x40771B: f_del_front_bn (get_next_line_utils.c:163)
==387971==    by 0x4073CD: get_next_line (get_next_line.c:52)
==387971==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387971==    by 0x4067CB: main (mandatory.cpp:106)
==387971==  Address 0x4de6ce0 is 0 bytes inside a block of size 86 free'd
==387971==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387971==    by 0x4076F9: f_search_bn (get_next_line_utils.c:119)
==387971==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387971==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387971==    by 0x4067CB: main (mandatory.cpp:106)
==387971==  Block was alloc'd at
==387971==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387971==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==387971==    by 0x40738B: get_next_line (get_next_line.c:48)
==387971==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387971==    by 0x4067CB: main (mandatory.cpp:106)
==387971== 
==387971== Invalid free() / delete / delete[] / realloc()
==387971==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387971==    by 0x4073E0: get_next_line (get_next_line.c:53)
==387971==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387971==    by 0x4067CB: main (mandatory.cpp:106)
==387971==  Address 0x51d1040 is 0 bytes inside a block of size 10,000,001 free'd
==387971==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387971==    by 0x407608: ft_strjoin (get_next_line_utils.c:82)
==387971==    by 0x40738B: get_next_line (get_next_line.c:48)
==387971==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387971==    by 0x4067CB: main (mandatory.cpp:106)
==387971==  Block was alloc'd at
==387971==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387971==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387971==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387971==    by 0x4067CB: main (mandatory.cpp:106)
==387971== 
==387971== Invalid read of size 1
==387971==    at 0x407595: ft_strjoin (get_next_line_utils.c:68)
==387971==    by 0x40738B: get_next_line (get_next_line.c:48)
==387971==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387971==    by 0x4067DD: main (mandatory.cpp:106)
==387971==  Address 0x4de6d0b is 43 bytes inside a block of size 86 free'd
==387971==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387971==    by 0x4076F9: f_search_bn (get_next_line_utils.c:119)
==387971==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387971==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387971==    by 0x4067CB: main (mandatory.cpp:106)
==387971==  Block was alloc'd at
==387971==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387971==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==387971==    by 0x40738B: get_next_line (get_next_line.c:48)
==387971==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387971==    by 0x4067CB: main (mandatory.cpp:106)
==387971== 
==387971== Invalid read of size 1
==387971==    at 0x407578: ft_strjoin (get_next_line_utils.c:70)
==387971==    by 0x40738B: get_next_line (get_next_line.c:48)
==387971==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387971==    by 0x4067DD: main (mandatory.cpp:106)
==387971==  Address 0x4de6d0b is 43 bytes inside a block of size 86 free'd
==387971==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387971==    by 0x4076F9: f_search_bn (get_next_line_utils.c:119)
==387971==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387971==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387971==    by 0x4067CB: main (mandatory.cpp:106)
==387971==  Block was alloc'd at
==387971==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387971==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==387971==    by 0x40738B: get_next_line (get_next_line.c:48)
==387971==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387971==    by 0x4067CB: main (mandatory.cpp:106)
==387971== 
==387971== Invalid read of size 1
==387971==    at 0x40771B: f_del_front_bn (get_next_line_utils.c:163)
==387971==    by 0x4073CD: get_next_line (get_next_line.c:52)
==387971==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387971==    by 0x4067DD: main (mandatory.cpp:106)
==387971==  Address 0x4de6df0 is 0 bytes inside a block of size 43 free'd
==387971==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387971==    by 0x4076F9: f_search_bn (get_next_line_utils.c:119)
==387971==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387971==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387971==    by 0x4067DD: main (mandatory.cpp:106)
==387971==  Block was alloc'd at
==387971==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387971==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==387971==    by 0x40738B: get_next_line (get_next_line.c:48)
==387971==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387971==    by 0x4067DD: main (mandatory.cpp:106)
==387971== 
==387971== Invalid free() / delete / delete[] / realloc()
==387971==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387971==    by 0x4073E0: get_next_line (get_next_line.c:53)
==387971==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387971==    by 0x4067DD: main (mandatory.cpp:106)
==387971==  Address 0x5b5b040 is 0 bytes inside a block of size 10,000,001 free'd
==387971==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387971==    by 0x407608: ft_strjoin (get_next_line_utils.c:82)
==387971==    by 0x40738B: get_next_line (get_next_line.c:48)
==387971==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387971==    by 0x4067DD: main (mandatory.cpp:106)
==387971==  Block was alloc'd at
==387971==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387971==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387971==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387971==    by 0x4067DD: main (mandatory.cpp:106)
==387971== 
==387971== Invalid read of size 1
==387971==    at 0x407595: ft_strjoin (get_next_line_utils.c:68)
==387971==    by 0x40738B: get_next_line (get_next_line.c:48)
==387971==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387971==    by 0x4067EF: main (mandatory.cpp:106)
==387971==  Address 0x4de6df1 is 1 bytes inside a block of size 43 free'd
==387971==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387971==    by 0x4076F9: f_search_bn (get_next_line_utils.c:119)
==387971==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387971==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387971==    by 0x4067DD: main (mandatory.cpp:106)
==387971==  Block was alloc'd at
==387971==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387971==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==387971==    by 0x40738B: get_next_line (get_next_line.c:48)
==387971==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387971==    by 0x4067DD: main (mandatory.cpp:106)
==387971== 
==387971== Invalid read of size 1
==387971==    at 0x407578: ft_strjoin (get_next_line_utils.c:70)
==387971==    by 0x40738B: get_next_line (get_next_line.c:48)
==387971==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387971==    by 0x4067EF: main (mandatory.cpp:106)
==387971==  Address 0x4de6df1 is 1 bytes inside a block of size 43 free'd
==387971==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387971==    by 0x4076F9: f_search_bn (get_next_line_utils.c:119)
==387971==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387971==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387971==    by 0x4067DD: main (mandatory.cpp:106)
==387971==  Block was alloc'd at
==387971==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387971==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==387971==    by 0x40738B: get_next_line (get_next_line.c:48)
==387971==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387971==    by 0x4067DD: main (mandatory.cpp:106)
==387971== 
==387971== Invalid read of size 1
==387971==    at 0x484FBD4: strcmp (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387971==    by 0x402D0A: gnl(int, char const*) (gnl.cpp:24)
==387971==    by 0x4067EF: main (mandatory.cpp:106)
==387971==  Address 0x0 is not stack'd, malloc'd or (recently) free'd
==387971== 
==387971== 1 bytes in 1 blocks are definitely lost in loss record 1 of 1
==387971==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387971==    by 0x407364: get_next_line (get_next_line.c:43)
==387971==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387971==    by 0x40675F: main (mandatory.cpp:106)
==387971== 
==387977== Invalid read of size 1
==387977==    at 0x40771B: f_del_front_bn (get_next_line_utils.c:163)
==387977==    by 0x4073CD: get_next_line (get_next_line.c:52)
==387977==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387977==    by 0x406A1B: main (mandatory.cpp:119)
==387977==  Address 0x4de6890 is 0 bytes inside a block of size 219 free'd
==387977==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387977==    by 0x4076F9: f_search_bn (get_next_line_utils.c:119)
==387977==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387977==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387977==    by 0x406A1B: main (mandatory.cpp:119)
==387977==  Block was alloc'd at
==387977==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387977==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==387977==    by 0x40738B: get_next_line (get_next_line.c:48)
==387977==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387977==    by 0x406A1B: main (mandatory.cpp:119)
==387977== 
==387977== Invalid free() / delete / delete[] / realloc()
==387977==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387977==    by 0x4073E0: get_next_line (get_next_line.c:53)
==387977==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387977==    by 0x406A1B: main (mandatory.cpp:119)
==387977==  Address 0x51d1040 is 0 bytes inside a block of size 10,000,001 free'd
==387977==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387977==    by 0x407608: ft_strjoin (get_next_line_utils.c:82)
==387977==    by 0x40738B: get_next_line (get_next_line.c:48)
==387977==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387977==    by 0x406A1B: main (mandatory.cpp:119)
==387977==  Block was alloc'd at
==387977==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387977==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387977==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387977==    by 0x406A1B: main (mandatory.cpp:119)
==387977== 
==387977== Invalid read of size 1
==387977==    at 0x4074EE: ft_strlen (get_next_line_utils.c:43)
==387977==    by 0x40751B: ft_strjoin (get_next_line_utils.c:59)
==387977==    by 0x40738B: get_next_line (get_next_line.c:48)
==387977==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387977==    by 0x406A2D: main (mandatory.cpp:119)
==387977==  Address 0x4de68ba is 42 bytes inside a block of size 219 free'd
==387977==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387977==    by 0x4076F9: f_search_bn (get_next_line_utils.c:119)
==387977==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387977==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387977==    by 0x406A1B: main (mandatory.cpp:119)
==387977==  Block was alloc'd at
==387977==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387977==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==387977==    by 0x40738B: get_next_line (get_next_line.c:48)
==387977==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387977==    by 0x406A1B: main (mandatory.cpp:119)
==387977== 
==387977== Invalid read of size 1
==387977==    at 0x407595: ft_strjoin (get_next_line_utils.c:68)
==387977==    by 0x40738B: get_next_line (get_next_line.c:48)
==387977==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387977==    by 0x406A2D: main (mandatory.cpp:119)
==387977==  Address 0x4de68ba is 42 bytes inside a block of size 219 free'd
==387977==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387977==    by 0x4076F9: f_search_bn (get_next_line_utils.c:119)
==387977==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387977==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387977==    by 0x406A1B: main (mandatory.cpp:119)
==387977==  Block was alloc'd at
==387977==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387977==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==387977==    by 0x40738B: get_next_line (get_next_line.c:48)
==387977==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387977==    by 0x406A1B: main (mandatory.cpp:119)
==387977== 
==387977== Invalid read of size 1
==387977==    at 0x407578: ft_strjoin (get_next_line_utils.c:70)
==387977==    by 0x40738B: get_next_line (get_next_line.c:48)
==387977==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387977==    by 0x406A2D: main (mandatory.cpp:119)
==387977==  Address 0x4de68ba is 42 bytes inside a block of size 219 free'd
==387977==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387977==    by 0x4076F9: f_search_bn (get_next_line_utils.c:119)
==387977==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387977==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387977==    by 0x406A1B: main (mandatory.cpp:119)
==387977==  Block was alloc'd at
==387977==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387977==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==387977==    by 0x40738B: get_next_line (get_next_line.c:48)
==387977==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387977==    by 0x406A1B: main (mandatory.cpp:119)
==387977== 
==387977== Invalid read of size 1
==387977==    at 0x40771B: f_del_front_bn (get_next_line_utils.c:163)
==387977==    by 0x4073CD: get_next_line (get_next_line.c:52)
==387977==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387977==    by 0x406A2D: main (mandatory.cpp:119)
==387977==  Address 0x4de6a20 is 0 bytes inside a block of size 177 free'd
==387977==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387977==    by 0x4076F9: f_search_bn (get_next_line_utils.c:119)
==387977==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387977==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387977==    by 0x406A2D: main (mandatory.cpp:119)
==387977==  Block was alloc'd at
==387977==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387977==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==387977==    by 0x40738B: get_next_line (get_next_line.c:48)
==387977==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387977==    by 0x406A2D: main (mandatory.cpp:119)
==387977== 
==387977== Invalid free() / delete / delete[] / realloc()
==387977==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387977==    by 0x4073E0: get_next_line (get_next_line.c:53)
==387977==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387977==    by 0x406A2D: main (mandatory.cpp:119)
==387977==  Address 0x5b5b040 is 0 bytes inside a block of size 10,000,001 free'd
==387977==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387977==    by 0x407608: ft_strjoin (get_next_line_utils.c:82)
==387977==    by 0x40738B: get_next_line (get_next_line.c:48)
==387977==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387977==    by 0x406A2D: main (mandatory.cpp:119)
==387977==  Block was alloc'd at
==387977==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387977==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387977==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387977==    by 0x406A2D: main (mandatory.cpp:119)
==387977== 
==387977== Invalid read of size 1
==387977==    at 0x407595: ft_strjoin (get_next_line_utils.c:68)
==387977==    by 0x40738B: get_next_line (get_next_line.c:48)
==387977==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387977==    by 0x406A3F: main (mandatory.cpp:119)
==387977==  Address 0x4de6a21 is 1 bytes inside a block of size 177 free'd
==387977==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387977==    by 0x4076F9: f_search_bn (get_next_line_utils.c:119)
==387977==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387977==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387977==    by 0x406A2D: main (mandatory.cpp:119)
==387977==  Block was alloc'd at
==387977==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387977==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==387977==    by 0x40738B: get_next_line (get_next_line.c:48)
==387977==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387977==    by 0x406A2D: main (mandatory.cpp:119)
==387977== 
==387977== Invalid read of size 1
==387977==    at 0x407578: ft_strjoin (get_next_line_utils.c:70)
==387977==    by 0x40738B: get_next_line (get_next_line.c:48)
==387977==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387977==    by 0x406A3F: main (mandatory.cpp:119)
==387977==  Address 0x4de6a21 is 1 bytes inside a block of size 177 free'd
==387977==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387977==    by 0x4076F9: f_search_bn (get_next_line_utils.c:119)
==387977==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387977==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387977==    by 0x406A2D: main (mandatory.cpp:119)
==387977==  Block was alloc'd at
==387977==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387977==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==387977==    by 0x40738B: get_next_line (get_next_line.c:48)
==387977==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387977==    by 0x406A2D: main (mandatory.cpp:119)
==387977== 
==387977== Invalid read of size 1
==387977==    at 0x40771B: f_del_front_bn (get_next_line_utils.c:163)
==387977==    by 0x4073CD: get_next_line (get_next_line.c:52)
==387977==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387977==    by 0x406A3F: main (mandatory.cpp:119)
==387977==  Address 0x4de6b70 is 0 bytes inside a block of size 176 free'd
==387977==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387977==    by 0x4076F9: f_search_bn (get_next_line_utils.c:119)
==387977==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387977==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387977==    by 0x406A3F: main (mandatory.cpp:119)
==387977==  Block was alloc'd at
==387977==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387977==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==387977==    by 0x40738B: get_next_line (get_next_line.c:48)
==387977==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387977==    by 0x406A3F: main (mandatory.cpp:119)
==387977== 
==387977== Invalid free() / delete / delete[] / realloc()
==387977==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387977==    by 0x4073E0: get_next_line (get_next_line.c:53)
==387977==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387977==    by 0x406A3F: main (mandatory.cpp:119)
==387977==  Address 0x51d1040 is 0 bytes inside a block of size 10,000,001 free'd
==387977==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387977==    by 0x407608: ft_strjoin (get_next_line_utils.c:82)
==387977==    by 0x40738B: get_next_line (get_next_line.c:48)
==387977==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387977==    by 0x406A3F: main (mandatory.cpp:119)
==387977==  Block was alloc'd at
==387977==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387977==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387977==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387977==    by 0x406A3F: main (mandatory.cpp:119)
==387977== 
==387977== Invalid read of size 1
==387977==    at 0x407595: ft_strjoin (get_next_line_utils.c:68)
==387977==    by 0x40738B: get_next_line (get_next_line.c:48)
==387977==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387977==    by 0x406A51: main (mandatory.cpp:119)
==387977==  Address 0x4de6b9b is 43 bytes inside a block of size 176 free'd
==387977==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387977==    by 0x4076F9: f_search_bn (get_next_line_utils.c:119)
==387977==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387977==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387977==    by 0x406A3F: main (mandatory.cpp:119)
==387977==  Block was alloc'd at
==387977==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387977==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==387977==    by 0x40738B: get_next_line (get_next_line.c:48)
==387977==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387977==    by 0x406A3F: main (mandatory.cpp:119)
==387977== 
==387977== Invalid read of size 1
==387977==    at 0x407578: ft_strjoin (get_next_line_utils.c:70)
==387977==    by 0x40738B: get_next_line (get_next_line.c:48)
==387977==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387977==    by 0x406A51: main (mandatory.cpp:119)
==387977==  Address 0x4de6b9b is 43 bytes inside a block of size 176 free'd
==387977==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387977==    by 0x4076F9: f_search_bn (get_next_line_utils.c:119)
==387977==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387977==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387977==    by 0x406A3F: main (mandatory.cpp:119)
==387977==  Block was alloc'd at
==387977==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387977==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==387977==    by 0x40738B: get_next_line (get_next_line.c:48)
==387977==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387977==    by 0x406A3F: main (mandatory.cpp:119)
==387977== 
==387977== Invalid read of size 1
==387977==    at 0x40771B: f_del_front_bn (get_next_line_utils.c:163)
==387977==    by 0x4073CD: get_next_line (get_next_line.c:52)
==387977==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387977==    by 0x406A51: main (mandatory.cpp:119)
==387977==  Address 0x4de6cd0 is 0 bytes inside a block of size 133 free'd
==387977==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387977==    by 0x4076F9: f_search_bn (get_next_line_utils.c:119)
==387977==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387977==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387977==    by 0x406A51: main (mandatory.cpp:119)
==387977==  Block was alloc'd at
==387977==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387977==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==387977==    by 0x40738B: get_next_line (get_next_line.c:48)
==387977==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387977==    by 0x406A51: main (mandatory.cpp:119)
==387977== 
==387977== Invalid free() / delete / delete[] / realloc()
==387977==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387977==    by 0x4073E0: get_next_line (get_next_line.c:53)
==387977==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387977==    by 0x406A51: main (mandatory.cpp:119)
==387977==  Address 0x5b5b040 is 0 bytes inside a block of size 10,000,001 free'd
==387977==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387977==    by 0x407608: ft_strjoin (get_next_line_utils.c:82)
==387977==    by 0x40738B: get_next_line (get_next_line.c:48)
==387977==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387977==    by 0x406A51: main (mandatory.cpp:119)
==387977==  Block was alloc'd at
==387977==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387977==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387977==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387977==    by 0x406A51: main (mandatory.cpp:119)
==387977== 
==387977== Invalid read of size 1
==387977==    at 0x407595: ft_strjoin (get_next_line_utils.c:68)
==387977==    by 0x40738B: get_next_line (get_next_line.c:48)
==387977==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387977==    by 0x406A63: main (mandatory.cpp:119)
==387977==  Address 0x4de6cd1 is 1 bytes inside a block of size 133 free'd
==387977==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387977==    by 0x4076F9: f_search_bn (get_next_line_utils.c:119)
==387977==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387977==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387977==    by 0x406A51: main (mandatory.cpp:119)
==387977==  Block was alloc'd at
==387977==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387977==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==387977==    by 0x40738B: get_next_line (get_next_line.c:48)
==387977==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387977==    by 0x406A51: main (mandatory.cpp:119)
==387977== 
==387977== Invalid read of size 1
==387977==    at 0x407578: ft_strjoin (get_next_line_utils.c:70)
==387977==    by 0x40738B: get_next_line (get_next_line.c:48)
==387977==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387977==    by 0x406A63: main (mandatory.cpp:119)
==387977==  Address 0x4de6cd1 is 1 bytes inside a block of size 133 free'd
==387977==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387977==    by 0x4076F9: f_search_bn (get_next_line_utils.c:119)
==387977==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387977==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387977==    by 0x406A51: main (mandatory.cpp:119)
==387977==  Block was alloc'd at
==387977==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387977==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==387977==    by 0x40738B: get_next_line (get_next_line.c:48)
==387977==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387977==    by 0x406A51: main (mandatory.cpp:119)
==387977== 
==387977== Invalid read of size 1
==387977==    at 0x40771B: f_del_front_bn (get_next_line_utils.c:163)
==387977==    by 0x4073CD: get_next_line (get_next_line.c:52)
==387977==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387977==    by 0x406A63: main (mandatory.cpp:119)
==387977==  Address 0x4de6df0 is 0 bytes inside a block of size 132 free'd
==387977==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387977==    by 0x4076F9: f_search_bn (get_next_line_utils.c:119)
==387977==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387977==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387977==    by 0x406A63: main (mandatory.cpp:119)
==387977==  Block was alloc'd at
==387977==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387977==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==387977==    by 0x40738B: get_next_line (get_next_line.c:48)
==387977==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387977==    by 0x406A63: main (mandatory.cpp:119)
==387977== 
==387977== Invalid free() / delete / delete[] / realloc()
==387977==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387977==    by 0x4073E0: get_next_line (get_next_line.c:53)
==387977==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387977==    by 0x406A63: main (mandatory.cpp:119)
==387977==  Address 0x51d1040 is 0 bytes inside a block of size 10,000,001 free'd
==387977==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387977==    by 0x407608: ft_strjoin (get_next_line_utils.c:82)
==387977==    by 0x40738B: get_next_line (get_next_line.c:48)
==387977==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387977==    by 0x406A63: main (mandatory.cpp:119)
==387977==  Block was alloc'd at
==387977==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387977==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387977==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387977==    by 0x406A63: main (mandatory.cpp:119)
==387977== 
==387977== Invalid read of size 1
==387977==    at 0x407595: ft_strjoin (get_next_line_utils.c:68)
==387977==    by 0x40738B: get_next_line (get_next_line.c:48)
==387977==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387977==    by 0x406A75: main (mandatory.cpp:119)
==387977==  Address 0x4de6e1c is 44 bytes inside a block of size 132 free'd
==387977==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387977==    by 0x4076F9: f_search_bn (get_next_line_utils.c:119)
==387977==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387977==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387977==    by 0x406A63: main (mandatory.cpp:119)
==387977==  Block was alloc'd at
==387977==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387977==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==387977==    by 0x40738B: get_next_line (get_next_line.c:48)
==387977==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387977==    by 0x406A63: main (mandatory.cpp:119)
==387977== 
==387977== Invalid read of size 1
==387977==    at 0x407578: ft_strjoin (get_next_line_utils.c:70)
==387977==    by 0x40738B: get_next_line (get_next_line.c:48)
==387977==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387977==    by 0x406A75: main (mandatory.cpp:119)
==387977==  Address 0x4de6e1c is 44 bytes inside a block of size 132 free'd
==387977==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387977==    by 0x4076F9: f_search_bn (get_next_line_utils.c:119)
==387977==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387977==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387977==    by 0x406A63: main (mandatory.cpp:119)
==387977==  Block was alloc'd at
==387977==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387977==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==387977==    by 0x40738B: get_next_line (get_next_line.c:48)
==387977==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387977==    by 0x406A63: main (mandatory.cpp:119)
==387977== 
==387977== Invalid read of size 1
==387977==    at 0x40771B: f_del_front_bn (get_next_line_utils.c:163)
==387977==    by 0x4073CD: get_next_line (get_next_line.c:52)
==387977==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387977==    by 0x406A75: main (mandatory.cpp:119)
==387977==  Address 0x4de6f30 is 0 bytes inside a block of size 88 free'd
==387977==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387977==    by 0x4076F9: f_search_bn (get_next_line_utils.c:119)
==387977==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387977==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387977==    by 0x406A75: main (mandatory.cpp:119)
==387977==  Block was alloc'd at
==387977==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387977==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==387977==    by 0x40738B: get_next_line (get_next_line.c:48)
==387977==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387977==    by 0x406A75: main (mandatory.cpp:119)
==387977== 
==387977== Invalid free() / delete / delete[] / realloc()
==387977==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387977==    by 0x4073E0: get_next_line (get_next_line.c:53)
==387977==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387977==    by 0x406A75: main (mandatory.cpp:119)
==387977==  Address 0x5b5b040 is 0 bytes inside a block of size 10,000,001 free'd
==387977==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387977==    by 0x407608: ft_strjoin (get_next_line_utils.c:82)
==387977==    by 0x40738B: get_next_line (get_next_line.c:48)
==387977==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387977==    by 0x406A75: main (mandatory.cpp:119)
==387977==  Block was alloc'd at
==387977==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387977==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387977==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387977==    by 0x406A75: main (mandatory.cpp:119)
==387977== 
==387977== Invalid read of size 1
==387977==    at 0x407595: ft_strjoin (get_next_line_utils.c:68)
==387977==    by 0x40738B: get_next_line (get_next_line.c:48)
==387977==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387977==    by 0x406A87: main (mandatory.cpp:119)
==387977==  Address 0x4de6f31 is 1 bytes inside a block of size 88 free'd
==387977==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387977==    by 0x4076F9: f_search_bn (get_next_line_utils.c:119)
==387977==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387977==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387977==    by 0x406A75: main (mandatory.cpp:119)
==387977==  Block was alloc'd at
==387977==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387977==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==387977==    by 0x40738B: get_next_line (get_next_line.c:48)
==387977==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387977==    by 0x406A75: main (mandatory.cpp:119)
==387977== 
==387977== Invalid read of size 1
==387977==    at 0x407578: ft_strjoin (get_next_line_utils.c:70)
==387977==    by 0x40738B: get_next_line (get_next_line.c:48)
==387977==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387977==    by 0x406A87: main (mandatory.cpp:119)
==387977==  Address 0x4de6f31 is 1 bytes inside a block of size 88 free'd
==387977==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387977==    by 0x4076F9: f_search_bn (get_next_line_utils.c:119)
==387977==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387977==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387977==    by 0x406A75: main (mandatory.cpp:119)
==387977==  Block was alloc'd at
==387977==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387977==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==387977==    by 0x40738B: get_next_line (get_next_line.c:48)
==387977==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387977==    by 0x406A75: main (mandatory.cpp:119)
==387977== 
==387977== Invalid read of size 1
==387977==    at 0x40771B: f_del_front_bn (get_next_line_utils.c:163)
==387977==    by 0x4073CD: get_next_line (get_next_line.c:52)
==387977==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387977==    by 0x406A87: main (mandatory.cpp:119)
==387977==  Address 0x4de7020 is 0 bytes inside a block of size 87 free'd
==387977==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387977==    by 0x4076F9: f_search_bn (get_next_line_utils.c:119)
==387977==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387977==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387977==    by 0x406A87: main (mandatory.cpp:119)
==387977==  Block was alloc'd at
==387977==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387977==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==387977==    by 0x40738B: get_next_line (get_next_line.c:48)
==387977==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387977==    by 0x406A87: main (mandatory.cpp:119)
==387977== 
==387977== Invalid free() / delete / delete[] / realloc()
==387977==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387977==    by 0x4073E0: get_next_line (get_next_line.c:53)
==387977==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387977==    by 0x406A87: main (mandatory.cpp:119)
==387977==  Address 0x51d1040 is 0 bytes inside a block of size 10,000,001 free'd
==387977==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387977==    by 0x407608: ft_strjoin (get_next_line_utils.c:82)
==387977==    by 0x40738B: get_next_line (get_next_line.c:48)
==387977==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387977==    by 0x406A87: main (mandatory.cpp:119)
==387977==  Block was alloc'd at
==387977==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387977==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387977==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387977==    by 0x406A87: main (mandatory.cpp:119)
==387977== 
==387977== Invalid read of size 1
==387977==    at 0x407595: ft_strjoin (get_next_line_utils.c:68)
==387977==    by 0x40738B: get_next_line (get_next_line.c:48)
==387977==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387977==    by 0x406A99: main (mandatory.cpp:119)
==387977==  Address 0x4de704b is 43 bytes inside a block of size 87 free'd
==387977==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387977==    by 0x4076F9: f_search_bn (get_next_line_utils.c:119)
==387977==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387977==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387977==    by 0x406A87: main (mandatory.cpp:119)
==387977==  Block was alloc'd at
==387977==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387977==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==387977==    by 0x40738B: get_next_line (get_next_line.c:48)
==387977==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387977==    by 0x406A87: main (mandatory.cpp:119)
==387977== 
==387977== Invalid read of size 1
==387977==    at 0x407578: ft_strjoin (get_next_line_utils.c:70)
==387977==    by 0x40738B: get_next_line (get_next_line.c:48)
==387977==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387977==    by 0x406A99: main (mandatory.cpp:119)
==387977==  Address 0x4de704b is 43 bytes inside a block of size 87 free'd
==387977==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387977==    by 0x4076F9: f_search_bn (get_next_line_utils.c:119)
==387977==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387977==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387977==    by 0x406A87: main (mandatory.cpp:119)
==387977==  Block was alloc'd at
==387977==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387977==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==387977==    by 0x40738B: get_next_line (get_next_line.c:48)
==387977==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387977==    by 0x406A87: main (mandatory.cpp:119)
==387977== 
==387977== Invalid read of size 1
==387977==    at 0x40771B: f_del_front_bn (get_next_line_utils.c:163)
==387977==    by 0x4073CD: get_next_line (get_next_line.c:52)
==387977==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387977==    by 0x406A99: main (mandatory.cpp:119)
==387977==  Address 0x4de7130 is 0 bytes inside a block of size 44 free'd
==387977==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387977==    by 0x4076F9: f_search_bn (get_next_line_utils.c:119)
==387977==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387977==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387977==    by 0x406A99: main (mandatory.cpp:119)
==387977==  Block was alloc'd at
==387977==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387977==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==387977==    by 0x40738B: get_next_line (get_next_line.c:48)
==387977==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387977==    by 0x406A99: main (mandatory.cpp:119)
==387977== 
==387977== Invalid free() / delete / delete[] / realloc()
==387977==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387977==    by 0x4073E0: get_next_line (get_next_line.c:53)
==387977==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387977==    by 0x406A99: main (mandatory.cpp:119)
==387977==  Address 0x5b5b040 is 0 bytes inside a block of size 10,000,001 free'd
==387977==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387977==    by 0x407608: ft_strjoin (get_next_line_utils.c:82)
==387977==    by 0x40738B: get_next_line (get_next_line.c:48)
==387977==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387977==    by 0x406A99: main (mandatory.cpp:119)
==387977==  Block was alloc'd at
==387977==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387977==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387977==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387977==    by 0x406A99: main (mandatory.cpp:119)
==387977== 
==387977== Invalid read of size 1
==387977==    at 0x407595: ft_strjoin (get_next_line_utils.c:68)
==387977==    by 0x40738B: get_next_line (get_next_line.c:48)
==387977==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387977==    by 0x406AAB: main (mandatory.cpp:119)
==387977==  Address 0x4de7131 is 1 bytes inside a block of size 44 free'd
==387977==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387977==    by 0x4076F9: f_search_bn (get_next_line_utils.c:119)
==387977==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387977==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387977==    by 0x406A99: main (mandatory.cpp:119)
==387977==  Block was alloc'd at
==387977==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387977==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==387977==    by 0x40738B: get_next_line (get_next_line.c:48)
==387977==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387977==    by 0x406A99: main (mandatory.cpp:119)
==387977== 
==387977== Invalid read of size 1
==387977==    at 0x407578: ft_strjoin (get_next_line_utils.c:70)
==387977==    by 0x40738B: get_next_line (get_next_line.c:48)
==387977==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387977==    by 0x406AAB: main (mandatory.cpp:119)
==387977==  Address 0x4de7131 is 1 bytes inside a block of size 44 free'd
==387977==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387977==    by 0x4076F9: f_search_bn (get_next_line_utils.c:119)
==387977==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387977==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387977==    by 0x406A99: main (mandatory.cpp:119)
==387977==  Block was alloc'd at
==387977==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387977==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==387977==    by 0x40738B: get_next_line (get_next_line.c:48)
==387977==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387977==    by 0x406A99: main (mandatory.cpp:119)
==387977== 
==387977== Invalid read of size 1
==387977==    at 0x40771B: f_del_front_bn (get_next_line_utils.c:163)
==387977==    by 0x4073CD: get_next_line (get_next_line.c:52)
==387977==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387977==    by 0x406AAB: main (mandatory.cpp:119)
==387977==  Address 0x4de71f0 is 0 bytes inside a block of size 43 free'd
==387977==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387977==    by 0x4076F9: f_search_bn (get_next_line_utils.c:119)
==387977==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387977==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387977==    by 0x406AAB: main (mandatory.cpp:119)
==387977==  Block was alloc'd at
==387977==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387977==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==387977==    by 0x40738B: get_next_line (get_next_line.c:48)
==387977==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387977==    by 0x406AAB: main (mandatory.cpp:119)
==387977== 
==387977== Invalid free() / delete / delete[] / realloc()
==387977==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387977==    by 0x4073E0: get_next_line (get_next_line.c:53)
==387977==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387977==    by 0x406AAB: main (mandatory.cpp:119)
==387977==  Address 0x51d1040 is 0 bytes inside a block of size 10,000,001 free'd
==387977==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387977==    by 0x407608: ft_strjoin (get_next_line_utils.c:82)
==387977==    by 0x40738B: get_next_line (get_next_line.c:48)
==387977==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387977==    by 0x406AAB: main (mandatory.cpp:119)
==387977==  Block was alloc'd at
==387977==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387977==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387977==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387977==    by 0x406AAB: main (mandatory.cpp:119)
==387977== 
==387977== Invalid read of size 1
==387977==    at 0x407595: ft_strjoin (get_next_line_utils.c:68)
==387977==    by 0x40738B: get_next_line (get_next_line.c:48)
==387977==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387977==    by 0x406AB7: main (mandatory.cpp:119)
==387977==  Address 0x4de721a is 42 bytes inside a block of size 43 free'd
==387977==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387977==    by 0x4076F9: f_search_bn (get_next_line_utils.c:119)
==387977==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387977==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387977==    by 0x406AAB: main (mandatory.cpp:119)
==387977==  Block was alloc'd at
==387977==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387977==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==387977==    by 0x40738B: get_next_line (get_next_line.c:48)
==387977==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387977==    by 0x406AAB: main (mandatory.cpp:119)
==387977== 
==387977== 1 bytes in 1 blocks are definitely lost in loss record 1 of 1
==387977==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387977==    by 0x407364: get_next_line (get_next_line.c:43)
==387977==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387977==    by 0x406A1B: main (mandatory.cpp:119)
==387977== 
==387980== 1 bytes in 1 blocks are definitely lost in loss record 1 of 2
==387980==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387980==    by 0x407364: get_next_line (get_next_line.c:43)
==387980==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387980==    by 0x406CD7: main (mandatory.cpp:132)
==387980== 
==387980== 10,001 bytes in 1 blocks are definitely lost in loss record 2 of 2
==387980==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387980==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==387980==    by 0x40738B: get_next_line (get_next_line.c:48)
==387980==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387980==    by 0x406CD7: main (mandatory.cpp:132)
==387980== 
==387981== Invalid read of size 1
==387981==    at 0x40771B: f_del_front_bn (get_next_line_utils.c:163)
==387981==    by 0x4073CD: get_next_line (get_next_line.c:52)
==387981==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387981==    by 0x406F03: main (mandatory.cpp:136)
==387981==  Address 0x4de6eb0 is 0 bytes inside a block of size 10,002 free'd
==387981==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387981==    by 0x4076F9: f_search_bn (get_next_line_utils.c:119)
==387981==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387981==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387981==    by 0x406F03: main (mandatory.cpp:136)
==387981==  Block was alloc'd at
==387981==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387981==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==387981==    by 0x40738B: get_next_line (get_next_line.c:48)
==387981==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387981==    by 0x406F03: main (mandatory.cpp:136)
==387981== 
==387981== Invalid free() / delete / delete[] / realloc()
==387981==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387981==    by 0x4073E0: get_next_line (get_next_line.c:53)
==387981==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387981==    by 0x406F03: main (mandatory.cpp:136)
==387981==  Address 0x51d1040 is 0 bytes inside a block of size 10,000,001 free'd
==387981==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387981==    by 0x407608: ft_strjoin (get_next_line_utils.c:82)
==387981==    by 0x40738B: get_next_line (get_next_line.c:48)
==387981==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387981==    by 0x406F03: main (mandatory.cpp:136)
==387981==  Block was alloc'd at
==387981==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387981==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387981==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387981==    by 0x406F03: main (mandatory.cpp:136)
==387981== 
==387981== Invalid read of size 1
==387981==    at 0x4074EE: ft_strlen (get_next_line_utils.c:43)
==387981==    by 0x40751B: ft_strjoin (get_next_line_utils.c:59)
==387981==    by 0x40738B: get_next_line (get_next_line.c:48)
==387981==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387981==    by 0x406F0F: main (mandatory.cpp:136)
==387981==  Address 0x4de95c1 is 10,001 bytes inside a block of size 10,002 free'd
==387981==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387981==    by 0x4076F9: f_search_bn (get_next_line_utils.c:119)
==387981==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387981==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387981==    by 0x406F03: main (mandatory.cpp:136)
==387981==  Block was alloc'd at
==387981==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387981==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==387981==    by 0x40738B: get_next_line (get_next_line.c:48)
==387981==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387981==    by 0x406F03: main (mandatory.cpp:136)
==387981== 
==387981== Invalid read of size 1
==387981==    at 0x407595: ft_strjoin (get_next_line_utils.c:68)
==387981==    by 0x40738B: get_next_line (get_next_line.c:48)
==387981==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387981==    by 0x406F0F: main (mandatory.cpp:136)
==387981==  Address 0x4de95c1 is 10,001 bytes inside a block of size 10,002 free'd
==387981==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387981==    by 0x4076F9: f_search_bn (get_next_line_utils.c:119)
==387981==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387981==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387981==    by 0x406F03: main (mandatory.cpp:136)
==387981==  Block was alloc'd at
==387981==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387981==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==387981==    by 0x40738B: get_next_line (get_next_line.c:48)
==387981==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387981==    by 0x406F03: main (mandatory.cpp:136)
==387981== 
==387981== 1 bytes in 1 blocks are definitely lost in loss record 1 of 1
==387981==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387981==    by 0x407364: get_next_line (get_next_line.c:43)
==387981==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387981==    by 0x406F03: main (mandatory.cpp:136)
==387981== 
==387984== Invalid read of size 1
==387984==    at 0x40771B: f_del_front_bn (get_next_line_utils.c:163)
==387984==    by 0x4073CD: get_next_line (get_next_line.c:52)
==387984==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387984==    by 0x40712E: main (mandatory.cpp:141)
==387984==  Address 0x4de6eb0 is 0 bytes inside a block of size 219 free'd
==387984==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387984==    by 0x4076F9: f_search_bn (get_next_line_utils.c:119)
==387984==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387984==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387984==    by 0x40712E: main (mandatory.cpp:141)
==387984==  Block was alloc'd at
==387984==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387984==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==387984==    by 0x40738B: get_next_line (get_next_line.c:48)
==387984==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387984==    by 0x40712E: main (mandatory.cpp:141)
==387984== 
==387984== Invalid free() / delete / delete[] / realloc()
==387984==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387984==    by 0x4073E0: get_next_line (get_next_line.c:53)
==387984==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387984==    by 0x40712E: main (mandatory.cpp:141)
==387984==  Address 0x51d1040 is 0 bytes inside a block of size 10,000,001 free'd
==387984==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387984==    by 0x407608: ft_strjoin (get_next_line_utils.c:82)
==387984==    by 0x40738B: get_next_line (get_next_line.c:48)
==387984==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387984==    by 0x40712E: main (mandatory.cpp:141)
==387984==  Block was alloc'd at
==387984==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387984==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387984==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387984==    by 0x40712E: main (mandatory.cpp:141)
==387984== 
==387984== Invalid read of size 1
==387984==    at 0x4074EE: ft_strlen (get_next_line_utils.c:43)
==387984==    by 0x40751B: ft_strjoin (get_next_line_utils.c:59)
==387984==    by 0x40738B: get_next_line (get_next_line.c:48)
==387984==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387984==    by 0x40713F: main (mandatory.cpp:141)
==387984==  Address 0x4de6eda is 42 bytes inside a block of size 219 free'd
==387984==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387984==    by 0x4076F9: f_search_bn (get_next_line_utils.c:119)
==387984==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387984==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387984==    by 0x40712E: main (mandatory.cpp:141)
==387984==  Block was alloc'd at
==387984==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387984==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==387984==    by 0x40738B: get_next_line (get_next_line.c:48)
==387984==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387984==    by 0x40712E: main (mandatory.cpp:141)
==387984== 
==387984== Invalid read of size 1
==387984==    at 0x407595: ft_strjoin (get_next_line_utils.c:68)
==387984==    by 0x40738B: get_next_line (get_next_line.c:48)
==387984==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387984==    by 0x40713F: main (mandatory.cpp:141)
==387984==  Address 0x4de6eda is 42 bytes inside a block of size 219 free'd
==387984==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387984==    by 0x4076F9: f_search_bn (get_next_line_utils.c:119)
==387984==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387984==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387984==    by 0x40712E: main (mandatory.cpp:141)
==387984==  Block was alloc'd at
==387984==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387984==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==387984==    by 0x40738B: get_next_line (get_next_line.c:48)
==387984==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387984==    by 0x40712E: main (mandatory.cpp:141)
==387984== 
==387984== Invalid read of size 1
==387984==    at 0x407578: ft_strjoin (get_next_line_utils.c:70)
==387984==    by 0x40738B: get_next_line (get_next_line.c:48)
==387984==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387984==    by 0x40713F: main (mandatory.cpp:141)
==387984==  Address 0x4de6eda is 42 bytes inside a block of size 219 free'd
==387984==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387984==    by 0x4076F9: f_search_bn (get_next_line_utils.c:119)
==387984==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387984==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387984==    by 0x40712E: main (mandatory.cpp:141)
==387984==  Block was alloc'd at
==387984==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387984==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==387984==    by 0x40738B: get_next_line (get_next_line.c:48)
==387984==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387984==    by 0x40712E: main (mandatory.cpp:141)
==387984== 
==387984== Invalid read of size 1
==387984==    at 0x40771B: f_del_front_bn (get_next_line_utils.c:163)
==387984==    by 0x4073CD: get_next_line (get_next_line.c:52)
==387984==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387984==    by 0x40713F: main (mandatory.cpp:141)
==387984==  Address 0x4de7040 is 0 bytes inside a block of size 177 free'd
==387984==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387984==    by 0x4076F9: f_search_bn (get_next_line_utils.c:119)
==387984==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387984==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387984==    by 0x40713F: main (mandatory.cpp:141)
==387984==  Block was alloc'd at
==387984==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387984==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==387984==    by 0x40738B: get_next_line (get_next_line.c:48)
==387984==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387984==    by 0x40713F: main (mandatory.cpp:141)
==387984== 
==387984== Invalid free() / delete / delete[] / realloc()
==387984==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387984==    by 0x4073E0: get_next_line (get_next_line.c:53)
==387984==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387984==    by 0x40713F: main (mandatory.cpp:141)
==387984==  Address 0x5b5b040 is 0 bytes inside a block of size 10,000,001 free'd
==387984==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387984==    by 0x407608: ft_strjoin (get_next_line_utils.c:82)
==387984==    by 0x40738B: get_next_line (get_next_line.c:48)
==387984==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387984==    by 0x40713F: main (mandatory.cpp:141)
==387984==  Block was alloc'd at
==387984==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387984==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387984==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387984==    by 0x40713F: main (mandatory.cpp:141)
==387984== 
==387984== Invalid read of size 1
==387984==    at 0x407595: ft_strjoin (get_next_line_utils.c:68)
==387984==    by 0x40738B: get_next_line (get_next_line.c:48)
==387984==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387984==    by 0x407150: main (mandatory.cpp:141)
==387984==  Address 0x4de7041 is 1 bytes inside a block of size 177 free'd
==387984==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387984==    by 0x4076F9: f_search_bn (get_next_line_utils.c:119)
==387984==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387984==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387984==    by 0x40713F: main (mandatory.cpp:141)
==387984==  Block was alloc'd at
==387984==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387984==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==387984==    by 0x40738B: get_next_line (get_next_line.c:48)
==387984==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387984==    by 0x40713F: main (mandatory.cpp:141)
==387984== 
==387984== Invalid read of size 1
==387984==    at 0x407578: ft_strjoin (get_next_line_utils.c:70)
==387984==    by 0x40738B: get_next_line (get_next_line.c:48)
==387984==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387984==    by 0x407150: main (mandatory.cpp:141)
==387984==  Address 0x4de7041 is 1 bytes inside a block of size 177 free'd
==387984==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387984==    by 0x4076F9: f_search_bn (get_next_line_utils.c:119)
==387984==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387984==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387984==    by 0x40713F: main (mandatory.cpp:141)
==387984==  Block was alloc'd at
==387984==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387984==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==387984==    by 0x40738B: get_next_line (get_next_line.c:48)
==387984==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387984==    by 0x40713F: main (mandatory.cpp:141)
==387984== 
==387984== Invalid read of size 1
==387984==    at 0x40771B: f_del_front_bn (get_next_line_utils.c:163)
==387984==    by 0x4073CD: get_next_line (get_next_line.c:52)
==387984==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387984==    by 0x407150: main (mandatory.cpp:141)
==387984==  Address 0x4de7190 is 0 bytes inside a block of size 176 free'd
==387984==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387984==    by 0x4076F9: f_search_bn (get_next_line_utils.c:119)
==387984==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387984==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387984==    by 0x407150: main (mandatory.cpp:141)
==387984==  Block was alloc'd at
==387984==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387984==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==387984==    by 0x40738B: get_next_line (get_next_line.c:48)
==387984==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387984==    by 0x407150: main (mandatory.cpp:141)
==387984== 
==387984== Invalid free() / delete / delete[] / realloc()
==387984==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387984==    by 0x4073E0: get_next_line (get_next_line.c:53)
==387984==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387984==    by 0x407150: main (mandatory.cpp:141)
==387984==  Address 0x51d1040 is 0 bytes inside a block of size 10,000,001 free'd
==387984==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387984==    by 0x407608: ft_strjoin (get_next_line_utils.c:82)
==387984==    by 0x40738B: get_next_line (get_next_line.c:48)
==387984==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387984==    by 0x407150: main (mandatory.cpp:141)
==387984==  Block was alloc'd at
==387984==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387984==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387984==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387984==    by 0x407150: main (mandatory.cpp:141)
==387984== 
==387984== Invalid read of size 1
==387984==    at 0x407595: ft_strjoin (get_next_line_utils.c:68)
==387984==    by 0x40738B: get_next_line (get_next_line.c:48)
==387984==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387984==    by 0x407161: main (mandatory.cpp:141)
==387984==  Address 0x4de71bb is 43 bytes inside a block of size 176 free'd
==387984==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387984==    by 0x4076F9: f_search_bn (get_next_line_utils.c:119)
==387984==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387984==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387984==    by 0x407150: main (mandatory.cpp:141)
==387984==  Block was alloc'd at
==387984==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387984==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==387984==    by 0x40738B: get_next_line (get_next_line.c:48)
==387984==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387984==    by 0x407150: main (mandatory.cpp:141)
==387984== 
==387984== Invalid read of size 1
==387984==    at 0x407578: ft_strjoin (get_next_line_utils.c:70)
==387984==    by 0x40738B: get_next_line (get_next_line.c:48)
==387984==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387984==    by 0x407161: main (mandatory.cpp:141)
==387984==  Address 0x4de71bb is 43 bytes inside a block of size 176 free'd
==387984==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387984==    by 0x4076F9: f_search_bn (get_next_line_utils.c:119)
==387984==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387984==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387984==    by 0x407150: main (mandatory.cpp:141)
==387984==  Block was alloc'd at
==387984==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387984==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==387984==    by 0x40738B: get_next_line (get_next_line.c:48)
==387984==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387984==    by 0x407150: main (mandatory.cpp:141)
==387984== 
==387984== Invalid read of size 1
==387984==    at 0x40771B: f_del_front_bn (get_next_line_utils.c:163)
==387984==    by 0x4073CD: get_next_line (get_next_line.c:52)
==387984==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387984==    by 0x407161: main (mandatory.cpp:141)
==387984==  Address 0x4de72f0 is 0 bytes inside a block of size 133 free'd
==387984==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387984==    by 0x4076F9: f_search_bn (get_next_line_utils.c:119)
==387984==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387984==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387984==    by 0x407161: main (mandatory.cpp:141)
==387984==  Block was alloc'd at
==387984==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387984==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==387984==    by 0x40738B: get_next_line (get_next_line.c:48)
==387984==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387984==    by 0x407161: main (mandatory.cpp:141)
==387984== 
==387984== Invalid free() / delete / delete[] / realloc()
==387984==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387984==    by 0x4073E0: get_next_line (get_next_line.c:53)
==387984==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387984==    by 0x407161: main (mandatory.cpp:141)
==387984==  Address 0x5b5b040 is 0 bytes inside a block of size 10,000,001 free'd
==387984==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387984==    by 0x407608: ft_strjoin (get_next_line_utils.c:82)
==387984==    by 0x40738B: get_next_line (get_next_line.c:48)
==387984==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387984==    by 0x407161: main (mandatory.cpp:141)
==387984==  Block was alloc'd at
==387984==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387984==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387984==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387984==    by 0x407161: main (mandatory.cpp:141)
==387984== 
==387984== Invalid read of size 1
==387984==    at 0x407595: ft_strjoin (get_next_line_utils.c:68)
==387984==    by 0x40738B: get_next_line (get_next_line.c:48)
==387984==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387984==    by 0x407172: main (mandatory.cpp:141)
==387984==  Address 0x4de72f1 is 1 bytes inside a block of size 133 free'd
==387984==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387984==    by 0x4076F9: f_search_bn (get_next_line_utils.c:119)
==387984==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387984==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387984==    by 0x407161: main (mandatory.cpp:141)
==387984==  Block was alloc'd at
==387984==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387984==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==387984==    by 0x40738B: get_next_line (get_next_line.c:48)
==387984==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387984==    by 0x407161: main (mandatory.cpp:141)
==387984== 
==387984== Invalid read of size 1
==387984==    at 0x407578: ft_strjoin (get_next_line_utils.c:70)
==387984==    by 0x40738B: get_next_line (get_next_line.c:48)
==387984==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387984==    by 0x407172: main (mandatory.cpp:141)
==387984==  Address 0x4de72f1 is 1 bytes inside a block of size 133 free'd
==387984==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387984==    by 0x4076F9: f_search_bn (get_next_line_utils.c:119)
==387984==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387984==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387984==    by 0x407161: main (mandatory.cpp:141)
==387984==  Block was alloc'd at
==387984==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387984==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==387984==    by 0x40738B: get_next_line (get_next_line.c:48)
==387984==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387984==    by 0x407161: main (mandatory.cpp:141)
==387984== 
==387984== Invalid read of size 1
==387984==    at 0x40771B: f_del_front_bn (get_next_line_utils.c:163)
==387984==    by 0x4073CD: get_next_line (get_next_line.c:52)
==387984==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387984==    by 0x407172: main (mandatory.cpp:141)
==387984==  Address 0x4de7410 is 0 bytes inside a block of size 132 free'd
==387984==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387984==    by 0x4076F9: f_search_bn (get_next_line_utils.c:119)
==387984==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387984==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387984==    by 0x407172: main (mandatory.cpp:141)
==387984==  Block was alloc'd at
==387984==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387984==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==387984==    by 0x40738B: get_next_line (get_next_line.c:48)
==387984==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387984==    by 0x407172: main (mandatory.cpp:141)
==387984== 
==387984== Invalid free() / delete / delete[] / realloc()
==387984==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387984==    by 0x4073E0: get_next_line (get_next_line.c:53)
==387984==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387984==    by 0x407172: main (mandatory.cpp:141)
==387984==  Address 0x51d1040 is 0 bytes inside a block of size 10,000,001 free'd
==387984==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387984==    by 0x407608: ft_strjoin (get_next_line_utils.c:82)
==387984==    by 0x40738B: get_next_line (get_next_line.c:48)
==387984==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387984==    by 0x407172: main (mandatory.cpp:141)
==387984==  Block was alloc'd at
==387984==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387984==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387984==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387984==    by 0x407172: main (mandatory.cpp:141)
==387984== 
==387984== Invalid read of size 1
==387984==    at 0x407595: ft_strjoin (get_next_line_utils.c:68)
==387984==    by 0x40738B: get_next_line (get_next_line.c:48)
==387984==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387984==    by 0x407183: main (mandatory.cpp:141)
==387984==  Address 0x4de743c is 44 bytes inside a block of size 132 free'd
==387984==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387984==    by 0x4076F9: f_search_bn (get_next_line_utils.c:119)
==387984==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387984==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387984==    by 0x407172: main (mandatory.cpp:141)
==387984==  Block was alloc'd at
==387984==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387984==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==387984==    by 0x40738B: get_next_line (get_next_line.c:48)
==387984==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387984==    by 0x407172: main (mandatory.cpp:141)
==387984== 
==387984== Invalid read of size 1
==387984==    at 0x407578: ft_strjoin (get_next_line_utils.c:70)
==387984==    by 0x40738B: get_next_line (get_next_line.c:48)
==387984==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387984==    by 0x407183: main (mandatory.cpp:141)
==387984==  Address 0x4de743c is 44 bytes inside a block of size 132 free'd
==387984==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387984==    by 0x4076F9: f_search_bn (get_next_line_utils.c:119)
==387984==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387984==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387984==    by 0x407172: main (mandatory.cpp:141)
==387984==  Block was alloc'd at
==387984==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387984==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==387984==    by 0x40738B: get_next_line (get_next_line.c:48)
==387984==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387984==    by 0x407172: main (mandatory.cpp:141)
==387984== 
==387984== Invalid read of size 1
==387984==    at 0x40771B: f_del_front_bn (get_next_line_utils.c:163)
==387984==    by 0x4073CD: get_next_line (get_next_line.c:52)
==387984==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387984==    by 0x407183: main (mandatory.cpp:141)
==387984==  Address 0x4de7550 is 0 bytes inside a block of size 88 free'd
==387984==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387984==    by 0x4076F9: f_search_bn (get_next_line_utils.c:119)
==387984==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387984==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387984==    by 0x407183: main (mandatory.cpp:141)
==387984==  Block was alloc'd at
==387984==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387984==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==387984==    by 0x40738B: get_next_line (get_next_line.c:48)
==387984==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387984==    by 0x407183: main (mandatory.cpp:141)
==387984== 
==387984== Invalid free() / delete / delete[] / realloc()
==387984==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387984==    by 0x4073E0: get_next_line (get_next_line.c:53)
==387984==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387984==    by 0x407183: main (mandatory.cpp:141)
==387984==  Address 0x5b5b040 is 0 bytes inside a block of size 10,000,001 free'd
==387984==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387984==    by 0x407608: ft_strjoin (get_next_line_utils.c:82)
==387984==    by 0x40738B: get_next_line (get_next_line.c:48)
==387984==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387984==    by 0x407183: main (mandatory.cpp:141)
==387984==  Block was alloc'd at
==387984==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387984==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387984==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387984==    by 0x407183: main (mandatory.cpp:141)
==387984== 
==387984== Invalid read of size 1
==387984==    at 0x407595: ft_strjoin (get_next_line_utils.c:68)
==387984==    by 0x40738B: get_next_line (get_next_line.c:48)
==387984==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387984==    by 0x407194: main (mandatory.cpp:141)
==387984==  Address 0x4de7551 is 1 bytes inside a block of size 88 free'd
==387984==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387984==    by 0x4076F9: f_search_bn (get_next_line_utils.c:119)
==387984==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387984==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387984==    by 0x407183: main (mandatory.cpp:141)
==387984==  Block was alloc'd at
==387984==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387984==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==387984==    by 0x40738B: get_next_line (get_next_line.c:48)
==387984==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387984==    by 0x407183: main (mandatory.cpp:141)
==387984== 
==387984== Invalid read of size 1
==387984==    at 0x407578: ft_strjoin (get_next_line_utils.c:70)
==387984==    by 0x40738B: get_next_line (get_next_line.c:48)
==387984==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387984==    by 0x407194: main (mandatory.cpp:141)
==387984==  Address 0x4de7551 is 1 bytes inside a block of size 88 free'd
==387984==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387984==    by 0x4076F9: f_search_bn (get_next_line_utils.c:119)
==387984==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387984==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387984==    by 0x407183: main (mandatory.cpp:141)
==387984==  Block was alloc'd at
==387984==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387984==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==387984==    by 0x40738B: get_next_line (get_next_line.c:48)
==387984==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387984==    by 0x407183: main (mandatory.cpp:141)
==387984== 
==387984== Invalid read of size 1
==387984==    at 0x40771B: f_del_front_bn (get_next_line_utils.c:163)
==387984==    by 0x4073CD: get_next_line (get_next_line.c:52)
==387984==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387984==    by 0x407194: main (mandatory.cpp:141)
==387984==  Address 0x4de7640 is 0 bytes inside a block of size 87 free'd
==387984==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387984==    by 0x4076F9: f_search_bn (get_next_line_utils.c:119)
==387984==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387984==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387984==    by 0x407194: main (mandatory.cpp:141)
==387984==  Block was alloc'd at
==387984==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387984==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==387984==    by 0x40738B: get_next_line (get_next_line.c:48)
==387984==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387984==    by 0x407194: main (mandatory.cpp:141)
==387984== 
==387984== Invalid free() / delete / delete[] / realloc()
==387984==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387984==    by 0x4073E0: get_next_line (get_next_line.c:53)
==387984==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387984==    by 0x407194: main (mandatory.cpp:141)
==387984==  Address 0x51d1040 is 0 bytes inside a block of size 10,000,001 free'd
==387984==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387984==    by 0x407608: ft_strjoin (get_next_line_utils.c:82)
==387984==    by 0x40738B: get_next_line (get_next_line.c:48)
==387984==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387984==    by 0x407194: main (mandatory.cpp:141)
==387984==  Block was alloc'd at
==387984==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387984==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387984==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387984==    by 0x407194: main (mandatory.cpp:141)
==387984== 
==387984== Invalid read of size 1
==387984==    at 0x407595: ft_strjoin (get_next_line_utils.c:68)
==387984==    by 0x40738B: get_next_line (get_next_line.c:48)
==387984==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387984==    by 0x4071A5: main (mandatory.cpp:141)
==387984==  Address 0x4de766b is 43 bytes inside a block of size 87 free'd
==387984==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387984==    by 0x4076F9: f_search_bn (get_next_line_utils.c:119)
==387984==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387984==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387984==    by 0x407194: main (mandatory.cpp:141)
==387984==  Block was alloc'd at
==387984==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387984==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==387984==    by 0x40738B: get_next_line (get_next_line.c:48)
==387984==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387984==    by 0x407194: main (mandatory.cpp:141)
==387984== 
==387984== Invalid read of size 1
==387984==    at 0x407578: ft_strjoin (get_next_line_utils.c:70)
==387984==    by 0x40738B: get_next_line (get_next_line.c:48)
==387984==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387984==    by 0x4071A5: main (mandatory.cpp:141)
==387984==  Address 0x4de766b is 43 bytes inside a block of size 87 free'd
==387984==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387984==    by 0x4076F9: f_search_bn (get_next_line_utils.c:119)
==387984==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387984==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387984==    by 0x407194: main (mandatory.cpp:141)
==387984==  Block was alloc'd at
==387984==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387984==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==387984==    by 0x40738B: get_next_line (get_next_line.c:48)
==387984==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387984==    by 0x407194: main (mandatory.cpp:141)
==387984== 
==387984== Invalid read of size 1
==387984==    at 0x40771B: f_del_front_bn (get_next_line_utils.c:163)
==387984==    by 0x4073CD: get_next_line (get_next_line.c:52)
==387984==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387984==    by 0x4071A5: main (mandatory.cpp:141)
==387984==  Address 0x4de7750 is 0 bytes inside a block of size 44 free'd
==387984==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387984==    by 0x4076F9: f_search_bn (get_next_line_utils.c:119)
==387984==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387984==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387984==    by 0x4071A5: main (mandatory.cpp:141)
==387984==  Block was alloc'd at
==387984==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387984==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==387984==    by 0x40738B: get_next_line (get_next_line.c:48)
==387984==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387984==    by 0x4071A5: main (mandatory.cpp:141)
==387984== 
==387984== Invalid free() / delete / delete[] / realloc()
==387984==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387984==    by 0x4073E0: get_next_line (get_next_line.c:53)
==387984==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387984==    by 0x4071A5: main (mandatory.cpp:141)
==387984==  Address 0x5b5b040 is 0 bytes inside a block of size 10,000,001 free'd
==387984==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387984==    by 0x407608: ft_strjoin (get_next_line_utils.c:82)
==387984==    by 0x40738B: get_next_line (get_next_line.c:48)
==387984==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387984==    by 0x4071A5: main (mandatory.cpp:141)
==387984==  Block was alloc'd at
==387984==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387984==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387984==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387984==    by 0x4071A5: main (mandatory.cpp:141)
==387984== 
==387984== Invalid read of size 1
==387984==    at 0x407595: ft_strjoin (get_next_line_utils.c:68)
==387984==    by 0x40738B: get_next_line (get_next_line.c:48)
==387984==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387984==    by 0x4071B6: main (mandatory.cpp:141)
==387984==  Address 0x4de7751 is 1 bytes inside a block of size 44 free'd
==387984==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387984==    by 0x4076F9: f_search_bn (get_next_line_utils.c:119)
==387984==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387984==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387984==    by 0x4071A5: main (mandatory.cpp:141)
==387984==  Block was alloc'd at
==387984==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387984==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==387984==    by 0x40738B: get_next_line (get_next_line.c:48)
==387984==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387984==    by 0x4071A5: main (mandatory.cpp:141)
==387984== 
==387984== Invalid read of size 1
==387984==    at 0x407578: ft_strjoin (get_next_line_utils.c:70)
==387984==    by 0x40738B: get_next_line (get_next_line.c:48)
==387984==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387984==    by 0x4071B6: main (mandatory.cpp:141)
==387984==  Address 0x4de7751 is 1 bytes inside a block of size 44 free'd
==387984==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387984==    by 0x4076F9: f_search_bn (get_next_line_utils.c:119)
==387984==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387984==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387984==    by 0x4071A5: main (mandatory.cpp:141)
==387984==  Block was alloc'd at
==387984==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387984==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==387984==    by 0x40738B: get_next_line (get_next_line.c:48)
==387984==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387984==    by 0x4071A5: main (mandatory.cpp:141)
==387984== 
==387984== Invalid read of size 1
==387984==    at 0x40771B: f_del_front_bn (get_next_line_utils.c:163)
==387984==    by 0x4073CD: get_next_line (get_next_line.c:52)
==387984==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387984==    by 0x4071B6: main (mandatory.cpp:141)
==387984==  Address 0x4de7810 is 0 bytes inside a block of size 43 free'd
==387984==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387984==    by 0x4076F9: f_search_bn (get_next_line_utils.c:119)
==387984==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387984==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387984==    by 0x4071B6: main (mandatory.cpp:141)
==387984==  Block was alloc'd at
==387984==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387984==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==387984==    by 0x40738B: get_next_line (get_next_line.c:48)
==387984==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387984==    by 0x4071B6: main (mandatory.cpp:141)
==387984== 
==387984== Invalid free() / delete / delete[] / realloc()
==387984==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387984==    by 0x4073E0: get_next_line (get_next_line.c:53)
==387984==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387984==    by 0x4071B6: main (mandatory.cpp:141)
==387984==  Address 0x51d1040 is 0 bytes inside a block of size 10,000,001 free'd
==387984==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387984==    by 0x407608: ft_strjoin (get_next_line_utils.c:82)
==387984==    by 0x40738B: get_next_line (get_next_line.c:48)
==387984==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387984==    by 0x4071B6: main (mandatory.cpp:141)
==387984==  Block was alloc'd at
==387984==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387984==    by 0x4072FC: get_next_line (get_next_line.c:27)
==387984==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387984==    by 0x4071B6: main (mandatory.cpp:141)
==387984== 
==387984== Invalid read of size 1
==387984==    at 0x407595: ft_strjoin (get_next_line_utils.c:68)
==387984==    by 0x40738B: get_next_line (get_next_line.c:48)
==387984==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387984==    by 0x4071C1: main (mandatory.cpp:141)
==387984==  Address 0x4de783a is 42 bytes inside a block of size 43 free'd
==387984==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387984==    by 0x4076F9: f_search_bn (get_next_line_utils.c:119)
==387984==    by 0x4073BA: get_next_line (get_next_line.c:51)
==387984==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387984==    by 0x4071B6: main (mandatory.cpp:141)
==387984==  Block was alloc'd at
==387984==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387984==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==387984==    by 0x40738B: get_next_line (get_next_line.c:48)
==387984==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387984==    by 0x4071B6: main (mandatory.cpp:141)
==387984== 
==387984== 1 bytes in 1 blocks are definitely lost in loss record 1 of 1
==387984==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==387984==    by 0x407364: get_next_line (get_next_line.c:43)
==387984==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==387984==    by 0x40712E: main (mandatory.cpp:141)
==387984== 
