==177887== Invalid write of size 1
==177887==    at 0x407378: get_next_line (get_next_line.c:48)
==177887==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==177887==    by 0x404BB6: main (mandatory.cpp:25)
==177887==  Address 0x4de429f is 1 bytes before a block of size 2 alloc'd
==177887==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==177887==    by 0x4072EC: get_next_line (get_next_line.c:27)
==177887==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==177887==    by 0x404BB6: main (mandatory.cpp:25)
==177887== 
==177887== Invalid write of size 1
==177887==    at 0x407378: get_next_line (get_next_line.c:48)
==177887==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==177887==    by 0x404BD8: main (mandatory.cpp:25)
==177887==  Address 0x4de42ef is 1 bytes before a block of size 2 alloc'd
==177887==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==177887==    by 0x4072EC: get_next_line (get_next_line.c:27)
==177887==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==177887==    by 0x404BD8: main (mandatory.cpp:25)
==177887== 
==177887== 2 bytes in 1 blocks are definitely lost in loss record 1 of 2
==177887==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==177887==    by 0x4072EC: get_next_line (get_next_line.c:27)
==177887==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==177887==    by 0x404BB6: main (mandatory.cpp:25)
==177887== 
==177887== 2 bytes in 1 blocks are definitely lost in loss record 2 of 2
==177887==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==177887==    by 0x4072EC: get_next_line (get_next_line.c:27)
==177887==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==177887==    by 0x404BD8: main (mandatory.cpp:25)
==177887== 
==177903== Invalid read of size 1
==177903==    at 0x40739C: get_next_line (get_next_line.c:59)
==177903==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==177903==    by 0x404E53: main (mandatory.cpp:31)
==177903==  Address 0x0 is not stack'd, malloc'd or (recently) free'd
==177903== 
==177918== 1 bytes in 1 blocks are definitely lost in loss record 1 of 4
==177918==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==177918==    by 0x40742B: get_next_line (get_next_line.c:82)
==177918==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==177918==    by 0x40507F: main (mandatory.cpp:36)
==177918== 
==177918== 2 bytes in 1 blocks are possibly lost in loss record 2 of 4
==177918==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==177918==    by 0x40758A: ft_strjoin (get_next_line_utils.c:57)
==177918==    by 0x407452: get_next_line (get_next_line.c:85)
==177918==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==177918==    by 0x40507F: main (mandatory.cpp:36)
==177918== 
==177918== 2 bytes in 1 blocks are definitely lost in loss record 3 of 4
==177918==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==177918==    by 0x4072EC: get_next_line (get_next_line.c:27)
==177918==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==177918==    by 0x40507F: main (mandatory.cpp:36)
==177918== 
==177918== 2 bytes in 1 blocks are definitely lost in loss record 4 of 4
==177918==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==177918==    by 0x4072EC: get_next_line (get_next_line.c:27)
==177918==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==177918==    by 0x40508B: main (mandatory.cpp:36)
==177918== 
==177921== Invalid write of size 1
==177921==    at 0x4073F9: get_next_line (get_next_line.c:70)
==177921==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==177921==    by 0x4052AB: main (mandatory.cpp:41)
==177921==  Address 0x4de6840 is 0 bytes inside a block of size 42 free'd
==177921==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==177921==    by 0x407852: ft_strdup2 (get_next_line_utils.c:229)
==177921==    by 0x4073ED: get_next_line (get_next_line.c:69)
==177921==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==177921==    by 0x4052AB: main (mandatory.cpp:41)
==177921==  Block was alloc'd at
==177921==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==177921==    by 0x40758A: ft_strjoin (get_next_line_utils.c:57)
==177921==    by 0x407452: get_next_line (get_next_line.c:85)
==177921==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==177921==    by 0x4052AB: main (mandatory.cpp:41)
==177921== 
==177921== Invalid read of size 1
==177921==    at 0x4074E4: ft_strchr (get_next_line_utils.c:25)
==177921==    by 0x40731D: get_next_line (get_next_line.c:33)
==177921==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==177921==    by 0x4052B7: main (mandatory.cpp:41)
==177921==  Address 0x4de6840 is 0 bytes inside a block of size 42 free'd
==177921==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==177921==    by 0x407852: ft_strdup2 (get_next_line_utils.c:229)
==177921==    by 0x4073ED: get_next_line (get_next_line.c:69)
==177921==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==177921==    by 0x4052AB: main (mandatory.cpp:41)
==177921==  Block was alloc'd at
==177921==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==177921==    by 0x40758A: ft_strjoin (get_next_line_utils.c:57)
==177921==    by 0x407452: get_next_line (get_next_line.c:85)
==177921==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==177921==    by 0x4052AB: main (mandatory.cpp:41)
==177921== 
==177921== Invalid read of size 1
==177921==    at 0x40739C: get_next_line (get_next_line.c:59)
==177921==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==177921==    by 0x4052B7: main (mandatory.cpp:41)
==177921==  Address 0x4de6840 is 0 bytes inside a block of size 42 free'd
==177921==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==177921==    by 0x407852: ft_strdup2 (get_next_line_utils.c:229)
==177921==    by 0x4073ED: get_next_line (get_next_line.c:69)
==177921==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==177921==    by 0x4052AB: main (mandatory.cpp:41)
==177921==  Block was alloc'd at
==177921==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==177921==    by 0x40758A: ft_strjoin (get_next_line_utils.c:57)
==177921==    by 0x407452: get_next_line (get_next_line.c:85)
==177921==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==177921==    by 0x4052AB: main (mandatory.cpp:41)
==177921== 
==177921== 1 bytes in 1 blocks are definitely lost in loss record 1 of 4
==177921==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==177921==    by 0x40742B: get_next_line (get_next_line.c:82)
==177921==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==177921==    by 0x4052AB: main (mandatory.cpp:41)
==177921== 
==177921== 2 bytes in 1 blocks are definitely lost in loss record 2 of 4
==177921==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==177921==    by 0x4072EC: get_next_line (get_next_line.c:27)
==177921==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==177921==    by 0x4052AB: main (mandatory.cpp:41)
==177921== 
==177921== 2 bytes in 1 blocks are definitely lost in loss record 3 of 4
==177921==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==177921==    by 0x4072EC: get_next_line (get_next_line.c:27)
==177921==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==177921==    by 0x4052B7: main (mandatory.cpp:41)
==177921== 
==177921== 860 bytes in 40 blocks are definitely lost in loss record 4 of 4
==177921==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==177921==    by 0x40758A: ft_strjoin (get_next_line_utils.c:57)
==177921==    by 0x407452: get_next_line (get_next_line.c:85)
==177921==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==177921==    by 0x4052AB: main (mandatory.cpp:41)
==177921== 
==177924== Invalid write of size 1
==177924==    at 0x4073F9: get_next_line (get_next_line.c:70)
==177924==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==177924==    by 0x4054E9: main (mandatory.cpp:46)
==177924==  Address 0x4de6c80 is 0 bytes inside a block of size 2 free'd
==177924==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==177924==    by 0x407852: ft_strdup2 (get_next_line_utils.c:229)
==177924==    by 0x4073ED: get_next_line (get_next_line.c:69)
==177924==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==177924==    by 0x4054E9: main (mandatory.cpp:46)
==177924==  Block was alloc'd at
==177924==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==177924==    by 0x40758A: ft_strjoin (get_next_line_utils.c:57)
==177924==    by 0x407452: get_next_line (get_next_line.c:85)
==177924==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==177924==    by 0x4054E9: main (mandatory.cpp:46)
==177924== 
==177924== Invalid read of size 1
==177924==    at 0x4074E4: ft_strchr (get_next_line_utils.c:25)
==177924==    by 0x40731D: get_next_line (get_next_line.c:33)
==177924==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==177924==    by 0x4054F5: main (mandatory.cpp:46)
==177924==  Address 0x4de6c80 is 0 bytes inside a block of size 2 free'd
==177924==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==177924==    by 0x407852: ft_strdup2 (get_next_line_utils.c:229)
==177924==    by 0x4073ED: get_next_line (get_next_line.c:69)
==177924==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==177924==    by 0x4054E9: main (mandatory.cpp:46)
==177924==  Block was alloc'd at
==177924==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==177924==    by 0x40758A: ft_strjoin (get_next_line_utils.c:57)
==177924==    by 0x407452: get_next_line (get_next_line.c:85)
==177924==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==177924==    by 0x4054E9: main (mandatory.cpp:46)
==177924== 
==177924== Invalid read of size 1
==177924==    at 0x40739C: get_next_line (get_next_line.c:59)
==177924==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==177924==    by 0x4054F5: main (mandatory.cpp:46)
==177924==  Address 0x4de6c80 is 0 bytes inside a block of size 2 free'd
==177924==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==177924==    by 0x407852: ft_strdup2 (get_next_line_utils.c:229)
==177924==    by 0x4073ED: get_next_line (get_next_line.c:69)
==177924==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==177924==    by 0x4054E9: main (mandatory.cpp:46)
==177924==  Block was alloc'd at
==177924==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==177924==    by 0x40758A: ft_strjoin (get_next_line_utils.c:57)
==177924==    by 0x407452: get_next_line (get_next_line.c:85)
==177924==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==177924==    by 0x4054E9: main (mandatory.cpp:46)
==177924== 
==177924== 1 bytes in 1 blocks are definitely lost in loss record 1 of 5
==177924==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==177924==    by 0x40742B: get_next_line (get_next_line.c:82)
==177924==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==177924==    by 0x4054D7: main (mandatory.cpp:46)
==177924== 
==177924== 2 bytes in 1 blocks are definitely lost in loss record 2 of 5
==177924==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==177924==    by 0x4072EC: get_next_line (get_next_line.c:27)
==177924==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==177924==    by 0x4054D7: main (mandatory.cpp:46)
==177924== 
==177924== 2 bytes in 1 blocks are definitely lost in loss record 3 of 5
==177924==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==177924==    by 0x4072EC: get_next_line (get_next_line.c:27)
==177924==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==177924==    by 0x4054E9: main (mandatory.cpp:46)
==177924== 
==177924== 2 bytes in 1 blocks are definitely lost in loss record 4 of 5
==177924==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==177924==    by 0x4072EC: get_next_line (get_next_line.c:27)
==177924==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==177924==    by 0x4054F5: main (mandatory.cpp:46)
==177924== 
==177924== 902 bytes in 41 blocks are definitely lost in loss record 5 of 5
==177924==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==177924==    by 0x40758A: ft_strjoin (get_next_line_utils.c:57)
==177924==    by 0x407452: get_next_line (get_next_line.c:85)
==177924==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==177924==    by 0x4054D7: main (mandatory.cpp:46)
==177924== 
==177925== Invalid write of size 1
==177925==    at 0x4073F9: get_next_line (get_next_line.c:70)
==177925==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==177925==    by 0x405715: main (mandatory.cpp:52)
==177925==  Address 0x4de6ed0 is 0 bytes inside a block of size 43 free'd
==177925==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==177925==    by 0x407852: ft_strdup2 (get_next_line_utils.c:229)
==177925==    by 0x4073ED: get_next_line (get_next_line.c:69)
==177925==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==177925==    by 0x405715: main (mandatory.cpp:52)
==177925==  Block was alloc'd at
==177925==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==177925==    by 0x40758A: ft_strjoin (get_next_line_utils.c:57)
==177925==    by 0x407452: get_next_line (get_next_line.c:85)
==177925==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==177925==    by 0x405715: main (mandatory.cpp:52)
==177925== 
==177925== Invalid read of size 1
==177925==    at 0x4074E4: ft_strchr (get_next_line_utils.c:25)
==177925==    by 0x40731D: get_next_line (get_next_line.c:33)
==177925==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==177925==    by 0x405721: main (mandatory.cpp:52)
==177925==  Address 0x4de6ed0 is 0 bytes inside a block of size 43 free'd
==177925==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==177925==    by 0x407852: ft_strdup2 (get_next_line_utils.c:229)
==177925==    by 0x4073ED: get_next_line (get_next_line.c:69)
==177925==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==177925==    by 0x405715: main (mandatory.cpp:52)
==177925==  Block was alloc'd at
==177925==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==177925==    by 0x40758A: ft_strjoin (get_next_line_utils.c:57)
==177925==    by 0x407452: get_next_line (get_next_line.c:85)
==177925==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==177925==    by 0x405715: main (mandatory.cpp:52)
==177925== 
==177925== Invalid read of size 1
==177925==    at 0x40739C: get_next_line (get_next_line.c:59)
==177925==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==177925==    by 0x405721: main (mandatory.cpp:52)
==177925==  Address 0x4de6ed0 is 0 bytes inside a block of size 43 free'd
==177925==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==177925==    by 0x407852: ft_strdup2 (get_next_line_utils.c:229)
==177925==    by 0x4073ED: get_next_line (get_next_line.c:69)
==177925==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==177925==    by 0x405715: main (mandatory.cpp:52)
==177925==  Block was alloc'd at
==177925==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==177925==    by 0x40758A: ft_strjoin (get_next_line_utils.c:57)
==177925==    by 0x407452: get_next_line (get_next_line.c:85)
==177925==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==177925==    by 0x405715: main (mandatory.cpp:52)
==177925== 
==177925== 1 bytes in 1 blocks are definitely lost in loss record 1 of 4
==177925==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==177925==    by 0x40742B: get_next_line (get_next_line.c:82)
==177925==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==177925==    by 0x405715: main (mandatory.cpp:52)
==177925== 
==177925== 2 bytes in 1 blocks are definitely lost in loss record 2 of 4
==177925==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==177925==    by 0x4072EC: get_next_line (get_next_line.c:27)
==177925==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==177925==    by 0x405715: main (mandatory.cpp:52)
==177925== 
==177925== 2 bytes in 1 blocks are definitely lost in loss record 3 of 4
==177925==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==177925==    by 0x4072EC: get_next_line (get_next_line.c:27)
==177925==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==177925==    by 0x405721: main (mandatory.cpp:52)
==177925== 
==177925== 902 bytes in 41 blocks are definitely lost in loss record 4 of 4
==177925==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==177925==    by 0x40758A: ft_strjoin (get_next_line_utils.c:57)
==177925==    by 0x407452: get_next_line (get_next_line.c:85)
==177925==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==177925==    by 0x405715: main (mandatory.cpp:52)
==177925== 
==177927== Invalid write of size 1
==177927==    at 0x4073F9: get_next_line (get_next_line.c:70)
==177927==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==177927==    by 0x405953: main (mandatory.cpp:57)
==177927==  Address 0x4de7310 is 0 bytes inside a block of size 2 free'd
==177927==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==177927==    by 0x407852: ft_strdup2 (get_next_line_utils.c:229)
==177927==    by 0x4073ED: get_next_line (get_next_line.c:69)
==177927==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==177927==    by 0x405953: main (mandatory.cpp:57)
==177927==  Block was alloc'd at
==177927==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==177927==    by 0x40758A: ft_strjoin (get_next_line_utils.c:57)
==177927==    by 0x407452: get_next_line (get_next_line.c:85)
==177927==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==177927==    by 0x405953: main (mandatory.cpp:57)
==177927== 
==177927== Invalid read of size 1
==177927==    at 0x4074E4: ft_strchr (get_next_line_utils.c:25)
==177927==    by 0x40731D: get_next_line (get_next_line.c:33)
==177927==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==177927==    by 0x40595F: main (mandatory.cpp:57)
==177927==  Address 0x4de7310 is 0 bytes inside a block of size 2 free'd
==177927==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==177927==    by 0x407852: ft_strdup2 (get_next_line_utils.c:229)
==177927==    by 0x4073ED: get_next_line (get_next_line.c:69)
==177927==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==177927==    by 0x405953: main (mandatory.cpp:57)
==177927==  Block was alloc'd at
==177927==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==177927==    by 0x40758A: ft_strjoin (get_next_line_utils.c:57)
==177927==    by 0x407452: get_next_line (get_next_line.c:85)
==177927==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==177927==    by 0x405953: main (mandatory.cpp:57)
==177927== 
==177927== Invalid read of size 1
==177927==    at 0x40739C: get_next_line (get_next_line.c:59)
==177927==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==177927==    by 0x40595F: main (mandatory.cpp:57)
==177927==  Address 0x4de7310 is 0 bytes inside a block of size 2 free'd
==177927==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==177927==    by 0x407852: ft_strdup2 (get_next_line_utils.c:229)
==177927==    by 0x4073ED: get_next_line (get_next_line.c:69)
==177927==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==177927==    by 0x405953: main (mandatory.cpp:57)
==177927==  Block was alloc'd at
==177927==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==177927==    by 0x40758A: ft_strjoin (get_next_line_utils.c:57)
==177927==    by 0x407452: get_next_line (get_next_line.c:85)
==177927==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==177927==    by 0x405953: main (mandatory.cpp:57)
==177927== 
==177927== 1 bytes in 1 blocks are definitely lost in loss record 1 of 5
==177927==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==177927==    by 0x40742B: get_next_line (get_next_line.c:82)
==177927==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==177927==    by 0x405941: main (mandatory.cpp:57)
==177927== 
==177927== 2 bytes in 1 blocks are definitely lost in loss record 2 of 5
==177927==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==177927==    by 0x4072EC: get_next_line (get_next_line.c:27)
==177927==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==177927==    by 0x405941: main (mandatory.cpp:57)
==177927== 
==177927== 2 bytes in 1 blocks are definitely lost in loss record 3 of 5
==177927==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==177927==    by 0x4072EC: get_next_line (get_next_line.c:27)
==177927==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==177927==    by 0x405953: main (mandatory.cpp:57)
==177927== 
==177927== 2 bytes in 1 blocks are definitely lost in loss record 4 of 5
==177927==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==177927==    by 0x4072EC: get_next_line (get_next_line.c:27)
==177927==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==177927==    by 0x40595F: main (mandatory.cpp:57)
==177927== 
==177927== 945 bytes in 42 blocks are definitely lost in loss record 5 of 5
==177927==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==177927==    by 0x40758A: ft_strjoin (get_next_line_utils.c:57)
==177927==    by 0x407452: get_next_line (get_next_line.c:85)
==177927==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==177927==    by 0x405941: main (mandatory.cpp:57)
==177927== 
==177937== Invalid write of size 1
==177937==    at 0x4073F9: get_next_line (get_next_line.c:70)
==177937==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==177937==    by 0x405B89: main (mandatory.cpp:68)
==177937==  Address 0x4de7560 is 0 bytes inside a block of size 44 free'd
==177937==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==177937==    by 0x407852: ft_strdup2 (get_next_line_utils.c:229)
==177937==    by 0x4073ED: get_next_line (get_next_line.c:69)
==177937==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==177937==    by 0x405B89: main (mandatory.cpp:68)
==177937==  Block was alloc'd at
==177937==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==177937==    by 0x40758A: ft_strjoin (get_next_line_utils.c:57)
==177937==    by 0x407452: get_next_line (get_next_line.c:85)
==177937==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==177937==    by 0x405B89: main (mandatory.cpp:68)
==177937== 
==177937== Invalid read of size 1
==177937==    at 0x4074E4: ft_strchr (get_next_line_utils.c:25)
==177937==    by 0x40731D: get_next_line (get_next_line.c:33)
==177937==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==177937==    by 0x405B95: main (mandatory.cpp:68)
==177937==  Address 0x4de7560 is 0 bytes inside a block of size 44 free'd
==177937==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==177937==    by 0x407852: ft_strdup2 (get_next_line_utils.c:229)
==177937==    by 0x4073ED: get_next_line (get_next_line.c:69)
==177937==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==177937==    by 0x405B89: main (mandatory.cpp:68)
==177937==  Block was alloc'd at
==177937==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==177937==    by 0x40758A: ft_strjoin (get_next_line_utils.c:57)
==177937==    by 0x407452: get_next_line (get_next_line.c:85)
==177937==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==177937==    by 0x405B89: main (mandatory.cpp:68)
==177937== 
==177937== Invalid read of size 1
==177937==    at 0x40739C: get_next_line (get_next_line.c:59)
==177937==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==177937==    by 0x405B95: main (mandatory.cpp:68)
==177937==  Address 0x4de7560 is 0 bytes inside a block of size 44 free'd
==177937==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==177937==    by 0x407852: ft_strdup2 (get_next_line_utils.c:229)
==177937==    by 0x4073ED: get_next_line (get_next_line.c:69)
==177937==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==177937==    by 0x405B89: main (mandatory.cpp:68)
==177937==  Block was alloc'd at
==177937==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==177937==    by 0x40758A: ft_strjoin (get_next_line_utils.c:57)
==177937==    by 0x407452: get_next_line (get_next_line.c:85)
==177937==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==177937==    by 0x405B89: main (mandatory.cpp:68)
==177937== 
==177937== 1 bytes in 1 blocks are definitely lost in loss record 1 of 4
==177937==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==177937==    by 0x40742B: get_next_line (get_next_line.c:82)
==177937==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==177937==    by 0x405B89: main (mandatory.cpp:68)
==177937== 
==177937== 2 bytes in 1 blocks are definitely lost in loss record 2 of 4
==177937==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==177937==    by 0x4072EC: get_next_line (get_next_line.c:27)
==177937==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==177937==    by 0x405B89: main (mandatory.cpp:68)
==177937== 
==177937== 2 bytes in 1 blocks are definitely lost in loss record 3 of 4
==177937==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==177937==    by 0x4072EC: get_next_line (get_next_line.c:27)
==177937==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==177937==    by 0x405B95: main (mandatory.cpp:68)
==177937== 
==177937== 945 bytes in 42 blocks are definitely lost in loss record 4 of 4
==177937==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==177937==    by 0x40758A: ft_strjoin (get_next_line_utils.c:57)
==177937==    by 0x407452: get_next_line (get_next_line.c:85)
==177937==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==177937==    by 0x405B89: main (mandatory.cpp:68)
==177937== 
==177940== Invalid write of size 1
==177940==    at 0x4073F9: get_next_line (get_next_line.c:70)
==177940==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==177940==    by 0x405DC7: main (mandatory.cpp:73)
==177940==  Address 0x4de79a0 is 0 bytes inside a block of size 2 free'd
==177940==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==177940==    by 0x407852: ft_strdup2 (get_next_line_utils.c:229)
==177940==    by 0x4073ED: get_next_line (get_next_line.c:69)
==177940==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==177940==    by 0x405DC7: main (mandatory.cpp:73)
==177940==  Block was alloc'd at
==177940==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==177940==    by 0x40758A: ft_strjoin (get_next_line_utils.c:57)
==177940==    by 0x407452: get_next_line (get_next_line.c:85)
==177940==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==177940==    by 0x405DC7: main (mandatory.cpp:73)
==177940== 
==177940== Invalid read of size 1
==177940==    at 0x4074E4: ft_strchr (get_next_line_utils.c:25)
==177940==    by 0x40731D: get_next_line (get_next_line.c:33)
==177940==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==177940==    by 0x405DD3: main (mandatory.cpp:73)
==177940==  Address 0x4de79a0 is 0 bytes inside a block of size 2 free'd
==177940==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==177940==    by 0x407852: ft_strdup2 (get_next_line_utils.c:229)
==177940==    by 0x4073ED: get_next_line (get_next_line.c:69)
==177940==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==177940==    by 0x405DC7: main (mandatory.cpp:73)
==177940==  Block was alloc'd at
==177940==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==177940==    by 0x40758A: ft_strjoin (get_next_line_utils.c:57)
==177940==    by 0x407452: get_next_line (get_next_line.c:85)
==177940==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==177940==    by 0x405DC7: main (mandatory.cpp:73)
==177940== 
==177940== Invalid read of size 1
==177940==    at 0x40739C: get_next_line (get_next_line.c:59)
==177940==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==177940==    by 0x405DD3: main (mandatory.cpp:73)
==177940==  Address 0x4de79a0 is 0 bytes inside a block of size 2 free'd
==177940==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==177940==    by 0x407852: ft_strdup2 (get_next_line_utils.c:229)
==177940==    by 0x4073ED: get_next_line (get_next_line.c:69)
==177940==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==177940==    by 0x405DC7: main (mandatory.cpp:73)
==177940==  Block was alloc'd at
==177940==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==177940==    by 0x40758A: ft_strjoin (get_next_line_utils.c:57)
==177940==    by 0x407452: get_next_line (get_next_line.c:85)
==177940==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==177940==    by 0x405DC7: main (mandatory.cpp:73)
==177940== 
==177940== 1 bytes in 1 blocks are definitely lost in loss record 1 of 5
==177940==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==177940==    by 0x40742B: get_next_line (get_next_line.c:82)
==177940==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==177940==    by 0x405DB5: main (mandatory.cpp:73)
==177940== 
==177940== 2 bytes in 1 blocks are definitely lost in loss record 2 of 5
==177940==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==177940==    by 0x4072EC: get_next_line (get_next_line.c:27)
==177940==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==177940==    by 0x405DB5: main (mandatory.cpp:73)
==177940== 
==177940== 2 bytes in 1 blocks are definitely lost in loss record 3 of 5
==177940==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==177940==    by 0x4072EC: get_next_line (get_next_line.c:27)
==177940==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==177940==    by 0x405DC7: main (mandatory.cpp:73)
==177940== 
==177940== 2 bytes in 1 blocks are definitely lost in loss record 4 of 5
==177940==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==177940==    by 0x4072EC: get_next_line (get_next_line.c:27)
==177940==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==177940==    by 0x405DD3: main (mandatory.cpp:73)
==177940== 
==177940== 989 bytes in 43 blocks are definitely lost in loss record 5 of 5
==177940==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==177940==    by 0x40758A: ft_strjoin (get_next_line_utils.c:57)
==177940==    by 0x407452: get_next_line (get_next_line.c:85)
==177940==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==177940==    by 0x405DB5: main (mandatory.cpp:73)
==177940== 
==177943== 1 bytes in 1 blocks are definitely lost in loss record 1 of 12
==177943==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==177943==    by 0x40742B: get_next_line (get_next_line.c:82)
==177943==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==177943==    by 0x405FF3: main (mandatory.cpp:79)
==177943== 
==177943== 2 bytes in 1 blocks are possibly lost in loss record 2 of 12
==177943==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==177943==    by 0x40758A: ft_strjoin (get_next_line_utils.c:57)
==177943==    by 0x407452: get_next_line (get_next_line.c:85)
==177943==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==177943==    by 0x40603B: main (mandatory.cpp:79)
==177943== 
==177943== 2 bytes in 1 blocks are definitely lost in loss record 3 of 12
==177943==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==177943==    by 0x4072EC: get_next_line (get_next_line.c:27)
==177943==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==177943==    by 0x405FF3: main (mandatory.cpp:79)
==177943== 
==177943== 2 bytes in 1 blocks are definitely lost in loss record 4 of 12
==177943==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==177943==    by 0x40758A: ft_strjoin (get_next_line_utils.c:57)
==177943==    by 0x407452: get_next_line (get_next_line.c:85)
==177943==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==177943==    by 0x405FF3: main (mandatory.cpp:79)
==177943== 
==177943== 2 bytes in 1 blocks are definitely lost in loss record 5 of 12
==177943==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==177943==    by 0x4072EC: get_next_line (get_next_line.c:27)
==177943==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==177943==    by 0x406005: main (mandatory.cpp:79)
==177943== 
==177943== 2 bytes in 1 blocks are definitely lost in loss record 6 of 12
==177943==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==177943==    by 0x40758A: ft_strjoin (get_next_line_utils.c:57)
==177943==    by 0x407452: get_next_line (get_next_line.c:85)
==177943==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==177943==    by 0x406005: main (mandatory.cpp:79)
==177943== 
==177943== 2 bytes in 1 blocks are definitely lost in loss record 7 of 12
==177943==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==177943==    by 0x4072EC: get_next_line (get_next_line.c:27)
==177943==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==177943==    by 0x406017: main (mandatory.cpp:79)
==177943== 
==177943== 2 bytes in 1 blocks are definitely lost in loss record 8 of 12
==177943==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==177943==    by 0x40758A: ft_strjoin (get_next_line_utils.c:57)
==177943==    by 0x407452: get_next_line (get_next_line.c:85)
==177943==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==177943==    by 0x406017: main (mandatory.cpp:79)
==177943== 
==177943== 2 bytes in 1 blocks are definitely lost in loss record 9 of 12
==177943==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==177943==    by 0x4072EC: get_next_line (get_next_line.c:27)
==177943==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==177943==    by 0x406029: main (mandatory.cpp:79)
==177943== 
==177943== 2 bytes in 1 blocks are definitely lost in loss record 10 of 12
==177943==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==177943==    by 0x40758A: ft_strjoin (get_next_line_utils.c:57)
==177943==    by 0x407452: get_next_line (get_next_line.c:85)
==177943==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==177943==    by 0x406029: main (mandatory.cpp:79)
==177943== 
==177943== 2 bytes in 1 blocks are definitely lost in loss record 11 of 12
==177943==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==177943==    by 0x4072EC: get_next_line (get_next_line.c:27)
==177943==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==177943==    by 0x40603B: main (mandatory.cpp:79)
==177943== 
==177943== 2 bytes in 1 blocks are definitely lost in loss record 12 of 12
==177943==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==177943==    by 0x4072EC: get_next_line (get_next_line.c:27)
==177943==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==177943==    by 0x406047: main (mandatory.cpp:79)
==177943== 
==177944== Invalid write of size 1
==177944==    at 0x4073F9: get_next_line (get_next_line.c:70)
==177944==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==177944==    by 0x4062AF: main (mandatory.cpp:88)
==177944==  Address 0x4dec090 is 0 bytes inside a block of size 42 free'd
==177944==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==177944==    by 0x407852: ft_strdup2 (get_next_line_utils.c:229)
==177944==    by 0x4073ED: get_next_line (get_next_line.c:69)
==177944==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==177944==    by 0x4062AF: main (mandatory.cpp:88)
==177944==  Block was alloc'd at
==177944==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==177944==    by 0x40758A: ft_strjoin (get_next_line_utils.c:57)
==177944==    by 0x407452: get_next_line (get_next_line.c:85)
==177944==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==177944==    by 0x4062AF: main (mandatory.cpp:88)
==177944== 
==177944== Invalid read of size 1
==177944==    at 0x4074E4: ft_strchr (get_next_line_utils.c:25)
==177944==    by 0x40731D: get_next_line (get_next_line.c:33)
==177944==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==177944==    by 0x4062BB: main (mandatory.cpp:88)
==177944==  Address 0x4dec090 is 0 bytes inside a block of size 42 free'd
==177944==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==177944==    by 0x407852: ft_strdup2 (get_next_line_utils.c:229)
==177944==    by 0x4073ED: get_next_line (get_next_line.c:69)
==177944==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==177944==    by 0x4062AF: main (mandatory.cpp:88)
==177944==  Block was alloc'd at
==177944==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==177944==    by 0x40758A: ft_strjoin (get_next_line_utils.c:57)
==177944==    by 0x407452: get_next_line (get_next_line.c:85)
==177944==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==177944==    by 0x4062AF: main (mandatory.cpp:88)
==177944== 
==177944== Invalid read of size 1
==177944==    at 0x40739C: get_next_line (get_next_line.c:59)
==177944==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==177944==    by 0x4062BB: main (mandatory.cpp:88)
==177944==  Address 0x4dec090 is 0 bytes inside a block of size 42 free'd
==177944==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==177944==    by 0x407852: ft_strdup2 (get_next_line_utils.c:229)
==177944==    by 0x4073ED: get_next_line (get_next_line.c:69)
==177944==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==177944==    by 0x4062AF: main (mandatory.cpp:88)
==177944==  Block was alloc'd at
==177944==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==177944==    by 0x40758A: ft_strjoin (get_next_line_utils.c:57)
==177944==    by 0x407452: get_next_line (get_next_line.c:85)
==177944==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==177944==    by 0x4062AF: main (mandatory.cpp:88)
==177944== 
==177944== 1 bytes in 1 blocks are definitely lost in loss record 1 of 12
==177944==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==177944==    by 0x40742B: get_next_line (get_next_line.c:82)
==177944==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==177944==    by 0x406267: main (mandatory.cpp:88)
==177944== 
==177944== 2 bytes in 1 blocks are definitely lost in loss record 2 of 12
==177944==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==177944==    by 0x4072EC: get_next_line (get_next_line.c:27)
==177944==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==177944==    by 0x406267: main (mandatory.cpp:88)
==177944== 
==177944== 2 bytes in 1 blocks are definitely lost in loss record 3 of 12
==177944==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==177944==    by 0x4072EC: get_next_line (get_next_line.c:27)
==177944==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==177944==    by 0x406279: main (mandatory.cpp:88)
==177944== 
==177944== 2 bytes in 1 blocks are definitely lost in loss record 4 of 12
==177944==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==177944==    by 0x4072EC: get_next_line (get_next_line.c:27)
==177944==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==177944==    by 0x40628B: main (mandatory.cpp:88)
==177944== 
==177944== 2 bytes in 1 blocks are definitely lost in loss record 5 of 12
==177944==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==177944==    by 0x4072EC: get_next_line (get_next_line.c:27)
==177944==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==177944==    by 0x40629D: main (mandatory.cpp:88)
==177944== 
==177944== 2 bytes in 1 blocks are definitely lost in loss record 6 of 12
==177944==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==177944==    by 0x4072EC: get_next_line (get_next_line.c:27)
==177944==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==177944==    by 0x4062AF: main (mandatory.cpp:88)
==177944== 
==177944== 2 bytes in 1 blocks are definitely lost in loss record 7 of 12
==177944==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==177944==    by 0x4072EC: get_next_line (get_next_line.c:27)
==177944==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==177944==    by 0x4062BB: main (mandatory.cpp:88)
==177944== 
==177944== 860 bytes in 40 blocks are definitely lost in loss record 8 of 12
==177944==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==177944==    by 0x40758A: ft_strjoin (get_next_line_utils.c:57)
==177944==    by 0x407452: get_next_line (get_next_line.c:85)
==177944==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==177944==    by 0x4062AF: main (mandatory.cpp:88)
==177944== 
==177944== 945 bytes in 42 blocks are definitely lost in loss record 9 of 12
==177944==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==177944==    by 0x40758A: ft_strjoin (get_next_line_utils.c:57)
==177944==    by 0x407452: get_next_line (get_next_line.c:85)
==177944==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==177944==    by 0x406267: main (mandatory.cpp:88)
==177944== 
==177944== 989 bytes in 43 blocks are definitely lost in loss record 10 of 12
==177944==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==177944==    by 0x40758A: ft_strjoin (get_next_line_utils.c:57)
==177944==    by 0x407452: get_next_line (get_next_line.c:85)
==177944==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==177944==    by 0x406279: main (mandatory.cpp:88)
==177944== 
==177944== 989 bytes in 43 blocks are definitely lost in loss record 11 of 12
==177944==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==177944==    by 0x40758A: ft_strjoin (get_next_line_utils.c:57)
==177944==    by 0x407452: get_next_line (get_next_line.c:85)
==177944==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==177944==    by 0x40629D: main (mandatory.cpp:88)
==177944== 
==177944== 1,034 bytes in 44 blocks are definitely lost in loss record 12 of 12
==177944==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==177944==    by 0x40758A: ft_strjoin (get_next_line_utils.c:57)
==177944==    by 0x407452: get_next_line (get_next_line.c:85)
==177944==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==177944==    by 0x40628B: main (mandatory.cpp:88)
==177944== 
==177947== 1 bytes in 1 blocks are definitely lost in loss record 1 of 13
==177947==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==177947==    by 0x40742B: get_next_line (get_next_line.c:82)
==177947==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==177947==    by 0x4064DB: main (mandatory.cpp:97)
==177947== 
==177947== 2 bytes in 1 blocks are definitely lost in loss record 2 of 13
==177947==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==177947==    by 0x4072EC: get_next_line (get_next_line.c:27)
==177947==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==177947==    by 0x4064DB: main (mandatory.cpp:97)
==177947== 
==177947== 2 bytes in 1 blocks are definitely lost in loss record 3 of 13
==177947==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==177947==    by 0x4072EC: get_next_line (get_next_line.c:27)
==177947==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==177947==    by 0x4064ED: main (mandatory.cpp:97)
==177947== 
==177947== 2 bytes in 1 blocks are definitely lost in loss record 4 of 13
==177947==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==177947==    by 0x4072EC: get_next_line (get_next_line.c:27)
==177947==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==177947==    by 0x4064FF: main (mandatory.cpp:97)
==177947== 
==177947== 2 bytes in 1 blocks are definitely lost in loss record 5 of 13
==177947==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==177947==    by 0x4072EC: get_next_line (get_next_line.c:27)
==177947==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==177947==    by 0x406511: main (mandatory.cpp:97)
==177947== 
==177947== 2 bytes in 1 blocks are definitely lost in loss record 6 of 13
==177947==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==177947==    by 0x4072EC: get_next_line (get_next_line.c:27)
==177947==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==177947==    by 0x406523: main (mandatory.cpp:97)
==177947== 
==177947== 2 bytes in 1 blocks are definitely lost in loss record 7 of 13
==177947==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==177947==    by 0x4072EC: get_next_line (get_next_line.c:27)
==177947==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==177947==    by 0x40652F: main (mandatory.cpp:97)
==177947== 
==177947== 42 bytes in 1 blocks are possibly lost in loss record 8 of 13
==177947==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==177947==    by 0x40758A: ft_strjoin (get_next_line_utils.c:57)
==177947==    by 0x407452: get_next_line (get_next_line.c:85)
==177947==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==177947==    by 0x406523: main (mandatory.cpp:97)
==177947== 
==177947== 860 bytes in 40 blocks are definitely lost in loss record 9 of 13
==177947==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==177947==    by 0x40758A: ft_strjoin (get_next_line_utils.c:57)
==177947==    by 0x407452: get_next_line (get_next_line.c:85)
==177947==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==177947==    by 0x406523: main (mandatory.cpp:97)
==177947== 
==177947== 902 bytes in 41 blocks are definitely lost in loss record 10 of 13
==177947==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==177947==    by 0x40758A: ft_strjoin (get_next_line_utils.c:57)
==177947==    by 0x407452: get_next_line (get_next_line.c:85)
==177947==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==177947==    by 0x4064DB: main (mandatory.cpp:97)
==177947== 
==177947== 945 bytes in 42 blocks are definitely lost in loss record 11 of 13
==177947==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==177947==    by 0x40758A: ft_strjoin (get_next_line_utils.c:57)
==177947==    by 0x407452: get_next_line (get_next_line.c:85)
==177947==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==177947==    by 0x4064ED: main (mandatory.cpp:97)
==177947== 
==177947== 945 bytes in 42 blocks are definitely lost in loss record 12 of 13
==177947==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==177947==    by 0x40758A: ft_strjoin (get_next_line_utils.c:57)
==177947==    by 0x407452: get_next_line (get_next_line.c:85)
==177947==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==177947==    by 0x406511: main (mandatory.cpp:97)
==177947== 
==177947== 989 bytes in 43 blocks are definitely lost in loss record 13 of 13
==177947==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==177947==    by 0x40758A: ft_strjoin (get_next_line_utils.c:57)
==177947==    by 0x407452: get_next_line (get_next_line.c:85)
==177947==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==177947==    by 0x4064FF: main (mandatory.cpp:97)
==177947== 
==177957== Invalid write of size 1
==177957==    at 0x4073F9: get_next_line (get_next_line.c:70)
==177957==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==177957==    by 0x4067DF: main (mandatory.cpp:106)
==177957==  Address 0x4decab0 is 0 bytes inside a block of size 42 free'd
==177957==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==177957==    by 0x407852: ft_strdup2 (get_next_line_utils.c:229)
==177957==    by 0x4073ED: get_next_line (get_next_line.c:69)
==177957==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==177957==    by 0x4067DF: main (mandatory.cpp:106)
==177957==  Block was alloc'd at
==177957==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==177957==    by 0x40758A: ft_strjoin (get_next_line_utils.c:57)
==177957==    by 0x407452: get_next_line (get_next_line.c:85)
==177957==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==177957==    by 0x4067DF: main (mandatory.cpp:106)
==177957== 
==177957== Invalid read of size 1
==177957==    at 0x4074E4: ft_strchr (get_next_line_utils.c:25)
==177957==    by 0x40731D: get_next_line (get_next_line.c:33)
==177957==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==177957==    by 0x4067EB: main (mandatory.cpp:106)
==177957==  Address 0x4decab0 is 0 bytes inside a block of size 42 free'd
==177957==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==177957==    by 0x407852: ft_strdup2 (get_next_line_utils.c:229)
==177957==    by 0x4073ED: get_next_line (get_next_line.c:69)
==177957==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==177957==    by 0x4067DF: main (mandatory.cpp:106)
==177957==  Block was alloc'd at
==177957==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==177957==    by 0x40758A: ft_strjoin (get_next_line_utils.c:57)
==177957==    by 0x407452: get_next_line (get_next_line.c:85)
==177957==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==177957==    by 0x4067DF: main (mandatory.cpp:106)
==177957== 
==177957== Invalid read of size 1
==177957==    at 0x40739C: get_next_line (get_next_line.c:59)
==177957==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==177957==    by 0x4067EB: main (mandatory.cpp:106)
==177957==  Address 0x4decab0 is 0 bytes inside a block of size 42 free'd
==177957==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==177957==    by 0x407852: ft_strdup2 (get_next_line_utils.c:229)
==177957==    by 0x4073ED: get_next_line (get_next_line.c:69)
==177957==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==177957==    by 0x4067DF: main (mandatory.cpp:106)
==177957==  Block was alloc'd at
==177957==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==177957==    by 0x40758A: ft_strjoin (get_next_line_utils.c:57)
==177957==    by 0x407452: get_next_line (get_next_line.c:85)
==177957==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==177957==    by 0x4067DF: main (mandatory.cpp:106)
==177957== 
==177957== 1 bytes in 1 blocks are definitely lost in loss record 1 of 20
==177957==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==177957==    by 0x40742B: get_next_line (get_next_line.c:82)
==177957==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==177957==    by 0x40674F: main (mandatory.cpp:106)
==177957== 
==177957== 2 bytes in 1 blocks are definitely lost in loss record 2 of 20
==177957==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==177957==    by 0x4072EC: get_next_line (get_next_line.c:27)
==177957==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==177957==    by 0x40674F: main (mandatory.cpp:106)
==177957== 
==177957== 2 bytes in 1 blocks are definitely lost in loss record 3 of 20
==177957==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==177957==    by 0x4072EC: get_next_line (get_next_line.c:27)
==177957==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==177957==    by 0x406761: main (mandatory.cpp:106)
==177957== 
==177957== 2 bytes in 1 blocks are definitely lost in loss record 4 of 20
==177957==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==177957==    by 0x40758A: ft_strjoin (get_next_line_utils.c:57)
==177957==    by 0x407452: get_next_line (get_next_line.c:85)
==177957==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==177957==    by 0x406761: main (mandatory.cpp:106)
==177957== 
==177957== 2 bytes in 1 blocks are definitely lost in loss record 5 of 20
==177957==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==177957==    by 0x4072EC: get_next_line (get_next_line.c:27)
==177957==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==177957==    by 0x406773: main (mandatory.cpp:106)
==177957== 
==177957== 2 bytes in 1 blocks are definitely lost in loss record 6 of 20
==177957==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==177957==    by 0x4072EC: get_next_line (get_next_line.c:27)
==177957==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==177957==    by 0x406785: main (mandatory.cpp:106)
==177957== 
==177957== 2 bytes in 1 blocks are definitely lost in loss record 7 of 20
==177957==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==177957==    by 0x40758A: ft_strjoin (get_next_line_utils.c:57)
==177957==    by 0x407452: get_next_line (get_next_line.c:85)
==177957==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==177957==    by 0x406785: main (mandatory.cpp:106)
==177957== 
==177957== 2 bytes in 1 blocks are definitely lost in loss record 8 of 20
==177957==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==177957==    by 0x4072EC: get_next_line (get_next_line.c:27)
==177957==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==177957==    by 0x406797: main (mandatory.cpp:106)
==177957== 
==177957== 2 bytes in 1 blocks are definitely lost in loss record 9 of 20
==177957==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==177957==    by 0x4072EC: get_next_line (get_next_line.c:27)
==177957==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==177957==    by 0x4067A9: main (mandatory.cpp:106)
==177957== 
==177957== 2 bytes in 1 blocks are definitely lost in loss record 10 of 20
==177957==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==177957==    by 0x40758A: ft_strjoin (get_next_line_utils.c:57)
==177957==    by 0x407452: get_next_line (get_next_line.c:85)
==177957==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==177957==    by 0x4067A9: main (mandatory.cpp:106)
==177957== 
==177957== 2 bytes in 1 blocks are definitely lost in loss record 11 of 20
==177957==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==177957==    by 0x4072EC: get_next_line (get_next_line.c:27)
==177957==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==177957==    by 0x4067BB: main (mandatory.cpp:106)
==177957== 
==177957== 2 bytes in 1 blocks are definitely lost in loss record 12 of 20
==177957==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==177957==    by 0x4072EC: get_next_line (get_next_line.c:27)
==177957==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==177957==    by 0x4067CD: main (mandatory.cpp:106)
==177957== 
==177957== 2 bytes in 1 blocks are definitely lost in loss record 13 of 20
==177957==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==177957==    by 0x40758A: ft_strjoin (get_next_line_utils.c:57)
==177957==    by 0x407452: get_next_line (get_next_line.c:85)
==177957==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==177957==    by 0x4067CD: main (mandatory.cpp:106)
==177957== 
==177957== 2 bytes in 1 blocks are definitely lost in loss record 14 of 20
==177957==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==177957==    by 0x4072EC: get_next_line (get_next_line.c:27)
==177957==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==177957==    by 0x4067DF: main (mandatory.cpp:106)
==177957== 
==177957== 2 bytes in 1 blocks are definitely lost in loss record 15 of 20
==177957==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==177957==    by 0x4072EC: get_next_line (get_next_line.c:27)
==177957==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==177957==    by 0x4067EB: main (mandatory.cpp:106)
==177957== 
==177957== 860 bytes in 40 blocks are definitely lost in loss record 16 of 20
==177957==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==177957==    by 0x40758A: ft_strjoin (get_next_line_utils.c:57)
==177957==    by 0x407452: get_next_line (get_next_line.c:85)
==177957==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==177957==    by 0x4067DF: main (mandatory.cpp:106)
==177957== 
==177957== 945 bytes in 42 blocks are definitely lost in loss record 17 of 20
==177957==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==177957==    by 0x40758A: ft_strjoin (get_next_line_utils.c:57)
==177957==    by 0x407452: get_next_line (get_next_line.c:85)
==177957==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==177957==    by 0x40674F: main (mandatory.cpp:106)
==177957== 
==177957== 989 bytes in 43 blocks are definitely lost in loss record 18 of 20
==177957==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==177957==    by 0x40758A: ft_strjoin (get_next_line_utils.c:57)
==177957==    by 0x407452: get_next_line (get_next_line.c:85)
==177957==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==177957==    by 0x406773: main (mandatory.cpp:106)
==177957== 
==177957== 989 bytes in 43 blocks are definitely lost in loss record 19 of 20
==177957==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==177957==    by 0x40758A: ft_strjoin (get_next_line_utils.c:57)
==177957==    by 0x407452: get_next_line (get_next_line.c:85)
==177957==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==177957==    by 0x4067BB: main (mandatory.cpp:106)
==177957== 
==177957== 1,034 bytes in 44 blocks are definitely lost in loss record 20 of 20
==177957==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==177957==    by 0x40758A: ft_strjoin (get_next_line_utils.c:57)
==177957==    by 0x407452: get_next_line (get_next_line.c:85)
==177957==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==177957==    by 0x406797: main (mandatory.cpp:106)
==177957== 
==177960== 1 bytes in 1 blocks are definitely lost in loss record 1 of 21
==177960==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==177960==    by 0x40742B: get_next_line (get_next_line.c:82)
==177960==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==177960==    by 0x406A0B: main (mandatory.cpp:119)
==177960== 
==177960== 2 bytes in 1 blocks are definitely lost in loss record 2 of 21
==177960==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==177960==    by 0x4072EC: get_next_line (get_next_line.c:27)
==177960==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==177960==    by 0x406A0B: main (mandatory.cpp:119)
==177960== 
==177960== 2 bytes in 1 blocks are definitely lost in loss record 3 of 21
==177960==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==177960==    by 0x4072EC: get_next_line (get_next_line.c:27)
==177960==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==177960==    by 0x406A1D: main (mandatory.cpp:119)
==177960== 
==177960== 2 bytes in 1 blocks are definitely lost in loss record 4 of 21
==177960==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==177960==    by 0x40758A: ft_strjoin (get_next_line_utils.c:57)
==177960==    by 0x407452: get_next_line (get_next_line.c:85)
==177960==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==177960==    by 0x406A1D: main (mandatory.cpp:119)
==177960== 
==177960== 2 bytes in 1 blocks are definitely lost in loss record 5 of 21
==177960==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==177960==    by 0x4072EC: get_next_line (get_next_line.c:27)
==177960==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==177960==    by 0x406A2F: main (mandatory.cpp:119)
==177960== 
==177960== 2 bytes in 1 blocks are definitely lost in loss record 6 of 21
==177960==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==177960==    by 0x4072EC: get_next_line (get_next_line.c:27)
==177960==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==177960==    by 0x406A41: main (mandatory.cpp:119)
==177960== 
==177960== 2 bytes in 1 blocks are definitely lost in loss record 7 of 21
==177960==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==177960==    by 0x40758A: ft_strjoin (get_next_line_utils.c:57)
==177960==    by 0x407452: get_next_line (get_next_line.c:85)
==177960==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==177960==    by 0x406A41: main (mandatory.cpp:119)
==177960== 
==177960== 2 bytes in 1 blocks are definitely lost in loss record 8 of 21
==177960==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==177960==    by 0x4072EC: get_next_line (get_next_line.c:27)
==177960==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==177960==    by 0x406A53: main (mandatory.cpp:119)
==177960== 
==177960== 2 bytes in 1 blocks are definitely lost in loss record 9 of 21
==177960==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==177960==    by 0x4072EC: get_next_line (get_next_line.c:27)
==177960==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==177960==    by 0x406A65: main (mandatory.cpp:119)
==177960== 
==177960== 2 bytes in 1 blocks are definitely lost in loss record 10 of 21
==177960==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==177960==    by 0x40758A: ft_strjoin (get_next_line_utils.c:57)
==177960==    by 0x407452: get_next_line (get_next_line.c:85)
==177960==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==177960==    by 0x406A65: main (mandatory.cpp:119)
==177960== 
==177960== 2 bytes in 1 blocks are definitely lost in loss record 11 of 21
==177960==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==177960==    by 0x4072EC: get_next_line (get_next_line.c:27)
==177960==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==177960==    by 0x406A77: main (mandatory.cpp:119)
==177960== 
==177960== 2 bytes in 1 blocks are definitely lost in loss record 12 of 21
==177960==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==177960==    by 0x4072EC: get_next_line (get_next_line.c:27)
==177960==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==177960==    by 0x406A89: main (mandatory.cpp:119)
==177960== 
==177960== 2 bytes in 1 blocks are definitely lost in loss record 13 of 21
==177960==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==177960==    by 0x40758A: ft_strjoin (get_next_line_utils.c:57)
==177960==    by 0x407452: get_next_line (get_next_line.c:85)
==177960==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==177960==    by 0x406A89: main (mandatory.cpp:119)
==177960== 
==177960== 2 bytes in 1 blocks are definitely lost in loss record 14 of 21
==177960==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==177960==    by 0x4072EC: get_next_line (get_next_line.c:27)
==177960==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==177960==    by 0x406A9B: main (mandatory.cpp:119)
==177960== 
==177960== 2 bytes in 1 blocks are definitely lost in loss record 15 of 21
==177960==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==177960==    by 0x4072EC: get_next_line (get_next_line.c:27)
==177960==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==177960==    by 0x406AA7: main (mandatory.cpp:119)
==177960== 
==177960== 43 bytes in 1 blocks are possibly lost in loss record 16 of 21
==177960==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==177960==    by 0x40758A: ft_strjoin (get_next_line_utils.c:57)
==177960==    by 0x407452: get_next_line (get_next_line.c:85)
==177960==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==177960==    by 0x406A9B: main (mandatory.cpp:119)
==177960== 
==177960== 902 bytes in 41 blocks are definitely lost in loss record 17 of 21
==177960==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==177960==    by 0x40758A: ft_strjoin (get_next_line_utils.c:57)
==177960==    by 0x407452: get_next_line (get_next_line.c:85)
==177960==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==177960==    by 0x406A9B: main (mandatory.cpp:119)
==177960== 
==177960== 945 bytes in 42 blocks are definitely lost in loss record 18 of 21
==177960==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==177960==    by 0x40758A: ft_strjoin (get_next_line_utils.c:57)
==177960==    by 0x407452: get_next_line (get_next_line.c:85)
==177960==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==177960==    by 0x406A0B: main (mandatory.cpp:119)
==177960== 
==177960== 989 bytes in 43 blocks are definitely lost in loss record 19 of 21
==177960==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==177960==    by 0x40758A: ft_strjoin (get_next_line_utils.c:57)
==177960==    by 0x407452: get_next_line (get_next_line.c:85)
==177960==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==177960==    by 0x406A2F: main (mandatory.cpp:119)
==177960== 
==177960== 989 bytes in 43 blocks are definitely lost in loss record 20 of 21
==177960==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==177960==    by 0x40758A: ft_strjoin (get_next_line_utils.c:57)
==177960==    by 0x407452: get_next_line (get_next_line.c:85)
==177960==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==177960==    by 0x406A77: main (mandatory.cpp:119)
==177960== 
==177960== 1,034 bytes in 44 blocks are definitely lost in loss record 21 of 21
==177960==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==177960==    by 0x40758A: ft_strjoin (get_next_line_utils.c:57)
==177960==    by 0x407452: get_next_line (get_next_line.c:85)
==177960==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==177960==    by 0x406A53: main (mandatory.cpp:119)
==177960== 
==177984== Invalid read of size 1
==177984==    at 0x484FBD4: strcmp (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==177984==    by 0x402CFA: gnl(int, char const*) (gnl.cpp:24)
==177984==    by 0x40711E: main (mandatory.cpp:141)
==177984==  Address 0x0 is not stack'd, malloc'd or (recently) free'd
==177984== 
==178016== Invalid write of size 1
==178016==    at 0x4073AA: get_next_line (get_next_line.c:48)
==178016==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178016==    by 0x404BB6: main (mandatory.cpp:25)
==178016==  Address 0x4de429f is 1 bytes before a block of size 43 alloc'd
==178016==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178016==    by 0x40731E: get_next_line (get_next_line.c:27)
==178016==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178016==    by 0x404BB6: main (mandatory.cpp:25)
==178016== 
==178016== Invalid write of size 1
==178016==    at 0x4073AA: get_next_line (get_next_line.c:48)
==178016==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178016==    by 0x404BD8: main (mandatory.cpp:25)
==178016==  Address 0x4de430f is 1 bytes before a block of size 43 alloc'd
==178016==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178016==    by 0x40731E: get_next_line (get_next_line.c:27)
==178016==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178016==    by 0x404BD8: main (mandatory.cpp:25)
==178016== 
==178016== 43 bytes in 1 blocks are definitely lost in loss record 1 of 2
==178016==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178016==    by 0x40731E: get_next_line (get_next_line.c:27)
==178016==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178016==    by 0x404BB6: main (mandatory.cpp:25)
==178016== 
==178016== 43 bytes in 1 blocks are definitely lost in loss record 2 of 2
==178016==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178016==    by 0x40731E: get_next_line (get_next_line.c:27)
==178016==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178016==    by 0x404BD8: main (mandatory.cpp:25)
==178016== 
==178024== Invalid read of size 1
==178024==    at 0x4073CE: get_next_line (get_next_line.c:59)
==178024==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178024==    by 0x404E53: main (mandatory.cpp:31)
==178024==  Address 0x0 is not stack'd, malloc'd or (recently) free'd
==178024== 
==178025== 1 bytes in 1 blocks are definitely lost in loss record 1 of 4
==178025==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178025==    by 0x40745D: get_next_line (get_next_line.c:82)
==178025==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178025==    by 0x40507F: main (mandatory.cpp:36)
==178025== 
==178025== 2 bytes in 1 blocks are possibly lost in loss record 2 of 4
==178025==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178025==    by 0x4075BC: ft_strjoin (get_next_line_utils.c:57)
==178025==    by 0x407484: get_next_line (get_next_line.c:85)
==178025==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178025==    by 0x40507F: main (mandatory.cpp:36)
==178025== 
==178025== 43 bytes in 1 blocks are definitely lost in loss record 3 of 4
==178025==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178025==    by 0x40731E: get_next_line (get_next_line.c:27)
==178025==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178025==    by 0x40507F: main (mandatory.cpp:36)
==178025== 
==178025== 43 bytes in 1 blocks are definitely lost in loss record 4 of 4
==178025==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178025==    by 0x40731E: get_next_line (get_next_line.c:27)
==178025==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178025==    by 0x40508B: main (mandatory.cpp:36)
==178025== 
==178034== Invalid write of size 1
==178034==    at 0x40742B: get_next_line (get_next_line.c:70)
==178034==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178034==    by 0x4052AB: main (mandatory.cpp:41)
==178034==  Address 0x4de59c0 is 0 bytes inside a block of size 42 free'd
==178034==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178034==    by 0x407884: ft_strdup2 (get_next_line_utils.c:229)
==178034==    by 0x40741F: get_next_line (get_next_line.c:69)
==178034==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178034==    by 0x4052AB: main (mandatory.cpp:41)
==178034==  Block was alloc'd at
==178034==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178034==    by 0x4075BC: ft_strjoin (get_next_line_utils.c:57)
==178034==    by 0x407484: get_next_line (get_next_line.c:85)
==178034==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178034==    by 0x4052AB: main (mandatory.cpp:41)
==178034== 
==178034== Invalid read of size 1
==178034==    at 0x407516: ft_strchr (get_next_line_utils.c:25)
==178034==    by 0x40734F: get_next_line (get_next_line.c:33)
==178034==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178034==    by 0x4052B7: main (mandatory.cpp:41)
==178034==  Address 0x4de59c0 is 0 bytes inside a block of size 42 free'd
==178034==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178034==    by 0x407884: ft_strdup2 (get_next_line_utils.c:229)
==178034==    by 0x40741F: get_next_line (get_next_line.c:69)
==178034==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178034==    by 0x4052AB: main (mandatory.cpp:41)
==178034==  Block was alloc'd at
==178034==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178034==    by 0x4075BC: ft_strjoin (get_next_line_utils.c:57)
==178034==    by 0x407484: get_next_line (get_next_line.c:85)
==178034==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178034==    by 0x4052AB: main (mandatory.cpp:41)
==178034== 
==178034== Invalid read of size 1
==178034==    at 0x4073CE: get_next_line (get_next_line.c:59)
==178034==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178034==    by 0x4052B7: main (mandatory.cpp:41)
==178034==  Address 0x4de59c0 is 0 bytes inside a block of size 42 free'd
==178034==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178034==    by 0x407884: ft_strdup2 (get_next_line_utils.c:229)
==178034==    by 0x40741F: get_next_line (get_next_line.c:69)
==178034==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178034==    by 0x4052AB: main (mandatory.cpp:41)
==178034==  Block was alloc'd at
==178034==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178034==    by 0x4075BC: ft_strjoin (get_next_line_utils.c:57)
==178034==    by 0x407484: get_next_line (get_next_line.c:85)
==178034==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178034==    by 0x4052AB: main (mandatory.cpp:41)
==178034== 
==178034== 1 bytes in 1 blocks are definitely lost in loss record 1 of 3
==178034==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178034==    by 0x40745D: get_next_line (get_next_line.c:82)
==178034==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178034==    by 0x4052AB: main (mandatory.cpp:41)
==178034== 
==178034== 43 bytes in 1 blocks are definitely lost in loss record 2 of 3
==178034==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178034==    by 0x40731E: get_next_line (get_next_line.c:27)
==178034==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178034==    by 0x4052AB: main (mandatory.cpp:41)
==178034== 
==178034== 43 bytes in 1 blocks are definitely lost in loss record 3 of 3
==178034==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178034==    by 0x40731E: get_next_line (get_next_line.c:27)
==178034==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178034==    by 0x4052B7: main (mandatory.cpp:41)
==178034== 
==178035== Invalid free() / delete / delete[] / realloc()
==178035==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178035==    by 0x407884: ft_strdup2 (get_next_line_utils.c:229)
==178035==    by 0x40741F: get_next_line (get_next_line.c:69)
==178035==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178035==    by 0x4054E9: main (mandatory.cpp:46)
==178035==  Address 0x4de5cf9 is 41 bytes inside a block of size 43 alloc'd
==178035==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178035==    by 0x4075BC: ft_strjoin (get_next_line_utils.c:57)
==178035==    by 0x407484: get_next_line (get_next_line.c:85)
==178035==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178035==    by 0x4054D7: main (mandatory.cpp:46)
==178035== 
==178035== 1 bytes in 1 blocks are definitely lost in loss record 1 of 5
==178035==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178035==    by 0x40745D: get_next_line (get_next_line.c:82)
==178035==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178035==    by 0x4054D7: main (mandatory.cpp:46)
==178035== 
==178035== 43 bytes in 1 blocks are possibly lost in loss record 2 of 5
==178035==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178035==    by 0x4075BC: ft_strjoin (get_next_line_utils.c:57)
==178035==    by 0x407484: get_next_line (get_next_line.c:85)
==178035==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178035==    by 0x4054D7: main (mandatory.cpp:46)
==178035== 
==178035== 43 bytes in 1 blocks are definitely lost in loss record 3 of 5
==178035==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178035==    by 0x40731E: get_next_line (get_next_line.c:27)
==178035==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178035==    by 0x4054D7: main (mandatory.cpp:46)
==178035== 
==178035== 43 bytes in 1 blocks are definitely lost in loss record 4 of 5
==178035==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178035==    by 0x40731E: get_next_line (get_next_line.c:27)
==178035==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178035==    by 0x4054E9: main (mandatory.cpp:46)
==178035== 
==178035== 43 bytes in 1 blocks are definitely lost in loss record 5 of 5
==178035==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178035==    by 0x40731E: get_next_line (get_next_line.c:27)
==178035==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178035==    by 0x4054F5: main (mandatory.cpp:46)
==178035== 
==178037== Invalid write of size 1
==178037==    at 0x40742B: get_next_line (get_next_line.c:70)
==178037==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178037==    by 0x405715: main (mandatory.cpp:52)
==178037==  Address 0x4de5fe0 is 0 bytes inside a block of size 43 free'd
==178037==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178037==    by 0x407884: ft_strdup2 (get_next_line_utils.c:229)
==178037==    by 0x40741F: get_next_line (get_next_line.c:69)
==178037==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178037==    by 0x405715: main (mandatory.cpp:52)
==178037==  Block was alloc'd at
==178037==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178037==    by 0x4075BC: ft_strjoin (get_next_line_utils.c:57)
==178037==    by 0x407484: get_next_line (get_next_line.c:85)
==178037==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178037==    by 0x405715: main (mandatory.cpp:52)
==178037== 
==178037== Invalid read of size 1
==178037==    at 0x407516: ft_strchr (get_next_line_utils.c:25)
==178037==    by 0x40734F: get_next_line (get_next_line.c:33)
==178037==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178037==    by 0x405721: main (mandatory.cpp:52)
==178037==  Address 0x4de5fe0 is 0 bytes inside a block of size 43 free'd
==178037==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178037==    by 0x407884: ft_strdup2 (get_next_line_utils.c:229)
==178037==    by 0x40741F: get_next_line (get_next_line.c:69)
==178037==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178037==    by 0x405715: main (mandatory.cpp:52)
==178037==  Block was alloc'd at
==178037==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178037==    by 0x4075BC: ft_strjoin (get_next_line_utils.c:57)
==178037==    by 0x407484: get_next_line (get_next_line.c:85)
==178037==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178037==    by 0x405715: main (mandatory.cpp:52)
==178037== 
==178037== Invalid read of size 1
==178037==    at 0x4073CE: get_next_line (get_next_line.c:59)
==178037==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178037==    by 0x405721: main (mandatory.cpp:52)
==178037==  Address 0x4de5fe0 is 0 bytes inside a block of size 43 free'd
==178037==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178037==    by 0x407884: ft_strdup2 (get_next_line_utils.c:229)
==178037==    by 0x40741F: get_next_line (get_next_line.c:69)
==178037==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178037==    by 0x405715: main (mandatory.cpp:52)
==178037==  Block was alloc'd at
==178037==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178037==    by 0x4075BC: ft_strjoin (get_next_line_utils.c:57)
==178037==    by 0x407484: get_next_line (get_next_line.c:85)
==178037==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178037==    by 0x405715: main (mandatory.cpp:52)
==178037== 
==178037== 1 bytes in 1 blocks are definitely lost in loss record 1 of 3
==178037==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178037==    by 0x40745D: get_next_line (get_next_line.c:82)
==178037==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178037==    by 0x405715: main (mandatory.cpp:52)
==178037== 
==178037== 43 bytes in 1 blocks are definitely lost in loss record 2 of 3
==178037==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178037==    by 0x40731E: get_next_line (get_next_line.c:27)
==178037==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178037==    by 0x405715: main (mandatory.cpp:52)
==178037== 
==178037== 43 bytes in 1 blocks are definitely lost in loss record 3 of 3
==178037==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178037==    by 0x40731E: get_next_line (get_next_line.c:27)
==178037==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178037==    by 0x405721: main (mandatory.cpp:52)
==178037== 
==178047== 1 bytes in 1 blocks are definitely lost in loss record 1 of 4
==178047==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178047==    by 0x40745D: get_next_line (get_next_line.c:82)
==178047==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178047==    by 0x405941: main (mandatory.cpp:57)
==178047== 
==178047== 43 bytes in 1 blocks are possibly lost in loss record 2 of 4
==178047==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178047==    by 0x4075BC: ft_strjoin (get_next_line_utils.c:57)
==178047==    by 0x407484: get_next_line (get_next_line.c:85)
==178047==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178047==    by 0x405941: main (mandatory.cpp:57)
==178047== 
==178047== 43 bytes in 1 blocks are definitely lost in loss record 3 of 4
==178047==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178047==    by 0x40731E: get_next_line (get_next_line.c:27)
==178047==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178047==    by 0x405941: main (mandatory.cpp:57)
==178047== 
==178047== 43 bytes in 1 blocks are definitely lost in loss record 4 of 4
==178047==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178047==    by 0x40731E: get_next_line (get_next_line.c:27)
==178047==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178047==    by 0x405991: main (mandatory.cpp:57)
==178047== 
==178050== Invalid write of size 1
==178050==    at 0x40742B: get_next_line (get_next_line.c:70)
==178050==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178050==    by 0x405BBB: main (mandatory.cpp:68)
==178050==  Address 0x4de6670 is 0 bytes inside a block of size 44 free'd
==178050==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178050==    by 0x407884: ft_strdup2 (get_next_line_utils.c:229)
==178050==    by 0x40741F: get_next_line (get_next_line.c:69)
==178050==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178050==    by 0x405BBB: main (mandatory.cpp:68)
==178050==  Block was alloc'd at
==178050==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178050==    by 0x4075BC: ft_strjoin (get_next_line_utils.c:57)
==178050==    by 0x407484: get_next_line (get_next_line.c:85)
==178050==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178050==    by 0x405BBB: main (mandatory.cpp:68)
==178050== 
==178050== Invalid read of size 1
==178050==    at 0x407516: ft_strchr (get_next_line_utils.c:25)
==178050==    by 0x40734F: get_next_line (get_next_line.c:33)
==178050==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178050==    by 0x405BC7: main (mandatory.cpp:68)
==178050==  Address 0x4de6670 is 0 bytes inside a block of size 44 free'd
==178050==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178050==    by 0x407884: ft_strdup2 (get_next_line_utils.c:229)
==178050==    by 0x40741F: get_next_line (get_next_line.c:69)
==178050==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178050==    by 0x405BBB: main (mandatory.cpp:68)
==178050==  Block was alloc'd at
==178050==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178050==    by 0x4075BC: ft_strjoin (get_next_line_utils.c:57)
==178050==    by 0x407484: get_next_line (get_next_line.c:85)
==178050==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178050==    by 0x405BBB: main (mandatory.cpp:68)
==178050== 
==178050== Invalid read of size 1
==178050==    at 0x4073CE: get_next_line (get_next_line.c:59)
==178050==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178050==    by 0x405BC7: main (mandatory.cpp:68)
==178050==  Address 0x4de6670 is 0 bytes inside a block of size 44 free'd
==178050==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178050==    by 0x407884: ft_strdup2 (get_next_line_utils.c:229)
==178050==    by 0x40741F: get_next_line (get_next_line.c:69)
==178050==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178050==    by 0x405BBB: main (mandatory.cpp:68)
==178050==  Block was alloc'd at
==178050==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178050==    by 0x4075BC: ft_strjoin (get_next_line_utils.c:57)
==178050==    by 0x407484: get_next_line (get_next_line.c:85)
==178050==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178050==    by 0x405BBB: main (mandatory.cpp:68)
==178050== 
==178050== 1 bytes in 1 blocks are definitely lost in loss record 1 of 4
==178050==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178050==    by 0x40745D: get_next_line (get_next_line.c:82)
==178050==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178050==    by 0x405BBB: main (mandatory.cpp:68)
==178050== 
==178050== 43 bytes in 1 blocks are definitely lost in loss record 2 of 4
==178050==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178050==    by 0x40731E: get_next_line (get_next_line.c:27)
==178050==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178050==    by 0x405BBB: main (mandatory.cpp:68)
==178050== 
==178050== 43 bytes in 1 blocks are definitely lost in loss record 3 of 4
==178050==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178050==    by 0x4075BC: ft_strjoin (get_next_line_utils.c:57)
==178050==    by 0x407484: get_next_line (get_next_line.c:85)
==178050==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178050==    by 0x405BBB: main (mandatory.cpp:68)
==178050== 
==178050== 43 bytes in 1 blocks are definitely lost in loss record 4 of 4
==178050==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178050==    by 0x40731E: get_next_line (get_next_line.c:27)
==178050==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178050==    by 0x405BC7: main (mandatory.cpp:68)
==178050== 
==178053== Invalid free() / delete / delete[] / realloc()
==178053==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178053==    by 0x407884: ft_strdup2 (get_next_line_utils.c:229)
==178053==    by 0x40741F: get_next_line (get_next_line.c:69)
==178053==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178053==    by 0x405DF9: main (mandatory.cpp:73)
==178053==  Address 0x4de69ab is 43 bytes inside a block of size 45 alloc'd
==178053==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178053==    by 0x4075BC: ft_strjoin (get_next_line_utils.c:57)
==178053==    by 0x407484: get_next_line (get_next_line.c:85)
==178053==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178053==    by 0x405DE7: main (mandatory.cpp:73)
==178053== 
==178053== 1 bytes in 1 blocks are definitely lost in loss record 1 of 6
==178053==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178053==    by 0x40745D: get_next_line (get_next_line.c:82)
==178053==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178053==    by 0x405DE7: main (mandatory.cpp:73)
==178053== 
==178053== 43 bytes in 1 blocks are definitely lost in loss record 2 of 6
==178053==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178053==    by 0x40731E: get_next_line (get_next_line.c:27)
==178053==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178053==    by 0x405DE7: main (mandatory.cpp:73)
==178053== 
==178053== 43 bytes in 1 blocks are definitely lost in loss record 3 of 6
==178053==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178053==    by 0x4075BC: ft_strjoin (get_next_line_utils.c:57)
==178053==    by 0x407484: get_next_line (get_next_line.c:85)
==178053==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178053==    by 0x405DE7: main (mandatory.cpp:73)
==178053== 
==178053== 43 bytes in 1 blocks are definitely lost in loss record 4 of 6
==178053==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178053==    by 0x40731E: get_next_line (get_next_line.c:27)
==178053==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178053==    by 0x405DF9: main (mandatory.cpp:73)
==178053== 
==178053== 43 bytes in 1 blocks are definitely lost in loss record 5 of 6
==178053==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178053==    by 0x40731E: get_next_line (get_next_line.c:27)
==178053==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178053==    by 0x405E05: main (mandatory.cpp:73)
==178053== 
==178053== 45 bytes in 1 blocks are possibly lost in loss record 6 of 6
==178053==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178053==    by 0x4075BC: ft_strjoin (get_next_line_utils.c:57)
==178053==    by 0x407484: get_next_line (get_next_line.c:85)
==178053==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178053==    by 0x405DE7: main (mandatory.cpp:73)
==178053== 
==178054== 1 bytes in 1 blocks are definitely lost in loss record 1 of 8
==178054==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178054==    by 0x40745D: get_next_line (get_next_line.c:82)
==178054==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178054==    by 0x406025: main (mandatory.cpp:79)
==178054== 
==178054== 6 bytes in 1 blocks are possibly lost in loss record 2 of 8
==178054==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178054==    by 0x4075BC: ft_strjoin (get_next_line_utils.c:57)
==178054==    by 0x407484: get_next_line (get_next_line.c:85)
==178054==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178054==    by 0x406025: main (mandatory.cpp:79)
==178054== 
==178054== 43 bytes in 1 blocks are definitely lost in loss record 3 of 8
==178054==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178054==    by 0x40731E: get_next_line (get_next_line.c:27)
==178054==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178054==    by 0x406025: main (mandatory.cpp:79)
==178054== 
==178054== 43 bytes in 1 blocks are definitely lost in loss record 4 of 8
==178054==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178054==    by 0x40731E: get_next_line (get_next_line.c:27)
==178054==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178054==    by 0x406037: main (mandatory.cpp:79)
==178054== 
==178054== 43 bytes in 1 blocks are definitely lost in loss record 5 of 8
==178054==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178054==    by 0x40731E: get_next_line (get_next_line.c:27)
==178054==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178054==    by 0x406049: main (mandatory.cpp:79)
==178054== 
==178054== 43 bytes in 1 blocks are definitely lost in loss record 6 of 8
==178054==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178054==    by 0x40731E: get_next_line (get_next_line.c:27)
==178054==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178054==    by 0x40605B: main (mandatory.cpp:79)
==178054== 
==178054== 43 bytes in 1 blocks are definitely lost in loss record 7 of 8
==178054==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178054==    by 0x40731E: get_next_line (get_next_line.c:27)
==178054==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178054==    by 0x40606D: main (mandatory.cpp:79)
==178054== 
==178054== 43 bytes in 1 blocks are definitely lost in loss record 8 of 8
==178054==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178054==    by 0x40731E: get_next_line (get_next_line.c:27)
==178054==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178054==    by 0x406079: main (mandatory.cpp:79)
==178054== 
==178092== Invalid write of size 1
==178092==    at 0x40742B: get_next_line (get_next_line.c:70)
==178092==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178092==    by 0x4062E1: main (mandatory.cpp:88)
==178092==  Address 0x4de7590 is 0 bytes inside a block of size 42 free'd
==178092==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178092==    by 0x407884: ft_strdup2 (get_next_line_utils.c:229)
==178092==    by 0x40741F: get_next_line (get_next_line.c:69)
==178092==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178092==    by 0x4062E1: main (mandatory.cpp:88)
==178092==  Block was alloc'd at
==178092==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178092==    by 0x4075BC: ft_strjoin (get_next_line_utils.c:57)
==178092==    by 0x407484: get_next_line (get_next_line.c:85)
==178092==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178092==    by 0x4062E1: main (mandatory.cpp:88)
==178092== 
==178092== Invalid read of size 1
==178092==    at 0x407516: ft_strchr (get_next_line_utils.c:25)
==178092==    by 0x40734F: get_next_line (get_next_line.c:33)
==178092==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178092==    by 0x4062ED: main (mandatory.cpp:88)
==178092==  Address 0x4de7590 is 0 bytes inside a block of size 42 free'd
==178092==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178092==    by 0x407884: ft_strdup2 (get_next_line_utils.c:229)
==178092==    by 0x40741F: get_next_line (get_next_line.c:69)
==178092==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178092==    by 0x4062E1: main (mandatory.cpp:88)
==178092==  Block was alloc'd at
==178092==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178092==    by 0x4075BC: ft_strjoin (get_next_line_utils.c:57)
==178092==    by 0x407484: get_next_line (get_next_line.c:85)
==178092==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178092==    by 0x4062E1: main (mandatory.cpp:88)
==178092== 
==178092== Invalid read of size 1
==178092==    at 0x4073CE: get_next_line (get_next_line.c:59)
==178092==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178092==    by 0x4062ED: main (mandatory.cpp:88)
==178092==  Address 0x4de7590 is 0 bytes inside a block of size 42 free'd
==178092==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178092==    by 0x407884: ft_strdup2 (get_next_line_utils.c:229)
==178092==    by 0x40741F: get_next_line (get_next_line.c:69)
==178092==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178092==    by 0x4062E1: main (mandatory.cpp:88)
==178092==  Block was alloc'd at
==178092==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178092==    by 0x4075BC: ft_strjoin (get_next_line_utils.c:57)
==178092==    by 0x407484: get_next_line (get_next_line.c:85)
==178092==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178092==    by 0x4062E1: main (mandatory.cpp:88)
==178092== 
==178092== 1 bytes in 1 blocks are definitely lost in loss record 1 of 11
==178092==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178092==    by 0x40745D: get_next_line (get_next_line.c:82)
==178092==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178092==    by 0x406299: main (mandatory.cpp:88)
==178092== 
==178092== 43 bytes in 1 blocks are definitely lost in loss record 2 of 11
==178092==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178092==    by 0x40731E: get_next_line (get_next_line.c:27)
==178092==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178092==    by 0x406299: main (mandatory.cpp:88)
==178092== 
==178092== 43 bytes in 1 blocks are definitely lost in loss record 3 of 11
==178092==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178092==    by 0x4075BC: ft_strjoin (get_next_line_utils.c:57)
==178092==    by 0x407484: get_next_line (get_next_line.c:85)
==178092==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178092==    by 0x406299: main (mandatory.cpp:88)
==178092== 
==178092== 43 bytes in 1 blocks are definitely lost in loss record 4 of 11
==178092==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178092==    by 0x40731E: get_next_line (get_next_line.c:27)
==178092==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178092==    by 0x4062AB: main (mandatory.cpp:88)
==178092== 
==178092== 43 bytes in 1 blocks are definitely lost in loss record 5 of 11
==178092==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178092==    by 0x40731E: get_next_line (get_next_line.c:27)
==178092==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178092==    by 0x4062BD: main (mandatory.cpp:88)
==178092== 
==178092== 43 bytes in 1 blocks are definitely lost in loss record 6 of 11
==178092==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178092==    by 0x40731E: get_next_line (get_next_line.c:27)
==178092==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178092==    by 0x4062CF: main (mandatory.cpp:88)
==178092== 
==178092== 43 bytes in 1 blocks are definitely lost in loss record 7 of 11
==178092==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178092==    by 0x40731E: get_next_line (get_next_line.c:27)
==178092==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178092==    by 0x4062E1: main (mandatory.cpp:88)
==178092== 
==178092== 43 bytes in 1 blocks are definitely lost in loss record 8 of 11
==178092==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178092==    by 0x40731E: get_next_line (get_next_line.c:27)
==178092==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178092==    by 0x4062ED: main (mandatory.cpp:88)
==178092== 
==178092== 82 bytes in 1 blocks are definitely lost in loss record 9 of 11
==178092==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178092==    by 0x4075BC: ft_strjoin (get_next_line_utils.c:57)
==178092==    by 0x407484: get_next_line (get_next_line.c:85)
==178092==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178092==    by 0x4062CF: main (mandatory.cpp:88)
==178092== 
==178092== 84 bytes in 1 blocks are definitely lost in loss record 10 of 11
==178092==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178092==    by 0x4075BC: ft_strjoin (get_next_line_utils.c:57)
==178092==    by 0x407484: get_next_line (get_next_line.c:85)
==178092==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178092==    by 0x4062BD: main (mandatory.cpp:88)
==178092== 
==178092== 128 bytes in 2 blocks are definitely lost in loss record 11 of 11
==178092==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178092==    by 0x4075BC: ft_strjoin (get_next_line_utils.c:57)
==178092==    by 0x407484: get_next_line (get_next_line.c:85)
==178092==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178092==    by 0x4062AB: main (mandatory.cpp:88)
==178092== 
==178103== 1 bytes in 1 blocks are definitely lost in loss record 1 of 12
==178103==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178103==    by 0x40745D: get_next_line (get_next_line.c:82)
==178103==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178103==    by 0x40650D: main (mandatory.cpp:97)
==178103== 
==178103== 42 bytes in 1 blocks are possibly lost in loss record 2 of 12
==178103==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178103==    by 0x4075BC: ft_strjoin (get_next_line_utils.c:57)
==178103==    by 0x407484: get_next_line (get_next_line.c:85)
==178103==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178103==    by 0x406555: main (mandatory.cpp:97)
==178103== 
==178103== 43 bytes in 1 blocks are definitely lost in loss record 3 of 12
==178103==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178103==    by 0x40731E: get_next_line (get_next_line.c:27)
==178103==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178103==    by 0x40650D: main (mandatory.cpp:97)
==178103== 
==178103== 43 bytes in 1 blocks are definitely lost in loss record 4 of 12
==178103==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178103==    by 0x4075BC: ft_strjoin (get_next_line_utils.c:57)
==178103==    by 0x407484: get_next_line (get_next_line.c:85)
==178103==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178103==    by 0x40650D: main (mandatory.cpp:97)
==178103== 
==178103== 43 bytes in 1 blocks are definitely lost in loss record 5 of 12
==178103==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178103==    by 0x40731E: get_next_line (get_next_line.c:27)
==178103==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178103==    by 0x40651F: main (mandatory.cpp:97)
==178103== 
==178103== 43 bytes in 1 blocks are definitely lost in loss record 6 of 12
==178103==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178103==    by 0x40731E: get_next_line (get_next_line.c:27)
==178103==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178103==    by 0x406531: main (mandatory.cpp:97)
==178103== 
==178103== 43 bytes in 1 blocks are definitely lost in loss record 7 of 12
==178103==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178103==    by 0x40731E: get_next_line (get_next_line.c:27)
==178103==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178103==    by 0x406543: main (mandatory.cpp:97)
==178103== 
==178103== 43 bytes in 1 blocks are definitely lost in loss record 8 of 12
==178103==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178103==    by 0x4075BC: ft_strjoin (get_next_line_utils.c:57)
==178103==    by 0x407484: get_next_line (get_next_line.c:85)
==178103==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178103==    by 0x406543: main (mandatory.cpp:97)
==178103== 
==178103== 43 bytes in 1 blocks are definitely lost in loss record 9 of 12
==178103==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178103==    by 0x40731E: get_next_line (get_next_line.c:27)
==178103==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178103==    by 0x406555: main (mandatory.cpp:97)
==178103== 
==178103== 43 bytes in 1 blocks are definitely lost in loss record 10 of 12
==178103==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178103==    by 0x40731E: get_next_line (get_next_line.c:27)
==178103==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178103==    by 0x406561: main (mandatory.cpp:97)
==178103== 
==178103== 44 bytes in 1 blocks are definitely lost in loss record 11 of 12
==178103==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178103==    by 0x4075BC: ft_strjoin (get_next_line_utils.c:57)
==178103==    by 0x407484: get_next_line (get_next_line.c:85)
==178103==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178103==    by 0x40651F: main (mandatory.cpp:97)
==178103== 
==178103== 44 bytes in 1 blocks are definitely lost in loss record 12 of 12
==178103==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178103==    by 0x4075BC: ft_strjoin (get_next_line_utils.c:57)
==178103==    by 0x407484: get_next_line (get_next_line.c:85)
==178103==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178103==    by 0x406531: main (mandatory.cpp:97)
==178103== 
==178106== Invalid write of size 1
==178106==    at 0x40742B: get_next_line (get_next_line.c:70)
==178106==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178106==    by 0x406811: main (mandatory.cpp:106)
==178106==  Address 0x4de7ee0 is 0 bytes inside a block of size 42 free'd
==178106==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178106==    by 0x407884: ft_strdup2 (get_next_line_utils.c:229)
==178106==    by 0x40741F: get_next_line (get_next_line.c:69)
==178106==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178106==    by 0x406811: main (mandatory.cpp:106)
==178106==  Block was alloc'd at
==178106==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178106==    by 0x4075BC: ft_strjoin (get_next_line_utils.c:57)
==178106==    by 0x407484: get_next_line (get_next_line.c:85)
==178106==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178106==    by 0x406811: main (mandatory.cpp:106)
==178106== 
==178106== Invalid read of size 1
==178106==    at 0x407516: ft_strchr (get_next_line_utils.c:25)
==178106==    by 0x40734F: get_next_line (get_next_line.c:33)
==178106==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178106==    by 0x40681D: main (mandatory.cpp:106)
==178106==  Address 0x4de7ee0 is 0 bytes inside a block of size 42 free'd
==178106==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178106==    by 0x407884: ft_strdup2 (get_next_line_utils.c:229)
==178106==    by 0x40741F: get_next_line (get_next_line.c:69)
==178106==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178106==    by 0x406811: main (mandatory.cpp:106)
==178106==  Block was alloc'd at
==178106==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178106==    by 0x4075BC: ft_strjoin (get_next_line_utils.c:57)
==178106==    by 0x407484: get_next_line (get_next_line.c:85)
==178106==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178106==    by 0x406811: main (mandatory.cpp:106)
==178106== 
==178106== Invalid read of size 1
==178106==    at 0x4073CE: get_next_line (get_next_line.c:59)
==178106==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178106==    by 0x40681D: main (mandatory.cpp:106)
==178106==  Address 0x4de7ee0 is 0 bytes inside a block of size 42 free'd
==178106==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178106==    by 0x407884: ft_strdup2 (get_next_line_utils.c:229)
==178106==    by 0x40741F: get_next_line (get_next_line.c:69)
==178106==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178106==    by 0x406811: main (mandatory.cpp:106)
==178106==  Block was alloc'd at
==178106==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178106==    by 0x4075BC: ft_strjoin (get_next_line_utils.c:57)
==178106==    by 0x407484: get_next_line (get_next_line.c:85)
==178106==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178106==    by 0x406811: main (mandatory.cpp:106)
==178106== 
==178106== 1 bytes in 1 blocks are definitely lost in loss record 1 of 16
==178106==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178106==    by 0x40745D: get_next_line (get_next_line.c:82)
==178106==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178106==    by 0x406781: main (mandatory.cpp:106)
==178106== 
==178106== 43 bytes in 1 blocks are definitely lost in loss record 2 of 16
==178106==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178106==    by 0x40731E: get_next_line (get_next_line.c:27)
==178106==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178106==    by 0x406781: main (mandatory.cpp:106)
==178106== 
==178106== 43 bytes in 1 blocks are definitely lost in loss record 3 of 16
==178106==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178106==    by 0x4075BC: ft_strjoin (get_next_line_utils.c:57)
==178106==    by 0x407484: get_next_line (get_next_line.c:85)
==178106==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178106==    by 0x406781: main (mandatory.cpp:106)
==178106== 
==178106== 43 bytes in 1 blocks are definitely lost in loss record 4 of 16
==178106==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178106==    by 0x40731E: get_next_line (get_next_line.c:27)
==178106==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178106==    by 0x406793: main (mandatory.cpp:106)
==178106== 
==178106== 43 bytes in 1 blocks are definitely lost in loss record 5 of 16
==178106==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178106==    by 0x4075BC: ft_strjoin (get_next_line_utils.c:57)
==178106==    by 0x407484: get_next_line (get_next_line.c:85)
==178106==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178106==    by 0x406793: main (mandatory.cpp:106)
==178106== 
==178106== 43 bytes in 1 blocks are definitely lost in loss record 6 of 16
==178106==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178106==    by 0x40731E: get_next_line (get_next_line.c:27)
==178106==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178106==    by 0x4067A5: main (mandatory.cpp:106)
==178106== 
==178106== 43 bytes in 1 blocks are definitely lost in loss record 7 of 16
==178106==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178106==    by 0x40731E: get_next_line (get_next_line.c:27)
==178106==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178106==    by 0x4067B7: main (mandatory.cpp:106)
==178106== 
==178106== 43 bytes in 1 blocks are definitely lost in loss record 8 of 16
==178106==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178106==    by 0x40731E: get_next_line (get_next_line.c:27)
==178106==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178106==    by 0x4067C9: main (mandatory.cpp:106)
==178106== 
==178106== 43 bytes in 1 blocks are definitely lost in loss record 9 of 16
==178106==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178106==    by 0x40731E: get_next_line (get_next_line.c:27)
==178106==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178106==    by 0x4067DB: main (mandatory.cpp:106)
==178106== 
==178106== 43 bytes in 1 blocks are definitely lost in loss record 10 of 16
==178106==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178106==    by 0x40731E: get_next_line (get_next_line.c:27)
==178106==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178106==    by 0x4067ED: main (mandatory.cpp:106)
==178106== 
==178106== 43 bytes in 1 blocks are definitely lost in loss record 11 of 16
==178106==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178106==    by 0x40731E: get_next_line (get_next_line.c:27)
==178106==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178106==    by 0x4067FF: main (mandatory.cpp:106)
==178106== 
==178106== 43 bytes in 1 blocks are definitely lost in loss record 12 of 16
==178106==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178106==    by 0x40731E: get_next_line (get_next_line.c:27)
==178106==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178106==    by 0x406811: main (mandatory.cpp:106)
==178106== 
==178106== 43 bytes in 1 blocks are definitely lost in loss record 13 of 16
==178106==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178106==    by 0x40731E: get_next_line (get_next_line.c:27)
==178106==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178106==    by 0x40681D: main (mandatory.cpp:106)
==178106== 
==178106== 79 bytes in 1 blocks are definitely lost in loss record 14 of 16
==178106==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178106==    by 0x4075BC: ft_strjoin (get_next_line_utils.c:57)
==178106==    by 0x407484: get_next_line (get_next_line.c:85)
==178106==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178106==    by 0x4067ED: main (mandatory.cpp:106)
==178106== 
==178106== 82 bytes in 1 blocks are definitely lost in loss record 15 of 16
==178106==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178106==    by 0x4075BC: ft_strjoin (get_next_line_utils.c:57)
==178106==    by 0x407484: get_next_line (get_next_line.c:85)
==178106==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178106==    by 0x4067C9: main (mandatory.cpp:106)
==178106== 
==178106== 84 bytes in 1 blocks are definitely lost in loss record 16 of 16
==178106==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178106==    by 0x4075BC: ft_strjoin (get_next_line_utils.c:57)
==178106==    by 0x407484: get_next_line (get_next_line.c:85)
==178106==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178106==    by 0x4067A5: main (mandatory.cpp:106)
==178106== 
==178111== 1 bytes in 1 blocks are definitely lost in loss record 1 of 17
==178111==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178111==    by 0x40745D: get_next_line (get_next_line.c:82)
==178111==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178111==    by 0x406A3D: main (mandatory.cpp:119)
==178111== 
==178111== 43 bytes in 1 blocks are possibly lost in loss record 2 of 17
==178111==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178111==    by 0x4075BC: ft_strjoin (get_next_line_utils.c:57)
==178111==    by 0x407484: get_next_line (get_next_line.c:85)
==178111==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178111==    by 0x406ACD: main (mandatory.cpp:119)
==178111== 
==178111== 43 bytes in 1 blocks are definitely lost in loss record 3 of 17
==178111==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178111==    by 0x40731E: get_next_line (get_next_line.c:27)
==178111==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178111==    by 0x406A3D: main (mandatory.cpp:119)
==178111== 
==178111== 43 bytes in 1 blocks are definitely lost in loss record 4 of 17
==178111==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178111==    by 0x4075BC: ft_strjoin (get_next_line_utils.c:57)
==178111==    by 0x407484: get_next_line (get_next_line.c:85)
==178111==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178111==    by 0x406A3D: main (mandatory.cpp:119)
==178111== 
==178111== 43 bytes in 1 blocks are definitely lost in loss record 5 of 17
==178111==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178111==    by 0x40731E: get_next_line (get_next_line.c:27)
==178111==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178111==    by 0x406A4F: main (mandatory.cpp:119)
==178111== 
==178111== 43 bytes in 1 blocks are definitely lost in loss record 6 of 17
==178111==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178111==    by 0x4075BC: ft_strjoin (get_next_line_utils.c:57)
==178111==    by 0x407484: get_next_line (get_next_line.c:85)
==178111==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178111==    by 0x406A4F: main (mandatory.cpp:119)
==178111== 
==178111== 43 bytes in 1 blocks are definitely lost in loss record 7 of 17
==178111==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178111==    by 0x40731E: get_next_line (get_next_line.c:27)
==178111==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178111==    by 0x406A61: main (mandatory.cpp:119)
==178111== 
==178111== 43 bytes in 1 blocks are definitely lost in loss record 8 of 17
==178111==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178111==    by 0x40731E: get_next_line (get_next_line.c:27)
==178111==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178111==    by 0x406A73: main (mandatory.cpp:119)
==178111== 
==178111== 43 bytes in 1 blocks are definitely lost in loss record 9 of 17
==178111==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178111==    by 0x40731E: get_next_line (get_next_line.c:27)
==178111==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178111==    by 0x406A85: main (mandatory.cpp:119)
==178111== 
==178111== 43 bytes in 1 blocks are definitely lost in loss record 10 of 17
==178111==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178111==    by 0x40731E: get_next_line (get_next_line.c:27)
==178111==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178111==    by 0x406A97: main (mandatory.cpp:119)
==178111== 
==178111== 43 bytes in 1 blocks are definitely lost in loss record 11 of 17
==178111==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178111==    by 0x40731E: get_next_line (get_next_line.c:27)
==178111==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178111==    by 0x406AA9: main (mandatory.cpp:119)
==178111== 
==178111== 43 bytes in 1 blocks are definitely lost in loss record 12 of 17
==178111==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178111==    by 0x40731E: get_next_line (get_next_line.c:27)
==178111==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178111==    by 0x406ABB: main (mandatory.cpp:119)
==178111== 
==178111== 43 bytes in 1 blocks are definitely lost in loss record 13 of 17
==178111==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178111==    by 0x40731E: get_next_line (get_next_line.c:27)
==178111==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178111==    by 0x406ACD: main (mandatory.cpp:119)
==178111== 
==178111== 43 bytes in 1 blocks are definitely lost in loss record 14 of 17
==178111==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178111==    by 0x40731E: get_next_line (get_next_line.c:27)
==178111==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178111==    by 0x406AD9: main (mandatory.cpp:119)
==178111== 
==178111== 79 bytes in 1 blocks are definitely lost in loss record 15 of 17
==178111==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178111==    by 0x4075BC: ft_strjoin (get_next_line_utils.c:57)
==178111==    by 0x407484: get_next_line (get_next_line.c:85)
==178111==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178111==    by 0x406AA9: main (mandatory.cpp:119)
==178111== 
==178111== 82 bytes in 1 blocks are definitely lost in loss record 16 of 17
==178111==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178111==    by 0x4075BC: ft_strjoin (get_next_line_utils.c:57)
==178111==    by 0x407484: get_next_line (get_next_line.c:85)
==178111==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178111==    by 0x406A85: main (mandatory.cpp:119)
==178111== 
==178111== 84 bytes in 1 blocks are definitely lost in loss record 17 of 17
==178111==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178111==    by 0x4075BC: ft_strjoin (get_next_line_utils.c:57)
==178111==    by 0x407484: get_next_line (get_next_line.c:85)
==178111==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178111==    by 0x406A61: main (mandatory.cpp:119)
==178111== 
==178112== Invalid write of size 1
==178112==    at 0x40742B: get_next_line (get_next_line.c:70)
==178112==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178112==    by 0x406CF9: main (mandatory.cpp:132)
==178112==  Address 0x4f0f9e0 is 0 bytes inside a block of size 10,001 free'd
==178112==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178112==    by 0x407884: ft_strdup2 (get_next_line_utils.c:229)
==178112==    by 0x40741F: get_next_line (get_next_line.c:69)
==178112==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178112==    by 0x406CF9: main (mandatory.cpp:132)
==178112==  Block was alloc'd at
==178112==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178112==    by 0x4075BC: ft_strjoin (get_next_line_utils.c:57)
==178112==    by 0x407484: get_next_line (get_next_line.c:85)
==178112==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178112==    by 0x406CF9: main (mandatory.cpp:132)
==178112== 
==178112== Invalid read of size 1
==178112==    at 0x407516: ft_strchr (get_next_line_utils.c:25)
==178112==    by 0x40734F: get_next_line (get_next_line.c:33)
==178112==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178112==    by 0x406D05: main (mandatory.cpp:132)
==178112==  Address 0x4f0f9e0 is 0 bytes inside a block of size 10,001 free'd
==178112==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178112==    by 0x407884: ft_strdup2 (get_next_line_utils.c:229)
==178112==    by 0x40741F: get_next_line (get_next_line.c:69)
==178112==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178112==    by 0x406CF9: main (mandatory.cpp:132)
==178112==  Block was alloc'd at
==178112==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178112==    by 0x4075BC: ft_strjoin (get_next_line_utils.c:57)
==178112==    by 0x407484: get_next_line (get_next_line.c:85)
==178112==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178112==    by 0x406CF9: main (mandatory.cpp:132)
==178112== 
==178112== Invalid read of size 1
==178112==    at 0x4073CE: get_next_line (get_next_line.c:59)
==178112==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178112==    by 0x406D05: main (mandatory.cpp:132)
==178112==  Address 0x4f0f9e0 is 0 bytes inside a block of size 10,001 free'd
==178112==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178112==    by 0x407884: ft_strdup2 (get_next_line_utils.c:229)
==178112==    by 0x40741F: get_next_line (get_next_line.c:69)
==178112==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178112==    by 0x406CF9: main (mandatory.cpp:132)
==178112==  Block was alloc'd at
==178112==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178112==    by 0x4075BC: ft_strjoin (get_next_line_utils.c:57)
==178112==    by 0x407484: get_next_line (get_next_line.c:85)
==178112==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178112==    by 0x406CF9: main (mandatory.cpp:132)
==178112== 
==178112== 1 bytes in 1 blocks are definitely lost in loss record 1 of 4
==178112==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178112==    by 0x40745D: get_next_line (get_next_line.c:82)
==178112==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178112==    by 0x406CF9: main (mandatory.cpp:132)
==178112== 
==178112== 43 bytes in 1 blocks are definitely lost in loss record 2 of 4
==178112==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178112==    by 0x40731E: get_next_line (get_next_line.c:27)
==178112==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178112==    by 0x406CF9: main (mandatory.cpp:132)
==178112== 
==178112== 43 bytes in 1 blocks are definitely lost in loss record 3 of 4
==178112==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178112==    by 0x40731E: get_next_line (get_next_line.c:27)
==178112==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178112==    by 0x406D05: main (mandatory.cpp:132)
==178112== 
==178112== 1,194,760 bytes in 238 blocks are definitely lost in loss record 4 of 4
==178112==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178112==    by 0x4075BC: ft_strjoin (get_next_line_utils.c:57)
==178112==    by 0x407484: get_next_line (get_next_line.c:85)
==178112==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178112==    by 0x406CF9: main (mandatory.cpp:132)
==178112== 
==178114== 1 bytes in 1 blocks are definitely lost in loss record 1 of 5
==178114==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178114==    by 0x40745D: get_next_line (get_next_line.c:82)
==178114==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178114==    by 0x406F25: main (mandatory.cpp:136)
==178114== 
==178114== 43 bytes in 1 blocks are definitely lost in loss record 2 of 5
==178114==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178114==    by 0x40731E: get_next_line (get_next_line.c:27)
==178114==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178114==    by 0x406F25: main (mandatory.cpp:136)
==178114== 
==178114== 43 bytes in 1 blocks are definitely lost in loss record 3 of 5
==178114==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178114==    by 0x40731E: get_next_line (get_next_line.c:27)
==178114==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178114==    by 0x406F31: main (mandatory.cpp:136)
==178114== 
==178114== 10,002 bytes in 1 blocks are possibly lost in loss record 4 of 5
==178114==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178114==    by 0x4075BC: ft_strjoin (get_next_line_utils.c:57)
==178114==    by 0x407484: get_next_line (get_next_line.c:85)
==178114==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178114==    by 0x406F25: main (mandatory.cpp:136)
==178114== 
==178114== 1,194,760 bytes in 238 blocks are definitely lost in loss record 5 of 5
==178114==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178114==    by 0x4075BC: ft_strjoin (get_next_line_utils.c:57)
==178114==    by 0x407484: get_next_line (get_next_line.c:85)
==178114==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178114==    by 0x406F25: main (mandatory.cpp:136)
==178114== 
==178123== Invalid read of size 1
==178123==    at 0x484FBD4: strcmp (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178123==    by 0x402CFA: gnl(int, char const*) (gnl.cpp:24)
==178123==    by 0x407150: main (mandatory.cpp:141)
==178123==  Address 0x0 is not stack'd, malloc'd or (recently) free'd
==178123== 
==178157== Invalid write of size 1
==178157==    at 0x407378: get_next_line (get_next_line.c:48)
==178157==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178157==    by 0x404BB6: main (mandatory.cpp:25)
==178157==  Address 0x51d203f is 1 bytes before a block of size 10,000,001 alloc'd
==178157==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178157==    by 0x4072EC: get_next_line (get_next_line.c:27)
==178157==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178157==    by 0x404BB6: main (mandatory.cpp:25)
==178157== 
==178157== Invalid write of size 1
==178157==    at 0x407378: get_next_line (get_next_line.c:48)
==178157==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178157==    by 0x404BD8: main (mandatory.cpp:25)
==178157==  Address 0x5b5c03f is 1 bytes before a block of size 10,000,001 alloc'd
==178157==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178157==    by 0x4072EC: get_next_line (get_next_line.c:27)
==178157==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178157==    by 0x404BD8: main (mandatory.cpp:25)
==178157== 
==178157== 10,000,001 bytes in 1 blocks are possibly lost in loss record 1 of 2
==178157==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178157==    by 0x4072EC: get_next_line (get_next_line.c:27)
==178157==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178157==    by 0x404BB6: main (mandatory.cpp:25)
==178157== 
==178157== 10,000,001 bytes in 1 blocks are definitely lost in loss record 2 of 2
==178157==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178157==    by 0x4072EC: get_next_line (get_next_line.c:27)
==178157==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178157==    by 0x404BD8: main (mandatory.cpp:25)
==178157== 
==178158== Invalid read of size 1
==178158==    at 0x40739C: get_next_line (get_next_line.c:59)
==178158==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178158==    by 0x404E53: main (mandatory.cpp:31)
==178158==  Address 0x0 is not stack'd, malloc'd or (recently) free'd
==178158== 
==178164== 1 bytes in 1 blocks are definitely lost in loss record 1 of 4
==178164==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178164==    by 0x40742B: get_next_line (get_next_line.c:82)
==178164==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178164==    by 0x40507F: main (mandatory.cpp:36)
==178164== 
==178164== 2 bytes in 1 blocks are possibly lost in loss record 2 of 4
==178164==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178164==    by 0x40758A: ft_strjoin (get_next_line_utils.c:57)
==178164==    by 0x407452: get_next_line (get_next_line.c:85)
==178164==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178164==    by 0x40507F: main (mandatory.cpp:36)
==178164== 
==178164== 10,000,001 bytes in 1 blocks are possibly lost in loss record 3 of 4
==178164==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178164==    by 0x4072EC: get_next_line (get_next_line.c:27)
==178164==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178164==    by 0x40507F: main (mandatory.cpp:36)
==178164== 
==178164== 10,000,001 bytes in 1 blocks are definitely lost in loss record 4 of 4
==178164==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178164==    by 0x4072EC: get_next_line (get_next_line.c:27)
==178164==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178164==    by 0x40508B: main (mandatory.cpp:36)
==178164== 
==178169== Invalid write of size 1
==178169==    at 0x4073F9: get_next_line (get_next_line.c:70)
==178169==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178169==    by 0x4052AB: main (mandatory.cpp:41)
==178169==  Address 0x4de5970 is 0 bytes inside a block of size 42 free'd
==178169==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178169==    by 0x407852: ft_strdup2 (get_next_line_utils.c:229)
==178169==    by 0x4073ED: get_next_line (get_next_line.c:69)
==178169==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178169==    by 0x4052AB: main (mandatory.cpp:41)
==178169==  Block was alloc'd at
==178169==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178169==    by 0x40758A: ft_strjoin (get_next_line_utils.c:57)
==178169==    by 0x407452: get_next_line (get_next_line.c:85)
==178169==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178169==    by 0x4052AB: main (mandatory.cpp:41)
==178169== 
==178169== Invalid read of size 1
==178169==    at 0x4074E4: ft_strchr (get_next_line_utils.c:25)
==178169==    by 0x40731D: get_next_line (get_next_line.c:33)
==178169==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178169==    by 0x4052B7: main (mandatory.cpp:41)
==178169==  Address 0x4de5970 is 0 bytes inside a block of size 42 free'd
==178169==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178169==    by 0x407852: ft_strdup2 (get_next_line_utils.c:229)
==178169==    by 0x4073ED: get_next_line (get_next_line.c:69)
==178169==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178169==    by 0x4052AB: main (mandatory.cpp:41)
==178169==  Block was alloc'd at
==178169==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178169==    by 0x40758A: ft_strjoin (get_next_line_utils.c:57)
==178169==    by 0x407452: get_next_line (get_next_line.c:85)
==178169==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178169==    by 0x4052AB: main (mandatory.cpp:41)
==178169== 
==178169== Invalid read of size 1
==178169==    at 0x40739C: get_next_line (get_next_line.c:59)
==178169==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178169==    by 0x4052B7: main (mandatory.cpp:41)
==178169==  Address 0x4de5970 is 0 bytes inside a block of size 42 free'd
==178169==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178169==    by 0x407852: ft_strdup2 (get_next_line_utils.c:229)
==178169==    by 0x4073ED: get_next_line (get_next_line.c:69)
==178169==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178169==    by 0x4052AB: main (mandatory.cpp:41)
==178169==  Block was alloc'd at
==178169==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178169==    by 0x40758A: ft_strjoin (get_next_line_utils.c:57)
==178169==    by 0x407452: get_next_line (get_next_line.c:85)
==178169==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178169==    by 0x4052AB: main (mandatory.cpp:41)
==178169== 
==178169== 1 bytes in 1 blocks are definitely lost in loss record 1 of 3
==178169==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178169==    by 0x40742B: get_next_line (get_next_line.c:82)
==178169==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178169==    by 0x4052AB: main (mandatory.cpp:41)
==178169== 
==178169== 10,000,001 bytes in 1 blocks are possibly lost in loss record 2 of 3
==178169==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178169==    by 0x4072EC: get_next_line (get_next_line.c:27)
==178169==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178169==    by 0x4052AB: main (mandatory.cpp:41)
==178169== 
==178169== 10,000,001 bytes in 1 blocks are definitely lost in loss record 3 of 3
==178169==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178169==    by 0x4072EC: get_next_line (get_next_line.c:27)
==178169==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178169==    by 0x4052B7: main (mandatory.cpp:41)
==178169== 
==178171== Invalid free() / delete / delete[] / realloc()
==178171==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178171==    by 0x407852: ft_strdup2 (get_next_line_utils.c:229)
==178171==    by 0x4073ED: get_next_line (get_next_line.c:69)
==178171==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178171==    by 0x4054E9: main (mandatory.cpp:46)
==178171==  Address 0x4de5ca9 is 41 bytes inside a block of size 43 alloc'd
==178171==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178171==    by 0x40758A: ft_strjoin (get_next_line_utils.c:57)
==178171==    by 0x407452: get_next_line (get_next_line.c:85)
==178171==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178171==    by 0x4054D7: main (mandatory.cpp:46)
==178171== 
==178171== 1 bytes in 1 blocks are definitely lost in loss record 1 of 5
==178171==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178171==    by 0x40742B: get_next_line (get_next_line.c:82)
==178171==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178171==    by 0x4054D7: main (mandatory.cpp:46)
==178171== 
==178171== 43 bytes in 1 blocks are possibly lost in loss record 2 of 5
==178171==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178171==    by 0x40758A: ft_strjoin (get_next_line_utils.c:57)
==178171==    by 0x407452: get_next_line (get_next_line.c:85)
==178171==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178171==    by 0x4054D7: main (mandatory.cpp:46)
==178171== 
==178171== 10,000,001 bytes in 1 blocks are possibly lost in loss record 3 of 5
==178171==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178171==    by 0x4072EC: get_next_line (get_next_line.c:27)
==178171==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178171==    by 0x4054D7: main (mandatory.cpp:46)
==178171== 
==178171== 10,000,001 bytes in 1 blocks are possibly lost in loss record 4 of 5
==178171==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178171==    by 0x4072EC: get_next_line (get_next_line.c:27)
==178171==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178171==    by 0x4054F5: main (mandatory.cpp:46)
==178171== 
==178171== 10,000,001 bytes in 1 blocks are definitely lost in loss record 5 of 5
==178171==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178171==    by 0x4072EC: get_next_line (get_next_line.c:27)
==178171==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178171==    by 0x4054E9: main (mandatory.cpp:46)
==178171== 
==178182== Invalid write of size 1
==178182==    at 0x4073F9: get_next_line (get_next_line.c:70)
==178182==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178182==    by 0x405715: main (mandatory.cpp:52)
==178182==  Address 0x4de5f90 is 0 bytes inside a block of size 43 free'd
==178182==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178182==    by 0x407852: ft_strdup2 (get_next_line_utils.c:229)
==178182==    by 0x4073ED: get_next_line (get_next_line.c:69)
==178182==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178182==    by 0x405715: main (mandatory.cpp:52)
==178182==  Block was alloc'd at
==178182==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178182==    by 0x40758A: ft_strjoin (get_next_line_utils.c:57)
==178182==    by 0x407452: get_next_line (get_next_line.c:85)
==178182==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178182==    by 0x405715: main (mandatory.cpp:52)
==178182== 
==178182== Invalid read of size 1
==178182==    at 0x4074E4: ft_strchr (get_next_line_utils.c:25)
==178182==    by 0x40731D: get_next_line (get_next_line.c:33)
==178182==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178182==    by 0x405721: main (mandatory.cpp:52)
==178182==  Address 0x4de5f90 is 0 bytes inside a block of size 43 free'd
==178182==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178182==    by 0x407852: ft_strdup2 (get_next_line_utils.c:229)
==178182==    by 0x4073ED: get_next_line (get_next_line.c:69)
==178182==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178182==    by 0x405715: main (mandatory.cpp:52)
==178182==  Block was alloc'd at
==178182==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178182==    by 0x40758A: ft_strjoin (get_next_line_utils.c:57)
==178182==    by 0x407452: get_next_line (get_next_line.c:85)
==178182==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178182==    by 0x405715: main (mandatory.cpp:52)
==178182== 
==178182== Invalid read of size 1
==178182==    at 0x40739C: get_next_line (get_next_line.c:59)
==178182==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178182==    by 0x405721: main (mandatory.cpp:52)
==178182==  Address 0x4de5f90 is 0 bytes inside a block of size 43 free'd
==178182==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178182==    by 0x407852: ft_strdup2 (get_next_line_utils.c:229)
==178182==    by 0x4073ED: get_next_line (get_next_line.c:69)
==178182==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178182==    by 0x405715: main (mandatory.cpp:52)
==178182==  Block was alloc'd at
==178182==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178182==    by 0x40758A: ft_strjoin (get_next_line_utils.c:57)
==178182==    by 0x407452: get_next_line (get_next_line.c:85)
==178182==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178182==    by 0x405715: main (mandatory.cpp:52)
==178182== 
==178182== 1 bytes in 1 blocks are definitely lost in loss record 1 of 3
==178182==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178182==    by 0x40742B: get_next_line (get_next_line.c:82)
==178182==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178182==    by 0x405715: main (mandatory.cpp:52)
==178182== 
==178182== 10,000,001 bytes in 1 blocks are possibly lost in loss record 2 of 3
==178182==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178182==    by 0x4072EC: get_next_line (get_next_line.c:27)
==178182==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178182==    by 0x405715: main (mandatory.cpp:52)
==178182== 
==178182== 10,000,001 bytes in 1 blocks are definitely lost in loss record 3 of 3
==178182==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178182==    by 0x4072EC: get_next_line (get_next_line.c:27)
==178182==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178182==    by 0x405721: main (mandatory.cpp:52)
==178182== 
==178183== Invalid free() / delete / delete[] / realloc()
==178183==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178183==    by 0x407852: ft_strdup2 (get_next_line_utils.c:229)
==178183==    by 0x4073ED: get_next_line (get_next_line.c:69)
==178183==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178183==    by 0x405953: main (mandatory.cpp:57)
==178183==  Address 0x4de62ca is 42 bytes inside a block of size 44 alloc'd
==178183==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178183==    by 0x40758A: ft_strjoin (get_next_line_utils.c:57)
==178183==    by 0x407452: get_next_line (get_next_line.c:85)
==178183==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178183==    by 0x405941: main (mandatory.cpp:57)
==178183== 
==178183== 1 bytes in 1 blocks are definitely lost in loss record 1 of 5
==178183==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178183==    by 0x40742B: get_next_line (get_next_line.c:82)
==178183==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178183==    by 0x405941: main (mandatory.cpp:57)
==178183== 
==178183== 44 bytes in 1 blocks are possibly lost in loss record 2 of 5
==178183==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178183==    by 0x40758A: ft_strjoin (get_next_line_utils.c:57)
==178183==    by 0x407452: get_next_line (get_next_line.c:85)
==178183==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178183==    by 0x405941: main (mandatory.cpp:57)
==178183== 
==178183== 10,000,001 bytes in 1 blocks are possibly lost in loss record 3 of 5
==178183==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178183==    by 0x4072EC: get_next_line (get_next_line.c:27)
==178183==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178183==    by 0x405941: main (mandatory.cpp:57)
==178183== 
==178183== 10,000,001 bytes in 1 blocks are possibly lost in loss record 4 of 5
==178183==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178183==    by 0x4072EC: get_next_line (get_next_line.c:27)
==178183==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178183==    by 0x40595F: main (mandatory.cpp:57)
==178183== 
==178183== 10,000,001 bytes in 1 blocks are definitely lost in loss record 5 of 5
==178183==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178183==    by 0x4072EC: get_next_line (get_next_line.c:27)
==178183==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178183==    by 0x405953: main (mandatory.cpp:57)
==178183== 
==178189== Invalid write of size 1
==178189==    at 0x4073F9: get_next_line (get_next_line.c:70)
==178189==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178189==    by 0x405B89: main (mandatory.cpp:68)
==178189==  Address 0x4de65b0 is 0 bytes inside a block of size 44 free'd
==178189==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178189==    by 0x407852: ft_strdup2 (get_next_line_utils.c:229)
==178189==    by 0x4073ED: get_next_line (get_next_line.c:69)
==178189==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178189==    by 0x405B89: main (mandatory.cpp:68)
==178189==  Block was alloc'd at
==178189==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178189==    by 0x40758A: ft_strjoin (get_next_line_utils.c:57)
==178189==    by 0x407452: get_next_line (get_next_line.c:85)
==178189==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178189==    by 0x405B89: main (mandatory.cpp:68)
==178189== 
==178189== Invalid read of size 1
==178189==    at 0x4074E4: ft_strchr (get_next_line_utils.c:25)
==178189==    by 0x40731D: get_next_line (get_next_line.c:33)
==178189==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178189==    by 0x405B95: main (mandatory.cpp:68)
==178189==  Address 0x4de65b0 is 0 bytes inside a block of size 44 free'd
==178189==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178189==    by 0x407852: ft_strdup2 (get_next_line_utils.c:229)
==178189==    by 0x4073ED: get_next_line (get_next_line.c:69)
==178189==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178189==    by 0x405B89: main (mandatory.cpp:68)
==178189==  Block was alloc'd at
==178189==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178189==    by 0x40758A: ft_strjoin (get_next_line_utils.c:57)
==178189==    by 0x407452: get_next_line (get_next_line.c:85)
==178189==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178189==    by 0x405B89: main (mandatory.cpp:68)
==178189== 
==178189== Invalid read of size 1
==178189==    at 0x40739C: get_next_line (get_next_line.c:59)
==178189==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178189==    by 0x405B95: main (mandatory.cpp:68)
==178189==  Address 0x4de65b0 is 0 bytes inside a block of size 44 free'd
==178189==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178189==    by 0x407852: ft_strdup2 (get_next_line_utils.c:229)
==178189==    by 0x4073ED: get_next_line (get_next_line.c:69)
==178189==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178189==    by 0x405B89: main (mandatory.cpp:68)
==178189==  Block was alloc'd at
==178189==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178189==    by 0x40758A: ft_strjoin (get_next_line_utils.c:57)
==178189==    by 0x407452: get_next_line (get_next_line.c:85)
==178189==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178189==    by 0x405B89: main (mandatory.cpp:68)
==178189== 
==178189== 1 bytes in 1 blocks are definitely lost in loss record 1 of 3
==178189==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178189==    by 0x40742B: get_next_line (get_next_line.c:82)
==178189==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178189==    by 0x405B89: main (mandatory.cpp:68)
==178189== 
==178189== 10,000,001 bytes in 1 blocks are possibly lost in loss record 2 of 3
==178189==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178189==    by 0x4072EC: get_next_line (get_next_line.c:27)
==178189==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178189==    by 0x405B89: main (mandatory.cpp:68)
==178189== 
==178189== 10,000,001 bytes in 1 blocks are definitely lost in loss record 3 of 3
==178189==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178189==    by 0x4072EC: get_next_line (get_next_line.c:27)
==178189==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178189==    by 0x405B95: main (mandatory.cpp:68)
==178189== 
==178190== Invalid free() / delete / delete[] / realloc()
==178190==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178190==    by 0x407852: ft_strdup2 (get_next_line_utils.c:229)
==178190==    by 0x4073ED: get_next_line (get_next_line.c:69)
==178190==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178190==    by 0x405DC7: main (mandatory.cpp:73)
==178190==  Address 0x4de68eb is 43 bytes inside a block of size 45 alloc'd
==178190==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178190==    by 0x40758A: ft_strjoin (get_next_line_utils.c:57)
==178190==    by 0x407452: get_next_line (get_next_line.c:85)
==178190==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178190==    by 0x405DB5: main (mandatory.cpp:73)
==178190== 
==178190== 1 bytes in 1 blocks are definitely lost in loss record 1 of 5
==178190==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178190==    by 0x40742B: get_next_line (get_next_line.c:82)
==178190==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178190==    by 0x405DB5: main (mandatory.cpp:73)
==178190== 
==178190== 45 bytes in 1 blocks are possibly lost in loss record 2 of 5
==178190==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178190==    by 0x40758A: ft_strjoin (get_next_line_utils.c:57)
==178190==    by 0x407452: get_next_line (get_next_line.c:85)
==178190==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178190==    by 0x405DB5: main (mandatory.cpp:73)
==178190== 
==178190== 10,000,001 bytes in 1 blocks are possibly lost in loss record 3 of 5
==178190==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178190==    by 0x4072EC: get_next_line (get_next_line.c:27)
==178190==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178190==    by 0x405DB5: main (mandatory.cpp:73)
==178190== 
==178190== 10,000,001 bytes in 1 blocks are possibly lost in loss record 4 of 5
==178190==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178190==    by 0x4072EC: get_next_line (get_next_line.c:27)
==178190==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178190==    by 0x405DD3: main (mandatory.cpp:73)
==178190== 
==178190== 10,000,001 bytes in 1 blocks are definitely lost in loss record 5 of 5
==178190==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178190==    by 0x4072EC: get_next_line (get_next_line.c:27)
==178190==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178190==    by 0x405DC7: main (mandatory.cpp:73)
==178190== 
==178191== 1 bytes in 1 blocks are definitely lost in loss record 1 of 8
==178191==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178191==    by 0x40742B: get_next_line (get_next_line.c:82)
==178191==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178191==    by 0x405FF3: main (mandatory.cpp:79)
==178191== 
==178191== 6 bytes in 1 blocks are possibly lost in loss record 2 of 8
==178191==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178191==    by 0x40758A: ft_strjoin (get_next_line_utils.c:57)
==178191==    by 0x407452: get_next_line (get_next_line.c:85)
==178191==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178191==    by 0x405FF3: main (mandatory.cpp:79)
==178191== 
==178191== 10,000,001 bytes in 1 blocks are possibly lost in loss record 3 of 8
==178191==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178191==    by 0x4072EC: get_next_line (get_next_line.c:27)
==178191==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178191==    by 0x405FF3: main (mandatory.cpp:79)
==178191== 
==178191== 10,000,001 bytes in 1 blocks are possibly lost in loss record 4 of 8
==178191==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178191==    by 0x4072EC: get_next_line (get_next_line.c:27)
==178191==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178191==    by 0x406017: main (mandatory.cpp:79)
==178191== 
==178191== 10,000,001 bytes in 1 blocks are possibly lost in loss record 5 of 8
==178191==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178191==    by 0x4072EC: get_next_line (get_next_line.c:27)
==178191==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178191==    by 0x406047: main (mandatory.cpp:79)
==178191== 
==178191== 10,000,001 bytes in 1 blocks are definitely lost in loss record 6 of 8
==178191==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178191==    by 0x4072EC: get_next_line (get_next_line.c:27)
==178191==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178191==    by 0x406005: main (mandatory.cpp:79)
==178191== 
==178191== 10,000,001 bytes in 1 blocks are definitely lost in loss record 7 of 8
==178191==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178191==    by 0x4072EC: get_next_line (get_next_line.c:27)
==178191==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178191==    by 0x406029: main (mandatory.cpp:79)
==178191== 
==178191== 10,000,001 bytes in 1 blocks are definitely lost in loss record 8 of 8
==178191==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178191==    by 0x4072EC: get_next_line (get_next_line.c:27)
==178191==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178191==    by 0x40603B: main (mandatory.cpp:79)
==178191== 
==178202== Invalid free() / delete / delete[] / realloc()
==178202==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178202==    by 0x407852: ft_strdup2 (get_next_line_utils.c:229)
==178202==    by 0x4073ED: get_next_line (get_next_line.c:69)
==178202==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178202==    by 0x4062AF: main (mandatory.cpp:88)
==178202==  Address 0x4de6fac is 172 bytes inside a block of size 214 alloc'd
==178202==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178202==    by 0x40758A: ft_strjoin (get_next_line_utils.c:57)
==178202==    by 0x407452: get_next_line (get_next_line.c:85)
==178202==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178202==    by 0x406267: main (mandatory.cpp:88)
==178202== 
==178202== 1 bytes in 1 blocks are definitely lost in loss record 1 of 8
==178202==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178202==    by 0x40742B: get_next_line (get_next_line.c:82)
==178202==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178202==    by 0x406267: main (mandatory.cpp:88)
==178202== 
==178202== 214 bytes in 1 blocks are possibly lost in loss record 2 of 8
==178202==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178202==    by 0x40758A: ft_strjoin (get_next_line_utils.c:57)
==178202==    by 0x407452: get_next_line (get_next_line.c:85)
==178202==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178202==    by 0x406267: main (mandatory.cpp:88)
==178202== 
==178202== 10,000,001 bytes in 1 blocks are possibly lost in loss record 3 of 8
==178202==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178202==    by 0x4072EC: get_next_line (get_next_line.c:27)
==178202==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178202==    by 0x406267: main (mandatory.cpp:88)
==178202== 
==178202== 10,000,001 bytes in 1 blocks are possibly lost in loss record 4 of 8
==178202==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178202==    by 0x4072EC: get_next_line (get_next_line.c:27)
==178202==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178202==    by 0x40628B: main (mandatory.cpp:88)
==178202== 
==178202== 10,000,001 bytes in 1 blocks are possibly lost in loss record 5 of 8
==178202==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178202==    by 0x4072EC: get_next_line (get_next_line.c:27)
==178202==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178202==    by 0x4062BB: main (mandatory.cpp:88)
==178202== 
==178202== 10,000,001 bytes in 1 blocks are definitely lost in loss record 6 of 8
==178202==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178202==    by 0x4072EC: get_next_line (get_next_line.c:27)
==178202==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178202==    by 0x406279: main (mandatory.cpp:88)
==178202== 
==178202== 10,000,001 bytes in 1 blocks are definitely lost in loss record 7 of 8
==178202==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178202==    by 0x4072EC: get_next_line (get_next_line.c:27)
==178202==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178202==    by 0x40629D: main (mandatory.cpp:88)
==178202== 
==178202== 10,000,001 bytes in 1 blocks are definitely lost in loss record 8 of 8
==178202==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178202==    by 0x4072EC: get_next_line (get_next_line.c:27)
==178202==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178202==    by 0x4062AF: main (mandatory.cpp:88)
==178202== 
==178203== 1 bytes in 1 blocks are definitely lost in loss record 1 of 8
==178203==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178203==    by 0x40742B: get_next_line (get_next_line.c:82)
==178203==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178203==    by 0x4064DB: main (mandatory.cpp:97)
==178203== 
==178203== 210 bytes in 1 blocks are possibly lost in loss record 2 of 8
==178203==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178203==    by 0x40758A: ft_strjoin (get_next_line_utils.c:57)
==178203==    by 0x407452: get_next_line (get_next_line.c:85)
==178203==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178203==    by 0x4064DB: main (mandatory.cpp:97)
==178203== 
==178203== 10,000,001 bytes in 1 blocks are possibly lost in loss record 3 of 8
==178203==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178203==    by 0x4072EC: get_next_line (get_next_line.c:27)
==178203==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178203==    by 0x4064DB: main (mandatory.cpp:97)
==178203== 
==178203== 10,000,001 bytes in 1 blocks are possibly lost in loss record 4 of 8
==178203==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178203==    by 0x4072EC: get_next_line (get_next_line.c:27)
==178203==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178203==    by 0x4064FF: main (mandatory.cpp:97)
==178203== 
==178203== 10,000,001 bytes in 1 blocks are possibly lost in loss record 5 of 8
==178203==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178203==    by 0x4072EC: get_next_line (get_next_line.c:27)
==178203==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178203==    by 0x40652F: main (mandatory.cpp:97)
==178203== 
==178203== 10,000,001 bytes in 1 blocks are definitely lost in loss record 6 of 8
==178203==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178203==    by 0x4072EC: get_next_line (get_next_line.c:27)
==178203==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178203==    by 0x4064ED: main (mandatory.cpp:97)
==178203== 
==178203== 10,000,001 bytes in 1 blocks are definitely lost in loss record 7 of 8
==178203==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178203==    by 0x4072EC: get_next_line (get_next_line.c:27)
==178203==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178203==    by 0x406511: main (mandatory.cpp:97)
==178203== 
==178203== 10,000,001 bytes in 1 blocks are definitely lost in loss record 8 of 8
==178203==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178203==    by 0x4072EC: get_next_line (get_next_line.c:27)
==178203==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178203==    by 0x406523: main (mandatory.cpp:97)
==178203== 
==178210== Invalid free() / delete / delete[] / realloc()
==178210==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178210==    by 0x407852: ft_strdup2 (get_next_line_utils.c:229)
==178210==    by 0x4073ED: get_next_line (get_next_line.c:69)
==178210==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178210==    by 0x4067DF: main (mandatory.cpp:106)
==178210==  Address 0x4de7610 is 176 bytes inside a block of size 218 alloc'd
==178210==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178210==    by 0x40758A: ft_strjoin (get_next_line_utils.c:57)
==178210==    by 0x407452: get_next_line (get_next_line.c:85)
==178210==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178210==    by 0x40674F: main (mandatory.cpp:106)
==178210== 
==178210== 1 bytes in 1 blocks are definitely lost in loss record 1 of 12
==178210==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178210==    by 0x40742B: get_next_line (get_next_line.c:82)
==178210==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178210==    by 0x40674F: main (mandatory.cpp:106)
==178210== 
==178210== 218 bytes in 1 blocks are possibly lost in loss record 2 of 12
==178210==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178210==    by 0x40758A: ft_strjoin (get_next_line_utils.c:57)
==178210==    by 0x407452: get_next_line (get_next_line.c:85)
==178210==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178210==    by 0x40674F: main (mandatory.cpp:106)
==178210== 
==178210== 10,000,001 bytes in 1 blocks are possibly lost in loss record 3 of 12
==178210==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178210==    by 0x4072EC: get_next_line (get_next_line.c:27)
==178210==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178210==    by 0x40674F: main (mandatory.cpp:106)
==178210== 
==178210== 10,000,001 bytes in 1 blocks are possibly lost in loss record 4 of 12
==178210==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178210==    by 0x4072EC: get_next_line (get_next_line.c:27)
==178210==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178210==    by 0x406773: main (mandatory.cpp:106)
==178210== 
==178210== 10,000,001 bytes in 1 blocks are possibly lost in loss record 5 of 12
==178210==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178210==    by 0x4072EC: get_next_line (get_next_line.c:27)
==178210==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178210==    by 0x4067A9: main (mandatory.cpp:106)
==178210== 
==178210== 10,000,001 bytes in 1 blocks are possibly lost in loss record 6 of 12
==178210==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178210==    by 0x4072EC: get_next_line (get_next_line.c:27)
==178210==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178210==    by 0x4067BB: main (mandatory.cpp:106)
==178210== 
==178210== 10,000,001 bytes in 1 blocks are possibly lost in loss record 7 of 12
==178210==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178210==    by 0x4072EC: get_next_line (get_next_line.c:27)
==178210==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178210==    by 0x4067CD: main (mandatory.cpp:106)
==178210== 
==178210== 10,000,001 bytes in 1 blocks are possibly lost in loss record 8 of 12
==178210==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178210==    by 0x4072EC: get_next_line (get_next_line.c:27)
==178210==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178210==    by 0x4067EB: main (mandatory.cpp:106)
==178210== 
==178210== 10,000,001 bytes in 1 blocks are definitely lost in loss record 9 of 12
==178210==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178210==    by 0x4072EC: get_next_line (get_next_line.c:27)
==178210==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178210==    by 0x406761: main (mandatory.cpp:106)
==178210== 
==178210== 10,000,001 bytes in 1 blocks are definitely lost in loss record 10 of 12
==178210==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178210==    by 0x4072EC: get_next_line (get_next_line.c:27)
==178210==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178210==    by 0x406785: main (mandatory.cpp:106)
==178210== 
==178210== 10,000,001 bytes in 1 blocks are definitely lost in loss record 11 of 12
==178210==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178210==    by 0x4072EC: get_next_line (get_next_line.c:27)
==178210==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178210==    by 0x406797: main (mandatory.cpp:106)
==178210== 
==178210== 10,000,001 bytes in 1 blocks are definitely lost in loss record 12 of 12
==178210==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178210==    by 0x4072EC: get_next_line (get_next_line.c:27)
==178210==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178210==    by 0x4067DF: main (mandatory.cpp:106)
==178210== 
==178211== 1 bytes in 1 blocks are definitely lost in loss record 1 of 12
==178211==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178211==    by 0x40742B: get_next_line (get_next_line.c:82)
==178211==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178211==    by 0x406A0B: main (mandatory.cpp:119)
==178211== 
==178211== 219 bytes in 1 blocks are possibly lost in loss record 2 of 12
==178211==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178211==    by 0x40758A: ft_strjoin (get_next_line_utils.c:57)
==178211==    by 0x407452: get_next_line (get_next_line.c:85)
==178211==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178211==    by 0x406A0B: main (mandatory.cpp:119)
==178211== 
==178211== 10,000,001 bytes in 1 blocks are possibly lost in loss record 3 of 12
==178211==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178211==    by 0x4072EC: get_next_line (get_next_line.c:27)
==178211==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178211==    by 0x406A0B: main (mandatory.cpp:119)
==178211== 
==178211== 10,000,001 bytes in 1 blocks are possibly lost in loss record 4 of 12
==178211==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178211==    by 0x4072EC: get_next_line (get_next_line.c:27)
==178211==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178211==    by 0x406A2F: main (mandatory.cpp:119)
==178211== 
==178211== 10,000,001 bytes in 1 blocks are possibly lost in loss record 5 of 12
==178211==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178211==    by 0x4072EC: get_next_line (get_next_line.c:27)
==178211==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178211==    by 0x406A65: main (mandatory.cpp:119)
==178211== 
==178211== 10,000,001 bytes in 1 blocks are possibly lost in loss record 6 of 12
==178211==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178211==    by 0x4072EC: get_next_line (get_next_line.c:27)
==178211==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178211==    by 0x406A77: main (mandatory.cpp:119)
==178211== 
==178211== 10,000,001 bytes in 1 blocks are possibly lost in loss record 7 of 12
==178211==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178211==    by 0x4072EC: get_next_line (get_next_line.c:27)
==178211==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178211==    by 0x406A89: main (mandatory.cpp:119)
==178211== 
==178211== 10,000,001 bytes in 1 blocks are possibly lost in loss record 8 of 12
==178211==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178211==    by 0x4072EC: get_next_line (get_next_line.c:27)
==178211==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178211==    by 0x406AA7: main (mandatory.cpp:119)
==178211== 
==178211== 10,000,001 bytes in 1 blocks are definitely lost in loss record 9 of 12
==178211==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178211==    by 0x4072EC: get_next_line (get_next_line.c:27)
==178211==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178211==    by 0x406A1D: main (mandatory.cpp:119)
==178211== 
==178211== 10,000,001 bytes in 1 blocks are definitely lost in loss record 10 of 12
==178211==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178211==    by 0x4072EC: get_next_line (get_next_line.c:27)
==178211==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178211==    by 0x406A41: main (mandatory.cpp:119)
==178211== 
==178211== 10,000,001 bytes in 1 blocks are definitely lost in loss record 11 of 12
==178211==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178211==    by 0x4072EC: get_next_line (get_next_line.c:27)
==178211==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178211==    by 0x406A53: main (mandatory.cpp:119)
==178211== 
==178211== 10,000,001 bytes in 1 blocks are definitely lost in loss record 12 of 12
==178211==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178211==    by 0x4072EC: get_next_line (get_next_line.c:27)
==178211==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178211==    by 0x406A9B: main (mandatory.cpp:119)
==178211== 
==178212== Invalid write of size 1
==178212==    at 0x4073F9: get_next_line (get_next_line.c:70)
==178212==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178212==    by 0x406CC7: main (mandatory.cpp:132)
==178212==  Address 0x4de7ba0 is 0 bytes inside a block of size 10,001 free'd
==178212==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178212==    by 0x407852: ft_strdup2 (get_next_line_utils.c:229)
==178212==    by 0x4073ED: get_next_line (get_next_line.c:69)
==178212==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178212==    by 0x406CC7: main (mandatory.cpp:132)
==178212==  Block was alloc'd at
==178212==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178212==    by 0x40758A: ft_strjoin (get_next_line_utils.c:57)
==178212==    by 0x407452: get_next_line (get_next_line.c:85)
==178212==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178212==    by 0x406CC7: main (mandatory.cpp:132)
==178212== 
==178212== Invalid read of size 1
==178212==    at 0x4074E4: ft_strchr (get_next_line_utils.c:25)
==178212==    by 0x40731D: get_next_line (get_next_line.c:33)
==178212==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178212==    by 0x406CD3: main (mandatory.cpp:132)
==178212==  Address 0x4de7ba0 is 0 bytes inside a block of size 10,001 free'd
==178212==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178212==    by 0x407852: ft_strdup2 (get_next_line_utils.c:229)
==178212==    by 0x4073ED: get_next_line (get_next_line.c:69)
==178212==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178212==    by 0x406CC7: main (mandatory.cpp:132)
==178212==  Block was alloc'd at
==178212==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178212==    by 0x40758A: ft_strjoin (get_next_line_utils.c:57)
==178212==    by 0x407452: get_next_line (get_next_line.c:85)
==178212==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178212==    by 0x406CC7: main (mandatory.cpp:132)
==178212== 
==178212== Invalid read of size 1
==178212==    at 0x40739C: get_next_line (get_next_line.c:59)
==178212==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178212==    by 0x406CD3: main (mandatory.cpp:132)
==178212==  Address 0x4de7ba0 is 0 bytes inside a block of size 10,001 free'd
==178212==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178212==    by 0x407852: ft_strdup2 (get_next_line_utils.c:229)
==178212==    by 0x4073ED: get_next_line (get_next_line.c:69)
==178212==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178212==    by 0x406CC7: main (mandatory.cpp:132)
==178212==  Block was alloc'd at
==178212==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178212==    by 0x40758A: ft_strjoin (get_next_line_utils.c:57)
==178212==    by 0x407452: get_next_line (get_next_line.c:85)
==178212==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178212==    by 0x406CC7: main (mandatory.cpp:132)
==178212== 
==178212== 1 bytes in 1 blocks are definitely lost in loss record 1 of 3
==178212==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178212==    by 0x40742B: get_next_line (get_next_line.c:82)
==178212==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178212==    by 0x406CC7: main (mandatory.cpp:132)
==178212== 
==178212== 10,000,001 bytes in 1 blocks are possibly lost in loss record 2 of 3
==178212==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178212==    by 0x4072EC: get_next_line (get_next_line.c:27)
==178212==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178212==    by 0x406CC7: main (mandatory.cpp:132)
==178212== 
==178212== 10,000,001 bytes in 1 blocks are definitely lost in loss record 3 of 3
==178212==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178212==    by 0x4072EC: get_next_line (get_next_line.c:27)
==178212==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178212==    by 0x406CD3: main (mandatory.cpp:132)
==178212== 
==178223== 1 bytes in 1 blocks are definitely lost in loss record 1 of 4
==178223==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178223==    by 0x40742B: get_next_line (get_next_line.c:82)
==178223==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178223==    by 0x406EF3: main (mandatory.cpp:136)
==178223== 
==178223== 10,002 bytes in 1 blocks are possibly lost in loss record 2 of 4
==178223==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178223==    by 0x40758A: ft_strjoin (get_next_line_utils.c:57)
==178223==    by 0x407452: get_next_line (get_next_line.c:85)
==178223==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178223==    by 0x406EF3: main (mandatory.cpp:136)
==178223== 
==178223== 10,000,001 bytes in 1 blocks are possibly lost in loss record 3 of 4
==178223==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178223==    by 0x4072EC: get_next_line (get_next_line.c:27)
==178223==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178223==    by 0x406EF3: main (mandatory.cpp:136)
==178223== 
==178223== 10,000,001 bytes in 1 blocks are definitely lost in loss record 4 of 4
==178223==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178223==    by 0x4072EC: get_next_line (get_next_line.c:27)
==178223==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==178223==    by 0x406EFF: main (mandatory.cpp:136)
==178223== 
==178228== Invalid read of size 1
==178228==    at 0x484FBD4: strcmp (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==178228==    by 0x402CFA: gnl(int, char const*) (gnl.cpp:24)
==178228==    by 0x40711E: main (mandatory.cpp:141)
==178228==  Address 0x0 is not stack'd, malloc'd or (recently) free'd
==178228== 
