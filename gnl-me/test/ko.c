==262655== Invalid write of size 1
==262655==    at 0x407868: f_ret (get_next_line_utils.c:304)
==262655==    by 0x407365: get_next_line (get_next_line.c:133)
==262655==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262655==    by 0x404BC6: main (mandatory.cpp:25)
==262655==  Address 0x4de429f is 1 bytes before a block of size 2 alloc'd
==262655==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262655==    by 0x407308: get_next_line (get_next_line.c:128)
==262655==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262655==    by 0x404BC6: main (mandatory.cpp:25)
==262655== 
==262655== Invalid write of size 1
==262655==    at 0x407868: f_ret (get_next_line_utils.c:304)
==262655==    by 0x407365: get_next_line (get_next_line.c:133)
==262655==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262655==    by 0x404BE8: main (mandatory.cpp:25)
==262655==  Address 0x4de42ef is 1 bytes before a block of size 2 alloc'd
==262655==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262655==    by 0x407308: get_next_line (get_next_line.c:128)
==262655==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262655==    by 0x404BE8: main (mandatory.cpp:25)
==262655== 
==262655== 2 bytes in 1 blocks are definitely lost in loss record 1 of 2
==262655==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262655==    by 0x407308: get_next_line (get_next_line.c:128)
==262655==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262655==    by 0x404BC6: main (mandatory.cpp:25)
==262655== 
==262655== 2 bytes in 1 blocks are definitely lost in loss record 2 of 2
==262655==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262655==    by 0x407308: get_next_line (get_next_line.c:128)
==262655==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262655==    by 0x404BE8: main (mandatory.cpp:25)
==262655== 
==262673== 1 bytes in 1 blocks are definitely lost in loss record 2 of 4
==262673==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262673==    by 0x4077E2: f_give_stash (get_next_line_utils.c:290)
==262673==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==262673==    by 0x407365: get_next_line (get_next_line.c:133)
==262673==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262673==    by 0x404E63: main (mandatory.cpp:31)
==262673== 
==262673== 2 bytes in 1 blocks are definitely lost in loss record 3 of 4
==262673==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262673==    by 0x407308: get_next_line (get_next_line.c:128)
==262673==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262673==    by 0x404E63: main (mandatory.cpp:31)
==262673== 
==262673== 2 bytes in 1 blocks are definitely lost in loss record 4 of 4
==262673==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262673==    by 0x407308: get_next_line (get_next_line.c:128)
==262673==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262673==    by 0x404E6F: main (mandatory.cpp:31)
==262673== 
==262678== 1 bytes in 1 blocks are definitely lost in loss record 1 of 4
==262678==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262678==    by 0x4077E2: f_give_stash (get_next_line_utils.c:290)
==262678==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==262678==    by 0x407365: get_next_line (get_next_line.c:133)
==262678==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262678==    by 0x40508F: main (mandatory.cpp:36)
==262678== 
==262678== 2 bytes in 1 blocks are possibly lost in loss record 2 of 4
==262678==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262678==    by 0x407462: ft_strjoin (get_next_line_utils.c:57)
==262678==    by 0x40780F: f_give_stash (get_next_line_utils.c:293)
==262678==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==262678==    by 0x407365: get_next_line (get_next_line.c:133)
==262678==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262678==    by 0x40508F: main (mandatory.cpp:36)
==262678== 
==262678== 2 bytes in 1 blocks are definitely lost in loss record 3 of 4
==262678==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262678==    by 0x407308: get_next_line (get_next_line.c:128)
==262678==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262678==    by 0x40508F: main (mandatory.cpp:36)
==262678== 
==262678== 2 bytes in 1 blocks are definitely lost in loss record 4 of 4
==262678==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262678==    by 0x407308: get_next_line (get_next_line.c:128)
==262678==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262678==    by 0x40509B: main (mandatory.cpp:36)
==262678== 
==262679== Invalid write of size 1
==262679==    at 0x4077AA: f_ret_zero (get_next_line_utils.c:280)
==262679==    by 0x407895: f_ret (get_next_line_utils.c:308)
==262679==    by 0x407365: get_next_line (get_next_line.c:133)
==262679==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262679==    by 0x4052BB: main (mandatory.cpp:41)
==262679==  Address 0x4de6840 is 0 bytes inside a block of size 42 free'd
==262679==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262679==    by 0x40772A: ft_strdup2 (get_next_line_utils.c:229)
==262679==    by 0x40779E: f_ret_zero (get_next_line_utils.c:279)
==262679==    by 0x407895: f_ret (get_next_line_utils.c:308)
==262679==    by 0x407365: get_next_line (get_next_line.c:133)
==262679==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262679==    by 0x4052BB: main (mandatory.cpp:41)
==262679==  Block was alloc'd at
==262679==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262679==    by 0x407462: ft_strjoin (get_next_line_utils.c:57)
==262679==    by 0x40780F: f_give_stash (get_next_line_utils.c:293)
==262679==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==262679==    by 0x407365: get_next_line (get_next_line.c:133)
==262679==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262679==    by 0x4052BB: main (mandatory.cpp:41)
==262679== 
==262679== Invalid read of size 1
==262679==    at 0x4073BC: ft_strchr (get_next_line_utils.c:25)
==262679==    by 0x407330: get_next_line (get_next_line.c:131)
==262679==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262679==    by 0x4052C7: main (mandatory.cpp:41)
==262679==  Address 0x4de6840 is 0 bytes inside a block of size 42 free'd
==262679==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262679==    by 0x40772A: ft_strdup2 (get_next_line_utils.c:229)
==262679==    by 0x40779E: f_ret_zero (get_next_line_utils.c:279)
==262679==    by 0x407895: f_ret (get_next_line_utils.c:308)
==262679==    by 0x407365: get_next_line (get_next_line.c:133)
==262679==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262679==    by 0x4052BB: main (mandatory.cpp:41)
==262679==  Block was alloc'd at
==262679==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262679==    by 0x407462: ft_strjoin (get_next_line_utils.c:57)
==262679==    by 0x40780F: f_give_stash (get_next_line_utils.c:293)
==262679==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==262679==    by 0x407365: get_next_line (get_next_line.c:133)
==262679==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262679==    by 0x4052BB: main (mandatory.cpp:41)
==262679== 
==262679== Invalid read of size 1
==262679==    at 0x407750: f_ret_zero (get_next_line_utils.c:275)
==262679==    by 0x407895: f_ret (get_next_line_utils.c:308)
==262679==    by 0x407365: get_next_line (get_next_line.c:133)
==262679==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262679==    by 0x4052C7: main (mandatory.cpp:41)
==262679==  Address 0x4de6840 is 0 bytes inside a block of size 42 free'd
==262679==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262679==    by 0x40772A: ft_strdup2 (get_next_line_utils.c:229)
==262679==    by 0x40779E: f_ret_zero (get_next_line_utils.c:279)
==262679==    by 0x407895: f_ret (get_next_line_utils.c:308)
==262679==    by 0x407365: get_next_line (get_next_line.c:133)
==262679==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262679==    by 0x4052BB: main (mandatory.cpp:41)
==262679==  Block was alloc'd at
==262679==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262679==    by 0x407462: ft_strjoin (get_next_line_utils.c:57)
==262679==    by 0x40780F: f_give_stash (get_next_line_utils.c:293)
==262679==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==262679==    by 0x407365: get_next_line (get_next_line.c:133)
==262679==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262679==    by 0x4052BB: main (mandatory.cpp:41)
==262679== 
==262679== 1 bytes in 1 blocks are definitely lost in loss record 1 of 4
==262679==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262679==    by 0x4077E2: f_give_stash (get_next_line_utils.c:290)
==262679==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==262679==    by 0x407365: get_next_line (get_next_line.c:133)
==262679==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262679==    by 0x4052BB: main (mandatory.cpp:41)
==262679== 
==262679== 2 bytes in 1 blocks are definitely lost in loss record 2 of 4
==262679==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262679==    by 0x407308: get_next_line (get_next_line.c:128)
==262679==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262679==    by 0x4052BB: main (mandatory.cpp:41)
==262679== 
==262679== 2 bytes in 1 blocks are definitely lost in loss record 3 of 4
==262679==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262679==    by 0x407308: get_next_line (get_next_line.c:128)
==262679==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262679==    by 0x4052C7: main (mandatory.cpp:41)
==262679== 
==262679== 860 bytes in 40 blocks are definitely lost in loss record 4 of 4
==262679==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262679==    by 0x407462: ft_strjoin (get_next_line_utils.c:57)
==262679==    by 0x40780F: f_give_stash (get_next_line_utils.c:293)
==262679==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==262679==    by 0x407365: get_next_line (get_next_line.c:133)
==262679==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262679==    by 0x4052BB: main (mandatory.cpp:41)
==262679== 
==262685== Invalid write of size 1
==262685==    at 0x4077AA: f_ret_zero (get_next_line_utils.c:280)
==262685==    by 0x407895: f_ret (get_next_line_utils.c:308)
==262685==    by 0x407365: get_next_line (get_next_line.c:133)
==262685==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262685==    by 0x4054F9: main (mandatory.cpp:46)
==262685==  Address 0x4de6c80 is 0 bytes inside a block of size 2 free'd
==262685==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262685==    by 0x40772A: ft_strdup2 (get_next_line_utils.c:229)
==262685==    by 0x40779E: f_ret_zero (get_next_line_utils.c:279)
==262685==    by 0x407895: f_ret (get_next_line_utils.c:308)
==262685==    by 0x407365: get_next_line (get_next_line.c:133)
==262685==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262685==    by 0x4054F9: main (mandatory.cpp:46)
==262685==  Block was alloc'd at
==262685==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262685==    by 0x407462: ft_strjoin (get_next_line_utils.c:57)
==262685==    by 0x40780F: f_give_stash (get_next_line_utils.c:293)
==262685==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==262685==    by 0x407365: get_next_line (get_next_line.c:133)
==262685==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262685==    by 0x4054F9: main (mandatory.cpp:46)
==262685== 
==262685== Invalid read of size 1
==262685==    at 0x4073BC: ft_strchr (get_next_line_utils.c:25)
==262685==    by 0x407330: get_next_line (get_next_line.c:131)
==262685==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262685==    by 0x405505: main (mandatory.cpp:46)
==262685==  Address 0x4de6c80 is 0 bytes inside a block of size 2 free'd
==262685==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262685==    by 0x40772A: ft_strdup2 (get_next_line_utils.c:229)
==262685==    by 0x40779E: f_ret_zero (get_next_line_utils.c:279)
==262685==    by 0x407895: f_ret (get_next_line_utils.c:308)
==262685==    by 0x407365: get_next_line (get_next_line.c:133)
==262685==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262685==    by 0x4054F9: main (mandatory.cpp:46)
==262685==  Block was alloc'd at
==262685==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262685==    by 0x407462: ft_strjoin (get_next_line_utils.c:57)
==262685==    by 0x40780F: f_give_stash (get_next_line_utils.c:293)
==262685==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==262685==    by 0x407365: get_next_line (get_next_line.c:133)
==262685==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262685==    by 0x4054F9: main (mandatory.cpp:46)
==262685== 
==262685== Invalid read of size 1
==262685==    at 0x407750: f_ret_zero (get_next_line_utils.c:275)
==262685==    by 0x407895: f_ret (get_next_line_utils.c:308)
==262685==    by 0x407365: get_next_line (get_next_line.c:133)
==262685==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262685==    by 0x405505: main (mandatory.cpp:46)
==262685==  Address 0x4de6c80 is 0 bytes inside a block of size 2 free'd
==262685==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262685==    by 0x40772A: ft_strdup2 (get_next_line_utils.c:229)
==262685==    by 0x40779E: f_ret_zero (get_next_line_utils.c:279)
==262685==    by 0x407895: f_ret (get_next_line_utils.c:308)
==262685==    by 0x407365: get_next_line (get_next_line.c:133)
==262685==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262685==    by 0x4054F9: main (mandatory.cpp:46)
==262685==  Block was alloc'd at
==262685==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262685==    by 0x407462: ft_strjoin (get_next_line_utils.c:57)
==262685==    by 0x40780F: f_give_stash (get_next_line_utils.c:293)
==262685==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==262685==    by 0x407365: get_next_line (get_next_line.c:133)
==262685==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262685==    by 0x4054F9: main (mandatory.cpp:46)
==262685== 
==262685== 1 bytes in 1 blocks are definitely lost in loss record 1 of 5
==262685==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262685==    by 0x4077E2: f_give_stash (get_next_line_utils.c:290)
==262685==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==262685==    by 0x407365: get_next_line (get_next_line.c:133)
==262685==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262685==    by 0x4054E7: main (mandatory.cpp:46)
==262685== 
==262685== 2 bytes in 1 blocks are definitely lost in loss record 2 of 5
==262685==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262685==    by 0x407308: get_next_line (get_next_line.c:128)
==262685==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262685==    by 0x4054E7: main (mandatory.cpp:46)
==262685== 
==262685== 2 bytes in 1 blocks are definitely lost in loss record 3 of 5
==262685==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262685==    by 0x407308: get_next_line (get_next_line.c:128)
==262685==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262685==    by 0x4054F9: main (mandatory.cpp:46)
==262685== 
==262685== 2 bytes in 1 blocks are definitely lost in loss record 4 of 5
==262685==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262685==    by 0x407308: get_next_line (get_next_line.c:128)
==262685==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262685==    by 0x405505: main (mandatory.cpp:46)
==262685== 
==262685== 902 bytes in 41 blocks are definitely lost in loss record 5 of 5
==262685==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262685==    by 0x407462: ft_strjoin (get_next_line_utils.c:57)
==262685==    by 0x40780F: f_give_stash (get_next_line_utils.c:293)
==262685==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==262685==    by 0x407365: get_next_line (get_next_line.c:133)
==262685==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262685==    by 0x4054E7: main (mandatory.cpp:46)
==262685== 
==262693== Invalid write of size 1
==262693==    at 0x4077AA: f_ret_zero (get_next_line_utils.c:280)
==262693==    by 0x407895: f_ret (get_next_line_utils.c:308)
==262693==    by 0x407365: get_next_line (get_next_line.c:133)
==262693==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262693==    by 0x405725: main (mandatory.cpp:52)
==262693==  Address 0x4de6ed0 is 0 bytes inside a block of size 43 free'd
==262693==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262693==    by 0x40772A: ft_strdup2 (get_next_line_utils.c:229)
==262693==    by 0x40779E: f_ret_zero (get_next_line_utils.c:279)
==262693==    by 0x407895: f_ret (get_next_line_utils.c:308)
==262693==    by 0x407365: get_next_line (get_next_line.c:133)
==262693==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262693==    by 0x405725: main (mandatory.cpp:52)
==262693==  Block was alloc'd at
==262693==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262693==    by 0x407462: ft_strjoin (get_next_line_utils.c:57)
==262693==    by 0x40780F: f_give_stash (get_next_line_utils.c:293)
==262693==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==262693==    by 0x407365: get_next_line (get_next_line.c:133)
==262693==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262693==    by 0x405725: main (mandatory.cpp:52)
==262693== 
==262693== Invalid read of size 1
==262693==    at 0x4073BC: ft_strchr (get_next_line_utils.c:25)
==262693==    by 0x407330: get_next_line (get_next_line.c:131)
==262693==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262693==    by 0x405731: main (mandatory.cpp:52)
==262693==  Address 0x4de6ed0 is 0 bytes inside a block of size 43 free'd
==262693==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262693==    by 0x40772A: ft_strdup2 (get_next_line_utils.c:229)
==262693==    by 0x40779E: f_ret_zero (get_next_line_utils.c:279)
==262693==    by 0x407895: f_ret (get_next_line_utils.c:308)
==262693==    by 0x407365: get_next_line (get_next_line.c:133)
==262693==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262693==    by 0x405725: main (mandatory.cpp:52)
==262693==  Block was alloc'd at
==262693==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262693==    by 0x407462: ft_strjoin (get_next_line_utils.c:57)
==262693==    by 0x40780F: f_give_stash (get_next_line_utils.c:293)
==262693==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==262693==    by 0x407365: get_next_line (get_next_line.c:133)
==262693==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262693==    by 0x405725: main (mandatory.cpp:52)
==262693== 
==262693== Invalid read of size 1
==262693==    at 0x407750: f_ret_zero (get_next_line_utils.c:275)
==262693==    by 0x407895: f_ret (get_next_line_utils.c:308)
==262693==    by 0x407365: get_next_line (get_next_line.c:133)
==262693==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262693==    by 0x405731: main (mandatory.cpp:52)
==262693==  Address 0x4de6ed0 is 0 bytes inside a block of size 43 free'd
==262693==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262693==    by 0x40772A: ft_strdup2 (get_next_line_utils.c:229)
==262693==    by 0x40779E: f_ret_zero (get_next_line_utils.c:279)
==262693==    by 0x407895: f_ret (get_next_line_utils.c:308)
==262693==    by 0x407365: get_next_line (get_next_line.c:133)
==262693==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262693==    by 0x405725: main (mandatory.cpp:52)
==262693==  Block was alloc'd at
==262693==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262693==    by 0x407462: ft_strjoin (get_next_line_utils.c:57)
==262693==    by 0x40780F: f_give_stash (get_next_line_utils.c:293)
==262693==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==262693==    by 0x407365: get_next_line (get_next_line.c:133)
==262693==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262693==    by 0x405725: main (mandatory.cpp:52)
==262693== 
==262693== 1 bytes in 1 blocks are definitely lost in loss record 1 of 4
==262693==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262693==    by 0x4077E2: f_give_stash (get_next_line_utils.c:290)
==262693==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==262693==    by 0x407365: get_next_line (get_next_line.c:133)
==262693==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262693==    by 0x405725: main (mandatory.cpp:52)
==262693== 
==262693== 2 bytes in 1 blocks are definitely lost in loss record 2 of 4
==262693==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262693==    by 0x407308: get_next_line (get_next_line.c:128)
==262693==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262693==    by 0x405725: main (mandatory.cpp:52)
==262693== 
==262693== 2 bytes in 1 blocks are definitely lost in loss record 3 of 4
==262693==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262693==    by 0x407308: get_next_line (get_next_line.c:128)
==262693==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262693==    by 0x405731: main (mandatory.cpp:52)
==262693== 
==262693== 902 bytes in 41 blocks are definitely lost in loss record 4 of 4
==262693==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262693==    by 0x407462: ft_strjoin (get_next_line_utils.c:57)
==262693==    by 0x40780F: f_give_stash (get_next_line_utils.c:293)
==262693==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==262693==    by 0x407365: get_next_line (get_next_line.c:133)
==262693==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262693==    by 0x405725: main (mandatory.cpp:52)
==262693== 
==262694== Invalid write of size 1
==262694==    at 0x4077AA: f_ret_zero (get_next_line_utils.c:280)
==262694==    by 0x407895: f_ret (get_next_line_utils.c:308)
==262694==    by 0x407365: get_next_line (get_next_line.c:133)
==262694==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262694==    by 0x405963: main (mandatory.cpp:57)
==262694==  Address 0x4de7310 is 0 bytes inside a block of size 2 free'd
==262694==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262694==    by 0x40772A: ft_strdup2 (get_next_line_utils.c:229)
==262694==    by 0x40779E: f_ret_zero (get_next_line_utils.c:279)
==262694==    by 0x407895: f_ret (get_next_line_utils.c:308)
==262694==    by 0x407365: get_next_line (get_next_line.c:133)
==262694==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262694==    by 0x405963: main (mandatory.cpp:57)
==262694==  Block was alloc'd at
==262694==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262694==    by 0x407462: ft_strjoin (get_next_line_utils.c:57)
==262694==    by 0x40780F: f_give_stash (get_next_line_utils.c:293)
==262694==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==262694==    by 0x407365: get_next_line (get_next_line.c:133)
==262694==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262694==    by 0x405963: main (mandatory.cpp:57)
==262694== 
==262694== Invalid read of size 1
==262694==    at 0x4073BC: ft_strchr (get_next_line_utils.c:25)
==262694==    by 0x407330: get_next_line (get_next_line.c:131)
==262694==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262694==    by 0x40596F: main (mandatory.cpp:57)
==262694==  Address 0x4de7310 is 0 bytes inside a block of size 2 free'd
==262694==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262694==    by 0x40772A: ft_strdup2 (get_next_line_utils.c:229)
==262694==    by 0x40779E: f_ret_zero (get_next_line_utils.c:279)
==262694==    by 0x407895: f_ret (get_next_line_utils.c:308)
==262694==    by 0x407365: get_next_line (get_next_line.c:133)
==262694==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262694==    by 0x405963: main (mandatory.cpp:57)
==262694==  Block was alloc'd at
==262694==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262694==    by 0x407462: ft_strjoin (get_next_line_utils.c:57)
==262694==    by 0x40780F: f_give_stash (get_next_line_utils.c:293)
==262694==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==262694==    by 0x407365: get_next_line (get_next_line.c:133)
==262694==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262694==    by 0x405963: main (mandatory.cpp:57)
==262694== 
==262694== Invalid read of size 1
==262694==    at 0x407750: f_ret_zero (get_next_line_utils.c:275)
==262694==    by 0x407895: f_ret (get_next_line_utils.c:308)
==262694==    by 0x407365: get_next_line (get_next_line.c:133)
==262694==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262694==    by 0x40596F: main (mandatory.cpp:57)
==262694==  Address 0x4de7310 is 0 bytes inside a block of size 2 free'd
==262694==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262694==    by 0x40772A: ft_strdup2 (get_next_line_utils.c:229)
==262694==    by 0x40779E: f_ret_zero (get_next_line_utils.c:279)
==262694==    by 0x407895: f_ret (get_next_line_utils.c:308)
==262694==    by 0x407365: get_next_line (get_next_line.c:133)
==262694==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262694==    by 0x405963: main (mandatory.cpp:57)
==262694==  Block was alloc'd at
==262694==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262694==    by 0x407462: ft_strjoin (get_next_line_utils.c:57)
==262694==    by 0x40780F: f_give_stash (get_next_line_utils.c:293)
==262694==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==262694==    by 0x407365: get_next_line (get_next_line.c:133)
==262694==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262694==    by 0x405963: main (mandatory.cpp:57)
==262694== 
==262694== 1 bytes in 1 blocks are definitely lost in loss record 1 of 5
==262694==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262694==    by 0x4077E2: f_give_stash (get_next_line_utils.c:290)
==262694==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==262694==    by 0x407365: get_next_line (get_next_line.c:133)
==262694==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262694==    by 0x405951: main (mandatory.cpp:57)
==262694== 
==262694== 2 bytes in 1 blocks are definitely lost in loss record 2 of 5
==262694==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262694==    by 0x407308: get_next_line (get_next_line.c:128)
==262694==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262694==    by 0x405951: main (mandatory.cpp:57)
==262694== 
==262694== 2 bytes in 1 blocks are definitely lost in loss record 3 of 5
==262694==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262694==    by 0x407308: get_next_line (get_next_line.c:128)
==262694==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262694==    by 0x405963: main (mandatory.cpp:57)
==262694== 
==262694== 2 bytes in 1 blocks are definitely lost in loss record 4 of 5
==262694==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262694==    by 0x407308: get_next_line (get_next_line.c:128)
==262694==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262694==    by 0x40596F: main (mandatory.cpp:57)
==262694== 
==262694== 945 bytes in 42 blocks are definitely lost in loss record 5 of 5
==262694==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262694==    by 0x407462: ft_strjoin (get_next_line_utils.c:57)
==262694==    by 0x40780F: f_give_stash (get_next_line_utils.c:293)
==262694==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==262694==    by 0x407365: get_next_line (get_next_line.c:133)
==262694==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262694==    by 0x405951: main (mandatory.cpp:57)
==262694== 
==262699== Invalid write of size 1
==262699==    at 0x4077AA: f_ret_zero (get_next_line_utils.c:280)
==262699==    by 0x407895: f_ret (get_next_line_utils.c:308)
==262699==    by 0x407365: get_next_line (get_next_line.c:133)
==262699==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262699==    by 0x405B99: main (mandatory.cpp:68)
==262699==  Address 0x4de7560 is 0 bytes inside a block of size 44 free'd
==262699==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262699==    by 0x40772A: ft_strdup2 (get_next_line_utils.c:229)
==262699==    by 0x40779E: f_ret_zero (get_next_line_utils.c:279)
==262699==    by 0x407895: f_ret (get_next_line_utils.c:308)
==262699==    by 0x407365: get_next_line (get_next_line.c:133)
==262699==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262699==    by 0x405B99: main (mandatory.cpp:68)
==262699==  Block was alloc'd at
==262699==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262699==    by 0x407462: ft_strjoin (get_next_line_utils.c:57)
==262699==    by 0x40780F: f_give_stash (get_next_line_utils.c:293)
==262699==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==262699==    by 0x407365: get_next_line (get_next_line.c:133)
==262699==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262699==    by 0x405B99: main (mandatory.cpp:68)
==262699== 
==262699== Invalid read of size 1
==262699==    at 0x4073BC: ft_strchr (get_next_line_utils.c:25)
==262699==    by 0x407330: get_next_line (get_next_line.c:131)
==262699==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262699==    by 0x405BA5: main (mandatory.cpp:68)
==262699==  Address 0x4de7560 is 0 bytes inside a block of size 44 free'd
==262699==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262699==    by 0x40772A: ft_strdup2 (get_next_line_utils.c:229)
==262699==    by 0x40779E: f_ret_zero (get_next_line_utils.c:279)
==262699==    by 0x407895: f_ret (get_next_line_utils.c:308)
==262699==    by 0x407365: get_next_line (get_next_line.c:133)
==262699==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262699==    by 0x405B99: main (mandatory.cpp:68)
==262699==  Block was alloc'd at
==262699==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262699==    by 0x407462: ft_strjoin (get_next_line_utils.c:57)
==262699==    by 0x40780F: f_give_stash (get_next_line_utils.c:293)
==262699==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==262699==    by 0x407365: get_next_line (get_next_line.c:133)
==262699==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262699==    by 0x405B99: main (mandatory.cpp:68)
==262699== 
==262699== Invalid read of size 1
==262699==    at 0x407750: f_ret_zero (get_next_line_utils.c:275)
==262699==    by 0x407895: f_ret (get_next_line_utils.c:308)
==262699==    by 0x407365: get_next_line (get_next_line.c:133)
==262699==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262699==    by 0x405BA5: main (mandatory.cpp:68)
==262699==  Address 0x4de7560 is 0 bytes inside a block of size 44 free'd
==262699==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262699==    by 0x40772A: ft_strdup2 (get_next_line_utils.c:229)
==262699==    by 0x40779E: f_ret_zero (get_next_line_utils.c:279)
==262699==    by 0x407895: f_ret (get_next_line_utils.c:308)
==262699==    by 0x407365: get_next_line (get_next_line.c:133)
==262699==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262699==    by 0x405B99: main (mandatory.cpp:68)
==262699==  Block was alloc'd at
==262699==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262699==    by 0x407462: ft_strjoin (get_next_line_utils.c:57)
==262699==    by 0x40780F: f_give_stash (get_next_line_utils.c:293)
==262699==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==262699==    by 0x407365: get_next_line (get_next_line.c:133)
==262699==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262699==    by 0x405B99: main (mandatory.cpp:68)
==262699== 
==262699== 1 bytes in 1 blocks are definitely lost in loss record 1 of 4
==262699==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262699==    by 0x4077E2: f_give_stash (get_next_line_utils.c:290)
==262699==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==262699==    by 0x407365: get_next_line (get_next_line.c:133)
==262699==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262699==    by 0x405B99: main (mandatory.cpp:68)
==262699== 
==262699== 2 bytes in 1 blocks are definitely lost in loss record 2 of 4
==262699==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262699==    by 0x407308: get_next_line (get_next_line.c:128)
==262699==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262699==    by 0x405B99: main (mandatory.cpp:68)
==262699== 
==262699== 2 bytes in 1 blocks are definitely lost in loss record 3 of 4
==262699==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262699==    by 0x407308: get_next_line (get_next_line.c:128)
==262699==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262699==    by 0x405BA5: main (mandatory.cpp:68)
==262699== 
==262699== 945 bytes in 42 blocks are definitely lost in loss record 4 of 4
==262699==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262699==    by 0x407462: ft_strjoin (get_next_line_utils.c:57)
==262699==    by 0x40780F: f_give_stash (get_next_line_utils.c:293)
==262699==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==262699==    by 0x407365: get_next_line (get_next_line.c:133)
==262699==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262699==    by 0x405B99: main (mandatory.cpp:68)
==262699== 
==262700== Invalid write of size 1
==262700==    at 0x4077AA: f_ret_zero (get_next_line_utils.c:280)
==262700==    by 0x407895: f_ret (get_next_line_utils.c:308)
==262700==    by 0x407365: get_next_line (get_next_line.c:133)
==262700==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262700==    by 0x405DD7: main (mandatory.cpp:73)
==262700==  Address 0x4de79a0 is 0 bytes inside a block of size 2 free'd
==262700==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262700==    by 0x40772A: ft_strdup2 (get_next_line_utils.c:229)
==262700==    by 0x40779E: f_ret_zero (get_next_line_utils.c:279)
==262700==    by 0x407895: f_ret (get_next_line_utils.c:308)
==262700==    by 0x407365: get_next_line (get_next_line.c:133)
==262700==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262700==    by 0x405DD7: main (mandatory.cpp:73)
==262700==  Block was alloc'd at
==262700==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262700==    by 0x407462: ft_strjoin (get_next_line_utils.c:57)
==262700==    by 0x40780F: f_give_stash (get_next_line_utils.c:293)
==262700==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==262700==    by 0x407365: get_next_line (get_next_line.c:133)
==262700==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262700==    by 0x405DD7: main (mandatory.cpp:73)
==262700== 
==262700== Invalid read of size 1
==262700==    at 0x4073BC: ft_strchr (get_next_line_utils.c:25)
==262700==    by 0x407330: get_next_line (get_next_line.c:131)
==262700==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262700==    by 0x405DE3: main (mandatory.cpp:73)
==262700==  Address 0x4de79a0 is 0 bytes inside a block of size 2 free'd
==262700==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262700==    by 0x40772A: ft_strdup2 (get_next_line_utils.c:229)
==262700==    by 0x40779E: f_ret_zero (get_next_line_utils.c:279)
==262700==    by 0x407895: f_ret (get_next_line_utils.c:308)
==262700==    by 0x407365: get_next_line (get_next_line.c:133)
==262700==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262700==    by 0x405DD7: main (mandatory.cpp:73)
==262700==  Block was alloc'd at
==262700==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262700==    by 0x407462: ft_strjoin (get_next_line_utils.c:57)
==262700==    by 0x40780F: f_give_stash (get_next_line_utils.c:293)
==262700==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==262700==    by 0x407365: get_next_line (get_next_line.c:133)
==262700==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262700==    by 0x405DD7: main (mandatory.cpp:73)
==262700== 
==262700== Invalid read of size 1
==262700==    at 0x407750: f_ret_zero (get_next_line_utils.c:275)
==262700==    by 0x407895: f_ret (get_next_line_utils.c:308)
==262700==    by 0x407365: get_next_line (get_next_line.c:133)
==262700==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262700==    by 0x405DE3: main (mandatory.cpp:73)
==262700==  Address 0x4de79a0 is 0 bytes inside a block of size 2 free'd
==262700==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262700==    by 0x40772A: ft_strdup2 (get_next_line_utils.c:229)
==262700==    by 0x40779E: f_ret_zero (get_next_line_utils.c:279)
==262700==    by 0x407895: f_ret (get_next_line_utils.c:308)
==262700==    by 0x407365: get_next_line (get_next_line.c:133)
==262700==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262700==    by 0x405DD7: main (mandatory.cpp:73)
==262700==  Block was alloc'd at
==262700==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262700==    by 0x407462: ft_strjoin (get_next_line_utils.c:57)
==262700==    by 0x40780F: f_give_stash (get_next_line_utils.c:293)
==262700==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==262700==    by 0x407365: get_next_line (get_next_line.c:133)
==262700==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262700==    by 0x405DD7: main (mandatory.cpp:73)
==262700== 
==262700== 1 bytes in 1 blocks are definitely lost in loss record 1 of 5
==262700==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262700==    by 0x4077E2: f_give_stash (get_next_line_utils.c:290)
==262700==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==262700==    by 0x407365: get_next_line (get_next_line.c:133)
==262700==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262700==    by 0x405DC5: main (mandatory.cpp:73)
==262700== 
==262700== 2 bytes in 1 blocks are definitely lost in loss record 2 of 5
==262700==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262700==    by 0x407308: get_next_line (get_next_line.c:128)
==262700==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262700==    by 0x405DC5: main (mandatory.cpp:73)
==262700== 
==262700== 2 bytes in 1 blocks are definitely lost in loss record 3 of 5
==262700==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262700==    by 0x407308: get_next_line (get_next_line.c:128)
==262700==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262700==    by 0x405DD7: main (mandatory.cpp:73)
==262700== 
==262700== 2 bytes in 1 blocks are definitely lost in loss record 4 of 5
==262700==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262700==    by 0x407308: get_next_line (get_next_line.c:128)
==262700==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262700==    by 0x405DE3: main (mandatory.cpp:73)
==262700== 
==262700== 989 bytes in 43 blocks are definitely lost in loss record 5 of 5
==262700==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262700==    by 0x407462: ft_strjoin (get_next_line_utils.c:57)
==262700==    by 0x40780F: f_give_stash (get_next_line_utils.c:293)
==262700==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==262700==    by 0x407365: get_next_line (get_next_line.c:133)
==262700==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262700==    by 0x405DC5: main (mandatory.cpp:73)
==262700== 
==262706== 1 bytes in 1 blocks are definitely lost in loss record 1 of 12
==262706==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262706==    by 0x4077E2: f_give_stash (get_next_line_utils.c:290)
==262706==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==262706==    by 0x407365: get_next_line (get_next_line.c:133)
==262706==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262706==    by 0x406003: main (mandatory.cpp:79)
==262706== 
==262706== 2 bytes in 1 blocks are possibly lost in loss record 2 of 12
==262706==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262706==    by 0x407462: ft_strjoin (get_next_line_utils.c:57)
==262706==    by 0x40780F: f_give_stash (get_next_line_utils.c:293)
==262706==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==262706==    by 0x407365: get_next_line (get_next_line.c:133)
==262706==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262706==    by 0x40604B: main (mandatory.cpp:79)
==262706== 
==262706== 2 bytes in 1 blocks are definitely lost in loss record 3 of 12
==262706==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262706==    by 0x407308: get_next_line (get_next_line.c:128)
==262706==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262706==    by 0x406003: main (mandatory.cpp:79)
==262706== 
==262706== 2 bytes in 1 blocks are definitely lost in loss record 4 of 12
==262706==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262706==    by 0x407462: ft_strjoin (get_next_line_utils.c:57)
==262706==    by 0x40780F: f_give_stash (get_next_line_utils.c:293)
==262706==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==262706==    by 0x407365: get_next_line (get_next_line.c:133)
==262706==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262706==    by 0x406003: main (mandatory.cpp:79)
==262706== 
==262706== 2 bytes in 1 blocks are definitely lost in loss record 5 of 12
==262706==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262706==    by 0x407308: get_next_line (get_next_line.c:128)
==262706==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262706==    by 0x406015: main (mandatory.cpp:79)
==262706== 
==262706== 2 bytes in 1 blocks are definitely lost in loss record 6 of 12
==262706==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262706==    by 0x407462: ft_strjoin (get_next_line_utils.c:57)
==262706==    by 0x40780F: f_give_stash (get_next_line_utils.c:293)
==262706==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==262706==    by 0x407365: get_next_line (get_next_line.c:133)
==262706==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262706==    by 0x406015: main (mandatory.cpp:79)
==262706== 
==262706== 2 bytes in 1 blocks are definitely lost in loss record 7 of 12
==262706==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262706==    by 0x407308: get_next_line (get_next_line.c:128)
==262706==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262706==    by 0x406027: main (mandatory.cpp:79)
==262706== 
==262706== 2 bytes in 1 blocks are definitely lost in loss record 8 of 12
==262706==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262706==    by 0x407462: ft_strjoin (get_next_line_utils.c:57)
==262706==    by 0x40780F: f_give_stash (get_next_line_utils.c:293)
==262706==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==262706==    by 0x407365: get_next_line (get_next_line.c:133)
==262706==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262706==    by 0x406027: main (mandatory.cpp:79)
==262706== 
==262706== 2 bytes in 1 blocks are definitely lost in loss record 9 of 12
==262706==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262706==    by 0x407308: get_next_line (get_next_line.c:128)
==262706==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262706==    by 0x406039: main (mandatory.cpp:79)
==262706== 
==262706== 2 bytes in 1 blocks are definitely lost in loss record 10 of 12
==262706==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262706==    by 0x407462: ft_strjoin (get_next_line_utils.c:57)
==262706==    by 0x40780F: f_give_stash (get_next_line_utils.c:293)
==262706==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==262706==    by 0x407365: get_next_line (get_next_line.c:133)
==262706==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262706==    by 0x406039: main (mandatory.cpp:79)
==262706== 
==262706== 2 bytes in 1 blocks are definitely lost in loss record 11 of 12
==262706==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262706==    by 0x407308: get_next_line (get_next_line.c:128)
==262706==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262706==    by 0x40604B: main (mandatory.cpp:79)
==262706== 
==262706== 2 bytes in 1 blocks are definitely lost in loss record 12 of 12
==262706==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262706==    by 0x407308: get_next_line (get_next_line.c:128)
==262706==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262706==    by 0x406057: main (mandatory.cpp:79)
==262706== 
==262709== Invalid write of size 1
==262709==    at 0x4077AA: f_ret_zero (get_next_line_utils.c:280)
==262709==    by 0x407895: f_ret (get_next_line_utils.c:308)
==262709==    by 0x407365: get_next_line (get_next_line.c:133)
==262709==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262709==    by 0x4062BF: main (mandatory.cpp:88)
==262709==  Address 0x4dec090 is 0 bytes inside a block of size 42 free'd
==262709==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262709==    by 0x40772A: ft_strdup2 (get_next_line_utils.c:229)
==262709==    by 0x40779E: f_ret_zero (get_next_line_utils.c:279)
==262709==    by 0x407895: f_ret (get_next_line_utils.c:308)
==262709==    by 0x407365: get_next_line (get_next_line.c:133)
==262709==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262709==    by 0x4062BF: main (mandatory.cpp:88)
==262709==  Block was alloc'd at
==262709==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262709==    by 0x407462: ft_strjoin (get_next_line_utils.c:57)
==262709==    by 0x40780F: f_give_stash (get_next_line_utils.c:293)
==262709==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==262709==    by 0x407365: get_next_line (get_next_line.c:133)
==262709==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262709==    by 0x4062BF: main (mandatory.cpp:88)
==262709== 
==262709== Invalid read of size 1
==262709==    at 0x4073BC: ft_strchr (get_next_line_utils.c:25)
==262709==    by 0x407330: get_next_line (get_next_line.c:131)
==262709==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262709==    by 0x4062CB: main (mandatory.cpp:88)
==262709==  Address 0x4dec090 is 0 bytes inside a block of size 42 free'd
==262709==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262709==    by 0x40772A: ft_strdup2 (get_next_line_utils.c:229)
==262709==    by 0x40779E: f_ret_zero (get_next_line_utils.c:279)
==262709==    by 0x407895: f_ret (get_next_line_utils.c:308)
==262709==    by 0x407365: get_next_line (get_next_line.c:133)
==262709==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262709==    by 0x4062BF: main (mandatory.cpp:88)
==262709==  Block was alloc'd at
==262709==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262709==    by 0x407462: ft_strjoin (get_next_line_utils.c:57)
==262709==    by 0x40780F: f_give_stash (get_next_line_utils.c:293)
==262709==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==262709==    by 0x407365: get_next_line (get_next_line.c:133)
==262709==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262709==    by 0x4062BF: main (mandatory.cpp:88)
==262709== 
==262709== Invalid read of size 1
==262709==    at 0x407750: f_ret_zero (get_next_line_utils.c:275)
==262709==    by 0x407895: f_ret (get_next_line_utils.c:308)
==262709==    by 0x407365: get_next_line (get_next_line.c:133)
==262709==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262709==    by 0x4062CB: main (mandatory.cpp:88)
==262709==  Address 0x4dec090 is 0 bytes inside a block of size 42 free'd
==262709==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262709==    by 0x40772A: ft_strdup2 (get_next_line_utils.c:229)
==262709==    by 0x40779E: f_ret_zero (get_next_line_utils.c:279)
==262709==    by 0x407895: f_ret (get_next_line_utils.c:308)
==262709==    by 0x407365: get_next_line (get_next_line.c:133)
==262709==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262709==    by 0x4062BF: main (mandatory.cpp:88)
==262709==  Block was alloc'd at
==262709==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262709==    by 0x407462: ft_strjoin (get_next_line_utils.c:57)
==262709==    by 0x40780F: f_give_stash (get_next_line_utils.c:293)
==262709==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==262709==    by 0x407365: get_next_line (get_next_line.c:133)
==262709==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262709==    by 0x4062BF: main (mandatory.cpp:88)
==262709== 
==262709== 1 bytes in 1 blocks are definitely lost in loss record 1 of 12
==262709==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262709==    by 0x4077E2: f_give_stash (get_next_line_utils.c:290)
==262709==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==262709==    by 0x407365: get_next_line (get_next_line.c:133)
==262709==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262709==    by 0x406277: main (mandatory.cpp:88)
==262709== 
==262709== 2 bytes in 1 blocks are definitely lost in loss record 2 of 12
==262709==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262709==    by 0x407308: get_next_line (get_next_line.c:128)
==262709==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262709==    by 0x406277: main (mandatory.cpp:88)
==262709== 
==262709== 2 bytes in 1 blocks are definitely lost in loss record 3 of 12
==262709==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262709==    by 0x407308: get_next_line (get_next_line.c:128)
==262709==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262709==    by 0x406289: main (mandatory.cpp:88)
==262709== 
==262709== 2 bytes in 1 blocks are definitely lost in loss record 4 of 12
==262709==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262709==    by 0x407308: get_next_line (get_next_line.c:128)
==262709==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262709==    by 0x40629B: main (mandatory.cpp:88)
==262709== 
==262709== 2 bytes in 1 blocks are definitely lost in loss record 5 of 12
==262709==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262709==    by 0x407308: get_next_line (get_next_line.c:128)
==262709==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262709==    by 0x4062AD: main (mandatory.cpp:88)
==262709== 
==262709== 2 bytes in 1 blocks are definitely lost in loss record 6 of 12
==262709==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262709==    by 0x407308: get_next_line (get_next_line.c:128)
==262709==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262709==    by 0x4062BF: main (mandatory.cpp:88)
==262709== 
==262709== 2 bytes in 1 blocks are definitely lost in loss record 7 of 12
==262709==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262709==    by 0x407308: get_next_line (get_next_line.c:128)
==262709==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262709==    by 0x4062CB: main (mandatory.cpp:88)
==262709== 
==262709== 860 bytes in 40 blocks are definitely lost in loss record 8 of 12
==262709==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262709==    by 0x407462: ft_strjoin (get_next_line_utils.c:57)
==262709==    by 0x40780F: f_give_stash (get_next_line_utils.c:293)
==262709==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==262709==    by 0x407365: get_next_line (get_next_line.c:133)
==262709==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262709==    by 0x4062BF: main (mandatory.cpp:88)
==262709== 
==262709== 945 bytes in 42 blocks are definitely lost in loss record 9 of 12
==262709==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262709==    by 0x407462: ft_strjoin (get_next_line_utils.c:57)
==262709==    by 0x40780F: f_give_stash (get_next_line_utils.c:293)
==262709==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==262709==    by 0x407365: get_next_line (get_next_line.c:133)
==262709==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262709==    by 0x406277: main (mandatory.cpp:88)
==262709== 
==262709== 989 bytes in 43 blocks are definitely lost in loss record 10 of 12
==262709==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262709==    by 0x407462: ft_strjoin (get_next_line_utils.c:57)
==262709==    by 0x40780F: f_give_stash (get_next_line_utils.c:293)
==262709==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==262709==    by 0x407365: get_next_line (get_next_line.c:133)
==262709==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262709==    by 0x406289: main (mandatory.cpp:88)
==262709== 
==262709== 989 bytes in 43 blocks are definitely lost in loss record 11 of 12
==262709==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262709==    by 0x407462: ft_strjoin (get_next_line_utils.c:57)
==262709==    by 0x40780F: f_give_stash (get_next_line_utils.c:293)
==262709==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==262709==    by 0x407365: get_next_line (get_next_line.c:133)
==262709==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262709==    by 0x4062AD: main (mandatory.cpp:88)
==262709== 
==262709== 1,034 bytes in 44 blocks are definitely lost in loss record 12 of 12
==262709==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262709==    by 0x407462: ft_strjoin (get_next_line_utils.c:57)
==262709==    by 0x40780F: f_give_stash (get_next_line_utils.c:293)
==262709==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==262709==    by 0x407365: get_next_line (get_next_line.c:133)
==262709==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262709==    by 0x40629B: main (mandatory.cpp:88)
==262709== 
==262713== 1 bytes in 1 blocks are definitely lost in loss record 1 of 13
==262713==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262713==    by 0x4077E2: f_give_stash (get_next_line_utils.c:290)
==262713==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==262713==    by 0x407365: get_next_line (get_next_line.c:133)
==262713==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262713==    by 0x4064EB: main (mandatory.cpp:97)
==262713== 
==262713== 2 bytes in 1 blocks are definitely lost in loss record 2 of 13
==262713==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262713==    by 0x407308: get_next_line (get_next_line.c:128)
==262713==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262713==    by 0x4064EB: main (mandatory.cpp:97)
==262713== 
==262713== 2 bytes in 1 blocks are definitely lost in loss record 3 of 13
==262713==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262713==    by 0x407308: get_next_line (get_next_line.c:128)
==262713==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262713==    by 0x4064FD: main (mandatory.cpp:97)
==262713== 
==262713== 2 bytes in 1 blocks are definitely lost in loss record 4 of 13
==262713==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262713==    by 0x407308: get_next_line (get_next_line.c:128)
==262713==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262713==    by 0x40650F: main (mandatory.cpp:97)
==262713== 
==262713== 2 bytes in 1 blocks are definitely lost in loss record 5 of 13
==262713==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262713==    by 0x407308: get_next_line (get_next_line.c:128)
==262713==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262713==    by 0x406521: main (mandatory.cpp:97)
==262713== 
==262713== 2 bytes in 1 blocks are definitely lost in loss record 6 of 13
==262713==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262713==    by 0x407308: get_next_line (get_next_line.c:128)
==262713==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262713==    by 0x406533: main (mandatory.cpp:97)
==262713== 
==262713== 2 bytes in 1 blocks are definitely lost in loss record 7 of 13
==262713==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262713==    by 0x407308: get_next_line (get_next_line.c:128)
==262713==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262713==    by 0x40653F: main (mandatory.cpp:97)
==262713== 
==262713== 42 bytes in 1 blocks are possibly lost in loss record 8 of 13
==262713==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262713==    by 0x407462: ft_strjoin (get_next_line_utils.c:57)
==262713==    by 0x40780F: f_give_stash (get_next_line_utils.c:293)
==262713==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==262713==    by 0x407365: get_next_line (get_next_line.c:133)
==262713==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262713==    by 0x406533: main (mandatory.cpp:97)
==262713== 
==262713== 860 bytes in 40 blocks are definitely lost in loss record 9 of 13
==262713==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262713==    by 0x407462: ft_strjoin (get_next_line_utils.c:57)
==262713==    by 0x40780F: f_give_stash (get_next_line_utils.c:293)
==262713==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==262713==    by 0x407365: get_next_line (get_next_line.c:133)
==262713==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262713==    by 0x406533: main (mandatory.cpp:97)
==262713== 
==262713== 902 bytes in 41 blocks are definitely lost in loss record 10 of 13
==262713==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262713==    by 0x407462: ft_strjoin (get_next_line_utils.c:57)
==262713==    by 0x40780F: f_give_stash (get_next_line_utils.c:293)
==262713==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==262713==    by 0x407365: get_next_line (get_next_line.c:133)
==262713==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262713==    by 0x4064EB: main (mandatory.cpp:97)
==262713== 
==262713== 945 bytes in 42 blocks are definitely lost in loss record 11 of 13
==262713==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262713==    by 0x407462: ft_strjoin (get_next_line_utils.c:57)
==262713==    by 0x40780F: f_give_stash (get_next_line_utils.c:293)
==262713==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==262713==    by 0x407365: get_next_line (get_next_line.c:133)
==262713==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262713==    by 0x4064FD: main (mandatory.cpp:97)
==262713== 
==262713== 945 bytes in 42 blocks are definitely lost in loss record 12 of 13
==262713==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262713==    by 0x407462: ft_strjoin (get_next_line_utils.c:57)
==262713==    by 0x40780F: f_give_stash (get_next_line_utils.c:293)
==262713==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==262713==    by 0x407365: get_next_line (get_next_line.c:133)
==262713==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262713==    by 0x406521: main (mandatory.cpp:97)
==262713== 
==262713== 989 bytes in 43 blocks are definitely lost in loss record 13 of 13
==262713==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262713==    by 0x407462: ft_strjoin (get_next_line_utils.c:57)
==262713==    by 0x40780F: f_give_stash (get_next_line_utils.c:293)
==262713==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==262713==    by 0x407365: get_next_line (get_next_line.c:133)
==262713==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262713==    by 0x40650F: main (mandatory.cpp:97)
==262713== 
==262714== Invalid write of size 1
==262714==    at 0x4077AA: f_ret_zero (get_next_line_utils.c:280)
==262714==    by 0x407895: f_ret (get_next_line_utils.c:308)
==262714==    by 0x407365: get_next_line (get_next_line.c:133)
==262714==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262714==    by 0x4067EF: main (mandatory.cpp:106)
==262714==  Address 0x4decab0 is 0 bytes inside a block of size 42 free'd
==262714==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262714==    by 0x40772A: ft_strdup2 (get_next_line_utils.c:229)
==262714==    by 0x40779E: f_ret_zero (get_next_line_utils.c:279)
==262714==    by 0x407895: f_ret (get_next_line_utils.c:308)
==262714==    by 0x407365: get_next_line (get_next_line.c:133)
==262714==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262714==    by 0x4067EF: main (mandatory.cpp:106)
==262714==  Block was alloc'd at
==262714==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262714==    by 0x407462: ft_strjoin (get_next_line_utils.c:57)
==262714==    by 0x40780F: f_give_stash (get_next_line_utils.c:293)
==262714==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==262714==    by 0x407365: get_next_line (get_next_line.c:133)
==262714==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262714==    by 0x4067EF: main (mandatory.cpp:106)
==262714== 
==262714== Invalid read of size 1
==262714==    at 0x4073BC: ft_strchr (get_next_line_utils.c:25)
==262714==    by 0x407330: get_next_line (get_next_line.c:131)
==262714==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262714==    by 0x4067FB: main (mandatory.cpp:106)
==262714==  Address 0x4decab0 is 0 bytes inside a block of size 42 free'd
==262714==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262714==    by 0x40772A: ft_strdup2 (get_next_line_utils.c:229)
==262714==    by 0x40779E: f_ret_zero (get_next_line_utils.c:279)
==262714==    by 0x407895: f_ret (get_next_line_utils.c:308)
==262714==    by 0x407365: get_next_line (get_next_line.c:133)
==262714==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262714==    by 0x4067EF: main (mandatory.cpp:106)
==262714==  Block was alloc'd at
==262714==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262714==    by 0x407462: ft_strjoin (get_next_line_utils.c:57)
==262714==    by 0x40780F: f_give_stash (get_next_line_utils.c:293)
==262714==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==262714==    by 0x407365: get_next_line (get_next_line.c:133)
==262714==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262714==    by 0x4067EF: main (mandatory.cpp:106)
==262714== 
==262714== Invalid read of size 1
==262714==    at 0x407750: f_ret_zero (get_next_line_utils.c:275)
==262714==    by 0x407895: f_ret (get_next_line_utils.c:308)
==262714==    by 0x407365: get_next_line (get_next_line.c:133)
==262714==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262714==    by 0x4067FB: main (mandatory.cpp:106)
==262714==  Address 0x4decab0 is 0 bytes inside a block of size 42 free'd
==262714==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262714==    by 0x40772A: ft_strdup2 (get_next_line_utils.c:229)
==262714==    by 0x40779E: f_ret_zero (get_next_line_utils.c:279)
==262714==    by 0x407895: f_ret (get_next_line_utils.c:308)
==262714==    by 0x407365: get_next_line (get_next_line.c:133)
==262714==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262714==    by 0x4067EF: main (mandatory.cpp:106)
==262714==  Block was alloc'd at
==262714==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262714==    by 0x407462: ft_strjoin (get_next_line_utils.c:57)
==262714==    by 0x40780F: f_give_stash (get_next_line_utils.c:293)
==262714==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==262714==    by 0x407365: get_next_line (get_next_line.c:133)
==262714==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262714==    by 0x4067EF: main (mandatory.cpp:106)
==262714== 
==262714== 1 bytes in 1 blocks are definitely lost in loss record 1 of 20
==262714==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262714==    by 0x4077E2: f_give_stash (get_next_line_utils.c:290)
==262714==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==262714==    by 0x407365: get_next_line (get_next_line.c:133)
==262714==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262714==    by 0x40675F: main (mandatory.cpp:106)
==262714== 
==262714== 2 bytes in 1 blocks are definitely lost in loss record 2 of 20
==262714==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262714==    by 0x407308: get_next_line (get_next_line.c:128)
==262714==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262714==    by 0x40675F: main (mandatory.cpp:106)
==262714== 
==262714== 2 bytes in 1 blocks are definitely lost in loss record 3 of 20
==262714==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262714==    by 0x407308: get_next_line (get_next_line.c:128)
==262714==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262714==    by 0x406771: main (mandatory.cpp:106)
==262714== 
==262714== 2 bytes in 1 blocks are definitely lost in loss record 4 of 20
==262714==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262714==    by 0x407462: ft_strjoin (get_next_line_utils.c:57)
==262714==    by 0x40780F: f_give_stash (get_next_line_utils.c:293)
==262714==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==262714==    by 0x407365: get_next_line (get_next_line.c:133)
==262714==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262714==    by 0x406771: main (mandatory.cpp:106)
==262714== 
==262714== 2 bytes in 1 blocks are definitely lost in loss record 5 of 20
==262714==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262714==    by 0x407308: get_next_line (get_next_line.c:128)
==262714==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262714==    by 0x406783: main (mandatory.cpp:106)
==262714== 
==262714== 2 bytes in 1 blocks are definitely lost in loss record 6 of 20
==262714==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262714==    by 0x407308: get_next_line (get_next_line.c:128)
==262714==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262714==    by 0x406795: main (mandatory.cpp:106)
==262714== 
==262714== 2 bytes in 1 blocks are definitely lost in loss record 7 of 20
==262714==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262714==    by 0x407462: ft_strjoin (get_next_line_utils.c:57)
==262714==    by 0x40780F: f_give_stash (get_next_line_utils.c:293)
==262714==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==262714==    by 0x407365: get_next_line (get_next_line.c:133)
==262714==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262714==    by 0x406795: main (mandatory.cpp:106)
==262714== 
==262714== 2 bytes in 1 blocks are definitely lost in loss record 8 of 20
==262714==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262714==    by 0x407308: get_next_line (get_next_line.c:128)
==262714==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262714==    by 0x4067A7: main (mandatory.cpp:106)
==262714== 
==262714== 2 bytes in 1 blocks are definitely lost in loss record 9 of 20
==262714==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262714==    by 0x407308: get_next_line (get_next_line.c:128)
==262714==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262714==    by 0x4067B9: main (mandatory.cpp:106)
==262714== 
==262714== 2 bytes in 1 blocks are definitely lost in loss record 10 of 20
==262714==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262714==    by 0x407462: ft_strjoin (get_next_line_utils.c:57)
==262714==    by 0x40780F: f_give_stash (get_next_line_utils.c:293)
==262714==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==262714==    by 0x407365: get_next_line (get_next_line.c:133)
==262714==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262714==    by 0x4067B9: main (mandatory.cpp:106)
==262714== 
==262714== 2 bytes in 1 blocks are definitely lost in loss record 11 of 20
==262714==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262714==    by 0x407308: get_next_line (get_next_line.c:128)
==262714==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262714==    by 0x4067CB: main (mandatory.cpp:106)
==262714== 
==262714== 2 bytes in 1 blocks are definitely lost in loss record 12 of 20
==262714==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262714==    by 0x407308: get_next_line (get_next_line.c:128)
==262714==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262714==    by 0x4067DD: main (mandatory.cpp:106)
==262714== 
==262714== 2 bytes in 1 blocks are definitely lost in loss record 13 of 20
==262714==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262714==    by 0x407462: ft_strjoin (get_next_line_utils.c:57)
==262714==    by 0x40780F: f_give_stash (get_next_line_utils.c:293)
==262714==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==262714==    by 0x407365: get_next_line (get_next_line.c:133)
==262714==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262714==    by 0x4067DD: main (mandatory.cpp:106)
==262714== 
==262714== 2 bytes in 1 blocks are definitely lost in loss record 14 of 20
==262714==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262714==    by 0x407308: get_next_line (get_next_line.c:128)
==262714==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262714==    by 0x4067EF: main (mandatory.cpp:106)
==262714== 
==262714== 2 bytes in 1 blocks are definitely lost in loss record 15 of 20
==262714==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262714==    by 0x407308: get_next_line (get_next_line.c:128)
==262714==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262714==    by 0x4067FB: main (mandatory.cpp:106)
==262714== 
==262714== 860 bytes in 40 blocks are definitely lost in loss record 16 of 20
==262714==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262714==    by 0x407462: ft_strjoin (get_next_line_utils.c:57)
==262714==    by 0x40780F: f_give_stash (get_next_line_utils.c:293)
==262714==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==262714==    by 0x407365: get_next_line (get_next_line.c:133)
==262714==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262714==    by 0x4067EF: main (mandatory.cpp:106)
==262714== 
==262714== 945 bytes in 42 blocks are definitely lost in loss record 17 of 20
==262714==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262714==    by 0x407462: ft_strjoin (get_next_line_utils.c:57)
==262714==    by 0x40780F: f_give_stash (get_next_line_utils.c:293)
==262714==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==262714==    by 0x407365: get_next_line (get_next_line.c:133)
==262714==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262714==    by 0x40675F: main (mandatory.cpp:106)
==262714== 
==262714== 989 bytes in 43 blocks are definitely lost in loss record 18 of 20
==262714==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262714==    by 0x407462: ft_strjoin (get_next_line_utils.c:57)
==262714==    by 0x40780F: f_give_stash (get_next_line_utils.c:293)
==262714==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==262714==    by 0x407365: get_next_line (get_next_line.c:133)
==262714==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262714==    by 0x406783: main (mandatory.cpp:106)
==262714== 
==262714== 989 bytes in 43 blocks are definitely lost in loss record 19 of 20
==262714==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262714==    by 0x407462: ft_strjoin (get_next_line_utils.c:57)
==262714==    by 0x40780F: f_give_stash (get_next_line_utils.c:293)
==262714==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==262714==    by 0x407365: get_next_line (get_next_line.c:133)
==262714==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262714==    by 0x4067CB: main (mandatory.cpp:106)
==262714== 
==262714== 1,034 bytes in 44 blocks are definitely lost in loss record 20 of 20
==262714==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262714==    by 0x407462: ft_strjoin (get_next_line_utils.c:57)
==262714==    by 0x40780F: f_give_stash (get_next_line_utils.c:293)
==262714==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==262714==    by 0x407365: get_next_line (get_next_line.c:133)
==262714==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262714==    by 0x4067A7: main (mandatory.cpp:106)
==262714== 
==262717== 1 bytes in 1 blocks are definitely lost in loss record 1 of 21
==262717==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262717==    by 0x4077E2: f_give_stash (get_next_line_utils.c:290)
==262717==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==262717==    by 0x407365: get_next_line (get_next_line.c:133)
==262717==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262717==    by 0x406A1B: main (mandatory.cpp:119)
==262717== 
==262717== 2 bytes in 1 blocks are definitely lost in loss record 2 of 21
==262717==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262717==    by 0x407308: get_next_line (get_next_line.c:128)
==262717==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262717==    by 0x406A1B: main (mandatory.cpp:119)
==262717== 
==262717== 2 bytes in 1 blocks are definitely lost in loss record 3 of 21
==262717==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262717==    by 0x407308: get_next_line (get_next_line.c:128)
==262717==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262717==    by 0x406A2D: main (mandatory.cpp:119)
==262717== 
==262717== 2 bytes in 1 blocks are definitely lost in loss record 4 of 21
==262717==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262717==    by 0x407462: ft_strjoin (get_next_line_utils.c:57)
==262717==    by 0x40780F: f_give_stash (get_next_line_utils.c:293)
==262717==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==262717==    by 0x407365: get_next_line (get_next_line.c:133)
==262717==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262717==    by 0x406A2D: main (mandatory.cpp:119)
==262717== 
==262717== 2 bytes in 1 blocks are definitely lost in loss record 5 of 21
==262717==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262717==    by 0x407308: get_next_line (get_next_line.c:128)
==262717==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262717==    by 0x406A3F: main (mandatory.cpp:119)
==262717== 
==262717== 2 bytes in 1 blocks are definitely lost in loss record 6 of 21
==262717==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262717==    by 0x407308: get_next_line (get_next_line.c:128)
==262717==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262717==    by 0x406A51: main (mandatory.cpp:119)
==262717== 
==262717== 2 bytes in 1 blocks are definitely lost in loss record 7 of 21
==262717==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262717==    by 0x407462: ft_strjoin (get_next_line_utils.c:57)
==262717==    by 0x40780F: f_give_stash (get_next_line_utils.c:293)
==262717==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==262717==    by 0x407365: get_next_line (get_next_line.c:133)
==262717==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262717==    by 0x406A51: main (mandatory.cpp:119)
==262717== 
==262717== 2 bytes in 1 blocks are definitely lost in loss record 8 of 21
==262717==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262717==    by 0x407308: get_next_line (get_next_line.c:128)
==262717==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262717==    by 0x406A63: main (mandatory.cpp:119)
==262717== 
==262717== 2 bytes in 1 blocks are definitely lost in loss record 9 of 21
==262717==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262717==    by 0x407308: get_next_line (get_next_line.c:128)
==262717==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262717==    by 0x406A75: main (mandatory.cpp:119)
==262717== 
==262717== 2 bytes in 1 blocks are definitely lost in loss record 10 of 21
==262717==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262717==    by 0x407462: ft_strjoin (get_next_line_utils.c:57)
==262717==    by 0x40780F: f_give_stash (get_next_line_utils.c:293)
==262717==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==262717==    by 0x407365: get_next_line (get_next_line.c:133)
==262717==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262717==    by 0x406A75: main (mandatory.cpp:119)
==262717== 
==262717== 2 bytes in 1 blocks are definitely lost in loss record 11 of 21
==262717==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262717==    by 0x407308: get_next_line (get_next_line.c:128)
==262717==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262717==    by 0x406A87: main (mandatory.cpp:119)
==262717== 
==262717== 2 bytes in 1 blocks are definitely lost in loss record 12 of 21
==262717==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262717==    by 0x407308: get_next_line (get_next_line.c:128)
==262717==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262717==    by 0x406A99: main (mandatory.cpp:119)
==262717== 
==262717== 2 bytes in 1 blocks are definitely lost in loss record 13 of 21
==262717==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262717==    by 0x407462: ft_strjoin (get_next_line_utils.c:57)
==262717==    by 0x40780F: f_give_stash (get_next_line_utils.c:293)
==262717==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==262717==    by 0x407365: get_next_line (get_next_line.c:133)
==262717==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262717==    by 0x406A99: main (mandatory.cpp:119)
==262717== 
==262717== 2 bytes in 1 blocks are definitely lost in loss record 14 of 21
==262717==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262717==    by 0x407308: get_next_line (get_next_line.c:128)
==262717==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262717==    by 0x406AAB: main (mandatory.cpp:119)
==262717== 
==262717== 2 bytes in 1 blocks are definitely lost in loss record 15 of 21
==262717==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262717==    by 0x407308: get_next_line (get_next_line.c:128)
==262717==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262717==    by 0x406AB7: main (mandatory.cpp:119)
==262717== 
==262717== 43 bytes in 1 blocks are possibly lost in loss record 16 of 21
==262717==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262717==    by 0x407462: ft_strjoin (get_next_line_utils.c:57)
==262717==    by 0x40780F: f_give_stash (get_next_line_utils.c:293)
==262717==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==262717==    by 0x407365: get_next_line (get_next_line.c:133)
==262717==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262717==    by 0x406AAB: main (mandatory.cpp:119)
==262717== 
==262717== 902 bytes in 41 blocks are definitely lost in loss record 17 of 21
==262717==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262717==    by 0x407462: ft_strjoin (get_next_line_utils.c:57)
==262717==    by 0x40780F: f_give_stash (get_next_line_utils.c:293)
==262717==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==262717==    by 0x407365: get_next_line (get_next_line.c:133)
==262717==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262717==    by 0x406AAB: main (mandatory.cpp:119)
==262717== 
==262717== 945 bytes in 42 blocks are definitely lost in loss record 18 of 21
==262717==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262717==    by 0x407462: ft_strjoin (get_next_line_utils.c:57)
==262717==    by 0x40780F: f_give_stash (get_next_line_utils.c:293)
==262717==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==262717==    by 0x407365: get_next_line (get_next_line.c:133)
==262717==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262717==    by 0x406A1B: main (mandatory.cpp:119)
==262717== 
==262717== 989 bytes in 43 blocks are definitely lost in loss record 19 of 21
==262717==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262717==    by 0x407462: ft_strjoin (get_next_line_utils.c:57)
==262717==    by 0x40780F: f_give_stash (get_next_line_utils.c:293)
==262717==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==262717==    by 0x407365: get_next_line (get_next_line.c:133)
==262717==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262717==    by 0x406A3F: main (mandatory.cpp:119)
==262717== 
==262717== 989 bytes in 43 blocks are definitely lost in loss record 20 of 21
==262717==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262717==    by 0x407462: ft_strjoin (get_next_line_utils.c:57)
==262717==    by 0x40780F: f_give_stash (get_next_line_utils.c:293)
==262717==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==262717==    by 0x407365: get_next_line (get_next_line.c:133)
==262717==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262717==    by 0x406A87: main (mandatory.cpp:119)
==262717== 
==262717== 1,034 bytes in 44 blocks are definitely lost in loss record 21 of 21
==262717==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262717==    by 0x407462: ft_strjoin (get_next_line_utils.c:57)
==262717==    by 0x40780F: f_give_stash (get_next_line_utils.c:293)
==262717==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==262717==    by 0x407365: get_next_line (get_next_line.c:133)
==262717==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262717==    by 0x406A63: main (mandatory.cpp:119)
==262717== 
==262730== Invalid read of size 1
==262730==    at 0x484FBD4: strcmp (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262730==    by 0x402D0A: gnl(int, char const*) (gnl.cpp:24)
==262730==    by 0x40712E: main (mandatory.cpp:141)
==262730==  Address 0x0 is not stack'd, malloc'd or (recently) free'd
==262730== 
==262757== Invalid write of size 1
==262757==    at 0x40789A: f_ret (get_next_line_utils.c:304)
==262757==    by 0x407397: get_next_line (get_next_line.c:133)
==262757==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262757==    by 0x404BC6: main (mandatory.cpp:25)
==262757==  Address 0x4de429f is 1 bytes before a block of size 43 alloc'd
==262757==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262757==    by 0x40733A: get_next_line (get_next_line.c:128)
==262757==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262757==    by 0x404BC6: main (mandatory.cpp:25)
==262757== 
==262757== Invalid write of size 1
==262757==    at 0x40789A: f_ret (get_next_line_utils.c:304)
==262757==    by 0x407397: get_next_line (get_next_line.c:133)
==262757==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262757==    by 0x404BE8: main (mandatory.cpp:25)
==262757==  Address 0x4de430f is 1 bytes before a block of size 43 alloc'd
==262757==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262757==    by 0x40733A: get_next_line (get_next_line.c:128)
==262757==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262757==    by 0x404BE8: main (mandatory.cpp:25)
==262757== 
==262757== 43 bytes in 1 blocks are definitely lost in loss record 1 of 2
==262757==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262757==    by 0x40733A: get_next_line (get_next_line.c:128)
==262757==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262757==    by 0x404BC6: main (mandatory.cpp:25)
==262757== 
==262757== 43 bytes in 1 blocks are definitely lost in loss record 2 of 2
==262757==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262757==    by 0x40733A: get_next_line (get_next_line.c:128)
==262757==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262757==    by 0x404BE8: main (mandatory.cpp:25)
==262757== 
==262760== 1 bytes in 1 blocks are definitely lost in loss record 2 of 4
==262760==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262760==    by 0x407814: f_give_stash (get_next_line_utils.c:290)
==262760==    by 0x4078DC: f_ret (get_next_line_utils.c:311)
==262760==    by 0x407397: get_next_line (get_next_line.c:133)
==262760==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262760==    by 0x404E63: main (mandatory.cpp:31)
==262760== 
==262760== 43 bytes in 1 blocks are definitely lost in loss record 3 of 4
==262760==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262760==    by 0x40733A: get_next_line (get_next_line.c:128)
==262760==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262760==    by 0x404E63: main (mandatory.cpp:31)
==262760== 
==262760== 43 bytes in 1 blocks are definitely lost in loss record 4 of 4
==262760==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262760==    by 0x40733A: get_next_line (get_next_line.c:128)
==262760==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262760==    by 0x404E6F: main (mandatory.cpp:31)
==262760== 
==262761== 1 bytes in 1 blocks are definitely lost in loss record 1 of 4
==262761==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262761==    by 0x407814: f_give_stash (get_next_line_utils.c:290)
==262761==    by 0x4078DC: f_ret (get_next_line_utils.c:311)
==262761==    by 0x407397: get_next_line (get_next_line.c:133)
==262761==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262761==    by 0x40508F: main (mandatory.cpp:36)
==262761== 
==262761== 2 bytes in 1 blocks are possibly lost in loss record 2 of 4
==262761==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262761==    by 0x407494: ft_strjoin (get_next_line_utils.c:57)
==262761==    by 0x407841: f_give_stash (get_next_line_utils.c:293)
==262761==    by 0x4078DC: f_ret (get_next_line_utils.c:311)
==262761==    by 0x407397: get_next_line (get_next_line.c:133)
==262761==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262761==    by 0x40508F: main (mandatory.cpp:36)
==262761== 
==262761== 43 bytes in 1 blocks are definitely lost in loss record 3 of 4
==262761==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262761==    by 0x40733A: get_next_line (get_next_line.c:128)
==262761==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262761==    by 0x40508F: main (mandatory.cpp:36)
==262761== 
==262761== 43 bytes in 1 blocks are definitely lost in loss record 4 of 4
==262761==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262761==    by 0x40733A: get_next_line (get_next_line.c:128)
==262761==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262761==    by 0x40509B: main (mandatory.cpp:36)
==262761== 
==262771== Invalid write of size 1
==262771==    at 0x4077DC: f_ret_zero (get_next_line_utils.c:280)
==262771==    by 0x4078C7: f_ret (get_next_line_utils.c:308)
==262771==    by 0x407397: get_next_line (get_next_line.c:133)
==262771==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262771==    by 0x4052BB: main (mandatory.cpp:41)
==262771==  Address 0x4de59c0 is 0 bytes inside a block of size 42 free'd
==262771==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262771==    by 0x40775C: ft_strdup2 (get_next_line_utils.c:229)
==262771==    by 0x4077D0: f_ret_zero (get_next_line_utils.c:279)
==262771==    by 0x4078C7: f_ret (get_next_line_utils.c:308)
==262771==    by 0x407397: get_next_line (get_next_line.c:133)
==262771==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262771==    by 0x4052BB: main (mandatory.cpp:41)
==262771==  Block was alloc'd at
==262771==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262771==    by 0x407494: ft_strjoin (get_next_line_utils.c:57)
==262771==    by 0x407841: f_give_stash (get_next_line_utils.c:293)
==262771==    by 0x4078DC: f_ret (get_next_line_utils.c:311)
==262771==    by 0x407397: get_next_line (get_next_line.c:133)
==262771==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262771==    by 0x4052BB: main (mandatory.cpp:41)
==262771== 
==262771== Invalid read of size 1
==262771==    at 0x4073EE: ft_strchr (get_next_line_utils.c:25)
==262771==    by 0x407362: get_next_line (get_next_line.c:131)
==262771==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262771==    by 0x4052C7: main (mandatory.cpp:41)
==262771==  Address 0x4de59c0 is 0 bytes inside a block of size 42 free'd
==262771==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262771==    by 0x40775C: ft_strdup2 (get_next_line_utils.c:229)
==262771==    by 0x4077D0: f_ret_zero (get_next_line_utils.c:279)
==262771==    by 0x4078C7: f_ret (get_next_line_utils.c:308)
==262771==    by 0x407397: get_next_line (get_next_line.c:133)
==262771==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262771==    by 0x4052BB: main (mandatory.cpp:41)
==262771==  Block was alloc'd at
==262771==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262771==    by 0x407494: ft_strjoin (get_next_line_utils.c:57)
==262771==    by 0x407841: f_give_stash (get_next_line_utils.c:293)
==262771==    by 0x4078DC: f_ret (get_next_line_utils.c:311)
==262771==    by 0x407397: get_next_line (get_next_line.c:133)
==262771==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262771==    by 0x4052BB: main (mandatory.cpp:41)
==262771== 
==262771== Invalid read of size 1
==262771==    at 0x407782: f_ret_zero (get_next_line_utils.c:275)
==262771==    by 0x4078C7: f_ret (get_next_line_utils.c:308)
==262771==    by 0x407397: get_next_line (get_next_line.c:133)
==262771==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262771==    by 0x4052C7: main (mandatory.cpp:41)
==262771==  Address 0x4de59c0 is 0 bytes inside a block of size 42 free'd
==262771==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262771==    by 0x40775C: ft_strdup2 (get_next_line_utils.c:229)
==262771==    by 0x4077D0: f_ret_zero (get_next_line_utils.c:279)
==262771==    by 0x4078C7: f_ret (get_next_line_utils.c:308)
==262771==    by 0x407397: get_next_line (get_next_line.c:133)
==262771==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262771==    by 0x4052BB: main (mandatory.cpp:41)
==262771==  Block was alloc'd at
==262771==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262771==    by 0x407494: ft_strjoin (get_next_line_utils.c:57)
==262771==    by 0x407841: f_give_stash (get_next_line_utils.c:293)
==262771==    by 0x4078DC: f_ret (get_next_line_utils.c:311)
==262771==    by 0x407397: get_next_line (get_next_line.c:133)
==262771==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262771==    by 0x4052BB: main (mandatory.cpp:41)
==262771== 
==262771== 1 bytes in 1 blocks are definitely lost in loss record 1 of 3
==262771==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262771==    by 0x407814: f_give_stash (get_next_line_utils.c:290)
==262771==    by 0x4078DC: f_ret (get_next_line_utils.c:311)
==262771==    by 0x407397: get_next_line (get_next_line.c:133)
==262771==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262771==    by 0x4052BB: main (mandatory.cpp:41)
==262771== 
==262771== 43 bytes in 1 blocks are definitely lost in loss record 2 of 3
==262771==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262771==    by 0x40733A: get_next_line (get_next_line.c:128)
==262771==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262771==    by 0x4052BB: main (mandatory.cpp:41)
==262771== 
==262771== 43 bytes in 1 blocks are definitely lost in loss record 3 of 3
==262771==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262771==    by 0x40733A: get_next_line (get_next_line.c:128)
==262771==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262771==    by 0x4052C7: main (mandatory.cpp:41)
==262771== 
==262772== Invalid free() / delete / delete[] / realloc()
==262772==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262772==    by 0x40775C: ft_strdup2 (get_next_line_utils.c:229)
==262772==    by 0x4077D0: f_ret_zero (get_next_line_utils.c:279)
==262772==    by 0x4078C7: f_ret (get_next_line_utils.c:308)
==262772==    by 0x407397: get_next_line (get_next_line.c:133)
==262772==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262772==    by 0x4054F9: main (mandatory.cpp:46)
==262772==  Address 0x4de5cf9 is 41 bytes inside a block of size 43 alloc'd
==262772==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262772==    by 0x407494: ft_strjoin (get_next_line_utils.c:57)
==262772==    by 0x407841: f_give_stash (get_next_line_utils.c:293)
==262772==    by 0x4078DC: f_ret (get_next_line_utils.c:311)
==262772==    by 0x407397: get_next_line (get_next_line.c:133)
==262772==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262772==    by 0x4054E7: main (mandatory.cpp:46)
==262772== 
==262772== 1 bytes in 1 blocks are definitely lost in loss record 1 of 5
==262772==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262772==    by 0x407814: f_give_stash (get_next_line_utils.c:290)
==262772==    by 0x4078DC: f_ret (get_next_line_utils.c:311)
==262772==    by 0x407397: get_next_line (get_next_line.c:133)
==262772==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262772==    by 0x4054E7: main (mandatory.cpp:46)
==262772== 
==262772== 43 bytes in 1 blocks are possibly lost in loss record 2 of 5
==262772==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262772==    by 0x407494: ft_strjoin (get_next_line_utils.c:57)
==262772==    by 0x407841: f_give_stash (get_next_line_utils.c:293)
==262772==    by 0x4078DC: f_ret (get_next_line_utils.c:311)
==262772==    by 0x407397: get_next_line (get_next_line.c:133)
==262772==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262772==    by 0x4054E7: main (mandatory.cpp:46)
==262772== 
==262772== 43 bytes in 1 blocks are definitely lost in loss record 3 of 5
==262772==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262772==    by 0x40733A: get_next_line (get_next_line.c:128)
==262772==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262772==    by 0x4054E7: main (mandatory.cpp:46)
==262772== 
==262772== 43 bytes in 1 blocks are definitely lost in loss record 4 of 5
==262772==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262772==    by 0x40733A: get_next_line (get_next_line.c:128)
==262772==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262772==    by 0x4054F9: main (mandatory.cpp:46)
==262772== 
==262772== 43 bytes in 1 blocks are definitely lost in loss record 5 of 5
==262772==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262772==    by 0x40733A: get_next_line (get_next_line.c:128)
==262772==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262772==    by 0x405505: main (mandatory.cpp:46)
==262772== 
==262775== Invalid write of size 1
==262775==    at 0x4077DC: f_ret_zero (get_next_line_utils.c:280)
==262775==    by 0x4078C7: f_ret (get_next_line_utils.c:308)
==262775==    by 0x407397: get_next_line (get_next_line.c:133)
==262775==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262775==    by 0x405725: main (mandatory.cpp:52)
==262775==  Address 0x4de5fe0 is 0 bytes inside a block of size 43 free'd
==262775==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262775==    by 0x40775C: ft_strdup2 (get_next_line_utils.c:229)
==262775==    by 0x4077D0: f_ret_zero (get_next_line_utils.c:279)
==262775==    by 0x4078C7: f_ret (get_next_line_utils.c:308)
==262775==    by 0x407397: get_next_line (get_next_line.c:133)
==262775==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262775==    by 0x405725: main (mandatory.cpp:52)
==262775==  Block was alloc'd at
==262775==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262775==    by 0x407494: ft_strjoin (get_next_line_utils.c:57)
==262775==    by 0x407841: f_give_stash (get_next_line_utils.c:293)
==262775==    by 0x4078DC: f_ret (get_next_line_utils.c:311)
==262775==    by 0x407397: get_next_line (get_next_line.c:133)
==262775==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262775==    by 0x405725: main (mandatory.cpp:52)
==262775== 
==262775== Invalid read of size 1
==262775==    at 0x4073EE: ft_strchr (get_next_line_utils.c:25)
==262775==    by 0x407362: get_next_line (get_next_line.c:131)
==262775==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262775==    by 0x405731: main (mandatory.cpp:52)
==262775==  Address 0x4de5fe0 is 0 bytes inside a block of size 43 free'd
==262775==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262775==    by 0x40775C: ft_strdup2 (get_next_line_utils.c:229)
==262775==    by 0x4077D0: f_ret_zero (get_next_line_utils.c:279)
==262775==    by 0x4078C7: f_ret (get_next_line_utils.c:308)
==262775==    by 0x407397: get_next_line (get_next_line.c:133)
==262775==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262775==    by 0x405725: main (mandatory.cpp:52)
==262775==  Block was alloc'd at
==262775==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262775==    by 0x407494: ft_strjoin (get_next_line_utils.c:57)
==262775==    by 0x407841: f_give_stash (get_next_line_utils.c:293)
==262775==    by 0x4078DC: f_ret (get_next_line_utils.c:311)
==262775==    by 0x407397: get_next_line (get_next_line.c:133)
==262775==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262775==    by 0x405725: main (mandatory.cpp:52)
==262775== 
==262775== Invalid read of size 1
==262775==    at 0x407782: f_ret_zero (get_next_line_utils.c:275)
==262775==    by 0x4078C7: f_ret (get_next_line_utils.c:308)
==262775==    by 0x407397: get_next_line (get_next_line.c:133)
==262775==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262775==    by 0x405731: main (mandatory.cpp:52)
==262775==  Address 0x4de5fe0 is 0 bytes inside a block of size 43 free'd
==262775==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262775==    by 0x40775C: ft_strdup2 (get_next_line_utils.c:229)
==262775==    by 0x4077D0: f_ret_zero (get_next_line_utils.c:279)
==262775==    by 0x4078C7: f_ret (get_next_line_utils.c:308)
==262775==    by 0x407397: get_next_line (get_next_line.c:133)
==262775==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262775==    by 0x405725: main (mandatory.cpp:52)
==262775==  Block was alloc'd at
==262775==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262775==    by 0x407494: ft_strjoin (get_next_line_utils.c:57)
==262775==    by 0x407841: f_give_stash (get_next_line_utils.c:293)
==262775==    by 0x4078DC: f_ret (get_next_line_utils.c:311)
==262775==    by 0x407397: get_next_line (get_next_line.c:133)
==262775==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262775==    by 0x405725: main (mandatory.cpp:52)
==262775== 
==262775== 1 bytes in 1 blocks are definitely lost in loss record 1 of 3
==262775==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262775==    by 0x407814: f_give_stash (get_next_line_utils.c:290)
==262775==    by 0x4078DC: f_ret (get_next_line_utils.c:311)
==262775==    by 0x407397: get_next_line (get_next_line.c:133)
==262775==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262775==    by 0x405725: main (mandatory.cpp:52)
==262775== 
==262775== 43 bytes in 1 blocks are definitely lost in loss record 2 of 3
==262775==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262775==    by 0x40733A: get_next_line (get_next_line.c:128)
==262775==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262775==    by 0x405725: main (mandatory.cpp:52)
==262775== 
==262775== 43 bytes in 1 blocks are definitely lost in loss record 3 of 3
==262775==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262775==    by 0x40733A: get_next_line (get_next_line.c:128)
==262775==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262775==    by 0x405731: main (mandatory.cpp:52)
==262775== 
==262780== 1 bytes in 1 blocks are definitely lost in loss record 1 of 4
==262780==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262780==    by 0x407814: f_give_stash (get_next_line_utils.c:290)
==262780==    by 0x4078DC: f_ret (get_next_line_utils.c:311)
==262780==    by 0x407397: get_next_line (get_next_line.c:133)
==262780==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262780==    by 0x405951: main (mandatory.cpp:57)
==262780== 
==262780== 43 bytes in 1 blocks are possibly lost in loss record 2 of 4
==262780==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262780==    by 0x407494: ft_strjoin (get_next_line_utils.c:57)
==262780==    by 0x407841: f_give_stash (get_next_line_utils.c:293)
==262780==    by 0x4078DC: f_ret (get_next_line_utils.c:311)
==262780==    by 0x407397: get_next_line (get_next_line.c:133)
==262780==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262780==    by 0x405951: main (mandatory.cpp:57)
==262780== 
==262780== 43 bytes in 1 blocks are definitely lost in loss record 3 of 4
==262780==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262780==    by 0x40733A: get_next_line (get_next_line.c:128)
==262780==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262780==    by 0x405951: main (mandatory.cpp:57)
==262780== 
==262780== 43 bytes in 1 blocks are definitely lost in loss record 4 of 4
==262780==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262780==    by 0x40733A: get_next_line (get_next_line.c:128)
==262780==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262780==    by 0x4059A1: main (mandatory.cpp:57)
==262780== 
==262781== Invalid write of size 1
==262781==    at 0x4077DC: f_ret_zero (get_next_line_utils.c:280)
==262781==    by 0x4078C7: f_ret (get_next_line_utils.c:308)
==262781==    by 0x407397: get_next_line (get_next_line.c:133)
==262781==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262781==    by 0x405BCB: main (mandatory.cpp:68)
==262781==  Address 0x4de6670 is 0 bytes inside a block of size 44 free'd
==262781==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262781==    by 0x40775C: ft_strdup2 (get_next_line_utils.c:229)
==262781==    by 0x4077D0: f_ret_zero (get_next_line_utils.c:279)
==262781==    by 0x4078C7: f_ret (get_next_line_utils.c:308)
==262781==    by 0x407397: get_next_line (get_next_line.c:133)
==262781==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262781==    by 0x405BCB: main (mandatory.cpp:68)
==262781==  Block was alloc'd at
==262781==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262781==    by 0x407494: ft_strjoin (get_next_line_utils.c:57)
==262781==    by 0x407841: f_give_stash (get_next_line_utils.c:293)
==262781==    by 0x4078DC: f_ret (get_next_line_utils.c:311)
==262781==    by 0x407397: get_next_line (get_next_line.c:133)
==262781==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262781==    by 0x405BCB: main (mandatory.cpp:68)
==262781== 
==262781== Invalid read of size 1
==262781==    at 0x4073EE: ft_strchr (get_next_line_utils.c:25)
==262781==    by 0x407362: get_next_line (get_next_line.c:131)
==262781==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262781==    by 0x405BD7: main (mandatory.cpp:68)
==262781==  Address 0x4de6670 is 0 bytes inside a block of size 44 free'd
==262781==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262781==    by 0x40775C: ft_strdup2 (get_next_line_utils.c:229)
==262781==    by 0x4077D0: f_ret_zero (get_next_line_utils.c:279)
==262781==    by 0x4078C7: f_ret (get_next_line_utils.c:308)
==262781==    by 0x407397: get_next_line (get_next_line.c:133)
==262781==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262781==    by 0x405BCB: main (mandatory.cpp:68)
==262781==  Block was alloc'd at
==262781==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262781==    by 0x407494: ft_strjoin (get_next_line_utils.c:57)
==262781==    by 0x407841: f_give_stash (get_next_line_utils.c:293)
==262781==    by 0x4078DC: f_ret (get_next_line_utils.c:311)
==262781==    by 0x407397: get_next_line (get_next_line.c:133)
==262781==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262781==    by 0x405BCB: main (mandatory.cpp:68)
==262781== 
==262781== Invalid read of size 1
==262781==    at 0x407782: f_ret_zero (get_next_line_utils.c:275)
==262781==    by 0x4078C7: f_ret (get_next_line_utils.c:308)
==262781==    by 0x407397: get_next_line (get_next_line.c:133)
==262781==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262781==    by 0x405BD7: main (mandatory.cpp:68)
==262781==  Address 0x4de6670 is 0 bytes inside a block of size 44 free'd
==262781==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262781==    by 0x40775C: ft_strdup2 (get_next_line_utils.c:229)
==262781==    by 0x4077D0: f_ret_zero (get_next_line_utils.c:279)
==262781==    by 0x4078C7: f_ret (get_next_line_utils.c:308)
==262781==    by 0x407397: get_next_line (get_next_line.c:133)
==262781==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262781==    by 0x405BCB: main (mandatory.cpp:68)
==262781==  Block was alloc'd at
==262781==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262781==    by 0x407494: ft_strjoin (get_next_line_utils.c:57)
==262781==    by 0x407841: f_give_stash (get_next_line_utils.c:293)
==262781==    by 0x4078DC: f_ret (get_next_line_utils.c:311)
==262781==    by 0x407397: get_next_line (get_next_line.c:133)
==262781==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262781==    by 0x405BCB: main (mandatory.cpp:68)
==262781== 
==262781== 1 bytes in 1 blocks are definitely lost in loss record 1 of 4
==262781==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262781==    by 0x407814: f_give_stash (get_next_line_utils.c:290)
==262781==    by 0x4078DC: f_ret (get_next_line_utils.c:311)
==262781==    by 0x407397: get_next_line (get_next_line.c:133)
==262781==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262781==    by 0x405BCB: main (mandatory.cpp:68)
==262781== 
==262781== 43 bytes in 1 blocks are definitely lost in loss record 2 of 4
==262781==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262781==    by 0x40733A: get_next_line (get_next_line.c:128)
==262781==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262781==    by 0x405BCB: main (mandatory.cpp:68)
==262781== 
==262781== 43 bytes in 1 blocks are definitely lost in loss record 3 of 4
==262781==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262781==    by 0x407494: ft_strjoin (get_next_line_utils.c:57)
==262781==    by 0x407841: f_give_stash (get_next_line_utils.c:293)
==262781==    by 0x4078DC: f_ret (get_next_line_utils.c:311)
==262781==    by 0x407397: get_next_line (get_next_line.c:133)
==262781==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262781==    by 0x405BCB: main (mandatory.cpp:68)
==262781== 
==262781== 43 bytes in 1 blocks are definitely lost in loss record 4 of 4
==262781==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262781==    by 0x40733A: get_next_line (get_next_line.c:128)
==262781==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262781==    by 0x405BD7: main (mandatory.cpp:68)
==262781== 
==262791== Invalid free() / delete / delete[] / realloc()
==262791==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262791==    by 0x40775C: ft_strdup2 (get_next_line_utils.c:229)
==262791==    by 0x4077D0: f_ret_zero (get_next_line_utils.c:279)
==262791==    by 0x4078C7: f_ret (get_next_line_utils.c:308)
==262791==    by 0x407397: get_next_line (get_next_line.c:133)
==262791==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262791==    by 0x405E09: main (mandatory.cpp:73)
==262791==  Address 0x4de69ab is 43 bytes inside a block of size 45 alloc'd
==262791==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262791==    by 0x407494: ft_strjoin (get_next_line_utils.c:57)
==262791==    by 0x407841: f_give_stash (get_next_line_utils.c:293)
==262791==    by 0x4078DC: f_ret (get_next_line_utils.c:311)
==262791==    by 0x407397: get_next_line (get_next_line.c:133)
==262791==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262791==    by 0x405DF7: main (mandatory.cpp:73)
==262791== 
==262791== 1 bytes in 1 blocks are definitely lost in loss record 1 of 6
==262791==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262791==    by 0x407814: f_give_stash (get_next_line_utils.c:290)
==262791==    by 0x4078DC: f_ret (get_next_line_utils.c:311)
==262791==    by 0x407397: get_next_line (get_next_line.c:133)
==262791==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262791==    by 0x405DF7: main (mandatory.cpp:73)
==262791== 
==262791== 43 bytes in 1 blocks are definitely lost in loss record 2 of 6
==262791==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262791==    by 0x40733A: get_next_line (get_next_line.c:128)
==262791==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262791==    by 0x405DF7: main (mandatory.cpp:73)
==262791== 
==262791== 43 bytes in 1 blocks are definitely lost in loss record 3 of 6
==262791==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262791==    by 0x407494: ft_strjoin (get_next_line_utils.c:57)
==262791==    by 0x407841: f_give_stash (get_next_line_utils.c:293)
==262791==    by 0x4078DC: f_ret (get_next_line_utils.c:311)
==262791==    by 0x407397: get_next_line (get_next_line.c:133)
==262791==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262791==    by 0x405DF7: main (mandatory.cpp:73)
==262791== 
==262791== 43 bytes in 1 blocks are definitely lost in loss record 4 of 6
==262791==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262791==    by 0x40733A: get_next_line (get_next_line.c:128)
==262791==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262791==    by 0x405E09: main (mandatory.cpp:73)
==262791== 
==262791== 43 bytes in 1 blocks are definitely lost in loss record 5 of 6
==262791==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262791==    by 0x40733A: get_next_line (get_next_line.c:128)
==262791==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262791==    by 0x405E15: main (mandatory.cpp:73)
==262791== 
==262791== 45 bytes in 1 blocks are possibly lost in loss record 6 of 6
==262791==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262791==    by 0x407494: ft_strjoin (get_next_line_utils.c:57)
==262791==    by 0x407841: f_give_stash (get_next_line_utils.c:293)
==262791==    by 0x4078DC: f_ret (get_next_line_utils.c:311)
==262791==    by 0x407397: get_next_line (get_next_line.c:133)
==262791==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262791==    by 0x405DF7: main (mandatory.cpp:73)
==262791== 
==262794== 1 bytes in 1 blocks are definitely lost in loss record 1 of 8
==262794==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262794==    by 0x407814: f_give_stash (get_next_line_utils.c:290)
==262794==    by 0x4078DC: f_ret (get_next_line_utils.c:311)
==262794==    by 0x407397: get_next_line (get_next_line.c:133)
==262794==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262794==    by 0x406035: main (mandatory.cpp:79)
==262794== 
==262794== 6 bytes in 1 blocks are possibly lost in loss record 2 of 8
==262794==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262794==    by 0x407494: ft_strjoin (get_next_line_utils.c:57)
==262794==    by 0x407841: f_give_stash (get_next_line_utils.c:293)
==262794==    by 0x4078DC: f_ret (get_next_line_utils.c:311)
==262794==    by 0x407397: get_next_line (get_next_line.c:133)
==262794==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262794==    by 0x406035: main (mandatory.cpp:79)
==262794== 
==262794== 43 bytes in 1 blocks are definitely lost in loss record 3 of 8
==262794==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262794==    by 0x40733A: get_next_line (get_next_line.c:128)
==262794==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262794==    by 0x406035: main (mandatory.cpp:79)
==262794== 
==262794== 43 bytes in 1 blocks are definitely lost in loss record 4 of 8
==262794==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262794==    by 0x40733A: get_next_line (get_next_line.c:128)
==262794==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262794==    by 0x406047: main (mandatory.cpp:79)
==262794== 
==262794== 43 bytes in 1 blocks are definitely lost in loss record 5 of 8
==262794==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262794==    by 0x40733A: get_next_line (get_next_line.c:128)
==262794==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262794==    by 0x406059: main (mandatory.cpp:79)
==262794== 
==262794== 43 bytes in 1 blocks are definitely lost in loss record 6 of 8
==262794==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262794==    by 0x40733A: get_next_line (get_next_line.c:128)
==262794==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262794==    by 0x40606B: main (mandatory.cpp:79)
==262794== 
==262794== 43 bytes in 1 blocks are definitely lost in loss record 7 of 8
==262794==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262794==    by 0x40733A: get_next_line (get_next_line.c:128)
==262794==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262794==    by 0x40607D: main (mandatory.cpp:79)
==262794== 
==262794== 43 bytes in 1 blocks are definitely lost in loss record 8 of 8
==262794==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262794==    by 0x40733A: get_next_line (get_next_line.c:128)
==262794==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262794==    by 0x406089: main (mandatory.cpp:79)
==262794== 
==262795== Invalid write of size 1
==262795==    at 0x4077DC: f_ret_zero (get_next_line_utils.c:280)
==262795==    by 0x4078C7: f_ret (get_next_line_utils.c:308)
==262795==    by 0x407397: get_next_line (get_next_line.c:133)
==262795==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262795==    by 0x4062F1: main (mandatory.cpp:88)
==262795==  Address 0x4de7590 is 0 bytes inside a block of size 42 free'd
==262795==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262795==    by 0x40775C: ft_strdup2 (get_next_line_utils.c:229)
==262795==    by 0x4077D0: f_ret_zero (get_next_line_utils.c:279)
==262795==    by 0x4078C7: f_ret (get_next_line_utils.c:308)
==262795==    by 0x407397: get_next_line (get_next_line.c:133)
==262795==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262795==    by 0x4062F1: main (mandatory.cpp:88)
==262795==  Block was alloc'd at
==262795==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262795==    by 0x407494: ft_strjoin (get_next_line_utils.c:57)
==262795==    by 0x407841: f_give_stash (get_next_line_utils.c:293)
==262795==    by 0x4078DC: f_ret (get_next_line_utils.c:311)
==262795==    by 0x407397: get_next_line (get_next_line.c:133)
==262795==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262795==    by 0x4062F1: main (mandatory.cpp:88)
==262795== 
==262795== Invalid read of size 1
==262795==    at 0x4073EE: ft_strchr (get_next_line_utils.c:25)
==262795==    by 0x407362: get_next_line (get_next_line.c:131)
==262795==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262795==    by 0x4062FD: main (mandatory.cpp:88)
==262795==  Address 0x4de7590 is 0 bytes inside a block of size 42 free'd
==262795==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262795==    by 0x40775C: ft_strdup2 (get_next_line_utils.c:229)
==262795==    by 0x4077D0: f_ret_zero (get_next_line_utils.c:279)
==262795==    by 0x4078C7: f_ret (get_next_line_utils.c:308)
==262795==    by 0x407397: get_next_line (get_next_line.c:133)
==262795==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262795==    by 0x4062F1: main (mandatory.cpp:88)
==262795==  Block was alloc'd at
==262795==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262795==    by 0x407494: ft_strjoin (get_next_line_utils.c:57)
==262795==    by 0x407841: f_give_stash (get_next_line_utils.c:293)
==262795==    by 0x4078DC: f_ret (get_next_line_utils.c:311)
==262795==    by 0x407397: get_next_line (get_next_line.c:133)
==262795==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262795==    by 0x4062F1: main (mandatory.cpp:88)
==262795== 
==262795== Invalid read of size 1
==262795==    at 0x407782: f_ret_zero (get_next_line_utils.c:275)
==262795==    by 0x4078C7: f_ret (get_next_line_utils.c:308)
==262795==    by 0x407397: get_next_line (get_next_line.c:133)
==262795==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262795==    by 0x4062FD: main (mandatory.cpp:88)
==262795==  Address 0x4de7590 is 0 bytes inside a block of size 42 free'd
==262795==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262795==    by 0x40775C: ft_strdup2 (get_next_line_utils.c:229)
==262795==    by 0x4077D0: f_ret_zero (get_next_line_utils.c:279)
==262795==    by 0x4078C7: f_ret (get_next_line_utils.c:308)
==262795==    by 0x407397: get_next_line (get_next_line.c:133)
==262795==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262795==    by 0x4062F1: main (mandatory.cpp:88)
==262795==  Block was alloc'd at
==262795==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262795==    by 0x407494: ft_strjoin (get_next_line_utils.c:57)
==262795==    by 0x407841: f_give_stash (get_next_line_utils.c:293)
==262795==    by 0x4078DC: f_ret (get_next_line_utils.c:311)
==262795==    by 0x407397: get_next_line (get_next_line.c:133)
==262795==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262795==    by 0x4062F1: main (mandatory.cpp:88)
==262795== 
==262795== 1 bytes in 1 blocks are definitely lost in loss record 1 of 11
==262795==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262795==    by 0x407814: f_give_stash (get_next_line_utils.c:290)
==262795==    by 0x4078DC: f_ret (get_next_line_utils.c:311)
==262795==    by 0x407397: get_next_line (get_next_line.c:133)
==262795==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262795==    by 0x4062A9: main (mandatory.cpp:88)
==262795== 
==262795== 43 bytes in 1 blocks are definitely lost in loss record 2 of 11
==262795==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262795==    by 0x40733A: get_next_line (get_next_line.c:128)
==262795==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262795==    by 0x4062A9: main (mandatory.cpp:88)
==262795== 
==262795== 43 bytes in 1 blocks are definitely lost in loss record 3 of 11
==262795==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262795==    by 0x407494: ft_strjoin (get_next_line_utils.c:57)
==262795==    by 0x407841: f_give_stash (get_next_line_utils.c:293)
==262795==    by 0x4078DC: f_ret (get_next_line_utils.c:311)
==262795==    by 0x407397: get_next_line (get_next_line.c:133)
==262795==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262795==    by 0x4062A9: main (mandatory.cpp:88)
==262795== 
==262795== 43 bytes in 1 blocks are definitely lost in loss record 4 of 11
==262795==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262795==    by 0x40733A: get_next_line (get_next_line.c:128)
==262795==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262795==    by 0x4062BB: main (mandatory.cpp:88)
==262795== 
==262795== 43 bytes in 1 blocks are definitely lost in loss record 5 of 11
==262795==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262795==    by 0x40733A: get_next_line (get_next_line.c:128)
==262795==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262795==    by 0x4062CD: main (mandatory.cpp:88)
==262795== 
==262795== 43 bytes in 1 blocks are definitely lost in loss record 6 of 11
==262795==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262795==    by 0x40733A: get_next_line (get_next_line.c:128)
==262795==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262795==    by 0x4062DF: main (mandatory.cpp:88)
==262795== 
==262795== 43 bytes in 1 blocks are definitely lost in loss record 7 of 11
==262795==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262795==    by 0x40733A: get_next_line (get_next_line.c:128)
==262795==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262795==    by 0x4062F1: main (mandatory.cpp:88)
==262795== 
==262795== 43 bytes in 1 blocks are definitely lost in loss record 8 of 11
==262795==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262795==    by 0x40733A: get_next_line (get_next_line.c:128)
==262795==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262795==    by 0x4062FD: main (mandatory.cpp:88)
==262795== 
==262795== 82 bytes in 1 blocks are definitely lost in loss record 9 of 11
==262795==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262795==    by 0x407494: ft_strjoin (get_next_line_utils.c:57)
==262795==    by 0x407841: f_give_stash (get_next_line_utils.c:293)
==262795==    by 0x4078DC: f_ret (get_next_line_utils.c:311)
==262795==    by 0x407397: get_next_line (get_next_line.c:133)
==262795==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262795==    by 0x4062DF: main (mandatory.cpp:88)
==262795== 
==262795== 84 bytes in 1 blocks are definitely lost in loss record 10 of 11
==262795==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262795==    by 0x407494: ft_strjoin (get_next_line_utils.c:57)
==262795==    by 0x407841: f_give_stash (get_next_line_utils.c:293)
==262795==    by 0x4078DC: f_ret (get_next_line_utils.c:311)
==262795==    by 0x407397: get_next_line (get_next_line.c:133)
==262795==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262795==    by 0x4062CD: main (mandatory.cpp:88)
==262795== 
==262795== 128 bytes in 2 blocks are definitely lost in loss record 11 of 11
==262795==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262795==    by 0x407494: ft_strjoin (get_next_line_utils.c:57)
==262795==    by 0x407841: f_give_stash (get_next_line_utils.c:293)
==262795==    by 0x4078DC: f_ret (get_next_line_utils.c:311)
==262795==    by 0x407397: get_next_line (get_next_line.c:133)
==262795==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262795==    by 0x4062BB: main (mandatory.cpp:88)
==262795== 
==262801== 1 bytes in 1 blocks are definitely lost in loss record 1 of 12
==262801==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262801==    by 0x407814: f_give_stash (get_next_line_utils.c:290)
==262801==    by 0x4078DC: f_ret (get_next_line_utils.c:311)
==262801==    by 0x407397: get_next_line (get_next_line.c:133)
==262801==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262801==    by 0x40651D: main (mandatory.cpp:97)
==262801== 
==262801== 42 bytes in 1 blocks are possibly lost in loss record 2 of 12
==262801==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262801==    by 0x407494: ft_strjoin (get_next_line_utils.c:57)
==262801==    by 0x407841: f_give_stash (get_next_line_utils.c:293)
==262801==    by 0x4078DC: f_ret (get_next_line_utils.c:311)
==262801==    by 0x407397: get_next_line (get_next_line.c:133)
==262801==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262801==    by 0x406565: main (mandatory.cpp:97)
==262801== 
==262801== 43 bytes in 1 blocks are definitely lost in loss record 3 of 12
==262801==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262801==    by 0x40733A: get_next_line (get_next_line.c:128)
==262801==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262801==    by 0x40651D: main (mandatory.cpp:97)
==262801== 
==262801== 43 bytes in 1 blocks are definitely lost in loss record 4 of 12
==262801==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262801==    by 0x407494: ft_strjoin (get_next_line_utils.c:57)
==262801==    by 0x407841: f_give_stash (get_next_line_utils.c:293)
==262801==    by 0x4078DC: f_ret (get_next_line_utils.c:311)
==262801==    by 0x407397: get_next_line (get_next_line.c:133)
==262801==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262801==    by 0x40651D: main (mandatory.cpp:97)
==262801== 
==262801== 43 bytes in 1 blocks are definitely lost in loss record 5 of 12
==262801==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262801==    by 0x40733A: get_next_line (get_next_line.c:128)
==262801==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262801==    by 0x40652F: main (mandatory.cpp:97)
==262801== 
==262801== 43 bytes in 1 blocks are definitely lost in loss record 6 of 12
==262801==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262801==    by 0x40733A: get_next_line (get_next_line.c:128)
==262801==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262801==    by 0x406541: main (mandatory.cpp:97)
==262801== 
==262801== 43 bytes in 1 blocks are definitely lost in loss record 7 of 12
==262801==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262801==    by 0x40733A: get_next_line (get_next_line.c:128)
==262801==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262801==    by 0x406553: main (mandatory.cpp:97)
==262801== 
==262801== 43 bytes in 1 blocks are definitely lost in loss record 8 of 12
==262801==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262801==    by 0x407494: ft_strjoin (get_next_line_utils.c:57)
==262801==    by 0x407841: f_give_stash (get_next_line_utils.c:293)
==262801==    by 0x4078DC: f_ret (get_next_line_utils.c:311)
==262801==    by 0x407397: get_next_line (get_next_line.c:133)
==262801==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262801==    by 0x406553: main (mandatory.cpp:97)
==262801== 
==262801== 43 bytes in 1 blocks are definitely lost in loss record 9 of 12
==262801==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262801==    by 0x40733A: get_next_line (get_next_line.c:128)
==262801==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262801==    by 0x406565: main (mandatory.cpp:97)
==262801== 
==262801== 43 bytes in 1 blocks are definitely lost in loss record 10 of 12
==262801==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262801==    by 0x40733A: get_next_line (get_next_line.c:128)
==262801==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262801==    by 0x406571: main (mandatory.cpp:97)
==262801== 
==262801== 44 bytes in 1 blocks are definitely lost in loss record 11 of 12
==262801==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262801==    by 0x407494: ft_strjoin (get_next_line_utils.c:57)
==262801==    by 0x407841: f_give_stash (get_next_line_utils.c:293)
==262801==    by 0x4078DC: f_ret (get_next_line_utils.c:311)
==262801==    by 0x407397: get_next_line (get_next_line.c:133)
==262801==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262801==    by 0x40652F: main (mandatory.cpp:97)
==262801== 
==262801== 44 bytes in 1 blocks are definitely lost in loss record 12 of 12
==262801==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262801==    by 0x407494: ft_strjoin (get_next_line_utils.c:57)
==262801==    by 0x407841: f_give_stash (get_next_line_utils.c:293)
==262801==    by 0x4078DC: f_ret (get_next_line_utils.c:311)
==262801==    by 0x407397: get_next_line (get_next_line.c:133)
==262801==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262801==    by 0x406541: main (mandatory.cpp:97)
==262801== 
==262805== Invalid write of size 1
==262805==    at 0x4077DC: f_ret_zero (get_next_line_utils.c:280)
==262805==    by 0x4078C7: f_ret (get_next_line_utils.c:308)
==262805==    by 0x407397: get_next_line (get_next_line.c:133)
==262805==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262805==    by 0x406821: main (mandatory.cpp:106)
==262805==  Address 0x4de7ee0 is 0 bytes inside a block of size 42 free'd
==262805==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262805==    by 0x40775C: ft_strdup2 (get_next_line_utils.c:229)
==262805==    by 0x4077D0: f_ret_zero (get_next_line_utils.c:279)
==262805==    by 0x4078C7: f_ret (get_next_line_utils.c:308)
==262805==    by 0x407397: get_next_line (get_next_line.c:133)
==262805==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262805==    by 0x406821: main (mandatory.cpp:106)
==262805==  Block was alloc'd at
==262805==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262805==    by 0x407494: ft_strjoin (get_next_line_utils.c:57)
==262805==    by 0x407841: f_give_stash (get_next_line_utils.c:293)
==262805==    by 0x4078DC: f_ret (get_next_line_utils.c:311)
==262805==    by 0x407397: get_next_line (get_next_line.c:133)
==262805==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262805==    by 0x406821: main (mandatory.cpp:106)
==262805== 
==262805== Invalid read of size 1
==262805==    at 0x4073EE: ft_strchr (get_next_line_utils.c:25)
==262805==    by 0x407362: get_next_line (get_next_line.c:131)
==262805==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262805==    by 0x40682D: main (mandatory.cpp:106)
==262805==  Address 0x4de7ee0 is 0 bytes inside a block of size 42 free'd
==262805==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262805==    by 0x40775C: ft_strdup2 (get_next_line_utils.c:229)
==262805==    by 0x4077D0: f_ret_zero (get_next_line_utils.c:279)
==262805==    by 0x4078C7: f_ret (get_next_line_utils.c:308)
==262805==    by 0x407397: get_next_line (get_next_line.c:133)
==262805==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262805==    by 0x406821: main (mandatory.cpp:106)
==262805==  Block was alloc'd at
==262805==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262805==    by 0x407494: ft_strjoin (get_next_line_utils.c:57)
==262805==    by 0x407841: f_give_stash (get_next_line_utils.c:293)
==262805==    by 0x4078DC: f_ret (get_next_line_utils.c:311)
==262805==    by 0x407397: get_next_line (get_next_line.c:133)
==262805==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262805==    by 0x406821: main (mandatory.cpp:106)
==262805== 
==262805== Invalid read of size 1
==262805==    at 0x407782: f_ret_zero (get_next_line_utils.c:275)
==262805==    by 0x4078C7: f_ret (get_next_line_utils.c:308)
==262805==    by 0x407397: get_next_line (get_next_line.c:133)
==262805==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262805==    by 0x40682D: main (mandatory.cpp:106)
==262805==  Address 0x4de7ee0 is 0 bytes inside a block of size 42 free'd
==262805==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262805==    by 0x40775C: ft_strdup2 (get_next_line_utils.c:229)
==262805==    by 0x4077D0: f_ret_zero (get_next_line_utils.c:279)
==262805==    by 0x4078C7: f_ret (get_next_line_utils.c:308)
==262805==    by 0x407397: get_next_line (get_next_line.c:133)
==262805==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262805==    by 0x406821: main (mandatory.cpp:106)
==262805==  Block was alloc'd at
==262805==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262805==    by 0x407494: ft_strjoin (get_next_line_utils.c:57)
==262805==    by 0x407841: f_give_stash (get_next_line_utils.c:293)
==262805==    by 0x4078DC: f_ret (get_next_line_utils.c:311)
==262805==    by 0x407397: get_next_line (get_next_line.c:133)
==262805==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262805==    by 0x406821: main (mandatory.cpp:106)
==262805== 
==262805== 1 bytes in 1 blocks are definitely lost in loss record 1 of 16
==262805==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262805==    by 0x407814: f_give_stash (get_next_line_utils.c:290)
==262805==    by 0x4078DC: f_ret (get_next_line_utils.c:311)
==262805==    by 0x407397: get_next_line (get_next_line.c:133)
==262805==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262805==    by 0x406791: main (mandatory.cpp:106)
==262805== 
==262805== 43 bytes in 1 blocks are definitely lost in loss record 2 of 16
==262805==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262805==    by 0x40733A: get_next_line (get_next_line.c:128)
==262805==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262805==    by 0x406791: main (mandatory.cpp:106)
==262805== 
==262805== 43 bytes in 1 blocks are definitely lost in loss record 3 of 16
==262805==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262805==    by 0x407494: ft_strjoin (get_next_line_utils.c:57)
==262805==    by 0x407841: f_give_stash (get_next_line_utils.c:293)
==262805==    by 0x4078DC: f_ret (get_next_line_utils.c:311)
==262805==    by 0x407397: get_next_line (get_next_line.c:133)
==262805==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262805==    by 0x406791: main (mandatory.cpp:106)
==262805== 
==262805== 43 bytes in 1 blocks are definitely lost in loss record 4 of 16
==262805==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262805==    by 0x40733A: get_next_line (get_next_line.c:128)
==262805==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262805==    by 0x4067A3: main (mandatory.cpp:106)
==262805== 
==262805== 43 bytes in 1 blocks are definitely lost in loss record 5 of 16
==262805==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262805==    by 0x407494: ft_strjoin (get_next_line_utils.c:57)
==262805==    by 0x407841: f_give_stash (get_next_line_utils.c:293)
==262805==    by 0x4078DC: f_ret (get_next_line_utils.c:311)
==262805==    by 0x407397: get_next_line (get_next_line.c:133)
==262805==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262805==    by 0x4067A3: main (mandatory.cpp:106)
==262805== 
==262805== 43 bytes in 1 blocks are definitely lost in loss record 6 of 16
==262805==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262805==    by 0x40733A: get_next_line (get_next_line.c:128)
==262805==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262805==    by 0x4067B5: main (mandatory.cpp:106)
==262805== 
==262805== 43 bytes in 1 blocks are definitely lost in loss record 7 of 16
==262805==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262805==    by 0x40733A: get_next_line (get_next_line.c:128)
==262805==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262805==    by 0x4067C7: main (mandatory.cpp:106)
==262805== 
==262805== 43 bytes in 1 blocks are definitely lost in loss record 8 of 16
==262805==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262805==    by 0x40733A: get_next_line (get_next_line.c:128)
==262805==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262805==    by 0x4067D9: main (mandatory.cpp:106)
==262805== 
==262805== 43 bytes in 1 blocks are definitely lost in loss record 9 of 16
==262805==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262805==    by 0x40733A: get_next_line (get_next_line.c:128)
==262805==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262805==    by 0x4067EB: main (mandatory.cpp:106)
==262805== 
==262805== 43 bytes in 1 blocks are definitely lost in loss record 10 of 16
==262805==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262805==    by 0x40733A: get_next_line (get_next_line.c:128)
==262805==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262805==    by 0x4067FD: main (mandatory.cpp:106)
==262805== 
==262805== 43 bytes in 1 blocks are definitely lost in loss record 11 of 16
==262805==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262805==    by 0x40733A: get_next_line (get_next_line.c:128)
==262805==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262805==    by 0x40680F: main (mandatory.cpp:106)
==262805== 
==262805== 43 bytes in 1 blocks are definitely lost in loss record 12 of 16
==262805==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262805==    by 0x40733A: get_next_line (get_next_line.c:128)
==262805==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262805==    by 0x406821: main (mandatory.cpp:106)
==262805== 
==262805== 43 bytes in 1 blocks are definitely lost in loss record 13 of 16
==262805==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262805==    by 0x40733A: get_next_line (get_next_line.c:128)
==262805==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262805==    by 0x40682D: main (mandatory.cpp:106)
==262805== 
==262805== 79 bytes in 1 blocks are definitely lost in loss record 14 of 16
==262805==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262805==    by 0x407494: ft_strjoin (get_next_line_utils.c:57)
==262805==    by 0x407841: f_give_stash (get_next_line_utils.c:293)
==262805==    by 0x4078DC: f_ret (get_next_line_utils.c:311)
==262805==    by 0x407397: get_next_line (get_next_line.c:133)
==262805==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262805==    by 0x4067FD: main (mandatory.cpp:106)
==262805== 
==262805== 82 bytes in 1 blocks are definitely lost in loss record 15 of 16
==262805==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262805==    by 0x407494: ft_strjoin (get_next_line_utils.c:57)
==262805==    by 0x407841: f_give_stash (get_next_line_utils.c:293)
==262805==    by 0x4078DC: f_ret (get_next_line_utils.c:311)
==262805==    by 0x407397: get_next_line (get_next_line.c:133)
==262805==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262805==    by 0x4067D9: main (mandatory.cpp:106)
==262805== 
==262805== 84 bytes in 1 blocks are definitely lost in loss record 16 of 16
==262805==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262805==    by 0x407494: ft_strjoin (get_next_line_utils.c:57)
==262805==    by 0x407841: f_give_stash (get_next_line_utils.c:293)
==262805==    by 0x4078DC: f_ret (get_next_line_utils.c:311)
==262805==    by 0x407397: get_next_line (get_next_line.c:133)
==262805==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262805==    by 0x4067B5: main (mandatory.cpp:106)
==262805== 
==262811== 1 bytes in 1 blocks are definitely lost in loss record 1 of 17
==262811==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262811==    by 0x407814: f_give_stash (get_next_line_utils.c:290)
==262811==    by 0x4078DC: f_ret (get_next_line_utils.c:311)
==262811==    by 0x407397: get_next_line (get_next_line.c:133)
==262811==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262811==    by 0x406A4D: main (mandatory.cpp:119)
==262811== 
==262811== 43 bytes in 1 blocks are possibly lost in loss record 2 of 17
==262811==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262811==    by 0x407494: ft_strjoin (get_next_line_utils.c:57)
==262811==    by 0x407841: f_give_stash (get_next_line_utils.c:293)
==262811==    by 0x4078DC: f_ret (get_next_line_utils.c:311)
==262811==    by 0x407397: get_next_line (get_next_line.c:133)
==262811==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262811==    by 0x406ADD: main (mandatory.cpp:119)
==262811== 
==262811== 43 bytes in 1 blocks are definitely lost in loss record 3 of 17
==262811==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262811==    by 0x40733A: get_next_line (get_next_line.c:128)
==262811==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262811==    by 0x406A4D: main (mandatory.cpp:119)
==262811== 
==262811== 43 bytes in 1 blocks are definitely lost in loss record 4 of 17
==262811==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262811==    by 0x407494: ft_strjoin (get_next_line_utils.c:57)
==262811==    by 0x407841: f_give_stash (get_next_line_utils.c:293)
==262811==    by 0x4078DC: f_ret (get_next_line_utils.c:311)
==262811==    by 0x407397: get_next_line (get_next_line.c:133)
==262811==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262811==    by 0x406A4D: main (mandatory.cpp:119)
==262811== 
==262811== 43 bytes in 1 blocks are definitely lost in loss record 5 of 17
==262811==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262811==    by 0x40733A: get_next_line (get_next_line.c:128)
==262811==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262811==    by 0x406A5F: main (mandatory.cpp:119)
==262811== 
==262811== 43 bytes in 1 blocks are definitely lost in loss record 6 of 17
==262811==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262811==    by 0x407494: ft_strjoin (get_next_line_utils.c:57)
==262811==    by 0x407841: f_give_stash (get_next_line_utils.c:293)
==262811==    by 0x4078DC: f_ret (get_next_line_utils.c:311)
==262811==    by 0x407397: get_next_line (get_next_line.c:133)
==262811==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262811==    by 0x406A5F: main (mandatory.cpp:119)
==262811== 
==262811== 43 bytes in 1 blocks are definitely lost in loss record 7 of 17
==262811==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262811==    by 0x40733A: get_next_line (get_next_line.c:128)
==262811==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262811==    by 0x406A71: main (mandatory.cpp:119)
==262811== 
==262811== 43 bytes in 1 blocks are definitely lost in loss record 8 of 17
==262811==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262811==    by 0x40733A: get_next_line (get_next_line.c:128)
==262811==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262811==    by 0x406A83: main (mandatory.cpp:119)
==262811== 
==262811== 43 bytes in 1 blocks are definitely lost in loss record 9 of 17
==262811==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262811==    by 0x40733A: get_next_line (get_next_line.c:128)
==262811==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262811==    by 0x406A95: main (mandatory.cpp:119)
==262811== 
==262811== 43 bytes in 1 blocks are definitely lost in loss record 10 of 17
==262811==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262811==    by 0x40733A: get_next_line (get_next_line.c:128)
==262811==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262811==    by 0x406AA7: main (mandatory.cpp:119)
==262811== 
==262811== 43 bytes in 1 blocks are definitely lost in loss record 11 of 17
==262811==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262811==    by 0x40733A: get_next_line (get_next_line.c:128)
==262811==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262811==    by 0x406AB9: main (mandatory.cpp:119)
==262811== 
==262811== 43 bytes in 1 blocks are definitely lost in loss record 12 of 17
==262811==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262811==    by 0x40733A: get_next_line (get_next_line.c:128)
==262811==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262811==    by 0x406ACB: main (mandatory.cpp:119)
==262811== 
==262811== 43 bytes in 1 blocks are definitely lost in loss record 13 of 17
==262811==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262811==    by 0x40733A: get_next_line (get_next_line.c:128)
==262811==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262811==    by 0x406ADD: main (mandatory.cpp:119)
==262811== 
==262811== 43 bytes in 1 blocks are definitely lost in loss record 14 of 17
==262811==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262811==    by 0x40733A: get_next_line (get_next_line.c:128)
==262811==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262811==    by 0x406AE9: main (mandatory.cpp:119)
==262811== 
==262811== 79 bytes in 1 blocks are definitely lost in loss record 15 of 17
==262811==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262811==    by 0x407494: ft_strjoin (get_next_line_utils.c:57)
==262811==    by 0x407841: f_give_stash (get_next_line_utils.c:293)
==262811==    by 0x4078DC: f_ret (get_next_line_utils.c:311)
==262811==    by 0x407397: get_next_line (get_next_line.c:133)
==262811==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262811==    by 0x406AB9: main (mandatory.cpp:119)
==262811== 
==262811== 82 bytes in 1 blocks are definitely lost in loss record 16 of 17
==262811==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262811==    by 0x407494: ft_strjoin (get_next_line_utils.c:57)
==262811==    by 0x407841: f_give_stash (get_next_line_utils.c:293)
==262811==    by 0x4078DC: f_ret (get_next_line_utils.c:311)
==262811==    by 0x407397: get_next_line (get_next_line.c:133)
==262811==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262811==    by 0x406A95: main (mandatory.cpp:119)
==262811== 
==262811== 84 bytes in 1 blocks are definitely lost in loss record 17 of 17
==262811==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262811==    by 0x407494: ft_strjoin (get_next_line_utils.c:57)
==262811==    by 0x407841: f_give_stash (get_next_line_utils.c:293)
==262811==    by 0x4078DC: f_ret (get_next_line_utils.c:311)
==262811==    by 0x407397: get_next_line (get_next_line.c:133)
==262811==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262811==    by 0x406A71: main (mandatory.cpp:119)
==262811== 
==262814== Invalid write of size 1
==262814==    at 0x4077DC: f_ret_zero (get_next_line_utils.c:280)
==262814==    by 0x4078C7: f_ret (get_next_line_utils.c:308)
==262814==    by 0x407397: get_next_line (get_next_line.c:133)
==262814==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262814==    by 0x406D09: main (mandatory.cpp:132)
==262814==  Address 0x4f0f9e0 is 0 bytes inside a block of size 10,001 free'd
==262814==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262814==    by 0x40775C: ft_strdup2 (get_next_line_utils.c:229)
==262814==    by 0x4077D0: f_ret_zero (get_next_line_utils.c:279)
==262814==    by 0x4078C7: f_ret (get_next_line_utils.c:308)
==262814==    by 0x407397: get_next_line (get_next_line.c:133)
==262814==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262814==    by 0x406D09: main (mandatory.cpp:132)
==262814==  Block was alloc'd at
==262814==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262814==    by 0x407494: ft_strjoin (get_next_line_utils.c:57)
==262814==    by 0x407841: f_give_stash (get_next_line_utils.c:293)
==262814==    by 0x4078DC: f_ret (get_next_line_utils.c:311)
==262814==    by 0x407397: get_next_line (get_next_line.c:133)
==262814==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262814==    by 0x406D09: main (mandatory.cpp:132)
==262814== 
==262814== Invalid read of size 1
==262814==    at 0x4073EE: ft_strchr (get_next_line_utils.c:25)
==262814==    by 0x407362: get_next_line (get_next_line.c:131)
==262814==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262814==    by 0x406D15: main (mandatory.cpp:132)
==262814==  Address 0x4f0f9e0 is 0 bytes inside a block of size 10,001 free'd
==262814==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262814==    by 0x40775C: ft_strdup2 (get_next_line_utils.c:229)
==262814==    by 0x4077D0: f_ret_zero (get_next_line_utils.c:279)
==262814==    by 0x4078C7: f_ret (get_next_line_utils.c:308)
==262814==    by 0x407397: get_next_line (get_next_line.c:133)
==262814==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262814==    by 0x406D09: main (mandatory.cpp:132)
==262814==  Block was alloc'd at
==262814==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262814==    by 0x407494: ft_strjoin (get_next_line_utils.c:57)
==262814==    by 0x407841: f_give_stash (get_next_line_utils.c:293)
==262814==    by 0x4078DC: f_ret (get_next_line_utils.c:311)
==262814==    by 0x407397: get_next_line (get_next_line.c:133)
==262814==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262814==    by 0x406D09: main (mandatory.cpp:132)
==262814== 
==262814== Invalid read of size 1
==262814==    at 0x407782: f_ret_zero (get_next_line_utils.c:275)
==262814==    by 0x4078C7: f_ret (get_next_line_utils.c:308)
==262814==    by 0x407397: get_next_line (get_next_line.c:133)
==262814==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262814==    by 0x406D15: main (mandatory.cpp:132)
==262814==  Address 0x4f0f9e0 is 0 bytes inside a block of size 10,001 free'd
==262814==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262814==    by 0x40775C: ft_strdup2 (get_next_line_utils.c:229)
==262814==    by 0x4077D0: f_ret_zero (get_next_line_utils.c:279)
==262814==    by 0x4078C7: f_ret (get_next_line_utils.c:308)
==262814==    by 0x407397: get_next_line (get_next_line.c:133)
==262814==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262814==    by 0x406D09: main (mandatory.cpp:132)
==262814==  Block was alloc'd at
==262814==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262814==    by 0x407494: ft_strjoin (get_next_line_utils.c:57)
==262814==    by 0x407841: f_give_stash (get_next_line_utils.c:293)
==262814==    by 0x4078DC: f_ret (get_next_line_utils.c:311)
==262814==    by 0x407397: get_next_line (get_next_line.c:133)
==262814==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262814==    by 0x406D09: main (mandatory.cpp:132)
==262814== 
==262814== 1 bytes in 1 blocks are definitely lost in loss record 1 of 4
==262814==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262814==    by 0x407814: f_give_stash (get_next_line_utils.c:290)
==262814==    by 0x4078DC: f_ret (get_next_line_utils.c:311)
==262814==    by 0x407397: get_next_line (get_next_line.c:133)
==262814==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262814==    by 0x406D09: main (mandatory.cpp:132)
==262814== 
==262814== 43 bytes in 1 blocks are definitely lost in loss record 2 of 4
==262814==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262814==    by 0x40733A: get_next_line (get_next_line.c:128)
==262814==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262814==    by 0x406D09: main (mandatory.cpp:132)
==262814== 
==262814== 43 bytes in 1 blocks are definitely lost in loss record 3 of 4
==262814==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262814==    by 0x40733A: get_next_line (get_next_line.c:128)
==262814==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262814==    by 0x406D15: main (mandatory.cpp:132)
==262814== 
==262814== 1,194,760 bytes in 238 blocks are definitely lost in loss record 4 of 4
==262814==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262814==    by 0x407494: ft_strjoin (get_next_line_utils.c:57)
==262814==    by 0x407841: f_give_stash (get_next_line_utils.c:293)
==262814==    by 0x4078DC: f_ret (get_next_line_utils.c:311)
==262814==    by 0x407397: get_next_line (get_next_line.c:133)
==262814==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262814==    by 0x406D09: main (mandatory.cpp:132)
==262814== 
==262826== 1 bytes in 1 blocks are definitely lost in loss record 1 of 5
==262826==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262826==    by 0x407814: f_give_stash (get_next_line_utils.c:290)
==262826==    by 0x4078DC: f_ret (get_next_line_utils.c:311)
==262826==    by 0x407397: get_next_line (get_next_line.c:133)
==262826==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262826==    by 0x406F35: main (mandatory.cpp:136)
==262826== 
==262826== 43 bytes in 1 blocks are definitely lost in loss record 2 of 5
==262826==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262826==    by 0x40733A: get_next_line (get_next_line.c:128)
==262826==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262826==    by 0x406F35: main (mandatory.cpp:136)
==262826== 
==262826== 43 bytes in 1 blocks are definitely lost in loss record 3 of 5
==262826==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262826==    by 0x40733A: get_next_line (get_next_line.c:128)
==262826==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262826==    by 0x406F41: main (mandatory.cpp:136)
==262826== 
==262826== 10,002 bytes in 1 blocks are possibly lost in loss record 4 of 5
==262826==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262826==    by 0x407494: ft_strjoin (get_next_line_utils.c:57)
==262826==    by 0x407841: f_give_stash (get_next_line_utils.c:293)
==262826==    by 0x4078DC: f_ret (get_next_line_utils.c:311)
==262826==    by 0x407397: get_next_line (get_next_line.c:133)
==262826==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262826==    by 0x406F35: main (mandatory.cpp:136)
==262826== 
==262826== 1,194,760 bytes in 238 blocks are definitely lost in loss record 5 of 5
==262826==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262826==    by 0x407494: ft_strjoin (get_next_line_utils.c:57)
==262826==    by 0x407841: f_give_stash (get_next_line_utils.c:293)
==262826==    by 0x4078DC: f_ret (get_next_line_utils.c:311)
==262826==    by 0x407397: get_next_line (get_next_line.c:133)
==262826==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262826==    by 0x406F35: main (mandatory.cpp:136)
==262826== 
==262827== Invalid read of size 1
==262827==    at 0x484FBD4: strcmp (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262827==    by 0x402D0A: gnl(int, char const*) (gnl.cpp:24)
==262827==    by 0x407160: main (mandatory.cpp:141)
==262827==  Address 0x0 is not stack'd, malloc'd or (recently) free'd
==262827== 
==262857== Invalid write of size 1
==262857==    at 0x407868: f_ret (get_next_line_utils.c:304)
==262857==    by 0x407365: get_next_line (get_next_line.c:133)
==262857==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262857==    by 0x404BC6: main (mandatory.cpp:25)
==262857==  Address 0x51d203f is 1 bytes before a block of size 10,000,001 alloc'd
==262857==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262857==    by 0x407308: get_next_line (get_next_line.c:128)
==262857==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262857==    by 0x404BC6: main (mandatory.cpp:25)
==262857== 
==262857== Invalid write of size 1
==262857==    at 0x407868: f_ret (get_next_line_utils.c:304)
==262857==    by 0x407365: get_next_line (get_next_line.c:133)
==262857==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262857==    by 0x404BE8: main (mandatory.cpp:25)
==262857==  Address 0x5b5c03f is 1 bytes before a block of size 10,000,001 alloc'd
==262857==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262857==    by 0x407308: get_next_line (get_next_line.c:128)
==262857==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262857==    by 0x404BE8: main (mandatory.cpp:25)
==262857== 
==262857== 10,000,001 bytes in 1 blocks are possibly lost in loss record 1 of 2
==262857==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262857==    by 0x407308: get_next_line (get_next_line.c:128)
==262857==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262857==    by 0x404BC6: main (mandatory.cpp:25)
==262857== 
==262857== 10,000,001 bytes in 1 blocks are definitely lost in loss record 2 of 2
==262857==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262857==    by 0x407308: get_next_line (get_next_line.c:128)
==262857==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262857==    by 0x404BE8: main (mandatory.cpp:25)
==262857== 
==262858== 1 bytes in 1 blocks are definitely lost in loss record 2 of 4
==262858==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262858==    by 0x4077E2: f_give_stash (get_next_line_utils.c:290)
==262858==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==262858==    by 0x407365: get_next_line (get_next_line.c:133)
==262858==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262858==    by 0x404E63: main (mandatory.cpp:31)
==262858== 
==262858== 10,000,001 bytes in 1 blocks are possibly lost in loss record 3 of 4
==262858==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262858==    by 0x407308: get_next_line (get_next_line.c:128)
==262858==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262858==    by 0x404E63: main (mandatory.cpp:31)
==262858== 
==262858== 10,000,001 bytes in 1 blocks are definitely lost in loss record 4 of 4
==262858==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262858==    by 0x407308: get_next_line (get_next_line.c:128)
==262858==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262858==    by 0x404E6F: main (mandatory.cpp:31)
==262858== 
==262864== 1 bytes in 1 blocks are definitely lost in loss record 1 of 4
==262864==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262864==    by 0x4077E2: f_give_stash (get_next_line_utils.c:290)
==262864==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==262864==    by 0x407365: get_next_line (get_next_line.c:133)
==262864==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262864==    by 0x40508F: main (mandatory.cpp:36)
==262864== 
==262864== 2 bytes in 1 blocks are possibly lost in loss record 2 of 4
==262864==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262864==    by 0x407462: ft_strjoin (get_next_line_utils.c:57)
==262864==    by 0x40780F: f_give_stash (get_next_line_utils.c:293)
==262864==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==262864==    by 0x407365: get_next_line (get_next_line.c:133)
==262864==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262864==    by 0x40508F: main (mandatory.cpp:36)
==262864== 
==262864== 10,000,001 bytes in 1 blocks are possibly lost in loss record 3 of 4
==262864==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262864==    by 0x407308: get_next_line (get_next_line.c:128)
==262864==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262864==    by 0x40508F: main (mandatory.cpp:36)
==262864== 
==262864== 10,000,001 bytes in 1 blocks are definitely lost in loss record 4 of 4
==262864==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262864==    by 0x407308: get_next_line (get_next_line.c:128)
==262864==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262864==    by 0x40509B: main (mandatory.cpp:36)
==262864== 
==262873== Invalid write of size 1
==262873==    at 0x4077AA: f_ret_zero (get_next_line_utils.c:280)
==262873==    by 0x407895: f_ret (get_next_line_utils.c:308)
==262873==    by 0x407365: get_next_line (get_next_line.c:133)
==262873==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262873==    by 0x4052BB: main (mandatory.cpp:41)
==262873==  Address 0x4de5970 is 0 bytes inside a block of size 42 free'd
==262873==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262873==    by 0x40772A: ft_strdup2 (get_next_line_utils.c:229)
==262873==    by 0x40779E: f_ret_zero (get_next_line_utils.c:279)
==262873==    by 0x407895: f_ret (get_next_line_utils.c:308)
==262873==    by 0x407365: get_next_line (get_next_line.c:133)
==262873==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262873==    by 0x4052BB: main (mandatory.cpp:41)
==262873==  Block was alloc'd at
==262873==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262873==    by 0x407462: ft_strjoin (get_next_line_utils.c:57)
==262873==    by 0x40780F: f_give_stash (get_next_line_utils.c:293)
==262873==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==262873==    by 0x407365: get_next_line (get_next_line.c:133)
==262873==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262873==    by 0x4052BB: main (mandatory.cpp:41)
==262873== 
==262873== Invalid read of size 1
==262873==    at 0x4073BC: ft_strchr (get_next_line_utils.c:25)
==262873==    by 0x407330: get_next_line (get_next_line.c:131)
==262873==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262873==    by 0x4052C7: main (mandatory.cpp:41)
==262873==  Address 0x4de5970 is 0 bytes inside a block of size 42 free'd
==262873==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262873==    by 0x40772A: ft_strdup2 (get_next_line_utils.c:229)
==262873==    by 0x40779E: f_ret_zero (get_next_line_utils.c:279)
==262873==    by 0x407895: f_ret (get_next_line_utils.c:308)
==262873==    by 0x407365: get_next_line (get_next_line.c:133)
==262873==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262873==    by 0x4052BB: main (mandatory.cpp:41)
==262873==  Block was alloc'd at
==262873==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262873==    by 0x407462: ft_strjoin (get_next_line_utils.c:57)
==262873==    by 0x40780F: f_give_stash (get_next_line_utils.c:293)
==262873==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==262873==    by 0x407365: get_next_line (get_next_line.c:133)
==262873==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262873==    by 0x4052BB: main (mandatory.cpp:41)
==262873== 
==262873== Invalid read of size 1
==262873==    at 0x407750: f_ret_zero (get_next_line_utils.c:275)
==262873==    by 0x407895: f_ret (get_next_line_utils.c:308)
==262873==    by 0x407365: get_next_line (get_next_line.c:133)
==262873==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262873==    by 0x4052C7: main (mandatory.cpp:41)
==262873==  Address 0x4de5970 is 0 bytes inside a block of size 42 free'd
==262873==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262873==    by 0x40772A: ft_strdup2 (get_next_line_utils.c:229)
==262873==    by 0x40779E: f_ret_zero (get_next_line_utils.c:279)
==262873==    by 0x407895: f_ret (get_next_line_utils.c:308)
==262873==    by 0x407365: get_next_line (get_next_line.c:133)
==262873==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262873==    by 0x4052BB: main (mandatory.cpp:41)
==262873==  Block was alloc'd at
==262873==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262873==    by 0x407462: ft_strjoin (get_next_line_utils.c:57)
==262873==    by 0x40780F: f_give_stash (get_next_line_utils.c:293)
==262873==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==262873==    by 0x407365: get_next_line (get_next_line.c:133)
==262873==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262873==    by 0x4052BB: main (mandatory.cpp:41)
==262873== 
==262873== 1 bytes in 1 blocks are definitely lost in loss record 1 of 3
==262873==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262873==    by 0x4077E2: f_give_stash (get_next_line_utils.c:290)
==262873==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==262873==    by 0x407365: get_next_line (get_next_line.c:133)
==262873==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262873==    by 0x4052BB: main (mandatory.cpp:41)
==262873== 
==262873== 10,000,001 bytes in 1 blocks are possibly lost in loss record 2 of 3
==262873==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262873==    by 0x407308: get_next_line (get_next_line.c:128)
==262873==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262873==    by 0x4052BB: main (mandatory.cpp:41)
==262873== 
==262873== 10,000,001 bytes in 1 blocks are definitely lost in loss record 3 of 3
==262873==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262873==    by 0x407308: get_next_line (get_next_line.c:128)
==262873==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262873==    by 0x4052C7: main (mandatory.cpp:41)
==262873== 
==262876== Invalid free() / delete / delete[] / realloc()
==262876==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262876==    by 0x40772A: ft_strdup2 (get_next_line_utils.c:229)
==262876==    by 0x40779E: f_ret_zero (get_next_line_utils.c:279)
==262876==    by 0x407895: f_ret (get_next_line_utils.c:308)
==262876==    by 0x407365: get_next_line (get_next_line.c:133)
==262876==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262876==    by 0x4054F9: main (mandatory.cpp:46)
==262876==  Address 0x4de5ca9 is 41 bytes inside a block of size 43 alloc'd
==262876==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262876==    by 0x407462: ft_strjoin (get_next_line_utils.c:57)
==262876==    by 0x40780F: f_give_stash (get_next_line_utils.c:293)
==262876==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==262876==    by 0x407365: get_next_line (get_next_line.c:133)
==262876==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262876==    by 0x4054E7: main (mandatory.cpp:46)
==262876== 
==262876== 1 bytes in 1 blocks are definitely lost in loss record 1 of 5
==262876==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262876==    by 0x4077E2: f_give_stash (get_next_line_utils.c:290)
==262876==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==262876==    by 0x407365: get_next_line (get_next_line.c:133)
==262876==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262876==    by 0x4054E7: main (mandatory.cpp:46)
==262876== 
==262876== 43 bytes in 1 blocks are possibly lost in loss record 2 of 5
==262876==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262876==    by 0x407462: ft_strjoin (get_next_line_utils.c:57)
==262876==    by 0x40780F: f_give_stash (get_next_line_utils.c:293)
==262876==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==262876==    by 0x407365: get_next_line (get_next_line.c:133)
==262876==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262876==    by 0x4054E7: main (mandatory.cpp:46)
==262876== 
==262876== 10,000,001 bytes in 1 blocks are possibly lost in loss record 3 of 5
==262876==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262876==    by 0x407308: get_next_line (get_next_line.c:128)
==262876==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262876==    by 0x4054E7: main (mandatory.cpp:46)
==262876== 
==262876== 10,000,001 bytes in 1 blocks are possibly lost in loss record 4 of 5
==262876==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262876==    by 0x407308: get_next_line (get_next_line.c:128)
==262876==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262876==    by 0x405505: main (mandatory.cpp:46)
==262876== 
==262876== 10,000,001 bytes in 1 blocks are definitely lost in loss record 5 of 5
==262876==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262876==    by 0x407308: get_next_line (get_next_line.c:128)
==262876==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262876==    by 0x4054F9: main (mandatory.cpp:46)
==262876== 
==262877== Invalid write of size 1
==262877==    at 0x4077AA: f_ret_zero (get_next_line_utils.c:280)
==262877==    by 0x407895: f_ret (get_next_line_utils.c:308)
==262877==    by 0x407365: get_next_line (get_next_line.c:133)
==262877==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262877==    by 0x405725: main (mandatory.cpp:52)
==262877==  Address 0x4de5f90 is 0 bytes inside a block of size 43 free'd
==262877==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262877==    by 0x40772A: ft_strdup2 (get_next_line_utils.c:229)
==262877==    by 0x40779E: f_ret_zero (get_next_line_utils.c:279)
==262877==    by 0x407895: f_ret (get_next_line_utils.c:308)
==262877==    by 0x407365: get_next_line (get_next_line.c:133)
==262877==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262877==    by 0x405725: main (mandatory.cpp:52)
==262877==  Block was alloc'd at
==262877==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262877==    by 0x407462: ft_strjoin (get_next_line_utils.c:57)
==262877==    by 0x40780F: f_give_stash (get_next_line_utils.c:293)
==262877==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==262877==    by 0x407365: get_next_line (get_next_line.c:133)
==262877==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262877==    by 0x405725: main (mandatory.cpp:52)
==262877== 
==262877== Invalid read of size 1
==262877==    at 0x4073BC: ft_strchr (get_next_line_utils.c:25)
==262877==    by 0x407330: get_next_line (get_next_line.c:131)
==262877==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262877==    by 0x405731: main (mandatory.cpp:52)
==262877==  Address 0x4de5f90 is 0 bytes inside a block of size 43 free'd
==262877==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262877==    by 0x40772A: ft_strdup2 (get_next_line_utils.c:229)
==262877==    by 0x40779E: f_ret_zero (get_next_line_utils.c:279)
==262877==    by 0x407895: f_ret (get_next_line_utils.c:308)
==262877==    by 0x407365: get_next_line (get_next_line.c:133)
==262877==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262877==    by 0x405725: main (mandatory.cpp:52)
==262877==  Block was alloc'd at
==262877==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262877==    by 0x407462: ft_strjoin (get_next_line_utils.c:57)
==262877==    by 0x40780F: f_give_stash (get_next_line_utils.c:293)
==262877==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==262877==    by 0x407365: get_next_line (get_next_line.c:133)
==262877==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262877==    by 0x405725: main (mandatory.cpp:52)
==262877== 
==262877== Invalid read of size 1
==262877==    at 0x407750: f_ret_zero (get_next_line_utils.c:275)
==262877==    by 0x407895: f_ret (get_next_line_utils.c:308)
==262877==    by 0x407365: get_next_line (get_next_line.c:133)
==262877==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262877==    by 0x405731: main (mandatory.cpp:52)
==262877==  Address 0x4de5f90 is 0 bytes inside a block of size 43 free'd
==262877==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262877==    by 0x40772A: ft_strdup2 (get_next_line_utils.c:229)
==262877==    by 0x40779E: f_ret_zero (get_next_line_utils.c:279)
==262877==    by 0x407895: f_ret (get_next_line_utils.c:308)
==262877==    by 0x407365: get_next_line (get_next_line.c:133)
==262877==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262877==    by 0x405725: main (mandatory.cpp:52)
==262877==  Block was alloc'd at
==262877==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262877==    by 0x407462: ft_strjoin (get_next_line_utils.c:57)
==262877==    by 0x40780F: f_give_stash (get_next_line_utils.c:293)
==262877==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==262877==    by 0x407365: get_next_line (get_next_line.c:133)
==262877==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262877==    by 0x405725: main (mandatory.cpp:52)
==262877== 
==262877== 1 bytes in 1 blocks are definitely lost in loss record 1 of 3
==262877==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262877==    by 0x4077E2: f_give_stash (get_next_line_utils.c:290)
==262877==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==262877==    by 0x407365: get_next_line (get_next_line.c:133)
==262877==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262877==    by 0x405725: main (mandatory.cpp:52)
==262877== 
==262877== 10,000,001 bytes in 1 blocks are possibly lost in loss record 2 of 3
==262877==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262877==    by 0x407308: get_next_line (get_next_line.c:128)
==262877==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262877==    by 0x405725: main (mandatory.cpp:52)
==262877== 
==262877== 10,000,001 bytes in 1 blocks are definitely lost in loss record 3 of 3
==262877==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262877==    by 0x407308: get_next_line (get_next_line.c:128)
==262877==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262877==    by 0x405731: main (mandatory.cpp:52)
==262877== 
==262878== Invalid free() / delete / delete[] / realloc()
==262878==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262878==    by 0x40772A: ft_strdup2 (get_next_line_utils.c:229)
==262878==    by 0x40779E: f_ret_zero (get_next_line_utils.c:279)
==262878==    by 0x407895: f_ret (get_next_line_utils.c:308)
==262878==    by 0x407365: get_next_line (get_next_line.c:133)
==262878==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262878==    by 0x405963: main (mandatory.cpp:57)
==262878==  Address 0x4de62ca is 42 bytes inside a block of size 44 alloc'd
==262878==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262878==    by 0x407462: ft_strjoin (get_next_line_utils.c:57)
==262878==    by 0x40780F: f_give_stash (get_next_line_utils.c:293)
==262878==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==262878==    by 0x407365: get_next_line (get_next_line.c:133)
==262878==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262878==    by 0x405951: main (mandatory.cpp:57)
==262878== 
==262878== 1 bytes in 1 blocks are definitely lost in loss record 1 of 5
==262878==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262878==    by 0x4077E2: f_give_stash (get_next_line_utils.c:290)
==262878==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==262878==    by 0x407365: get_next_line (get_next_line.c:133)
==262878==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262878==    by 0x405951: main (mandatory.cpp:57)
==262878== 
==262878== 44 bytes in 1 blocks are possibly lost in loss record 2 of 5
==262878==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262878==    by 0x407462: ft_strjoin (get_next_line_utils.c:57)
==262878==    by 0x40780F: f_give_stash (get_next_line_utils.c:293)
==262878==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==262878==    by 0x407365: get_next_line (get_next_line.c:133)
==262878==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262878==    by 0x405951: main (mandatory.cpp:57)
==262878== 
==262878== 10,000,001 bytes in 1 blocks are possibly lost in loss record 3 of 5
==262878==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262878==    by 0x407308: get_next_line (get_next_line.c:128)
==262878==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262878==    by 0x405951: main (mandatory.cpp:57)
==262878== 
==262878== 10,000,001 bytes in 1 blocks are possibly lost in loss record 4 of 5
==262878==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262878==    by 0x407308: get_next_line (get_next_line.c:128)
==262878==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262878==    by 0x40596F: main (mandatory.cpp:57)
==262878== 
==262878== 10,000,001 bytes in 1 blocks are definitely lost in loss record 5 of 5
==262878==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262878==    by 0x407308: get_next_line (get_next_line.c:128)
==262878==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262878==    by 0x405963: main (mandatory.cpp:57)
==262878== 
==262884== Invalid write of size 1
==262884==    at 0x4077AA: f_ret_zero (get_next_line_utils.c:280)
==262884==    by 0x407895: f_ret (get_next_line_utils.c:308)
==262884==    by 0x407365: get_next_line (get_next_line.c:133)
==262884==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262884==    by 0x405B99: main (mandatory.cpp:68)
==262884==  Address 0x4de65b0 is 0 bytes inside a block of size 44 free'd
==262884==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262884==    by 0x40772A: ft_strdup2 (get_next_line_utils.c:229)
==262884==    by 0x40779E: f_ret_zero (get_next_line_utils.c:279)
==262884==    by 0x407895: f_ret (get_next_line_utils.c:308)
==262884==    by 0x407365: get_next_line (get_next_line.c:133)
==262884==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262884==    by 0x405B99: main (mandatory.cpp:68)
==262884==  Block was alloc'd at
==262884==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262884==    by 0x407462: ft_strjoin (get_next_line_utils.c:57)
==262884==    by 0x40780F: f_give_stash (get_next_line_utils.c:293)
==262884==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==262884==    by 0x407365: get_next_line (get_next_line.c:133)
==262884==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262884==    by 0x405B99: main (mandatory.cpp:68)
==262884== 
==262884== Invalid read of size 1
==262884==    at 0x4073BC: ft_strchr (get_next_line_utils.c:25)
==262884==    by 0x407330: get_next_line (get_next_line.c:131)
==262884==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262884==    by 0x405BA5: main (mandatory.cpp:68)
==262884==  Address 0x4de65b0 is 0 bytes inside a block of size 44 free'd
==262884==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262884==    by 0x40772A: ft_strdup2 (get_next_line_utils.c:229)
==262884==    by 0x40779E: f_ret_zero (get_next_line_utils.c:279)
==262884==    by 0x407895: f_ret (get_next_line_utils.c:308)
==262884==    by 0x407365: get_next_line (get_next_line.c:133)
==262884==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262884==    by 0x405B99: main (mandatory.cpp:68)
==262884==  Block was alloc'd at
==262884==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262884==    by 0x407462: ft_strjoin (get_next_line_utils.c:57)
==262884==    by 0x40780F: f_give_stash (get_next_line_utils.c:293)
==262884==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==262884==    by 0x407365: get_next_line (get_next_line.c:133)
==262884==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262884==    by 0x405B99: main (mandatory.cpp:68)
==262884== 
==262884== Invalid read of size 1
==262884==    at 0x407750: f_ret_zero (get_next_line_utils.c:275)
==262884==    by 0x407895: f_ret (get_next_line_utils.c:308)
==262884==    by 0x407365: get_next_line (get_next_line.c:133)
==262884==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262884==    by 0x405BA5: main (mandatory.cpp:68)
==262884==  Address 0x4de65b0 is 0 bytes inside a block of size 44 free'd
==262884==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262884==    by 0x40772A: ft_strdup2 (get_next_line_utils.c:229)
==262884==    by 0x40779E: f_ret_zero (get_next_line_utils.c:279)
==262884==    by 0x407895: f_ret (get_next_line_utils.c:308)
==262884==    by 0x407365: get_next_line (get_next_line.c:133)
==262884==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262884==    by 0x405B99: main (mandatory.cpp:68)
==262884==  Block was alloc'd at
==262884==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262884==    by 0x407462: ft_strjoin (get_next_line_utils.c:57)
==262884==    by 0x40780F: f_give_stash (get_next_line_utils.c:293)
==262884==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==262884==    by 0x407365: get_next_line (get_next_line.c:133)
==262884==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262884==    by 0x405B99: main (mandatory.cpp:68)
==262884== 
==262884== 1 bytes in 1 blocks are definitely lost in loss record 1 of 3
==262884==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262884==    by 0x4077E2: f_give_stash (get_next_line_utils.c:290)
==262884==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==262884==    by 0x407365: get_next_line (get_next_line.c:133)
==262884==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262884==    by 0x405B99: main (mandatory.cpp:68)
==262884== 
==262884== 10,000,001 bytes in 1 blocks are possibly lost in loss record 2 of 3
==262884==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262884==    by 0x407308: get_next_line (get_next_line.c:128)
==262884==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262884==    by 0x405B99: main (mandatory.cpp:68)
==262884== 
==262884== 10,000,001 bytes in 1 blocks are definitely lost in loss record 3 of 3
==262884==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262884==    by 0x407308: get_next_line (get_next_line.c:128)
==262884==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262884==    by 0x405BA5: main (mandatory.cpp:68)
==262884== 
==262886== Invalid free() / delete / delete[] / realloc()
==262886==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262886==    by 0x40772A: ft_strdup2 (get_next_line_utils.c:229)
==262886==    by 0x40779E: f_ret_zero (get_next_line_utils.c:279)
==262886==    by 0x407895: f_ret (get_next_line_utils.c:308)
==262886==    by 0x407365: get_next_line (get_next_line.c:133)
==262886==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262886==    by 0x405DD7: main (mandatory.cpp:73)
==262886==  Address 0x4de68eb is 43 bytes inside a block of size 45 alloc'd
==262886==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262886==    by 0x407462: ft_strjoin (get_next_line_utils.c:57)
==262886==    by 0x40780F: f_give_stash (get_next_line_utils.c:293)
==262886==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==262886==    by 0x407365: get_next_line (get_next_line.c:133)
==262886==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262886==    by 0x405DC5: main (mandatory.cpp:73)
==262886== 
==262886== 1 bytes in 1 blocks are definitely lost in loss record 1 of 5
==262886==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262886==    by 0x4077E2: f_give_stash (get_next_line_utils.c:290)
==262886==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==262886==    by 0x407365: get_next_line (get_next_line.c:133)
==262886==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262886==    by 0x405DC5: main (mandatory.cpp:73)
==262886== 
==262886== 45 bytes in 1 blocks are possibly lost in loss record 2 of 5
==262886==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262886==    by 0x407462: ft_strjoin (get_next_line_utils.c:57)
==262886==    by 0x40780F: f_give_stash (get_next_line_utils.c:293)
==262886==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==262886==    by 0x407365: get_next_line (get_next_line.c:133)
==262886==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262886==    by 0x405DC5: main (mandatory.cpp:73)
==262886== 
==262886== 10,000,001 bytes in 1 blocks are possibly lost in loss record 3 of 5
==262886==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262886==    by 0x407308: get_next_line (get_next_line.c:128)
==262886==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262886==    by 0x405DC5: main (mandatory.cpp:73)
==262886== 
==262886== 10,000,001 bytes in 1 blocks are possibly lost in loss record 4 of 5
==262886==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262886==    by 0x407308: get_next_line (get_next_line.c:128)
==262886==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262886==    by 0x405DE3: main (mandatory.cpp:73)
==262886== 
==262886== 10,000,001 bytes in 1 blocks are definitely lost in loss record 5 of 5
==262886==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262886==    by 0x407308: get_next_line (get_next_line.c:128)
==262886==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262886==    by 0x405DD7: main (mandatory.cpp:73)
==262886== 
==262889== 1 bytes in 1 blocks are definitely lost in loss record 1 of 8
==262889==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262889==    by 0x4077E2: f_give_stash (get_next_line_utils.c:290)
==262889==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==262889==    by 0x407365: get_next_line (get_next_line.c:133)
==262889==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262889==    by 0x406003: main (mandatory.cpp:79)
==262889== 
==262889== 6 bytes in 1 blocks are possibly lost in loss record 2 of 8
==262889==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262889==    by 0x407462: ft_strjoin (get_next_line_utils.c:57)
==262889==    by 0x40780F: f_give_stash (get_next_line_utils.c:293)
==262889==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==262889==    by 0x407365: get_next_line (get_next_line.c:133)
==262889==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262889==    by 0x406003: main (mandatory.cpp:79)
==262889== 
==262889== 10,000,001 bytes in 1 blocks are possibly lost in loss record 3 of 8
==262889==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262889==    by 0x407308: get_next_line (get_next_line.c:128)
==262889==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262889==    by 0x406003: main (mandatory.cpp:79)
==262889== 
==262889== 10,000,001 bytes in 1 blocks are possibly lost in loss record 4 of 8
==262889==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262889==    by 0x407308: get_next_line (get_next_line.c:128)
==262889==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262889==    by 0x406027: main (mandatory.cpp:79)
==262889== 
==262889== 10,000,001 bytes in 1 blocks are possibly lost in loss record 5 of 8
==262889==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262889==    by 0x407308: get_next_line (get_next_line.c:128)
==262889==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262889==    by 0x406057: main (mandatory.cpp:79)
==262889== 
==262889== 10,000,001 bytes in 1 blocks are definitely lost in loss record 6 of 8
==262889==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262889==    by 0x407308: get_next_line (get_next_line.c:128)
==262889==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262889==    by 0x406015: main (mandatory.cpp:79)
==262889== 
==262889== 10,000,001 bytes in 1 blocks are definitely lost in loss record 7 of 8
==262889==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262889==    by 0x407308: get_next_line (get_next_line.c:128)
==262889==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262889==    by 0x406039: main (mandatory.cpp:79)
==262889== 
==262889== 10,000,001 bytes in 1 blocks are definitely lost in loss record 8 of 8
==262889==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262889==    by 0x407308: get_next_line (get_next_line.c:128)
==262889==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262889==    by 0x40604B: main (mandatory.cpp:79)
==262889== 
==262894== Invalid free() / delete / delete[] / realloc()
==262894==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262894==    by 0x40772A: ft_strdup2 (get_next_line_utils.c:229)
==262894==    by 0x40779E: f_ret_zero (get_next_line_utils.c:279)
==262894==    by 0x407895: f_ret (get_next_line_utils.c:308)
==262894==    by 0x407365: get_next_line (get_next_line.c:133)
==262894==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262894==    by 0x4062BF: main (mandatory.cpp:88)
==262894==  Address 0x4de6fac is 172 bytes inside a block of size 214 alloc'd
==262894==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262894==    by 0x407462: ft_strjoin (get_next_line_utils.c:57)
==262894==    by 0x40780F: f_give_stash (get_next_line_utils.c:293)
==262894==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==262894==    by 0x407365: get_next_line (get_next_line.c:133)
==262894==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262894==    by 0x406277: main (mandatory.cpp:88)
==262894== 
==262894== 1 bytes in 1 blocks are definitely lost in loss record 1 of 8
==262894==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262894==    by 0x4077E2: f_give_stash (get_next_line_utils.c:290)
==262894==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==262894==    by 0x407365: get_next_line (get_next_line.c:133)
==262894==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262894==    by 0x406277: main (mandatory.cpp:88)
==262894== 
==262894== 214 bytes in 1 blocks are possibly lost in loss record 2 of 8
==262894==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262894==    by 0x407462: ft_strjoin (get_next_line_utils.c:57)
==262894==    by 0x40780F: f_give_stash (get_next_line_utils.c:293)
==262894==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==262894==    by 0x407365: get_next_line (get_next_line.c:133)
==262894==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262894==    by 0x406277: main (mandatory.cpp:88)
==262894== 
==262894== 10,000,001 bytes in 1 blocks are possibly lost in loss record 3 of 8
==262894==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262894==    by 0x407308: get_next_line (get_next_line.c:128)
==262894==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262894==    by 0x406277: main (mandatory.cpp:88)
==262894== 
==262894== 10,000,001 bytes in 1 blocks are possibly lost in loss record 4 of 8
==262894==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262894==    by 0x407308: get_next_line (get_next_line.c:128)
==262894==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262894==    by 0x40629B: main (mandatory.cpp:88)
==262894== 
==262894== 10,000,001 bytes in 1 blocks are possibly lost in loss record 5 of 8
==262894==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262894==    by 0x407308: get_next_line (get_next_line.c:128)
==262894==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262894==    by 0x4062CB: main (mandatory.cpp:88)
==262894== 
==262894== 10,000,001 bytes in 1 blocks are definitely lost in loss record 6 of 8
==262894==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262894==    by 0x407308: get_next_line (get_next_line.c:128)
==262894==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262894==    by 0x406289: main (mandatory.cpp:88)
==262894== 
==262894== 10,000,001 bytes in 1 blocks are definitely lost in loss record 7 of 8
==262894==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262894==    by 0x407308: get_next_line (get_next_line.c:128)
==262894==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262894==    by 0x4062AD: main (mandatory.cpp:88)
==262894== 
==262894== 10,000,001 bytes in 1 blocks are definitely lost in loss record 8 of 8
==262894==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262894==    by 0x407308: get_next_line (get_next_line.c:128)
==262894==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262894==    by 0x4062BF: main (mandatory.cpp:88)
==262894== 
==262897== 1 bytes in 1 blocks are definitely lost in loss record 1 of 8
==262897==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262897==    by 0x4077E2: f_give_stash (get_next_line_utils.c:290)
==262897==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==262897==    by 0x407365: get_next_line (get_next_line.c:133)
==262897==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262897==    by 0x4064EB: main (mandatory.cpp:97)
==262897== 
==262897== 210 bytes in 1 blocks are possibly lost in loss record 2 of 8
==262897==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262897==    by 0x407462: ft_strjoin (get_next_line_utils.c:57)
==262897==    by 0x40780F: f_give_stash (get_next_line_utils.c:293)
==262897==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==262897==    by 0x407365: get_next_line (get_next_line.c:133)
==262897==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262897==    by 0x4064EB: main (mandatory.cpp:97)
==262897== 
==262897== 10,000,001 bytes in 1 blocks are possibly lost in loss record 3 of 8
==262897==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262897==    by 0x407308: get_next_line (get_next_line.c:128)
==262897==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262897==    by 0x4064EB: main (mandatory.cpp:97)
==262897== 
==262897== 10,000,001 bytes in 1 blocks are possibly lost in loss record 4 of 8
==262897==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262897==    by 0x407308: get_next_line (get_next_line.c:128)
==262897==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262897==    by 0x40650F: main (mandatory.cpp:97)
==262897== 
==262897== 10,000,001 bytes in 1 blocks are possibly lost in loss record 5 of 8
==262897==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262897==    by 0x407308: get_next_line (get_next_line.c:128)
==262897==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262897==    by 0x40653F: main (mandatory.cpp:97)
==262897== 
==262897== 10,000,001 bytes in 1 blocks are definitely lost in loss record 6 of 8
==262897==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262897==    by 0x407308: get_next_line (get_next_line.c:128)
==262897==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262897==    by 0x4064FD: main (mandatory.cpp:97)
==262897== 
==262897== 10,000,001 bytes in 1 blocks are definitely lost in loss record 7 of 8
==262897==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262897==    by 0x407308: get_next_line (get_next_line.c:128)
==262897==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262897==    by 0x406521: main (mandatory.cpp:97)
==262897== 
==262897== 10,000,001 bytes in 1 blocks are definitely lost in loss record 8 of 8
==262897==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262897==    by 0x407308: get_next_line (get_next_line.c:128)
==262897==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262897==    by 0x406533: main (mandatory.cpp:97)
==262897== 
==262903== Invalid free() / delete / delete[] / realloc()
==262903==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262903==    by 0x40772A: ft_strdup2 (get_next_line_utils.c:229)
==262903==    by 0x40779E: f_ret_zero (get_next_line_utils.c:279)
==262903==    by 0x407895: f_ret (get_next_line_utils.c:308)
==262903==    by 0x407365: get_next_line (get_next_line.c:133)
==262903==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262903==    by 0x4067EF: main (mandatory.cpp:106)
==262903==  Address 0x4de7610 is 176 bytes inside a block of size 218 alloc'd
==262903==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262903==    by 0x407462: ft_strjoin (get_next_line_utils.c:57)
==262903==    by 0x40780F: f_give_stash (get_next_line_utils.c:293)
==262903==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==262903==    by 0x407365: get_next_line (get_next_line.c:133)
==262903==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262903==    by 0x40675F: main (mandatory.cpp:106)
==262903== 
==262903== 1 bytes in 1 blocks are definitely lost in loss record 1 of 12
==262903==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262903==    by 0x4077E2: f_give_stash (get_next_line_utils.c:290)
==262903==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==262903==    by 0x407365: get_next_line (get_next_line.c:133)
==262903==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262903==    by 0x40675F: main (mandatory.cpp:106)
==262903== 
==262903== 218 bytes in 1 blocks are possibly lost in loss record 2 of 12
==262903==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262903==    by 0x407462: ft_strjoin (get_next_line_utils.c:57)
==262903==    by 0x40780F: f_give_stash (get_next_line_utils.c:293)
==262903==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==262903==    by 0x407365: get_next_line (get_next_line.c:133)
==262903==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262903==    by 0x40675F: main (mandatory.cpp:106)
==262903== 
==262903== 10,000,001 bytes in 1 blocks are possibly lost in loss record 3 of 12
==262903==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262903==    by 0x407308: get_next_line (get_next_line.c:128)
==262903==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262903==    by 0x40675F: main (mandatory.cpp:106)
==262903== 
==262903== 10,000,001 bytes in 1 blocks are possibly lost in loss record 4 of 12
==262903==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262903==    by 0x407308: get_next_line (get_next_line.c:128)
==262903==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262903==    by 0x406783: main (mandatory.cpp:106)
==262903== 
==262903== 10,000,001 bytes in 1 blocks are possibly lost in loss record 5 of 12
==262903==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262903==    by 0x407308: get_next_line (get_next_line.c:128)
==262903==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262903==    by 0x4067B9: main (mandatory.cpp:106)
==262903== 
==262903== 10,000,001 bytes in 1 blocks are possibly lost in loss record 6 of 12
==262903==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262903==    by 0x407308: get_next_line (get_next_line.c:128)
==262903==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262903==    by 0x4067CB: main (mandatory.cpp:106)
==262903== 
==262903== 10,000,001 bytes in 1 blocks are possibly lost in loss record 7 of 12
==262903==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262903==    by 0x407308: get_next_line (get_next_line.c:128)
==262903==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262903==    by 0x4067DD: main (mandatory.cpp:106)
==262903== 
==262903== 10,000,001 bytes in 1 blocks are possibly lost in loss record 8 of 12
==262903==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262903==    by 0x407308: get_next_line (get_next_line.c:128)
==262903==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262903==    by 0x4067FB: main (mandatory.cpp:106)
==262903== 
==262903== 10,000,001 bytes in 1 blocks are definitely lost in loss record 9 of 12
==262903==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262903==    by 0x407308: get_next_line (get_next_line.c:128)
==262903==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262903==    by 0x406771: main (mandatory.cpp:106)
==262903== 
==262903== 10,000,001 bytes in 1 blocks are definitely lost in loss record 10 of 12
==262903==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262903==    by 0x407308: get_next_line (get_next_line.c:128)
==262903==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262903==    by 0x406795: main (mandatory.cpp:106)
==262903== 
==262903== 10,000,001 bytes in 1 blocks are definitely lost in loss record 11 of 12
==262903==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262903==    by 0x407308: get_next_line (get_next_line.c:128)
==262903==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262903==    by 0x4067A7: main (mandatory.cpp:106)
==262903== 
==262903== 10,000,001 bytes in 1 blocks are definitely lost in loss record 12 of 12
==262903==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262903==    by 0x407308: get_next_line (get_next_line.c:128)
==262903==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262903==    by 0x4067EF: main (mandatory.cpp:106)
==262903== 
==262906== 1 bytes in 1 blocks are definitely lost in loss record 1 of 12
==262906==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262906==    by 0x4077E2: f_give_stash (get_next_line_utils.c:290)
==262906==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==262906==    by 0x407365: get_next_line (get_next_line.c:133)
==262906==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262906==    by 0x406A1B: main (mandatory.cpp:119)
==262906== 
==262906== 219 bytes in 1 blocks are possibly lost in loss record 2 of 12
==262906==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262906==    by 0x407462: ft_strjoin (get_next_line_utils.c:57)
==262906==    by 0x40780F: f_give_stash (get_next_line_utils.c:293)
==262906==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==262906==    by 0x407365: get_next_line (get_next_line.c:133)
==262906==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262906==    by 0x406A1B: main (mandatory.cpp:119)
==262906== 
==262906== 10,000,001 bytes in 1 blocks are possibly lost in loss record 3 of 12
==262906==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262906==    by 0x407308: get_next_line (get_next_line.c:128)
==262906==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262906==    by 0x406A1B: main (mandatory.cpp:119)
==262906== 
==262906== 10,000,001 bytes in 1 blocks are possibly lost in loss record 4 of 12
==262906==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262906==    by 0x407308: get_next_line (get_next_line.c:128)
==262906==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262906==    by 0x406A3F: main (mandatory.cpp:119)
==262906== 
==262906== 10,000,001 bytes in 1 blocks are possibly lost in loss record 5 of 12
==262906==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262906==    by 0x407308: get_next_line (get_next_line.c:128)
==262906==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262906==    by 0x406A75: main (mandatory.cpp:119)
==262906== 
==262906== 10,000,001 bytes in 1 blocks are possibly lost in loss record 6 of 12
==262906==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262906==    by 0x407308: get_next_line (get_next_line.c:128)
==262906==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262906==    by 0x406A87: main (mandatory.cpp:119)
==262906== 
==262906== 10,000,001 bytes in 1 blocks are possibly lost in loss record 7 of 12
==262906==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262906==    by 0x407308: get_next_line (get_next_line.c:128)
==262906==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262906==    by 0x406A99: main (mandatory.cpp:119)
==262906== 
==262906== 10,000,001 bytes in 1 blocks are possibly lost in loss record 8 of 12
==262906==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262906==    by 0x407308: get_next_line (get_next_line.c:128)
==262906==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262906==    by 0x406AB7: main (mandatory.cpp:119)
==262906== 
==262906== 10,000,001 bytes in 1 blocks are definitely lost in loss record 9 of 12
==262906==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262906==    by 0x407308: get_next_line (get_next_line.c:128)
==262906==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262906==    by 0x406A2D: main (mandatory.cpp:119)
==262906== 
==262906== 10,000,001 bytes in 1 blocks are definitely lost in loss record 10 of 12
==262906==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262906==    by 0x407308: get_next_line (get_next_line.c:128)
==262906==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262906==    by 0x406A51: main (mandatory.cpp:119)
==262906== 
==262906== 10,000,001 bytes in 1 blocks are definitely lost in loss record 11 of 12
==262906==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262906==    by 0x407308: get_next_line (get_next_line.c:128)
==262906==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262906==    by 0x406A63: main (mandatory.cpp:119)
==262906== 
==262906== 10,000,001 bytes in 1 blocks are definitely lost in loss record 12 of 12
==262906==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262906==    by 0x407308: get_next_line (get_next_line.c:128)
==262906==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262906==    by 0x406AAB: main (mandatory.cpp:119)
==262906== 
==262907== Invalid write of size 1
==262907==    at 0x4077AA: f_ret_zero (get_next_line_utils.c:280)
==262907==    by 0x407895: f_ret (get_next_line_utils.c:308)
==262907==    by 0x407365: get_next_line (get_next_line.c:133)
==262907==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262907==    by 0x406CD7: main (mandatory.cpp:132)
==262907==  Address 0x4de7ba0 is 0 bytes inside a block of size 10,001 free'd
==262907==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262907==    by 0x40772A: ft_strdup2 (get_next_line_utils.c:229)
==262907==    by 0x40779E: f_ret_zero (get_next_line_utils.c:279)
==262907==    by 0x407895: f_ret (get_next_line_utils.c:308)
==262907==    by 0x407365: get_next_line (get_next_line.c:133)
==262907==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262907==    by 0x406CD7: main (mandatory.cpp:132)
==262907==  Block was alloc'd at
==262907==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262907==    by 0x407462: ft_strjoin (get_next_line_utils.c:57)
==262907==    by 0x40780F: f_give_stash (get_next_line_utils.c:293)
==262907==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==262907==    by 0x407365: get_next_line (get_next_line.c:133)
==262907==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262907==    by 0x406CD7: main (mandatory.cpp:132)
==262907== 
==262907== Invalid read of size 1
==262907==    at 0x4073BC: ft_strchr (get_next_line_utils.c:25)
==262907==    by 0x407330: get_next_line (get_next_line.c:131)
==262907==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262907==    by 0x406CE3: main (mandatory.cpp:132)
==262907==  Address 0x4de7ba0 is 0 bytes inside a block of size 10,001 free'd
==262907==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262907==    by 0x40772A: ft_strdup2 (get_next_line_utils.c:229)
==262907==    by 0x40779E: f_ret_zero (get_next_line_utils.c:279)
==262907==    by 0x407895: f_ret (get_next_line_utils.c:308)
==262907==    by 0x407365: get_next_line (get_next_line.c:133)
==262907==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262907==    by 0x406CD7: main (mandatory.cpp:132)
==262907==  Block was alloc'd at
==262907==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262907==    by 0x407462: ft_strjoin (get_next_line_utils.c:57)
==262907==    by 0x40780F: f_give_stash (get_next_line_utils.c:293)
==262907==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==262907==    by 0x407365: get_next_line (get_next_line.c:133)
==262907==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262907==    by 0x406CD7: main (mandatory.cpp:132)
==262907== 
==262907== Invalid read of size 1
==262907==    at 0x407750: f_ret_zero (get_next_line_utils.c:275)
==262907==    by 0x407895: f_ret (get_next_line_utils.c:308)
==262907==    by 0x407365: get_next_line (get_next_line.c:133)
==262907==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262907==    by 0x406CE3: main (mandatory.cpp:132)
==262907==  Address 0x4de7ba0 is 0 bytes inside a block of size 10,001 free'd
==262907==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262907==    by 0x40772A: ft_strdup2 (get_next_line_utils.c:229)
==262907==    by 0x40779E: f_ret_zero (get_next_line_utils.c:279)
==262907==    by 0x407895: f_ret (get_next_line_utils.c:308)
==262907==    by 0x407365: get_next_line (get_next_line.c:133)
==262907==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262907==    by 0x406CD7: main (mandatory.cpp:132)
==262907==  Block was alloc'd at
==262907==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262907==    by 0x407462: ft_strjoin (get_next_line_utils.c:57)
==262907==    by 0x40780F: f_give_stash (get_next_line_utils.c:293)
==262907==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==262907==    by 0x407365: get_next_line (get_next_line.c:133)
==262907==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262907==    by 0x406CD7: main (mandatory.cpp:132)
==262907== 
==262907== 1 bytes in 1 blocks are definitely lost in loss record 1 of 3
==262907==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262907==    by 0x4077E2: f_give_stash (get_next_line_utils.c:290)
==262907==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==262907==    by 0x407365: get_next_line (get_next_line.c:133)
==262907==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262907==    by 0x406CD7: main (mandatory.cpp:132)
==262907== 
==262907== 10,000,001 bytes in 1 blocks are possibly lost in loss record 2 of 3
==262907==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262907==    by 0x407308: get_next_line (get_next_line.c:128)
==262907==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262907==    by 0x406CD7: main (mandatory.cpp:132)
==262907== 
==262907== 10,000,001 bytes in 1 blocks are definitely lost in loss record 3 of 3
==262907==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262907==    by 0x407308: get_next_line (get_next_line.c:128)
==262907==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262907==    by 0x406CE3: main (mandatory.cpp:132)
==262907== 
==262908== 1 bytes in 1 blocks are definitely lost in loss record 1 of 4
==262908==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262908==    by 0x4077E2: f_give_stash (get_next_line_utils.c:290)
==262908==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==262908==    by 0x407365: get_next_line (get_next_line.c:133)
==262908==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262908==    by 0x406F03: main (mandatory.cpp:136)
==262908== 
==262908== 10,002 bytes in 1 blocks are possibly lost in loss record 2 of 4
==262908==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262908==    by 0x407462: ft_strjoin (get_next_line_utils.c:57)
==262908==    by 0x40780F: f_give_stash (get_next_line_utils.c:293)
==262908==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==262908==    by 0x407365: get_next_line (get_next_line.c:133)
==262908==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262908==    by 0x406F03: main (mandatory.cpp:136)
==262908== 
==262908== 10,000,001 bytes in 1 blocks are possibly lost in loss record 3 of 4
==262908==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262908==    by 0x407308: get_next_line (get_next_line.c:128)
==262908==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262908==    by 0x406F03: main (mandatory.cpp:136)
==262908== 
==262908== 10,000,001 bytes in 1 blocks are definitely lost in loss record 4 of 4
==262908==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262908==    by 0x407308: get_next_line (get_next_line.c:128)
==262908==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==262908==    by 0x406F0F: main (mandatory.cpp:136)
==262908== 
==262909== Invalid read of size 1
==262909==    at 0x484FBD4: strcmp (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==262909==    by 0x402D0A: gnl(int, char const*) (gnl.cpp:24)
==262909==    by 0x40712E: main (mandatory.cpp:141)
==262909==  Address 0x0 is not stack'd, malloc'd or (recently) free'd
==262909== 
