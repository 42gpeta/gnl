==167028== Invalid write of size 1
==167028==    at 0x407387: get_next_line (get_next_line.c:47)
==167028==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167028==    by 0x404BB6: main (mandatory.cpp:25)
==167028==  Address 0x4de429f is 1 bytes before a block of size 2 alloc'd
==167028==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167028==    by 0x4072EC: get_next_line (get_next_line.c:27)
==167028==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167028==    by 0x404BB6: main (mandatory.cpp:25)
==167028== 
==167028== Invalid write of size 1
==167028==    at 0x407387: get_next_line (get_next_line.c:47)
==167028==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167028==    by 0x404BD8: main (mandatory.cpp:25)
==167028==  Address 0x4de42ef is 1 bytes before a block of size 2 alloc'd
==167028==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167028==    by 0x4072EC: get_next_line (get_next_line.c:27)
==167028==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167028==    by 0x404BD8: main (mandatory.cpp:25)
==167028== 
==167028== 2 bytes in 1 blocks are definitely lost in loss record 1 of 2
==167028==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167028==    by 0x4072EC: get_next_line (get_next_line.c:27)
==167028==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167028==    by 0x404BB6: main (mandatory.cpp:25)
==167028== 
==167028== 2 bytes in 1 blocks are definitely lost in loss record 2 of 2
==167028==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167028==    by 0x4072EC: get_next_line (get_next_line.c:27)
==167028==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167028==    by 0x404BD8: main (mandatory.cpp:25)
==167028== 
==167037== Invalid read of size 1
==167037==    at 0x4073AB: get_next_line (get_next_line.c:58)
==167037==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167037==    by 0x404E53: main (mandatory.cpp:31)
==167037==  Address 0x0 is not stack'd, malloc'd or (recently) free'd
==167037== 
==167039== 2 bytes in 1 blocks are definitely lost in loss record 2 of 3
==167039==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167039==    by 0x4075B4: ft_strjoin (get_next_line_utils.c:58)
==167039==    by 0x407470: get_next_line (get_next_line.c:84)
==167039==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167039==    by 0x40507F: main (mandatory.cpp:36)
==167039== 
==167039== 2 bytes in 1 blocks are definitely lost in loss record 3 of 3
==167039==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167039==    by 0x4072EC: get_next_line (get_next_line.c:27)
==167039==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167039==    by 0x40508B: main (mandatory.cpp:36)
==167039== 
==167043== Invalid write of size 1
==167043==    at 0x407417: get_next_line (get_next_line.c:69)
==167043==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167043==    by 0x4052AB: main (mandatory.cpp:41)
==167043==  Address 0x4de6840 is 0 bytes inside a block of size 42 free'd
==167043==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167043==    by 0x407952: ft_strdup2 (get_next_line_utils.c:205)
==167043==    by 0x40740B: get_next_line (get_next_line.c:68)
==167043==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167043==    by 0x4052AB: main (mandatory.cpp:41)
==167043==  Block was alloc'd at
==167043==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167043==    by 0x4075B4: ft_strjoin (get_next_line_utils.c:58)
==167043==    by 0x407470: get_next_line (get_next_line.c:84)
==167043==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167043==    by 0x4052AB: main (mandatory.cpp:41)
==167043== 
==167043== Invalid read of size 1
==167043==    at 0x40750E: ft_strchr (get_next_line_utils.c:25)
==167043==    by 0x40731D: get_next_line (get_next_line.c:33)
==167043==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167043==    by 0x4052B7: main (mandatory.cpp:41)
==167043==  Address 0x4de6840 is 0 bytes inside a block of size 42 free'd
==167043==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167043==    by 0x407952: ft_strdup2 (get_next_line_utils.c:205)
==167043==    by 0x40740B: get_next_line (get_next_line.c:68)
==167043==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167043==    by 0x4052AB: main (mandatory.cpp:41)
==167043==  Block was alloc'd at
==167043==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167043==    by 0x4075B4: ft_strjoin (get_next_line_utils.c:58)
==167043==    by 0x407470: get_next_line (get_next_line.c:84)
==167043==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167043==    by 0x4052AB: main (mandatory.cpp:41)
==167043== 
==167043== Invalid read of size 1
==167043==    at 0x4073AB: get_next_line (get_next_line.c:58)
==167043==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167043==    by 0x4052B7: main (mandatory.cpp:41)
==167043==  Address 0x4de6840 is 0 bytes inside a block of size 42 free'd
==167043==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167043==    by 0x407952: ft_strdup2 (get_next_line_utils.c:205)
==167043==    by 0x40740B: get_next_line (get_next_line.c:68)
==167043==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167043==    by 0x4052AB: main (mandatory.cpp:41)
==167043==  Block was alloc'd at
==167043==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167043==    by 0x4075B4: ft_strjoin (get_next_line_utils.c:58)
==167043==    by 0x407470: get_next_line (get_next_line.c:84)
==167043==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167043==    by 0x4052AB: main (mandatory.cpp:41)
==167043== 
==167043== 2 bytes in 1 blocks are definitely lost in loss record 1 of 2
==167043==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167043==    by 0x4072EC: get_next_line (get_next_line.c:27)
==167043==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167043==    by 0x4052AB: main (mandatory.cpp:41)
==167043== 
==167043== 2 bytes in 1 blocks are definitely lost in loss record 2 of 2
==167043==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167043==    by 0x4072EC: get_next_line (get_next_line.c:27)
==167043==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167043==    by 0x4052B7: main (mandatory.cpp:41)
==167043== 
==167049== Invalid write of size 1
==167049==    at 0x407417: get_next_line (get_next_line.c:69)
==167049==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167049==    by 0x4054E9: main (mandatory.cpp:46)
==167049==  Address 0x4de6cd0 is 0 bytes inside a block of size 2 free'd
==167049==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167049==    by 0x407952: ft_strdup2 (get_next_line_utils.c:205)
==167049==    by 0x40740B: get_next_line (get_next_line.c:68)
==167049==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167049==    by 0x4054E9: main (mandatory.cpp:46)
==167049==  Block was alloc'd at
==167049==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167049==    by 0x4075B4: ft_strjoin (get_next_line_utils.c:58)
==167049==    by 0x407470: get_next_line (get_next_line.c:84)
==167049==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167049==    by 0x4054E9: main (mandatory.cpp:46)
==167049== 
==167049== Invalid read of size 1
==167049==    at 0x40750E: ft_strchr (get_next_line_utils.c:25)
==167049==    by 0x40731D: get_next_line (get_next_line.c:33)
==167049==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167049==    by 0x4054F5: main (mandatory.cpp:46)
==167049==  Address 0x4de6cd0 is 0 bytes inside a block of size 2 free'd
==167049==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167049==    by 0x407952: ft_strdup2 (get_next_line_utils.c:205)
==167049==    by 0x40740B: get_next_line (get_next_line.c:68)
==167049==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167049==    by 0x4054E9: main (mandatory.cpp:46)
==167049==  Block was alloc'd at
==167049==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167049==    by 0x4075B4: ft_strjoin (get_next_line_utils.c:58)
==167049==    by 0x407470: get_next_line (get_next_line.c:84)
==167049==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167049==    by 0x4054E9: main (mandatory.cpp:46)
==167049== 
==167049== Invalid read of size 1
==167049==    at 0x4073AB: get_next_line (get_next_line.c:58)
==167049==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167049==    by 0x4054F5: main (mandatory.cpp:46)
==167049==  Address 0x4de6cd0 is 0 bytes inside a block of size 2 free'd
==167049==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167049==    by 0x407952: ft_strdup2 (get_next_line_utils.c:205)
==167049==    by 0x40740B: get_next_line (get_next_line.c:68)
==167049==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167049==    by 0x4054E9: main (mandatory.cpp:46)
==167049==  Block was alloc'd at
==167049==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167049==    by 0x4075B4: ft_strjoin (get_next_line_utils.c:58)
==167049==    by 0x407470: get_next_line (get_next_line.c:84)
==167049==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167049==    by 0x4054E9: main (mandatory.cpp:46)
==167049== 
==167049== 2 bytes in 1 blocks are definitely lost in loss record 1 of 3
==167049==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167049==    by 0x4072EC: get_next_line (get_next_line.c:27)
==167049==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167049==    by 0x4054E9: main (mandatory.cpp:46)
==167049== 
==167049== 2 bytes in 1 blocks are definitely lost in loss record 2 of 3
==167049==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167049==    by 0x4072EC: get_next_line (get_next_line.c:27)
==167049==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167049==    by 0x4054F5: main (mandatory.cpp:46)
==167049== 
==167049== 42 bytes in 1 blocks are definitely lost in loss record 3 of 3
==167049==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167049==    by 0x4075B4: ft_strjoin (get_next_line_utils.c:58)
==167049==    by 0x407470: get_next_line (get_next_line.c:84)
==167049==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167049==    by 0x4054D7: main (mandatory.cpp:46)
==167049== 
==167052== Invalid write of size 1
==167052==    at 0x407417: get_next_line (get_next_line.c:69)
==167052==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167052==    by 0x405715: main (mandatory.cpp:52)
==167052==  Address 0x4de6ed0 is 0 bytes inside a block of size 43 free'd
==167052==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167052==    by 0x407952: ft_strdup2 (get_next_line_utils.c:205)
==167052==    by 0x40740B: get_next_line (get_next_line.c:68)
==167052==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167052==    by 0x405715: main (mandatory.cpp:52)
==167052==  Block was alloc'd at
==167052==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167052==    by 0x4075B4: ft_strjoin (get_next_line_utils.c:58)
==167052==    by 0x407470: get_next_line (get_next_line.c:84)
==167052==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167052==    by 0x405715: main (mandatory.cpp:52)
==167052== 
==167052== Invalid read of size 1
==167052==    at 0x40750E: ft_strchr (get_next_line_utils.c:25)
==167052==    by 0x40731D: get_next_line (get_next_line.c:33)
==167052==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167052==    by 0x405721: main (mandatory.cpp:52)
==167052==  Address 0x4de6ed0 is 0 bytes inside a block of size 43 free'd
==167052==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167052==    by 0x407952: ft_strdup2 (get_next_line_utils.c:205)
==167052==    by 0x40740B: get_next_line (get_next_line.c:68)
==167052==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167052==    by 0x405715: main (mandatory.cpp:52)
==167052==  Block was alloc'd at
==167052==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167052==    by 0x4075B4: ft_strjoin (get_next_line_utils.c:58)
==167052==    by 0x407470: get_next_line (get_next_line.c:84)
==167052==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167052==    by 0x405715: main (mandatory.cpp:52)
==167052== 
==167052== Invalid read of size 1
==167052==    at 0x4073AB: get_next_line (get_next_line.c:58)
==167052==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167052==    by 0x405721: main (mandatory.cpp:52)
==167052==  Address 0x4de6ed0 is 0 bytes inside a block of size 43 free'd
==167052==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167052==    by 0x407952: ft_strdup2 (get_next_line_utils.c:205)
==167052==    by 0x40740B: get_next_line (get_next_line.c:68)
==167052==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167052==    by 0x405715: main (mandatory.cpp:52)
==167052==  Block was alloc'd at
==167052==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167052==    by 0x4075B4: ft_strjoin (get_next_line_utils.c:58)
==167052==    by 0x407470: get_next_line (get_next_line.c:84)
==167052==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167052==    by 0x405715: main (mandatory.cpp:52)
==167052== 
==167052== 2 bytes in 1 blocks are definitely lost in loss record 1 of 2
==167052==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167052==    by 0x4072EC: get_next_line (get_next_line.c:27)
==167052==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167052==    by 0x405715: main (mandatory.cpp:52)
==167052== 
==167052== 2 bytes in 1 blocks are definitely lost in loss record 2 of 2
==167052==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167052==    by 0x4072EC: get_next_line (get_next_line.c:27)
==167052==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167052==    by 0x405721: main (mandatory.cpp:52)
==167052== 
==167055== Invalid write of size 1
==167055==    at 0x407417: get_next_line (get_next_line.c:69)
==167055==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167055==    by 0x405953: main (mandatory.cpp:57)
==167055==  Address 0x4de7360 is 0 bytes inside a block of size 2 free'd
==167055==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167055==    by 0x407952: ft_strdup2 (get_next_line_utils.c:205)
==167055==    by 0x40740B: get_next_line (get_next_line.c:68)
==167055==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167055==    by 0x405953: main (mandatory.cpp:57)
==167055==  Block was alloc'd at
==167055==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167055==    by 0x4075B4: ft_strjoin (get_next_line_utils.c:58)
==167055==    by 0x407470: get_next_line (get_next_line.c:84)
==167055==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167055==    by 0x405953: main (mandatory.cpp:57)
==167055== 
==167055== Invalid read of size 1
==167055==    at 0x40750E: ft_strchr (get_next_line_utils.c:25)
==167055==    by 0x40731D: get_next_line (get_next_line.c:33)
==167055==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167055==    by 0x40595F: main (mandatory.cpp:57)
==167055==  Address 0x4de7360 is 0 bytes inside a block of size 2 free'd
==167055==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167055==    by 0x407952: ft_strdup2 (get_next_line_utils.c:205)
==167055==    by 0x40740B: get_next_line (get_next_line.c:68)
==167055==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167055==    by 0x405953: main (mandatory.cpp:57)
==167055==  Block was alloc'd at
==167055==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167055==    by 0x4075B4: ft_strjoin (get_next_line_utils.c:58)
==167055==    by 0x407470: get_next_line (get_next_line.c:84)
==167055==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167055==    by 0x405953: main (mandatory.cpp:57)
==167055== 
==167055== Invalid read of size 1
==167055==    at 0x4073AB: get_next_line (get_next_line.c:58)
==167055==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167055==    by 0x40595F: main (mandatory.cpp:57)
==167055==  Address 0x4de7360 is 0 bytes inside a block of size 2 free'd
==167055==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167055==    by 0x407952: ft_strdup2 (get_next_line_utils.c:205)
==167055==    by 0x40740B: get_next_line (get_next_line.c:68)
==167055==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167055==    by 0x405953: main (mandatory.cpp:57)
==167055==  Block was alloc'd at
==167055==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167055==    by 0x4075B4: ft_strjoin (get_next_line_utils.c:58)
==167055==    by 0x407470: get_next_line (get_next_line.c:84)
==167055==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167055==    by 0x405953: main (mandatory.cpp:57)
==167055== 
==167055== 2 bytes in 1 blocks are definitely lost in loss record 1 of 3
==167055==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167055==    by 0x4072EC: get_next_line (get_next_line.c:27)
==167055==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167055==    by 0x405953: main (mandatory.cpp:57)
==167055== 
==167055== 2 bytes in 1 blocks are definitely lost in loss record 2 of 3
==167055==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167055==    by 0x4072EC: get_next_line (get_next_line.c:27)
==167055==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167055==    by 0x40595F: main (mandatory.cpp:57)
==167055== 
==167055== 43 bytes in 1 blocks are definitely lost in loss record 3 of 3
==167055==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167055==    by 0x4075B4: ft_strjoin (get_next_line_utils.c:58)
==167055==    by 0x407470: get_next_line (get_next_line.c:84)
==167055==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167055==    by 0x405941: main (mandatory.cpp:57)
==167055== 
==167056== Invalid write of size 1
==167056==    at 0x407417: get_next_line (get_next_line.c:69)
==167056==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167056==    by 0x405B89: main (mandatory.cpp:68)
==167056==  Address 0x4de7560 is 0 bytes inside a block of size 44 free'd
==167056==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167056==    by 0x407952: ft_strdup2 (get_next_line_utils.c:205)
==167056==    by 0x40740B: get_next_line (get_next_line.c:68)
==167056==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167056==    by 0x405B89: main (mandatory.cpp:68)
==167056==  Block was alloc'd at
==167056==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167056==    by 0x4075B4: ft_strjoin (get_next_line_utils.c:58)
==167056==    by 0x407470: get_next_line (get_next_line.c:84)
==167056==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167056==    by 0x405B89: main (mandatory.cpp:68)
==167056== 
==167056== Invalid read of size 1
==167056==    at 0x40750E: ft_strchr (get_next_line_utils.c:25)
==167056==    by 0x40731D: get_next_line (get_next_line.c:33)
==167056==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167056==    by 0x405B95: main (mandatory.cpp:68)
==167056==  Address 0x4de7560 is 0 bytes inside a block of size 44 free'd
==167056==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167056==    by 0x407952: ft_strdup2 (get_next_line_utils.c:205)
==167056==    by 0x40740B: get_next_line (get_next_line.c:68)
==167056==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167056==    by 0x405B89: main (mandatory.cpp:68)
==167056==  Block was alloc'd at
==167056==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167056==    by 0x4075B4: ft_strjoin (get_next_line_utils.c:58)
==167056==    by 0x407470: get_next_line (get_next_line.c:84)
==167056==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167056==    by 0x405B89: main (mandatory.cpp:68)
==167056== 
==167056== Invalid read of size 1
==167056==    at 0x4073AB: get_next_line (get_next_line.c:58)
==167056==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167056==    by 0x405B95: main (mandatory.cpp:68)
==167056==  Address 0x4de7560 is 0 bytes inside a block of size 44 free'd
==167056==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167056==    by 0x407952: ft_strdup2 (get_next_line_utils.c:205)
==167056==    by 0x40740B: get_next_line (get_next_line.c:68)
==167056==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167056==    by 0x405B89: main (mandatory.cpp:68)
==167056==  Block was alloc'd at
==167056==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167056==    by 0x4075B4: ft_strjoin (get_next_line_utils.c:58)
==167056==    by 0x407470: get_next_line (get_next_line.c:84)
==167056==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167056==    by 0x405B89: main (mandatory.cpp:68)
==167056== 
==167056== 2 bytes in 1 blocks are definitely lost in loss record 1 of 2
==167056==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167056==    by 0x4072EC: get_next_line (get_next_line.c:27)
==167056==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167056==    by 0x405B89: main (mandatory.cpp:68)
==167056== 
==167056== 2 bytes in 1 blocks are definitely lost in loss record 2 of 2
==167056==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167056==    by 0x4072EC: get_next_line (get_next_line.c:27)
==167056==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167056==    by 0x405B95: main (mandatory.cpp:68)
==167056== 
==167060== Invalid write of size 1
==167060==    at 0x407417: get_next_line (get_next_line.c:69)
==167060==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167060==    by 0x405DC7: main (mandatory.cpp:73)
==167060==  Address 0x4de79f0 is 0 bytes inside a block of size 2 free'd
==167060==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167060==    by 0x407952: ft_strdup2 (get_next_line_utils.c:205)
==167060==    by 0x40740B: get_next_line (get_next_line.c:68)
==167060==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167060==    by 0x405DC7: main (mandatory.cpp:73)
==167060==  Block was alloc'd at
==167060==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167060==    by 0x4075B4: ft_strjoin (get_next_line_utils.c:58)
==167060==    by 0x407470: get_next_line (get_next_line.c:84)
==167060==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167060==    by 0x405DC7: main (mandatory.cpp:73)
==167060== 
==167060== Invalid read of size 1
==167060==    at 0x40750E: ft_strchr (get_next_line_utils.c:25)
==167060==    by 0x40731D: get_next_line (get_next_line.c:33)
==167060==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167060==    by 0x405DD3: main (mandatory.cpp:73)
==167060==  Address 0x4de79f0 is 0 bytes inside a block of size 2 free'd
==167060==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167060==    by 0x407952: ft_strdup2 (get_next_line_utils.c:205)
==167060==    by 0x40740B: get_next_line (get_next_line.c:68)
==167060==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167060==    by 0x405DC7: main (mandatory.cpp:73)
==167060==  Block was alloc'd at
==167060==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167060==    by 0x4075B4: ft_strjoin (get_next_line_utils.c:58)
==167060==    by 0x407470: get_next_line (get_next_line.c:84)
==167060==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167060==    by 0x405DC7: main (mandatory.cpp:73)
==167060== 
==167060== Invalid read of size 1
==167060==    at 0x4073AB: get_next_line (get_next_line.c:58)
==167060==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167060==    by 0x405DD3: main (mandatory.cpp:73)
==167060==  Address 0x4de79f0 is 0 bytes inside a block of size 2 free'd
==167060==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167060==    by 0x407952: ft_strdup2 (get_next_line_utils.c:205)
==167060==    by 0x40740B: get_next_line (get_next_line.c:68)
==167060==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167060==    by 0x405DC7: main (mandatory.cpp:73)
==167060==  Block was alloc'd at
==167060==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167060==    by 0x4075B4: ft_strjoin (get_next_line_utils.c:58)
==167060==    by 0x407470: get_next_line (get_next_line.c:84)
==167060==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167060==    by 0x405DC7: main (mandatory.cpp:73)
==167060== 
==167060== 2 bytes in 1 blocks are definitely lost in loss record 1 of 3
==167060==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167060==    by 0x4072EC: get_next_line (get_next_line.c:27)
==167060==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167060==    by 0x405DC7: main (mandatory.cpp:73)
==167060== 
==167060== 2 bytes in 1 blocks are definitely lost in loss record 2 of 3
==167060==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167060==    by 0x4072EC: get_next_line (get_next_line.c:27)
==167060==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167060==    by 0x405DD3: main (mandatory.cpp:73)
==167060== 
==167060== 44 bytes in 1 blocks are definitely lost in loss record 3 of 3
==167060==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167060==    by 0x4075B4: ft_strjoin (get_next_line_utils.c:58)
==167060==    by 0x407470: get_next_line (get_next_line.c:84)
==167060==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167060==    by 0x405DB5: main (mandatory.cpp:73)
==167060== 
==167066== 2 bytes in 1 blocks are definitely lost in loss record 2 of 7
==167066==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167066==    by 0x4075B4: ft_strjoin (get_next_line_utils.c:58)
==167066==    by 0x407470: get_next_line (get_next_line.c:84)
==167066==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167066==    by 0x405FF3: main (mandatory.cpp:79)
==167066== 
==167066== 2 bytes in 1 blocks are definitely lost in loss record 3 of 7
==167066==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167066==    by 0x4075B4: ft_strjoin (get_next_line_utils.c:58)
==167066==    by 0x407470: get_next_line (get_next_line.c:84)
==167066==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167066==    by 0x406005: main (mandatory.cpp:79)
==167066== 
==167066== 2 bytes in 1 blocks are definitely lost in loss record 4 of 7
==167066==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167066==    by 0x4075B4: ft_strjoin (get_next_line_utils.c:58)
==167066==    by 0x407470: get_next_line (get_next_line.c:84)
==167066==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167066==    by 0x406017: main (mandatory.cpp:79)
==167066== 
==167066== 2 bytes in 1 blocks are definitely lost in loss record 5 of 7
==167066==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167066==    by 0x4075B4: ft_strjoin (get_next_line_utils.c:58)
==167066==    by 0x407470: get_next_line (get_next_line.c:84)
==167066==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167066==    by 0x406029: main (mandatory.cpp:79)
==167066== 
==167066== 2 bytes in 1 blocks are definitely lost in loss record 6 of 7
==167066==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167066==    by 0x4075B4: ft_strjoin (get_next_line_utils.c:58)
==167066==    by 0x407470: get_next_line (get_next_line.c:84)
==167066==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167066==    by 0x40603B: main (mandatory.cpp:79)
==167066== 
==167066== 2 bytes in 1 blocks are definitely lost in loss record 7 of 7
==167066==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167066==    by 0x4072EC: get_next_line (get_next_line.c:27)
==167066==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167066==    by 0x406047: main (mandatory.cpp:79)
==167066== 
==167069== Invalid write of size 1
==167069==    at 0x407417: get_next_line (get_next_line.c:69)
==167069==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167069==    by 0x4062AF: main (mandatory.cpp:88)
==167069==  Address 0x4dec1d0 is 0 bytes inside a block of size 42 free'd
==167069==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167069==    by 0x407952: ft_strdup2 (get_next_line_utils.c:205)
==167069==    by 0x40740B: get_next_line (get_next_line.c:68)
==167069==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167069==    by 0x4062AF: main (mandatory.cpp:88)
==167069==  Block was alloc'd at
==167069==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167069==    by 0x4075B4: ft_strjoin (get_next_line_utils.c:58)
==167069==    by 0x407470: get_next_line (get_next_line.c:84)
==167069==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167069==    by 0x4062AF: main (mandatory.cpp:88)
==167069== 
==167069== Invalid read of size 1
==167069==    at 0x40750E: ft_strchr (get_next_line_utils.c:25)
==167069==    by 0x40731D: get_next_line (get_next_line.c:33)
==167069==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167069==    by 0x4062BB: main (mandatory.cpp:88)
==167069==  Address 0x4dec1d0 is 0 bytes inside a block of size 42 free'd
==167069==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167069==    by 0x407952: ft_strdup2 (get_next_line_utils.c:205)
==167069==    by 0x40740B: get_next_line (get_next_line.c:68)
==167069==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167069==    by 0x4062AF: main (mandatory.cpp:88)
==167069==  Block was alloc'd at
==167069==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167069==    by 0x4075B4: ft_strjoin (get_next_line_utils.c:58)
==167069==    by 0x407470: get_next_line (get_next_line.c:84)
==167069==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167069==    by 0x4062AF: main (mandatory.cpp:88)
==167069== 
==167069== Invalid read of size 1
==167069==    at 0x4073AB: get_next_line (get_next_line.c:58)
==167069==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167069==    by 0x4062BB: main (mandatory.cpp:88)
==167069==  Address 0x4dec1d0 is 0 bytes inside a block of size 42 free'd
==167069==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167069==    by 0x407952: ft_strdup2 (get_next_line_utils.c:205)
==167069==    by 0x40740B: get_next_line (get_next_line.c:68)
==167069==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167069==    by 0x4062AF: main (mandatory.cpp:88)
==167069==  Block was alloc'd at
==167069==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167069==    by 0x4075B4: ft_strjoin (get_next_line_utils.c:58)
==167069==    by 0x407470: get_next_line (get_next_line.c:84)
==167069==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167069==    by 0x4062AF: main (mandatory.cpp:88)
==167069== 
==167069== 2 bytes in 1 blocks are definitely lost in loss record 1 of 6
==167069==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167069==    by 0x4072EC: get_next_line (get_next_line.c:27)
==167069==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167069==    by 0x4062AF: main (mandatory.cpp:88)
==167069== 
==167069== 2 bytes in 1 blocks are definitely lost in loss record 2 of 6
==167069==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167069==    by 0x4072EC: get_next_line (get_next_line.c:27)
==167069==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167069==    by 0x4062BB: main (mandatory.cpp:88)
==167069== 
==167069== 43 bytes in 1 blocks are definitely lost in loss record 3 of 6
==167069==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167069==    by 0x4075B4: ft_strjoin (get_next_line_utils.c:58)
==167069==    by 0x407470: get_next_line (get_next_line.c:84)
==167069==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167069==    by 0x406267: main (mandatory.cpp:88)
==167069== 
==167069== 44 bytes in 1 blocks are definitely lost in loss record 4 of 6
==167069==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167069==    by 0x4075B4: ft_strjoin (get_next_line_utils.c:58)
==167069==    by 0x407470: get_next_line (get_next_line.c:84)
==167069==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167069==    by 0x406279: main (mandatory.cpp:88)
==167069== 
==167069== 44 bytes in 1 blocks are definitely lost in loss record 5 of 6
==167069==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167069==    by 0x4075B4: ft_strjoin (get_next_line_utils.c:58)
==167069==    by 0x407470: get_next_line (get_next_line.c:84)
==167069==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167069==    by 0x40629D: main (mandatory.cpp:88)
==167069== 
==167069== 45 bytes in 1 blocks are definitely lost in loss record 6 of 6
==167069==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167069==    by 0x4075B4: ft_strjoin (get_next_line_utils.c:58)
==167069==    by 0x407470: get_next_line (get_next_line.c:84)
==167069==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167069==    by 0x40628B: main (mandatory.cpp:88)
==167069== 
==167072== 2 bytes in 1 blocks are definitely lost in loss record 2 of 7
==167072==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167072==    by 0x4072EC: get_next_line (get_next_line.c:27)
==167072==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167072==    by 0x40652F: main (mandatory.cpp:97)
==167072== 
==167072== 42 bytes in 1 blocks are definitely lost in loss record 3 of 7
==167072==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167072==    by 0x4075B4: ft_strjoin (get_next_line_utils.c:58)
==167072==    by 0x407470: get_next_line (get_next_line.c:84)
==167072==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167072==    by 0x4064DB: main (mandatory.cpp:97)
==167072== 
==167072== 42 bytes in 1 blocks are definitely lost in loss record 4 of 7
==167072==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167072==    by 0x4075B4: ft_strjoin (get_next_line_utils.c:58)
==167072==    by 0x407470: get_next_line (get_next_line.c:84)
==167072==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167072==    by 0x406523: main (mandatory.cpp:97)
==167072== 
==167072== 43 bytes in 1 blocks are definitely lost in loss record 5 of 7
==167072==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167072==    by 0x4075B4: ft_strjoin (get_next_line_utils.c:58)
==167072==    by 0x407470: get_next_line (get_next_line.c:84)
==167072==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167072==    by 0x4064ED: main (mandatory.cpp:97)
==167072== 
==167072== 43 bytes in 1 blocks are definitely lost in loss record 6 of 7
==167072==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167072==    by 0x4075B4: ft_strjoin (get_next_line_utils.c:58)
==167072==    by 0x407470: get_next_line (get_next_line.c:84)
==167072==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167072==    by 0x406511: main (mandatory.cpp:97)
==167072== 
==167072== 44 bytes in 1 blocks are definitely lost in loss record 7 of 7
==167072==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167072==    by 0x4075B4: ft_strjoin (get_next_line_utils.c:58)
==167072==    by 0x407470: get_next_line (get_next_line.c:84)
==167072==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167072==    by 0x4064FF: main (mandatory.cpp:97)
==167072== 
==167074== Invalid write of size 1
==167074==    at 0x407417: get_next_line (get_next_line.c:69)
==167074==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167074==    by 0x4067DF: main (mandatory.cpp:106)
==167074==  Address 0x4decd30 is 0 bytes inside a block of size 42 free'd
==167074==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167074==    by 0x407952: ft_strdup2 (get_next_line_utils.c:205)
==167074==    by 0x40740B: get_next_line (get_next_line.c:68)
==167074==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167074==    by 0x4067DF: main (mandatory.cpp:106)
==167074==  Block was alloc'd at
==167074==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167074==    by 0x4075B4: ft_strjoin (get_next_line_utils.c:58)
==167074==    by 0x407470: get_next_line (get_next_line.c:84)
==167074==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167074==    by 0x4067DF: main (mandatory.cpp:106)
==167074== 
==167074== Invalid read of size 1
==167074==    at 0x40750E: ft_strchr (get_next_line_utils.c:25)
==167074==    by 0x40731D: get_next_line (get_next_line.c:33)
==167074==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167074==    by 0x4067EB: main (mandatory.cpp:106)
==167074==  Address 0x4decd30 is 0 bytes inside a block of size 42 free'd
==167074==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167074==    by 0x407952: ft_strdup2 (get_next_line_utils.c:205)
==167074==    by 0x40740B: get_next_line (get_next_line.c:68)
==167074==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167074==    by 0x4067DF: main (mandatory.cpp:106)
==167074==  Block was alloc'd at
==167074==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167074==    by 0x4075B4: ft_strjoin (get_next_line_utils.c:58)
==167074==    by 0x407470: get_next_line (get_next_line.c:84)
==167074==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167074==    by 0x4067DF: main (mandatory.cpp:106)
==167074== 
==167074== Invalid read of size 1
==167074==    at 0x4073AB: get_next_line (get_next_line.c:58)
==167074==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167074==    by 0x4067EB: main (mandatory.cpp:106)
==167074==  Address 0x4decd30 is 0 bytes inside a block of size 42 free'd
==167074==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167074==    by 0x407952: ft_strdup2 (get_next_line_utils.c:205)
==167074==    by 0x40740B: get_next_line (get_next_line.c:68)
==167074==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167074==    by 0x4067DF: main (mandatory.cpp:106)
==167074==  Block was alloc'd at
==167074==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167074==    by 0x4075B4: ft_strjoin (get_next_line_utils.c:58)
==167074==    by 0x407470: get_next_line (get_next_line.c:84)
==167074==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167074==    by 0x4067DF: main (mandatory.cpp:106)
==167074== 
==167074== 2 bytes in 1 blocks are definitely lost in loss record 1 of 10
==167074==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167074==    by 0x4075B4: ft_strjoin (get_next_line_utils.c:58)
==167074==    by 0x407470: get_next_line (get_next_line.c:84)
==167074==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167074==    by 0x406761: main (mandatory.cpp:106)
==167074== 
==167074== 2 bytes in 1 blocks are definitely lost in loss record 2 of 10
==167074==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167074==    by 0x4075B4: ft_strjoin (get_next_line_utils.c:58)
==167074==    by 0x407470: get_next_line (get_next_line.c:84)
==167074==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167074==    by 0x406785: main (mandatory.cpp:106)
==167074== 
==167074== 2 bytes in 1 blocks are definitely lost in loss record 3 of 10
==167074==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167074==    by 0x4075B4: ft_strjoin (get_next_line_utils.c:58)
==167074==    by 0x407470: get_next_line (get_next_line.c:84)
==167074==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167074==    by 0x4067A9: main (mandatory.cpp:106)
==167074== 
==167074== 2 bytes in 1 blocks are definitely lost in loss record 4 of 10
==167074==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167074==    by 0x4075B4: ft_strjoin (get_next_line_utils.c:58)
==167074==    by 0x407470: get_next_line (get_next_line.c:84)
==167074==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167074==    by 0x4067CD: main (mandatory.cpp:106)
==167074== 
==167074== 2 bytes in 1 blocks are definitely lost in loss record 5 of 10
==167074==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167074==    by 0x4072EC: get_next_line (get_next_line.c:27)
==167074==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167074==    by 0x4067DF: main (mandatory.cpp:106)
==167074== 
==167074== 2 bytes in 1 blocks are definitely lost in loss record 6 of 10
==167074==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167074==    by 0x4072EC: get_next_line (get_next_line.c:27)
==167074==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167074==    by 0x4067EB: main (mandatory.cpp:106)
==167074== 
==167074== 43 bytes in 1 blocks are definitely lost in loss record 7 of 10
==167074==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167074==    by 0x4075B4: ft_strjoin (get_next_line_utils.c:58)
==167074==    by 0x407470: get_next_line (get_next_line.c:84)
==167074==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167074==    by 0x40674F: main (mandatory.cpp:106)
==167074== 
==167074== 44 bytes in 1 blocks are definitely lost in loss record 8 of 10
==167074==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167074==    by 0x4075B4: ft_strjoin (get_next_line_utils.c:58)
==167074==    by 0x407470: get_next_line (get_next_line.c:84)
==167074==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167074==    by 0x406773: main (mandatory.cpp:106)
==167074== 
==167074== 44 bytes in 1 blocks are definitely lost in loss record 9 of 10
==167074==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167074==    by 0x4075B4: ft_strjoin (get_next_line_utils.c:58)
==167074==    by 0x407470: get_next_line (get_next_line.c:84)
==167074==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167074==    by 0x4067BB: main (mandatory.cpp:106)
==167074== 
==167074== 45 bytes in 1 blocks are definitely lost in loss record 10 of 10
==167074==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167074==    by 0x4075B4: ft_strjoin (get_next_line_utils.c:58)
==167074==    by 0x407470: get_next_line (get_next_line.c:84)
==167074==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167074==    by 0x406797: main (mandatory.cpp:106)
==167074== 
==167079== 2 bytes in 1 blocks are definitely lost in loss record 2 of 11
==167079==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167079==    by 0x4075B4: ft_strjoin (get_next_line_utils.c:58)
==167079==    by 0x407470: get_next_line (get_next_line.c:84)
==167079==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167079==    by 0x406A1D: main (mandatory.cpp:119)
==167079== 
==167079== 2 bytes in 1 blocks are definitely lost in loss record 3 of 11
==167079==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167079==    by 0x4075B4: ft_strjoin (get_next_line_utils.c:58)
==167079==    by 0x407470: get_next_line (get_next_line.c:84)
==167079==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167079==    by 0x406A41: main (mandatory.cpp:119)
==167079== 
==167079== 2 bytes in 1 blocks are definitely lost in loss record 4 of 11
==167079==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167079==    by 0x4075B4: ft_strjoin (get_next_line_utils.c:58)
==167079==    by 0x407470: get_next_line (get_next_line.c:84)
==167079==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167079==    by 0x406A65: main (mandatory.cpp:119)
==167079== 
==167079== 2 bytes in 1 blocks are definitely lost in loss record 5 of 11
==167079==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167079==    by 0x4075B4: ft_strjoin (get_next_line_utils.c:58)
==167079==    by 0x407470: get_next_line (get_next_line.c:84)
==167079==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167079==    by 0x406A89: main (mandatory.cpp:119)
==167079== 
==167079== 2 bytes in 1 blocks are definitely lost in loss record 6 of 11
==167079==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167079==    by 0x4072EC: get_next_line (get_next_line.c:27)
==167079==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167079==    by 0x406AA7: main (mandatory.cpp:119)
==167079== 
==167079== 43 bytes in 1 blocks are definitely lost in loss record 7 of 11
==167079==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167079==    by 0x4075B4: ft_strjoin (get_next_line_utils.c:58)
==167079==    by 0x407470: get_next_line (get_next_line.c:84)
==167079==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167079==    by 0x406A0B: main (mandatory.cpp:119)
==167079== 
==167079== 43 bytes in 1 blocks are definitely lost in loss record 8 of 11
==167079==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167079==    by 0x4075B4: ft_strjoin (get_next_line_utils.c:58)
==167079==    by 0x407470: get_next_line (get_next_line.c:84)
==167079==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167079==    by 0x406A9B: main (mandatory.cpp:119)
==167079== 
==167079== 44 bytes in 1 blocks are definitely lost in loss record 9 of 11
==167079==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167079==    by 0x4075B4: ft_strjoin (get_next_line_utils.c:58)
==167079==    by 0x407470: get_next_line (get_next_line.c:84)
==167079==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167079==    by 0x406A2F: main (mandatory.cpp:119)
==167079== 
==167079== 44 bytes in 1 blocks are definitely lost in loss record 10 of 11
==167079==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167079==    by 0x4075B4: ft_strjoin (get_next_line_utils.c:58)
==167079==    by 0x407470: get_next_line (get_next_line.c:84)
==167079==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167079==    by 0x406A77: main (mandatory.cpp:119)
==167079== 
==167079== 45 bytes in 1 blocks are definitely lost in loss record 11 of 11
==167079==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167079==    by 0x4075B4: ft_strjoin (get_next_line_utils.c:58)
==167079==    by 0x407470: get_next_line (get_next_line.c:84)
==167079==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167079==    by 0x406A53: main (mandatory.cpp:119)
==167079== 
==167090== Invalid read of size 1
==167090==    at 0x484FBD4: strcmp (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167090==    by 0x402CFA: gnl(int, char const*) (gnl.cpp:24)
==167090==    by 0x40711E: main (mandatory.cpp:141)
==167090==  Address 0x0 is not stack'd, malloc'd or (recently) free'd
==167090== 
==167122== Invalid write of size 1
==167122==    at 0x4073B9: get_next_line (get_next_line.c:47)
==167122==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167122==    by 0x404BB6: main (mandatory.cpp:25)
==167122==  Address 0x4de429f is 1 bytes before a block of size 43 alloc'd
==167122==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167122==    by 0x40731E: get_next_line (get_next_line.c:27)
==167122==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167122==    by 0x404BB6: main (mandatory.cpp:25)
==167122== 
==167122== Invalid write of size 1
==167122==    at 0x4073B9: get_next_line (get_next_line.c:47)
==167122==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167122==    by 0x404BD8: main (mandatory.cpp:25)
==167122==  Address 0x4de430f is 1 bytes before a block of size 43 alloc'd
==167122==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167122==    by 0x40731E: get_next_line (get_next_line.c:27)
==167122==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167122==    by 0x404BD8: main (mandatory.cpp:25)
==167122== 
==167122== 43 bytes in 1 blocks are definitely lost in loss record 1 of 2
==167122==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167122==    by 0x40731E: get_next_line (get_next_line.c:27)
==167122==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167122==    by 0x404BB6: main (mandatory.cpp:25)
==167122== 
==167122== 43 bytes in 1 blocks are definitely lost in loss record 2 of 2
==167122==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167122==    by 0x40731E: get_next_line (get_next_line.c:27)
==167122==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167122==    by 0x404BD8: main (mandatory.cpp:25)
==167122== 
==167123== Invalid read of size 1
==167123==    at 0x4073DD: get_next_line (get_next_line.c:58)
==167123==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167123==    by 0x404E53: main (mandatory.cpp:31)
==167123==  Address 0x0 is not stack'd, malloc'd or (recently) free'd
==167123== 
==167128== 2 bytes in 1 blocks are definitely lost in loss record 2 of 3
==167128==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167128==    by 0x4075E6: ft_strjoin (get_next_line_utils.c:58)
==167128==    by 0x4074A2: get_next_line (get_next_line.c:84)
==167128==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167128==    by 0x40507F: main (mandatory.cpp:36)
==167128== 
==167128== 43 bytes in 1 blocks are definitely lost in loss record 3 of 3
==167128==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167128==    by 0x40731E: get_next_line (get_next_line.c:27)
==167128==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167128==    by 0x40508B: main (mandatory.cpp:36)
==167128== 
==167138== Invalid write of size 1
==167138==    at 0x407449: get_next_line (get_next_line.c:69)
==167138==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167138==    by 0x4052AB: main (mandatory.cpp:41)
==167138==  Address 0x4de59c0 is 0 bytes inside a block of size 42 free'd
==167138==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167138==    by 0x407984: ft_strdup2 (get_next_line_utils.c:205)
==167138==    by 0x40743D: get_next_line (get_next_line.c:68)
==167138==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167138==    by 0x4052AB: main (mandatory.cpp:41)
==167138==  Block was alloc'd at
==167138==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167138==    by 0x4075E6: ft_strjoin (get_next_line_utils.c:58)
==167138==    by 0x4074A2: get_next_line (get_next_line.c:84)
==167138==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167138==    by 0x4052AB: main (mandatory.cpp:41)
==167138== 
==167138== Invalid read of size 1
==167138==    at 0x407540: ft_strchr (get_next_line_utils.c:25)
==167138==    by 0x40734F: get_next_line (get_next_line.c:33)
==167138==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167138==    by 0x4052B7: main (mandatory.cpp:41)
==167138==  Address 0x4de59c0 is 0 bytes inside a block of size 42 free'd
==167138==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167138==    by 0x407984: ft_strdup2 (get_next_line_utils.c:205)
==167138==    by 0x40743D: get_next_line (get_next_line.c:68)
==167138==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167138==    by 0x4052AB: main (mandatory.cpp:41)
==167138==  Block was alloc'd at
==167138==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167138==    by 0x4075E6: ft_strjoin (get_next_line_utils.c:58)
==167138==    by 0x4074A2: get_next_line (get_next_line.c:84)
==167138==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167138==    by 0x4052AB: main (mandatory.cpp:41)
==167138== 
==167138== Invalid read of size 1
==167138==    at 0x4073DD: get_next_line (get_next_line.c:58)
==167138==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167138==    by 0x4052B7: main (mandatory.cpp:41)
==167138==  Address 0x4de59c0 is 0 bytes inside a block of size 42 free'd
==167138==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167138==    by 0x407984: ft_strdup2 (get_next_line_utils.c:205)
==167138==    by 0x40743D: get_next_line (get_next_line.c:68)
==167138==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167138==    by 0x4052AB: main (mandatory.cpp:41)
==167138==  Block was alloc'd at
==167138==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167138==    by 0x4075E6: ft_strjoin (get_next_line_utils.c:58)
==167138==    by 0x4074A2: get_next_line (get_next_line.c:84)
==167138==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167138==    by 0x4052AB: main (mandatory.cpp:41)
==167138== 
==167138== 43 bytes in 1 blocks are definitely lost in loss record 1 of 2
==167138==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167138==    by 0x40731E: get_next_line (get_next_line.c:27)
==167138==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167138==    by 0x4052AB: main (mandatory.cpp:41)
==167138== 
==167138== 43 bytes in 1 blocks are definitely lost in loss record 2 of 2
==167138==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167138==    by 0x40731E: get_next_line (get_next_line.c:27)
==167138==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167138==    by 0x4052B7: main (mandatory.cpp:41)
==167138== 
==167139== Invalid write of size 1
==167139==    at 0x407449: get_next_line (get_next_line.c:69)
==167139==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167139==    by 0x4054E9: main (mandatory.cpp:46)
==167139==  Address 0x4de5db0 is 0 bytes inside a block of size 2 free'd
==167139==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167139==    by 0x407984: ft_strdup2 (get_next_line_utils.c:205)
==167139==    by 0x40743D: get_next_line (get_next_line.c:68)
==167139==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167139==    by 0x4054E9: main (mandatory.cpp:46)
==167139==  Block was alloc'd at
==167139==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167139==    by 0x407875: f_del_front_bn (get_next_line_utils.c:170)
==167139==    by 0x4074E1: get_next_line (get_next_line.c:89)
==167139==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167139==    by 0x4054D7: main (mandatory.cpp:46)
==167139== 
==167139== Invalid read of size 1
==167139==    at 0x407540: ft_strchr (get_next_line_utils.c:25)
==167139==    by 0x40734F: get_next_line (get_next_line.c:33)
==167139==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167139==    by 0x4054F5: main (mandatory.cpp:46)
==167139==  Address 0x4de5db0 is 0 bytes inside a block of size 2 free'd
==167139==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167139==    by 0x407984: ft_strdup2 (get_next_line_utils.c:205)
==167139==    by 0x40743D: get_next_line (get_next_line.c:68)
==167139==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167139==    by 0x4054E9: main (mandatory.cpp:46)
==167139==  Block was alloc'd at
==167139==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167139==    by 0x407875: f_del_front_bn (get_next_line_utils.c:170)
==167139==    by 0x4074E1: get_next_line (get_next_line.c:89)
==167139==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167139==    by 0x4054D7: main (mandatory.cpp:46)
==167139== 
==167139== Invalid read of size 1
==167139==    at 0x4073DD: get_next_line (get_next_line.c:58)
==167139==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167139==    by 0x4054F5: main (mandatory.cpp:46)
==167139==  Address 0x4de5db0 is 0 bytes inside a block of size 2 free'd
==167139==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167139==    by 0x407984: ft_strdup2 (get_next_line_utils.c:205)
==167139==    by 0x40743D: get_next_line (get_next_line.c:68)
==167139==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167139==    by 0x4054E9: main (mandatory.cpp:46)
==167139==  Block was alloc'd at
==167139==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167139==    by 0x407875: f_del_front_bn (get_next_line_utils.c:170)
==167139==    by 0x4074E1: get_next_line (get_next_line.c:89)
==167139==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167139==    by 0x4054D7: main (mandatory.cpp:46)
==167139== 
==167139== 43 bytes in 1 blocks are definitely lost in loss record 1 of 3
==167139==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167139==    by 0x4075E6: ft_strjoin (get_next_line_utils.c:58)
==167139==    by 0x4074A2: get_next_line (get_next_line.c:84)
==167139==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167139==    by 0x4054D7: main (mandatory.cpp:46)
==167139== 
==167139== 43 bytes in 1 blocks are definitely lost in loss record 2 of 3
==167139==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167139==    by 0x40731E: get_next_line (get_next_line.c:27)
==167139==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167139==    by 0x4054E9: main (mandatory.cpp:46)
==167139== 
==167139== 43 bytes in 1 blocks are definitely lost in loss record 3 of 3
==167139==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167139==    by 0x40731E: get_next_line (get_next_line.c:27)
==167139==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167139==    by 0x4054F5: main (mandatory.cpp:46)
==167139== 
==167144== Invalid write of size 1
==167144==    at 0x407449: get_next_line (get_next_line.c:69)
==167144==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167144==    by 0x405715: main (mandatory.cpp:52)
==167144==  Address 0x4de5fe0 is 0 bytes inside a block of size 43 free'd
==167144==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167144==    by 0x407984: ft_strdup2 (get_next_line_utils.c:205)
==167144==    by 0x40743D: get_next_line (get_next_line.c:68)
==167144==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167144==    by 0x405715: main (mandatory.cpp:52)
==167144==  Block was alloc'd at
==167144==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167144==    by 0x4075E6: ft_strjoin (get_next_line_utils.c:58)
==167144==    by 0x4074A2: get_next_line (get_next_line.c:84)
==167144==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167144==    by 0x405715: main (mandatory.cpp:52)
==167144== 
==167144== Invalid read of size 1
==167144==    at 0x407540: ft_strchr (get_next_line_utils.c:25)
==167144==    by 0x40734F: get_next_line (get_next_line.c:33)
==167144==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167144==    by 0x405721: main (mandatory.cpp:52)
==167144==  Address 0x4de5fe0 is 0 bytes inside a block of size 43 free'd
==167144==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167144==    by 0x407984: ft_strdup2 (get_next_line_utils.c:205)
==167144==    by 0x40743D: get_next_line (get_next_line.c:68)
==167144==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167144==    by 0x405715: main (mandatory.cpp:52)
==167144==  Block was alloc'd at
==167144==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167144==    by 0x4075E6: ft_strjoin (get_next_line_utils.c:58)
==167144==    by 0x4074A2: get_next_line (get_next_line.c:84)
==167144==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167144==    by 0x405715: main (mandatory.cpp:52)
==167144== 
==167144== Invalid read of size 1
==167144==    at 0x4073DD: get_next_line (get_next_line.c:58)
==167144==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167144==    by 0x405721: main (mandatory.cpp:52)
==167144==  Address 0x4de5fe0 is 0 bytes inside a block of size 43 free'd
==167144==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167144==    by 0x407984: ft_strdup2 (get_next_line_utils.c:205)
==167144==    by 0x40743D: get_next_line (get_next_line.c:68)
==167144==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167144==    by 0x405715: main (mandatory.cpp:52)
==167144==  Block was alloc'd at
==167144==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167144==    by 0x4075E6: ft_strjoin (get_next_line_utils.c:58)
==167144==    by 0x4074A2: get_next_line (get_next_line.c:84)
==167144==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167144==    by 0x405715: main (mandatory.cpp:52)
==167144== 
==167144== 43 bytes in 1 blocks are definitely lost in loss record 1 of 2
==167144==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167144==    by 0x40731E: get_next_line (get_next_line.c:27)
==167144==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167144==    by 0x405715: main (mandatory.cpp:52)
==167144== 
==167144== 43 bytes in 1 blocks are definitely lost in loss record 2 of 2
==167144==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167144==    by 0x40731E: get_next_line (get_next_line.c:27)
==167144==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167144==    by 0x405721: main (mandatory.cpp:52)
==167144== 
==167145== 43 bytes in 1 blocks are definitely lost in loss record 2 of 3
==167145==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167145==    by 0x4075E6: ft_strjoin (get_next_line_utils.c:58)
==167145==    by 0x4074A2: get_next_line (get_next_line.c:84)
==167145==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167145==    by 0x405941: main (mandatory.cpp:57)
==167145== 
==167145== 43 bytes in 1 blocks are definitely lost in loss record 3 of 3
==167145==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167145==    by 0x40731E: get_next_line (get_next_line.c:27)
==167145==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167145==    by 0x405991: main (mandatory.cpp:57)
==167145== 
==167150== Invalid write of size 1
==167150==    at 0x407449: get_next_line (get_next_line.c:69)
==167150==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167150==    by 0x405BBB: main (mandatory.cpp:68)
==167150==  Address 0x4de6670 is 0 bytes inside a block of size 44 free'd
==167150==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167150==    by 0x407984: ft_strdup2 (get_next_line_utils.c:205)
==167150==    by 0x40743D: get_next_line (get_next_line.c:68)
==167150==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167150==    by 0x405BBB: main (mandatory.cpp:68)
==167150==  Block was alloc'd at
==167150==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167150==    by 0x4075E6: ft_strjoin (get_next_line_utils.c:58)
==167150==    by 0x4074A2: get_next_line (get_next_line.c:84)
==167150==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167150==    by 0x405BBB: main (mandatory.cpp:68)
==167150== 
==167150== Invalid read of size 1
==167150==    at 0x407540: ft_strchr (get_next_line_utils.c:25)
==167150==    by 0x40734F: get_next_line (get_next_line.c:33)
==167150==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167150==    by 0x405BC7: main (mandatory.cpp:68)
==167150==  Address 0x4de6670 is 0 bytes inside a block of size 44 free'd
==167150==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167150==    by 0x407984: ft_strdup2 (get_next_line_utils.c:205)
==167150==    by 0x40743D: get_next_line (get_next_line.c:68)
==167150==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167150==    by 0x405BBB: main (mandatory.cpp:68)
==167150==  Block was alloc'd at
==167150==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167150==    by 0x4075E6: ft_strjoin (get_next_line_utils.c:58)
==167150==    by 0x4074A2: get_next_line (get_next_line.c:84)
==167150==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167150==    by 0x405BBB: main (mandatory.cpp:68)
==167150== 
==167150== Invalid read of size 1
==167150==    at 0x4073DD: get_next_line (get_next_line.c:58)
==167150==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167150==    by 0x405BC7: main (mandatory.cpp:68)
==167150==  Address 0x4de6670 is 0 bytes inside a block of size 44 free'd
==167150==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167150==    by 0x407984: ft_strdup2 (get_next_line_utils.c:205)
==167150==    by 0x40743D: get_next_line (get_next_line.c:68)
==167150==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167150==    by 0x405BBB: main (mandatory.cpp:68)
==167150==  Block was alloc'd at
==167150==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167150==    by 0x4075E6: ft_strjoin (get_next_line_utils.c:58)
==167150==    by 0x4074A2: get_next_line (get_next_line.c:84)
==167150==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167150==    by 0x405BBB: main (mandatory.cpp:68)
==167150== 
==167150== 43 bytes in 1 blocks are definitely lost in loss record 1 of 2
==167150==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167150==    by 0x40731E: get_next_line (get_next_line.c:27)
==167150==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167150==    by 0x405BBB: main (mandatory.cpp:68)
==167150== 
==167150== 43 bytes in 1 blocks are definitely lost in loss record 2 of 2
==167150==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167150==    by 0x40731E: get_next_line (get_next_line.c:27)
==167150==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167150==    by 0x405BC7: main (mandatory.cpp:68)
==167150== 
==167156== Invalid write of size 1
==167156==    at 0x407449: get_next_line (get_next_line.c:69)
==167156==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167156==    by 0x405DF9: main (mandatory.cpp:73)
==167156==  Address 0x4de6a60 is 0 bytes inside a block of size 2 free'd
==167156==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167156==    by 0x407984: ft_strdup2 (get_next_line_utils.c:205)
==167156==    by 0x40743D: get_next_line (get_next_line.c:68)
==167156==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167156==    by 0x405DF9: main (mandatory.cpp:73)
==167156==  Block was alloc'd at
==167156==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167156==    by 0x407875: f_del_front_bn (get_next_line_utils.c:170)
==167156==    by 0x4074E1: get_next_line (get_next_line.c:89)
==167156==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167156==    by 0x405DE7: main (mandatory.cpp:73)
==167156== 
==167156== Invalid read of size 1
==167156==    at 0x407540: ft_strchr (get_next_line_utils.c:25)
==167156==    by 0x40734F: get_next_line (get_next_line.c:33)
==167156==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167156==    by 0x405E05: main (mandatory.cpp:73)
==167156==  Address 0x4de6a60 is 0 bytes inside a block of size 2 free'd
==167156==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167156==    by 0x407984: ft_strdup2 (get_next_line_utils.c:205)
==167156==    by 0x40743D: get_next_line (get_next_line.c:68)
==167156==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167156==    by 0x405DF9: main (mandatory.cpp:73)
==167156==  Block was alloc'd at
==167156==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167156==    by 0x407875: f_del_front_bn (get_next_line_utils.c:170)
==167156==    by 0x4074E1: get_next_line (get_next_line.c:89)
==167156==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167156==    by 0x405DE7: main (mandatory.cpp:73)
==167156== 
==167156== Invalid read of size 1
==167156==    at 0x4073DD: get_next_line (get_next_line.c:58)
==167156==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167156==    by 0x405E05: main (mandatory.cpp:73)
==167156==  Address 0x4de6a60 is 0 bytes inside a block of size 2 free'd
==167156==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167156==    by 0x407984: ft_strdup2 (get_next_line_utils.c:205)
==167156==    by 0x40743D: get_next_line (get_next_line.c:68)
==167156==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167156==    by 0x405DF9: main (mandatory.cpp:73)
==167156==  Block was alloc'd at
==167156==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167156==    by 0x407875: f_del_front_bn (get_next_line_utils.c:170)
==167156==    by 0x4074E1: get_next_line (get_next_line.c:89)
==167156==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167156==    by 0x405DE7: main (mandatory.cpp:73)
==167156== 
==167156== 43 bytes in 1 blocks are definitely lost in loss record 1 of 3
==167156==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167156==    by 0x40731E: get_next_line (get_next_line.c:27)
==167156==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167156==    by 0x405DF9: main (mandatory.cpp:73)
==167156== 
==167156== 43 bytes in 1 blocks are definitely lost in loss record 2 of 3
==167156==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167156==    by 0x40731E: get_next_line (get_next_line.c:27)
==167156==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167156==    by 0x405E05: main (mandatory.cpp:73)
==167156== 
==167156== 45 bytes in 1 blocks are definitely lost in loss record 3 of 3
==167156==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167156==    by 0x4075E6: ft_strjoin (get_next_line_utils.c:58)
==167156==    by 0x4074A2: get_next_line (get_next_line.c:84)
==167156==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167156==    by 0x405DE7: main (mandatory.cpp:73)
==167156== 
==167159== 6 bytes in 1 blocks are definitely lost in loss record 2 of 7
==167159==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167159==    by 0x4075E6: ft_strjoin (get_next_line_utils.c:58)
==167159==    by 0x4074A2: get_next_line (get_next_line.c:84)
==167159==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167159==    by 0x406025: main (mandatory.cpp:79)
==167159== 
==167159== 43 bytes in 1 blocks are definitely lost in loss record 3 of 7
==167159==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167159==    by 0x40731E: get_next_line (get_next_line.c:27)
==167159==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167159==    by 0x406037: main (mandatory.cpp:79)
==167159== 
==167159== 43 bytes in 1 blocks are definitely lost in loss record 4 of 7
==167159==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167159==    by 0x40731E: get_next_line (get_next_line.c:27)
==167159==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167159==    by 0x406049: main (mandatory.cpp:79)
==167159== 
==167159== 43 bytes in 1 blocks are definitely lost in loss record 5 of 7
==167159==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167159==    by 0x40731E: get_next_line (get_next_line.c:27)
==167159==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167159==    by 0x40605B: main (mandatory.cpp:79)
==167159== 
==167159== 43 bytes in 1 blocks are definitely lost in loss record 6 of 7
==167159==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167159==    by 0x40731E: get_next_line (get_next_line.c:27)
==167159==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167159==    by 0x40606D: main (mandatory.cpp:79)
==167159== 
==167159== 43 bytes in 1 blocks are definitely lost in loss record 7 of 7
==167159==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167159==    by 0x40731E: get_next_line (get_next_line.c:27)
==167159==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167159==    by 0x406079: main (mandatory.cpp:79)
==167159== 
==167162== Invalid write of size 1
==167162==    at 0x407449: get_next_line (get_next_line.c:69)
==167162==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167162==    by 0x4062E1: main (mandatory.cpp:88)
==167162==  Address 0x4de7730 is 0 bytes inside a block of size 42 free'd
==167162==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167162==    by 0x407984: ft_strdup2 (get_next_line_utils.c:205)
==167162==    by 0x40743D: get_next_line (get_next_line.c:68)
==167162==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167162==    by 0x4062E1: main (mandatory.cpp:88)
==167162==  Block was alloc'd at
==167162==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167162==    by 0x4075E6: ft_strjoin (get_next_line_utils.c:58)
==167162==    by 0x4074A2: get_next_line (get_next_line.c:84)
==167162==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167162==    by 0x4062E1: main (mandatory.cpp:88)
==167162== 
==167162== Invalid read of size 1
==167162==    at 0x407540: ft_strchr (get_next_line_utils.c:25)
==167162==    by 0x40734F: get_next_line (get_next_line.c:33)
==167162==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167162==    by 0x4062ED: main (mandatory.cpp:88)
==167162==  Address 0x4de7730 is 0 bytes inside a block of size 42 free'd
==167162==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167162==    by 0x407984: ft_strdup2 (get_next_line_utils.c:205)
==167162==    by 0x40743D: get_next_line (get_next_line.c:68)
==167162==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167162==    by 0x4062E1: main (mandatory.cpp:88)
==167162==  Block was alloc'd at
==167162==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167162==    by 0x4075E6: ft_strjoin (get_next_line_utils.c:58)
==167162==    by 0x4074A2: get_next_line (get_next_line.c:84)
==167162==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167162==    by 0x4062E1: main (mandatory.cpp:88)
==167162== 
==167162== Invalid read of size 1
==167162==    at 0x4073DD: get_next_line (get_next_line.c:58)
==167162==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167162==    by 0x4062ED: main (mandatory.cpp:88)
==167162==  Address 0x4de7730 is 0 bytes inside a block of size 42 free'd
==167162==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167162==    by 0x407984: ft_strdup2 (get_next_line_utils.c:205)
==167162==    by 0x40743D: get_next_line (get_next_line.c:68)
==167162==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167162==    by 0x4062E1: main (mandatory.cpp:88)
==167162==  Block was alloc'd at
==167162==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167162==    by 0x4075E6: ft_strjoin (get_next_line_utils.c:58)
==167162==    by 0x4074A2: get_next_line (get_next_line.c:84)
==167162==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167162==    by 0x4062E1: main (mandatory.cpp:88)
==167162== 
==167162== 43 bytes in 1 blocks are definitely lost in loss record 1 of 6
==167162==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167162==    by 0x4075E6: ft_strjoin (get_next_line_utils.c:58)
==167162==    by 0x4074A2: get_next_line (get_next_line.c:84)
==167162==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167162==    by 0x406299: main (mandatory.cpp:88)
==167162== 
==167162== 43 bytes in 1 blocks are definitely lost in loss record 2 of 6
==167162==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167162==    by 0x40731E: get_next_line (get_next_line.c:27)
==167162==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167162==    by 0x4062E1: main (mandatory.cpp:88)
==167162== 
==167162== 43 bytes in 1 blocks are definitely lost in loss record 3 of 6
==167162==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167162==    by 0x40731E: get_next_line (get_next_line.c:27)
==167162==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167162==    by 0x4062ED: main (mandatory.cpp:88)
==167162== 
==167162== 82 bytes in 1 blocks are definitely lost in loss record 4 of 6
==167162==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167162==    by 0x4075E6: ft_strjoin (get_next_line_utils.c:58)
==167162==    by 0x4074A2: get_next_line (get_next_line.c:84)
==167162==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167162==    by 0x4062CF: main (mandatory.cpp:88)
==167162== 
==167162== 84 bytes in 1 blocks are definitely lost in loss record 5 of 6
==167162==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167162==    by 0x4075E6: ft_strjoin (get_next_line_utils.c:58)
==167162==    by 0x4074A2: get_next_line (get_next_line.c:84)
==167162==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167162==    by 0x4062BD: main (mandatory.cpp:88)
==167162== 
==167162== 85 bytes in 1 blocks are definitely lost in loss record 6 of 6
==167162==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167162==    by 0x4075E6: ft_strjoin (get_next_line_utils.c:58)
==167162==    by 0x4074A2: get_next_line (get_next_line.c:84)
==167162==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167162==    by 0x4062AB: main (mandatory.cpp:88)
==167162== 
==167163== 42 bytes in 1 blocks are definitely lost in loss record 2 of 7
==167163==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167163==    by 0x4075E6: ft_strjoin (get_next_line_utils.c:58)
==167163==    by 0x4074A2: get_next_line (get_next_line.c:84)
==167163==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167163==    by 0x406555: main (mandatory.cpp:97)
==167163== 
==167163== 43 bytes in 1 blocks are definitely lost in loss record 3 of 7
==167163==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167163==    by 0x4075E6: ft_strjoin (get_next_line_utils.c:58)
==167163==    by 0x4074A2: get_next_line (get_next_line.c:84)
==167163==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167163==    by 0x40650D: main (mandatory.cpp:97)
==167163== 
==167163== 43 bytes in 1 blocks are definitely lost in loss record 4 of 7
==167163==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167163==    by 0x4075E6: ft_strjoin (get_next_line_utils.c:58)
==167163==    by 0x4074A2: get_next_line (get_next_line.c:84)
==167163==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167163==    by 0x406543: main (mandatory.cpp:97)
==167163== 
==167163== 43 bytes in 1 blocks are definitely lost in loss record 5 of 7
==167163==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167163==    by 0x40731E: get_next_line (get_next_line.c:27)
==167163==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167163==    by 0x406561: main (mandatory.cpp:97)
==167163== 
==167163== 44 bytes in 1 blocks are definitely lost in loss record 6 of 7
==167163==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167163==    by 0x4075E6: ft_strjoin (get_next_line_utils.c:58)
==167163==    by 0x4074A2: get_next_line (get_next_line.c:84)
==167163==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167163==    by 0x40651F: main (mandatory.cpp:97)
==167163== 
==167163== 44 bytes in 1 blocks are definitely lost in loss record 7 of 7
==167163==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167163==    by 0x4075E6: ft_strjoin (get_next_line_utils.c:58)
==167163==    by 0x4074A2: get_next_line (get_next_line.c:84)
==167163==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167163==    by 0x406531: main (mandatory.cpp:97)
==167163== 
==167167== Invalid write of size 1
==167167==    at 0x407449: get_next_line (get_next_line.c:69)
==167167==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167167==    by 0x406811: main (mandatory.cpp:106)
==167167==  Address 0x4de8240 is 0 bytes inside a block of size 42 free'd
==167167==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167167==    by 0x407984: ft_strdup2 (get_next_line_utils.c:205)
==167167==    by 0x40743D: get_next_line (get_next_line.c:68)
==167167==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167167==    by 0x406811: main (mandatory.cpp:106)
==167167==  Block was alloc'd at
==167167==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167167==    by 0x4075E6: ft_strjoin (get_next_line_utils.c:58)
==167167==    by 0x4074A2: get_next_line (get_next_line.c:84)
==167167==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167167==    by 0x406811: main (mandatory.cpp:106)
==167167== 
==167167== Invalid read of size 1
==167167==    at 0x407540: ft_strchr (get_next_line_utils.c:25)
==167167==    by 0x40734F: get_next_line (get_next_line.c:33)
==167167==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167167==    by 0x40681D: main (mandatory.cpp:106)
==167167==  Address 0x4de8240 is 0 bytes inside a block of size 42 free'd
==167167==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167167==    by 0x407984: ft_strdup2 (get_next_line_utils.c:205)
==167167==    by 0x40743D: get_next_line (get_next_line.c:68)
==167167==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167167==    by 0x406811: main (mandatory.cpp:106)
==167167==  Block was alloc'd at
==167167==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167167==    by 0x4075E6: ft_strjoin (get_next_line_utils.c:58)
==167167==    by 0x4074A2: get_next_line (get_next_line.c:84)
==167167==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167167==    by 0x406811: main (mandatory.cpp:106)
==167167== 
==167167== Invalid read of size 1
==167167==    at 0x4073DD: get_next_line (get_next_line.c:58)
==167167==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167167==    by 0x40681D: main (mandatory.cpp:106)
==167167==  Address 0x4de8240 is 0 bytes inside a block of size 42 free'd
==167167==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167167==    by 0x407984: ft_strdup2 (get_next_line_utils.c:205)
==167167==    by 0x40743D: get_next_line (get_next_line.c:68)
==167167==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167167==    by 0x406811: main (mandatory.cpp:106)
==167167==  Block was alloc'd at
==167167==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167167==    by 0x4075E6: ft_strjoin (get_next_line_utils.c:58)
==167167==    by 0x4074A2: get_next_line (get_next_line.c:84)
==167167==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167167==    by 0x406811: main (mandatory.cpp:106)
==167167== 
==167167== 43 bytes in 1 blocks are definitely lost in loss record 1 of 10
==167167==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167167==    by 0x4075E6: ft_strjoin (get_next_line_utils.c:58)
==167167==    by 0x4074A2: get_next_line (get_next_line.c:84)
==167167==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167167==    by 0x406781: main (mandatory.cpp:106)
==167167== 
==167167== 43 bytes in 1 blocks are definitely lost in loss record 2 of 10
==167167==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167167==    by 0x4075E6: ft_strjoin (get_next_line_utils.c:58)
==167167==    by 0x4074A2: get_next_line (get_next_line.c:84)
==167167==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167167==    by 0x406793: main (mandatory.cpp:106)
==167167== 
==167167== 43 bytes in 1 blocks are definitely lost in loss record 3 of 10
==167167==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167167==    by 0x40731E: get_next_line (get_next_line.c:27)
==167167==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167167==    by 0x4067B7: main (mandatory.cpp:106)
==167167== 
==167167== 43 bytes in 1 blocks are definitely lost in loss record 4 of 10
==167167==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167167==    by 0x40731E: get_next_line (get_next_line.c:27)
==167167==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167167==    by 0x4067DB: main (mandatory.cpp:106)
==167167== 
==167167== 43 bytes in 1 blocks are definitely lost in loss record 5 of 10
==167167==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167167==    by 0x40731E: get_next_line (get_next_line.c:27)
==167167==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167167==    by 0x4067FF: main (mandatory.cpp:106)
==167167== 
==167167== 43 bytes in 1 blocks are definitely lost in loss record 6 of 10
==167167==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167167==    by 0x40731E: get_next_line (get_next_line.c:27)
==167167==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167167==    by 0x406811: main (mandatory.cpp:106)
==167167== 
==167167== 43 bytes in 1 blocks are definitely lost in loss record 7 of 10
==167167==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167167==    by 0x40731E: get_next_line (get_next_line.c:27)
==167167==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167167==    by 0x40681D: main (mandatory.cpp:106)
==167167== 
==167167== 79 bytes in 1 blocks are definitely lost in loss record 8 of 10
==167167==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167167==    by 0x4075E6: ft_strjoin (get_next_line_utils.c:58)
==167167==    by 0x4074A2: get_next_line (get_next_line.c:84)
==167167==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167167==    by 0x4067ED: main (mandatory.cpp:106)
==167167== 
==167167== 82 bytes in 1 blocks are definitely lost in loss record 9 of 10
==167167==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167167==    by 0x4075E6: ft_strjoin (get_next_line_utils.c:58)
==167167==    by 0x4074A2: get_next_line (get_next_line.c:84)
==167167==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167167==    by 0x4067C9: main (mandatory.cpp:106)
==167167== 
==167167== 84 bytes in 1 blocks are definitely lost in loss record 10 of 10
==167167==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167167==    by 0x4075E6: ft_strjoin (get_next_line_utils.c:58)
==167167==    by 0x4074A2: get_next_line (get_next_line.c:84)
==167167==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167167==    by 0x4067A5: main (mandatory.cpp:106)
==167167== 
==167174== 43 bytes in 1 blocks are definitely lost in loss record 2 of 11
==167174==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167174==    by 0x4075E6: ft_strjoin (get_next_line_utils.c:58)
==167174==    by 0x4074A2: get_next_line (get_next_line.c:84)
==167174==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167174==    by 0x406A3D: main (mandatory.cpp:119)
==167174== 
==167174== 43 bytes in 1 blocks are definitely lost in loss record 3 of 11
==167174==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167174==    by 0x4075E6: ft_strjoin (get_next_line_utils.c:58)
==167174==    by 0x4074A2: get_next_line (get_next_line.c:84)
==167174==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167174==    by 0x406A4F: main (mandatory.cpp:119)
==167174== 
==167174== 43 bytes in 1 blocks are definitely lost in loss record 4 of 11
==167174==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167174==    by 0x40731E: get_next_line (get_next_line.c:27)
==167174==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167174==    by 0x406A73: main (mandatory.cpp:119)
==167174== 
==167174== 43 bytes in 1 blocks are definitely lost in loss record 5 of 11
==167174==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167174==    by 0x40731E: get_next_line (get_next_line.c:27)
==167174==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167174==    by 0x406A97: main (mandatory.cpp:119)
==167174== 
==167174== 43 bytes in 1 blocks are definitely lost in loss record 6 of 11
==167174==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167174==    by 0x40731E: get_next_line (get_next_line.c:27)
==167174==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167174==    by 0x406ABB: main (mandatory.cpp:119)
==167174== 
==167174== 43 bytes in 1 blocks are definitely lost in loss record 7 of 11
==167174==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167174==    by 0x4075E6: ft_strjoin (get_next_line_utils.c:58)
==167174==    by 0x4074A2: get_next_line (get_next_line.c:84)
==167174==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167174==    by 0x406ACD: main (mandatory.cpp:119)
==167174== 
==167174== 43 bytes in 1 blocks are definitely lost in loss record 8 of 11
==167174==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167174==    by 0x40731E: get_next_line (get_next_line.c:27)
==167174==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167174==    by 0x406AD9: main (mandatory.cpp:119)
==167174== 
==167174== 79 bytes in 1 blocks are definitely lost in loss record 9 of 11
==167174==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167174==    by 0x4075E6: ft_strjoin (get_next_line_utils.c:58)
==167174==    by 0x4074A2: get_next_line (get_next_line.c:84)
==167174==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167174==    by 0x406AA9: main (mandatory.cpp:119)
==167174== 
==167174== 82 bytes in 1 blocks are definitely lost in loss record 10 of 11
==167174==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167174==    by 0x4075E6: ft_strjoin (get_next_line_utils.c:58)
==167174==    by 0x4074A2: get_next_line (get_next_line.c:84)
==167174==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167174==    by 0x406A85: main (mandatory.cpp:119)
==167174== 
==167174== 84 bytes in 1 blocks are definitely lost in loss record 11 of 11
==167174==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167174==    by 0x4075E6: ft_strjoin (get_next_line_utils.c:58)
==167174==    by 0x4074A2: get_next_line (get_next_line.c:84)
==167174==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167174==    by 0x406A61: main (mandatory.cpp:119)
==167174== 
==167178== Invalid write of size 1
==167178==    at 0x407449: get_next_line (get_next_line.c:69)
==167178==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167178==    by 0x406CF9: main (mandatory.cpp:132)
==167178==  Address 0x4f0f9e0 is 0 bytes inside a block of size 10,001 free'd
==167178==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167178==    by 0x407984: ft_strdup2 (get_next_line_utils.c:205)
==167178==    by 0x40743D: get_next_line (get_next_line.c:68)
==167178==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167178==    by 0x406CF9: main (mandatory.cpp:132)
==167178==  Block was alloc'd at
==167178==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167178==    by 0x4075E6: ft_strjoin (get_next_line_utils.c:58)
==167178==    by 0x4074A2: get_next_line (get_next_line.c:84)
==167178==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167178==    by 0x406CF9: main (mandatory.cpp:132)
==167178== 
==167178== Invalid read of size 1
==167178==    at 0x407540: ft_strchr (get_next_line_utils.c:25)
==167178==    by 0x40734F: get_next_line (get_next_line.c:33)
==167178==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167178==    by 0x406D05: main (mandatory.cpp:132)
==167178==  Address 0x4f0f9e0 is 0 bytes inside a block of size 10,001 free'd
==167178==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167178==    by 0x407984: ft_strdup2 (get_next_line_utils.c:205)
==167178==    by 0x40743D: get_next_line (get_next_line.c:68)
==167178==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167178==    by 0x406CF9: main (mandatory.cpp:132)
==167178==  Block was alloc'd at
==167178==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167178==    by 0x4075E6: ft_strjoin (get_next_line_utils.c:58)
==167178==    by 0x4074A2: get_next_line (get_next_line.c:84)
==167178==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167178==    by 0x406CF9: main (mandatory.cpp:132)
==167178== 
==167178== Invalid read of size 1
==167178==    at 0x4073DD: get_next_line (get_next_line.c:58)
==167178==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167178==    by 0x406D05: main (mandatory.cpp:132)
==167178==  Address 0x4f0f9e0 is 0 bytes inside a block of size 10,001 free'd
==167178==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167178==    by 0x407984: ft_strdup2 (get_next_line_utils.c:205)
==167178==    by 0x40743D: get_next_line (get_next_line.c:68)
==167178==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167178==    by 0x406CF9: main (mandatory.cpp:132)
==167178==  Block was alloc'd at
==167178==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167178==    by 0x4075E6: ft_strjoin (get_next_line_utils.c:58)
==167178==    by 0x4074A2: get_next_line (get_next_line.c:84)
==167178==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167178==    by 0x406CF9: main (mandatory.cpp:132)
==167178== 
==167178== 43 bytes in 1 blocks are definitely lost in loss record 1 of 2
==167178==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167178==    by 0x40731E: get_next_line (get_next_line.c:27)
==167178==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167178==    by 0x406CF9: main (mandatory.cpp:132)
==167178== 
==167178== 43 bytes in 1 blocks are definitely lost in loss record 2 of 2
==167178==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167178==    by 0x40731E: get_next_line (get_next_line.c:27)
==167178==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167178==    by 0x406D05: main (mandatory.cpp:132)
==167178== 
==167181== 43 bytes in 1 blocks are definitely lost in loss record 2 of 3
==167181==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167181==    by 0x40731E: get_next_line (get_next_line.c:27)
==167181==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167181==    by 0x406F31: main (mandatory.cpp:136)
==167181== 
==167181== 10,002 bytes in 1 blocks are definitely lost in loss record 3 of 3
==167181==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167181==    by 0x4075E6: ft_strjoin (get_next_line_utils.c:58)
==167181==    by 0x4074A2: get_next_line (get_next_line.c:84)
==167181==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167181==    by 0x406F25: main (mandatory.cpp:136)
==167181== 
==167182== Invalid read of size 1
==167182==    at 0x484FBD4: strcmp (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167182==    by 0x402CFA: gnl(int, char const*) (gnl.cpp:24)
==167182==    by 0x407150: main (mandatory.cpp:141)
==167182==  Address 0x0 is not stack'd, malloc'd or (recently) free'd
==167182== 
==167216== Invalid write of size 1
==167216==    at 0x407387: get_next_line (get_next_line.c:47)
==167216==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167216==    by 0x404BB6: main (mandatory.cpp:25)
==167216==  Address 0x51d203f is 1 bytes before a block of size 10,000,001 alloc'd
==167216==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167216==    by 0x4072EC: get_next_line (get_next_line.c:27)
==167216==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167216==    by 0x404BB6: main (mandatory.cpp:25)
==167216== 
==167216== Invalid write of size 1
==167216==    at 0x407387: get_next_line (get_next_line.c:47)
==167216==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167216==    by 0x404BD8: main (mandatory.cpp:25)
==167216==  Address 0x5b5c03f is 1 bytes before a block of size 10,000,001 alloc'd
==167216==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167216==    by 0x4072EC: get_next_line (get_next_line.c:27)
==167216==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167216==    by 0x404BD8: main (mandatory.cpp:25)
==167216== 
==167216== 10,000,001 bytes in 1 blocks are possibly lost in loss record 1 of 2
==167216==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167216==    by 0x4072EC: get_next_line (get_next_line.c:27)
==167216==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167216==    by 0x404BB6: main (mandatory.cpp:25)
==167216== 
==167216== 10,000,001 bytes in 1 blocks are definitely lost in loss record 2 of 2
==167216==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167216==    by 0x4072EC: get_next_line (get_next_line.c:27)
==167216==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167216==    by 0x404BD8: main (mandatory.cpp:25)
==167216== 
==167220== Invalid read of size 1
==167220==    at 0x4073AB: get_next_line (get_next_line.c:58)
==167220==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167220==    by 0x404E53: main (mandatory.cpp:31)
==167220==  Address 0x0 is not stack'd, malloc'd or (recently) free'd
==167220== 
==167226== 2 bytes in 1 blocks are definitely lost in loss record 2 of 3
==167226==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167226==    by 0x4075B4: ft_strjoin (get_next_line_utils.c:58)
==167226==    by 0x407470: get_next_line (get_next_line.c:84)
==167226==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167226==    by 0x40507F: main (mandatory.cpp:36)
==167226== 
==167226== 10,000,001 bytes in 1 blocks are definitely lost in loss record 3 of 3
==167226==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167226==    by 0x4072EC: get_next_line (get_next_line.c:27)
==167226==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167226==    by 0x40508B: main (mandatory.cpp:36)
==167226== 
==167231== Invalid write of size 1
==167231==    at 0x407417: get_next_line (get_next_line.c:69)
==167231==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167231==    by 0x4052AB: main (mandatory.cpp:41)
==167231==  Address 0x4de5970 is 0 bytes inside a block of size 42 free'd
==167231==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167231==    by 0x407952: ft_strdup2 (get_next_line_utils.c:205)
==167231==    by 0x40740B: get_next_line (get_next_line.c:68)
==167231==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167231==    by 0x4052AB: main (mandatory.cpp:41)
==167231==  Block was alloc'd at
==167231==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167231==    by 0x4075B4: ft_strjoin (get_next_line_utils.c:58)
==167231==    by 0x407470: get_next_line (get_next_line.c:84)
==167231==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167231==    by 0x4052AB: main (mandatory.cpp:41)
==167231== 
==167231== Invalid read of size 1
==167231==    at 0x40750E: ft_strchr (get_next_line_utils.c:25)
==167231==    by 0x40731D: get_next_line (get_next_line.c:33)
==167231==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167231==    by 0x4052B7: main (mandatory.cpp:41)
==167231==  Address 0x4de5970 is 0 bytes inside a block of size 42 free'd
==167231==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167231==    by 0x407952: ft_strdup2 (get_next_line_utils.c:205)
==167231==    by 0x40740B: get_next_line (get_next_line.c:68)
==167231==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167231==    by 0x4052AB: main (mandatory.cpp:41)
==167231==  Block was alloc'd at
==167231==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167231==    by 0x4075B4: ft_strjoin (get_next_line_utils.c:58)
==167231==    by 0x407470: get_next_line (get_next_line.c:84)
==167231==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167231==    by 0x4052AB: main (mandatory.cpp:41)
==167231== 
==167231== Invalid read of size 1
==167231==    at 0x4073AB: get_next_line (get_next_line.c:58)
==167231==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167231==    by 0x4052B7: main (mandatory.cpp:41)
==167231==  Address 0x4de5970 is 0 bytes inside a block of size 42 free'd
==167231==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167231==    by 0x407952: ft_strdup2 (get_next_line_utils.c:205)
==167231==    by 0x40740B: get_next_line (get_next_line.c:68)
==167231==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167231==    by 0x4052AB: main (mandatory.cpp:41)
==167231==  Block was alloc'd at
==167231==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167231==    by 0x4075B4: ft_strjoin (get_next_line_utils.c:58)
==167231==    by 0x407470: get_next_line (get_next_line.c:84)
==167231==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167231==    by 0x4052AB: main (mandatory.cpp:41)
==167231== 
==167231== 10,000,001 bytes in 1 blocks are possibly lost in loss record 1 of 2
==167231==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167231==    by 0x4072EC: get_next_line (get_next_line.c:27)
==167231==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167231==    by 0x4052AB: main (mandatory.cpp:41)
==167231== 
==167231== 10,000,001 bytes in 1 blocks are definitely lost in loss record 2 of 2
==167231==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167231==    by 0x4072EC: get_next_line (get_next_line.c:27)
==167231==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167231==    by 0x4052B7: main (mandatory.cpp:41)
==167231== 
==167236== Invalid write of size 1
==167236==    at 0x407417: get_next_line (get_next_line.c:69)
==167236==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167236==    by 0x4054E9: main (mandatory.cpp:46)
==167236==  Address 0x4de5d60 is 0 bytes inside a block of size 2 free'd
==167236==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167236==    by 0x407952: ft_strdup2 (get_next_line_utils.c:205)
==167236==    by 0x40740B: get_next_line (get_next_line.c:68)
==167236==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167236==    by 0x4054E9: main (mandatory.cpp:46)
==167236==  Block was alloc'd at
==167236==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167236==    by 0x407843: f_del_front_bn (get_next_line_utils.c:170)
==167236==    by 0x4074AF: get_next_line (get_next_line.c:89)
==167236==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167236==    by 0x4054D7: main (mandatory.cpp:46)
==167236== 
==167236== Invalid read of size 1
==167236==    at 0x40750E: ft_strchr (get_next_line_utils.c:25)
==167236==    by 0x40731D: get_next_line (get_next_line.c:33)
==167236==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167236==    by 0x4054F5: main (mandatory.cpp:46)
==167236==  Address 0x4de5d60 is 0 bytes inside a block of size 2 free'd
==167236==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167236==    by 0x407952: ft_strdup2 (get_next_line_utils.c:205)
==167236==    by 0x40740B: get_next_line (get_next_line.c:68)
==167236==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167236==    by 0x4054E9: main (mandatory.cpp:46)
==167236==  Block was alloc'd at
==167236==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167236==    by 0x407843: f_del_front_bn (get_next_line_utils.c:170)
==167236==    by 0x4074AF: get_next_line (get_next_line.c:89)
==167236==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167236==    by 0x4054D7: main (mandatory.cpp:46)
==167236== 
==167236== Invalid read of size 1
==167236==    at 0x4073AB: get_next_line (get_next_line.c:58)
==167236==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167236==    by 0x4054F5: main (mandatory.cpp:46)
==167236==  Address 0x4de5d60 is 0 bytes inside a block of size 2 free'd
==167236==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167236==    by 0x407952: ft_strdup2 (get_next_line_utils.c:205)
==167236==    by 0x40740B: get_next_line (get_next_line.c:68)
==167236==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167236==    by 0x4054E9: main (mandatory.cpp:46)
==167236==  Block was alloc'd at
==167236==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167236==    by 0x407843: f_del_front_bn (get_next_line_utils.c:170)
==167236==    by 0x4074AF: get_next_line (get_next_line.c:89)
==167236==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167236==    by 0x4054D7: main (mandatory.cpp:46)
==167236== 
==167236== 43 bytes in 1 blocks are definitely lost in loss record 1 of 3
==167236==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167236==    by 0x4075B4: ft_strjoin (get_next_line_utils.c:58)
==167236==    by 0x407470: get_next_line (get_next_line.c:84)
==167236==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167236==    by 0x4054D7: main (mandatory.cpp:46)
==167236== 
==167236== 10,000,001 bytes in 1 blocks are possibly lost in loss record 2 of 3
==167236==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167236==    by 0x4072EC: get_next_line (get_next_line.c:27)
==167236==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167236==    by 0x4054F5: main (mandatory.cpp:46)
==167236== 
==167236== 10,000,001 bytes in 1 blocks are definitely lost in loss record 3 of 3
==167236==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167236==    by 0x4072EC: get_next_line (get_next_line.c:27)
==167236==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167236==    by 0x4054E9: main (mandatory.cpp:46)
==167236== 
==167237== Invalid write of size 1
==167237==    at 0x407417: get_next_line (get_next_line.c:69)
==167237==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167237==    by 0x405715: main (mandatory.cpp:52)
==167237==  Address 0x4de5f90 is 0 bytes inside a block of size 43 free'd
==167237==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167237==    by 0x407952: ft_strdup2 (get_next_line_utils.c:205)
==167237==    by 0x40740B: get_next_line (get_next_line.c:68)
==167237==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167237==    by 0x405715: main (mandatory.cpp:52)
==167237==  Block was alloc'd at
==167237==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167237==    by 0x4075B4: ft_strjoin (get_next_line_utils.c:58)
==167237==    by 0x407470: get_next_line (get_next_line.c:84)
==167237==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167237==    by 0x405715: main (mandatory.cpp:52)
==167237== 
==167237== Invalid read of size 1
==167237==    at 0x40750E: ft_strchr (get_next_line_utils.c:25)
==167237==    by 0x40731D: get_next_line (get_next_line.c:33)
==167237==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167237==    by 0x405721: main (mandatory.cpp:52)
==167237==  Address 0x4de5f90 is 0 bytes inside a block of size 43 free'd
==167237==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167237==    by 0x407952: ft_strdup2 (get_next_line_utils.c:205)
==167237==    by 0x40740B: get_next_line (get_next_line.c:68)
==167237==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167237==    by 0x405715: main (mandatory.cpp:52)
==167237==  Block was alloc'd at
==167237==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167237==    by 0x4075B4: ft_strjoin (get_next_line_utils.c:58)
==167237==    by 0x407470: get_next_line (get_next_line.c:84)
==167237==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167237==    by 0x405715: main (mandatory.cpp:52)
==167237== 
==167237== Invalid read of size 1
==167237==    at 0x4073AB: get_next_line (get_next_line.c:58)
==167237==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167237==    by 0x405721: main (mandatory.cpp:52)
==167237==  Address 0x4de5f90 is 0 bytes inside a block of size 43 free'd
==167237==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167237==    by 0x407952: ft_strdup2 (get_next_line_utils.c:205)
==167237==    by 0x40740B: get_next_line (get_next_line.c:68)
==167237==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167237==    by 0x405715: main (mandatory.cpp:52)
==167237==  Block was alloc'd at
==167237==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167237==    by 0x4075B4: ft_strjoin (get_next_line_utils.c:58)
==167237==    by 0x407470: get_next_line (get_next_line.c:84)
==167237==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167237==    by 0x405715: main (mandatory.cpp:52)
==167237== 
==167237== 10,000,001 bytes in 1 blocks are possibly lost in loss record 1 of 2
==167237==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167237==    by 0x4072EC: get_next_line (get_next_line.c:27)
==167237==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167237==    by 0x405715: main (mandatory.cpp:52)
==167237== 
==167237== 10,000,001 bytes in 1 blocks are definitely lost in loss record 2 of 2
==167237==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167237==    by 0x4072EC: get_next_line (get_next_line.c:27)
==167237==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167237==    by 0x405721: main (mandatory.cpp:52)
==167237== 
==167278== Invalid write of size 1
==167278==    at 0x407417: get_next_line (get_next_line.c:69)
==167278==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167278==    by 0x405953: main (mandatory.cpp:57)
==167278==  Address 0x4de6380 is 0 bytes inside a block of size 2 free'd
==167278==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167278==    by 0x407952: ft_strdup2 (get_next_line_utils.c:205)
==167278==    by 0x40740B: get_next_line (get_next_line.c:68)
==167278==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167278==    by 0x405953: main (mandatory.cpp:57)
==167278==  Block was alloc'd at
==167278==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167278==    by 0x407843: f_del_front_bn (get_next_line_utils.c:170)
==167278==    by 0x4074AF: get_next_line (get_next_line.c:89)
==167278==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167278==    by 0x405941: main (mandatory.cpp:57)
==167278== 
==167278== Invalid read of size 1
==167278==    at 0x40750E: ft_strchr (get_next_line_utils.c:25)
==167278==    by 0x40731D: get_next_line (get_next_line.c:33)
==167278==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167278==    by 0x40595F: main (mandatory.cpp:57)
==167278==  Address 0x4de6380 is 0 bytes inside a block of size 2 free'd
==167278==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167278==    by 0x407952: ft_strdup2 (get_next_line_utils.c:205)
==167278==    by 0x40740B: get_next_line (get_next_line.c:68)
==167278==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167278==    by 0x405953: main (mandatory.cpp:57)
==167278==  Block was alloc'd at
==167278==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167278==    by 0x407843: f_del_front_bn (get_next_line_utils.c:170)
==167278==    by 0x4074AF: get_next_line (get_next_line.c:89)
==167278==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167278==    by 0x405941: main (mandatory.cpp:57)
==167278== 
==167278== Invalid read of size 1
==167278==    at 0x4073AB: get_next_line (get_next_line.c:58)
==167278==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167278==    by 0x40595F: main (mandatory.cpp:57)
==167278==  Address 0x4de6380 is 0 bytes inside a block of size 2 free'd
==167278==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167278==    by 0x407952: ft_strdup2 (get_next_line_utils.c:205)
==167278==    by 0x40740B: get_next_line (get_next_line.c:68)
==167278==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167278==    by 0x405953: main (mandatory.cpp:57)
==167278==  Block was alloc'd at
==167278==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167278==    by 0x407843: f_del_front_bn (get_next_line_utils.c:170)
==167278==    by 0x4074AF: get_next_line (get_next_line.c:89)
==167278==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167278==    by 0x405941: main (mandatory.cpp:57)
==167278== 
==167278== 44 bytes in 1 blocks are definitely lost in loss record 1 of 3
==167278==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167278==    by 0x4075B4: ft_strjoin (get_next_line_utils.c:58)
==167278==    by 0x407470: get_next_line (get_next_line.c:84)
==167278==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167278==    by 0x405941: main (mandatory.cpp:57)
==167278== 
==167278== 10,000,001 bytes in 1 blocks are possibly lost in loss record 2 of 3
==167278==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167278==    by 0x4072EC: get_next_line (get_next_line.c:27)
==167278==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167278==    by 0x40595F: main (mandatory.cpp:57)
==167278== 
==167278== 10,000,001 bytes in 1 blocks are definitely lost in loss record 3 of 3
==167278==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167278==    by 0x4072EC: get_next_line (get_next_line.c:27)
==167278==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167278==    by 0x405953: main (mandatory.cpp:57)
==167278== 
==167284== Invalid write of size 1
==167284==    at 0x407417: get_next_line (get_next_line.c:69)
==167284==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167284==    by 0x405B89: main (mandatory.cpp:68)
==167284==  Address 0x4de65b0 is 0 bytes inside a block of size 44 free'd
==167284==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167284==    by 0x407952: ft_strdup2 (get_next_line_utils.c:205)
==167284==    by 0x40740B: get_next_line (get_next_line.c:68)
==167284==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167284==    by 0x405B89: main (mandatory.cpp:68)
==167284==  Block was alloc'd at
==167284==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167284==    by 0x4075B4: ft_strjoin (get_next_line_utils.c:58)
==167284==    by 0x407470: get_next_line (get_next_line.c:84)
==167284==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167284==    by 0x405B89: main (mandatory.cpp:68)
==167284== 
==167284== Invalid read of size 1
==167284==    at 0x40750E: ft_strchr (get_next_line_utils.c:25)
==167284==    by 0x40731D: get_next_line (get_next_line.c:33)
==167284==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167284==    by 0x405B95: main (mandatory.cpp:68)
==167284==  Address 0x4de65b0 is 0 bytes inside a block of size 44 free'd
==167284==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167284==    by 0x407952: ft_strdup2 (get_next_line_utils.c:205)
==167284==    by 0x40740B: get_next_line (get_next_line.c:68)
==167284==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167284==    by 0x405B89: main (mandatory.cpp:68)
==167284==  Block was alloc'd at
==167284==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167284==    by 0x4075B4: ft_strjoin (get_next_line_utils.c:58)
==167284==    by 0x407470: get_next_line (get_next_line.c:84)
==167284==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167284==    by 0x405B89: main (mandatory.cpp:68)
==167284== 
==167284== Invalid read of size 1
==167284==    at 0x4073AB: get_next_line (get_next_line.c:58)
==167284==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167284==    by 0x405B95: main (mandatory.cpp:68)
==167284==  Address 0x4de65b0 is 0 bytes inside a block of size 44 free'd
==167284==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167284==    by 0x407952: ft_strdup2 (get_next_line_utils.c:205)
==167284==    by 0x40740B: get_next_line (get_next_line.c:68)
==167284==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167284==    by 0x405B89: main (mandatory.cpp:68)
==167284==  Block was alloc'd at
==167284==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167284==    by 0x4075B4: ft_strjoin (get_next_line_utils.c:58)
==167284==    by 0x407470: get_next_line (get_next_line.c:84)
==167284==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167284==    by 0x405B89: main (mandatory.cpp:68)
==167284== 
==167284== 10,000,001 bytes in 1 blocks are possibly lost in loss record 1 of 2
==167284==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167284==    by 0x4072EC: get_next_line (get_next_line.c:27)
==167284==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167284==    by 0x405B89: main (mandatory.cpp:68)
==167284== 
==167284== 10,000,001 bytes in 1 blocks are definitely lost in loss record 2 of 2
==167284==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167284==    by 0x4072EC: get_next_line (get_next_line.c:27)
==167284==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167284==    by 0x405B95: main (mandatory.cpp:68)
==167284== 
==167285== Invalid write of size 1
==167285==    at 0x407417: get_next_line (get_next_line.c:69)
==167285==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167285==    by 0x405DC7: main (mandatory.cpp:73)
==167285==  Address 0x4de69a0 is 0 bytes inside a block of size 2 free'd
==167285==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167285==    by 0x407952: ft_strdup2 (get_next_line_utils.c:205)
==167285==    by 0x40740B: get_next_line (get_next_line.c:68)
==167285==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167285==    by 0x405DC7: main (mandatory.cpp:73)
==167285==  Block was alloc'd at
==167285==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167285==    by 0x407843: f_del_front_bn (get_next_line_utils.c:170)
==167285==    by 0x4074AF: get_next_line (get_next_line.c:89)
==167285==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167285==    by 0x405DB5: main (mandatory.cpp:73)
==167285== 
==167285== Invalid read of size 1
==167285==    at 0x40750E: ft_strchr (get_next_line_utils.c:25)
==167285==    by 0x40731D: get_next_line (get_next_line.c:33)
==167285==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167285==    by 0x405DD3: main (mandatory.cpp:73)
==167285==  Address 0x4de69a0 is 0 bytes inside a block of size 2 free'd
==167285==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167285==    by 0x407952: ft_strdup2 (get_next_line_utils.c:205)
==167285==    by 0x40740B: get_next_line (get_next_line.c:68)
==167285==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167285==    by 0x405DC7: main (mandatory.cpp:73)
==167285==  Block was alloc'd at
==167285==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167285==    by 0x407843: f_del_front_bn (get_next_line_utils.c:170)
==167285==    by 0x4074AF: get_next_line (get_next_line.c:89)
==167285==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167285==    by 0x405DB5: main (mandatory.cpp:73)
==167285== 
==167285== Invalid read of size 1
==167285==    at 0x4073AB: get_next_line (get_next_line.c:58)
==167285==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167285==    by 0x405DD3: main (mandatory.cpp:73)
==167285==  Address 0x4de69a0 is 0 bytes inside a block of size 2 free'd
==167285==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167285==    by 0x407952: ft_strdup2 (get_next_line_utils.c:205)
==167285==    by 0x40740B: get_next_line (get_next_line.c:68)
==167285==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167285==    by 0x405DC7: main (mandatory.cpp:73)
==167285==  Block was alloc'd at
==167285==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167285==    by 0x407843: f_del_front_bn (get_next_line_utils.c:170)
==167285==    by 0x4074AF: get_next_line (get_next_line.c:89)
==167285==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167285==    by 0x405DB5: main (mandatory.cpp:73)
==167285== 
==167285== 45 bytes in 1 blocks are definitely lost in loss record 1 of 3
==167285==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167285==    by 0x4075B4: ft_strjoin (get_next_line_utils.c:58)
==167285==    by 0x407470: get_next_line (get_next_line.c:84)
==167285==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167285==    by 0x405DB5: main (mandatory.cpp:73)
==167285== 
==167285== 10,000,001 bytes in 1 blocks are possibly lost in loss record 2 of 3
==167285==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167285==    by 0x4072EC: get_next_line (get_next_line.c:27)
==167285==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167285==    by 0x405DD3: main (mandatory.cpp:73)
==167285== 
==167285== 10,000,001 bytes in 1 blocks are definitely lost in loss record 3 of 3
==167285==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167285==    by 0x4072EC: get_next_line (get_next_line.c:27)
==167285==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167285==    by 0x405DC7: main (mandatory.cpp:73)
==167285== 
==167290== 6 bytes in 1 blocks are definitely lost in loss record 2 of 7
==167290==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167290==    by 0x4075B4: ft_strjoin (get_next_line_utils.c:58)
==167290==    by 0x407470: get_next_line (get_next_line.c:84)
==167290==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167290==    by 0x405FF3: main (mandatory.cpp:79)
==167290== 
==167290== 10,000,001 bytes in 1 blocks are possibly lost in loss record 3 of 7
==167290==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167290==    by 0x4072EC: get_next_line (get_next_line.c:27)
==167290==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167290==    by 0x406017: main (mandatory.cpp:79)
==167290== 
==167290== 10,000,001 bytes in 1 blocks are possibly lost in loss record 4 of 7
==167290==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167290==    by 0x4072EC: get_next_line (get_next_line.c:27)
==167290==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167290==    by 0x40603B: main (mandatory.cpp:79)
==167290== 
==167290== 10,000,001 bytes in 1 blocks are possibly lost in loss record 5 of 7
==167290==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167290==    by 0x4072EC: get_next_line (get_next_line.c:27)
==167290==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167290==    by 0x406047: main (mandatory.cpp:79)
==167290== 
==167290== 10,000,001 bytes in 1 blocks are definitely lost in loss record 6 of 7
==167290==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167290==    by 0x4072EC: get_next_line (get_next_line.c:27)
==167290==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167290==    by 0x406005: main (mandatory.cpp:79)
==167290== 
==167290== 10,000,001 bytes in 1 blocks are definitely lost in loss record 7 of 7
==167290==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167290==    by 0x4072EC: get_next_line (get_next_line.c:27)
==167290==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167290==    by 0x406029: main (mandatory.cpp:79)
==167290== 
==167291== Invalid write of size 1
==167291==    at 0x407417: get_next_line (get_next_line.c:69)
==167291==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167291==    by 0x4062AF: main (mandatory.cpp:88)
==167291==  Address 0x4de7440 is 0 bytes inside a block of size 42 free'd
==167291==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167291==    by 0x407952: ft_strdup2 (get_next_line_utils.c:205)
==167291==    by 0x40740B: get_next_line (get_next_line.c:68)
==167291==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167291==    by 0x4062AF: main (mandatory.cpp:88)
==167291==  Block was alloc'd at
==167291==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167291==    by 0x407843: f_del_front_bn (get_next_line_utils.c:170)
==167291==    by 0x407344: get_next_line (get_next_line.c:36)
==167291==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167291==    by 0x40629D: main (mandatory.cpp:88)
==167291== 
==167291== Invalid read of size 1
==167291==    at 0x40750E: ft_strchr (get_next_line_utils.c:25)
==167291==    by 0x40731D: get_next_line (get_next_line.c:33)
==167291==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167291==    by 0x4062BB: main (mandatory.cpp:88)
==167291==  Address 0x4de7440 is 0 bytes inside a block of size 42 free'd
==167291==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167291==    by 0x407952: ft_strdup2 (get_next_line_utils.c:205)
==167291==    by 0x40740B: get_next_line (get_next_line.c:68)
==167291==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167291==    by 0x4062AF: main (mandatory.cpp:88)
==167291==  Block was alloc'd at
==167291==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167291==    by 0x407843: f_del_front_bn (get_next_line_utils.c:170)
==167291==    by 0x407344: get_next_line (get_next_line.c:36)
==167291==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167291==    by 0x40629D: main (mandatory.cpp:88)
==167291== 
==167291== Invalid read of size 1
==167291==    at 0x4073AB: get_next_line (get_next_line.c:58)
==167291==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167291==    by 0x4062BB: main (mandatory.cpp:88)
==167291==  Address 0x4de7440 is 0 bytes inside a block of size 42 free'd
==167291==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167291==    by 0x407952: ft_strdup2 (get_next_line_utils.c:205)
==167291==    by 0x40740B: get_next_line (get_next_line.c:68)
==167291==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167291==    by 0x4062AF: main (mandatory.cpp:88)
==167291==  Block was alloc'd at
==167291==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167291==    by 0x407843: f_del_front_bn (get_next_line_utils.c:170)
==167291==    by 0x407344: get_next_line (get_next_line.c:36)
==167291==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167291==    by 0x40629D: main (mandatory.cpp:88)
==167291== 
==167291== 214 bytes in 1 blocks are definitely lost in loss record 1 of 6
==167291==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167291==    by 0x4075B4: ft_strjoin (get_next_line_utils.c:58)
==167291==    by 0x407470: get_next_line (get_next_line.c:84)
==167291==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167291==    by 0x406267: main (mandatory.cpp:88)
==167291== 
==167291== 10,000,001 bytes in 1 blocks are possibly lost in loss record 2 of 6
==167291==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167291==    by 0x4072EC: get_next_line (get_next_line.c:27)
==167291==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167291==    by 0x40628B: main (mandatory.cpp:88)
==167291== 
==167291== 10,000,001 bytes in 1 blocks are possibly lost in loss record 3 of 6
==167291==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167291==    by 0x4072EC: get_next_line (get_next_line.c:27)
==167291==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167291==    by 0x4062AF: main (mandatory.cpp:88)
==167291== 
==167291== 10,000,001 bytes in 1 blocks are possibly lost in loss record 4 of 6
==167291==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167291==    by 0x4072EC: get_next_line (get_next_line.c:27)
==167291==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167291==    by 0x4062BB: main (mandatory.cpp:88)
==167291== 
==167291== 10,000,001 bytes in 1 blocks are definitely lost in loss record 5 of 6
==167291==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167291==    by 0x4072EC: get_next_line (get_next_line.c:27)
==167291==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167291==    by 0x406279: main (mandatory.cpp:88)
==167291== 
==167291== 10,000,001 bytes in 1 blocks are definitely lost in loss record 6 of 6
==167291==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167291==    by 0x4072EC: get_next_line (get_next_line.c:27)
==167291==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167291==    by 0x40629D: main (mandatory.cpp:88)
==167291== 
==167295== 210 bytes in 1 blocks are definitely lost in loss record 2 of 7
==167295==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167295==    by 0x4075B4: ft_strjoin (get_next_line_utils.c:58)
==167295==    by 0x407470: get_next_line (get_next_line.c:84)
==167295==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167295==    by 0x4064DB: main (mandatory.cpp:97)
==167295== 
==167295== 10,000,001 bytes in 1 blocks are possibly lost in loss record 3 of 7
==167295==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167295==    by 0x4072EC: get_next_line (get_next_line.c:27)
==167295==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167295==    by 0x4064FF: main (mandatory.cpp:97)
==167295== 
==167295== 10,000,001 bytes in 1 blocks are possibly lost in loss record 4 of 7
==167295==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167295==    by 0x4072EC: get_next_line (get_next_line.c:27)
==167295==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167295==    by 0x406523: main (mandatory.cpp:97)
==167295== 
==167295== 10,000,001 bytes in 1 blocks are possibly lost in loss record 5 of 7
==167295==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167295==    by 0x4072EC: get_next_line (get_next_line.c:27)
==167295==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167295==    by 0x40652F: main (mandatory.cpp:97)
==167295== 
==167295== 10,000,001 bytes in 1 blocks are definitely lost in loss record 6 of 7
==167295==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167295==    by 0x4072EC: get_next_line (get_next_line.c:27)
==167295==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167295==    by 0x4064ED: main (mandatory.cpp:97)
==167295== 
==167295== 10,000,001 bytes in 1 blocks are definitely lost in loss record 7 of 7
==167295==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167295==    by 0x4072EC: get_next_line (get_next_line.c:27)
==167295==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167295==    by 0x406511: main (mandatory.cpp:97)
==167295== 
==167301== Invalid write of size 1
==167301==    at 0x407417: get_next_line (get_next_line.c:69)
==167301==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167301==    by 0x4067DF: main (mandatory.cpp:106)
==167301==  Address 0x4de7eb0 is 0 bytes inside a block of size 42 free'd
==167301==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167301==    by 0x407952: ft_strdup2 (get_next_line_utils.c:205)
==167301==    by 0x40740B: get_next_line (get_next_line.c:68)
==167301==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167301==    by 0x4067DF: main (mandatory.cpp:106)
==167301==  Block was alloc'd at
==167301==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167301==    by 0x407843: f_del_front_bn (get_next_line_utils.c:170)
==167301==    by 0x407344: get_next_line (get_next_line.c:36)
==167301==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167301==    by 0x4067CD: main (mandatory.cpp:106)
==167301== 
==167301== Invalid read of size 1
==167301==    at 0x40750E: ft_strchr (get_next_line_utils.c:25)
==167301==    by 0x40731D: get_next_line (get_next_line.c:33)
==167301==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167301==    by 0x4067EB: main (mandatory.cpp:106)
==167301==  Address 0x4de7eb0 is 0 bytes inside a block of size 42 free'd
==167301==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167301==    by 0x407952: ft_strdup2 (get_next_line_utils.c:205)
==167301==    by 0x40740B: get_next_line (get_next_line.c:68)
==167301==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167301==    by 0x4067DF: main (mandatory.cpp:106)
==167301==  Block was alloc'd at
==167301==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167301==    by 0x407843: f_del_front_bn (get_next_line_utils.c:170)
==167301==    by 0x407344: get_next_line (get_next_line.c:36)
==167301==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167301==    by 0x4067CD: main (mandatory.cpp:106)
==167301== 
==167301== Invalid read of size 1
==167301==    at 0x4073AB: get_next_line (get_next_line.c:58)
==167301==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167301==    by 0x4067EB: main (mandatory.cpp:106)
==167301==  Address 0x4de7eb0 is 0 bytes inside a block of size 42 free'd
==167301==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167301==    by 0x407952: ft_strdup2 (get_next_line_utils.c:205)
==167301==    by 0x40740B: get_next_line (get_next_line.c:68)
==167301==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167301==    by 0x4067DF: main (mandatory.cpp:106)
==167301==  Block was alloc'd at
==167301==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167301==    by 0x407843: f_del_front_bn (get_next_line_utils.c:170)
==167301==    by 0x407344: get_next_line (get_next_line.c:36)
==167301==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167301==    by 0x4067CD: main (mandatory.cpp:106)
==167301== 
==167301== 218 bytes in 1 blocks are definitely lost in loss record 1 of 10
==167301==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167301==    by 0x4075B4: ft_strjoin (get_next_line_utils.c:58)
==167301==    by 0x407470: get_next_line (get_next_line.c:84)
==167301==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167301==    by 0x40674F: main (mandatory.cpp:106)
==167301== 
==167301== 10,000,001 bytes in 1 blocks are possibly lost in loss record 2 of 10
==167301==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167301==    by 0x4072EC: get_next_line (get_next_line.c:27)
==167301==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167301==    by 0x406773: main (mandatory.cpp:106)
==167301== 
==167301== 10,000,001 bytes in 1 blocks are possibly lost in loss record 3 of 10
==167301==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167301==    by 0x4072EC: get_next_line (get_next_line.c:27)
==167301==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167301==    by 0x406797: main (mandatory.cpp:106)
==167301== 
==167301== 10,000,001 bytes in 1 blocks are possibly lost in loss record 4 of 10
==167301==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167301==    by 0x4072EC: get_next_line (get_next_line.c:27)
==167301==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167301==    by 0x4067A9: main (mandatory.cpp:106)
==167301== 
==167301== 10,000,001 bytes in 1 blocks are possibly lost in loss record 5 of 10
==167301==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167301==    by 0x4072EC: get_next_line (get_next_line.c:27)
==167301==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167301==    by 0x4067BB: main (mandatory.cpp:106)
==167301== 
==167301== 10,000,001 bytes in 1 blocks are possibly lost in loss record 6 of 10
==167301==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167301==    by 0x4072EC: get_next_line (get_next_line.c:27)
==167301==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167301==    by 0x4067CD: main (mandatory.cpp:106)
==167301== 
==167301== 10,000,001 bytes in 1 blocks are possibly lost in loss record 7 of 10
==167301==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167301==    by 0x4072EC: get_next_line (get_next_line.c:27)
==167301==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167301==    by 0x4067EB: main (mandatory.cpp:106)
==167301== 
==167301== 10,000,001 bytes in 1 blocks are definitely lost in loss record 8 of 10
==167301==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167301==    by 0x4072EC: get_next_line (get_next_line.c:27)
==167301==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167301==    by 0x406761: main (mandatory.cpp:106)
==167301== 
==167301== 10,000,001 bytes in 1 blocks are definitely lost in loss record 9 of 10
==167301==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167301==    by 0x4072EC: get_next_line (get_next_line.c:27)
==167301==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167301==    by 0x406785: main (mandatory.cpp:106)
==167301== 
==167301== 10,000,001 bytes in 1 blocks are definitely lost in loss record 10 of 10
==167301==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167301==    by 0x4072EC: get_next_line (get_next_line.c:27)
==167301==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167301==    by 0x4067DF: main (mandatory.cpp:106)
==167301== 
==167302== 219 bytes in 1 blocks are definitely lost in loss record 2 of 11
==167302==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167302==    by 0x4075B4: ft_strjoin (get_next_line_utils.c:58)
==167302==    by 0x407470: get_next_line (get_next_line.c:84)
==167302==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167302==    by 0x406A0B: main (mandatory.cpp:119)
==167302== 
==167302== 10,000,001 bytes in 1 blocks are possibly lost in loss record 3 of 11
==167302==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167302==    by 0x4072EC: get_next_line (get_next_line.c:27)
==167302==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167302==    by 0x406A2F: main (mandatory.cpp:119)
==167302== 
==167302== 10,000,001 bytes in 1 blocks are possibly lost in loss record 4 of 11
==167302==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167302==    by 0x4072EC: get_next_line (get_next_line.c:27)
==167302==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167302==    by 0x406A53: main (mandatory.cpp:119)
==167302== 
==167302== 10,000,001 bytes in 1 blocks are possibly lost in loss record 5 of 11
==167302==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167302==    by 0x4072EC: get_next_line (get_next_line.c:27)
==167302==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167302==    by 0x406A65: main (mandatory.cpp:119)
==167302== 
==167302== 10,000,001 bytes in 1 blocks are possibly lost in loss record 6 of 11
==167302==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167302==    by 0x4072EC: get_next_line (get_next_line.c:27)
==167302==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167302==    by 0x406A77: main (mandatory.cpp:119)
==167302== 
==167302== 10,000,001 bytes in 1 blocks are possibly lost in loss record 7 of 11
==167302==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167302==    by 0x4072EC: get_next_line (get_next_line.c:27)
==167302==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167302==    by 0x406A89: main (mandatory.cpp:119)
==167302== 
==167302== 10,000,001 bytes in 1 blocks are possibly lost in loss record 8 of 11
==167302==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167302==    by 0x4072EC: get_next_line (get_next_line.c:27)
==167302==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167302==    by 0x406AA7: main (mandatory.cpp:119)
==167302== 
==167302== 10,000,001 bytes in 1 blocks are definitely lost in loss record 9 of 11
==167302==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167302==    by 0x4072EC: get_next_line (get_next_line.c:27)
==167302==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167302==    by 0x406A1D: main (mandatory.cpp:119)
==167302== 
==167302== 10,000,001 bytes in 1 blocks are definitely lost in loss record 10 of 11
==167302==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167302==    by 0x4072EC: get_next_line (get_next_line.c:27)
==167302==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167302==    by 0x406A41: main (mandatory.cpp:119)
==167302== 
==167302== 10,000,001 bytes in 1 blocks are definitely lost in loss record 11 of 11
==167302==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167302==    by 0x4072EC: get_next_line (get_next_line.c:27)
==167302==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167302==    by 0x406A9B: main (mandatory.cpp:119)
==167302== 
==167307== Invalid write of size 1
==167307==    at 0x407417: get_next_line (get_next_line.c:69)
==167307==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167307==    by 0x406CC7: main (mandatory.cpp:132)
==167307==  Address 0x4de7ba0 is 0 bytes inside a block of size 10,001 free'd
==167307==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167307==    by 0x407952: ft_strdup2 (get_next_line_utils.c:205)
==167307==    by 0x40740B: get_next_line (get_next_line.c:68)
==167307==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167307==    by 0x406CC7: main (mandatory.cpp:132)
==167307==  Block was alloc'd at
==167307==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167307==    by 0x4075B4: ft_strjoin (get_next_line_utils.c:58)
==167307==    by 0x407470: get_next_line (get_next_line.c:84)
==167307==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167307==    by 0x406CC7: main (mandatory.cpp:132)
==167307== 
==167307== Invalid read of size 1
==167307==    at 0x40750E: ft_strchr (get_next_line_utils.c:25)
==167307==    by 0x40731D: get_next_line (get_next_line.c:33)
==167307==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167307==    by 0x406CD3: main (mandatory.cpp:132)
==167307==  Address 0x4de7ba0 is 0 bytes inside a block of size 10,001 free'd
==167307==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167307==    by 0x407952: ft_strdup2 (get_next_line_utils.c:205)
==167307==    by 0x40740B: get_next_line (get_next_line.c:68)
==167307==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167307==    by 0x406CC7: main (mandatory.cpp:132)
==167307==  Block was alloc'd at
==167307==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167307==    by 0x4075B4: ft_strjoin (get_next_line_utils.c:58)
==167307==    by 0x407470: get_next_line (get_next_line.c:84)
==167307==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167307==    by 0x406CC7: main (mandatory.cpp:132)
==167307== 
==167307== Invalid read of size 1
==167307==    at 0x4073AB: get_next_line (get_next_line.c:58)
==167307==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167307==    by 0x406CD3: main (mandatory.cpp:132)
==167307==  Address 0x4de7ba0 is 0 bytes inside a block of size 10,001 free'd
==167307==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167307==    by 0x407952: ft_strdup2 (get_next_line_utils.c:205)
==167307==    by 0x40740B: get_next_line (get_next_line.c:68)
==167307==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167307==    by 0x406CC7: main (mandatory.cpp:132)
==167307==  Block was alloc'd at
==167307==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167307==    by 0x4075B4: ft_strjoin (get_next_line_utils.c:58)
==167307==    by 0x407470: get_next_line (get_next_line.c:84)
==167307==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167307==    by 0x406CC7: main (mandatory.cpp:132)
==167307== 
==167307== 10,000,001 bytes in 1 blocks are possibly lost in loss record 1 of 2
==167307==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167307==    by 0x4072EC: get_next_line (get_next_line.c:27)
==167307==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167307==    by 0x406CC7: main (mandatory.cpp:132)
==167307== 
==167307== 10,000,001 bytes in 1 blocks are definitely lost in loss record 2 of 2
==167307==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167307==    by 0x4072EC: get_next_line (get_next_line.c:27)
==167307==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167307==    by 0x406CD3: main (mandatory.cpp:132)
==167307== 
==167308== 10,002 bytes in 1 blocks are definitely lost in loss record 2 of 3
==167308==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167308==    by 0x4075B4: ft_strjoin (get_next_line_utils.c:58)
==167308==    by 0x407470: get_next_line (get_next_line.c:84)
==167308==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167308==    by 0x406EF3: main (mandatory.cpp:136)
==167308== 
==167308== 10,000,001 bytes in 1 blocks are definitely lost in loss record 3 of 3
==167308==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167308==    by 0x4072EC: get_next_line (get_next_line.c:27)
==167308==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==167308==    by 0x406EFF: main (mandatory.cpp:136)
==167308== 
==167312== Invalid read of size 1
==167312==    at 0x484FBD4: strcmp (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==167312==    by 0x402CFA: gnl(int, char const*) (gnl.cpp:24)
==167312==    by 0x40711E: main (mandatory.cpp:141)
==167312==  Address 0x0 is not stack'd, malloc'd or (recently) free'd
==167312== 
