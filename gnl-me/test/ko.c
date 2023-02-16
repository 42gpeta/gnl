==324794== Invalid write of size 1
==324794==    at 0x407868: f_ret (get_next_line_utils.c:304)
==324794==    by 0x407365: get_next_line (get_next_line.c:133)
==324794==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324794==    by 0x404BC6: main (mandatory.cpp:25)
==324794==  Address 0x4de429f is 1 bytes before a block of size 2 alloc'd
==324794==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324794==    by 0x407308: get_next_line (get_next_line.c:128)
==324794==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324794==    by 0x404BC6: main (mandatory.cpp:25)
==324794== 
==324794== Invalid write of size 1
==324794==    at 0x407868: f_ret (get_next_line_utils.c:304)
==324794==    by 0x407365: get_next_line (get_next_line.c:133)
==324794==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324794==    by 0x404BE8: main (mandatory.cpp:25)
==324794==  Address 0x4de42ef is 1 bytes before a block of size 2 alloc'd
==324794==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324794==    by 0x407308: get_next_line (get_next_line.c:128)
==324794==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324794==    by 0x404BE8: main (mandatory.cpp:25)
==324794== 
==324794== 2 bytes in 1 blocks are definitely lost in loss record 1 of 2
==324794==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324794==    by 0x407308: get_next_line (get_next_line.c:128)
==324794==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324794==    by 0x404BC6: main (mandatory.cpp:25)
==324794== 
==324794== 2 bytes in 1 blocks are definitely lost in loss record 2 of 2
==324794==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324794==    by 0x407308: get_next_line (get_next_line.c:128)
==324794==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324794==    by 0x404BE8: main (mandatory.cpp:25)
==324794== 
==324814== 1 bytes in 1 blocks are definitely lost in loss record 2 of 4
==324814==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324814==    by 0x4077E2: f_give_stash (get_next_line_utils.c:290)
==324814==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==324814==    by 0x407365: get_next_line (get_next_line.c:133)
==324814==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324814==    by 0x404E63: main (mandatory.cpp:31)
==324814== 
==324814== 2 bytes in 1 blocks are definitely lost in loss record 3 of 4
==324814==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324814==    by 0x407308: get_next_line (get_next_line.c:128)
==324814==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324814==    by 0x404E63: main (mandatory.cpp:31)
==324814== 
==324814== 2 bytes in 1 blocks are definitely lost in loss record 4 of 4
==324814==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324814==    by 0x407308: get_next_line (get_next_line.c:128)
==324814==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324814==    by 0x404E6F: main (mandatory.cpp:31)
==324814== 
==324822== 1 bytes in 1 blocks are definitely lost in loss record 1 of 4
==324822==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324822==    by 0x4077E2: f_give_stash (get_next_line_utils.c:290)
==324822==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==324822==    by 0x407365: get_next_line (get_next_line.c:133)
==324822==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324822==    by 0x40508F: main (mandatory.cpp:36)
==324822== 
==324822== 2 bytes in 1 blocks are possibly lost in loss record 2 of 4
==324822==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324822==    by 0x407462: ft_strjoin (get_next_line_utils.c:57)
==324822==    by 0x40780F: f_give_stash (get_next_line_utils.c:293)
==324822==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==324822==    by 0x407365: get_next_line (get_next_line.c:133)
==324822==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324822==    by 0x40508F: main (mandatory.cpp:36)
==324822== 
==324822== 2 bytes in 1 blocks are definitely lost in loss record 3 of 4
==324822==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324822==    by 0x407308: get_next_line (get_next_line.c:128)
==324822==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324822==    by 0x40508F: main (mandatory.cpp:36)
==324822== 
==324822== 2 bytes in 1 blocks are definitely lost in loss record 4 of 4
==324822==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324822==    by 0x407308: get_next_line (get_next_line.c:128)
==324822==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324822==    by 0x40509B: main (mandatory.cpp:36)
==324822== 
==324825== Invalid write of size 1
==324825==    at 0x4077AA: f_ret_zero (get_next_line_utils.c:280)
==324825==    by 0x407895: f_ret (get_next_line_utils.c:308)
==324825==    by 0x407365: get_next_line (get_next_line.c:133)
==324825==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324825==    by 0x4052BB: main (mandatory.cpp:41)
==324825==  Address 0x4de6840 is 0 bytes inside a block of size 42 free'd
==324825==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324825==    by 0x40772A: ft_strdup2 (get_next_line_utils.c:229)
==324825==    by 0x40779E: f_ret_zero (get_next_line_utils.c:279)
==324825==    by 0x407895: f_ret (get_next_line_utils.c:308)
==324825==    by 0x407365: get_next_line (get_next_line.c:133)
==324825==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324825==    by 0x4052BB: main (mandatory.cpp:41)
==324825==  Block was alloc'd at
==324825==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324825==    by 0x407462: ft_strjoin (get_next_line_utils.c:57)
==324825==    by 0x40780F: f_give_stash (get_next_line_utils.c:293)
==324825==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==324825==    by 0x407365: get_next_line (get_next_line.c:133)
==324825==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324825==    by 0x4052BB: main (mandatory.cpp:41)
==324825== 
==324825== Invalid read of size 1
==324825==    at 0x4073BC: ft_strchr (get_next_line_utils.c:25)
==324825==    by 0x407330: get_next_line (get_next_line.c:131)
==324825==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324825==    by 0x4052C7: main (mandatory.cpp:41)
==324825==  Address 0x4de6840 is 0 bytes inside a block of size 42 free'd
==324825==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324825==    by 0x40772A: ft_strdup2 (get_next_line_utils.c:229)
==324825==    by 0x40779E: f_ret_zero (get_next_line_utils.c:279)
==324825==    by 0x407895: f_ret (get_next_line_utils.c:308)
==324825==    by 0x407365: get_next_line (get_next_line.c:133)
==324825==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324825==    by 0x4052BB: main (mandatory.cpp:41)
==324825==  Block was alloc'd at
==324825==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324825==    by 0x407462: ft_strjoin (get_next_line_utils.c:57)
==324825==    by 0x40780F: f_give_stash (get_next_line_utils.c:293)
==324825==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==324825==    by 0x407365: get_next_line (get_next_line.c:133)
==324825==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324825==    by 0x4052BB: main (mandatory.cpp:41)
==324825== 
==324825== Invalid read of size 1
==324825==    at 0x407750: f_ret_zero (get_next_line_utils.c:275)
==324825==    by 0x407895: f_ret (get_next_line_utils.c:308)
==324825==    by 0x407365: get_next_line (get_next_line.c:133)
==324825==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324825==    by 0x4052C7: main (mandatory.cpp:41)
==324825==  Address 0x4de6840 is 0 bytes inside a block of size 42 free'd
==324825==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324825==    by 0x40772A: ft_strdup2 (get_next_line_utils.c:229)
==324825==    by 0x40779E: f_ret_zero (get_next_line_utils.c:279)
==324825==    by 0x407895: f_ret (get_next_line_utils.c:308)
==324825==    by 0x407365: get_next_line (get_next_line.c:133)
==324825==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324825==    by 0x4052BB: main (mandatory.cpp:41)
==324825==  Block was alloc'd at
==324825==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324825==    by 0x407462: ft_strjoin (get_next_line_utils.c:57)
==324825==    by 0x40780F: f_give_stash (get_next_line_utils.c:293)
==324825==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==324825==    by 0x407365: get_next_line (get_next_line.c:133)
==324825==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324825==    by 0x4052BB: main (mandatory.cpp:41)
==324825== 
==324825== 1 bytes in 1 blocks are definitely lost in loss record 1 of 4
==324825==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324825==    by 0x4077E2: f_give_stash (get_next_line_utils.c:290)
==324825==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==324825==    by 0x407365: get_next_line (get_next_line.c:133)
==324825==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324825==    by 0x4052BB: main (mandatory.cpp:41)
==324825== 
==324825== 2 bytes in 1 blocks are definitely lost in loss record 2 of 4
==324825==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324825==    by 0x407308: get_next_line (get_next_line.c:128)
==324825==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324825==    by 0x4052BB: main (mandatory.cpp:41)
==324825== 
==324825== 2 bytes in 1 blocks are definitely lost in loss record 3 of 4
==324825==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324825==    by 0x407308: get_next_line (get_next_line.c:128)
==324825==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324825==    by 0x4052C7: main (mandatory.cpp:41)
==324825== 
==324825== 860 bytes in 40 blocks are definitely lost in loss record 4 of 4
==324825==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324825==    by 0x407462: ft_strjoin (get_next_line_utils.c:57)
==324825==    by 0x40780F: f_give_stash (get_next_line_utils.c:293)
==324825==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==324825==    by 0x407365: get_next_line (get_next_line.c:133)
==324825==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324825==    by 0x4052BB: main (mandatory.cpp:41)
==324825== 
==324835== Invalid write of size 1
==324835==    at 0x4077AA: f_ret_zero (get_next_line_utils.c:280)
==324835==    by 0x407895: f_ret (get_next_line_utils.c:308)
==324835==    by 0x407365: get_next_line (get_next_line.c:133)
==324835==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324835==    by 0x4054F9: main (mandatory.cpp:46)
==324835==  Address 0x4de6c80 is 0 bytes inside a block of size 2 free'd
==324835==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324835==    by 0x40772A: ft_strdup2 (get_next_line_utils.c:229)
==324835==    by 0x40779E: f_ret_zero (get_next_line_utils.c:279)
==324835==    by 0x407895: f_ret (get_next_line_utils.c:308)
==324835==    by 0x407365: get_next_line (get_next_line.c:133)
==324835==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324835==    by 0x4054F9: main (mandatory.cpp:46)
==324835==  Block was alloc'd at
==324835==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324835==    by 0x407462: ft_strjoin (get_next_line_utils.c:57)
==324835==    by 0x40780F: f_give_stash (get_next_line_utils.c:293)
==324835==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==324835==    by 0x407365: get_next_line (get_next_line.c:133)
==324835==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324835==    by 0x4054F9: main (mandatory.cpp:46)
==324835== 
==324835== Invalid read of size 1
==324835==    at 0x4073BC: ft_strchr (get_next_line_utils.c:25)
==324835==    by 0x407330: get_next_line (get_next_line.c:131)
==324835==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324835==    by 0x405505: main (mandatory.cpp:46)
==324835==  Address 0x4de6c80 is 0 bytes inside a block of size 2 free'd
==324835==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324835==    by 0x40772A: ft_strdup2 (get_next_line_utils.c:229)
==324835==    by 0x40779E: f_ret_zero (get_next_line_utils.c:279)
==324835==    by 0x407895: f_ret (get_next_line_utils.c:308)
==324835==    by 0x407365: get_next_line (get_next_line.c:133)
==324835==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324835==    by 0x4054F9: main (mandatory.cpp:46)
==324835==  Block was alloc'd at
==324835==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324835==    by 0x407462: ft_strjoin (get_next_line_utils.c:57)
==324835==    by 0x40780F: f_give_stash (get_next_line_utils.c:293)
==324835==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==324835==    by 0x407365: get_next_line (get_next_line.c:133)
==324835==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324835==    by 0x4054F9: main (mandatory.cpp:46)
==324835== 
==324835== Invalid read of size 1
==324835==    at 0x407750: f_ret_zero (get_next_line_utils.c:275)
==324835==    by 0x407895: f_ret (get_next_line_utils.c:308)
==324835==    by 0x407365: get_next_line (get_next_line.c:133)
==324835==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324835==    by 0x405505: main (mandatory.cpp:46)
==324835==  Address 0x4de6c80 is 0 bytes inside a block of size 2 free'd
==324835==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324835==    by 0x40772A: ft_strdup2 (get_next_line_utils.c:229)
==324835==    by 0x40779E: f_ret_zero (get_next_line_utils.c:279)
==324835==    by 0x407895: f_ret (get_next_line_utils.c:308)
==324835==    by 0x407365: get_next_line (get_next_line.c:133)
==324835==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324835==    by 0x4054F9: main (mandatory.cpp:46)
==324835==  Block was alloc'd at
==324835==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324835==    by 0x407462: ft_strjoin (get_next_line_utils.c:57)
==324835==    by 0x40780F: f_give_stash (get_next_line_utils.c:293)
==324835==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==324835==    by 0x407365: get_next_line (get_next_line.c:133)
==324835==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324835==    by 0x4054F9: main (mandatory.cpp:46)
==324835== 
==324835== 1 bytes in 1 blocks are definitely lost in loss record 1 of 5
==324835==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324835==    by 0x4077E2: f_give_stash (get_next_line_utils.c:290)
==324835==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==324835==    by 0x407365: get_next_line (get_next_line.c:133)
==324835==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324835==    by 0x4054E7: main (mandatory.cpp:46)
==324835== 
==324835== 2 bytes in 1 blocks are definitely lost in loss record 2 of 5
==324835==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324835==    by 0x407308: get_next_line (get_next_line.c:128)
==324835==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324835==    by 0x4054E7: main (mandatory.cpp:46)
==324835== 
==324835== 2 bytes in 1 blocks are definitely lost in loss record 3 of 5
==324835==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324835==    by 0x407308: get_next_line (get_next_line.c:128)
==324835==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324835==    by 0x4054F9: main (mandatory.cpp:46)
==324835== 
==324835== 2 bytes in 1 blocks are definitely lost in loss record 4 of 5
==324835==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324835==    by 0x407308: get_next_line (get_next_line.c:128)
==324835==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324835==    by 0x405505: main (mandatory.cpp:46)
==324835== 
==324835== 902 bytes in 41 blocks are definitely lost in loss record 5 of 5
==324835==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324835==    by 0x407462: ft_strjoin (get_next_line_utils.c:57)
==324835==    by 0x40780F: f_give_stash (get_next_line_utils.c:293)
==324835==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==324835==    by 0x407365: get_next_line (get_next_line.c:133)
==324835==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324835==    by 0x4054E7: main (mandatory.cpp:46)
==324835== 
==324837== Invalid write of size 1
==324837==    at 0x4077AA: f_ret_zero (get_next_line_utils.c:280)
==324837==    by 0x407895: f_ret (get_next_line_utils.c:308)
==324837==    by 0x407365: get_next_line (get_next_line.c:133)
==324837==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324837==    by 0x405725: main (mandatory.cpp:52)
==324837==  Address 0x4de6ed0 is 0 bytes inside a block of size 43 free'd
==324837==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324837==    by 0x40772A: ft_strdup2 (get_next_line_utils.c:229)
==324837==    by 0x40779E: f_ret_zero (get_next_line_utils.c:279)
==324837==    by 0x407895: f_ret (get_next_line_utils.c:308)
==324837==    by 0x407365: get_next_line (get_next_line.c:133)
==324837==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324837==    by 0x405725: main (mandatory.cpp:52)
==324837==  Block was alloc'd at
==324837==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324837==    by 0x407462: ft_strjoin (get_next_line_utils.c:57)
==324837==    by 0x40780F: f_give_stash (get_next_line_utils.c:293)
==324837==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==324837==    by 0x407365: get_next_line (get_next_line.c:133)
==324837==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324837==    by 0x405725: main (mandatory.cpp:52)
==324837== 
==324837== Invalid read of size 1
==324837==    at 0x4073BC: ft_strchr (get_next_line_utils.c:25)
==324837==    by 0x407330: get_next_line (get_next_line.c:131)
==324837==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324837==    by 0x405731: main (mandatory.cpp:52)
==324837==  Address 0x4de6ed0 is 0 bytes inside a block of size 43 free'd
==324837==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324837==    by 0x40772A: ft_strdup2 (get_next_line_utils.c:229)
==324837==    by 0x40779E: f_ret_zero (get_next_line_utils.c:279)
==324837==    by 0x407895: f_ret (get_next_line_utils.c:308)
==324837==    by 0x407365: get_next_line (get_next_line.c:133)
==324837==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324837==    by 0x405725: main (mandatory.cpp:52)
==324837==  Block was alloc'd at
==324837==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324837==    by 0x407462: ft_strjoin (get_next_line_utils.c:57)
==324837==    by 0x40780F: f_give_stash (get_next_line_utils.c:293)
==324837==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==324837==    by 0x407365: get_next_line (get_next_line.c:133)
==324837==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324837==    by 0x405725: main (mandatory.cpp:52)
==324837== 
==324837== Invalid read of size 1
==324837==    at 0x407750: f_ret_zero (get_next_line_utils.c:275)
==324837==    by 0x407895: f_ret (get_next_line_utils.c:308)
==324837==    by 0x407365: get_next_line (get_next_line.c:133)
==324837==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324837==    by 0x405731: main (mandatory.cpp:52)
==324837==  Address 0x4de6ed0 is 0 bytes inside a block of size 43 free'd
==324837==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324837==    by 0x40772A: ft_strdup2 (get_next_line_utils.c:229)
==324837==    by 0x40779E: f_ret_zero (get_next_line_utils.c:279)
==324837==    by 0x407895: f_ret (get_next_line_utils.c:308)
==324837==    by 0x407365: get_next_line (get_next_line.c:133)
==324837==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324837==    by 0x405725: main (mandatory.cpp:52)
==324837==  Block was alloc'd at
==324837==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324837==    by 0x407462: ft_strjoin (get_next_line_utils.c:57)
==324837==    by 0x40780F: f_give_stash (get_next_line_utils.c:293)
==324837==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==324837==    by 0x407365: get_next_line (get_next_line.c:133)
==324837==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324837==    by 0x405725: main (mandatory.cpp:52)
==324837== 
==324837== 1 bytes in 1 blocks are definitely lost in loss record 1 of 4
==324837==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324837==    by 0x4077E2: f_give_stash (get_next_line_utils.c:290)
==324837==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==324837==    by 0x407365: get_next_line (get_next_line.c:133)
==324837==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324837==    by 0x405725: main (mandatory.cpp:52)
==324837== 
==324837== 2 bytes in 1 blocks are definitely lost in loss record 2 of 4
==324837==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324837==    by 0x407308: get_next_line (get_next_line.c:128)
==324837==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324837==    by 0x405725: main (mandatory.cpp:52)
==324837== 
==324837== 2 bytes in 1 blocks are definitely lost in loss record 3 of 4
==324837==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324837==    by 0x407308: get_next_line (get_next_line.c:128)
==324837==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324837==    by 0x405731: main (mandatory.cpp:52)
==324837== 
==324837== 902 bytes in 41 blocks are definitely lost in loss record 4 of 4
==324837==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324837==    by 0x407462: ft_strjoin (get_next_line_utils.c:57)
==324837==    by 0x40780F: f_give_stash (get_next_line_utils.c:293)
==324837==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==324837==    by 0x407365: get_next_line (get_next_line.c:133)
==324837==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324837==    by 0x405725: main (mandatory.cpp:52)
==324837== 
==324840== Invalid write of size 1
==324840==    at 0x4077AA: f_ret_zero (get_next_line_utils.c:280)
==324840==    by 0x407895: f_ret (get_next_line_utils.c:308)
==324840==    by 0x407365: get_next_line (get_next_line.c:133)
==324840==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324840==    by 0x405963: main (mandatory.cpp:57)
==324840==  Address 0x4de7310 is 0 bytes inside a block of size 2 free'd
==324840==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324840==    by 0x40772A: ft_strdup2 (get_next_line_utils.c:229)
==324840==    by 0x40779E: f_ret_zero (get_next_line_utils.c:279)
==324840==    by 0x407895: f_ret (get_next_line_utils.c:308)
==324840==    by 0x407365: get_next_line (get_next_line.c:133)
==324840==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324840==    by 0x405963: main (mandatory.cpp:57)
==324840==  Block was alloc'd at
==324840==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324840==    by 0x407462: ft_strjoin (get_next_line_utils.c:57)
==324840==    by 0x40780F: f_give_stash (get_next_line_utils.c:293)
==324840==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==324840==    by 0x407365: get_next_line (get_next_line.c:133)
==324840==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324840==    by 0x405963: main (mandatory.cpp:57)
==324840== 
==324840== Invalid read of size 1
==324840==    at 0x4073BC: ft_strchr (get_next_line_utils.c:25)
==324840==    by 0x407330: get_next_line (get_next_line.c:131)
==324840==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324840==    by 0x40596F: main (mandatory.cpp:57)
==324840==  Address 0x4de7310 is 0 bytes inside a block of size 2 free'd
==324840==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324840==    by 0x40772A: ft_strdup2 (get_next_line_utils.c:229)
==324840==    by 0x40779E: f_ret_zero (get_next_line_utils.c:279)
==324840==    by 0x407895: f_ret (get_next_line_utils.c:308)
==324840==    by 0x407365: get_next_line (get_next_line.c:133)
==324840==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324840==    by 0x405963: main (mandatory.cpp:57)
==324840==  Block was alloc'd at
==324840==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324840==    by 0x407462: ft_strjoin (get_next_line_utils.c:57)
==324840==    by 0x40780F: f_give_stash (get_next_line_utils.c:293)
==324840==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==324840==    by 0x407365: get_next_line (get_next_line.c:133)
==324840==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324840==    by 0x405963: main (mandatory.cpp:57)
==324840== 
==324840== Invalid read of size 1
==324840==    at 0x407750: f_ret_zero (get_next_line_utils.c:275)
==324840==    by 0x407895: f_ret (get_next_line_utils.c:308)
==324840==    by 0x407365: get_next_line (get_next_line.c:133)
==324840==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324840==    by 0x40596F: main (mandatory.cpp:57)
==324840==  Address 0x4de7310 is 0 bytes inside a block of size 2 free'd
==324840==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324840==    by 0x40772A: ft_strdup2 (get_next_line_utils.c:229)
==324840==    by 0x40779E: f_ret_zero (get_next_line_utils.c:279)
==324840==    by 0x407895: f_ret (get_next_line_utils.c:308)
==324840==    by 0x407365: get_next_line (get_next_line.c:133)
==324840==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324840==    by 0x405963: main (mandatory.cpp:57)
==324840==  Block was alloc'd at
==324840==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324840==    by 0x407462: ft_strjoin (get_next_line_utils.c:57)
==324840==    by 0x40780F: f_give_stash (get_next_line_utils.c:293)
==324840==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==324840==    by 0x407365: get_next_line (get_next_line.c:133)
==324840==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324840==    by 0x405963: main (mandatory.cpp:57)
==324840== 
==324840== 1 bytes in 1 blocks are definitely lost in loss record 1 of 5
==324840==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324840==    by 0x4077E2: f_give_stash (get_next_line_utils.c:290)
==324840==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==324840==    by 0x407365: get_next_line (get_next_line.c:133)
==324840==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324840==    by 0x405951: main (mandatory.cpp:57)
==324840== 
==324840== 2 bytes in 1 blocks are definitely lost in loss record 2 of 5
==324840==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324840==    by 0x407308: get_next_line (get_next_line.c:128)
==324840==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324840==    by 0x405951: main (mandatory.cpp:57)
==324840== 
==324840== 2 bytes in 1 blocks are definitely lost in loss record 3 of 5
==324840==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324840==    by 0x407308: get_next_line (get_next_line.c:128)
==324840==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324840==    by 0x405963: main (mandatory.cpp:57)
==324840== 
==324840== 2 bytes in 1 blocks are definitely lost in loss record 4 of 5
==324840==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324840==    by 0x407308: get_next_line (get_next_line.c:128)
==324840==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324840==    by 0x40596F: main (mandatory.cpp:57)
==324840== 
==324840== 945 bytes in 42 blocks are definitely lost in loss record 5 of 5
==324840==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324840==    by 0x407462: ft_strjoin (get_next_line_utils.c:57)
==324840==    by 0x40780F: f_give_stash (get_next_line_utils.c:293)
==324840==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==324840==    by 0x407365: get_next_line (get_next_line.c:133)
==324840==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324840==    by 0x405951: main (mandatory.cpp:57)
==324840== 
==324844== Invalid write of size 1
==324844==    at 0x4077AA: f_ret_zero (get_next_line_utils.c:280)
==324844==    by 0x407895: f_ret (get_next_line_utils.c:308)
==324844==    by 0x407365: get_next_line (get_next_line.c:133)
==324844==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324844==    by 0x405B99: main (mandatory.cpp:68)
==324844==  Address 0x4de7560 is 0 bytes inside a block of size 44 free'd
==324844==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324844==    by 0x40772A: ft_strdup2 (get_next_line_utils.c:229)
==324844==    by 0x40779E: f_ret_zero (get_next_line_utils.c:279)
==324844==    by 0x407895: f_ret (get_next_line_utils.c:308)
==324844==    by 0x407365: get_next_line (get_next_line.c:133)
==324844==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324844==    by 0x405B99: main (mandatory.cpp:68)
==324844==  Block was alloc'd at
==324844==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324844==    by 0x407462: ft_strjoin (get_next_line_utils.c:57)
==324844==    by 0x40780F: f_give_stash (get_next_line_utils.c:293)
==324844==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==324844==    by 0x407365: get_next_line (get_next_line.c:133)
==324844==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324844==    by 0x405B99: main (mandatory.cpp:68)
==324844== 
==324844== Invalid read of size 1
==324844==    at 0x4073BC: ft_strchr (get_next_line_utils.c:25)
==324844==    by 0x407330: get_next_line (get_next_line.c:131)
==324844==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324844==    by 0x405BA5: main (mandatory.cpp:68)
==324844==  Address 0x4de7560 is 0 bytes inside a block of size 44 free'd
==324844==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324844==    by 0x40772A: ft_strdup2 (get_next_line_utils.c:229)
==324844==    by 0x40779E: f_ret_zero (get_next_line_utils.c:279)
==324844==    by 0x407895: f_ret (get_next_line_utils.c:308)
==324844==    by 0x407365: get_next_line (get_next_line.c:133)
==324844==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324844==    by 0x405B99: main (mandatory.cpp:68)
==324844==  Block was alloc'd at
==324844==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324844==    by 0x407462: ft_strjoin (get_next_line_utils.c:57)
==324844==    by 0x40780F: f_give_stash (get_next_line_utils.c:293)
==324844==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==324844==    by 0x407365: get_next_line (get_next_line.c:133)
==324844==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324844==    by 0x405B99: main (mandatory.cpp:68)
==324844== 
==324844== Invalid read of size 1
==324844==    at 0x407750: f_ret_zero (get_next_line_utils.c:275)
==324844==    by 0x407895: f_ret (get_next_line_utils.c:308)
==324844==    by 0x407365: get_next_line (get_next_line.c:133)
==324844==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324844==    by 0x405BA5: main (mandatory.cpp:68)
==324844==  Address 0x4de7560 is 0 bytes inside a block of size 44 free'd
==324844==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324844==    by 0x40772A: ft_strdup2 (get_next_line_utils.c:229)
==324844==    by 0x40779E: f_ret_zero (get_next_line_utils.c:279)
==324844==    by 0x407895: f_ret (get_next_line_utils.c:308)
==324844==    by 0x407365: get_next_line (get_next_line.c:133)
==324844==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324844==    by 0x405B99: main (mandatory.cpp:68)
==324844==  Block was alloc'd at
==324844==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324844==    by 0x407462: ft_strjoin (get_next_line_utils.c:57)
==324844==    by 0x40780F: f_give_stash (get_next_line_utils.c:293)
==324844==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==324844==    by 0x407365: get_next_line (get_next_line.c:133)
==324844==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324844==    by 0x405B99: main (mandatory.cpp:68)
==324844== 
==324844== 1 bytes in 1 blocks are definitely lost in loss record 1 of 4
==324844==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324844==    by 0x4077E2: f_give_stash (get_next_line_utils.c:290)
==324844==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==324844==    by 0x407365: get_next_line (get_next_line.c:133)
==324844==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324844==    by 0x405B99: main (mandatory.cpp:68)
==324844== 
==324844== 2 bytes in 1 blocks are definitely lost in loss record 2 of 4
==324844==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324844==    by 0x407308: get_next_line (get_next_line.c:128)
==324844==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324844==    by 0x405B99: main (mandatory.cpp:68)
==324844== 
==324844== 2 bytes in 1 blocks are definitely lost in loss record 3 of 4
==324844==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324844==    by 0x407308: get_next_line (get_next_line.c:128)
==324844==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324844==    by 0x405BA5: main (mandatory.cpp:68)
==324844== 
==324844== 945 bytes in 42 blocks are definitely lost in loss record 4 of 4
==324844==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324844==    by 0x407462: ft_strjoin (get_next_line_utils.c:57)
==324844==    by 0x40780F: f_give_stash (get_next_line_utils.c:293)
==324844==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==324844==    by 0x407365: get_next_line (get_next_line.c:133)
==324844==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324844==    by 0x405B99: main (mandatory.cpp:68)
==324844== 
==324847== Invalid write of size 1
==324847==    at 0x4077AA: f_ret_zero (get_next_line_utils.c:280)
==324847==    by 0x407895: f_ret (get_next_line_utils.c:308)
==324847==    by 0x407365: get_next_line (get_next_line.c:133)
==324847==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324847==    by 0x405DD7: main (mandatory.cpp:73)
==324847==  Address 0x4de79a0 is 0 bytes inside a block of size 2 free'd
==324847==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324847==    by 0x40772A: ft_strdup2 (get_next_line_utils.c:229)
==324847==    by 0x40779E: f_ret_zero (get_next_line_utils.c:279)
==324847==    by 0x407895: f_ret (get_next_line_utils.c:308)
==324847==    by 0x407365: get_next_line (get_next_line.c:133)
==324847==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324847==    by 0x405DD7: main (mandatory.cpp:73)
==324847==  Block was alloc'd at
==324847==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324847==    by 0x407462: ft_strjoin (get_next_line_utils.c:57)
==324847==    by 0x40780F: f_give_stash (get_next_line_utils.c:293)
==324847==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==324847==    by 0x407365: get_next_line (get_next_line.c:133)
==324847==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324847==    by 0x405DD7: main (mandatory.cpp:73)
==324847== 
==324847== Invalid read of size 1
==324847==    at 0x4073BC: ft_strchr (get_next_line_utils.c:25)
==324847==    by 0x407330: get_next_line (get_next_line.c:131)
==324847==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324847==    by 0x405DE3: main (mandatory.cpp:73)
==324847==  Address 0x4de79a0 is 0 bytes inside a block of size 2 free'd
==324847==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324847==    by 0x40772A: ft_strdup2 (get_next_line_utils.c:229)
==324847==    by 0x40779E: f_ret_zero (get_next_line_utils.c:279)
==324847==    by 0x407895: f_ret (get_next_line_utils.c:308)
==324847==    by 0x407365: get_next_line (get_next_line.c:133)
==324847==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324847==    by 0x405DD7: main (mandatory.cpp:73)
==324847==  Block was alloc'd at
==324847==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324847==    by 0x407462: ft_strjoin (get_next_line_utils.c:57)
==324847==    by 0x40780F: f_give_stash (get_next_line_utils.c:293)
==324847==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==324847==    by 0x407365: get_next_line (get_next_line.c:133)
==324847==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324847==    by 0x405DD7: main (mandatory.cpp:73)
==324847== 
==324847== Invalid read of size 1
==324847==    at 0x407750: f_ret_zero (get_next_line_utils.c:275)
==324847==    by 0x407895: f_ret (get_next_line_utils.c:308)
==324847==    by 0x407365: get_next_line (get_next_line.c:133)
==324847==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324847==    by 0x405DE3: main (mandatory.cpp:73)
==324847==  Address 0x4de79a0 is 0 bytes inside a block of size 2 free'd
==324847==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324847==    by 0x40772A: ft_strdup2 (get_next_line_utils.c:229)
==324847==    by 0x40779E: f_ret_zero (get_next_line_utils.c:279)
==324847==    by 0x407895: f_ret (get_next_line_utils.c:308)
==324847==    by 0x407365: get_next_line (get_next_line.c:133)
==324847==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324847==    by 0x405DD7: main (mandatory.cpp:73)
==324847==  Block was alloc'd at
==324847==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324847==    by 0x407462: ft_strjoin (get_next_line_utils.c:57)
==324847==    by 0x40780F: f_give_stash (get_next_line_utils.c:293)
==324847==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==324847==    by 0x407365: get_next_line (get_next_line.c:133)
==324847==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324847==    by 0x405DD7: main (mandatory.cpp:73)
==324847== 
==324847== 1 bytes in 1 blocks are definitely lost in loss record 1 of 5
==324847==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324847==    by 0x4077E2: f_give_stash (get_next_line_utils.c:290)
==324847==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==324847==    by 0x407365: get_next_line (get_next_line.c:133)
==324847==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324847==    by 0x405DC5: main (mandatory.cpp:73)
==324847== 
==324847== 2 bytes in 1 blocks are definitely lost in loss record 2 of 5
==324847==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324847==    by 0x407308: get_next_line (get_next_line.c:128)
==324847==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324847==    by 0x405DC5: main (mandatory.cpp:73)
==324847== 
==324847== 2 bytes in 1 blocks are definitely lost in loss record 3 of 5
==324847==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324847==    by 0x407308: get_next_line (get_next_line.c:128)
==324847==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324847==    by 0x405DD7: main (mandatory.cpp:73)
==324847== 
==324847== 2 bytes in 1 blocks are definitely lost in loss record 4 of 5
==324847==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324847==    by 0x407308: get_next_line (get_next_line.c:128)
==324847==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324847==    by 0x405DE3: main (mandatory.cpp:73)
==324847== 
==324847== 989 bytes in 43 blocks are definitely lost in loss record 5 of 5
==324847==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324847==    by 0x407462: ft_strjoin (get_next_line_utils.c:57)
==324847==    by 0x40780F: f_give_stash (get_next_line_utils.c:293)
==324847==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==324847==    by 0x407365: get_next_line (get_next_line.c:133)
==324847==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324847==    by 0x405DC5: main (mandatory.cpp:73)
==324847== 
==324848== 1 bytes in 1 blocks are definitely lost in loss record 1 of 12
==324848==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324848==    by 0x4077E2: f_give_stash (get_next_line_utils.c:290)
==324848==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==324848==    by 0x407365: get_next_line (get_next_line.c:133)
==324848==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324848==    by 0x406003: main (mandatory.cpp:79)
==324848== 
==324848== 2 bytes in 1 blocks are possibly lost in loss record 2 of 12
==324848==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324848==    by 0x407462: ft_strjoin (get_next_line_utils.c:57)
==324848==    by 0x40780F: f_give_stash (get_next_line_utils.c:293)
==324848==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==324848==    by 0x407365: get_next_line (get_next_line.c:133)
==324848==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324848==    by 0x40604B: main (mandatory.cpp:79)
==324848== 
==324848== 2 bytes in 1 blocks are definitely lost in loss record 3 of 12
==324848==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324848==    by 0x407308: get_next_line (get_next_line.c:128)
==324848==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324848==    by 0x406003: main (mandatory.cpp:79)
==324848== 
==324848== 2 bytes in 1 blocks are definitely lost in loss record 4 of 12
==324848==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324848==    by 0x407462: ft_strjoin (get_next_line_utils.c:57)
==324848==    by 0x40780F: f_give_stash (get_next_line_utils.c:293)
==324848==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==324848==    by 0x407365: get_next_line (get_next_line.c:133)
==324848==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324848==    by 0x406003: main (mandatory.cpp:79)
==324848== 
==324848== 2 bytes in 1 blocks are definitely lost in loss record 5 of 12
==324848==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324848==    by 0x407308: get_next_line (get_next_line.c:128)
==324848==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324848==    by 0x406015: main (mandatory.cpp:79)
==324848== 
==324848== 2 bytes in 1 blocks are definitely lost in loss record 6 of 12
==324848==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324848==    by 0x407462: ft_strjoin (get_next_line_utils.c:57)
==324848==    by 0x40780F: f_give_stash (get_next_line_utils.c:293)
==324848==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==324848==    by 0x407365: get_next_line (get_next_line.c:133)
==324848==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324848==    by 0x406015: main (mandatory.cpp:79)
==324848== 
==324848== 2 bytes in 1 blocks are definitely lost in loss record 7 of 12
==324848==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324848==    by 0x407308: get_next_line (get_next_line.c:128)
==324848==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324848==    by 0x406027: main (mandatory.cpp:79)
==324848== 
==324848== 2 bytes in 1 blocks are definitely lost in loss record 8 of 12
==324848==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324848==    by 0x407462: ft_strjoin (get_next_line_utils.c:57)
==324848==    by 0x40780F: f_give_stash (get_next_line_utils.c:293)
==324848==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==324848==    by 0x407365: get_next_line (get_next_line.c:133)
==324848==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324848==    by 0x406027: main (mandatory.cpp:79)
==324848== 
==324848== 2 bytes in 1 blocks are definitely lost in loss record 9 of 12
==324848==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324848==    by 0x407308: get_next_line (get_next_line.c:128)
==324848==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324848==    by 0x406039: main (mandatory.cpp:79)
==324848== 
==324848== 2 bytes in 1 blocks are definitely lost in loss record 10 of 12
==324848==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324848==    by 0x407462: ft_strjoin (get_next_line_utils.c:57)
==324848==    by 0x40780F: f_give_stash (get_next_line_utils.c:293)
==324848==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==324848==    by 0x407365: get_next_line (get_next_line.c:133)
==324848==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324848==    by 0x406039: main (mandatory.cpp:79)
==324848== 
==324848== 2 bytes in 1 blocks are definitely lost in loss record 11 of 12
==324848==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324848==    by 0x407308: get_next_line (get_next_line.c:128)
==324848==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324848==    by 0x40604B: main (mandatory.cpp:79)
==324848== 
==324848== 2 bytes in 1 blocks are definitely lost in loss record 12 of 12
==324848==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324848==    by 0x407308: get_next_line (get_next_line.c:128)
==324848==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324848==    by 0x406057: main (mandatory.cpp:79)
==324848== 
==324849== Invalid write of size 1
==324849==    at 0x4077AA: f_ret_zero (get_next_line_utils.c:280)
==324849==    by 0x407895: f_ret (get_next_line_utils.c:308)
==324849==    by 0x407365: get_next_line (get_next_line.c:133)
==324849==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324849==    by 0x4062BF: main (mandatory.cpp:88)
==324849==  Address 0x4dec090 is 0 bytes inside a block of size 42 free'd
==324849==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324849==    by 0x40772A: ft_strdup2 (get_next_line_utils.c:229)
==324849==    by 0x40779E: f_ret_zero (get_next_line_utils.c:279)
==324849==    by 0x407895: f_ret (get_next_line_utils.c:308)
==324849==    by 0x407365: get_next_line (get_next_line.c:133)
==324849==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324849==    by 0x4062BF: main (mandatory.cpp:88)
==324849==  Block was alloc'd at
==324849==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324849==    by 0x407462: ft_strjoin (get_next_line_utils.c:57)
==324849==    by 0x40780F: f_give_stash (get_next_line_utils.c:293)
==324849==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==324849==    by 0x407365: get_next_line (get_next_line.c:133)
==324849==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324849==    by 0x4062BF: main (mandatory.cpp:88)
==324849== 
==324849== Invalid read of size 1
==324849==    at 0x4073BC: ft_strchr (get_next_line_utils.c:25)
==324849==    by 0x407330: get_next_line (get_next_line.c:131)
==324849==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324849==    by 0x4062CB: main (mandatory.cpp:88)
==324849==  Address 0x4dec090 is 0 bytes inside a block of size 42 free'd
==324849==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324849==    by 0x40772A: ft_strdup2 (get_next_line_utils.c:229)
==324849==    by 0x40779E: f_ret_zero (get_next_line_utils.c:279)
==324849==    by 0x407895: f_ret (get_next_line_utils.c:308)
==324849==    by 0x407365: get_next_line (get_next_line.c:133)
==324849==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324849==    by 0x4062BF: main (mandatory.cpp:88)
==324849==  Block was alloc'd at
==324849==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324849==    by 0x407462: ft_strjoin (get_next_line_utils.c:57)
==324849==    by 0x40780F: f_give_stash (get_next_line_utils.c:293)
==324849==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==324849==    by 0x407365: get_next_line (get_next_line.c:133)
==324849==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324849==    by 0x4062BF: main (mandatory.cpp:88)
==324849== 
==324849== Invalid read of size 1
==324849==    at 0x407750: f_ret_zero (get_next_line_utils.c:275)
==324849==    by 0x407895: f_ret (get_next_line_utils.c:308)
==324849==    by 0x407365: get_next_line (get_next_line.c:133)
==324849==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324849==    by 0x4062CB: main (mandatory.cpp:88)
==324849==  Address 0x4dec090 is 0 bytes inside a block of size 42 free'd
==324849==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324849==    by 0x40772A: ft_strdup2 (get_next_line_utils.c:229)
==324849==    by 0x40779E: f_ret_zero (get_next_line_utils.c:279)
==324849==    by 0x407895: f_ret (get_next_line_utils.c:308)
==324849==    by 0x407365: get_next_line (get_next_line.c:133)
==324849==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324849==    by 0x4062BF: main (mandatory.cpp:88)
==324849==  Block was alloc'd at
==324849==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324849==    by 0x407462: ft_strjoin (get_next_line_utils.c:57)
==324849==    by 0x40780F: f_give_stash (get_next_line_utils.c:293)
==324849==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==324849==    by 0x407365: get_next_line (get_next_line.c:133)
==324849==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324849==    by 0x4062BF: main (mandatory.cpp:88)
==324849== 
==324849== 1 bytes in 1 blocks are definitely lost in loss record 1 of 12
==324849==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324849==    by 0x4077E2: f_give_stash (get_next_line_utils.c:290)
==324849==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==324849==    by 0x407365: get_next_line (get_next_line.c:133)
==324849==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324849==    by 0x406277: main (mandatory.cpp:88)
==324849== 
==324849== 2 bytes in 1 blocks are definitely lost in loss record 2 of 12
==324849==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324849==    by 0x407308: get_next_line (get_next_line.c:128)
==324849==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324849==    by 0x406277: main (mandatory.cpp:88)
==324849== 
==324849== 2 bytes in 1 blocks are definitely lost in loss record 3 of 12
==324849==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324849==    by 0x407308: get_next_line (get_next_line.c:128)
==324849==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324849==    by 0x406289: main (mandatory.cpp:88)
==324849== 
==324849== 2 bytes in 1 blocks are definitely lost in loss record 4 of 12
==324849==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324849==    by 0x407308: get_next_line (get_next_line.c:128)
==324849==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324849==    by 0x40629B: main (mandatory.cpp:88)
==324849== 
==324849== 2 bytes in 1 blocks are definitely lost in loss record 5 of 12
==324849==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324849==    by 0x407308: get_next_line (get_next_line.c:128)
==324849==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324849==    by 0x4062AD: main (mandatory.cpp:88)
==324849== 
==324849== 2 bytes in 1 blocks are definitely lost in loss record 6 of 12
==324849==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324849==    by 0x407308: get_next_line (get_next_line.c:128)
==324849==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324849==    by 0x4062BF: main (mandatory.cpp:88)
==324849== 
==324849== 2 bytes in 1 blocks are definitely lost in loss record 7 of 12
==324849==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324849==    by 0x407308: get_next_line (get_next_line.c:128)
==324849==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324849==    by 0x4062CB: main (mandatory.cpp:88)
==324849== 
==324849== 860 bytes in 40 blocks are definitely lost in loss record 8 of 12
==324849==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324849==    by 0x407462: ft_strjoin (get_next_line_utils.c:57)
==324849==    by 0x40780F: f_give_stash (get_next_line_utils.c:293)
==324849==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==324849==    by 0x407365: get_next_line (get_next_line.c:133)
==324849==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324849==    by 0x4062BF: main (mandatory.cpp:88)
==324849== 
==324849== 945 bytes in 42 blocks are definitely lost in loss record 9 of 12
==324849==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324849==    by 0x407462: ft_strjoin (get_next_line_utils.c:57)
==324849==    by 0x40780F: f_give_stash (get_next_line_utils.c:293)
==324849==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==324849==    by 0x407365: get_next_line (get_next_line.c:133)
==324849==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324849==    by 0x406277: main (mandatory.cpp:88)
==324849== 
==324849== 989 bytes in 43 blocks are definitely lost in loss record 10 of 12
==324849==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324849==    by 0x407462: ft_strjoin (get_next_line_utils.c:57)
==324849==    by 0x40780F: f_give_stash (get_next_line_utils.c:293)
==324849==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==324849==    by 0x407365: get_next_line (get_next_line.c:133)
==324849==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324849==    by 0x406289: main (mandatory.cpp:88)
==324849== 
==324849== 989 bytes in 43 blocks are definitely lost in loss record 11 of 12
==324849==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324849==    by 0x407462: ft_strjoin (get_next_line_utils.c:57)
==324849==    by 0x40780F: f_give_stash (get_next_line_utils.c:293)
==324849==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==324849==    by 0x407365: get_next_line (get_next_line.c:133)
==324849==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324849==    by 0x4062AD: main (mandatory.cpp:88)
==324849== 
==324849== 1,034 bytes in 44 blocks are definitely lost in loss record 12 of 12
==324849==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324849==    by 0x407462: ft_strjoin (get_next_line_utils.c:57)
==324849==    by 0x40780F: f_give_stash (get_next_line_utils.c:293)
==324849==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==324849==    by 0x407365: get_next_line (get_next_line.c:133)
==324849==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324849==    by 0x40629B: main (mandatory.cpp:88)
==324849== 
==324852== 1 bytes in 1 blocks are definitely lost in loss record 1 of 13
==324852==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324852==    by 0x4077E2: f_give_stash (get_next_line_utils.c:290)
==324852==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==324852==    by 0x407365: get_next_line (get_next_line.c:133)
==324852==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324852==    by 0x4064EB: main (mandatory.cpp:97)
==324852== 
==324852== 2 bytes in 1 blocks are definitely lost in loss record 2 of 13
==324852==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324852==    by 0x407308: get_next_line (get_next_line.c:128)
==324852==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324852==    by 0x4064EB: main (mandatory.cpp:97)
==324852== 
==324852== 2 bytes in 1 blocks are definitely lost in loss record 3 of 13
==324852==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324852==    by 0x407308: get_next_line (get_next_line.c:128)
==324852==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324852==    by 0x4064FD: main (mandatory.cpp:97)
==324852== 
==324852== 2 bytes in 1 blocks are definitely lost in loss record 4 of 13
==324852==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324852==    by 0x407308: get_next_line (get_next_line.c:128)
==324852==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324852==    by 0x40650F: main (mandatory.cpp:97)
==324852== 
==324852== 2 bytes in 1 blocks are definitely lost in loss record 5 of 13
==324852==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324852==    by 0x407308: get_next_line (get_next_line.c:128)
==324852==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324852==    by 0x406521: main (mandatory.cpp:97)
==324852== 
==324852== 2 bytes in 1 blocks are definitely lost in loss record 6 of 13
==324852==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324852==    by 0x407308: get_next_line (get_next_line.c:128)
==324852==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324852==    by 0x406533: main (mandatory.cpp:97)
==324852== 
==324852== 2 bytes in 1 blocks are definitely lost in loss record 7 of 13
==324852==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324852==    by 0x407308: get_next_line (get_next_line.c:128)
==324852==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324852==    by 0x40653F: main (mandatory.cpp:97)
==324852== 
==324852== 42 bytes in 1 blocks are possibly lost in loss record 8 of 13
==324852==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324852==    by 0x407462: ft_strjoin (get_next_line_utils.c:57)
==324852==    by 0x40780F: f_give_stash (get_next_line_utils.c:293)
==324852==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==324852==    by 0x407365: get_next_line (get_next_line.c:133)
==324852==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324852==    by 0x406533: main (mandatory.cpp:97)
==324852== 
==324852== 860 bytes in 40 blocks are definitely lost in loss record 9 of 13
==324852==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324852==    by 0x407462: ft_strjoin (get_next_line_utils.c:57)
==324852==    by 0x40780F: f_give_stash (get_next_line_utils.c:293)
==324852==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==324852==    by 0x407365: get_next_line (get_next_line.c:133)
==324852==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324852==    by 0x406533: main (mandatory.cpp:97)
==324852== 
==324852== 902 bytes in 41 blocks are definitely lost in loss record 10 of 13
==324852==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324852==    by 0x407462: ft_strjoin (get_next_line_utils.c:57)
==324852==    by 0x40780F: f_give_stash (get_next_line_utils.c:293)
==324852==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==324852==    by 0x407365: get_next_line (get_next_line.c:133)
==324852==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324852==    by 0x4064EB: main (mandatory.cpp:97)
==324852== 
==324852== 945 bytes in 42 blocks are definitely lost in loss record 11 of 13
==324852==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324852==    by 0x407462: ft_strjoin (get_next_line_utils.c:57)
==324852==    by 0x40780F: f_give_stash (get_next_line_utils.c:293)
==324852==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==324852==    by 0x407365: get_next_line (get_next_line.c:133)
==324852==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324852==    by 0x4064FD: main (mandatory.cpp:97)
==324852== 
==324852== 945 bytes in 42 blocks are definitely lost in loss record 12 of 13
==324852==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324852==    by 0x407462: ft_strjoin (get_next_line_utils.c:57)
==324852==    by 0x40780F: f_give_stash (get_next_line_utils.c:293)
==324852==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==324852==    by 0x407365: get_next_line (get_next_line.c:133)
==324852==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324852==    by 0x406521: main (mandatory.cpp:97)
==324852== 
==324852== 989 bytes in 43 blocks are definitely lost in loss record 13 of 13
==324852==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324852==    by 0x407462: ft_strjoin (get_next_line_utils.c:57)
==324852==    by 0x40780F: f_give_stash (get_next_line_utils.c:293)
==324852==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==324852==    by 0x407365: get_next_line (get_next_line.c:133)
==324852==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324852==    by 0x40650F: main (mandatory.cpp:97)
==324852== 
==324856== Invalid write of size 1
==324856==    at 0x4077AA: f_ret_zero (get_next_line_utils.c:280)
==324856==    by 0x407895: f_ret (get_next_line_utils.c:308)
==324856==    by 0x407365: get_next_line (get_next_line.c:133)
==324856==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324856==    by 0x4067EF: main (mandatory.cpp:106)
==324856==  Address 0x4decab0 is 0 bytes inside a block of size 42 free'd
==324856==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324856==    by 0x40772A: ft_strdup2 (get_next_line_utils.c:229)
==324856==    by 0x40779E: f_ret_zero (get_next_line_utils.c:279)
==324856==    by 0x407895: f_ret (get_next_line_utils.c:308)
==324856==    by 0x407365: get_next_line (get_next_line.c:133)
==324856==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324856==    by 0x4067EF: main (mandatory.cpp:106)
==324856==  Block was alloc'd at
==324856==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324856==    by 0x407462: ft_strjoin (get_next_line_utils.c:57)
==324856==    by 0x40780F: f_give_stash (get_next_line_utils.c:293)
==324856==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==324856==    by 0x407365: get_next_line (get_next_line.c:133)
==324856==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324856==    by 0x4067EF: main (mandatory.cpp:106)
==324856== 
==324856== Invalid read of size 1
==324856==    at 0x4073BC: ft_strchr (get_next_line_utils.c:25)
==324856==    by 0x407330: get_next_line (get_next_line.c:131)
==324856==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324856==    by 0x4067FB: main (mandatory.cpp:106)
==324856==  Address 0x4decab0 is 0 bytes inside a block of size 42 free'd
==324856==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324856==    by 0x40772A: ft_strdup2 (get_next_line_utils.c:229)
==324856==    by 0x40779E: f_ret_zero (get_next_line_utils.c:279)
==324856==    by 0x407895: f_ret (get_next_line_utils.c:308)
==324856==    by 0x407365: get_next_line (get_next_line.c:133)
==324856==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324856==    by 0x4067EF: main (mandatory.cpp:106)
==324856==  Block was alloc'd at
==324856==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324856==    by 0x407462: ft_strjoin (get_next_line_utils.c:57)
==324856==    by 0x40780F: f_give_stash (get_next_line_utils.c:293)
==324856==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==324856==    by 0x407365: get_next_line (get_next_line.c:133)
==324856==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324856==    by 0x4067EF: main (mandatory.cpp:106)
==324856== 
==324856== Invalid read of size 1
==324856==    at 0x407750: f_ret_zero (get_next_line_utils.c:275)
==324856==    by 0x407895: f_ret (get_next_line_utils.c:308)
==324856==    by 0x407365: get_next_line (get_next_line.c:133)
==324856==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324856==    by 0x4067FB: main (mandatory.cpp:106)
==324856==  Address 0x4decab0 is 0 bytes inside a block of size 42 free'd
==324856==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324856==    by 0x40772A: ft_strdup2 (get_next_line_utils.c:229)
==324856==    by 0x40779E: f_ret_zero (get_next_line_utils.c:279)
==324856==    by 0x407895: f_ret (get_next_line_utils.c:308)
==324856==    by 0x407365: get_next_line (get_next_line.c:133)
==324856==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324856==    by 0x4067EF: main (mandatory.cpp:106)
==324856==  Block was alloc'd at
==324856==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324856==    by 0x407462: ft_strjoin (get_next_line_utils.c:57)
==324856==    by 0x40780F: f_give_stash (get_next_line_utils.c:293)
==324856==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==324856==    by 0x407365: get_next_line (get_next_line.c:133)
==324856==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324856==    by 0x4067EF: main (mandatory.cpp:106)
==324856== 
==324856== 1 bytes in 1 blocks are definitely lost in loss record 1 of 20
==324856==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324856==    by 0x4077E2: f_give_stash (get_next_line_utils.c:290)
==324856==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==324856==    by 0x407365: get_next_line (get_next_line.c:133)
==324856==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324856==    by 0x40675F: main (mandatory.cpp:106)
==324856== 
==324856== 2 bytes in 1 blocks are definitely lost in loss record 2 of 20
==324856==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324856==    by 0x407308: get_next_line (get_next_line.c:128)
==324856==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324856==    by 0x40675F: main (mandatory.cpp:106)
==324856== 
==324856== 2 bytes in 1 blocks are definitely lost in loss record 3 of 20
==324856==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324856==    by 0x407308: get_next_line (get_next_line.c:128)
==324856==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324856==    by 0x406771: main (mandatory.cpp:106)
==324856== 
==324856== 2 bytes in 1 blocks are definitely lost in loss record 4 of 20
==324856==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324856==    by 0x407462: ft_strjoin (get_next_line_utils.c:57)
==324856==    by 0x40780F: f_give_stash (get_next_line_utils.c:293)
==324856==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==324856==    by 0x407365: get_next_line (get_next_line.c:133)
==324856==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324856==    by 0x406771: main (mandatory.cpp:106)
==324856== 
==324856== 2 bytes in 1 blocks are definitely lost in loss record 5 of 20
==324856==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324856==    by 0x407308: get_next_line (get_next_line.c:128)
==324856==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324856==    by 0x406783: main (mandatory.cpp:106)
==324856== 
==324856== 2 bytes in 1 blocks are definitely lost in loss record 6 of 20
==324856==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324856==    by 0x407308: get_next_line (get_next_line.c:128)
==324856==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324856==    by 0x406795: main (mandatory.cpp:106)
==324856== 
==324856== 2 bytes in 1 blocks are definitely lost in loss record 7 of 20
==324856==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324856==    by 0x407462: ft_strjoin (get_next_line_utils.c:57)
==324856==    by 0x40780F: f_give_stash (get_next_line_utils.c:293)
==324856==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==324856==    by 0x407365: get_next_line (get_next_line.c:133)
==324856==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324856==    by 0x406795: main (mandatory.cpp:106)
==324856== 
==324856== 2 bytes in 1 blocks are definitely lost in loss record 8 of 20
==324856==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324856==    by 0x407308: get_next_line (get_next_line.c:128)
==324856==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324856==    by 0x4067A7: main (mandatory.cpp:106)
==324856== 
==324856== 2 bytes in 1 blocks are definitely lost in loss record 9 of 20
==324856==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324856==    by 0x407308: get_next_line (get_next_line.c:128)
==324856==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324856==    by 0x4067B9: main (mandatory.cpp:106)
==324856== 
==324856== 2 bytes in 1 blocks are definitely lost in loss record 10 of 20
==324856==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324856==    by 0x407462: ft_strjoin (get_next_line_utils.c:57)
==324856==    by 0x40780F: f_give_stash (get_next_line_utils.c:293)
==324856==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==324856==    by 0x407365: get_next_line (get_next_line.c:133)
==324856==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324856==    by 0x4067B9: main (mandatory.cpp:106)
==324856== 
==324856== 2 bytes in 1 blocks are definitely lost in loss record 11 of 20
==324856==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324856==    by 0x407308: get_next_line (get_next_line.c:128)
==324856==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324856==    by 0x4067CB: main (mandatory.cpp:106)
==324856== 
==324856== 2 bytes in 1 blocks are definitely lost in loss record 12 of 20
==324856==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324856==    by 0x407308: get_next_line (get_next_line.c:128)
==324856==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324856==    by 0x4067DD: main (mandatory.cpp:106)
==324856== 
==324856== 2 bytes in 1 blocks are definitely lost in loss record 13 of 20
==324856==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324856==    by 0x407462: ft_strjoin (get_next_line_utils.c:57)
==324856==    by 0x40780F: f_give_stash (get_next_line_utils.c:293)
==324856==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==324856==    by 0x407365: get_next_line (get_next_line.c:133)
==324856==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324856==    by 0x4067DD: main (mandatory.cpp:106)
==324856== 
==324856== 2 bytes in 1 blocks are definitely lost in loss record 14 of 20
==324856==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324856==    by 0x407308: get_next_line (get_next_line.c:128)
==324856==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324856==    by 0x4067EF: main (mandatory.cpp:106)
==324856== 
==324856== 2 bytes in 1 blocks are definitely lost in loss record 15 of 20
==324856==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324856==    by 0x407308: get_next_line (get_next_line.c:128)
==324856==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324856==    by 0x4067FB: main (mandatory.cpp:106)
==324856== 
==324856== 860 bytes in 40 blocks are definitely lost in loss record 16 of 20
==324856==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324856==    by 0x407462: ft_strjoin (get_next_line_utils.c:57)
==324856==    by 0x40780F: f_give_stash (get_next_line_utils.c:293)
==324856==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==324856==    by 0x407365: get_next_line (get_next_line.c:133)
==324856==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324856==    by 0x4067EF: main (mandatory.cpp:106)
==324856== 
==324856== 945 bytes in 42 blocks are definitely lost in loss record 17 of 20
==324856==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324856==    by 0x407462: ft_strjoin (get_next_line_utils.c:57)
==324856==    by 0x40780F: f_give_stash (get_next_line_utils.c:293)
==324856==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==324856==    by 0x407365: get_next_line (get_next_line.c:133)
==324856==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324856==    by 0x40675F: main (mandatory.cpp:106)
==324856== 
==324856== 989 bytes in 43 blocks are definitely lost in loss record 18 of 20
==324856==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324856==    by 0x407462: ft_strjoin (get_next_line_utils.c:57)
==324856==    by 0x40780F: f_give_stash (get_next_line_utils.c:293)
==324856==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==324856==    by 0x407365: get_next_line (get_next_line.c:133)
==324856==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324856==    by 0x406783: main (mandatory.cpp:106)
==324856== 
==324856== 989 bytes in 43 blocks are definitely lost in loss record 19 of 20
==324856==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324856==    by 0x407462: ft_strjoin (get_next_line_utils.c:57)
==324856==    by 0x40780F: f_give_stash (get_next_line_utils.c:293)
==324856==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==324856==    by 0x407365: get_next_line (get_next_line.c:133)
==324856==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324856==    by 0x4067CB: main (mandatory.cpp:106)
==324856== 
==324856== 1,034 bytes in 44 blocks are definitely lost in loss record 20 of 20
==324856==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324856==    by 0x407462: ft_strjoin (get_next_line_utils.c:57)
==324856==    by 0x40780F: f_give_stash (get_next_line_utils.c:293)
==324856==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==324856==    by 0x407365: get_next_line (get_next_line.c:133)
==324856==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324856==    by 0x4067A7: main (mandatory.cpp:106)
==324856== 
==324860== 1 bytes in 1 blocks are definitely lost in loss record 1 of 21
==324860==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324860==    by 0x4077E2: f_give_stash (get_next_line_utils.c:290)
==324860==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==324860==    by 0x407365: get_next_line (get_next_line.c:133)
==324860==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324860==    by 0x406A1B: main (mandatory.cpp:119)
==324860== 
==324860== 2 bytes in 1 blocks are definitely lost in loss record 2 of 21
==324860==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324860==    by 0x407308: get_next_line (get_next_line.c:128)
==324860==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324860==    by 0x406A1B: main (mandatory.cpp:119)
==324860== 
==324860== 2 bytes in 1 blocks are definitely lost in loss record 3 of 21
==324860==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324860==    by 0x407308: get_next_line (get_next_line.c:128)
==324860==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324860==    by 0x406A2D: main (mandatory.cpp:119)
==324860== 
==324860== 2 bytes in 1 blocks are definitely lost in loss record 4 of 21
==324860==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324860==    by 0x407462: ft_strjoin (get_next_line_utils.c:57)
==324860==    by 0x40780F: f_give_stash (get_next_line_utils.c:293)
==324860==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==324860==    by 0x407365: get_next_line (get_next_line.c:133)
==324860==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324860==    by 0x406A2D: main (mandatory.cpp:119)
==324860== 
==324860== 2 bytes in 1 blocks are definitely lost in loss record 5 of 21
==324860==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324860==    by 0x407308: get_next_line (get_next_line.c:128)
==324860==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324860==    by 0x406A3F: main (mandatory.cpp:119)
==324860== 
==324860== 2 bytes in 1 blocks are definitely lost in loss record 6 of 21
==324860==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324860==    by 0x407308: get_next_line (get_next_line.c:128)
==324860==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324860==    by 0x406A51: main (mandatory.cpp:119)
==324860== 
==324860== 2 bytes in 1 blocks are definitely lost in loss record 7 of 21
==324860==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324860==    by 0x407462: ft_strjoin (get_next_line_utils.c:57)
==324860==    by 0x40780F: f_give_stash (get_next_line_utils.c:293)
==324860==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==324860==    by 0x407365: get_next_line (get_next_line.c:133)
==324860==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324860==    by 0x406A51: main (mandatory.cpp:119)
==324860== 
==324860== 2 bytes in 1 blocks are definitely lost in loss record 8 of 21
==324860==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324860==    by 0x407308: get_next_line (get_next_line.c:128)
==324860==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324860==    by 0x406A63: main (mandatory.cpp:119)
==324860== 
==324860== 2 bytes in 1 blocks are definitely lost in loss record 9 of 21
==324860==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324860==    by 0x407308: get_next_line (get_next_line.c:128)
==324860==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324860==    by 0x406A75: main (mandatory.cpp:119)
==324860== 
==324860== 2 bytes in 1 blocks are definitely lost in loss record 10 of 21
==324860==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324860==    by 0x407462: ft_strjoin (get_next_line_utils.c:57)
==324860==    by 0x40780F: f_give_stash (get_next_line_utils.c:293)
==324860==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==324860==    by 0x407365: get_next_line (get_next_line.c:133)
==324860==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324860==    by 0x406A75: main (mandatory.cpp:119)
==324860== 
==324860== 2 bytes in 1 blocks are definitely lost in loss record 11 of 21
==324860==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324860==    by 0x407308: get_next_line (get_next_line.c:128)
==324860==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324860==    by 0x406A87: main (mandatory.cpp:119)
==324860== 
==324860== 2 bytes in 1 blocks are definitely lost in loss record 12 of 21
==324860==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324860==    by 0x407308: get_next_line (get_next_line.c:128)
==324860==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324860==    by 0x406A99: main (mandatory.cpp:119)
==324860== 
==324860== 2 bytes in 1 blocks are definitely lost in loss record 13 of 21
==324860==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324860==    by 0x407462: ft_strjoin (get_next_line_utils.c:57)
==324860==    by 0x40780F: f_give_stash (get_next_line_utils.c:293)
==324860==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==324860==    by 0x407365: get_next_line (get_next_line.c:133)
==324860==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324860==    by 0x406A99: main (mandatory.cpp:119)
==324860== 
==324860== 2 bytes in 1 blocks are definitely lost in loss record 14 of 21
==324860==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324860==    by 0x407308: get_next_line (get_next_line.c:128)
==324860==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324860==    by 0x406AAB: main (mandatory.cpp:119)
==324860== 
==324860== 2 bytes in 1 blocks are definitely lost in loss record 15 of 21
==324860==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324860==    by 0x407308: get_next_line (get_next_line.c:128)
==324860==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324860==    by 0x406AB7: main (mandatory.cpp:119)
==324860== 
==324860== 43 bytes in 1 blocks are possibly lost in loss record 16 of 21
==324860==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324860==    by 0x407462: ft_strjoin (get_next_line_utils.c:57)
==324860==    by 0x40780F: f_give_stash (get_next_line_utils.c:293)
==324860==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==324860==    by 0x407365: get_next_line (get_next_line.c:133)
==324860==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324860==    by 0x406AAB: main (mandatory.cpp:119)
==324860== 
==324860== 902 bytes in 41 blocks are definitely lost in loss record 17 of 21
==324860==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324860==    by 0x407462: ft_strjoin (get_next_line_utils.c:57)
==324860==    by 0x40780F: f_give_stash (get_next_line_utils.c:293)
==324860==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==324860==    by 0x407365: get_next_line (get_next_line.c:133)
==324860==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324860==    by 0x406AAB: main (mandatory.cpp:119)
==324860== 
==324860== 945 bytes in 42 blocks are definitely lost in loss record 18 of 21
==324860==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324860==    by 0x407462: ft_strjoin (get_next_line_utils.c:57)
==324860==    by 0x40780F: f_give_stash (get_next_line_utils.c:293)
==324860==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==324860==    by 0x407365: get_next_line (get_next_line.c:133)
==324860==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324860==    by 0x406A1B: main (mandatory.cpp:119)
==324860== 
==324860== 989 bytes in 43 blocks are definitely lost in loss record 19 of 21
==324860==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324860==    by 0x407462: ft_strjoin (get_next_line_utils.c:57)
==324860==    by 0x40780F: f_give_stash (get_next_line_utils.c:293)
==324860==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==324860==    by 0x407365: get_next_line (get_next_line.c:133)
==324860==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324860==    by 0x406A3F: main (mandatory.cpp:119)
==324860== 
==324860== 989 bytes in 43 blocks are definitely lost in loss record 20 of 21
==324860==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324860==    by 0x407462: ft_strjoin (get_next_line_utils.c:57)
==324860==    by 0x40780F: f_give_stash (get_next_line_utils.c:293)
==324860==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==324860==    by 0x407365: get_next_line (get_next_line.c:133)
==324860==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324860==    by 0x406A87: main (mandatory.cpp:119)
==324860== 
==324860== 1,034 bytes in 44 blocks are definitely lost in loss record 21 of 21
==324860==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324860==    by 0x407462: ft_strjoin (get_next_line_utils.c:57)
==324860==    by 0x40780F: f_give_stash (get_next_line_utils.c:293)
==324860==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==324860==    by 0x407365: get_next_line (get_next_line.c:133)
==324860==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324860==    by 0x406A63: main (mandatory.cpp:119)
==324860== 
==324867== Invalid read of size 1
==324867==    at 0x484FBD4: strcmp (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324867==    by 0x402D0A: gnl(int, char const*) (gnl.cpp:24)
==324867==    by 0x40712E: main (mandatory.cpp:141)
==324867==  Address 0x0 is not stack'd, malloc'd or (recently) free'd
==324867== 
==324899== Invalid write of size 1
==324899==    at 0x40789A: f_ret (get_next_line_utils.c:304)
==324899==    by 0x407397: get_next_line (get_next_line.c:133)
==324899==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324899==    by 0x404BC6: main (mandatory.cpp:25)
==324899==  Address 0x4de429f is 1 bytes before a block of size 43 alloc'd
==324899==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324899==    by 0x40733A: get_next_line (get_next_line.c:128)
==324899==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324899==    by 0x404BC6: main (mandatory.cpp:25)
==324899== 
==324899== Invalid write of size 1
==324899==    at 0x40789A: f_ret (get_next_line_utils.c:304)
==324899==    by 0x407397: get_next_line (get_next_line.c:133)
==324899==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324899==    by 0x404BE8: main (mandatory.cpp:25)
==324899==  Address 0x4de430f is 1 bytes before a block of size 43 alloc'd
==324899==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324899==    by 0x40733A: get_next_line (get_next_line.c:128)
==324899==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324899==    by 0x404BE8: main (mandatory.cpp:25)
==324899== 
==324899== 43 bytes in 1 blocks are definitely lost in loss record 1 of 2
==324899==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324899==    by 0x40733A: get_next_line (get_next_line.c:128)
==324899==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324899==    by 0x404BC6: main (mandatory.cpp:25)
==324899== 
==324899== 43 bytes in 1 blocks are definitely lost in loss record 2 of 2
==324899==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324899==    by 0x40733A: get_next_line (get_next_line.c:128)
==324899==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324899==    by 0x404BE8: main (mandatory.cpp:25)
==324899== 
==324904== 1 bytes in 1 blocks are definitely lost in loss record 2 of 4
==324904==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324904==    by 0x407814: f_give_stash (get_next_line_utils.c:290)
==324904==    by 0x4078DC: f_ret (get_next_line_utils.c:311)
==324904==    by 0x407397: get_next_line (get_next_line.c:133)
==324904==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324904==    by 0x404E63: main (mandatory.cpp:31)
==324904== 
==324904== 43 bytes in 1 blocks are definitely lost in loss record 3 of 4
==324904==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324904==    by 0x40733A: get_next_line (get_next_line.c:128)
==324904==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324904==    by 0x404E63: main (mandatory.cpp:31)
==324904== 
==324904== 43 bytes in 1 blocks are definitely lost in loss record 4 of 4
==324904==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324904==    by 0x40733A: get_next_line (get_next_line.c:128)
==324904==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324904==    by 0x404E6F: main (mandatory.cpp:31)
==324904== 
==324907== 1 bytes in 1 blocks are definitely lost in loss record 1 of 4
==324907==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324907==    by 0x407814: f_give_stash (get_next_line_utils.c:290)
==324907==    by 0x4078DC: f_ret (get_next_line_utils.c:311)
==324907==    by 0x407397: get_next_line (get_next_line.c:133)
==324907==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324907==    by 0x40508F: main (mandatory.cpp:36)
==324907== 
==324907== 2 bytes in 1 blocks are possibly lost in loss record 2 of 4
==324907==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324907==    by 0x407494: ft_strjoin (get_next_line_utils.c:57)
==324907==    by 0x407841: f_give_stash (get_next_line_utils.c:293)
==324907==    by 0x4078DC: f_ret (get_next_line_utils.c:311)
==324907==    by 0x407397: get_next_line (get_next_line.c:133)
==324907==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324907==    by 0x40508F: main (mandatory.cpp:36)
==324907== 
==324907== 43 bytes in 1 blocks are definitely lost in loss record 3 of 4
==324907==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324907==    by 0x40733A: get_next_line (get_next_line.c:128)
==324907==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324907==    by 0x40508F: main (mandatory.cpp:36)
==324907== 
==324907== 43 bytes in 1 blocks are definitely lost in loss record 4 of 4
==324907==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324907==    by 0x40733A: get_next_line (get_next_line.c:128)
==324907==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324907==    by 0x40509B: main (mandatory.cpp:36)
==324907== 
==324913== Invalid write of size 1
==324913==    at 0x4077DC: f_ret_zero (get_next_line_utils.c:280)
==324913==    by 0x4078C7: f_ret (get_next_line_utils.c:308)
==324913==    by 0x407397: get_next_line (get_next_line.c:133)
==324913==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324913==    by 0x4052BB: main (mandatory.cpp:41)
==324913==  Address 0x4de59c0 is 0 bytes inside a block of size 42 free'd
==324913==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324913==    by 0x40775C: ft_strdup2 (get_next_line_utils.c:229)
==324913==    by 0x4077D0: f_ret_zero (get_next_line_utils.c:279)
==324913==    by 0x4078C7: f_ret (get_next_line_utils.c:308)
==324913==    by 0x407397: get_next_line (get_next_line.c:133)
==324913==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324913==    by 0x4052BB: main (mandatory.cpp:41)
==324913==  Block was alloc'd at
==324913==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324913==    by 0x407494: ft_strjoin (get_next_line_utils.c:57)
==324913==    by 0x407841: f_give_stash (get_next_line_utils.c:293)
==324913==    by 0x4078DC: f_ret (get_next_line_utils.c:311)
==324913==    by 0x407397: get_next_line (get_next_line.c:133)
==324913==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324913==    by 0x4052BB: main (mandatory.cpp:41)
==324913== 
==324913== Invalid read of size 1
==324913==    at 0x4073EE: ft_strchr (get_next_line_utils.c:25)
==324913==    by 0x407362: get_next_line (get_next_line.c:131)
==324913==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324913==    by 0x4052C7: main (mandatory.cpp:41)
==324913==  Address 0x4de59c0 is 0 bytes inside a block of size 42 free'd
==324913==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324913==    by 0x40775C: ft_strdup2 (get_next_line_utils.c:229)
==324913==    by 0x4077D0: f_ret_zero (get_next_line_utils.c:279)
==324913==    by 0x4078C7: f_ret (get_next_line_utils.c:308)
==324913==    by 0x407397: get_next_line (get_next_line.c:133)
==324913==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324913==    by 0x4052BB: main (mandatory.cpp:41)
==324913==  Block was alloc'd at
==324913==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324913==    by 0x407494: ft_strjoin (get_next_line_utils.c:57)
==324913==    by 0x407841: f_give_stash (get_next_line_utils.c:293)
==324913==    by 0x4078DC: f_ret (get_next_line_utils.c:311)
==324913==    by 0x407397: get_next_line (get_next_line.c:133)
==324913==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324913==    by 0x4052BB: main (mandatory.cpp:41)
==324913== 
==324913== Invalid read of size 1
==324913==    at 0x407782: f_ret_zero (get_next_line_utils.c:275)
==324913==    by 0x4078C7: f_ret (get_next_line_utils.c:308)
==324913==    by 0x407397: get_next_line (get_next_line.c:133)
==324913==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324913==    by 0x4052C7: main (mandatory.cpp:41)
==324913==  Address 0x4de59c0 is 0 bytes inside a block of size 42 free'd
==324913==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324913==    by 0x40775C: ft_strdup2 (get_next_line_utils.c:229)
==324913==    by 0x4077D0: f_ret_zero (get_next_line_utils.c:279)
==324913==    by 0x4078C7: f_ret (get_next_line_utils.c:308)
==324913==    by 0x407397: get_next_line (get_next_line.c:133)
==324913==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324913==    by 0x4052BB: main (mandatory.cpp:41)
==324913==  Block was alloc'd at
==324913==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324913==    by 0x407494: ft_strjoin (get_next_line_utils.c:57)
==324913==    by 0x407841: f_give_stash (get_next_line_utils.c:293)
==324913==    by 0x4078DC: f_ret (get_next_line_utils.c:311)
==324913==    by 0x407397: get_next_line (get_next_line.c:133)
==324913==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324913==    by 0x4052BB: main (mandatory.cpp:41)
==324913== 
==324913== 1 bytes in 1 blocks are definitely lost in loss record 1 of 3
==324913==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324913==    by 0x407814: f_give_stash (get_next_line_utils.c:290)
==324913==    by 0x4078DC: f_ret (get_next_line_utils.c:311)
==324913==    by 0x407397: get_next_line (get_next_line.c:133)
==324913==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324913==    by 0x4052BB: main (mandatory.cpp:41)
==324913== 
==324913== 43 bytes in 1 blocks are definitely lost in loss record 2 of 3
==324913==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324913==    by 0x40733A: get_next_line (get_next_line.c:128)
==324913==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324913==    by 0x4052BB: main (mandatory.cpp:41)
==324913== 
==324913== 43 bytes in 1 blocks are definitely lost in loss record 3 of 3
==324913==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324913==    by 0x40733A: get_next_line (get_next_line.c:128)
==324913==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324913==    by 0x4052C7: main (mandatory.cpp:41)
==324913== 
==324915== Invalid free() / delete / delete[] / realloc()
==324915==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324915==    by 0x40775C: ft_strdup2 (get_next_line_utils.c:229)
==324915==    by 0x4077D0: f_ret_zero (get_next_line_utils.c:279)
==324915==    by 0x4078C7: f_ret (get_next_line_utils.c:308)
==324915==    by 0x407397: get_next_line (get_next_line.c:133)
==324915==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324915==    by 0x4054F9: main (mandatory.cpp:46)
==324915==  Address 0x4de5cf9 is 41 bytes inside a block of size 43 alloc'd
==324915==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324915==    by 0x407494: ft_strjoin (get_next_line_utils.c:57)
==324915==    by 0x407841: f_give_stash (get_next_line_utils.c:293)
==324915==    by 0x4078DC: f_ret (get_next_line_utils.c:311)
==324915==    by 0x407397: get_next_line (get_next_line.c:133)
==324915==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324915==    by 0x4054E7: main (mandatory.cpp:46)
==324915== 
==324915== 1 bytes in 1 blocks are definitely lost in loss record 1 of 5
==324915==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324915==    by 0x407814: f_give_stash (get_next_line_utils.c:290)
==324915==    by 0x4078DC: f_ret (get_next_line_utils.c:311)
==324915==    by 0x407397: get_next_line (get_next_line.c:133)
==324915==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324915==    by 0x4054E7: main (mandatory.cpp:46)
==324915== 
==324915== 43 bytes in 1 blocks are possibly lost in loss record 2 of 5
==324915==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324915==    by 0x407494: ft_strjoin (get_next_line_utils.c:57)
==324915==    by 0x407841: f_give_stash (get_next_line_utils.c:293)
==324915==    by 0x4078DC: f_ret (get_next_line_utils.c:311)
==324915==    by 0x407397: get_next_line (get_next_line.c:133)
==324915==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324915==    by 0x4054E7: main (mandatory.cpp:46)
==324915== 
==324915== 43 bytes in 1 blocks are definitely lost in loss record 3 of 5
==324915==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324915==    by 0x40733A: get_next_line (get_next_line.c:128)
==324915==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324915==    by 0x4054E7: main (mandatory.cpp:46)
==324915== 
==324915== 43 bytes in 1 blocks are definitely lost in loss record 4 of 5
==324915==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324915==    by 0x40733A: get_next_line (get_next_line.c:128)
==324915==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324915==    by 0x4054F9: main (mandatory.cpp:46)
==324915== 
==324915== 43 bytes in 1 blocks are definitely lost in loss record 5 of 5
==324915==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324915==    by 0x40733A: get_next_line (get_next_line.c:128)
==324915==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324915==    by 0x405505: main (mandatory.cpp:46)
==324915== 
==324921== Invalid write of size 1
==324921==    at 0x4077DC: f_ret_zero (get_next_line_utils.c:280)
==324921==    by 0x4078C7: f_ret (get_next_line_utils.c:308)
==324921==    by 0x407397: get_next_line (get_next_line.c:133)
==324921==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324921==    by 0x405725: main (mandatory.cpp:52)
==324921==  Address 0x4de5fe0 is 0 bytes inside a block of size 43 free'd
==324921==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324921==    by 0x40775C: ft_strdup2 (get_next_line_utils.c:229)
==324921==    by 0x4077D0: f_ret_zero (get_next_line_utils.c:279)
==324921==    by 0x4078C7: f_ret (get_next_line_utils.c:308)
==324921==    by 0x407397: get_next_line (get_next_line.c:133)
==324921==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324921==    by 0x405725: main (mandatory.cpp:52)
==324921==  Block was alloc'd at
==324921==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324921==    by 0x407494: ft_strjoin (get_next_line_utils.c:57)
==324921==    by 0x407841: f_give_stash (get_next_line_utils.c:293)
==324921==    by 0x4078DC: f_ret (get_next_line_utils.c:311)
==324921==    by 0x407397: get_next_line (get_next_line.c:133)
==324921==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324921==    by 0x405725: main (mandatory.cpp:52)
==324921== 
==324921== Invalid read of size 1
==324921==    at 0x4073EE: ft_strchr (get_next_line_utils.c:25)
==324921==    by 0x407362: get_next_line (get_next_line.c:131)
==324921==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324921==    by 0x405731: main (mandatory.cpp:52)
==324921==  Address 0x4de5fe0 is 0 bytes inside a block of size 43 free'd
==324921==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324921==    by 0x40775C: ft_strdup2 (get_next_line_utils.c:229)
==324921==    by 0x4077D0: f_ret_zero (get_next_line_utils.c:279)
==324921==    by 0x4078C7: f_ret (get_next_line_utils.c:308)
==324921==    by 0x407397: get_next_line (get_next_line.c:133)
==324921==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324921==    by 0x405725: main (mandatory.cpp:52)
==324921==  Block was alloc'd at
==324921==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324921==    by 0x407494: ft_strjoin (get_next_line_utils.c:57)
==324921==    by 0x407841: f_give_stash (get_next_line_utils.c:293)
==324921==    by 0x4078DC: f_ret (get_next_line_utils.c:311)
==324921==    by 0x407397: get_next_line (get_next_line.c:133)
==324921==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324921==    by 0x405725: main (mandatory.cpp:52)
==324921== 
==324921== Invalid read of size 1
==324921==    at 0x407782: f_ret_zero (get_next_line_utils.c:275)
==324921==    by 0x4078C7: f_ret (get_next_line_utils.c:308)
==324921==    by 0x407397: get_next_line (get_next_line.c:133)
==324921==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324921==    by 0x405731: main (mandatory.cpp:52)
==324921==  Address 0x4de5fe0 is 0 bytes inside a block of size 43 free'd
==324921==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324921==    by 0x40775C: ft_strdup2 (get_next_line_utils.c:229)
==324921==    by 0x4077D0: f_ret_zero (get_next_line_utils.c:279)
==324921==    by 0x4078C7: f_ret (get_next_line_utils.c:308)
==324921==    by 0x407397: get_next_line (get_next_line.c:133)
==324921==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324921==    by 0x405725: main (mandatory.cpp:52)
==324921==  Block was alloc'd at
==324921==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324921==    by 0x407494: ft_strjoin (get_next_line_utils.c:57)
==324921==    by 0x407841: f_give_stash (get_next_line_utils.c:293)
==324921==    by 0x4078DC: f_ret (get_next_line_utils.c:311)
==324921==    by 0x407397: get_next_line (get_next_line.c:133)
==324921==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324921==    by 0x405725: main (mandatory.cpp:52)
==324921== 
==324921== 1 bytes in 1 blocks are definitely lost in loss record 1 of 3
==324921==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324921==    by 0x407814: f_give_stash (get_next_line_utils.c:290)
==324921==    by 0x4078DC: f_ret (get_next_line_utils.c:311)
==324921==    by 0x407397: get_next_line (get_next_line.c:133)
==324921==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324921==    by 0x405725: main (mandatory.cpp:52)
==324921== 
==324921== 43 bytes in 1 blocks are definitely lost in loss record 2 of 3
==324921==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324921==    by 0x40733A: get_next_line (get_next_line.c:128)
==324921==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324921==    by 0x405725: main (mandatory.cpp:52)
==324921== 
==324921== 43 bytes in 1 blocks are definitely lost in loss record 3 of 3
==324921==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324921==    by 0x40733A: get_next_line (get_next_line.c:128)
==324921==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324921==    by 0x405731: main (mandatory.cpp:52)
==324921== 
==324926== 1 bytes in 1 blocks are definitely lost in loss record 1 of 4
==324926==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324926==    by 0x407814: f_give_stash (get_next_line_utils.c:290)
==324926==    by 0x4078DC: f_ret (get_next_line_utils.c:311)
==324926==    by 0x407397: get_next_line (get_next_line.c:133)
==324926==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324926==    by 0x405951: main (mandatory.cpp:57)
==324926== 
==324926== 43 bytes in 1 blocks are possibly lost in loss record 2 of 4
==324926==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324926==    by 0x407494: ft_strjoin (get_next_line_utils.c:57)
==324926==    by 0x407841: f_give_stash (get_next_line_utils.c:293)
==324926==    by 0x4078DC: f_ret (get_next_line_utils.c:311)
==324926==    by 0x407397: get_next_line (get_next_line.c:133)
==324926==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324926==    by 0x405951: main (mandatory.cpp:57)
==324926== 
==324926== 43 bytes in 1 blocks are definitely lost in loss record 3 of 4
==324926==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324926==    by 0x40733A: get_next_line (get_next_line.c:128)
==324926==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324926==    by 0x405951: main (mandatory.cpp:57)
==324926== 
==324926== 43 bytes in 1 blocks are definitely lost in loss record 4 of 4
==324926==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324926==    by 0x40733A: get_next_line (get_next_line.c:128)
==324926==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324926==    by 0x4059A1: main (mandatory.cpp:57)
==324926== 
==324930== Invalid write of size 1
==324930==    at 0x4077DC: f_ret_zero (get_next_line_utils.c:280)
==324930==    by 0x4078C7: f_ret (get_next_line_utils.c:308)
==324930==    by 0x407397: get_next_line (get_next_line.c:133)
==324930==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324930==    by 0x405BCB: main (mandatory.cpp:68)
==324930==  Address 0x4de6670 is 0 bytes inside a block of size 44 free'd
==324930==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324930==    by 0x40775C: ft_strdup2 (get_next_line_utils.c:229)
==324930==    by 0x4077D0: f_ret_zero (get_next_line_utils.c:279)
==324930==    by 0x4078C7: f_ret (get_next_line_utils.c:308)
==324930==    by 0x407397: get_next_line (get_next_line.c:133)
==324930==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324930==    by 0x405BCB: main (mandatory.cpp:68)
==324930==  Block was alloc'd at
==324930==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324930==    by 0x407494: ft_strjoin (get_next_line_utils.c:57)
==324930==    by 0x407841: f_give_stash (get_next_line_utils.c:293)
==324930==    by 0x4078DC: f_ret (get_next_line_utils.c:311)
==324930==    by 0x407397: get_next_line (get_next_line.c:133)
==324930==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324930==    by 0x405BCB: main (mandatory.cpp:68)
==324930== 
==324930== Invalid read of size 1
==324930==    at 0x4073EE: ft_strchr (get_next_line_utils.c:25)
==324930==    by 0x407362: get_next_line (get_next_line.c:131)
==324930==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324930==    by 0x405BD7: main (mandatory.cpp:68)
==324930==  Address 0x4de6670 is 0 bytes inside a block of size 44 free'd
==324930==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324930==    by 0x40775C: ft_strdup2 (get_next_line_utils.c:229)
==324930==    by 0x4077D0: f_ret_zero (get_next_line_utils.c:279)
==324930==    by 0x4078C7: f_ret (get_next_line_utils.c:308)
==324930==    by 0x407397: get_next_line (get_next_line.c:133)
==324930==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324930==    by 0x405BCB: main (mandatory.cpp:68)
==324930==  Block was alloc'd at
==324930==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324930==    by 0x407494: ft_strjoin (get_next_line_utils.c:57)
==324930==    by 0x407841: f_give_stash (get_next_line_utils.c:293)
==324930==    by 0x4078DC: f_ret (get_next_line_utils.c:311)
==324930==    by 0x407397: get_next_line (get_next_line.c:133)
==324930==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324930==    by 0x405BCB: main (mandatory.cpp:68)
==324930== 
==324930== Invalid read of size 1
==324930==    at 0x407782: f_ret_zero (get_next_line_utils.c:275)
==324930==    by 0x4078C7: f_ret (get_next_line_utils.c:308)
==324930==    by 0x407397: get_next_line (get_next_line.c:133)
==324930==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324930==    by 0x405BD7: main (mandatory.cpp:68)
==324930==  Address 0x4de6670 is 0 bytes inside a block of size 44 free'd
==324930==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324930==    by 0x40775C: ft_strdup2 (get_next_line_utils.c:229)
==324930==    by 0x4077D0: f_ret_zero (get_next_line_utils.c:279)
==324930==    by 0x4078C7: f_ret (get_next_line_utils.c:308)
==324930==    by 0x407397: get_next_line (get_next_line.c:133)
==324930==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324930==    by 0x405BCB: main (mandatory.cpp:68)
==324930==  Block was alloc'd at
==324930==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324930==    by 0x407494: ft_strjoin (get_next_line_utils.c:57)
==324930==    by 0x407841: f_give_stash (get_next_line_utils.c:293)
==324930==    by 0x4078DC: f_ret (get_next_line_utils.c:311)
==324930==    by 0x407397: get_next_line (get_next_line.c:133)
==324930==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324930==    by 0x405BCB: main (mandatory.cpp:68)
==324930== 
==324930== 1 bytes in 1 blocks are definitely lost in loss record 1 of 4
==324930==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324930==    by 0x407814: f_give_stash (get_next_line_utils.c:290)
==324930==    by 0x4078DC: f_ret (get_next_line_utils.c:311)
==324930==    by 0x407397: get_next_line (get_next_line.c:133)
==324930==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324930==    by 0x405BCB: main (mandatory.cpp:68)
==324930== 
==324930== 43 bytes in 1 blocks are definitely lost in loss record 2 of 4
==324930==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324930==    by 0x40733A: get_next_line (get_next_line.c:128)
==324930==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324930==    by 0x405BCB: main (mandatory.cpp:68)
==324930== 
==324930== 43 bytes in 1 blocks are definitely lost in loss record 3 of 4
==324930==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324930==    by 0x407494: ft_strjoin (get_next_line_utils.c:57)
==324930==    by 0x407841: f_give_stash (get_next_line_utils.c:293)
==324930==    by 0x4078DC: f_ret (get_next_line_utils.c:311)
==324930==    by 0x407397: get_next_line (get_next_line.c:133)
==324930==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324930==    by 0x405BCB: main (mandatory.cpp:68)
==324930== 
==324930== 43 bytes in 1 blocks are definitely lost in loss record 4 of 4
==324930==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324930==    by 0x40733A: get_next_line (get_next_line.c:128)
==324930==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324930==    by 0x405BD7: main (mandatory.cpp:68)
==324930== 
==324932== Invalid free() / delete / delete[] / realloc()
==324932==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324932==    by 0x40775C: ft_strdup2 (get_next_line_utils.c:229)
==324932==    by 0x4077D0: f_ret_zero (get_next_line_utils.c:279)
==324932==    by 0x4078C7: f_ret (get_next_line_utils.c:308)
==324932==    by 0x407397: get_next_line (get_next_line.c:133)
==324932==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324932==    by 0x405E09: main (mandatory.cpp:73)
==324932==  Address 0x4de69ab is 43 bytes inside a block of size 45 alloc'd
==324932==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324932==    by 0x407494: ft_strjoin (get_next_line_utils.c:57)
==324932==    by 0x407841: f_give_stash (get_next_line_utils.c:293)
==324932==    by 0x4078DC: f_ret (get_next_line_utils.c:311)
==324932==    by 0x407397: get_next_line (get_next_line.c:133)
==324932==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324932==    by 0x405DF7: main (mandatory.cpp:73)
==324932== 
==324932== 1 bytes in 1 blocks are definitely lost in loss record 1 of 6
==324932==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324932==    by 0x407814: f_give_stash (get_next_line_utils.c:290)
==324932==    by 0x4078DC: f_ret (get_next_line_utils.c:311)
==324932==    by 0x407397: get_next_line (get_next_line.c:133)
==324932==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324932==    by 0x405DF7: main (mandatory.cpp:73)
==324932== 
==324932== 43 bytes in 1 blocks are definitely lost in loss record 2 of 6
==324932==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324932==    by 0x40733A: get_next_line (get_next_line.c:128)
==324932==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324932==    by 0x405DF7: main (mandatory.cpp:73)
==324932== 
==324932== 43 bytes in 1 blocks are definitely lost in loss record 3 of 6
==324932==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324932==    by 0x407494: ft_strjoin (get_next_line_utils.c:57)
==324932==    by 0x407841: f_give_stash (get_next_line_utils.c:293)
==324932==    by 0x4078DC: f_ret (get_next_line_utils.c:311)
==324932==    by 0x407397: get_next_line (get_next_line.c:133)
==324932==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324932==    by 0x405DF7: main (mandatory.cpp:73)
==324932== 
==324932== 43 bytes in 1 blocks are definitely lost in loss record 4 of 6
==324932==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324932==    by 0x40733A: get_next_line (get_next_line.c:128)
==324932==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324932==    by 0x405E09: main (mandatory.cpp:73)
==324932== 
==324932== 43 bytes in 1 blocks are definitely lost in loss record 5 of 6
==324932==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324932==    by 0x40733A: get_next_line (get_next_line.c:128)
==324932==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324932==    by 0x405E15: main (mandatory.cpp:73)
==324932== 
==324932== 45 bytes in 1 blocks are possibly lost in loss record 6 of 6
==324932==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324932==    by 0x407494: ft_strjoin (get_next_line_utils.c:57)
==324932==    by 0x407841: f_give_stash (get_next_line_utils.c:293)
==324932==    by 0x4078DC: f_ret (get_next_line_utils.c:311)
==324932==    by 0x407397: get_next_line (get_next_line.c:133)
==324932==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324932==    by 0x405DF7: main (mandatory.cpp:73)
==324932== 
==324934== 1 bytes in 1 blocks are definitely lost in loss record 1 of 8
==324934==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324934==    by 0x407814: f_give_stash (get_next_line_utils.c:290)
==324934==    by 0x4078DC: f_ret (get_next_line_utils.c:311)
==324934==    by 0x407397: get_next_line (get_next_line.c:133)
==324934==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324934==    by 0x406035: main (mandatory.cpp:79)
==324934== 
==324934== 6 bytes in 1 blocks are possibly lost in loss record 2 of 8
==324934==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324934==    by 0x407494: ft_strjoin (get_next_line_utils.c:57)
==324934==    by 0x407841: f_give_stash (get_next_line_utils.c:293)
==324934==    by 0x4078DC: f_ret (get_next_line_utils.c:311)
==324934==    by 0x407397: get_next_line (get_next_line.c:133)
==324934==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324934==    by 0x406035: main (mandatory.cpp:79)
==324934== 
==324934== 43 bytes in 1 blocks are definitely lost in loss record 3 of 8
==324934==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324934==    by 0x40733A: get_next_line (get_next_line.c:128)
==324934==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324934==    by 0x406035: main (mandatory.cpp:79)
==324934== 
==324934== 43 bytes in 1 blocks are definitely lost in loss record 4 of 8
==324934==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324934==    by 0x40733A: get_next_line (get_next_line.c:128)
==324934==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324934==    by 0x406047: main (mandatory.cpp:79)
==324934== 
==324934== 43 bytes in 1 blocks are definitely lost in loss record 5 of 8
==324934==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324934==    by 0x40733A: get_next_line (get_next_line.c:128)
==324934==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324934==    by 0x406059: main (mandatory.cpp:79)
==324934== 
==324934== 43 bytes in 1 blocks are definitely lost in loss record 6 of 8
==324934==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324934==    by 0x40733A: get_next_line (get_next_line.c:128)
==324934==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324934==    by 0x40606B: main (mandatory.cpp:79)
==324934== 
==324934== 43 bytes in 1 blocks are definitely lost in loss record 7 of 8
==324934==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324934==    by 0x40733A: get_next_line (get_next_line.c:128)
==324934==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324934==    by 0x40607D: main (mandatory.cpp:79)
==324934== 
==324934== 43 bytes in 1 blocks are definitely lost in loss record 8 of 8
==324934==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324934==    by 0x40733A: get_next_line (get_next_line.c:128)
==324934==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324934==    by 0x406089: main (mandatory.cpp:79)
==324934== 
==324938== Invalid write of size 1
==324938==    at 0x4077DC: f_ret_zero (get_next_line_utils.c:280)
==324938==    by 0x4078C7: f_ret (get_next_line_utils.c:308)
==324938==    by 0x407397: get_next_line (get_next_line.c:133)
==324938==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324938==    by 0x4062F1: main (mandatory.cpp:88)
==324938==  Address 0x4de7590 is 0 bytes inside a block of size 42 free'd
==324938==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324938==    by 0x40775C: ft_strdup2 (get_next_line_utils.c:229)
==324938==    by 0x4077D0: f_ret_zero (get_next_line_utils.c:279)
==324938==    by 0x4078C7: f_ret (get_next_line_utils.c:308)
==324938==    by 0x407397: get_next_line (get_next_line.c:133)
==324938==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324938==    by 0x4062F1: main (mandatory.cpp:88)
==324938==  Block was alloc'd at
==324938==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324938==    by 0x407494: ft_strjoin (get_next_line_utils.c:57)
==324938==    by 0x407841: f_give_stash (get_next_line_utils.c:293)
==324938==    by 0x4078DC: f_ret (get_next_line_utils.c:311)
==324938==    by 0x407397: get_next_line (get_next_line.c:133)
==324938==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324938==    by 0x4062F1: main (mandatory.cpp:88)
==324938== 
==324938== Invalid read of size 1
==324938==    at 0x4073EE: ft_strchr (get_next_line_utils.c:25)
==324938==    by 0x407362: get_next_line (get_next_line.c:131)
==324938==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324938==    by 0x4062FD: main (mandatory.cpp:88)
==324938==  Address 0x4de7590 is 0 bytes inside a block of size 42 free'd
==324938==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324938==    by 0x40775C: ft_strdup2 (get_next_line_utils.c:229)
==324938==    by 0x4077D0: f_ret_zero (get_next_line_utils.c:279)
==324938==    by 0x4078C7: f_ret (get_next_line_utils.c:308)
==324938==    by 0x407397: get_next_line (get_next_line.c:133)
==324938==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324938==    by 0x4062F1: main (mandatory.cpp:88)
==324938==  Block was alloc'd at
==324938==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324938==    by 0x407494: ft_strjoin (get_next_line_utils.c:57)
==324938==    by 0x407841: f_give_stash (get_next_line_utils.c:293)
==324938==    by 0x4078DC: f_ret (get_next_line_utils.c:311)
==324938==    by 0x407397: get_next_line (get_next_line.c:133)
==324938==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324938==    by 0x4062F1: main (mandatory.cpp:88)
==324938== 
==324938== Invalid read of size 1
==324938==    at 0x407782: f_ret_zero (get_next_line_utils.c:275)
==324938==    by 0x4078C7: f_ret (get_next_line_utils.c:308)
==324938==    by 0x407397: get_next_line (get_next_line.c:133)
==324938==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324938==    by 0x4062FD: main (mandatory.cpp:88)
==324938==  Address 0x4de7590 is 0 bytes inside a block of size 42 free'd
==324938==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324938==    by 0x40775C: ft_strdup2 (get_next_line_utils.c:229)
==324938==    by 0x4077D0: f_ret_zero (get_next_line_utils.c:279)
==324938==    by 0x4078C7: f_ret (get_next_line_utils.c:308)
==324938==    by 0x407397: get_next_line (get_next_line.c:133)
==324938==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324938==    by 0x4062F1: main (mandatory.cpp:88)
==324938==  Block was alloc'd at
==324938==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324938==    by 0x407494: ft_strjoin (get_next_line_utils.c:57)
==324938==    by 0x407841: f_give_stash (get_next_line_utils.c:293)
==324938==    by 0x4078DC: f_ret (get_next_line_utils.c:311)
==324938==    by 0x407397: get_next_line (get_next_line.c:133)
==324938==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324938==    by 0x4062F1: main (mandatory.cpp:88)
==324938== 
==324938== 1 bytes in 1 blocks are definitely lost in loss record 1 of 11
==324938==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324938==    by 0x407814: f_give_stash (get_next_line_utils.c:290)
==324938==    by 0x4078DC: f_ret (get_next_line_utils.c:311)
==324938==    by 0x407397: get_next_line (get_next_line.c:133)
==324938==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324938==    by 0x4062A9: main (mandatory.cpp:88)
==324938== 
==324938== 43 bytes in 1 blocks are definitely lost in loss record 2 of 11
==324938==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324938==    by 0x40733A: get_next_line (get_next_line.c:128)
==324938==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324938==    by 0x4062A9: main (mandatory.cpp:88)
==324938== 
==324938== 43 bytes in 1 blocks are definitely lost in loss record 3 of 11
==324938==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324938==    by 0x407494: ft_strjoin (get_next_line_utils.c:57)
==324938==    by 0x407841: f_give_stash (get_next_line_utils.c:293)
==324938==    by 0x4078DC: f_ret (get_next_line_utils.c:311)
==324938==    by 0x407397: get_next_line (get_next_line.c:133)
==324938==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324938==    by 0x4062A9: main (mandatory.cpp:88)
==324938== 
==324938== 43 bytes in 1 blocks are definitely lost in loss record 4 of 11
==324938==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324938==    by 0x40733A: get_next_line (get_next_line.c:128)
==324938==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324938==    by 0x4062BB: main (mandatory.cpp:88)
==324938== 
==324938== 43 bytes in 1 blocks are definitely lost in loss record 5 of 11
==324938==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324938==    by 0x40733A: get_next_line (get_next_line.c:128)
==324938==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324938==    by 0x4062CD: main (mandatory.cpp:88)
==324938== 
==324938== 43 bytes in 1 blocks are definitely lost in loss record 6 of 11
==324938==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324938==    by 0x40733A: get_next_line (get_next_line.c:128)
==324938==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324938==    by 0x4062DF: main (mandatory.cpp:88)
==324938== 
==324938== 43 bytes in 1 blocks are definitely lost in loss record 7 of 11
==324938==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324938==    by 0x40733A: get_next_line (get_next_line.c:128)
==324938==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324938==    by 0x4062F1: main (mandatory.cpp:88)
==324938== 
==324938== 43 bytes in 1 blocks are definitely lost in loss record 8 of 11
==324938==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324938==    by 0x40733A: get_next_line (get_next_line.c:128)
==324938==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324938==    by 0x4062FD: main (mandatory.cpp:88)
==324938== 
==324938== 82 bytes in 1 blocks are definitely lost in loss record 9 of 11
==324938==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324938==    by 0x407494: ft_strjoin (get_next_line_utils.c:57)
==324938==    by 0x407841: f_give_stash (get_next_line_utils.c:293)
==324938==    by 0x4078DC: f_ret (get_next_line_utils.c:311)
==324938==    by 0x407397: get_next_line (get_next_line.c:133)
==324938==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324938==    by 0x4062DF: main (mandatory.cpp:88)
==324938== 
==324938== 84 bytes in 1 blocks are definitely lost in loss record 10 of 11
==324938==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324938==    by 0x407494: ft_strjoin (get_next_line_utils.c:57)
==324938==    by 0x407841: f_give_stash (get_next_line_utils.c:293)
==324938==    by 0x4078DC: f_ret (get_next_line_utils.c:311)
==324938==    by 0x407397: get_next_line (get_next_line.c:133)
==324938==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324938==    by 0x4062CD: main (mandatory.cpp:88)
==324938== 
==324938== 128 bytes in 2 blocks are definitely lost in loss record 11 of 11
==324938==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324938==    by 0x407494: ft_strjoin (get_next_line_utils.c:57)
==324938==    by 0x407841: f_give_stash (get_next_line_utils.c:293)
==324938==    by 0x4078DC: f_ret (get_next_line_utils.c:311)
==324938==    by 0x407397: get_next_line (get_next_line.c:133)
==324938==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324938==    by 0x4062BB: main (mandatory.cpp:88)
==324938== 
==324942== 1 bytes in 1 blocks are definitely lost in loss record 1 of 12
==324942==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324942==    by 0x407814: f_give_stash (get_next_line_utils.c:290)
==324942==    by 0x4078DC: f_ret (get_next_line_utils.c:311)
==324942==    by 0x407397: get_next_line (get_next_line.c:133)
==324942==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324942==    by 0x40651D: main (mandatory.cpp:97)
==324942== 
==324942== 42 bytes in 1 blocks are possibly lost in loss record 2 of 12
==324942==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324942==    by 0x407494: ft_strjoin (get_next_line_utils.c:57)
==324942==    by 0x407841: f_give_stash (get_next_line_utils.c:293)
==324942==    by 0x4078DC: f_ret (get_next_line_utils.c:311)
==324942==    by 0x407397: get_next_line (get_next_line.c:133)
==324942==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324942==    by 0x406565: main (mandatory.cpp:97)
==324942== 
==324942== 43 bytes in 1 blocks are definitely lost in loss record 3 of 12
==324942==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324942==    by 0x40733A: get_next_line (get_next_line.c:128)
==324942==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324942==    by 0x40651D: main (mandatory.cpp:97)
==324942== 
==324942== 43 bytes in 1 blocks are definitely lost in loss record 4 of 12
==324942==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324942==    by 0x407494: ft_strjoin (get_next_line_utils.c:57)
==324942==    by 0x407841: f_give_stash (get_next_line_utils.c:293)
==324942==    by 0x4078DC: f_ret (get_next_line_utils.c:311)
==324942==    by 0x407397: get_next_line (get_next_line.c:133)
==324942==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324942==    by 0x40651D: main (mandatory.cpp:97)
==324942== 
==324942== 43 bytes in 1 blocks are definitely lost in loss record 5 of 12
==324942==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324942==    by 0x40733A: get_next_line (get_next_line.c:128)
==324942==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324942==    by 0x40652F: main (mandatory.cpp:97)
==324942== 
==324942== 43 bytes in 1 blocks are definitely lost in loss record 6 of 12
==324942==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324942==    by 0x40733A: get_next_line (get_next_line.c:128)
==324942==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324942==    by 0x406541: main (mandatory.cpp:97)
==324942== 
==324942== 43 bytes in 1 blocks are definitely lost in loss record 7 of 12
==324942==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324942==    by 0x40733A: get_next_line (get_next_line.c:128)
==324942==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324942==    by 0x406553: main (mandatory.cpp:97)
==324942== 
==324942== 43 bytes in 1 blocks are definitely lost in loss record 8 of 12
==324942==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324942==    by 0x407494: ft_strjoin (get_next_line_utils.c:57)
==324942==    by 0x407841: f_give_stash (get_next_line_utils.c:293)
==324942==    by 0x4078DC: f_ret (get_next_line_utils.c:311)
==324942==    by 0x407397: get_next_line (get_next_line.c:133)
==324942==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324942==    by 0x406553: main (mandatory.cpp:97)
==324942== 
==324942== 43 bytes in 1 blocks are definitely lost in loss record 9 of 12
==324942==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324942==    by 0x40733A: get_next_line (get_next_line.c:128)
==324942==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324942==    by 0x406565: main (mandatory.cpp:97)
==324942== 
==324942== 43 bytes in 1 blocks are definitely lost in loss record 10 of 12
==324942==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324942==    by 0x40733A: get_next_line (get_next_line.c:128)
==324942==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324942==    by 0x406571: main (mandatory.cpp:97)
==324942== 
==324942== 44 bytes in 1 blocks are definitely lost in loss record 11 of 12
==324942==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324942==    by 0x407494: ft_strjoin (get_next_line_utils.c:57)
==324942==    by 0x407841: f_give_stash (get_next_line_utils.c:293)
==324942==    by 0x4078DC: f_ret (get_next_line_utils.c:311)
==324942==    by 0x407397: get_next_line (get_next_line.c:133)
==324942==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324942==    by 0x40652F: main (mandatory.cpp:97)
==324942== 
==324942== 44 bytes in 1 blocks are definitely lost in loss record 12 of 12
==324942==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324942==    by 0x407494: ft_strjoin (get_next_line_utils.c:57)
==324942==    by 0x407841: f_give_stash (get_next_line_utils.c:293)
==324942==    by 0x4078DC: f_ret (get_next_line_utils.c:311)
==324942==    by 0x407397: get_next_line (get_next_line.c:133)
==324942==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324942==    by 0x406541: main (mandatory.cpp:97)
==324942== 
==324946== Invalid write of size 1
==324946==    at 0x4077DC: f_ret_zero (get_next_line_utils.c:280)
==324946==    by 0x4078C7: f_ret (get_next_line_utils.c:308)
==324946==    by 0x407397: get_next_line (get_next_line.c:133)
==324946==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324946==    by 0x406821: main (mandatory.cpp:106)
==324946==  Address 0x4de7ee0 is 0 bytes inside a block of size 42 free'd
==324946==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324946==    by 0x40775C: ft_strdup2 (get_next_line_utils.c:229)
==324946==    by 0x4077D0: f_ret_zero (get_next_line_utils.c:279)
==324946==    by 0x4078C7: f_ret (get_next_line_utils.c:308)
==324946==    by 0x407397: get_next_line (get_next_line.c:133)
==324946==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324946==    by 0x406821: main (mandatory.cpp:106)
==324946==  Block was alloc'd at
==324946==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324946==    by 0x407494: ft_strjoin (get_next_line_utils.c:57)
==324946==    by 0x407841: f_give_stash (get_next_line_utils.c:293)
==324946==    by 0x4078DC: f_ret (get_next_line_utils.c:311)
==324946==    by 0x407397: get_next_line (get_next_line.c:133)
==324946==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324946==    by 0x406821: main (mandatory.cpp:106)
==324946== 
==324946== Invalid read of size 1
==324946==    at 0x4073EE: ft_strchr (get_next_line_utils.c:25)
==324946==    by 0x407362: get_next_line (get_next_line.c:131)
==324946==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324946==    by 0x40682D: main (mandatory.cpp:106)
==324946==  Address 0x4de7ee0 is 0 bytes inside a block of size 42 free'd
==324946==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324946==    by 0x40775C: ft_strdup2 (get_next_line_utils.c:229)
==324946==    by 0x4077D0: f_ret_zero (get_next_line_utils.c:279)
==324946==    by 0x4078C7: f_ret (get_next_line_utils.c:308)
==324946==    by 0x407397: get_next_line (get_next_line.c:133)
==324946==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324946==    by 0x406821: main (mandatory.cpp:106)
==324946==  Block was alloc'd at
==324946==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324946==    by 0x407494: ft_strjoin (get_next_line_utils.c:57)
==324946==    by 0x407841: f_give_stash (get_next_line_utils.c:293)
==324946==    by 0x4078DC: f_ret (get_next_line_utils.c:311)
==324946==    by 0x407397: get_next_line (get_next_line.c:133)
==324946==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324946==    by 0x406821: main (mandatory.cpp:106)
==324946== 
==324946== Invalid read of size 1
==324946==    at 0x407782: f_ret_zero (get_next_line_utils.c:275)
==324946==    by 0x4078C7: f_ret (get_next_line_utils.c:308)
==324946==    by 0x407397: get_next_line (get_next_line.c:133)
==324946==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324946==    by 0x40682D: main (mandatory.cpp:106)
==324946==  Address 0x4de7ee0 is 0 bytes inside a block of size 42 free'd
==324946==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324946==    by 0x40775C: ft_strdup2 (get_next_line_utils.c:229)
==324946==    by 0x4077D0: f_ret_zero (get_next_line_utils.c:279)
==324946==    by 0x4078C7: f_ret (get_next_line_utils.c:308)
==324946==    by 0x407397: get_next_line (get_next_line.c:133)
==324946==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324946==    by 0x406821: main (mandatory.cpp:106)
==324946==  Block was alloc'd at
==324946==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324946==    by 0x407494: ft_strjoin (get_next_line_utils.c:57)
==324946==    by 0x407841: f_give_stash (get_next_line_utils.c:293)
==324946==    by 0x4078DC: f_ret (get_next_line_utils.c:311)
==324946==    by 0x407397: get_next_line (get_next_line.c:133)
==324946==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324946==    by 0x406821: main (mandatory.cpp:106)
==324946== 
==324946== 1 bytes in 1 blocks are definitely lost in loss record 1 of 16
==324946==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324946==    by 0x407814: f_give_stash (get_next_line_utils.c:290)
==324946==    by 0x4078DC: f_ret (get_next_line_utils.c:311)
==324946==    by 0x407397: get_next_line (get_next_line.c:133)
==324946==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324946==    by 0x406791: main (mandatory.cpp:106)
==324946== 
==324946== 43 bytes in 1 blocks are definitely lost in loss record 2 of 16
==324946==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324946==    by 0x40733A: get_next_line (get_next_line.c:128)
==324946==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324946==    by 0x406791: main (mandatory.cpp:106)
==324946== 
==324946== 43 bytes in 1 blocks are definitely lost in loss record 3 of 16
==324946==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324946==    by 0x407494: ft_strjoin (get_next_line_utils.c:57)
==324946==    by 0x407841: f_give_stash (get_next_line_utils.c:293)
==324946==    by 0x4078DC: f_ret (get_next_line_utils.c:311)
==324946==    by 0x407397: get_next_line (get_next_line.c:133)
==324946==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324946==    by 0x406791: main (mandatory.cpp:106)
==324946== 
==324946== 43 bytes in 1 blocks are definitely lost in loss record 4 of 16
==324946==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324946==    by 0x40733A: get_next_line (get_next_line.c:128)
==324946==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324946==    by 0x4067A3: main (mandatory.cpp:106)
==324946== 
==324946== 43 bytes in 1 blocks are definitely lost in loss record 5 of 16
==324946==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324946==    by 0x407494: ft_strjoin (get_next_line_utils.c:57)
==324946==    by 0x407841: f_give_stash (get_next_line_utils.c:293)
==324946==    by 0x4078DC: f_ret (get_next_line_utils.c:311)
==324946==    by 0x407397: get_next_line (get_next_line.c:133)
==324946==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324946==    by 0x4067A3: main (mandatory.cpp:106)
==324946== 
==324946== 43 bytes in 1 blocks are definitely lost in loss record 6 of 16
==324946==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324946==    by 0x40733A: get_next_line (get_next_line.c:128)
==324946==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324946==    by 0x4067B5: main (mandatory.cpp:106)
==324946== 
==324946== 43 bytes in 1 blocks are definitely lost in loss record 7 of 16
==324946==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324946==    by 0x40733A: get_next_line (get_next_line.c:128)
==324946==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324946==    by 0x4067C7: main (mandatory.cpp:106)
==324946== 
==324946== 43 bytes in 1 blocks are definitely lost in loss record 8 of 16
==324946==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324946==    by 0x40733A: get_next_line (get_next_line.c:128)
==324946==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324946==    by 0x4067D9: main (mandatory.cpp:106)
==324946== 
==324946== 43 bytes in 1 blocks are definitely lost in loss record 9 of 16
==324946==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324946==    by 0x40733A: get_next_line (get_next_line.c:128)
==324946==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324946==    by 0x4067EB: main (mandatory.cpp:106)
==324946== 
==324946== 43 bytes in 1 blocks are definitely lost in loss record 10 of 16
==324946==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324946==    by 0x40733A: get_next_line (get_next_line.c:128)
==324946==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324946==    by 0x4067FD: main (mandatory.cpp:106)
==324946== 
==324946== 43 bytes in 1 blocks are definitely lost in loss record 11 of 16
==324946==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324946==    by 0x40733A: get_next_line (get_next_line.c:128)
==324946==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324946==    by 0x40680F: main (mandatory.cpp:106)
==324946== 
==324946== 43 bytes in 1 blocks are definitely lost in loss record 12 of 16
==324946==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324946==    by 0x40733A: get_next_line (get_next_line.c:128)
==324946==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324946==    by 0x406821: main (mandatory.cpp:106)
==324946== 
==324946== 43 bytes in 1 blocks are definitely lost in loss record 13 of 16
==324946==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324946==    by 0x40733A: get_next_line (get_next_line.c:128)
==324946==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324946==    by 0x40682D: main (mandatory.cpp:106)
==324946== 
==324946== 79 bytes in 1 blocks are definitely lost in loss record 14 of 16
==324946==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324946==    by 0x407494: ft_strjoin (get_next_line_utils.c:57)
==324946==    by 0x407841: f_give_stash (get_next_line_utils.c:293)
==324946==    by 0x4078DC: f_ret (get_next_line_utils.c:311)
==324946==    by 0x407397: get_next_line (get_next_line.c:133)
==324946==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324946==    by 0x4067FD: main (mandatory.cpp:106)
==324946== 
==324946== 82 bytes in 1 blocks are definitely lost in loss record 15 of 16
==324946==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324946==    by 0x407494: ft_strjoin (get_next_line_utils.c:57)
==324946==    by 0x407841: f_give_stash (get_next_line_utils.c:293)
==324946==    by 0x4078DC: f_ret (get_next_line_utils.c:311)
==324946==    by 0x407397: get_next_line (get_next_line.c:133)
==324946==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324946==    by 0x4067D9: main (mandatory.cpp:106)
==324946== 
==324946== 84 bytes in 1 blocks are definitely lost in loss record 16 of 16
==324946==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324946==    by 0x407494: ft_strjoin (get_next_line_utils.c:57)
==324946==    by 0x407841: f_give_stash (get_next_line_utils.c:293)
==324946==    by 0x4078DC: f_ret (get_next_line_utils.c:311)
==324946==    by 0x407397: get_next_line (get_next_line.c:133)
==324946==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324946==    by 0x4067B5: main (mandatory.cpp:106)
==324946== 
==324947== 1 bytes in 1 blocks are definitely lost in loss record 1 of 17
==324947==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324947==    by 0x407814: f_give_stash (get_next_line_utils.c:290)
==324947==    by 0x4078DC: f_ret (get_next_line_utils.c:311)
==324947==    by 0x407397: get_next_line (get_next_line.c:133)
==324947==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324947==    by 0x406A4D: main (mandatory.cpp:119)
==324947== 
==324947== 43 bytes in 1 blocks are possibly lost in loss record 2 of 17
==324947==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324947==    by 0x407494: ft_strjoin (get_next_line_utils.c:57)
==324947==    by 0x407841: f_give_stash (get_next_line_utils.c:293)
==324947==    by 0x4078DC: f_ret (get_next_line_utils.c:311)
==324947==    by 0x407397: get_next_line (get_next_line.c:133)
==324947==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324947==    by 0x406ADD: main (mandatory.cpp:119)
==324947== 
==324947== 43 bytes in 1 blocks are definitely lost in loss record 3 of 17
==324947==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324947==    by 0x40733A: get_next_line (get_next_line.c:128)
==324947==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324947==    by 0x406A4D: main (mandatory.cpp:119)
==324947== 
==324947== 43 bytes in 1 blocks are definitely lost in loss record 4 of 17
==324947==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324947==    by 0x407494: ft_strjoin (get_next_line_utils.c:57)
==324947==    by 0x407841: f_give_stash (get_next_line_utils.c:293)
==324947==    by 0x4078DC: f_ret (get_next_line_utils.c:311)
==324947==    by 0x407397: get_next_line (get_next_line.c:133)
==324947==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324947==    by 0x406A4D: main (mandatory.cpp:119)
==324947== 
==324947== 43 bytes in 1 blocks are definitely lost in loss record 5 of 17
==324947==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324947==    by 0x40733A: get_next_line (get_next_line.c:128)
==324947==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324947==    by 0x406A5F: main (mandatory.cpp:119)
==324947== 
==324947== 43 bytes in 1 blocks are definitely lost in loss record 6 of 17
==324947==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324947==    by 0x407494: ft_strjoin (get_next_line_utils.c:57)
==324947==    by 0x407841: f_give_stash (get_next_line_utils.c:293)
==324947==    by 0x4078DC: f_ret (get_next_line_utils.c:311)
==324947==    by 0x407397: get_next_line (get_next_line.c:133)
==324947==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324947==    by 0x406A5F: main (mandatory.cpp:119)
==324947== 
==324947== 43 bytes in 1 blocks are definitely lost in loss record 7 of 17
==324947==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324947==    by 0x40733A: get_next_line (get_next_line.c:128)
==324947==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324947==    by 0x406A71: main (mandatory.cpp:119)
==324947== 
==324947== 43 bytes in 1 blocks are definitely lost in loss record 8 of 17
==324947==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324947==    by 0x40733A: get_next_line (get_next_line.c:128)
==324947==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324947==    by 0x406A83: main (mandatory.cpp:119)
==324947== 
==324947== 43 bytes in 1 blocks are definitely lost in loss record 9 of 17
==324947==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324947==    by 0x40733A: get_next_line (get_next_line.c:128)
==324947==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324947==    by 0x406A95: main (mandatory.cpp:119)
==324947== 
==324947== 43 bytes in 1 blocks are definitely lost in loss record 10 of 17
==324947==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324947==    by 0x40733A: get_next_line (get_next_line.c:128)
==324947==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324947==    by 0x406AA7: main (mandatory.cpp:119)
==324947== 
==324947== 43 bytes in 1 blocks are definitely lost in loss record 11 of 17
==324947==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324947==    by 0x40733A: get_next_line (get_next_line.c:128)
==324947==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324947==    by 0x406AB9: main (mandatory.cpp:119)
==324947== 
==324947== 43 bytes in 1 blocks are definitely lost in loss record 12 of 17
==324947==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324947==    by 0x40733A: get_next_line (get_next_line.c:128)
==324947==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324947==    by 0x406ACB: main (mandatory.cpp:119)
==324947== 
==324947== 43 bytes in 1 blocks are definitely lost in loss record 13 of 17
==324947==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324947==    by 0x40733A: get_next_line (get_next_line.c:128)
==324947==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324947==    by 0x406ADD: main (mandatory.cpp:119)
==324947== 
==324947== 43 bytes in 1 blocks are definitely lost in loss record 14 of 17
==324947==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324947==    by 0x40733A: get_next_line (get_next_line.c:128)
==324947==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324947==    by 0x406AE9: main (mandatory.cpp:119)
==324947== 
==324947== 79 bytes in 1 blocks are definitely lost in loss record 15 of 17
==324947==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324947==    by 0x407494: ft_strjoin (get_next_line_utils.c:57)
==324947==    by 0x407841: f_give_stash (get_next_line_utils.c:293)
==324947==    by 0x4078DC: f_ret (get_next_line_utils.c:311)
==324947==    by 0x407397: get_next_line (get_next_line.c:133)
==324947==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324947==    by 0x406AB9: main (mandatory.cpp:119)
==324947== 
==324947== 82 bytes in 1 blocks are definitely lost in loss record 16 of 17
==324947==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324947==    by 0x407494: ft_strjoin (get_next_line_utils.c:57)
==324947==    by 0x407841: f_give_stash (get_next_line_utils.c:293)
==324947==    by 0x4078DC: f_ret (get_next_line_utils.c:311)
==324947==    by 0x407397: get_next_line (get_next_line.c:133)
==324947==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324947==    by 0x406A95: main (mandatory.cpp:119)
==324947== 
==324947== 84 bytes in 1 blocks are definitely lost in loss record 17 of 17
==324947==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324947==    by 0x407494: ft_strjoin (get_next_line_utils.c:57)
==324947==    by 0x407841: f_give_stash (get_next_line_utils.c:293)
==324947==    by 0x4078DC: f_ret (get_next_line_utils.c:311)
==324947==    by 0x407397: get_next_line (get_next_line.c:133)
==324947==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324947==    by 0x406A71: main (mandatory.cpp:119)
==324947== 
==324950== Invalid write of size 1
==324950==    at 0x4077DC: f_ret_zero (get_next_line_utils.c:280)
==324950==    by 0x4078C7: f_ret (get_next_line_utils.c:308)
==324950==    by 0x407397: get_next_line (get_next_line.c:133)
==324950==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324950==    by 0x406D09: main (mandatory.cpp:132)
==324950==  Address 0x4f0f9e0 is 0 bytes inside a block of size 10,001 free'd
==324950==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324950==    by 0x40775C: ft_strdup2 (get_next_line_utils.c:229)
==324950==    by 0x4077D0: f_ret_zero (get_next_line_utils.c:279)
==324950==    by 0x4078C7: f_ret (get_next_line_utils.c:308)
==324950==    by 0x407397: get_next_line (get_next_line.c:133)
==324950==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324950==    by 0x406D09: main (mandatory.cpp:132)
==324950==  Block was alloc'd at
==324950==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324950==    by 0x407494: ft_strjoin (get_next_line_utils.c:57)
==324950==    by 0x407841: f_give_stash (get_next_line_utils.c:293)
==324950==    by 0x4078DC: f_ret (get_next_line_utils.c:311)
==324950==    by 0x407397: get_next_line (get_next_line.c:133)
==324950==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324950==    by 0x406D09: main (mandatory.cpp:132)
==324950== 
==324950== Invalid read of size 1
==324950==    at 0x4073EE: ft_strchr (get_next_line_utils.c:25)
==324950==    by 0x407362: get_next_line (get_next_line.c:131)
==324950==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324950==    by 0x406D15: main (mandatory.cpp:132)
==324950==  Address 0x4f0f9e0 is 0 bytes inside a block of size 10,001 free'd
==324950==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324950==    by 0x40775C: ft_strdup2 (get_next_line_utils.c:229)
==324950==    by 0x4077D0: f_ret_zero (get_next_line_utils.c:279)
==324950==    by 0x4078C7: f_ret (get_next_line_utils.c:308)
==324950==    by 0x407397: get_next_line (get_next_line.c:133)
==324950==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324950==    by 0x406D09: main (mandatory.cpp:132)
==324950==  Block was alloc'd at
==324950==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324950==    by 0x407494: ft_strjoin (get_next_line_utils.c:57)
==324950==    by 0x407841: f_give_stash (get_next_line_utils.c:293)
==324950==    by 0x4078DC: f_ret (get_next_line_utils.c:311)
==324950==    by 0x407397: get_next_line (get_next_line.c:133)
==324950==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324950==    by 0x406D09: main (mandatory.cpp:132)
==324950== 
==324950== Invalid read of size 1
==324950==    at 0x407782: f_ret_zero (get_next_line_utils.c:275)
==324950==    by 0x4078C7: f_ret (get_next_line_utils.c:308)
==324950==    by 0x407397: get_next_line (get_next_line.c:133)
==324950==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324950==    by 0x406D15: main (mandatory.cpp:132)
==324950==  Address 0x4f0f9e0 is 0 bytes inside a block of size 10,001 free'd
==324950==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324950==    by 0x40775C: ft_strdup2 (get_next_line_utils.c:229)
==324950==    by 0x4077D0: f_ret_zero (get_next_line_utils.c:279)
==324950==    by 0x4078C7: f_ret (get_next_line_utils.c:308)
==324950==    by 0x407397: get_next_line (get_next_line.c:133)
==324950==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324950==    by 0x406D09: main (mandatory.cpp:132)
==324950==  Block was alloc'd at
==324950==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324950==    by 0x407494: ft_strjoin (get_next_line_utils.c:57)
==324950==    by 0x407841: f_give_stash (get_next_line_utils.c:293)
==324950==    by 0x4078DC: f_ret (get_next_line_utils.c:311)
==324950==    by 0x407397: get_next_line (get_next_line.c:133)
==324950==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324950==    by 0x406D09: main (mandatory.cpp:132)
==324950== 
==324950== 1 bytes in 1 blocks are definitely lost in loss record 1 of 4
==324950==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324950==    by 0x407814: f_give_stash (get_next_line_utils.c:290)
==324950==    by 0x4078DC: f_ret (get_next_line_utils.c:311)
==324950==    by 0x407397: get_next_line (get_next_line.c:133)
==324950==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324950==    by 0x406D09: main (mandatory.cpp:132)
==324950== 
==324950== 43 bytes in 1 blocks are definitely lost in loss record 2 of 4
==324950==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324950==    by 0x40733A: get_next_line (get_next_line.c:128)
==324950==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324950==    by 0x406D09: main (mandatory.cpp:132)
==324950== 
==324950== 43 bytes in 1 blocks are definitely lost in loss record 3 of 4
==324950==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324950==    by 0x40733A: get_next_line (get_next_line.c:128)
==324950==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324950==    by 0x406D15: main (mandatory.cpp:132)
==324950== 
==324950== 1,194,760 bytes in 238 blocks are definitely lost in loss record 4 of 4
==324950==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324950==    by 0x407494: ft_strjoin (get_next_line_utils.c:57)
==324950==    by 0x407841: f_give_stash (get_next_line_utils.c:293)
==324950==    by 0x4078DC: f_ret (get_next_line_utils.c:311)
==324950==    by 0x407397: get_next_line (get_next_line.c:133)
==324950==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324950==    by 0x406D09: main (mandatory.cpp:132)
==324950== 
==324952== 1 bytes in 1 blocks are definitely lost in loss record 1 of 5
==324952==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324952==    by 0x407814: f_give_stash (get_next_line_utils.c:290)
==324952==    by 0x4078DC: f_ret (get_next_line_utils.c:311)
==324952==    by 0x407397: get_next_line (get_next_line.c:133)
==324952==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324952==    by 0x406F35: main (mandatory.cpp:136)
==324952== 
==324952== 43 bytes in 1 blocks are definitely lost in loss record 2 of 5
==324952==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324952==    by 0x40733A: get_next_line (get_next_line.c:128)
==324952==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324952==    by 0x406F35: main (mandatory.cpp:136)
==324952== 
==324952== 43 bytes in 1 blocks are definitely lost in loss record 3 of 5
==324952==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324952==    by 0x40733A: get_next_line (get_next_line.c:128)
==324952==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324952==    by 0x406F41: main (mandatory.cpp:136)
==324952== 
==324952== 10,002 bytes in 1 blocks are possibly lost in loss record 4 of 5
==324952==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324952==    by 0x407494: ft_strjoin (get_next_line_utils.c:57)
==324952==    by 0x407841: f_give_stash (get_next_line_utils.c:293)
==324952==    by 0x4078DC: f_ret (get_next_line_utils.c:311)
==324952==    by 0x407397: get_next_line (get_next_line.c:133)
==324952==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324952==    by 0x406F35: main (mandatory.cpp:136)
==324952== 
==324952== 1,194,760 bytes in 238 blocks are definitely lost in loss record 5 of 5
==324952==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324952==    by 0x407494: ft_strjoin (get_next_line_utils.c:57)
==324952==    by 0x407841: f_give_stash (get_next_line_utils.c:293)
==324952==    by 0x4078DC: f_ret (get_next_line_utils.c:311)
==324952==    by 0x407397: get_next_line (get_next_line.c:133)
==324952==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324952==    by 0x406F35: main (mandatory.cpp:136)
==324952== 
==324956== Invalid read of size 1
==324956==    at 0x484FBD4: strcmp (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324956==    by 0x402D0A: gnl(int, char const*) (gnl.cpp:24)
==324956==    by 0x407160: main (mandatory.cpp:141)
==324956==  Address 0x0 is not stack'd, malloc'd or (recently) free'd
==324956== 
==324984== Invalid write of size 1
==324984==    at 0x407868: f_ret (get_next_line_utils.c:304)
==324984==    by 0x407365: get_next_line (get_next_line.c:133)
==324984==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324984==    by 0x404BC6: main (mandatory.cpp:25)
==324984==  Address 0x51d203f is 1 bytes before a block of size 10,000,001 alloc'd
==324984==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324984==    by 0x407308: get_next_line (get_next_line.c:128)
==324984==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324984==    by 0x404BC6: main (mandatory.cpp:25)
==324984== 
==324984== Invalid write of size 1
==324984==    at 0x407868: f_ret (get_next_line_utils.c:304)
==324984==    by 0x407365: get_next_line (get_next_line.c:133)
==324984==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324984==    by 0x404BE8: main (mandatory.cpp:25)
==324984==  Address 0x5b5c03f is 1 bytes before a block of size 10,000,001 alloc'd
==324984==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324984==    by 0x407308: get_next_line (get_next_line.c:128)
==324984==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324984==    by 0x404BE8: main (mandatory.cpp:25)
==324984== 
==324984== 10,000,001 bytes in 1 blocks are possibly lost in loss record 1 of 2
==324984==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324984==    by 0x407308: get_next_line (get_next_line.c:128)
==324984==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324984==    by 0x404BC6: main (mandatory.cpp:25)
==324984== 
==324984== 10,000,001 bytes in 1 blocks are definitely lost in loss record 2 of 2
==324984==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324984==    by 0x407308: get_next_line (get_next_line.c:128)
==324984==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324984==    by 0x404BE8: main (mandatory.cpp:25)
==324984== 
==324991== 1 bytes in 1 blocks are definitely lost in loss record 2 of 4
==324991==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324991==    by 0x4077E2: f_give_stash (get_next_line_utils.c:290)
==324991==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==324991==    by 0x407365: get_next_line (get_next_line.c:133)
==324991==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324991==    by 0x404E63: main (mandatory.cpp:31)
==324991== 
==324991== 10,000,001 bytes in 1 blocks are possibly lost in loss record 3 of 4
==324991==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324991==    by 0x407308: get_next_line (get_next_line.c:128)
==324991==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324991==    by 0x404E63: main (mandatory.cpp:31)
==324991== 
==324991== 10,000,001 bytes in 1 blocks are definitely lost in loss record 4 of 4
==324991==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324991==    by 0x407308: get_next_line (get_next_line.c:128)
==324991==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324991==    by 0x404E6F: main (mandatory.cpp:31)
==324991== 
==324994== 1 bytes in 1 blocks are definitely lost in loss record 1 of 4
==324994==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324994==    by 0x4077E2: f_give_stash (get_next_line_utils.c:290)
==324994==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==324994==    by 0x407365: get_next_line (get_next_line.c:133)
==324994==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324994==    by 0x40508F: main (mandatory.cpp:36)
==324994== 
==324994== 2 bytes in 1 blocks are possibly lost in loss record 2 of 4
==324994==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324994==    by 0x407462: ft_strjoin (get_next_line_utils.c:57)
==324994==    by 0x40780F: f_give_stash (get_next_line_utils.c:293)
==324994==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==324994==    by 0x407365: get_next_line (get_next_line.c:133)
==324994==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324994==    by 0x40508F: main (mandatory.cpp:36)
==324994== 
==324994== 10,000,001 bytes in 1 blocks are possibly lost in loss record 3 of 4
==324994==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324994==    by 0x407308: get_next_line (get_next_line.c:128)
==324994==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324994==    by 0x40508F: main (mandatory.cpp:36)
==324994== 
==324994== 10,000,001 bytes in 1 blocks are definitely lost in loss record 4 of 4
==324994==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==324994==    by 0x407308: get_next_line (get_next_line.c:128)
==324994==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==324994==    by 0x40509B: main (mandatory.cpp:36)
==324994== 
==325000== Invalid write of size 1
==325000==    at 0x4077AA: f_ret_zero (get_next_line_utils.c:280)
==325000==    by 0x407895: f_ret (get_next_line_utils.c:308)
==325000==    by 0x407365: get_next_line (get_next_line.c:133)
==325000==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==325000==    by 0x4052BB: main (mandatory.cpp:41)
==325000==  Address 0x4de5970 is 0 bytes inside a block of size 42 free'd
==325000==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==325000==    by 0x40772A: ft_strdup2 (get_next_line_utils.c:229)
==325000==    by 0x40779E: f_ret_zero (get_next_line_utils.c:279)
==325000==    by 0x407895: f_ret (get_next_line_utils.c:308)
==325000==    by 0x407365: get_next_line (get_next_line.c:133)
==325000==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==325000==    by 0x4052BB: main (mandatory.cpp:41)
==325000==  Block was alloc'd at
==325000==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==325000==    by 0x407462: ft_strjoin (get_next_line_utils.c:57)
==325000==    by 0x40780F: f_give_stash (get_next_line_utils.c:293)
==325000==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==325000==    by 0x407365: get_next_line (get_next_line.c:133)
==325000==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==325000==    by 0x4052BB: main (mandatory.cpp:41)
==325000== 
==325000== Invalid read of size 1
==325000==    at 0x4073BC: ft_strchr (get_next_line_utils.c:25)
==325000==    by 0x407330: get_next_line (get_next_line.c:131)
==325000==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==325000==    by 0x4052C7: main (mandatory.cpp:41)
==325000==  Address 0x4de5970 is 0 bytes inside a block of size 42 free'd
==325000==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==325000==    by 0x40772A: ft_strdup2 (get_next_line_utils.c:229)
==325000==    by 0x40779E: f_ret_zero (get_next_line_utils.c:279)
==325000==    by 0x407895: f_ret (get_next_line_utils.c:308)
==325000==    by 0x407365: get_next_line (get_next_line.c:133)
==325000==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==325000==    by 0x4052BB: main (mandatory.cpp:41)
==325000==  Block was alloc'd at
==325000==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==325000==    by 0x407462: ft_strjoin (get_next_line_utils.c:57)
==325000==    by 0x40780F: f_give_stash (get_next_line_utils.c:293)
==325000==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==325000==    by 0x407365: get_next_line (get_next_line.c:133)
==325000==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==325000==    by 0x4052BB: main (mandatory.cpp:41)
==325000== 
==325000== Invalid read of size 1
==325000==    at 0x407750: f_ret_zero (get_next_line_utils.c:275)
==325000==    by 0x407895: f_ret (get_next_line_utils.c:308)
==325000==    by 0x407365: get_next_line (get_next_line.c:133)
==325000==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==325000==    by 0x4052C7: main (mandatory.cpp:41)
==325000==  Address 0x4de5970 is 0 bytes inside a block of size 42 free'd
==325000==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==325000==    by 0x40772A: ft_strdup2 (get_next_line_utils.c:229)
==325000==    by 0x40779E: f_ret_zero (get_next_line_utils.c:279)
==325000==    by 0x407895: f_ret (get_next_line_utils.c:308)
==325000==    by 0x407365: get_next_line (get_next_line.c:133)
==325000==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==325000==    by 0x4052BB: main (mandatory.cpp:41)
==325000==  Block was alloc'd at
==325000==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==325000==    by 0x407462: ft_strjoin (get_next_line_utils.c:57)
==325000==    by 0x40780F: f_give_stash (get_next_line_utils.c:293)
==325000==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==325000==    by 0x407365: get_next_line (get_next_line.c:133)
==325000==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==325000==    by 0x4052BB: main (mandatory.cpp:41)
==325000== 
==325000== 1 bytes in 1 blocks are definitely lost in loss record 1 of 3
==325000==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==325000==    by 0x4077E2: f_give_stash (get_next_line_utils.c:290)
==325000==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==325000==    by 0x407365: get_next_line (get_next_line.c:133)
==325000==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==325000==    by 0x4052BB: main (mandatory.cpp:41)
==325000== 
==325000== 10,000,001 bytes in 1 blocks are possibly lost in loss record 2 of 3
==325000==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==325000==    by 0x407308: get_next_line (get_next_line.c:128)
==325000==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==325000==    by 0x4052BB: main (mandatory.cpp:41)
==325000== 
==325000== 10,000,001 bytes in 1 blocks are definitely lost in loss record 3 of 3
==325000==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==325000==    by 0x407308: get_next_line (get_next_line.c:128)
==325000==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==325000==    by 0x4052C7: main (mandatory.cpp:41)
==325000== 
==325004== Invalid free() / delete / delete[] / realloc()
==325004==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==325004==    by 0x40772A: ft_strdup2 (get_next_line_utils.c:229)
==325004==    by 0x40779E: f_ret_zero (get_next_line_utils.c:279)
==325004==    by 0x407895: f_ret (get_next_line_utils.c:308)
==325004==    by 0x407365: get_next_line (get_next_line.c:133)
==325004==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==325004==    by 0x4054F9: main (mandatory.cpp:46)
==325004==  Address 0x4de5ca9 is 41 bytes inside a block of size 43 alloc'd
==325004==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==325004==    by 0x407462: ft_strjoin (get_next_line_utils.c:57)
==325004==    by 0x40780F: f_give_stash (get_next_line_utils.c:293)
==325004==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==325004==    by 0x407365: get_next_line (get_next_line.c:133)
==325004==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==325004==    by 0x4054E7: main (mandatory.cpp:46)
==325004== 
==325004== 1 bytes in 1 blocks are definitely lost in loss record 1 of 5
==325004==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==325004==    by 0x4077E2: f_give_stash (get_next_line_utils.c:290)
==325004==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==325004==    by 0x407365: get_next_line (get_next_line.c:133)
==325004==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==325004==    by 0x4054E7: main (mandatory.cpp:46)
==325004== 
==325004== 43 bytes in 1 blocks are possibly lost in loss record 2 of 5
==325004==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==325004==    by 0x407462: ft_strjoin (get_next_line_utils.c:57)
==325004==    by 0x40780F: f_give_stash (get_next_line_utils.c:293)
==325004==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==325004==    by 0x407365: get_next_line (get_next_line.c:133)
==325004==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==325004==    by 0x4054E7: main (mandatory.cpp:46)
==325004== 
==325004== 10,000,001 bytes in 1 blocks are possibly lost in loss record 3 of 5
==325004==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==325004==    by 0x407308: get_next_line (get_next_line.c:128)
==325004==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==325004==    by 0x4054E7: main (mandatory.cpp:46)
==325004== 
==325004== 10,000,001 bytes in 1 blocks are possibly lost in loss record 4 of 5
==325004==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==325004==    by 0x407308: get_next_line (get_next_line.c:128)
==325004==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==325004==    by 0x405505: main (mandatory.cpp:46)
==325004== 
==325004== 10,000,001 bytes in 1 blocks are definitely lost in loss record 5 of 5
==325004==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==325004==    by 0x407308: get_next_line (get_next_line.c:128)
==325004==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==325004==    by 0x4054F9: main (mandatory.cpp:46)
==325004== 
==325008== Invalid write of size 1
==325008==    at 0x4077AA: f_ret_zero (get_next_line_utils.c:280)
==325008==    by 0x407895: f_ret (get_next_line_utils.c:308)
==325008==    by 0x407365: get_next_line (get_next_line.c:133)
==325008==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==325008==    by 0x405725: main (mandatory.cpp:52)
==325008==  Address 0x4de5f90 is 0 bytes inside a block of size 43 free'd
==325008==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==325008==    by 0x40772A: ft_strdup2 (get_next_line_utils.c:229)
==325008==    by 0x40779E: f_ret_zero (get_next_line_utils.c:279)
==325008==    by 0x407895: f_ret (get_next_line_utils.c:308)
==325008==    by 0x407365: get_next_line (get_next_line.c:133)
==325008==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==325008==    by 0x405725: main (mandatory.cpp:52)
==325008==  Block was alloc'd at
==325008==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==325008==    by 0x407462: ft_strjoin (get_next_line_utils.c:57)
==325008==    by 0x40780F: f_give_stash (get_next_line_utils.c:293)
==325008==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==325008==    by 0x407365: get_next_line (get_next_line.c:133)
==325008==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==325008==    by 0x405725: main (mandatory.cpp:52)
==325008== 
==325008== Invalid read of size 1
==325008==    at 0x4073BC: ft_strchr (get_next_line_utils.c:25)
==325008==    by 0x407330: get_next_line (get_next_line.c:131)
==325008==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==325008==    by 0x405731: main (mandatory.cpp:52)
==325008==  Address 0x4de5f90 is 0 bytes inside a block of size 43 free'd
==325008==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==325008==    by 0x40772A: ft_strdup2 (get_next_line_utils.c:229)
==325008==    by 0x40779E: f_ret_zero (get_next_line_utils.c:279)
==325008==    by 0x407895: f_ret (get_next_line_utils.c:308)
==325008==    by 0x407365: get_next_line (get_next_line.c:133)
==325008==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==325008==    by 0x405725: main (mandatory.cpp:52)
==325008==  Block was alloc'd at
==325008==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==325008==    by 0x407462: ft_strjoin (get_next_line_utils.c:57)
==325008==    by 0x40780F: f_give_stash (get_next_line_utils.c:293)
==325008==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==325008==    by 0x407365: get_next_line (get_next_line.c:133)
==325008==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==325008==    by 0x405725: main (mandatory.cpp:52)
==325008== 
==325008== Invalid read of size 1
==325008==    at 0x407750: f_ret_zero (get_next_line_utils.c:275)
==325008==    by 0x407895: f_ret (get_next_line_utils.c:308)
==325008==    by 0x407365: get_next_line (get_next_line.c:133)
==325008==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==325008==    by 0x405731: main (mandatory.cpp:52)
==325008==  Address 0x4de5f90 is 0 bytes inside a block of size 43 free'd
==325008==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==325008==    by 0x40772A: ft_strdup2 (get_next_line_utils.c:229)
==325008==    by 0x40779E: f_ret_zero (get_next_line_utils.c:279)
==325008==    by 0x407895: f_ret (get_next_line_utils.c:308)
==325008==    by 0x407365: get_next_line (get_next_line.c:133)
==325008==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==325008==    by 0x405725: main (mandatory.cpp:52)
==325008==  Block was alloc'd at
==325008==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==325008==    by 0x407462: ft_strjoin (get_next_line_utils.c:57)
==325008==    by 0x40780F: f_give_stash (get_next_line_utils.c:293)
==325008==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==325008==    by 0x407365: get_next_line (get_next_line.c:133)
==325008==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==325008==    by 0x405725: main (mandatory.cpp:52)
==325008== 
==325008== 1 bytes in 1 blocks are definitely lost in loss record 1 of 3
==325008==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==325008==    by 0x4077E2: f_give_stash (get_next_line_utils.c:290)
==325008==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==325008==    by 0x407365: get_next_line (get_next_line.c:133)
==325008==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==325008==    by 0x405725: main (mandatory.cpp:52)
==325008== 
==325008== 10,000,001 bytes in 1 blocks are possibly lost in loss record 2 of 3
==325008==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==325008==    by 0x407308: get_next_line (get_next_line.c:128)
==325008==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==325008==    by 0x405725: main (mandatory.cpp:52)
==325008== 
==325008== 10,000,001 bytes in 1 blocks are definitely lost in loss record 3 of 3
==325008==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==325008==    by 0x407308: get_next_line (get_next_line.c:128)
==325008==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==325008==    by 0x405731: main (mandatory.cpp:52)
==325008== 
==325011== Invalid free() / delete / delete[] / realloc()
==325011==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==325011==    by 0x40772A: ft_strdup2 (get_next_line_utils.c:229)
==325011==    by 0x40779E: f_ret_zero (get_next_line_utils.c:279)
==325011==    by 0x407895: f_ret (get_next_line_utils.c:308)
==325011==    by 0x407365: get_next_line (get_next_line.c:133)
==325011==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==325011==    by 0x405963: main (mandatory.cpp:57)
==325011==  Address 0x4de62ca is 42 bytes inside a block of size 44 alloc'd
==325011==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==325011==    by 0x407462: ft_strjoin (get_next_line_utils.c:57)
==325011==    by 0x40780F: f_give_stash (get_next_line_utils.c:293)
==325011==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==325011==    by 0x407365: get_next_line (get_next_line.c:133)
==325011==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==325011==    by 0x405951: main (mandatory.cpp:57)
==325011== 
==325011== 1 bytes in 1 blocks are definitely lost in loss record 1 of 5
==325011==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==325011==    by 0x4077E2: f_give_stash (get_next_line_utils.c:290)
==325011==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==325011==    by 0x407365: get_next_line (get_next_line.c:133)
==325011==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==325011==    by 0x405951: main (mandatory.cpp:57)
==325011== 
==325011== 44 bytes in 1 blocks are possibly lost in loss record 2 of 5
==325011==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==325011==    by 0x407462: ft_strjoin (get_next_line_utils.c:57)
==325011==    by 0x40780F: f_give_stash (get_next_line_utils.c:293)
==325011==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==325011==    by 0x407365: get_next_line (get_next_line.c:133)
==325011==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==325011==    by 0x405951: main (mandatory.cpp:57)
==325011== 
==325011== 10,000,001 bytes in 1 blocks are possibly lost in loss record 3 of 5
==325011==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==325011==    by 0x407308: get_next_line (get_next_line.c:128)
==325011==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==325011==    by 0x405951: main (mandatory.cpp:57)
==325011== 
==325011== 10,000,001 bytes in 1 blocks are possibly lost in loss record 4 of 5
==325011==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==325011==    by 0x407308: get_next_line (get_next_line.c:128)
==325011==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==325011==    by 0x40596F: main (mandatory.cpp:57)
==325011== 
==325011== 10,000,001 bytes in 1 blocks are definitely lost in loss record 5 of 5
==325011==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==325011==    by 0x407308: get_next_line (get_next_line.c:128)
==325011==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==325011==    by 0x405963: main (mandatory.cpp:57)
==325011== 
==325012== Invalid write of size 1
==325012==    at 0x4077AA: f_ret_zero (get_next_line_utils.c:280)
==325012==    by 0x407895: f_ret (get_next_line_utils.c:308)
==325012==    by 0x407365: get_next_line (get_next_line.c:133)
==325012==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==325012==    by 0x405B99: main (mandatory.cpp:68)
==325012==  Address 0x4de65b0 is 0 bytes inside a block of size 44 free'd
==325012==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==325012==    by 0x40772A: ft_strdup2 (get_next_line_utils.c:229)
==325012==    by 0x40779E: f_ret_zero (get_next_line_utils.c:279)
==325012==    by 0x407895: f_ret (get_next_line_utils.c:308)
==325012==    by 0x407365: get_next_line (get_next_line.c:133)
==325012==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==325012==    by 0x405B99: main (mandatory.cpp:68)
==325012==  Block was alloc'd at
==325012==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==325012==    by 0x407462: ft_strjoin (get_next_line_utils.c:57)
==325012==    by 0x40780F: f_give_stash (get_next_line_utils.c:293)
==325012==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==325012==    by 0x407365: get_next_line (get_next_line.c:133)
==325012==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==325012==    by 0x405B99: main (mandatory.cpp:68)
==325012== 
==325012== Invalid read of size 1
==325012==    at 0x4073BC: ft_strchr (get_next_line_utils.c:25)
==325012==    by 0x407330: get_next_line (get_next_line.c:131)
==325012==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==325012==    by 0x405BA5: main (mandatory.cpp:68)
==325012==  Address 0x4de65b0 is 0 bytes inside a block of size 44 free'd
==325012==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==325012==    by 0x40772A: ft_strdup2 (get_next_line_utils.c:229)
==325012==    by 0x40779E: f_ret_zero (get_next_line_utils.c:279)
==325012==    by 0x407895: f_ret (get_next_line_utils.c:308)
==325012==    by 0x407365: get_next_line (get_next_line.c:133)
==325012==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==325012==    by 0x405B99: main (mandatory.cpp:68)
==325012==  Block was alloc'd at
==325012==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==325012==    by 0x407462: ft_strjoin (get_next_line_utils.c:57)
==325012==    by 0x40780F: f_give_stash (get_next_line_utils.c:293)
==325012==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==325012==    by 0x407365: get_next_line (get_next_line.c:133)
==325012==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==325012==    by 0x405B99: main (mandatory.cpp:68)
==325012== 
==325012== Invalid read of size 1
==325012==    at 0x407750: f_ret_zero (get_next_line_utils.c:275)
==325012==    by 0x407895: f_ret (get_next_line_utils.c:308)
==325012==    by 0x407365: get_next_line (get_next_line.c:133)
==325012==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==325012==    by 0x405BA5: main (mandatory.cpp:68)
==325012==  Address 0x4de65b0 is 0 bytes inside a block of size 44 free'd
==325012==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==325012==    by 0x40772A: ft_strdup2 (get_next_line_utils.c:229)
==325012==    by 0x40779E: f_ret_zero (get_next_line_utils.c:279)
==325012==    by 0x407895: f_ret (get_next_line_utils.c:308)
==325012==    by 0x407365: get_next_line (get_next_line.c:133)
==325012==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==325012==    by 0x405B99: main (mandatory.cpp:68)
==325012==  Block was alloc'd at
==325012==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==325012==    by 0x407462: ft_strjoin (get_next_line_utils.c:57)
==325012==    by 0x40780F: f_give_stash (get_next_line_utils.c:293)
==325012==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==325012==    by 0x407365: get_next_line (get_next_line.c:133)
==325012==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==325012==    by 0x405B99: main (mandatory.cpp:68)
==325012== 
==325012== 1 bytes in 1 blocks are definitely lost in loss record 1 of 3
==325012==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==325012==    by 0x4077E2: f_give_stash (get_next_line_utils.c:290)
==325012==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==325012==    by 0x407365: get_next_line (get_next_line.c:133)
==325012==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==325012==    by 0x405B99: main (mandatory.cpp:68)
==325012== 
==325012== 10,000,001 bytes in 1 blocks are possibly lost in loss record 2 of 3
==325012==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==325012==    by 0x407308: get_next_line (get_next_line.c:128)
==325012==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==325012==    by 0x405B99: main (mandatory.cpp:68)
==325012== 
==325012== 10,000,001 bytes in 1 blocks are definitely lost in loss record 3 of 3
==325012==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==325012==    by 0x407308: get_next_line (get_next_line.c:128)
==325012==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==325012==    by 0x405BA5: main (mandatory.cpp:68)
==325012== 
==325015== Invalid free() / delete / delete[] / realloc()
==325015==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==325015==    by 0x40772A: ft_strdup2 (get_next_line_utils.c:229)
==325015==    by 0x40779E: f_ret_zero (get_next_line_utils.c:279)
==325015==    by 0x407895: f_ret (get_next_line_utils.c:308)
==325015==    by 0x407365: get_next_line (get_next_line.c:133)
==325015==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==325015==    by 0x405DD7: main (mandatory.cpp:73)
==325015==  Address 0x4de68eb is 43 bytes inside a block of size 45 alloc'd
==325015==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==325015==    by 0x407462: ft_strjoin (get_next_line_utils.c:57)
==325015==    by 0x40780F: f_give_stash (get_next_line_utils.c:293)
==325015==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==325015==    by 0x407365: get_next_line (get_next_line.c:133)
==325015==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==325015==    by 0x405DC5: main (mandatory.cpp:73)
==325015== 
==325015== 1 bytes in 1 blocks are definitely lost in loss record 1 of 5
==325015==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==325015==    by 0x4077E2: f_give_stash (get_next_line_utils.c:290)
==325015==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==325015==    by 0x407365: get_next_line (get_next_line.c:133)
==325015==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==325015==    by 0x405DC5: main (mandatory.cpp:73)
==325015== 
==325015== 45 bytes in 1 blocks are possibly lost in loss record 2 of 5
==325015==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==325015==    by 0x407462: ft_strjoin (get_next_line_utils.c:57)
==325015==    by 0x40780F: f_give_stash (get_next_line_utils.c:293)
==325015==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==325015==    by 0x407365: get_next_line (get_next_line.c:133)
==325015==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==325015==    by 0x405DC5: main (mandatory.cpp:73)
==325015== 
==325015== 10,000,001 bytes in 1 blocks are possibly lost in loss record 3 of 5
==325015==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==325015==    by 0x407308: get_next_line (get_next_line.c:128)
==325015==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==325015==    by 0x405DC5: main (mandatory.cpp:73)
==325015== 
==325015== 10,000,001 bytes in 1 blocks are possibly lost in loss record 4 of 5
==325015==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==325015==    by 0x407308: get_next_line (get_next_line.c:128)
==325015==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==325015==    by 0x405DE3: main (mandatory.cpp:73)
==325015== 
==325015== 10,000,001 bytes in 1 blocks are definitely lost in loss record 5 of 5
==325015==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==325015==    by 0x407308: get_next_line (get_next_line.c:128)
==325015==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==325015==    by 0x405DD7: main (mandatory.cpp:73)
==325015== 
==325019== 1 bytes in 1 blocks are definitely lost in loss record 1 of 8
==325019==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==325019==    by 0x4077E2: f_give_stash (get_next_line_utils.c:290)
==325019==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==325019==    by 0x407365: get_next_line (get_next_line.c:133)
==325019==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==325019==    by 0x406003: main (mandatory.cpp:79)
==325019== 
==325019== 6 bytes in 1 blocks are possibly lost in loss record 2 of 8
==325019==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==325019==    by 0x407462: ft_strjoin (get_next_line_utils.c:57)
==325019==    by 0x40780F: f_give_stash (get_next_line_utils.c:293)
==325019==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==325019==    by 0x407365: get_next_line (get_next_line.c:133)
==325019==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==325019==    by 0x406003: main (mandatory.cpp:79)
==325019== 
==325019== 10,000,001 bytes in 1 blocks are possibly lost in loss record 3 of 8
==325019==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==325019==    by 0x407308: get_next_line (get_next_line.c:128)
==325019==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==325019==    by 0x406003: main (mandatory.cpp:79)
==325019== 
==325019== 10,000,001 bytes in 1 blocks are possibly lost in loss record 4 of 8
==325019==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==325019==    by 0x407308: get_next_line (get_next_line.c:128)
==325019==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==325019==    by 0x406027: main (mandatory.cpp:79)
==325019== 
==325019== 10,000,001 bytes in 1 blocks are possibly lost in loss record 5 of 8
==325019==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==325019==    by 0x407308: get_next_line (get_next_line.c:128)
==325019==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==325019==    by 0x406057: main (mandatory.cpp:79)
==325019== 
==325019== 10,000,001 bytes in 1 blocks are definitely lost in loss record 6 of 8
==325019==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==325019==    by 0x407308: get_next_line (get_next_line.c:128)
==325019==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==325019==    by 0x406015: main (mandatory.cpp:79)
==325019== 
==325019== 10,000,001 bytes in 1 blocks are definitely lost in loss record 7 of 8
==325019==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==325019==    by 0x407308: get_next_line (get_next_line.c:128)
==325019==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==325019==    by 0x406039: main (mandatory.cpp:79)
==325019== 
==325019== 10,000,001 bytes in 1 blocks are definitely lost in loss record 8 of 8
==325019==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==325019==    by 0x407308: get_next_line (get_next_line.c:128)
==325019==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==325019==    by 0x40604B: main (mandatory.cpp:79)
==325019== 
==325023== Invalid free() / delete / delete[] / realloc()
==325023==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==325023==    by 0x40772A: ft_strdup2 (get_next_line_utils.c:229)
==325023==    by 0x40779E: f_ret_zero (get_next_line_utils.c:279)
==325023==    by 0x407895: f_ret (get_next_line_utils.c:308)
==325023==    by 0x407365: get_next_line (get_next_line.c:133)
==325023==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==325023==    by 0x4062BF: main (mandatory.cpp:88)
==325023==  Address 0x4de6fac is 172 bytes inside a block of size 214 alloc'd
==325023==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==325023==    by 0x407462: ft_strjoin (get_next_line_utils.c:57)
==325023==    by 0x40780F: f_give_stash (get_next_line_utils.c:293)
==325023==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==325023==    by 0x407365: get_next_line (get_next_line.c:133)
==325023==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==325023==    by 0x406277: main (mandatory.cpp:88)
==325023== 
==325023== 1 bytes in 1 blocks are definitely lost in loss record 1 of 8
==325023==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==325023==    by 0x4077E2: f_give_stash (get_next_line_utils.c:290)
==325023==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==325023==    by 0x407365: get_next_line (get_next_line.c:133)
==325023==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==325023==    by 0x406277: main (mandatory.cpp:88)
==325023== 
==325023== 214 bytes in 1 blocks are possibly lost in loss record 2 of 8
==325023==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==325023==    by 0x407462: ft_strjoin (get_next_line_utils.c:57)
==325023==    by 0x40780F: f_give_stash (get_next_line_utils.c:293)
==325023==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==325023==    by 0x407365: get_next_line (get_next_line.c:133)
==325023==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==325023==    by 0x406277: main (mandatory.cpp:88)
==325023== 
==325023== 10,000,001 bytes in 1 blocks are possibly lost in loss record 3 of 8
==325023==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==325023==    by 0x407308: get_next_line (get_next_line.c:128)
==325023==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==325023==    by 0x406277: main (mandatory.cpp:88)
==325023== 
==325023== 10,000,001 bytes in 1 blocks are possibly lost in loss record 4 of 8
==325023==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==325023==    by 0x407308: get_next_line (get_next_line.c:128)
==325023==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==325023==    by 0x40629B: main (mandatory.cpp:88)
==325023== 
==325023== 10,000,001 bytes in 1 blocks are possibly lost in loss record 5 of 8
==325023==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==325023==    by 0x407308: get_next_line (get_next_line.c:128)
==325023==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==325023==    by 0x4062CB: main (mandatory.cpp:88)
==325023== 
==325023== 10,000,001 bytes in 1 blocks are definitely lost in loss record 6 of 8
==325023==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==325023==    by 0x407308: get_next_line (get_next_line.c:128)
==325023==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==325023==    by 0x406289: main (mandatory.cpp:88)
==325023== 
==325023== 10,000,001 bytes in 1 blocks are definitely lost in loss record 7 of 8
==325023==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==325023==    by 0x407308: get_next_line (get_next_line.c:128)
==325023==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==325023==    by 0x4062AD: main (mandatory.cpp:88)
==325023== 
==325023== 10,000,001 bytes in 1 blocks are definitely lost in loss record 8 of 8
==325023==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==325023==    by 0x407308: get_next_line (get_next_line.c:128)
==325023==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==325023==    by 0x4062BF: main (mandatory.cpp:88)
==325023== 
==325027== 1 bytes in 1 blocks are definitely lost in loss record 1 of 8
==325027==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==325027==    by 0x4077E2: f_give_stash (get_next_line_utils.c:290)
==325027==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==325027==    by 0x407365: get_next_line (get_next_line.c:133)
==325027==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==325027==    by 0x4064EB: main (mandatory.cpp:97)
==325027== 
==325027== 210 bytes in 1 blocks are possibly lost in loss record 2 of 8
==325027==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==325027==    by 0x407462: ft_strjoin (get_next_line_utils.c:57)
==325027==    by 0x40780F: f_give_stash (get_next_line_utils.c:293)
==325027==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==325027==    by 0x407365: get_next_line (get_next_line.c:133)
==325027==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==325027==    by 0x4064EB: main (mandatory.cpp:97)
==325027== 
==325027== 10,000,001 bytes in 1 blocks are possibly lost in loss record 3 of 8
==325027==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==325027==    by 0x407308: get_next_line (get_next_line.c:128)
==325027==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==325027==    by 0x4064EB: main (mandatory.cpp:97)
==325027== 
==325027== 10,000,001 bytes in 1 blocks are possibly lost in loss record 4 of 8
==325027==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==325027==    by 0x407308: get_next_line (get_next_line.c:128)
==325027==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==325027==    by 0x40650F: main (mandatory.cpp:97)
==325027== 
==325027== 10,000,001 bytes in 1 blocks are possibly lost in loss record 5 of 8
==325027==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==325027==    by 0x407308: get_next_line (get_next_line.c:128)
==325027==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==325027==    by 0x40653F: main (mandatory.cpp:97)
==325027== 
==325027== 10,000,001 bytes in 1 blocks are definitely lost in loss record 6 of 8
==325027==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==325027==    by 0x407308: get_next_line (get_next_line.c:128)
==325027==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==325027==    by 0x4064FD: main (mandatory.cpp:97)
==325027== 
==325027== 10,000,001 bytes in 1 blocks are definitely lost in loss record 7 of 8
==325027==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==325027==    by 0x407308: get_next_line (get_next_line.c:128)
==325027==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==325027==    by 0x406521: main (mandatory.cpp:97)
==325027== 
==325027== 10,000,001 bytes in 1 blocks are definitely lost in loss record 8 of 8
==325027==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==325027==    by 0x407308: get_next_line (get_next_line.c:128)
==325027==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==325027==    by 0x406533: main (mandatory.cpp:97)
==325027== 
==325028== Invalid free() / delete / delete[] / realloc()
==325028==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==325028==    by 0x40772A: ft_strdup2 (get_next_line_utils.c:229)
==325028==    by 0x40779E: f_ret_zero (get_next_line_utils.c:279)
==325028==    by 0x407895: f_ret (get_next_line_utils.c:308)
==325028==    by 0x407365: get_next_line (get_next_line.c:133)
==325028==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==325028==    by 0x4067EF: main (mandatory.cpp:106)
==325028==  Address 0x4de7610 is 176 bytes inside a block of size 218 alloc'd
==325028==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==325028==    by 0x407462: ft_strjoin (get_next_line_utils.c:57)
==325028==    by 0x40780F: f_give_stash (get_next_line_utils.c:293)
==325028==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==325028==    by 0x407365: get_next_line (get_next_line.c:133)
==325028==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==325028==    by 0x40675F: main (mandatory.cpp:106)
==325028== 
==325028== 1 bytes in 1 blocks are definitely lost in loss record 1 of 12
==325028==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==325028==    by 0x4077E2: f_give_stash (get_next_line_utils.c:290)
==325028==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==325028==    by 0x407365: get_next_line (get_next_line.c:133)
==325028==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==325028==    by 0x40675F: main (mandatory.cpp:106)
==325028== 
==325028== 218 bytes in 1 blocks are possibly lost in loss record 2 of 12
==325028==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==325028==    by 0x407462: ft_strjoin (get_next_line_utils.c:57)
==325028==    by 0x40780F: f_give_stash (get_next_line_utils.c:293)
==325028==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==325028==    by 0x407365: get_next_line (get_next_line.c:133)
==325028==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==325028==    by 0x40675F: main (mandatory.cpp:106)
==325028== 
==325028== 10,000,001 bytes in 1 blocks are possibly lost in loss record 3 of 12
==325028==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==325028==    by 0x407308: get_next_line (get_next_line.c:128)
==325028==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==325028==    by 0x40675F: main (mandatory.cpp:106)
==325028== 
==325028== 10,000,001 bytes in 1 blocks are possibly lost in loss record 4 of 12
==325028==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==325028==    by 0x407308: get_next_line (get_next_line.c:128)
==325028==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==325028==    by 0x406783: main (mandatory.cpp:106)
==325028== 
==325028== 10,000,001 bytes in 1 blocks are possibly lost in loss record 5 of 12
==325028==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==325028==    by 0x407308: get_next_line (get_next_line.c:128)
==325028==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==325028==    by 0x4067B9: main (mandatory.cpp:106)
==325028== 
==325028== 10,000,001 bytes in 1 blocks are possibly lost in loss record 6 of 12
==325028==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==325028==    by 0x407308: get_next_line (get_next_line.c:128)
==325028==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==325028==    by 0x4067CB: main (mandatory.cpp:106)
==325028== 
==325028== 10,000,001 bytes in 1 blocks are possibly lost in loss record 7 of 12
==325028==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==325028==    by 0x407308: get_next_line (get_next_line.c:128)
==325028==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==325028==    by 0x4067DD: main (mandatory.cpp:106)
==325028== 
==325028== 10,000,001 bytes in 1 blocks are possibly lost in loss record 8 of 12
==325028==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==325028==    by 0x407308: get_next_line (get_next_line.c:128)
==325028==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==325028==    by 0x4067FB: main (mandatory.cpp:106)
==325028== 
==325028== 10,000,001 bytes in 1 blocks are definitely lost in loss record 9 of 12
==325028==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==325028==    by 0x407308: get_next_line (get_next_line.c:128)
==325028==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==325028==    by 0x406771: main (mandatory.cpp:106)
==325028== 
==325028== 10,000,001 bytes in 1 blocks are definitely lost in loss record 10 of 12
==325028==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==325028==    by 0x407308: get_next_line (get_next_line.c:128)
==325028==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==325028==    by 0x406795: main (mandatory.cpp:106)
==325028== 
==325028== 10,000,001 bytes in 1 blocks are definitely lost in loss record 11 of 12
==325028==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==325028==    by 0x407308: get_next_line (get_next_line.c:128)
==325028==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==325028==    by 0x4067A7: main (mandatory.cpp:106)
==325028== 
==325028== 10,000,001 bytes in 1 blocks are definitely lost in loss record 12 of 12
==325028==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==325028==    by 0x407308: get_next_line (get_next_line.c:128)
==325028==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==325028==    by 0x4067EF: main (mandatory.cpp:106)
==325028== 
==325029== 1 bytes in 1 blocks are definitely lost in loss record 1 of 12
==325029==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==325029==    by 0x4077E2: f_give_stash (get_next_line_utils.c:290)
==325029==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==325029==    by 0x407365: get_next_line (get_next_line.c:133)
==325029==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==325029==    by 0x406A1B: main (mandatory.cpp:119)
==325029== 
==325029== 219 bytes in 1 blocks are possibly lost in loss record 2 of 12
==325029==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==325029==    by 0x407462: ft_strjoin (get_next_line_utils.c:57)
==325029==    by 0x40780F: f_give_stash (get_next_line_utils.c:293)
==325029==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==325029==    by 0x407365: get_next_line (get_next_line.c:133)
==325029==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==325029==    by 0x406A1B: main (mandatory.cpp:119)
==325029== 
==325029== 10,000,001 bytes in 1 blocks are possibly lost in loss record 3 of 12
==325029==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==325029==    by 0x407308: get_next_line (get_next_line.c:128)
==325029==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==325029==    by 0x406A1B: main (mandatory.cpp:119)
==325029== 
==325029== 10,000,001 bytes in 1 blocks are possibly lost in loss record 4 of 12
==325029==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==325029==    by 0x407308: get_next_line (get_next_line.c:128)
==325029==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==325029==    by 0x406A3F: main (mandatory.cpp:119)
==325029== 
==325029== 10,000,001 bytes in 1 blocks are possibly lost in loss record 5 of 12
==325029==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==325029==    by 0x407308: get_next_line (get_next_line.c:128)
==325029==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==325029==    by 0x406A75: main (mandatory.cpp:119)
==325029== 
==325029== 10,000,001 bytes in 1 blocks are possibly lost in loss record 6 of 12
==325029==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==325029==    by 0x407308: get_next_line (get_next_line.c:128)
==325029==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==325029==    by 0x406A87: main (mandatory.cpp:119)
==325029== 
==325029== 10,000,001 bytes in 1 blocks are possibly lost in loss record 7 of 12
==325029==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==325029==    by 0x407308: get_next_line (get_next_line.c:128)
==325029==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==325029==    by 0x406A99: main (mandatory.cpp:119)
==325029== 
==325029== 10,000,001 bytes in 1 blocks are possibly lost in loss record 8 of 12
==325029==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==325029==    by 0x407308: get_next_line (get_next_line.c:128)
==325029==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==325029==    by 0x406AB7: main (mandatory.cpp:119)
==325029== 
==325029== 10,000,001 bytes in 1 blocks are definitely lost in loss record 9 of 12
==325029==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==325029==    by 0x407308: get_next_line (get_next_line.c:128)
==325029==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==325029==    by 0x406A2D: main (mandatory.cpp:119)
==325029== 
==325029== 10,000,001 bytes in 1 blocks are definitely lost in loss record 10 of 12
==325029==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==325029==    by 0x407308: get_next_line (get_next_line.c:128)
==325029==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==325029==    by 0x406A51: main (mandatory.cpp:119)
==325029== 
==325029== 10,000,001 bytes in 1 blocks are definitely lost in loss record 11 of 12
==325029==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==325029==    by 0x407308: get_next_line (get_next_line.c:128)
==325029==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==325029==    by 0x406A63: main (mandatory.cpp:119)
==325029== 
==325029== 10,000,001 bytes in 1 blocks are definitely lost in loss record 12 of 12
==325029==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==325029==    by 0x407308: get_next_line (get_next_line.c:128)
==325029==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==325029==    by 0x406AAB: main (mandatory.cpp:119)
==325029== 
==325032== Invalid write of size 1
==325032==    at 0x4077AA: f_ret_zero (get_next_line_utils.c:280)
==325032==    by 0x407895: f_ret (get_next_line_utils.c:308)
==325032==    by 0x407365: get_next_line (get_next_line.c:133)
==325032==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==325032==    by 0x406CD7: main (mandatory.cpp:132)
==325032==  Address 0x4de7ba0 is 0 bytes inside a block of size 10,001 free'd
==325032==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==325032==    by 0x40772A: ft_strdup2 (get_next_line_utils.c:229)
==325032==    by 0x40779E: f_ret_zero (get_next_line_utils.c:279)
==325032==    by 0x407895: f_ret (get_next_line_utils.c:308)
==325032==    by 0x407365: get_next_line (get_next_line.c:133)
==325032==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==325032==    by 0x406CD7: main (mandatory.cpp:132)
==325032==  Block was alloc'd at
==325032==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==325032==    by 0x407462: ft_strjoin (get_next_line_utils.c:57)
==325032==    by 0x40780F: f_give_stash (get_next_line_utils.c:293)
==325032==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==325032==    by 0x407365: get_next_line (get_next_line.c:133)
==325032==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==325032==    by 0x406CD7: main (mandatory.cpp:132)
==325032== 
==325032== Invalid read of size 1
==325032==    at 0x4073BC: ft_strchr (get_next_line_utils.c:25)
==325032==    by 0x407330: get_next_line (get_next_line.c:131)
==325032==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==325032==    by 0x406CE3: main (mandatory.cpp:132)
==325032==  Address 0x4de7ba0 is 0 bytes inside a block of size 10,001 free'd
==325032==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==325032==    by 0x40772A: ft_strdup2 (get_next_line_utils.c:229)
==325032==    by 0x40779E: f_ret_zero (get_next_line_utils.c:279)
==325032==    by 0x407895: f_ret (get_next_line_utils.c:308)
==325032==    by 0x407365: get_next_line (get_next_line.c:133)
==325032==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==325032==    by 0x406CD7: main (mandatory.cpp:132)
==325032==  Block was alloc'd at
==325032==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==325032==    by 0x407462: ft_strjoin (get_next_line_utils.c:57)
==325032==    by 0x40780F: f_give_stash (get_next_line_utils.c:293)
==325032==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==325032==    by 0x407365: get_next_line (get_next_line.c:133)
==325032==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==325032==    by 0x406CD7: main (mandatory.cpp:132)
==325032== 
==325032== Invalid read of size 1
==325032==    at 0x407750: f_ret_zero (get_next_line_utils.c:275)
==325032==    by 0x407895: f_ret (get_next_line_utils.c:308)
==325032==    by 0x407365: get_next_line (get_next_line.c:133)
==325032==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==325032==    by 0x406CE3: main (mandatory.cpp:132)
==325032==  Address 0x4de7ba0 is 0 bytes inside a block of size 10,001 free'd
==325032==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==325032==    by 0x40772A: ft_strdup2 (get_next_line_utils.c:229)
==325032==    by 0x40779E: f_ret_zero (get_next_line_utils.c:279)
==325032==    by 0x407895: f_ret (get_next_line_utils.c:308)
==325032==    by 0x407365: get_next_line (get_next_line.c:133)
==325032==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==325032==    by 0x406CD7: main (mandatory.cpp:132)
==325032==  Block was alloc'd at
==325032==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==325032==    by 0x407462: ft_strjoin (get_next_line_utils.c:57)
==325032==    by 0x40780F: f_give_stash (get_next_line_utils.c:293)
==325032==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==325032==    by 0x407365: get_next_line (get_next_line.c:133)
==325032==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==325032==    by 0x406CD7: main (mandatory.cpp:132)
==325032== 
==325032== 1 bytes in 1 blocks are definitely lost in loss record 1 of 3
==325032==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==325032==    by 0x4077E2: f_give_stash (get_next_line_utils.c:290)
==325032==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==325032==    by 0x407365: get_next_line (get_next_line.c:133)
==325032==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==325032==    by 0x406CD7: main (mandatory.cpp:132)
==325032== 
==325032== 10,000,001 bytes in 1 blocks are possibly lost in loss record 2 of 3
==325032==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==325032==    by 0x407308: get_next_line (get_next_line.c:128)
==325032==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==325032==    by 0x406CD7: main (mandatory.cpp:132)
==325032== 
==325032== 10,000,001 bytes in 1 blocks are definitely lost in loss record 3 of 3
==325032==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==325032==    by 0x407308: get_next_line (get_next_line.c:128)
==325032==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==325032==    by 0x406CE3: main (mandatory.cpp:132)
==325032== 
==325037== 1 bytes in 1 blocks are definitely lost in loss record 1 of 4
==325037==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==325037==    by 0x4077E2: f_give_stash (get_next_line_utils.c:290)
==325037==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==325037==    by 0x407365: get_next_line (get_next_line.c:133)
==325037==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==325037==    by 0x406F03: main (mandatory.cpp:136)
==325037== 
==325037== 10,002 bytes in 1 blocks are possibly lost in loss record 2 of 4
==325037==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==325037==    by 0x407462: ft_strjoin (get_next_line_utils.c:57)
==325037==    by 0x40780F: f_give_stash (get_next_line_utils.c:293)
==325037==    by 0x4078AA: f_ret (get_next_line_utils.c:311)
==325037==    by 0x407365: get_next_line (get_next_line.c:133)
==325037==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==325037==    by 0x406F03: main (mandatory.cpp:136)
==325037== 
==325037== 10,000,001 bytes in 1 blocks are possibly lost in loss record 3 of 4
==325037==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==325037==    by 0x407308: get_next_line (get_next_line.c:128)
==325037==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==325037==    by 0x406F03: main (mandatory.cpp:136)
==325037== 
==325037== 10,000,001 bytes in 1 blocks are definitely lost in loss record 4 of 4
==325037==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==325037==    by 0x407308: get_next_line (get_next_line.c:128)
==325037==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==325037==    by 0x406F0F: main (mandatory.cpp:136)
==325037== 
==325040== Invalid read of size 1
==325040==    at 0x484FBD4: strcmp (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==325040==    by 0x402D0A: gnl(int, char const*) (gnl.cpp:24)
==325040==    by 0x40712E: main (mandatory.cpp:141)
==325040==  Address 0x0 is not stack'd, malloc'd or (recently) free'd
==325040== 
