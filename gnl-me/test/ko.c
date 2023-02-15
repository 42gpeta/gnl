==180416== Invalid write of size 1
==180416==    at 0x407378: get_next_line (get_next_line.c:47)
==180416==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180416==    by 0x404BB6: main (mandatory.cpp:25)
==180416==  Address 0x4de429f is 1 bytes before a block of size 2 alloc'd
==180416==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180416==    by 0x4072EC: get_next_line (get_next_line.c:26)
==180416==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180416==    by 0x404BB6: main (mandatory.cpp:25)
==180416== 
==180416== Invalid write of size 1
==180416==    at 0x407378: get_next_line (get_next_line.c:47)
==180416==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180416==    by 0x404BD8: main (mandatory.cpp:25)
==180416==  Address 0x4de42ef is 1 bytes before a block of size 2 alloc'd
==180416==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180416==    by 0x4072EC: get_next_line (get_next_line.c:26)
==180416==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180416==    by 0x404BD8: main (mandatory.cpp:25)
==180416== 
==180416== 2 bytes in 1 blocks are definitely lost in loss record 1 of 2
==180416==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180416==    by 0x4072EC: get_next_line (get_next_line.c:26)
==180416==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180416==    by 0x404BB6: main (mandatory.cpp:25)
==180416== 
==180416== 2 bytes in 1 blocks are definitely lost in loss record 2 of 2
==180416==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180416==    by 0x4072EC: get_next_line (get_next_line.c:26)
==180416==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180416==    by 0x404BD8: main (mandatory.cpp:25)
==180416== 
==180432== Invalid read of size 1
==180432==    at 0x40739C: get_next_line (get_next_line.c:58)
==180432==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180432==    by 0x404E53: main (mandatory.cpp:31)
==180432==  Address 0x0 is not stack'd, malloc'd or (recently) free'd
==180432== 
==180438== 1 bytes in 1 blocks are definitely lost in loss record 1 of 4
==180438==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180438==    by 0x40742B: get_next_line (get_next_line.c:80)
==180438==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180438==    by 0x40507F: main (mandatory.cpp:36)
==180438== 
==180438== 2 bytes in 1 blocks are possibly lost in loss record 2 of 4
==180438==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180438==    by 0x40758A: ft_strjoin (get_next_line_utils.c:57)
==180438==    by 0x407452: get_next_line (get_next_line.c:83)
==180438==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180438==    by 0x40507F: main (mandatory.cpp:36)
==180438== 
==180438== 2 bytes in 1 blocks are definitely lost in loss record 3 of 4
==180438==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180438==    by 0x4072EC: get_next_line (get_next_line.c:26)
==180438==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180438==    by 0x40507F: main (mandatory.cpp:36)
==180438== 
==180438== 2 bytes in 1 blocks are definitely lost in loss record 4 of 4
==180438==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180438==    by 0x4072EC: get_next_line (get_next_line.c:26)
==180438==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180438==    by 0x40508B: main (mandatory.cpp:36)
==180438== 
==180450== Invalid write of size 1
==180450==    at 0x4073F9: get_next_line (get_next_line.c:69)
==180450==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180450==    by 0x4052AB: main (mandatory.cpp:41)
==180450==  Address 0x4de6840 is 0 bytes inside a block of size 42 free'd
==180450==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180450==    by 0x407852: ft_strdup2 (get_next_line_utils.c:229)
==180450==    by 0x4073ED: get_next_line (get_next_line.c:68)
==180450==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180450==    by 0x4052AB: main (mandatory.cpp:41)
==180450==  Block was alloc'd at
==180450==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180450==    by 0x40758A: ft_strjoin (get_next_line_utils.c:57)
==180450==    by 0x407452: get_next_line (get_next_line.c:83)
==180450==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180450==    by 0x4052AB: main (mandatory.cpp:41)
==180450== 
==180450== Invalid read of size 1
==180450==    at 0x4074E4: ft_strchr (get_next_line_utils.c:25)
==180450==    by 0x40731D: get_next_line (get_next_line.c:32)
==180450==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180450==    by 0x4052B7: main (mandatory.cpp:41)
==180450==  Address 0x4de6840 is 0 bytes inside a block of size 42 free'd
==180450==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180450==    by 0x407852: ft_strdup2 (get_next_line_utils.c:229)
==180450==    by 0x4073ED: get_next_line (get_next_line.c:68)
==180450==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180450==    by 0x4052AB: main (mandatory.cpp:41)
==180450==  Block was alloc'd at
==180450==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180450==    by 0x40758A: ft_strjoin (get_next_line_utils.c:57)
==180450==    by 0x407452: get_next_line (get_next_line.c:83)
==180450==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180450==    by 0x4052AB: main (mandatory.cpp:41)
==180450== 
==180450== Invalid read of size 1
==180450==    at 0x40739C: get_next_line (get_next_line.c:58)
==180450==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180450==    by 0x4052B7: main (mandatory.cpp:41)
==180450==  Address 0x4de6840 is 0 bytes inside a block of size 42 free'd
==180450==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180450==    by 0x407852: ft_strdup2 (get_next_line_utils.c:229)
==180450==    by 0x4073ED: get_next_line (get_next_line.c:68)
==180450==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180450==    by 0x4052AB: main (mandatory.cpp:41)
==180450==  Block was alloc'd at
==180450==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180450==    by 0x40758A: ft_strjoin (get_next_line_utils.c:57)
==180450==    by 0x407452: get_next_line (get_next_line.c:83)
==180450==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180450==    by 0x4052AB: main (mandatory.cpp:41)
==180450== 
==180450== 1 bytes in 1 blocks are definitely lost in loss record 1 of 4
==180450==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180450==    by 0x40742B: get_next_line (get_next_line.c:80)
==180450==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180450==    by 0x4052AB: main (mandatory.cpp:41)
==180450== 
==180450== 2 bytes in 1 blocks are definitely lost in loss record 2 of 4
==180450==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180450==    by 0x4072EC: get_next_line (get_next_line.c:26)
==180450==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180450==    by 0x4052AB: main (mandatory.cpp:41)
==180450== 
==180450== 2 bytes in 1 blocks are definitely lost in loss record 3 of 4
==180450==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180450==    by 0x4072EC: get_next_line (get_next_line.c:26)
==180450==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180450==    by 0x4052B7: main (mandatory.cpp:41)
==180450== 
==180450== 860 bytes in 40 blocks are definitely lost in loss record 4 of 4
==180450==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180450==    by 0x40758A: ft_strjoin (get_next_line_utils.c:57)
==180450==    by 0x407452: get_next_line (get_next_line.c:83)
==180450==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180450==    by 0x4052AB: main (mandatory.cpp:41)
==180450== 
==180453== Invalid write of size 1
==180453==    at 0x4073F9: get_next_line (get_next_line.c:69)
==180453==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180453==    by 0x4054E9: main (mandatory.cpp:46)
==180453==  Address 0x4de6c80 is 0 bytes inside a block of size 2 free'd
==180453==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180453==    by 0x407852: ft_strdup2 (get_next_line_utils.c:229)
==180453==    by 0x4073ED: get_next_line (get_next_line.c:68)
==180453==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180453==    by 0x4054E9: main (mandatory.cpp:46)
==180453==  Block was alloc'd at
==180453==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180453==    by 0x40758A: ft_strjoin (get_next_line_utils.c:57)
==180453==    by 0x407452: get_next_line (get_next_line.c:83)
==180453==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180453==    by 0x4054E9: main (mandatory.cpp:46)
==180453== 
==180453== Invalid read of size 1
==180453==    at 0x4074E4: ft_strchr (get_next_line_utils.c:25)
==180453==    by 0x40731D: get_next_line (get_next_line.c:32)
==180453==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180453==    by 0x4054F5: main (mandatory.cpp:46)
==180453==  Address 0x4de6c80 is 0 bytes inside a block of size 2 free'd
==180453==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180453==    by 0x407852: ft_strdup2 (get_next_line_utils.c:229)
==180453==    by 0x4073ED: get_next_line (get_next_line.c:68)
==180453==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180453==    by 0x4054E9: main (mandatory.cpp:46)
==180453==  Block was alloc'd at
==180453==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180453==    by 0x40758A: ft_strjoin (get_next_line_utils.c:57)
==180453==    by 0x407452: get_next_line (get_next_line.c:83)
==180453==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180453==    by 0x4054E9: main (mandatory.cpp:46)
==180453== 
==180453== Invalid read of size 1
==180453==    at 0x40739C: get_next_line (get_next_line.c:58)
==180453==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180453==    by 0x4054F5: main (mandatory.cpp:46)
==180453==  Address 0x4de6c80 is 0 bytes inside a block of size 2 free'd
==180453==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180453==    by 0x407852: ft_strdup2 (get_next_line_utils.c:229)
==180453==    by 0x4073ED: get_next_line (get_next_line.c:68)
==180453==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180453==    by 0x4054E9: main (mandatory.cpp:46)
==180453==  Block was alloc'd at
==180453==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180453==    by 0x40758A: ft_strjoin (get_next_line_utils.c:57)
==180453==    by 0x407452: get_next_line (get_next_line.c:83)
==180453==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180453==    by 0x4054E9: main (mandatory.cpp:46)
==180453== 
==180453== 1 bytes in 1 blocks are definitely lost in loss record 1 of 5
==180453==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180453==    by 0x40742B: get_next_line (get_next_line.c:80)
==180453==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180453==    by 0x4054D7: main (mandatory.cpp:46)
==180453== 
==180453== 2 bytes in 1 blocks are definitely lost in loss record 2 of 5
==180453==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180453==    by 0x4072EC: get_next_line (get_next_line.c:26)
==180453==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180453==    by 0x4054D7: main (mandatory.cpp:46)
==180453== 
==180453== 2 bytes in 1 blocks are definitely lost in loss record 3 of 5
==180453==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180453==    by 0x4072EC: get_next_line (get_next_line.c:26)
==180453==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180453==    by 0x4054E9: main (mandatory.cpp:46)
==180453== 
==180453== 2 bytes in 1 blocks are definitely lost in loss record 4 of 5
==180453==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180453==    by 0x4072EC: get_next_line (get_next_line.c:26)
==180453==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180453==    by 0x4054F5: main (mandatory.cpp:46)
==180453== 
==180453== 902 bytes in 41 blocks are definitely lost in loss record 5 of 5
==180453==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180453==    by 0x40758A: ft_strjoin (get_next_line_utils.c:57)
==180453==    by 0x407452: get_next_line (get_next_line.c:83)
==180453==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180453==    by 0x4054D7: main (mandatory.cpp:46)
==180453== 
==180468== Invalid write of size 1
==180468==    at 0x4073F9: get_next_line (get_next_line.c:69)
==180468==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180468==    by 0x405715: main (mandatory.cpp:52)
==180468==  Address 0x4de6ed0 is 0 bytes inside a block of size 43 free'd
==180468==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180468==    by 0x407852: ft_strdup2 (get_next_line_utils.c:229)
==180468==    by 0x4073ED: get_next_line (get_next_line.c:68)
==180468==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180468==    by 0x405715: main (mandatory.cpp:52)
==180468==  Block was alloc'd at
==180468==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180468==    by 0x40758A: ft_strjoin (get_next_line_utils.c:57)
==180468==    by 0x407452: get_next_line (get_next_line.c:83)
==180468==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180468==    by 0x405715: main (mandatory.cpp:52)
==180468== 
==180468== Invalid read of size 1
==180468==    at 0x4074E4: ft_strchr (get_next_line_utils.c:25)
==180468==    by 0x40731D: get_next_line (get_next_line.c:32)
==180468==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180468==    by 0x405721: main (mandatory.cpp:52)
==180468==  Address 0x4de6ed0 is 0 bytes inside a block of size 43 free'd
==180468==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180468==    by 0x407852: ft_strdup2 (get_next_line_utils.c:229)
==180468==    by 0x4073ED: get_next_line (get_next_line.c:68)
==180468==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180468==    by 0x405715: main (mandatory.cpp:52)
==180468==  Block was alloc'd at
==180468==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180468==    by 0x40758A: ft_strjoin (get_next_line_utils.c:57)
==180468==    by 0x407452: get_next_line (get_next_line.c:83)
==180468==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180468==    by 0x405715: main (mandatory.cpp:52)
==180468== 
==180468== Invalid read of size 1
==180468==    at 0x40739C: get_next_line (get_next_line.c:58)
==180468==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180468==    by 0x405721: main (mandatory.cpp:52)
==180468==  Address 0x4de6ed0 is 0 bytes inside a block of size 43 free'd
==180468==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180468==    by 0x407852: ft_strdup2 (get_next_line_utils.c:229)
==180468==    by 0x4073ED: get_next_line (get_next_line.c:68)
==180468==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180468==    by 0x405715: main (mandatory.cpp:52)
==180468==  Block was alloc'd at
==180468==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180468==    by 0x40758A: ft_strjoin (get_next_line_utils.c:57)
==180468==    by 0x407452: get_next_line (get_next_line.c:83)
==180468==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180468==    by 0x405715: main (mandatory.cpp:52)
==180468== 
==180468== 1 bytes in 1 blocks are definitely lost in loss record 1 of 4
==180468==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180468==    by 0x40742B: get_next_line (get_next_line.c:80)
==180468==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180468==    by 0x405715: main (mandatory.cpp:52)
==180468== 
==180468== 2 bytes in 1 blocks are definitely lost in loss record 2 of 4
==180468==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180468==    by 0x4072EC: get_next_line (get_next_line.c:26)
==180468==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180468==    by 0x405715: main (mandatory.cpp:52)
==180468== 
==180468== 2 bytes in 1 blocks are definitely lost in loss record 3 of 4
==180468==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180468==    by 0x4072EC: get_next_line (get_next_line.c:26)
==180468==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180468==    by 0x405721: main (mandatory.cpp:52)
==180468== 
==180468== 902 bytes in 41 blocks are definitely lost in loss record 4 of 4
==180468==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180468==    by 0x40758A: ft_strjoin (get_next_line_utils.c:57)
==180468==    by 0x407452: get_next_line (get_next_line.c:83)
==180468==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180468==    by 0x405715: main (mandatory.cpp:52)
==180468== 
==180469== Invalid write of size 1
==180469==    at 0x4073F9: get_next_line (get_next_line.c:69)
==180469==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180469==    by 0x405953: main (mandatory.cpp:57)
==180469==  Address 0x4de7310 is 0 bytes inside a block of size 2 free'd
==180469==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180469==    by 0x407852: ft_strdup2 (get_next_line_utils.c:229)
==180469==    by 0x4073ED: get_next_line (get_next_line.c:68)
==180469==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180469==    by 0x405953: main (mandatory.cpp:57)
==180469==  Block was alloc'd at
==180469==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180469==    by 0x40758A: ft_strjoin (get_next_line_utils.c:57)
==180469==    by 0x407452: get_next_line (get_next_line.c:83)
==180469==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180469==    by 0x405953: main (mandatory.cpp:57)
==180469== 
==180469== Invalid read of size 1
==180469==    at 0x4074E4: ft_strchr (get_next_line_utils.c:25)
==180469==    by 0x40731D: get_next_line (get_next_line.c:32)
==180469==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180469==    by 0x40595F: main (mandatory.cpp:57)
==180469==  Address 0x4de7310 is 0 bytes inside a block of size 2 free'd
==180469==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180469==    by 0x407852: ft_strdup2 (get_next_line_utils.c:229)
==180469==    by 0x4073ED: get_next_line (get_next_line.c:68)
==180469==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180469==    by 0x405953: main (mandatory.cpp:57)
==180469==  Block was alloc'd at
==180469==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180469==    by 0x40758A: ft_strjoin (get_next_line_utils.c:57)
==180469==    by 0x407452: get_next_line (get_next_line.c:83)
==180469==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180469==    by 0x405953: main (mandatory.cpp:57)
==180469== 
==180469== Invalid read of size 1
==180469==    at 0x40739C: get_next_line (get_next_line.c:58)
==180469==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180469==    by 0x40595F: main (mandatory.cpp:57)
==180469==  Address 0x4de7310 is 0 bytes inside a block of size 2 free'd
==180469==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180469==    by 0x407852: ft_strdup2 (get_next_line_utils.c:229)
==180469==    by 0x4073ED: get_next_line (get_next_line.c:68)
==180469==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180469==    by 0x405953: main (mandatory.cpp:57)
==180469==  Block was alloc'd at
==180469==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180469==    by 0x40758A: ft_strjoin (get_next_line_utils.c:57)
==180469==    by 0x407452: get_next_line (get_next_line.c:83)
==180469==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180469==    by 0x405953: main (mandatory.cpp:57)
==180469== 
==180469== 1 bytes in 1 blocks are definitely lost in loss record 1 of 5
==180469==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180469==    by 0x40742B: get_next_line (get_next_line.c:80)
==180469==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180469==    by 0x405941: main (mandatory.cpp:57)
==180469== 
==180469== 2 bytes in 1 blocks are definitely lost in loss record 2 of 5
==180469==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180469==    by 0x4072EC: get_next_line (get_next_line.c:26)
==180469==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180469==    by 0x405941: main (mandatory.cpp:57)
==180469== 
==180469== 2 bytes in 1 blocks are definitely lost in loss record 3 of 5
==180469==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180469==    by 0x4072EC: get_next_line (get_next_line.c:26)
==180469==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180469==    by 0x405953: main (mandatory.cpp:57)
==180469== 
==180469== 2 bytes in 1 blocks are definitely lost in loss record 4 of 5
==180469==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180469==    by 0x4072EC: get_next_line (get_next_line.c:26)
==180469==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180469==    by 0x40595F: main (mandatory.cpp:57)
==180469== 
==180469== 945 bytes in 42 blocks are definitely lost in loss record 5 of 5
==180469==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180469==    by 0x40758A: ft_strjoin (get_next_line_utils.c:57)
==180469==    by 0x407452: get_next_line (get_next_line.c:83)
==180469==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180469==    by 0x405941: main (mandatory.cpp:57)
==180469== 
==180471== Invalid write of size 1
==180471==    at 0x4073F9: get_next_line (get_next_line.c:69)
==180471==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180471==    by 0x405B89: main (mandatory.cpp:68)
==180471==  Address 0x4de7560 is 0 bytes inside a block of size 44 free'd
==180471==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180471==    by 0x407852: ft_strdup2 (get_next_line_utils.c:229)
==180471==    by 0x4073ED: get_next_line (get_next_line.c:68)
==180471==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180471==    by 0x405B89: main (mandatory.cpp:68)
==180471==  Block was alloc'd at
==180471==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180471==    by 0x40758A: ft_strjoin (get_next_line_utils.c:57)
==180471==    by 0x407452: get_next_line (get_next_line.c:83)
==180471==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180471==    by 0x405B89: main (mandatory.cpp:68)
==180471== 
==180471== Invalid read of size 1
==180471==    at 0x4074E4: ft_strchr (get_next_line_utils.c:25)
==180471==    by 0x40731D: get_next_line (get_next_line.c:32)
==180471==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180471==    by 0x405B95: main (mandatory.cpp:68)
==180471==  Address 0x4de7560 is 0 bytes inside a block of size 44 free'd
==180471==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180471==    by 0x407852: ft_strdup2 (get_next_line_utils.c:229)
==180471==    by 0x4073ED: get_next_line (get_next_line.c:68)
==180471==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180471==    by 0x405B89: main (mandatory.cpp:68)
==180471==  Block was alloc'd at
==180471==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180471==    by 0x40758A: ft_strjoin (get_next_line_utils.c:57)
==180471==    by 0x407452: get_next_line (get_next_line.c:83)
==180471==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180471==    by 0x405B89: main (mandatory.cpp:68)
==180471== 
==180471== Invalid read of size 1
==180471==    at 0x40739C: get_next_line (get_next_line.c:58)
==180471==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180471==    by 0x405B95: main (mandatory.cpp:68)
==180471==  Address 0x4de7560 is 0 bytes inside a block of size 44 free'd
==180471==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180471==    by 0x407852: ft_strdup2 (get_next_line_utils.c:229)
==180471==    by 0x4073ED: get_next_line (get_next_line.c:68)
==180471==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180471==    by 0x405B89: main (mandatory.cpp:68)
==180471==  Block was alloc'd at
==180471==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180471==    by 0x40758A: ft_strjoin (get_next_line_utils.c:57)
==180471==    by 0x407452: get_next_line (get_next_line.c:83)
==180471==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180471==    by 0x405B89: main (mandatory.cpp:68)
==180471== 
==180471== 1 bytes in 1 blocks are definitely lost in loss record 1 of 4
==180471==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180471==    by 0x40742B: get_next_line (get_next_line.c:80)
==180471==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180471==    by 0x405B89: main (mandatory.cpp:68)
==180471== 
==180471== 2 bytes in 1 blocks are definitely lost in loss record 2 of 4
==180471==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180471==    by 0x4072EC: get_next_line (get_next_line.c:26)
==180471==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180471==    by 0x405B89: main (mandatory.cpp:68)
==180471== 
==180471== 2 bytes in 1 blocks are definitely lost in loss record 3 of 4
==180471==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180471==    by 0x4072EC: get_next_line (get_next_line.c:26)
==180471==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180471==    by 0x405B95: main (mandatory.cpp:68)
==180471== 
==180471== 945 bytes in 42 blocks are definitely lost in loss record 4 of 4
==180471==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180471==    by 0x40758A: ft_strjoin (get_next_line_utils.c:57)
==180471==    by 0x407452: get_next_line (get_next_line.c:83)
==180471==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180471==    by 0x405B89: main (mandatory.cpp:68)
==180471== 
==180481== Invalid write of size 1
==180481==    at 0x4073F9: get_next_line (get_next_line.c:69)
==180481==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180481==    by 0x405DC7: main (mandatory.cpp:73)
==180481==  Address 0x4de79a0 is 0 bytes inside a block of size 2 free'd
==180481==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180481==    by 0x407852: ft_strdup2 (get_next_line_utils.c:229)
==180481==    by 0x4073ED: get_next_line (get_next_line.c:68)
==180481==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180481==    by 0x405DC7: main (mandatory.cpp:73)
==180481==  Block was alloc'd at
==180481==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180481==    by 0x40758A: ft_strjoin (get_next_line_utils.c:57)
==180481==    by 0x407452: get_next_line (get_next_line.c:83)
==180481==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180481==    by 0x405DC7: main (mandatory.cpp:73)
==180481== 
==180481== Invalid read of size 1
==180481==    at 0x4074E4: ft_strchr (get_next_line_utils.c:25)
==180481==    by 0x40731D: get_next_line (get_next_line.c:32)
==180481==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180481==    by 0x405DD3: main (mandatory.cpp:73)
==180481==  Address 0x4de79a0 is 0 bytes inside a block of size 2 free'd
==180481==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180481==    by 0x407852: ft_strdup2 (get_next_line_utils.c:229)
==180481==    by 0x4073ED: get_next_line (get_next_line.c:68)
==180481==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180481==    by 0x405DC7: main (mandatory.cpp:73)
==180481==  Block was alloc'd at
==180481==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180481==    by 0x40758A: ft_strjoin (get_next_line_utils.c:57)
==180481==    by 0x407452: get_next_line (get_next_line.c:83)
==180481==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180481==    by 0x405DC7: main (mandatory.cpp:73)
==180481== 
==180481== Invalid read of size 1
==180481==    at 0x40739C: get_next_line (get_next_line.c:58)
==180481==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180481==    by 0x405DD3: main (mandatory.cpp:73)
==180481==  Address 0x4de79a0 is 0 bytes inside a block of size 2 free'd
==180481==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180481==    by 0x407852: ft_strdup2 (get_next_line_utils.c:229)
==180481==    by 0x4073ED: get_next_line (get_next_line.c:68)
==180481==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180481==    by 0x405DC7: main (mandatory.cpp:73)
==180481==  Block was alloc'd at
==180481==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180481==    by 0x40758A: ft_strjoin (get_next_line_utils.c:57)
==180481==    by 0x407452: get_next_line (get_next_line.c:83)
==180481==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180481==    by 0x405DC7: main (mandatory.cpp:73)
==180481== 
==180481== 1 bytes in 1 blocks are definitely lost in loss record 1 of 5
==180481==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180481==    by 0x40742B: get_next_line (get_next_line.c:80)
==180481==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180481==    by 0x405DB5: main (mandatory.cpp:73)
==180481== 
==180481== 2 bytes in 1 blocks are definitely lost in loss record 2 of 5
==180481==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180481==    by 0x4072EC: get_next_line (get_next_line.c:26)
==180481==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180481==    by 0x405DB5: main (mandatory.cpp:73)
==180481== 
==180481== 2 bytes in 1 blocks are definitely lost in loss record 3 of 5
==180481==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180481==    by 0x4072EC: get_next_line (get_next_line.c:26)
==180481==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180481==    by 0x405DC7: main (mandatory.cpp:73)
==180481== 
==180481== 2 bytes in 1 blocks are definitely lost in loss record 4 of 5
==180481==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180481==    by 0x4072EC: get_next_line (get_next_line.c:26)
==180481==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180481==    by 0x405DD3: main (mandatory.cpp:73)
==180481== 
==180481== 989 bytes in 43 blocks are definitely lost in loss record 5 of 5
==180481==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180481==    by 0x40758A: ft_strjoin (get_next_line_utils.c:57)
==180481==    by 0x407452: get_next_line (get_next_line.c:83)
==180481==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180481==    by 0x405DB5: main (mandatory.cpp:73)
==180481== 
==180484== 1 bytes in 1 blocks are definitely lost in loss record 1 of 12
==180484==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180484==    by 0x40742B: get_next_line (get_next_line.c:80)
==180484==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180484==    by 0x405FF3: main (mandatory.cpp:79)
==180484== 
==180484== 2 bytes in 1 blocks are possibly lost in loss record 2 of 12
==180484==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180484==    by 0x40758A: ft_strjoin (get_next_line_utils.c:57)
==180484==    by 0x407452: get_next_line (get_next_line.c:83)
==180484==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180484==    by 0x40603B: main (mandatory.cpp:79)
==180484== 
==180484== 2 bytes in 1 blocks are definitely lost in loss record 3 of 12
==180484==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180484==    by 0x4072EC: get_next_line (get_next_line.c:26)
==180484==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180484==    by 0x405FF3: main (mandatory.cpp:79)
==180484== 
==180484== 2 bytes in 1 blocks are definitely lost in loss record 4 of 12
==180484==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180484==    by 0x40758A: ft_strjoin (get_next_line_utils.c:57)
==180484==    by 0x407452: get_next_line (get_next_line.c:83)
==180484==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180484==    by 0x405FF3: main (mandatory.cpp:79)
==180484== 
==180484== 2 bytes in 1 blocks are definitely lost in loss record 5 of 12
==180484==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180484==    by 0x4072EC: get_next_line (get_next_line.c:26)
==180484==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180484==    by 0x406005: main (mandatory.cpp:79)
==180484== 
==180484== 2 bytes in 1 blocks are definitely lost in loss record 6 of 12
==180484==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180484==    by 0x40758A: ft_strjoin (get_next_line_utils.c:57)
==180484==    by 0x407452: get_next_line (get_next_line.c:83)
==180484==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180484==    by 0x406005: main (mandatory.cpp:79)
==180484== 
==180484== 2 bytes in 1 blocks are definitely lost in loss record 7 of 12
==180484==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180484==    by 0x4072EC: get_next_line (get_next_line.c:26)
==180484==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180484==    by 0x406017: main (mandatory.cpp:79)
==180484== 
==180484== 2 bytes in 1 blocks are definitely lost in loss record 8 of 12
==180484==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180484==    by 0x40758A: ft_strjoin (get_next_line_utils.c:57)
==180484==    by 0x407452: get_next_line (get_next_line.c:83)
==180484==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180484==    by 0x406017: main (mandatory.cpp:79)
==180484== 
==180484== 2 bytes in 1 blocks are definitely lost in loss record 9 of 12
==180484==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180484==    by 0x4072EC: get_next_line (get_next_line.c:26)
==180484==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180484==    by 0x406029: main (mandatory.cpp:79)
==180484== 
==180484== 2 bytes in 1 blocks are definitely lost in loss record 10 of 12
==180484==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180484==    by 0x40758A: ft_strjoin (get_next_line_utils.c:57)
==180484==    by 0x407452: get_next_line (get_next_line.c:83)
==180484==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180484==    by 0x406029: main (mandatory.cpp:79)
==180484== 
==180484== 2 bytes in 1 blocks are definitely lost in loss record 11 of 12
==180484==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180484==    by 0x4072EC: get_next_line (get_next_line.c:26)
==180484==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180484==    by 0x40603B: main (mandatory.cpp:79)
==180484== 
==180484== 2 bytes in 1 blocks are definitely lost in loss record 12 of 12
==180484==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180484==    by 0x4072EC: get_next_line (get_next_line.c:26)
==180484==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180484==    by 0x406047: main (mandatory.cpp:79)
==180484== 
==180487== Invalid write of size 1
==180487==    at 0x4073F9: get_next_line (get_next_line.c:69)
==180487==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180487==    by 0x4062AF: main (mandatory.cpp:88)
==180487==  Address 0x4dec090 is 0 bytes inside a block of size 42 free'd
==180487==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180487==    by 0x407852: ft_strdup2 (get_next_line_utils.c:229)
==180487==    by 0x4073ED: get_next_line (get_next_line.c:68)
==180487==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180487==    by 0x4062AF: main (mandatory.cpp:88)
==180487==  Block was alloc'd at
==180487==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180487==    by 0x40758A: ft_strjoin (get_next_line_utils.c:57)
==180487==    by 0x407452: get_next_line (get_next_line.c:83)
==180487==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180487==    by 0x4062AF: main (mandatory.cpp:88)
==180487== 
==180487== Invalid read of size 1
==180487==    at 0x4074E4: ft_strchr (get_next_line_utils.c:25)
==180487==    by 0x40731D: get_next_line (get_next_line.c:32)
==180487==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180487==    by 0x4062BB: main (mandatory.cpp:88)
==180487==  Address 0x4dec090 is 0 bytes inside a block of size 42 free'd
==180487==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180487==    by 0x407852: ft_strdup2 (get_next_line_utils.c:229)
==180487==    by 0x4073ED: get_next_line (get_next_line.c:68)
==180487==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180487==    by 0x4062AF: main (mandatory.cpp:88)
==180487==  Block was alloc'd at
==180487==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180487==    by 0x40758A: ft_strjoin (get_next_line_utils.c:57)
==180487==    by 0x407452: get_next_line (get_next_line.c:83)
==180487==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180487==    by 0x4062AF: main (mandatory.cpp:88)
==180487== 
==180487== Invalid read of size 1
==180487==    at 0x40739C: get_next_line (get_next_line.c:58)
==180487==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180487==    by 0x4062BB: main (mandatory.cpp:88)
==180487==  Address 0x4dec090 is 0 bytes inside a block of size 42 free'd
==180487==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180487==    by 0x407852: ft_strdup2 (get_next_line_utils.c:229)
==180487==    by 0x4073ED: get_next_line (get_next_line.c:68)
==180487==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180487==    by 0x4062AF: main (mandatory.cpp:88)
==180487==  Block was alloc'd at
==180487==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180487==    by 0x40758A: ft_strjoin (get_next_line_utils.c:57)
==180487==    by 0x407452: get_next_line (get_next_line.c:83)
==180487==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180487==    by 0x4062AF: main (mandatory.cpp:88)
==180487== 
==180487== 1 bytes in 1 blocks are definitely lost in loss record 1 of 12
==180487==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180487==    by 0x40742B: get_next_line (get_next_line.c:80)
==180487==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180487==    by 0x406267: main (mandatory.cpp:88)
==180487== 
==180487== 2 bytes in 1 blocks are definitely lost in loss record 2 of 12
==180487==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180487==    by 0x4072EC: get_next_line (get_next_line.c:26)
==180487==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180487==    by 0x406267: main (mandatory.cpp:88)
==180487== 
==180487== 2 bytes in 1 blocks are definitely lost in loss record 3 of 12
==180487==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180487==    by 0x4072EC: get_next_line (get_next_line.c:26)
==180487==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180487==    by 0x406279: main (mandatory.cpp:88)
==180487== 
==180487== 2 bytes in 1 blocks are definitely lost in loss record 4 of 12
==180487==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180487==    by 0x4072EC: get_next_line (get_next_line.c:26)
==180487==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180487==    by 0x40628B: main (mandatory.cpp:88)
==180487== 
==180487== 2 bytes in 1 blocks are definitely lost in loss record 5 of 12
==180487==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180487==    by 0x4072EC: get_next_line (get_next_line.c:26)
==180487==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180487==    by 0x40629D: main (mandatory.cpp:88)
==180487== 
==180487== 2 bytes in 1 blocks are definitely lost in loss record 6 of 12
==180487==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180487==    by 0x4072EC: get_next_line (get_next_line.c:26)
==180487==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180487==    by 0x4062AF: main (mandatory.cpp:88)
==180487== 
==180487== 2 bytes in 1 blocks are definitely lost in loss record 7 of 12
==180487==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180487==    by 0x4072EC: get_next_line (get_next_line.c:26)
==180487==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180487==    by 0x4062BB: main (mandatory.cpp:88)
==180487== 
==180487== 860 bytes in 40 blocks are definitely lost in loss record 8 of 12
==180487==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180487==    by 0x40758A: ft_strjoin (get_next_line_utils.c:57)
==180487==    by 0x407452: get_next_line (get_next_line.c:83)
==180487==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180487==    by 0x4062AF: main (mandatory.cpp:88)
==180487== 
==180487== 945 bytes in 42 blocks are definitely lost in loss record 9 of 12
==180487==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180487==    by 0x40758A: ft_strjoin (get_next_line_utils.c:57)
==180487==    by 0x407452: get_next_line (get_next_line.c:83)
==180487==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180487==    by 0x406267: main (mandatory.cpp:88)
==180487== 
==180487== 989 bytes in 43 blocks are definitely lost in loss record 10 of 12
==180487==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180487==    by 0x40758A: ft_strjoin (get_next_line_utils.c:57)
==180487==    by 0x407452: get_next_line (get_next_line.c:83)
==180487==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180487==    by 0x406279: main (mandatory.cpp:88)
==180487== 
==180487== 989 bytes in 43 blocks are definitely lost in loss record 11 of 12
==180487==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180487==    by 0x40758A: ft_strjoin (get_next_line_utils.c:57)
==180487==    by 0x407452: get_next_line (get_next_line.c:83)
==180487==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180487==    by 0x40629D: main (mandatory.cpp:88)
==180487== 
==180487== 1,034 bytes in 44 blocks are definitely lost in loss record 12 of 12
==180487==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180487==    by 0x40758A: ft_strjoin (get_next_line_utils.c:57)
==180487==    by 0x407452: get_next_line (get_next_line.c:83)
==180487==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180487==    by 0x40628B: main (mandatory.cpp:88)
==180487== 
==180488== 1 bytes in 1 blocks are definitely lost in loss record 1 of 13
==180488==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180488==    by 0x40742B: get_next_line (get_next_line.c:80)
==180488==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180488==    by 0x4064DB: main (mandatory.cpp:97)
==180488== 
==180488== 2 bytes in 1 blocks are definitely lost in loss record 2 of 13
==180488==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180488==    by 0x4072EC: get_next_line (get_next_line.c:26)
==180488==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180488==    by 0x4064DB: main (mandatory.cpp:97)
==180488== 
==180488== 2 bytes in 1 blocks are definitely lost in loss record 3 of 13
==180488==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180488==    by 0x4072EC: get_next_line (get_next_line.c:26)
==180488==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180488==    by 0x4064ED: main (mandatory.cpp:97)
==180488== 
==180488== 2 bytes in 1 blocks are definitely lost in loss record 4 of 13
==180488==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180488==    by 0x4072EC: get_next_line (get_next_line.c:26)
==180488==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180488==    by 0x4064FF: main (mandatory.cpp:97)
==180488== 
==180488== 2 bytes in 1 blocks are definitely lost in loss record 5 of 13
==180488==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180488==    by 0x4072EC: get_next_line (get_next_line.c:26)
==180488==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180488==    by 0x406511: main (mandatory.cpp:97)
==180488== 
==180488== 2 bytes in 1 blocks are definitely lost in loss record 6 of 13
==180488==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180488==    by 0x4072EC: get_next_line (get_next_line.c:26)
==180488==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180488==    by 0x406523: main (mandatory.cpp:97)
==180488== 
==180488== 2 bytes in 1 blocks are definitely lost in loss record 7 of 13
==180488==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180488==    by 0x4072EC: get_next_line (get_next_line.c:26)
==180488==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180488==    by 0x40652F: main (mandatory.cpp:97)
==180488== 
==180488== 42 bytes in 1 blocks are possibly lost in loss record 8 of 13
==180488==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180488==    by 0x40758A: ft_strjoin (get_next_line_utils.c:57)
==180488==    by 0x407452: get_next_line (get_next_line.c:83)
==180488==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180488==    by 0x406523: main (mandatory.cpp:97)
==180488== 
==180488== 860 bytes in 40 blocks are definitely lost in loss record 9 of 13
==180488==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180488==    by 0x40758A: ft_strjoin (get_next_line_utils.c:57)
==180488==    by 0x407452: get_next_line (get_next_line.c:83)
==180488==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180488==    by 0x406523: main (mandatory.cpp:97)
==180488== 
==180488== 902 bytes in 41 blocks are definitely lost in loss record 10 of 13
==180488==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180488==    by 0x40758A: ft_strjoin (get_next_line_utils.c:57)
==180488==    by 0x407452: get_next_line (get_next_line.c:83)
==180488==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180488==    by 0x4064DB: main (mandatory.cpp:97)
==180488== 
==180488== 945 bytes in 42 blocks are definitely lost in loss record 11 of 13
==180488==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180488==    by 0x40758A: ft_strjoin (get_next_line_utils.c:57)
==180488==    by 0x407452: get_next_line (get_next_line.c:83)
==180488==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180488==    by 0x4064ED: main (mandatory.cpp:97)
==180488== 
==180488== 945 bytes in 42 blocks are definitely lost in loss record 12 of 13
==180488==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180488==    by 0x40758A: ft_strjoin (get_next_line_utils.c:57)
==180488==    by 0x407452: get_next_line (get_next_line.c:83)
==180488==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180488==    by 0x406511: main (mandatory.cpp:97)
==180488== 
==180488== 989 bytes in 43 blocks are definitely lost in loss record 13 of 13
==180488==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180488==    by 0x40758A: ft_strjoin (get_next_line_utils.c:57)
==180488==    by 0x407452: get_next_line (get_next_line.c:83)
==180488==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180488==    by 0x4064FF: main (mandatory.cpp:97)
==180488== 
==180490== Invalid write of size 1
==180490==    at 0x4073F9: get_next_line (get_next_line.c:69)
==180490==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180490==    by 0x4067DF: main (mandatory.cpp:106)
==180490==  Address 0x4decab0 is 0 bytes inside a block of size 42 free'd
==180490==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180490==    by 0x407852: ft_strdup2 (get_next_line_utils.c:229)
==180490==    by 0x4073ED: get_next_line (get_next_line.c:68)
==180490==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180490==    by 0x4067DF: main (mandatory.cpp:106)
==180490==  Block was alloc'd at
==180490==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180490==    by 0x40758A: ft_strjoin (get_next_line_utils.c:57)
==180490==    by 0x407452: get_next_line (get_next_line.c:83)
==180490==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180490==    by 0x4067DF: main (mandatory.cpp:106)
==180490== 
==180490== Invalid read of size 1
==180490==    at 0x4074E4: ft_strchr (get_next_line_utils.c:25)
==180490==    by 0x40731D: get_next_line (get_next_line.c:32)
==180490==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180490==    by 0x4067EB: main (mandatory.cpp:106)
==180490==  Address 0x4decab0 is 0 bytes inside a block of size 42 free'd
==180490==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180490==    by 0x407852: ft_strdup2 (get_next_line_utils.c:229)
==180490==    by 0x4073ED: get_next_line (get_next_line.c:68)
==180490==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180490==    by 0x4067DF: main (mandatory.cpp:106)
==180490==  Block was alloc'd at
==180490==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180490==    by 0x40758A: ft_strjoin (get_next_line_utils.c:57)
==180490==    by 0x407452: get_next_line (get_next_line.c:83)
==180490==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180490==    by 0x4067DF: main (mandatory.cpp:106)
==180490== 
==180490== Invalid read of size 1
==180490==    at 0x40739C: get_next_line (get_next_line.c:58)
==180490==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180490==    by 0x4067EB: main (mandatory.cpp:106)
==180490==  Address 0x4decab0 is 0 bytes inside a block of size 42 free'd
==180490==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180490==    by 0x407852: ft_strdup2 (get_next_line_utils.c:229)
==180490==    by 0x4073ED: get_next_line (get_next_line.c:68)
==180490==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180490==    by 0x4067DF: main (mandatory.cpp:106)
==180490==  Block was alloc'd at
==180490==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180490==    by 0x40758A: ft_strjoin (get_next_line_utils.c:57)
==180490==    by 0x407452: get_next_line (get_next_line.c:83)
==180490==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180490==    by 0x4067DF: main (mandatory.cpp:106)
==180490== 
==180490== 1 bytes in 1 blocks are definitely lost in loss record 1 of 20
==180490==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180490==    by 0x40742B: get_next_line (get_next_line.c:80)
==180490==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180490==    by 0x40674F: main (mandatory.cpp:106)
==180490== 
==180490== 2 bytes in 1 blocks are definitely lost in loss record 2 of 20
==180490==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180490==    by 0x4072EC: get_next_line (get_next_line.c:26)
==180490==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180490==    by 0x40674F: main (mandatory.cpp:106)
==180490== 
==180490== 2 bytes in 1 blocks are definitely lost in loss record 3 of 20
==180490==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180490==    by 0x4072EC: get_next_line (get_next_line.c:26)
==180490==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180490==    by 0x406761: main (mandatory.cpp:106)
==180490== 
==180490== 2 bytes in 1 blocks are definitely lost in loss record 4 of 20
==180490==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180490==    by 0x40758A: ft_strjoin (get_next_line_utils.c:57)
==180490==    by 0x407452: get_next_line (get_next_line.c:83)
==180490==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180490==    by 0x406761: main (mandatory.cpp:106)
==180490== 
==180490== 2 bytes in 1 blocks are definitely lost in loss record 5 of 20
==180490==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180490==    by 0x4072EC: get_next_line (get_next_line.c:26)
==180490==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180490==    by 0x406773: main (mandatory.cpp:106)
==180490== 
==180490== 2 bytes in 1 blocks are definitely lost in loss record 6 of 20
==180490==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180490==    by 0x4072EC: get_next_line (get_next_line.c:26)
==180490==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180490==    by 0x406785: main (mandatory.cpp:106)
==180490== 
==180490== 2 bytes in 1 blocks are definitely lost in loss record 7 of 20
==180490==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180490==    by 0x40758A: ft_strjoin (get_next_line_utils.c:57)
==180490==    by 0x407452: get_next_line (get_next_line.c:83)
==180490==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180490==    by 0x406785: main (mandatory.cpp:106)
==180490== 
==180490== 2 bytes in 1 blocks are definitely lost in loss record 8 of 20
==180490==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180490==    by 0x4072EC: get_next_line (get_next_line.c:26)
==180490==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180490==    by 0x406797: main (mandatory.cpp:106)
==180490== 
==180490== 2 bytes in 1 blocks are definitely lost in loss record 9 of 20
==180490==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180490==    by 0x4072EC: get_next_line (get_next_line.c:26)
==180490==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180490==    by 0x4067A9: main (mandatory.cpp:106)
==180490== 
==180490== 2 bytes in 1 blocks are definitely lost in loss record 10 of 20
==180490==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180490==    by 0x40758A: ft_strjoin (get_next_line_utils.c:57)
==180490==    by 0x407452: get_next_line (get_next_line.c:83)
==180490==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180490==    by 0x4067A9: main (mandatory.cpp:106)
==180490== 
==180490== 2 bytes in 1 blocks are definitely lost in loss record 11 of 20
==180490==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180490==    by 0x4072EC: get_next_line (get_next_line.c:26)
==180490==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180490==    by 0x4067BB: main (mandatory.cpp:106)
==180490== 
==180490== 2 bytes in 1 blocks are definitely lost in loss record 12 of 20
==180490==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180490==    by 0x4072EC: get_next_line (get_next_line.c:26)
==180490==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180490==    by 0x4067CD: main (mandatory.cpp:106)
==180490== 
==180490== 2 bytes in 1 blocks are definitely lost in loss record 13 of 20
==180490==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180490==    by 0x40758A: ft_strjoin (get_next_line_utils.c:57)
==180490==    by 0x407452: get_next_line (get_next_line.c:83)
==180490==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180490==    by 0x4067CD: main (mandatory.cpp:106)
==180490== 
==180490== 2 bytes in 1 blocks are definitely lost in loss record 14 of 20
==180490==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180490==    by 0x4072EC: get_next_line (get_next_line.c:26)
==180490==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180490==    by 0x4067DF: main (mandatory.cpp:106)
==180490== 
==180490== 2 bytes in 1 blocks are definitely lost in loss record 15 of 20
==180490==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180490==    by 0x4072EC: get_next_line (get_next_line.c:26)
==180490==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180490==    by 0x4067EB: main (mandatory.cpp:106)
==180490== 
==180490== 860 bytes in 40 blocks are definitely lost in loss record 16 of 20
==180490==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180490==    by 0x40758A: ft_strjoin (get_next_line_utils.c:57)
==180490==    by 0x407452: get_next_line (get_next_line.c:83)
==180490==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180490==    by 0x4067DF: main (mandatory.cpp:106)
==180490== 
==180490== 945 bytes in 42 blocks are definitely lost in loss record 17 of 20
==180490==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180490==    by 0x40758A: ft_strjoin (get_next_line_utils.c:57)
==180490==    by 0x407452: get_next_line (get_next_line.c:83)
==180490==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180490==    by 0x40674F: main (mandatory.cpp:106)
==180490== 
==180490== 989 bytes in 43 blocks are definitely lost in loss record 18 of 20
==180490==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180490==    by 0x40758A: ft_strjoin (get_next_line_utils.c:57)
==180490==    by 0x407452: get_next_line (get_next_line.c:83)
==180490==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180490==    by 0x406773: main (mandatory.cpp:106)
==180490== 
==180490== 989 bytes in 43 blocks are definitely lost in loss record 19 of 20
==180490==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180490==    by 0x40758A: ft_strjoin (get_next_line_utils.c:57)
==180490==    by 0x407452: get_next_line (get_next_line.c:83)
==180490==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180490==    by 0x4067BB: main (mandatory.cpp:106)
==180490== 
==180490== 1,034 bytes in 44 blocks are definitely lost in loss record 20 of 20
==180490==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180490==    by 0x40758A: ft_strjoin (get_next_line_utils.c:57)
==180490==    by 0x407452: get_next_line (get_next_line.c:83)
==180490==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180490==    by 0x406797: main (mandatory.cpp:106)
==180490== 
==180499== 1 bytes in 1 blocks are definitely lost in loss record 1 of 21
==180499==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180499==    by 0x40742B: get_next_line (get_next_line.c:80)
==180499==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180499==    by 0x406A0B: main (mandatory.cpp:119)
==180499== 
==180499== 2 bytes in 1 blocks are definitely lost in loss record 2 of 21
==180499==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180499==    by 0x4072EC: get_next_line (get_next_line.c:26)
==180499==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180499==    by 0x406A0B: main (mandatory.cpp:119)
==180499== 
==180499== 2 bytes in 1 blocks are definitely lost in loss record 3 of 21
==180499==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180499==    by 0x4072EC: get_next_line (get_next_line.c:26)
==180499==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180499==    by 0x406A1D: main (mandatory.cpp:119)
==180499== 
==180499== 2 bytes in 1 blocks are definitely lost in loss record 4 of 21
==180499==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180499==    by 0x40758A: ft_strjoin (get_next_line_utils.c:57)
==180499==    by 0x407452: get_next_line (get_next_line.c:83)
==180499==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180499==    by 0x406A1D: main (mandatory.cpp:119)
==180499== 
==180499== 2 bytes in 1 blocks are definitely lost in loss record 5 of 21
==180499==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180499==    by 0x4072EC: get_next_line (get_next_line.c:26)
==180499==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180499==    by 0x406A2F: main (mandatory.cpp:119)
==180499== 
==180499== 2 bytes in 1 blocks are definitely lost in loss record 6 of 21
==180499==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180499==    by 0x4072EC: get_next_line (get_next_line.c:26)
==180499==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180499==    by 0x406A41: main (mandatory.cpp:119)
==180499== 
==180499== 2 bytes in 1 blocks are definitely lost in loss record 7 of 21
==180499==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180499==    by 0x40758A: ft_strjoin (get_next_line_utils.c:57)
==180499==    by 0x407452: get_next_line (get_next_line.c:83)
==180499==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180499==    by 0x406A41: main (mandatory.cpp:119)
==180499== 
==180499== 2 bytes in 1 blocks are definitely lost in loss record 8 of 21
==180499==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180499==    by 0x4072EC: get_next_line (get_next_line.c:26)
==180499==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180499==    by 0x406A53: main (mandatory.cpp:119)
==180499== 
==180499== 2 bytes in 1 blocks are definitely lost in loss record 9 of 21
==180499==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180499==    by 0x4072EC: get_next_line (get_next_line.c:26)
==180499==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180499==    by 0x406A65: main (mandatory.cpp:119)
==180499== 
==180499== 2 bytes in 1 blocks are definitely lost in loss record 10 of 21
==180499==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180499==    by 0x40758A: ft_strjoin (get_next_line_utils.c:57)
==180499==    by 0x407452: get_next_line (get_next_line.c:83)
==180499==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180499==    by 0x406A65: main (mandatory.cpp:119)
==180499== 
==180499== 2 bytes in 1 blocks are definitely lost in loss record 11 of 21
==180499==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180499==    by 0x4072EC: get_next_line (get_next_line.c:26)
==180499==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180499==    by 0x406A77: main (mandatory.cpp:119)
==180499== 
==180499== 2 bytes in 1 blocks are definitely lost in loss record 12 of 21
==180499==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180499==    by 0x4072EC: get_next_line (get_next_line.c:26)
==180499==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180499==    by 0x406A89: main (mandatory.cpp:119)
==180499== 
==180499== 2 bytes in 1 blocks are definitely lost in loss record 13 of 21
==180499==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180499==    by 0x40758A: ft_strjoin (get_next_line_utils.c:57)
==180499==    by 0x407452: get_next_line (get_next_line.c:83)
==180499==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180499==    by 0x406A89: main (mandatory.cpp:119)
==180499== 
==180499== 2 bytes in 1 blocks are definitely lost in loss record 14 of 21
==180499==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180499==    by 0x4072EC: get_next_line (get_next_line.c:26)
==180499==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180499==    by 0x406A9B: main (mandatory.cpp:119)
==180499== 
==180499== 2 bytes in 1 blocks are definitely lost in loss record 15 of 21
==180499==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180499==    by 0x4072EC: get_next_line (get_next_line.c:26)
==180499==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180499==    by 0x406AA7: main (mandatory.cpp:119)
==180499== 
==180499== 43 bytes in 1 blocks are possibly lost in loss record 16 of 21
==180499==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180499==    by 0x40758A: ft_strjoin (get_next_line_utils.c:57)
==180499==    by 0x407452: get_next_line (get_next_line.c:83)
==180499==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180499==    by 0x406A9B: main (mandatory.cpp:119)
==180499== 
==180499== 902 bytes in 41 blocks are definitely lost in loss record 17 of 21
==180499==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180499==    by 0x40758A: ft_strjoin (get_next_line_utils.c:57)
==180499==    by 0x407452: get_next_line (get_next_line.c:83)
==180499==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180499==    by 0x406A9B: main (mandatory.cpp:119)
==180499== 
==180499== 945 bytes in 42 blocks are definitely lost in loss record 18 of 21
==180499==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180499==    by 0x40758A: ft_strjoin (get_next_line_utils.c:57)
==180499==    by 0x407452: get_next_line (get_next_line.c:83)
==180499==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180499==    by 0x406A0B: main (mandatory.cpp:119)
==180499== 
==180499== 989 bytes in 43 blocks are definitely lost in loss record 19 of 21
==180499==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180499==    by 0x40758A: ft_strjoin (get_next_line_utils.c:57)
==180499==    by 0x407452: get_next_line (get_next_line.c:83)
==180499==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180499==    by 0x406A2F: main (mandatory.cpp:119)
==180499== 
==180499== 989 bytes in 43 blocks are definitely lost in loss record 20 of 21
==180499==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180499==    by 0x40758A: ft_strjoin (get_next_line_utils.c:57)
==180499==    by 0x407452: get_next_line (get_next_line.c:83)
==180499==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180499==    by 0x406A77: main (mandatory.cpp:119)
==180499== 
==180499== 1,034 bytes in 44 blocks are definitely lost in loss record 21 of 21
==180499==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180499==    by 0x40758A: ft_strjoin (get_next_line_utils.c:57)
==180499==    by 0x407452: get_next_line (get_next_line.c:83)
==180499==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180499==    by 0x406A53: main (mandatory.cpp:119)
==180499== 
==180507== Invalid read of size 1
==180507==    at 0x484FBD4: strcmp (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180507==    by 0x402CFA: gnl(int, char const*) (gnl.cpp:24)
==180507==    by 0x40711E: main (mandatory.cpp:141)
==180507==  Address 0x0 is not stack'd, malloc'd or (recently) free'd
==180507== 
==180542== Invalid write of size 1
==180542==    at 0x4073AA: get_next_line (get_next_line.c:47)
==180542==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180542==    by 0x404BB6: main (mandatory.cpp:25)
==180542==  Address 0x4de429f is 1 bytes before a block of size 43 alloc'd
==180542==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180542==    by 0x40731E: get_next_line (get_next_line.c:26)
==180542==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180542==    by 0x404BB6: main (mandatory.cpp:25)
==180542== 
==180542== Invalid write of size 1
==180542==    at 0x4073AA: get_next_line (get_next_line.c:47)
==180542==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180542==    by 0x404BD8: main (mandatory.cpp:25)
==180542==  Address 0x4de430f is 1 bytes before a block of size 43 alloc'd
==180542==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180542==    by 0x40731E: get_next_line (get_next_line.c:26)
==180542==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180542==    by 0x404BD8: main (mandatory.cpp:25)
==180542== 
==180542== 43 bytes in 1 blocks are definitely lost in loss record 1 of 2
==180542==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180542==    by 0x40731E: get_next_line (get_next_line.c:26)
==180542==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180542==    by 0x404BB6: main (mandatory.cpp:25)
==180542== 
==180542== 43 bytes in 1 blocks are definitely lost in loss record 2 of 2
==180542==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180542==    by 0x40731E: get_next_line (get_next_line.c:26)
==180542==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180542==    by 0x404BD8: main (mandatory.cpp:25)
==180542== 
==180543== Invalid read of size 1
==180543==    at 0x4073CE: get_next_line (get_next_line.c:58)
==180543==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180543==    by 0x404E53: main (mandatory.cpp:31)
==180543==  Address 0x0 is not stack'd, malloc'd or (recently) free'd
==180543== 
==180554== 1 bytes in 1 blocks are definitely lost in loss record 1 of 4
==180554==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180554==    by 0x40745D: get_next_line (get_next_line.c:80)
==180554==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180554==    by 0x40507F: main (mandatory.cpp:36)
==180554== 
==180554== 2 bytes in 1 blocks are possibly lost in loss record 2 of 4
==180554==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180554==    by 0x4075BC: ft_strjoin (get_next_line_utils.c:57)
==180554==    by 0x407484: get_next_line (get_next_line.c:83)
==180554==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180554==    by 0x40507F: main (mandatory.cpp:36)
==180554== 
==180554== 43 bytes in 1 blocks are definitely lost in loss record 3 of 4
==180554==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180554==    by 0x40731E: get_next_line (get_next_line.c:26)
==180554==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180554==    by 0x40507F: main (mandatory.cpp:36)
==180554== 
==180554== 43 bytes in 1 blocks are definitely lost in loss record 4 of 4
==180554==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180554==    by 0x40731E: get_next_line (get_next_line.c:26)
==180554==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180554==    by 0x40508B: main (mandatory.cpp:36)
==180554== 
==180559== Invalid write of size 1
==180559==    at 0x40742B: get_next_line (get_next_line.c:69)
==180559==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180559==    by 0x4052AB: main (mandatory.cpp:41)
==180559==  Address 0x4de59c0 is 0 bytes inside a block of size 42 free'd
==180559==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180559==    by 0x407884: ft_strdup2 (get_next_line_utils.c:229)
==180559==    by 0x40741F: get_next_line (get_next_line.c:68)
==180559==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180559==    by 0x4052AB: main (mandatory.cpp:41)
==180559==  Block was alloc'd at
==180559==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180559==    by 0x4075BC: ft_strjoin (get_next_line_utils.c:57)
==180559==    by 0x407484: get_next_line (get_next_line.c:83)
==180559==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180559==    by 0x4052AB: main (mandatory.cpp:41)
==180559== 
==180559== Invalid read of size 1
==180559==    at 0x407516: ft_strchr (get_next_line_utils.c:25)
==180559==    by 0x40734F: get_next_line (get_next_line.c:32)
==180559==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180559==    by 0x4052B7: main (mandatory.cpp:41)
==180559==  Address 0x4de59c0 is 0 bytes inside a block of size 42 free'd
==180559==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180559==    by 0x407884: ft_strdup2 (get_next_line_utils.c:229)
==180559==    by 0x40741F: get_next_line (get_next_line.c:68)
==180559==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180559==    by 0x4052AB: main (mandatory.cpp:41)
==180559==  Block was alloc'd at
==180559==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180559==    by 0x4075BC: ft_strjoin (get_next_line_utils.c:57)
==180559==    by 0x407484: get_next_line (get_next_line.c:83)
==180559==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180559==    by 0x4052AB: main (mandatory.cpp:41)
==180559== 
==180559== Invalid read of size 1
==180559==    at 0x4073CE: get_next_line (get_next_line.c:58)
==180559==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180559==    by 0x4052B7: main (mandatory.cpp:41)
==180559==  Address 0x4de59c0 is 0 bytes inside a block of size 42 free'd
==180559==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180559==    by 0x407884: ft_strdup2 (get_next_line_utils.c:229)
==180559==    by 0x40741F: get_next_line (get_next_line.c:68)
==180559==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180559==    by 0x4052AB: main (mandatory.cpp:41)
==180559==  Block was alloc'd at
==180559==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180559==    by 0x4075BC: ft_strjoin (get_next_line_utils.c:57)
==180559==    by 0x407484: get_next_line (get_next_line.c:83)
==180559==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180559==    by 0x4052AB: main (mandatory.cpp:41)
==180559== 
==180559== 1 bytes in 1 blocks are definitely lost in loss record 1 of 3
==180559==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180559==    by 0x40745D: get_next_line (get_next_line.c:80)
==180559==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180559==    by 0x4052AB: main (mandatory.cpp:41)
==180559== 
==180559== 43 bytes in 1 blocks are definitely lost in loss record 2 of 3
==180559==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180559==    by 0x40731E: get_next_line (get_next_line.c:26)
==180559==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180559==    by 0x4052AB: main (mandatory.cpp:41)
==180559== 
==180559== 43 bytes in 1 blocks are definitely lost in loss record 3 of 3
==180559==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180559==    by 0x40731E: get_next_line (get_next_line.c:26)
==180559==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180559==    by 0x4052B7: main (mandatory.cpp:41)
==180559== 
==180564== Invalid free() / delete / delete[] / realloc()
==180564==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180564==    by 0x407884: ft_strdup2 (get_next_line_utils.c:229)
==180564==    by 0x40741F: get_next_line (get_next_line.c:68)
==180564==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180564==    by 0x4054E9: main (mandatory.cpp:46)
==180564==  Address 0x4de5cf9 is 41 bytes inside a block of size 43 alloc'd
==180564==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180564==    by 0x4075BC: ft_strjoin (get_next_line_utils.c:57)
==180564==    by 0x407484: get_next_line (get_next_line.c:83)
==180564==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180564==    by 0x4054D7: main (mandatory.cpp:46)
==180564== 
==180564== 1 bytes in 1 blocks are definitely lost in loss record 1 of 5
==180564==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180564==    by 0x40745D: get_next_line (get_next_line.c:80)
==180564==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180564==    by 0x4054D7: main (mandatory.cpp:46)
==180564== 
==180564== 43 bytes in 1 blocks are possibly lost in loss record 2 of 5
==180564==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180564==    by 0x4075BC: ft_strjoin (get_next_line_utils.c:57)
==180564==    by 0x407484: get_next_line (get_next_line.c:83)
==180564==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180564==    by 0x4054D7: main (mandatory.cpp:46)
==180564== 
==180564== 43 bytes in 1 blocks are definitely lost in loss record 3 of 5
==180564==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180564==    by 0x40731E: get_next_line (get_next_line.c:26)
==180564==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180564==    by 0x4054D7: main (mandatory.cpp:46)
==180564== 
==180564== 43 bytes in 1 blocks are definitely lost in loss record 4 of 5
==180564==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180564==    by 0x40731E: get_next_line (get_next_line.c:26)
==180564==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180564==    by 0x4054E9: main (mandatory.cpp:46)
==180564== 
==180564== 43 bytes in 1 blocks are definitely lost in loss record 5 of 5
==180564==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180564==    by 0x40731E: get_next_line (get_next_line.c:26)
==180564==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180564==    by 0x4054F5: main (mandatory.cpp:46)
==180564== 
==180565== Invalid write of size 1
==180565==    at 0x40742B: get_next_line (get_next_line.c:69)
==180565==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180565==    by 0x405715: main (mandatory.cpp:52)
==180565==  Address 0x4de5fe0 is 0 bytes inside a block of size 43 free'd
==180565==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180565==    by 0x407884: ft_strdup2 (get_next_line_utils.c:229)
==180565==    by 0x40741F: get_next_line (get_next_line.c:68)
==180565==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180565==    by 0x405715: main (mandatory.cpp:52)
==180565==  Block was alloc'd at
==180565==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180565==    by 0x4075BC: ft_strjoin (get_next_line_utils.c:57)
==180565==    by 0x407484: get_next_line (get_next_line.c:83)
==180565==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180565==    by 0x405715: main (mandatory.cpp:52)
==180565== 
==180565== Invalid read of size 1
==180565==    at 0x407516: ft_strchr (get_next_line_utils.c:25)
==180565==    by 0x40734F: get_next_line (get_next_line.c:32)
==180565==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180565==    by 0x405721: main (mandatory.cpp:52)
==180565==  Address 0x4de5fe0 is 0 bytes inside a block of size 43 free'd
==180565==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180565==    by 0x407884: ft_strdup2 (get_next_line_utils.c:229)
==180565==    by 0x40741F: get_next_line (get_next_line.c:68)
==180565==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180565==    by 0x405715: main (mandatory.cpp:52)
==180565==  Block was alloc'd at
==180565==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180565==    by 0x4075BC: ft_strjoin (get_next_line_utils.c:57)
==180565==    by 0x407484: get_next_line (get_next_line.c:83)
==180565==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180565==    by 0x405715: main (mandatory.cpp:52)
==180565== 
==180565== Invalid read of size 1
==180565==    at 0x4073CE: get_next_line (get_next_line.c:58)
==180565==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180565==    by 0x405721: main (mandatory.cpp:52)
==180565==  Address 0x4de5fe0 is 0 bytes inside a block of size 43 free'd
==180565==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180565==    by 0x407884: ft_strdup2 (get_next_line_utils.c:229)
==180565==    by 0x40741F: get_next_line (get_next_line.c:68)
==180565==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180565==    by 0x405715: main (mandatory.cpp:52)
==180565==  Block was alloc'd at
==180565==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180565==    by 0x4075BC: ft_strjoin (get_next_line_utils.c:57)
==180565==    by 0x407484: get_next_line (get_next_line.c:83)
==180565==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180565==    by 0x405715: main (mandatory.cpp:52)
==180565== 
==180565== 1 bytes in 1 blocks are definitely lost in loss record 1 of 3
==180565==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180565==    by 0x40745D: get_next_line (get_next_line.c:80)
==180565==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180565==    by 0x405715: main (mandatory.cpp:52)
==180565== 
==180565== 43 bytes in 1 blocks are definitely lost in loss record 2 of 3
==180565==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180565==    by 0x40731E: get_next_line (get_next_line.c:26)
==180565==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180565==    by 0x405715: main (mandatory.cpp:52)
==180565== 
==180565== 43 bytes in 1 blocks are definitely lost in loss record 3 of 3
==180565==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180565==    by 0x40731E: get_next_line (get_next_line.c:26)
==180565==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180565==    by 0x405721: main (mandatory.cpp:52)
==180565== 
==180566== 1 bytes in 1 blocks are definitely lost in loss record 1 of 4
==180566==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180566==    by 0x40745D: get_next_line (get_next_line.c:80)
==180566==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180566==    by 0x405941: main (mandatory.cpp:57)
==180566== 
==180566== 43 bytes in 1 blocks are possibly lost in loss record 2 of 4
==180566==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180566==    by 0x4075BC: ft_strjoin (get_next_line_utils.c:57)
==180566==    by 0x407484: get_next_line (get_next_line.c:83)
==180566==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180566==    by 0x405941: main (mandatory.cpp:57)
==180566== 
==180566== 43 bytes in 1 blocks are definitely lost in loss record 3 of 4
==180566==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180566==    by 0x40731E: get_next_line (get_next_line.c:26)
==180566==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180566==    by 0x405941: main (mandatory.cpp:57)
==180566== 
==180566== 43 bytes in 1 blocks are definitely lost in loss record 4 of 4
==180566==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180566==    by 0x40731E: get_next_line (get_next_line.c:26)
==180566==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180566==    by 0x405991: main (mandatory.cpp:57)
==180566== 
==180577== Invalid write of size 1
==180577==    at 0x40742B: get_next_line (get_next_line.c:69)
==180577==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180577==    by 0x405BBB: main (mandatory.cpp:68)
==180577==  Address 0x4de6670 is 0 bytes inside a block of size 44 free'd
==180577==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180577==    by 0x407884: ft_strdup2 (get_next_line_utils.c:229)
==180577==    by 0x40741F: get_next_line (get_next_line.c:68)
==180577==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180577==    by 0x405BBB: main (mandatory.cpp:68)
==180577==  Block was alloc'd at
==180577==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180577==    by 0x4075BC: ft_strjoin (get_next_line_utils.c:57)
==180577==    by 0x407484: get_next_line (get_next_line.c:83)
==180577==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180577==    by 0x405BBB: main (mandatory.cpp:68)
==180577== 
==180577== Invalid read of size 1
==180577==    at 0x407516: ft_strchr (get_next_line_utils.c:25)
==180577==    by 0x40734F: get_next_line (get_next_line.c:32)
==180577==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180577==    by 0x405BC7: main (mandatory.cpp:68)
==180577==  Address 0x4de6670 is 0 bytes inside a block of size 44 free'd
==180577==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180577==    by 0x407884: ft_strdup2 (get_next_line_utils.c:229)
==180577==    by 0x40741F: get_next_line (get_next_line.c:68)
==180577==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180577==    by 0x405BBB: main (mandatory.cpp:68)
==180577==  Block was alloc'd at
==180577==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180577==    by 0x4075BC: ft_strjoin (get_next_line_utils.c:57)
==180577==    by 0x407484: get_next_line (get_next_line.c:83)
==180577==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180577==    by 0x405BBB: main (mandatory.cpp:68)
==180577== 
==180577== Invalid read of size 1
==180577==    at 0x4073CE: get_next_line (get_next_line.c:58)
==180577==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180577==    by 0x405BC7: main (mandatory.cpp:68)
==180577==  Address 0x4de6670 is 0 bytes inside a block of size 44 free'd
==180577==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180577==    by 0x407884: ft_strdup2 (get_next_line_utils.c:229)
==180577==    by 0x40741F: get_next_line (get_next_line.c:68)
==180577==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180577==    by 0x405BBB: main (mandatory.cpp:68)
==180577==  Block was alloc'd at
==180577==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180577==    by 0x4075BC: ft_strjoin (get_next_line_utils.c:57)
==180577==    by 0x407484: get_next_line (get_next_line.c:83)
==180577==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180577==    by 0x405BBB: main (mandatory.cpp:68)
==180577== 
==180577== 1 bytes in 1 blocks are definitely lost in loss record 1 of 4
==180577==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180577==    by 0x40745D: get_next_line (get_next_line.c:80)
==180577==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180577==    by 0x405BBB: main (mandatory.cpp:68)
==180577== 
==180577== 43 bytes in 1 blocks are definitely lost in loss record 2 of 4
==180577==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180577==    by 0x40731E: get_next_line (get_next_line.c:26)
==180577==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180577==    by 0x405BBB: main (mandatory.cpp:68)
==180577== 
==180577== 43 bytes in 1 blocks are definitely lost in loss record 3 of 4
==180577==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180577==    by 0x4075BC: ft_strjoin (get_next_line_utils.c:57)
==180577==    by 0x407484: get_next_line (get_next_line.c:83)
==180577==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180577==    by 0x405BBB: main (mandatory.cpp:68)
==180577== 
==180577== 43 bytes in 1 blocks are definitely lost in loss record 4 of 4
==180577==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180577==    by 0x40731E: get_next_line (get_next_line.c:26)
==180577==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180577==    by 0x405BC7: main (mandatory.cpp:68)
==180577== 
==180578== Invalid free() / delete / delete[] / realloc()
==180578==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180578==    by 0x407884: ft_strdup2 (get_next_line_utils.c:229)
==180578==    by 0x40741F: get_next_line (get_next_line.c:68)
==180578==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180578==    by 0x405DF9: main (mandatory.cpp:73)
==180578==  Address 0x4de69ab is 43 bytes inside a block of size 45 alloc'd
==180578==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180578==    by 0x4075BC: ft_strjoin (get_next_line_utils.c:57)
==180578==    by 0x407484: get_next_line (get_next_line.c:83)
==180578==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180578==    by 0x405DE7: main (mandatory.cpp:73)
==180578== 
==180578== 1 bytes in 1 blocks are definitely lost in loss record 1 of 6
==180578==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180578==    by 0x40745D: get_next_line (get_next_line.c:80)
==180578==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180578==    by 0x405DE7: main (mandatory.cpp:73)
==180578== 
==180578== 43 bytes in 1 blocks are definitely lost in loss record 2 of 6
==180578==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180578==    by 0x40731E: get_next_line (get_next_line.c:26)
==180578==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180578==    by 0x405DE7: main (mandatory.cpp:73)
==180578== 
==180578== 43 bytes in 1 blocks are definitely lost in loss record 3 of 6
==180578==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180578==    by 0x4075BC: ft_strjoin (get_next_line_utils.c:57)
==180578==    by 0x407484: get_next_line (get_next_line.c:83)
==180578==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180578==    by 0x405DE7: main (mandatory.cpp:73)
==180578== 
==180578== 43 bytes in 1 blocks are definitely lost in loss record 4 of 6
==180578==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180578==    by 0x40731E: get_next_line (get_next_line.c:26)
==180578==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180578==    by 0x405DF9: main (mandatory.cpp:73)
==180578== 
==180578== 43 bytes in 1 blocks are definitely lost in loss record 5 of 6
==180578==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180578==    by 0x40731E: get_next_line (get_next_line.c:26)
==180578==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180578==    by 0x405E05: main (mandatory.cpp:73)
==180578== 
==180578== 45 bytes in 1 blocks are possibly lost in loss record 6 of 6
==180578==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180578==    by 0x4075BC: ft_strjoin (get_next_line_utils.c:57)
==180578==    by 0x407484: get_next_line (get_next_line.c:83)
==180578==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180578==    by 0x405DE7: main (mandatory.cpp:73)
==180578== 
==180583== 1 bytes in 1 blocks are definitely lost in loss record 1 of 8
==180583==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180583==    by 0x40745D: get_next_line (get_next_line.c:80)
==180583==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180583==    by 0x406025: main (mandatory.cpp:79)
==180583== 
==180583== 6 bytes in 1 blocks are possibly lost in loss record 2 of 8
==180583==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180583==    by 0x4075BC: ft_strjoin (get_next_line_utils.c:57)
==180583==    by 0x407484: get_next_line (get_next_line.c:83)
==180583==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180583==    by 0x406025: main (mandatory.cpp:79)
==180583== 
==180583== 43 bytes in 1 blocks are definitely lost in loss record 3 of 8
==180583==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180583==    by 0x40731E: get_next_line (get_next_line.c:26)
==180583==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180583==    by 0x406025: main (mandatory.cpp:79)
==180583== 
==180583== 43 bytes in 1 blocks are definitely lost in loss record 4 of 8
==180583==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180583==    by 0x40731E: get_next_line (get_next_line.c:26)
==180583==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180583==    by 0x406037: main (mandatory.cpp:79)
==180583== 
==180583== 43 bytes in 1 blocks are definitely lost in loss record 5 of 8
==180583==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180583==    by 0x40731E: get_next_line (get_next_line.c:26)
==180583==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180583==    by 0x406049: main (mandatory.cpp:79)
==180583== 
==180583== 43 bytes in 1 blocks are definitely lost in loss record 6 of 8
==180583==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180583==    by 0x40731E: get_next_line (get_next_line.c:26)
==180583==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180583==    by 0x40605B: main (mandatory.cpp:79)
==180583== 
==180583== 43 bytes in 1 blocks are definitely lost in loss record 7 of 8
==180583==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180583==    by 0x40731E: get_next_line (get_next_line.c:26)
==180583==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180583==    by 0x40606D: main (mandatory.cpp:79)
==180583== 
==180583== 43 bytes in 1 blocks are definitely lost in loss record 8 of 8
==180583==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180583==    by 0x40731E: get_next_line (get_next_line.c:26)
==180583==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180583==    by 0x406079: main (mandatory.cpp:79)
==180583== 
==180584== Invalid write of size 1
==180584==    at 0x40742B: get_next_line (get_next_line.c:69)
==180584==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180584==    by 0x4062E1: main (mandatory.cpp:88)
==180584==  Address 0x4de7590 is 0 bytes inside a block of size 42 free'd
==180584==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180584==    by 0x407884: ft_strdup2 (get_next_line_utils.c:229)
==180584==    by 0x40741F: get_next_line (get_next_line.c:68)
==180584==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180584==    by 0x4062E1: main (mandatory.cpp:88)
==180584==  Block was alloc'd at
==180584==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180584==    by 0x4075BC: ft_strjoin (get_next_line_utils.c:57)
==180584==    by 0x407484: get_next_line (get_next_line.c:83)
==180584==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180584==    by 0x4062E1: main (mandatory.cpp:88)
==180584== 
==180584== Invalid read of size 1
==180584==    at 0x407516: ft_strchr (get_next_line_utils.c:25)
==180584==    by 0x40734F: get_next_line (get_next_line.c:32)
==180584==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180584==    by 0x4062ED: main (mandatory.cpp:88)
==180584==  Address 0x4de7590 is 0 bytes inside a block of size 42 free'd
==180584==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180584==    by 0x407884: ft_strdup2 (get_next_line_utils.c:229)
==180584==    by 0x40741F: get_next_line (get_next_line.c:68)
==180584==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180584==    by 0x4062E1: main (mandatory.cpp:88)
==180584==  Block was alloc'd at
==180584==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180584==    by 0x4075BC: ft_strjoin (get_next_line_utils.c:57)
==180584==    by 0x407484: get_next_line (get_next_line.c:83)
==180584==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180584==    by 0x4062E1: main (mandatory.cpp:88)
==180584== 
==180584== Invalid read of size 1
==180584==    at 0x4073CE: get_next_line (get_next_line.c:58)
==180584==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180584==    by 0x4062ED: main (mandatory.cpp:88)
==180584==  Address 0x4de7590 is 0 bytes inside a block of size 42 free'd
==180584==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180584==    by 0x407884: ft_strdup2 (get_next_line_utils.c:229)
==180584==    by 0x40741F: get_next_line (get_next_line.c:68)
==180584==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180584==    by 0x4062E1: main (mandatory.cpp:88)
==180584==  Block was alloc'd at
==180584==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180584==    by 0x4075BC: ft_strjoin (get_next_line_utils.c:57)
==180584==    by 0x407484: get_next_line (get_next_line.c:83)
==180584==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180584==    by 0x4062E1: main (mandatory.cpp:88)
==180584== 
==180584== 1 bytes in 1 blocks are definitely lost in loss record 1 of 11
==180584==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180584==    by 0x40745D: get_next_line (get_next_line.c:80)
==180584==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180584==    by 0x406299: main (mandatory.cpp:88)
==180584== 
==180584== 43 bytes in 1 blocks are definitely lost in loss record 2 of 11
==180584==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180584==    by 0x40731E: get_next_line (get_next_line.c:26)
==180584==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180584==    by 0x406299: main (mandatory.cpp:88)
==180584== 
==180584== 43 bytes in 1 blocks are definitely lost in loss record 3 of 11
==180584==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180584==    by 0x4075BC: ft_strjoin (get_next_line_utils.c:57)
==180584==    by 0x407484: get_next_line (get_next_line.c:83)
==180584==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180584==    by 0x406299: main (mandatory.cpp:88)
==180584== 
==180584== 43 bytes in 1 blocks are definitely lost in loss record 4 of 11
==180584==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180584==    by 0x40731E: get_next_line (get_next_line.c:26)
==180584==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180584==    by 0x4062AB: main (mandatory.cpp:88)
==180584== 
==180584== 43 bytes in 1 blocks are definitely lost in loss record 5 of 11
==180584==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180584==    by 0x40731E: get_next_line (get_next_line.c:26)
==180584==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180584==    by 0x4062BD: main (mandatory.cpp:88)
==180584== 
==180584== 43 bytes in 1 blocks are definitely lost in loss record 6 of 11
==180584==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180584==    by 0x40731E: get_next_line (get_next_line.c:26)
==180584==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180584==    by 0x4062CF: main (mandatory.cpp:88)
==180584== 
==180584== 43 bytes in 1 blocks are definitely lost in loss record 7 of 11
==180584==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180584==    by 0x40731E: get_next_line (get_next_line.c:26)
==180584==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180584==    by 0x4062E1: main (mandatory.cpp:88)
==180584== 
==180584== 43 bytes in 1 blocks are definitely lost in loss record 8 of 11
==180584==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180584==    by 0x40731E: get_next_line (get_next_line.c:26)
==180584==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180584==    by 0x4062ED: main (mandatory.cpp:88)
==180584== 
==180584== 82 bytes in 1 blocks are definitely lost in loss record 9 of 11
==180584==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180584==    by 0x4075BC: ft_strjoin (get_next_line_utils.c:57)
==180584==    by 0x407484: get_next_line (get_next_line.c:83)
==180584==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180584==    by 0x4062CF: main (mandatory.cpp:88)
==180584== 
==180584== 84 bytes in 1 blocks are definitely lost in loss record 10 of 11
==180584==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180584==    by 0x4075BC: ft_strjoin (get_next_line_utils.c:57)
==180584==    by 0x407484: get_next_line (get_next_line.c:83)
==180584==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180584==    by 0x4062BD: main (mandatory.cpp:88)
==180584== 
==180584== 128 bytes in 2 blocks are definitely lost in loss record 11 of 11
==180584==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180584==    by 0x4075BC: ft_strjoin (get_next_line_utils.c:57)
==180584==    by 0x407484: get_next_line (get_next_line.c:83)
==180584==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180584==    by 0x4062AB: main (mandatory.cpp:88)
==180584== 
==180588== 1 bytes in 1 blocks are definitely lost in loss record 1 of 12
==180588==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180588==    by 0x40745D: get_next_line (get_next_line.c:80)
==180588==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180588==    by 0x40650D: main (mandatory.cpp:97)
==180588== 
==180588== 42 bytes in 1 blocks are possibly lost in loss record 2 of 12
==180588==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180588==    by 0x4075BC: ft_strjoin (get_next_line_utils.c:57)
==180588==    by 0x407484: get_next_line (get_next_line.c:83)
==180588==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180588==    by 0x406555: main (mandatory.cpp:97)
==180588== 
==180588== 43 bytes in 1 blocks are definitely lost in loss record 3 of 12
==180588==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180588==    by 0x40731E: get_next_line (get_next_line.c:26)
==180588==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180588==    by 0x40650D: main (mandatory.cpp:97)
==180588== 
==180588== 43 bytes in 1 blocks are definitely lost in loss record 4 of 12
==180588==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180588==    by 0x4075BC: ft_strjoin (get_next_line_utils.c:57)
==180588==    by 0x407484: get_next_line (get_next_line.c:83)
==180588==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180588==    by 0x40650D: main (mandatory.cpp:97)
==180588== 
==180588== 43 bytes in 1 blocks are definitely lost in loss record 5 of 12
==180588==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180588==    by 0x40731E: get_next_line (get_next_line.c:26)
==180588==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180588==    by 0x40651F: main (mandatory.cpp:97)
==180588== 
==180588== 43 bytes in 1 blocks are definitely lost in loss record 6 of 12
==180588==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180588==    by 0x40731E: get_next_line (get_next_line.c:26)
==180588==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180588==    by 0x406531: main (mandatory.cpp:97)
==180588== 
==180588== 43 bytes in 1 blocks are definitely lost in loss record 7 of 12
==180588==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180588==    by 0x40731E: get_next_line (get_next_line.c:26)
==180588==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180588==    by 0x406543: main (mandatory.cpp:97)
==180588== 
==180588== 43 bytes in 1 blocks are definitely lost in loss record 8 of 12
==180588==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180588==    by 0x4075BC: ft_strjoin (get_next_line_utils.c:57)
==180588==    by 0x407484: get_next_line (get_next_line.c:83)
==180588==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180588==    by 0x406543: main (mandatory.cpp:97)
==180588== 
==180588== 43 bytes in 1 blocks are definitely lost in loss record 9 of 12
==180588==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180588==    by 0x40731E: get_next_line (get_next_line.c:26)
==180588==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180588==    by 0x406555: main (mandatory.cpp:97)
==180588== 
==180588== 43 bytes in 1 blocks are definitely lost in loss record 10 of 12
==180588==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180588==    by 0x40731E: get_next_line (get_next_line.c:26)
==180588==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180588==    by 0x406561: main (mandatory.cpp:97)
==180588== 
==180588== 44 bytes in 1 blocks are definitely lost in loss record 11 of 12
==180588==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180588==    by 0x4075BC: ft_strjoin (get_next_line_utils.c:57)
==180588==    by 0x407484: get_next_line (get_next_line.c:83)
==180588==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180588==    by 0x40651F: main (mandatory.cpp:97)
==180588== 
==180588== 44 bytes in 1 blocks are definitely lost in loss record 12 of 12
==180588==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180588==    by 0x4075BC: ft_strjoin (get_next_line_utils.c:57)
==180588==    by 0x407484: get_next_line (get_next_line.c:83)
==180588==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180588==    by 0x406531: main (mandatory.cpp:97)
==180588== 
==180599== Invalid write of size 1
==180599==    at 0x40742B: get_next_line (get_next_line.c:69)
==180599==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180599==    by 0x406811: main (mandatory.cpp:106)
==180599==  Address 0x4de7ee0 is 0 bytes inside a block of size 42 free'd
==180599==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180599==    by 0x407884: ft_strdup2 (get_next_line_utils.c:229)
==180599==    by 0x40741F: get_next_line (get_next_line.c:68)
==180599==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180599==    by 0x406811: main (mandatory.cpp:106)
==180599==  Block was alloc'd at
==180599==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180599==    by 0x4075BC: ft_strjoin (get_next_line_utils.c:57)
==180599==    by 0x407484: get_next_line (get_next_line.c:83)
==180599==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180599==    by 0x406811: main (mandatory.cpp:106)
==180599== 
==180599== Invalid read of size 1
==180599==    at 0x407516: ft_strchr (get_next_line_utils.c:25)
==180599==    by 0x40734F: get_next_line (get_next_line.c:32)
==180599==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180599==    by 0x40681D: main (mandatory.cpp:106)
==180599==  Address 0x4de7ee0 is 0 bytes inside a block of size 42 free'd
==180599==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180599==    by 0x407884: ft_strdup2 (get_next_line_utils.c:229)
==180599==    by 0x40741F: get_next_line (get_next_line.c:68)
==180599==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180599==    by 0x406811: main (mandatory.cpp:106)
==180599==  Block was alloc'd at
==180599==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180599==    by 0x4075BC: ft_strjoin (get_next_line_utils.c:57)
==180599==    by 0x407484: get_next_line (get_next_line.c:83)
==180599==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180599==    by 0x406811: main (mandatory.cpp:106)
==180599== 
==180599== Invalid read of size 1
==180599==    at 0x4073CE: get_next_line (get_next_line.c:58)
==180599==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180599==    by 0x40681D: main (mandatory.cpp:106)
==180599==  Address 0x4de7ee0 is 0 bytes inside a block of size 42 free'd
==180599==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180599==    by 0x407884: ft_strdup2 (get_next_line_utils.c:229)
==180599==    by 0x40741F: get_next_line (get_next_line.c:68)
==180599==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180599==    by 0x406811: main (mandatory.cpp:106)
==180599==  Block was alloc'd at
==180599==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180599==    by 0x4075BC: ft_strjoin (get_next_line_utils.c:57)
==180599==    by 0x407484: get_next_line (get_next_line.c:83)
==180599==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180599==    by 0x406811: main (mandatory.cpp:106)
==180599== 
==180599== 1 bytes in 1 blocks are definitely lost in loss record 1 of 16
==180599==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180599==    by 0x40745D: get_next_line (get_next_line.c:80)
==180599==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180599==    by 0x406781: main (mandatory.cpp:106)
==180599== 
==180599== 43 bytes in 1 blocks are definitely lost in loss record 2 of 16
==180599==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180599==    by 0x40731E: get_next_line (get_next_line.c:26)
==180599==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180599==    by 0x406781: main (mandatory.cpp:106)
==180599== 
==180599== 43 bytes in 1 blocks are definitely lost in loss record 3 of 16
==180599==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180599==    by 0x4075BC: ft_strjoin (get_next_line_utils.c:57)
==180599==    by 0x407484: get_next_line (get_next_line.c:83)
==180599==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180599==    by 0x406781: main (mandatory.cpp:106)
==180599== 
==180599== 43 bytes in 1 blocks are definitely lost in loss record 4 of 16
==180599==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180599==    by 0x40731E: get_next_line (get_next_line.c:26)
==180599==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180599==    by 0x406793: main (mandatory.cpp:106)
==180599== 
==180599== 43 bytes in 1 blocks are definitely lost in loss record 5 of 16
==180599==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180599==    by 0x4075BC: ft_strjoin (get_next_line_utils.c:57)
==180599==    by 0x407484: get_next_line (get_next_line.c:83)
==180599==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180599==    by 0x406793: main (mandatory.cpp:106)
==180599== 
==180599== 43 bytes in 1 blocks are definitely lost in loss record 6 of 16
==180599==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180599==    by 0x40731E: get_next_line (get_next_line.c:26)
==180599==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180599==    by 0x4067A5: main (mandatory.cpp:106)
==180599== 
==180599== 43 bytes in 1 blocks are definitely lost in loss record 7 of 16
==180599==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180599==    by 0x40731E: get_next_line (get_next_line.c:26)
==180599==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180599==    by 0x4067B7: main (mandatory.cpp:106)
==180599== 
==180599== 43 bytes in 1 blocks are definitely lost in loss record 8 of 16
==180599==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180599==    by 0x40731E: get_next_line (get_next_line.c:26)
==180599==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180599==    by 0x4067C9: main (mandatory.cpp:106)
==180599== 
==180599== 43 bytes in 1 blocks are definitely lost in loss record 9 of 16
==180599==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180599==    by 0x40731E: get_next_line (get_next_line.c:26)
==180599==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180599==    by 0x4067DB: main (mandatory.cpp:106)
==180599== 
==180599== 43 bytes in 1 blocks are definitely lost in loss record 10 of 16
==180599==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180599==    by 0x40731E: get_next_line (get_next_line.c:26)
==180599==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180599==    by 0x4067ED: main (mandatory.cpp:106)
==180599== 
==180599== 43 bytes in 1 blocks are definitely lost in loss record 11 of 16
==180599==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180599==    by 0x40731E: get_next_line (get_next_line.c:26)
==180599==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180599==    by 0x4067FF: main (mandatory.cpp:106)
==180599== 
==180599== 43 bytes in 1 blocks are definitely lost in loss record 12 of 16
==180599==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180599==    by 0x40731E: get_next_line (get_next_line.c:26)
==180599==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180599==    by 0x406811: main (mandatory.cpp:106)
==180599== 
==180599== 43 bytes in 1 blocks are definitely lost in loss record 13 of 16
==180599==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180599==    by 0x40731E: get_next_line (get_next_line.c:26)
==180599==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180599==    by 0x40681D: main (mandatory.cpp:106)
==180599== 
==180599== 79 bytes in 1 blocks are definitely lost in loss record 14 of 16
==180599==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180599==    by 0x4075BC: ft_strjoin (get_next_line_utils.c:57)
==180599==    by 0x407484: get_next_line (get_next_line.c:83)
==180599==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180599==    by 0x4067ED: main (mandatory.cpp:106)
==180599== 
==180599== 82 bytes in 1 blocks are definitely lost in loss record 15 of 16
==180599==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180599==    by 0x4075BC: ft_strjoin (get_next_line_utils.c:57)
==180599==    by 0x407484: get_next_line (get_next_line.c:83)
==180599==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180599==    by 0x4067C9: main (mandatory.cpp:106)
==180599== 
==180599== 84 bytes in 1 blocks are definitely lost in loss record 16 of 16
==180599==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180599==    by 0x4075BC: ft_strjoin (get_next_line_utils.c:57)
==180599==    by 0x407484: get_next_line (get_next_line.c:83)
==180599==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180599==    by 0x4067A5: main (mandatory.cpp:106)
==180599== 
==180600== 1 bytes in 1 blocks are definitely lost in loss record 1 of 17
==180600==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180600==    by 0x40745D: get_next_line (get_next_line.c:80)
==180600==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180600==    by 0x406A3D: main (mandatory.cpp:119)
==180600== 
==180600== 43 bytes in 1 blocks are possibly lost in loss record 2 of 17
==180600==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180600==    by 0x4075BC: ft_strjoin (get_next_line_utils.c:57)
==180600==    by 0x407484: get_next_line (get_next_line.c:83)
==180600==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180600==    by 0x406ACD: main (mandatory.cpp:119)
==180600== 
==180600== 43 bytes in 1 blocks are definitely lost in loss record 3 of 17
==180600==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180600==    by 0x40731E: get_next_line (get_next_line.c:26)
==180600==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180600==    by 0x406A3D: main (mandatory.cpp:119)
==180600== 
==180600== 43 bytes in 1 blocks are definitely lost in loss record 4 of 17
==180600==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180600==    by 0x4075BC: ft_strjoin (get_next_line_utils.c:57)
==180600==    by 0x407484: get_next_line (get_next_line.c:83)
==180600==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180600==    by 0x406A3D: main (mandatory.cpp:119)
==180600== 
==180600== 43 bytes in 1 blocks are definitely lost in loss record 5 of 17
==180600==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180600==    by 0x40731E: get_next_line (get_next_line.c:26)
==180600==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180600==    by 0x406A4F: main (mandatory.cpp:119)
==180600== 
==180600== 43 bytes in 1 blocks are definitely lost in loss record 6 of 17
==180600==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180600==    by 0x4075BC: ft_strjoin (get_next_line_utils.c:57)
==180600==    by 0x407484: get_next_line (get_next_line.c:83)
==180600==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180600==    by 0x406A4F: main (mandatory.cpp:119)
==180600== 
==180600== 43 bytes in 1 blocks are definitely lost in loss record 7 of 17
==180600==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180600==    by 0x40731E: get_next_line (get_next_line.c:26)
==180600==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180600==    by 0x406A61: main (mandatory.cpp:119)
==180600== 
==180600== 43 bytes in 1 blocks are definitely lost in loss record 8 of 17
==180600==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180600==    by 0x40731E: get_next_line (get_next_line.c:26)
==180600==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180600==    by 0x406A73: main (mandatory.cpp:119)
==180600== 
==180600== 43 bytes in 1 blocks are definitely lost in loss record 9 of 17
==180600==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180600==    by 0x40731E: get_next_line (get_next_line.c:26)
==180600==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180600==    by 0x406A85: main (mandatory.cpp:119)
==180600== 
==180600== 43 bytes in 1 blocks are definitely lost in loss record 10 of 17
==180600==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180600==    by 0x40731E: get_next_line (get_next_line.c:26)
==180600==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180600==    by 0x406A97: main (mandatory.cpp:119)
==180600== 
==180600== 43 bytes in 1 blocks are definitely lost in loss record 11 of 17
==180600==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180600==    by 0x40731E: get_next_line (get_next_line.c:26)
==180600==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180600==    by 0x406AA9: main (mandatory.cpp:119)
==180600== 
==180600== 43 bytes in 1 blocks are definitely lost in loss record 12 of 17
==180600==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180600==    by 0x40731E: get_next_line (get_next_line.c:26)
==180600==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180600==    by 0x406ABB: main (mandatory.cpp:119)
==180600== 
==180600== 43 bytes in 1 blocks are definitely lost in loss record 13 of 17
==180600==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180600==    by 0x40731E: get_next_line (get_next_line.c:26)
==180600==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180600==    by 0x406ACD: main (mandatory.cpp:119)
==180600== 
==180600== 43 bytes in 1 blocks are definitely lost in loss record 14 of 17
==180600==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180600==    by 0x40731E: get_next_line (get_next_line.c:26)
==180600==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180600==    by 0x406AD9: main (mandatory.cpp:119)
==180600== 
==180600== 79 bytes in 1 blocks are definitely lost in loss record 15 of 17
==180600==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180600==    by 0x4075BC: ft_strjoin (get_next_line_utils.c:57)
==180600==    by 0x407484: get_next_line (get_next_line.c:83)
==180600==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180600==    by 0x406AA9: main (mandatory.cpp:119)
==180600== 
==180600== 82 bytes in 1 blocks are definitely lost in loss record 16 of 17
==180600==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180600==    by 0x4075BC: ft_strjoin (get_next_line_utils.c:57)
==180600==    by 0x407484: get_next_line (get_next_line.c:83)
==180600==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180600==    by 0x406A85: main (mandatory.cpp:119)
==180600== 
==180600== 84 bytes in 1 blocks are definitely lost in loss record 17 of 17
==180600==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180600==    by 0x4075BC: ft_strjoin (get_next_line_utils.c:57)
==180600==    by 0x407484: get_next_line (get_next_line.c:83)
==180600==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180600==    by 0x406A61: main (mandatory.cpp:119)
==180600== 
==180605== Invalid write of size 1
==180605==    at 0x40742B: get_next_line (get_next_line.c:69)
==180605==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180605==    by 0x406CF9: main (mandatory.cpp:132)
==180605==  Address 0x4f0f9e0 is 0 bytes inside a block of size 10,001 free'd
==180605==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180605==    by 0x407884: ft_strdup2 (get_next_line_utils.c:229)
==180605==    by 0x40741F: get_next_line (get_next_line.c:68)
==180605==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180605==    by 0x406CF9: main (mandatory.cpp:132)
==180605==  Block was alloc'd at
==180605==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180605==    by 0x4075BC: ft_strjoin (get_next_line_utils.c:57)
==180605==    by 0x407484: get_next_line (get_next_line.c:83)
==180605==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180605==    by 0x406CF9: main (mandatory.cpp:132)
==180605== 
==180605== Invalid read of size 1
==180605==    at 0x407516: ft_strchr (get_next_line_utils.c:25)
==180605==    by 0x40734F: get_next_line (get_next_line.c:32)
==180605==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180605==    by 0x406D05: main (mandatory.cpp:132)
==180605==  Address 0x4f0f9e0 is 0 bytes inside a block of size 10,001 free'd
==180605==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180605==    by 0x407884: ft_strdup2 (get_next_line_utils.c:229)
==180605==    by 0x40741F: get_next_line (get_next_line.c:68)
==180605==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180605==    by 0x406CF9: main (mandatory.cpp:132)
==180605==  Block was alloc'd at
==180605==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180605==    by 0x4075BC: ft_strjoin (get_next_line_utils.c:57)
==180605==    by 0x407484: get_next_line (get_next_line.c:83)
==180605==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180605==    by 0x406CF9: main (mandatory.cpp:132)
==180605== 
==180605== Invalid read of size 1
==180605==    at 0x4073CE: get_next_line (get_next_line.c:58)
==180605==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180605==    by 0x406D05: main (mandatory.cpp:132)
==180605==  Address 0x4f0f9e0 is 0 bytes inside a block of size 10,001 free'd
==180605==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180605==    by 0x407884: ft_strdup2 (get_next_line_utils.c:229)
==180605==    by 0x40741F: get_next_line (get_next_line.c:68)
==180605==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180605==    by 0x406CF9: main (mandatory.cpp:132)
==180605==  Block was alloc'd at
==180605==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180605==    by 0x4075BC: ft_strjoin (get_next_line_utils.c:57)
==180605==    by 0x407484: get_next_line (get_next_line.c:83)
==180605==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180605==    by 0x406CF9: main (mandatory.cpp:132)
==180605== 
==180605== 1 bytes in 1 blocks are definitely lost in loss record 1 of 4
==180605==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180605==    by 0x40745D: get_next_line (get_next_line.c:80)
==180605==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180605==    by 0x406CF9: main (mandatory.cpp:132)
==180605== 
==180605== 43 bytes in 1 blocks are definitely lost in loss record 2 of 4
==180605==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180605==    by 0x40731E: get_next_line (get_next_line.c:26)
==180605==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180605==    by 0x406CF9: main (mandatory.cpp:132)
==180605== 
==180605== 43 bytes in 1 blocks are definitely lost in loss record 3 of 4
==180605==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180605==    by 0x40731E: get_next_line (get_next_line.c:26)
==180605==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180605==    by 0x406D05: main (mandatory.cpp:132)
==180605== 
==180605== 1,194,760 bytes in 238 blocks are definitely lost in loss record 4 of 4
==180605==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180605==    by 0x4075BC: ft_strjoin (get_next_line_utils.c:57)
==180605==    by 0x407484: get_next_line (get_next_line.c:83)
==180605==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180605==    by 0x406CF9: main (mandatory.cpp:132)
==180605== 
==180606== 1 bytes in 1 blocks are definitely lost in loss record 1 of 5
==180606==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180606==    by 0x40745D: get_next_line (get_next_line.c:80)
==180606==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180606==    by 0x406F25: main (mandatory.cpp:136)
==180606== 
==180606== 43 bytes in 1 blocks are definitely lost in loss record 2 of 5
==180606==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180606==    by 0x40731E: get_next_line (get_next_line.c:26)
==180606==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180606==    by 0x406F25: main (mandatory.cpp:136)
==180606== 
==180606== 43 bytes in 1 blocks are definitely lost in loss record 3 of 5
==180606==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180606==    by 0x40731E: get_next_line (get_next_line.c:26)
==180606==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180606==    by 0x406F31: main (mandatory.cpp:136)
==180606== 
==180606== 10,002 bytes in 1 blocks are possibly lost in loss record 4 of 5
==180606==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180606==    by 0x4075BC: ft_strjoin (get_next_line_utils.c:57)
==180606==    by 0x407484: get_next_line (get_next_line.c:83)
==180606==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180606==    by 0x406F25: main (mandatory.cpp:136)
==180606== 
==180606== 1,194,760 bytes in 238 blocks are definitely lost in loss record 5 of 5
==180606==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180606==    by 0x4075BC: ft_strjoin (get_next_line_utils.c:57)
==180606==    by 0x407484: get_next_line (get_next_line.c:83)
==180606==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180606==    by 0x406F25: main (mandatory.cpp:136)
==180606== 
==180607== Invalid read of size 1
==180607==    at 0x484FBD4: strcmp (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180607==    by 0x402CFA: gnl(int, char const*) (gnl.cpp:24)
==180607==    by 0x407150: main (mandatory.cpp:141)
==180607==  Address 0x0 is not stack'd, malloc'd or (recently) free'd
==180607== 
==180641== Invalid write of size 1
==180641==    at 0x407378: get_next_line (get_next_line.c:47)
==180641==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180641==    by 0x404BB6: main (mandatory.cpp:25)
==180641==  Address 0x51d203f is 1 bytes before a block of size 10,000,001 alloc'd
==180641==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180641==    by 0x4072EC: get_next_line (get_next_line.c:26)
==180641==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180641==    by 0x404BB6: main (mandatory.cpp:25)
==180641== 
==180641== Invalid write of size 1
==180641==    at 0x407378: get_next_line (get_next_line.c:47)
==180641==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180641==    by 0x404BD8: main (mandatory.cpp:25)
==180641==  Address 0x5b5c03f is 1 bytes before a block of size 10,000,001 alloc'd
==180641==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180641==    by 0x4072EC: get_next_line (get_next_line.c:26)
==180641==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180641==    by 0x404BD8: main (mandatory.cpp:25)
==180641== 
==180641== 10,000,001 bytes in 1 blocks are possibly lost in loss record 1 of 2
==180641==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180641==    by 0x4072EC: get_next_line (get_next_line.c:26)
==180641==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180641==    by 0x404BB6: main (mandatory.cpp:25)
==180641== 
==180641== 10,000,001 bytes in 1 blocks are definitely lost in loss record 2 of 2
==180641==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180641==    by 0x4072EC: get_next_line (get_next_line.c:26)
==180641==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180641==    by 0x404BD8: main (mandatory.cpp:25)
==180641== 
==180652== Invalid read of size 1
==180652==    at 0x40739C: get_next_line (get_next_line.c:58)
==180652==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180652==    by 0x404E53: main (mandatory.cpp:31)
==180652==  Address 0x0 is not stack'd, malloc'd or (recently) free'd
==180652== 
==180653== 1 bytes in 1 blocks are definitely lost in loss record 1 of 4
==180653==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180653==    by 0x40742B: get_next_line (get_next_line.c:80)
==180653==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180653==    by 0x40507F: main (mandatory.cpp:36)
==180653== 
==180653== 2 bytes in 1 blocks are possibly lost in loss record 2 of 4
==180653==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180653==    by 0x40758A: ft_strjoin (get_next_line_utils.c:57)
==180653==    by 0x407452: get_next_line (get_next_line.c:83)
==180653==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180653==    by 0x40507F: main (mandatory.cpp:36)
==180653== 
==180653== 10,000,001 bytes in 1 blocks are possibly lost in loss record 3 of 4
==180653==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180653==    by 0x4072EC: get_next_line (get_next_line.c:26)
==180653==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180653==    by 0x40507F: main (mandatory.cpp:36)
==180653== 
==180653== 10,000,001 bytes in 1 blocks are definitely lost in loss record 4 of 4
==180653==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180653==    by 0x4072EC: get_next_line (get_next_line.c:26)
==180653==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180653==    by 0x40508B: main (mandatory.cpp:36)
==180653== 
==180662== Invalid write of size 1
==180662==    at 0x4073F9: get_next_line (get_next_line.c:69)
==180662==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180662==    by 0x4052AB: main (mandatory.cpp:41)
==180662==  Address 0x4de5970 is 0 bytes inside a block of size 42 free'd
==180662==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180662==    by 0x407852: ft_strdup2 (get_next_line_utils.c:229)
==180662==    by 0x4073ED: get_next_line (get_next_line.c:68)
==180662==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180662==    by 0x4052AB: main (mandatory.cpp:41)
==180662==  Block was alloc'd at
==180662==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180662==    by 0x40758A: ft_strjoin (get_next_line_utils.c:57)
==180662==    by 0x407452: get_next_line (get_next_line.c:83)
==180662==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180662==    by 0x4052AB: main (mandatory.cpp:41)
==180662== 
==180662== Invalid read of size 1
==180662==    at 0x4074E4: ft_strchr (get_next_line_utils.c:25)
==180662==    by 0x40731D: get_next_line (get_next_line.c:32)
==180662==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180662==    by 0x4052B7: main (mandatory.cpp:41)
==180662==  Address 0x4de5970 is 0 bytes inside a block of size 42 free'd
==180662==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180662==    by 0x407852: ft_strdup2 (get_next_line_utils.c:229)
==180662==    by 0x4073ED: get_next_line (get_next_line.c:68)
==180662==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180662==    by 0x4052AB: main (mandatory.cpp:41)
==180662==  Block was alloc'd at
==180662==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180662==    by 0x40758A: ft_strjoin (get_next_line_utils.c:57)
==180662==    by 0x407452: get_next_line (get_next_line.c:83)
==180662==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180662==    by 0x4052AB: main (mandatory.cpp:41)
==180662== 
==180662== Invalid read of size 1
==180662==    at 0x40739C: get_next_line (get_next_line.c:58)
==180662==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180662==    by 0x4052B7: main (mandatory.cpp:41)
==180662==  Address 0x4de5970 is 0 bytes inside a block of size 42 free'd
==180662==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180662==    by 0x407852: ft_strdup2 (get_next_line_utils.c:229)
==180662==    by 0x4073ED: get_next_line (get_next_line.c:68)
==180662==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180662==    by 0x4052AB: main (mandatory.cpp:41)
==180662==  Block was alloc'd at
==180662==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180662==    by 0x40758A: ft_strjoin (get_next_line_utils.c:57)
==180662==    by 0x407452: get_next_line (get_next_line.c:83)
==180662==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180662==    by 0x4052AB: main (mandatory.cpp:41)
==180662== 
==180662== 1 bytes in 1 blocks are definitely lost in loss record 1 of 3
==180662==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180662==    by 0x40742B: get_next_line (get_next_line.c:80)
==180662==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180662==    by 0x4052AB: main (mandatory.cpp:41)
==180662== 
==180662== 10,000,001 bytes in 1 blocks are possibly lost in loss record 2 of 3
==180662==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180662==    by 0x4072EC: get_next_line (get_next_line.c:26)
==180662==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180662==    by 0x4052AB: main (mandatory.cpp:41)
==180662== 
==180662== 10,000,001 bytes in 1 blocks are definitely lost in loss record 3 of 3
==180662==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180662==    by 0x4072EC: get_next_line (get_next_line.c:26)
==180662==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180662==    by 0x4052B7: main (mandatory.cpp:41)
==180662== 
==180663== Invalid free() / delete / delete[] / realloc()
==180663==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180663==    by 0x407852: ft_strdup2 (get_next_line_utils.c:229)
==180663==    by 0x4073ED: get_next_line (get_next_line.c:68)
==180663==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180663==    by 0x4054E9: main (mandatory.cpp:46)
==180663==  Address 0x4de5ca9 is 41 bytes inside a block of size 43 alloc'd
==180663==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180663==    by 0x40758A: ft_strjoin (get_next_line_utils.c:57)
==180663==    by 0x407452: get_next_line (get_next_line.c:83)
==180663==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180663==    by 0x4054D7: main (mandatory.cpp:46)
==180663== 
==180663== 1 bytes in 1 blocks are definitely lost in loss record 1 of 5
==180663==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180663==    by 0x40742B: get_next_line (get_next_line.c:80)
==180663==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180663==    by 0x4054D7: main (mandatory.cpp:46)
==180663== 
==180663== 43 bytes in 1 blocks are possibly lost in loss record 2 of 5
==180663==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180663==    by 0x40758A: ft_strjoin (get_next_line_utils.c:57)
==180663==    by 0x407452: get_next_line (get_next_line.c:83)
==180663==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180663==    by 0x4054D7: main (mandatory.cpp:46)
==180663== 
==180663== 10,000,001 bytes in 1 blocks are possibly lost in loss record 3 of 5
==180663==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180663==    by 0x4072EC: get_next_line (get_next_line.c:26)
==180663==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180663==    by 0x4054D7: main (mandatory.cpp:46)
==180663== 
==180663== 10,000,001 bytes in 1 blocks are possibly lost in loss record 4 of 5
==180663==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180663==    by 0x4072EC: get_next_line (get_next_line.c:26)
==180663==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180663==    by 0x4054F5: main (mandatory.cpp:46)
==180663== 
==180663== 10,000,001 bytes in 1 blocks are definitely lost in loss record 5 of 5
==180663==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180663==    by 0x4072EC: get_next_line (get_next_line.c:26)
==180663==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180663==    by 0x4054E9: main (mandatory.cpp:46)
==180663== 
==180665== Invalid write of size 1
==180665==    at 0x4073F9: get_next_line (get_next_line.c:69)
==180665==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180665==    by 0x405715: main (mandatory.cpp:52)
==180665==  Address 0x4de5f90 is 0 bytes inside a block of size 43 free'd
==180665==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180665==    by 0x407852: ft_strdup2 (get_next_line_utils.c:229)
==180665==    by 0x4073ED: get_next_line (get_next_line.c:68)
==180665==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180665==    by 0x405715: main (mandatory.cpp:52)
==180665==  Block was alloc'd at
==180665==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180665==    by 0x40758A: ft_strjoin (get_next_line_utils.c:57)
==180665==    by 0x407452: get_next_line (get_next_line.c:83)
==180665==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180665==    by 0x405715: main (mandatory.cpp:52)
==180665== 
==180665== Invalid read of size 1
==180665==    at 0x4074E4: ft_strchr (get_next_line_utils.c:25)
==180665==    by 0x40731D: get_next_line (get_next_line.c:32)
==180665==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180665==    by 0x405721: main (mandatory.cpp:52)
==180665==  Address 0x4de5f90 is 0 bytes inside a block of size 43 free'd
==180665==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180665==    by 0x407852: ft_strdup2 (get_next_line_utils.c:229)
==180665==    by 0x4073ED: get_next_line (get_next_line.c:68)
==180665==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180665==    by 0x405715: main (mandatory.cpp:52)
==180665==  Block was alloc'd at
==180665==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180665==    by 0x40758A: ft_strjoin (get_next_line_utils.c:57)
==180665==    by 0x407452: get_next_line (get_next_line.c:83)
==180665==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180665==    by 0x405715: main (mandatory.cpp:52)
==180665== 
==180665== Invalid read of size 1
==180665==    at 0x40739C: get_next_line (get_next_line.c:58)
==180665==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180665==    by 0x405721: main (mandatory.cpp:52)
==180665==  Address 0x4de5f90 is 0 bytes inside a block of size 43 free'd
==180665==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180665==    by 0x407852: ft_strdup2 (get_next_line_utils.c:229)
==180665==    by 0x4073ED: get_next_line (get_next_line.c:68)
==180665==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180665==    by 0x405715: main (mandatory.cpp:52)
==180665==  Block was alloc'd at
==180665==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180665==    by 0x40758A: ft_strjoin (get_next_line_utils.c:57)
==180665==    by 0x407452: get_next_line (get_next_line.c:83)
==180665==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180665==    by 0x405715: main (mandatory.cpp:52)
==180665== 
==180665== 1 bytes in 1 blocks are definitely lost in loss record 1 of 3
==180665==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180665==    by 0x40742B: get_next_line (get_next_line.c:80)
==180665==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180665==    by 0x405715: main (mandatory.cpp:52)
==180665== 
==180665== 10,000,001 bytes in 1 blocks are possibly lost in loss record 2 of 3
==180665==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180665==    by 0x4072EC: get_next_line (get_next_line.c:26)
==180665==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180665==    by 0x405715: main (mandatory.cpp:52)
==180665== 
==180665== 10,000,001 bytes in 1 blocks are definitely lost in loss record 3 of 3
==180665==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180665==    by 0x4072EC: get_next_line (get_next_line.c:26)
==180665==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180665==    by 0x405721: main (mandatory.cpp:52)
==180665== 
==180676== Invalid free() / delete / delete[] / realloc()
==180676==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180676==    by 0x407852: ft_strdup2 (get_next_line_utils.c:229)
==180676==    by 0x4073ED: get_next_line (get_next_line.c:68)
==180676==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180676==    by 0x405953: main (mandatory.cpp:57)
==180676==  Address 0x4de62ca is 42 bytes inside a block of size 44 alloc'd
==180676==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180676==    by 0x40758A: ft_strjoin (get_next_line_utils.c:57)
==180676==    by 0x407452: get_next_line (get_next_line.c:83)
==180676==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180676==    by 0x405941: main (mandatory.cpp:57)
==180676== 
==180676== 1 bytes in 1 blocks are definitely lost in loss record 1 of 5
==180676==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180676==    by 0x40742B: get_next_line (get_next_line.c:80)
==180676==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180676==    by 0x405941: main (mandatory.cpp:57)
==180676== 
==180676== 44 bytes in 1 blocks are possibly lost in loss record 2 of 5
==180676==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180676==    by 0x40758A: ft_strjoin (get_next_line_utils.c:57)
==180676==    by 0x407452: get_next_line (get_next_line.c:83)
==180676==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180676==    by 0x405941: main (mandatory.cpp:57)
==180676== 
==180676== 10,000,001 bytes in 1 blocks are possibly lost in loss record 3 of 5
==180676==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180676==    by 0x4072EC: get_next_line (get_next_line.c:26)
==180676==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180676==    by 0x405941: main (mandatory.cpp:57)
==180676== 
==180676== 10,000,001 bytes in 1 blocks are possibly lost in loss record 4 of 5
==180676==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180676==    by 0x4072EC: get_next_line (get_next_line.c:26)
==180676==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180676==    by 0x40595F: main (mandatory.cpp:57)
==180676== 
==180676== 10,000,001 bytes in 1 blocks are definitely lost in loss record 5 of 5
==180676==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180676==    by 0x4072EC: get_next_line (get_next_line.c:26)
==180676==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180676==    by 0x405953: main (mandatory.cpp:57)
==180676== 
==180680== Invalid write of size 1
==180680==    at 0x4073F9: get_next_line (get_next_line.c:69)
==180680==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180680==    by 0x405B89: main (mandatory.cpp:68)
==180680==  Address 0x4de65b0 is 0 bytes inside a block of size 44 free'd
==180680==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180680==    by 0x407852: ft_strdup2 (get_next_line_utils.c:229)
==180680==    by 0x4073ED: get_next_line (get_next_line.c:68)
==180680==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180680==    by 0x405B89: main (mandatory.cpp:68)
==180680==  Block was alloc'd at
==180680==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180680==    by 0x40758A: ft_strjoin (get_next_line_utils.c:57)
==180680==    by 0x407452: get_next_line (get_next_line.c:83)
==180680==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180680==    by 0x405B89: main (mandatory.cpp:68)
==180680== 
==180680== Invalid read of size 1
==180680==    at 0x4074E4: ft_strchr (get_next_line_utils.c:25)
==180680==    by 0x40731D: get_next_line (get_next_line.c:32)
==180680==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180680==    by 0x405B95: main (mandatory.cpp:68)
==180680==  Address 0x4de65b0 is 0 bytes inside a block of size 44 free'd
==180680==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180680==    by 0x407852: ft_strdup2 (get_next_line_utils.c:229)
==180680==    by 0x4073ED: get_next_line (get_next_line.c:68)
==180680==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180680==    by 0x405B89: main (mandatory.cpp:68)
==180680==  Block was alloc'd at
==180680==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180680==    by 0x40758A: ft_strjoin (get_next_line_utils.c:57)
==180680==    by 0x407452: get_next_line (get_next_line.c:83)
==180680==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180680==    by 0x405B89: main (mandatory.cpp:68)
==180680== 
==180680== Invalid read of size 1
==180680==    at 0x40739C: get_next_line (get_next_line.c:58)
==180680==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180680==    by 0x405B95: main (mandatory.cpp:68)
==180680==  Address 0x4de65b0 is 0 bytes inside a block of size 44 free'd
==180680==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180680==    by 0x407852: ft_strdup2 (get_next_line_utils.c:229)
==180680==    by 0x4073ED: get_next_line (get_next_line.c:68)
==180680==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180680==    by 0x405B89: main (mandatory.cpp:68)
==180680==  Block was alloc'd at
==180680==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180680==    by 0x40758A: ft_strjoin (get_next_line_utils.c:57)
==180680==    by 0x407452: get_next_line (get_next_line.c:83)
==180680==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180680==    by 0x405B89: main (mandatory.cpp:68)
==180680== 
==180680== 1 bytes in 1 blocks are definitely lost in loss record 1 of 3
==180680==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180680==    by 0x40742B: get_next_line (get_next_line.c:80)
==180680==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180680==    by 0x405B89: main (mandatory.cpp:68)
==180680== 
==180680== 10,000,001 bytes in 1 blocks are possibly lost in loss record 2 of 3
==180680==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180680==    by 0x4072EC: get_next_line (get_next_line.c:26)
==180680==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180680==    by 0x405B89: main (mandatory.cpp:68)
==180680== 
==180680== 10,000,001 bytes in 1 blocks are definitely lost in loss record 3 of 3
==180680==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180680==    by 0x4072EC: get_next_line (get_next_line.c:26)
==180680==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180680==    by 0x405B95: main (mandatory.cpp:68)
==180680== 
==180718== Invalid free() / delete / delete[] / realloc()
==180718==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180718==    by 0x407852: ft_strdup2 (get_next_line_utils.c:229)
==180718==    by 0x4073ED: get_next_line (get_next_line.c:68)
==180718==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180718==    by 0x405DC7: main (mandatory.cpp:73)
==180718==  Address 0x4de68eb is 43 bytes inside a block of size 45 alloc'd
==180718==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180718==    by 0x40758A: ft_strjoin (get_next_line_utils.c:57)
==180718==    by 0x407452: get_next_line (get_next_line.c:83)
==180718==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180718==    by 0x405DB5: main (mandatory.cpp:73)
==180718== 
==180718== 1 bytes in 1 blocks are definitely lost in loss record 1 of 5
==180718==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180718==    by 0x40742B: get_next_line (get_next_line.c:80)
==180718==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180718==    by 0x405DB5: main (mandatory.cpp:73)
==180718== 
==180718== 45 bytes in 1 blocks are possibly lost in loss record 2 of 5
==180718==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180718==    by 0x40758A: ft_strjoin (get_next_line_utils.c:57)
==180718==    by 0x407452: get_next_line (get_next_line.c:83)
==180718==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180718==    by 0x405DB5: main (mandatory.cpp:73)
==180718== 
==180718== 10,000,001 bytes in 1 blocks are possibly lost in loss record 3 of 5
==180718==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180718==    by 0x4072EC: get_next_line (get_next_line.c:26)
==180718==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180718==    by 0x405DB5: main (mandatory.cpp:73)
==180718== 
==180718== 10,000,001 bytes in 1 blocks are possibly lost in loss record 4 of 5
==180718==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180718==    by 0x4072EC: get_next_line (get_next_line.c:26)
==180718==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180718==    by 0x405DD3: main (mandatory.cpp:73)
==180718== 
==180718== 10,000,001 bytes in 1 blocks are definitely lost in loss record 5 of 5
==180718==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180718==    by 0x4072EC: get_next_line (get_next_line.c:26)
==180718==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180718==    by 0x405DC7: main (mandatory.cpp:73)
==180718== 
==180736== 1 bytes in 1 blocks are definitely lost in loss record 1 of 8
==180736==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180736==    by 0x40742B: get_next_line (get_next_line.c:80)
==180736==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180736==    by 0x405FF3: main (mandatory.cpp:79)
==180736== 
==180736== 6 bytes in 1 blocks are possibly lost in loss record 2 of 8
==180736==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180736==    by 0x40758A: ft_strjoin (get_next_line_utils.c:57)
==180736==    by 0x407452: get_next_line (get_next_line.c:83)
==180736==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180736==    by 0x405FF3: main (mandatory.cpp:79)
==180736== 
==180736== 10,000,001 bytes in 1 blocks are possibly lost in loss record 3 of 8
==180736==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180736==    by 0x4072EC: get_next_line (get_next_line.c:26)
==180736==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180736==    by 0x405FF3: main (mandatory.cpp:79)
==180736== 
==180736== 10,000,001 bytes in 1 blocks are possibly lost in loss record 4 of 8
==180736==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180736==    by 0x4072EC: get_next_line (get_next_line.c:26)
==180736==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180736==    by 0x406017: main (mandatory.cpp:79)
==180736== 
==180736== 10,000,001 bytes in 1 blocks are possibly lost in loss record 5 of 8
==180736==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180736==    by 0x4072EC: get_next_line (get_next_line.c:26)
==180736==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180736==    by 0x406047: main (mandatory.cpp:79)
==180736== 
==180736== 10,000,001 bytes in 1 blocks are definitely lost in loss record 6 of 8
==180736==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180736==    by 0x4072EC: get_next_line (get_next_line.c:26)
==180736==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180736==    by 0x406005: main (mandatory.cpp:79)
==180736== 
==180736== 10,000,001 bytes in 1 blocks are definitely lost in loss record 7 of 8
==180736==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180736==    by 0x4072EC: get_next_line (get_next_line.c:26)
==180736==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180736==    by 0x406029: main (mandatory.cpp:79)
==180736== 
==180736== 10,000,001 bytes in 1 blocks are definitely lost in loss record 8 of 8
==180736==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180736==    by 0x4072EC: get_next_line (get_next_line.c:26)
==180736==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180736==    by 0x40603B: main (mandatory.cpp:79)
==180736== 
==180740== Invalid free() / delete / delete[] / realloc()
==180740==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180740==    by 0x407852: ft_strdup2 (get_next_line_utils.c:229)
==180740==    by 0x4073ED: get_next_line (get_next_line.c:68)
==180740==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180740==    by 0x4062AF: main (mandatory.cpp:88)
==180740==  Address 0x4de6fac is 172 bytes inside a block of size 214 alloc'd
==180740==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180740==    by 0x40758A: ft_strjoin (get_next_line_utils.c:57)
==180740==    by 0x407452: get_next_line (get_next_line.c:83)
==180740==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180740==    by 0x406267: main (mandatory.cpp:88)
==180740== 
==180740== 1 bytes in 1 blocks are definitely lost in loss record 1 of 8
==180740==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180740==    by 0x40742B: get_next_line (get_next_line.c:80)
==180740==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180740==    by 0x406267: main (mandatory.cpp:88)
==180740== 
==180740== 214 bytes in 1 blocks are possibly lost in loss record 2 of 8
==180740==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180740==    by 0x40758A: ft_strjoin (get_next_line_utils.c:57)
==180740==    by 0x407452: get_next_line (get_next_line.c:83)
==180740==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180740==    by 0x406267: main (mandatory.cpp:88)
==180740== 
==180740== 10,000,001 bytes in 1 blocks are possibly lost in loss record 3 of 8
==180740==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180740==    by 0x4072EC: get_next_line (get_next_line.c:26)
==180740==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180740==    by 0x406267: main (mandatory.cpp:88)
==180740== 
==180740== 10,000,001 bytes in 1 blocks are possibly lost in loss record 4 of 8
==180740==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180740==    by 0x4072EC: get_next_line (get_next_line.c:26)
==180740==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180740==    by 0x40628B: main (mandatory.cpp:88)
==180740== 
==180740== 10,000,001 bytes in 1 blocks are possibly lost in loss record 5 of 8
==180740==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180740==    by 0x4072EC: get_next_line (get_next_line.c:26)
==180740==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180740==    by 0x4062BB: main (mandatory.cpp:88)
==180740== 
==180740== 10,000,001 bytes in 1 blocks are definitely lost in loss record 6 of 8
==180740==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180740==    by 0x4072EC: get_next_line (get_next_line.c:26)
==180740==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180740==    by 0x406279: main (mandatory.cpp:88)
==180740== 
==180740== 10,000,001 bytes in 1 blocks are definitely lost in loss record 7 of 8
==180740==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180740==    by 0x4072EC: get_next_line (get_next_line.c:26)
==180740==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180740==    by 0x40629D: main (mandatory.cpp:88)
==180740== 
==180740== 10,000,001 bytes in 1 blocks are definitely lost in loss record 8 of 8
==180740==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180740==    by 0x4072EC: get_next_line (get_next_line.c:26)
==180740==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180740==    by 0x4062AF: main (mandatory.cpp:88)
==180740== 
==180751== 1 bytes in 1 blocks are definitely lost in loss record 1 of 8
==180751==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180751==    by 0x40742B: get_next_line (get_next_line.c:80)
==180751==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180751==    by 0x4064DB: main (mandatory.cpp:97)
==180751== 
==180751== 210 bytes in 1 blocks are possibly lost in loss record 2 of 8
==180751==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180751==    by 0x40758A: ft_strjoin (get_next_line_utils.c:57)
==180751==    by 0x407452: get_next_line (get_next_line.c:83)
==180751==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180751==    by 0x4064DB: main (mandatory.cpp:97)
==180751== 
==180751== 10,000,001 bytes in 1 blocks are possibly lost in loss record 3 of 8
==180751==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180751==    by 0x4072EC: get_next_line (get_next_line.c:26)
==180751==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180751==    by 0x4064DB: main (mandatory.cpp:97)
==180751== 
==180751== 10,000,001 bytes in 1 blocks are possibly lost in loss record 4 of 8
==180751==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180751==    by 0x4072EC: get_next_line (get_next_line.c:26)
==180751==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180751==    by 0x4064FF: main (mandatory.cpp:97)
==180751== 
==180751== 10,000,001 bytes in 1 blocks are possibly lost in loss record 5 of 8
==180751==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180751==    by 0x4072EC: get_next_line (get_next_line.c:26)
==180751==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180751==    by 0x40652F: main (mandatory.cpp:97)
==180751== 
==180751== 10,000,001 bytes in 1 blocks are definitely lost in loss record 6 of 8
==180751==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180751==    by 0x4072EC: get_next_line (get_next_line.c:26)
==180751==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180751==    by 0x4064ED: main (mandatory.cpp:97)
==180751== 
==180751== 10,000,001 bytes in 1 blocks are definitely lost in loss record 7 of 8
==180751==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180751==    by 0x4072EC: get_next_line (get_next_line.c:26)
==180751==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180751==    by 0x406511: main (mandatory.cpp:97)
==180751== 
==180751== 10,000,001 bytes in 1 blocks are definitely lost in loss record 8 of 8
==180751==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180751==    by 0x4072EC: get_next_line (get_next_line.c:26)
==180751==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180751==    by 0x406523: main (mandatory.cpp:97)
==180751== 
==180752== Invalid free() / delete / delete[] / realloc()
==180752==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180752==    by 0x407852: ft_strdup2 (get_next_line_utils.c:229)
==180752==    by 0x4073ED: get_next_line (get_next_line.c:68)
==180752==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180752==    by 0x4067DF: main (mandatory.cpp:106)
==180752==  Address 0x4de7610 is 176 bytes inside a block of size 218 alloc'd
==180752==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180752==    by 0x40758A: ft_strjoin (get_next_line_utils.c:57)
==180752==    by 0x407452: get_next_line (get_next_line.c:83)
==180752==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180752==    by 0x40674F: main (mandatory.cpp:106)
==180752== 
==180752== 1 bytes in 1 blocks are definitely lost in loss record 1 of 12
==180752==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180752==    by 0x40742B: get_next_line (get_next_line.c:80)
==180752==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180752==    by 0x40674F: main (mandatory.cpp:106)
==180752== 
==180752== 218 bytes in 1 blocks are possibly lost in loss record 2 of 12
==180752==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180752==    by 0x40758A: ft_strjoin (get_next_line_utils.c:57)
==180752==    by 0x407452: get_next_line (get_next_line.c:83)
==180752==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180752==    by 0x40674F: main (mandatory.cpp:106)
==180752== 
==180752== 10,000,001 bytes in 1 blocks are possibly lost in loss record 3 of 12
==180752==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180752==    by 0x4072EC: get_next_line (get_next_line.c:26)
==180752==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180752==    by 0x40674F: main (mandatory.cpp:106)
==180752== 
==180752== 10,000,001 bytes in 1 blocks are possibly lost in loss record 4 of 12
==180752==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180752==    by 0x4072EC: get_next_line (get_next_line.c:26)
==180752==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180752==    by 0x406773: main (mandatory.cpp:106)
==180752== 
==180752== 10,000,001 bytes in 1 blocks are possibly lost in loss record 5 of 12
==180752==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180752==    by 0x4072EC: get_next_line (get_next_line.c:26)
==180752==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180752==    by 0x4067A9: main (mandatory.cpp:106)
==180752== 
==180752== 10,000,001 bytes in 1 blocks are possibly lost in loss record 6 of 12
==180752==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180752==    by 0x4072EC: get_next_line (get_next_line.c:26)
==180752==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180752==    by 0x4067BB: main (mandatory.cpp:106)
==180752== 
==180752== 10,000,001 bytes in 1 blocks are possibly lost in loss record 7 of 12
==180752==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180752==    by 0x4072EC: get_next_line (get_next_line.c:26)
==180752==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180752==    by 0x4067CD: main (mandatory.cpp:106)
==180752== 
==180752== 10,000,001 bytes in 1 blocks are possibly lost in loss record 8 of 12
==180752==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180752==    by 0x4072EC: get_next_line (get_next_line.c:26)
==180752==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180752==    by 0x4067EB: main (mandatory.cpp:106)
==180752== 
==180752== 10,000,001 bytes in 1 blocks are definitely lost in loss record 9 of 12
==180752==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180752==    by 0x4072EC: get_next_line (get_next_line.c:26)
==180752==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180752==    by 0x406761: main (mandatory.cpp:106)
==180752== 
==180752== 10,000,001 bytes in 1 blocks are definitely lost in loss record 10 of 12
==180752==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180752==    by 0x4072EC: get_next_line (get_next_line.c:26)
==180752==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180752==    by 0x406785: main (mandatory.cpp:106)
==180752== 
==180752== 10,000,001 bytes in 1 blocks are definitely lost in loss record 11 of 12
==180752==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180752==    by 0x4072EC: get_next_line (get_next_line.c:26)
==180752==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180752==    by 0x406797: main (mandatory.cpp:106)
==180752== 
==180752== 10,000,001 bytes in 1 blocks are definitely lost in loss record 12 of 12
==180752==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180752==    by 0x4072EC: get_next_line (get_next_line.c:26)
==180752==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180752==    by 0x4067DF: main (mandatory.cpp:106)
==180752== 
==180757== 1 bytes in 1 blocks are definitely lost in loss record 1 of 12
==180757==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180757==    by 0x40742B: get_next_line (get_next_line.c:80)
==180757==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180757==    by 0x406A0B: main (mandatory.cpp:119)
==180757== 
==180757== 219 bytes in 1 blocks are possibly lost in loss record 2 of 12
==180757==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180757==    by 0x40758A: ft_strjoin (get_next_line_utils.c:57)
==180757==    by 0x407452: get_next_line (get_next_line.c:83)
==180757==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180757==    by 0x406A0B: main (mandatory.cpp:119)
==180757== 
==180757== 10,000,001 bytes in 1 blocks are possibly lost in loss record 3 of 12
==180757==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180757==    by 0x4072EC: get_next_line (get_next_line.c:26)
==180757==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180757==    by 0x406A0B: main (mandatory.cpp:119)
==180757== 
==180757== 10,000,001 bytes in 1 blocks are possibly lost in loss record 4 of 12
==180757==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180757==    by 0x4072EC: get_next_line (get_next_line.c:26)
==180757==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180757==    by 0x406A2F: main (mandatory.cpp:119)
==180757== 
==180757== 10,000,001 bytes in 1 blocks are possibly lost in loss record 5 of 12
==180757==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180757==    by 0x4072EC: get_next_line (get_next_line.c:26)
==180757==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180757==    by 0x406A65: main (mandatory.cpp:119)
==180757== 
==180757== 10,000,001 bytes in 1 blocks are possibly lost in loss record 6 of 12
==180757==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180757==    by 0x4072EC: get_next_line (get_next_line.c:26)
==180757==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180757==    by 0x406A77: main (mandatory.cpp:119)
==180757== 
==180757== 10,000,001 bytes in 1 blocks are possibly lost in loss record 7 of 12
==180757==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180757==    by 0x4072EC: get_next_line (get_next_line.c:26)
==180757==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180757==    by 0x406A89: main (mandatory.cpp:119)
==180757== 
==180757== 10,000,001 bytes in 1 blocks are possibly lost in loss record 8 of 12
==180757==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180757==    by 0x4072EC: get_next_line (get_next_line.c:26)
==180757==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180757==    by 0x406AA7: main (mandatory.cpp:119)
==180757== 
==180757== 10,000,001 bytes in 1 blocks are definitely lost in loss record 9 of 12
==180757==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180757==    by 0x4072EC: get_next_line (get_next_line.c:26)
==180757==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180757==    by 0x406A1D: main (mandatory.cpp:119)
==180757== 
==180757== 10,000,001 bytes in 1 blocks are definitely lost in loss record 10 of 12
==180757==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180757==    by 0x4072EC: get_next_line (get_next_line.c:26)
==180757==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180757==    by 0x406A41: main (mandatory.cpp:119)
==180757== 
==180757== 10,000,001 bytes in 1 blocks are definitely lost in loss record 11 of 12
==180757==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180757==    by 0x4072EC: get_next_line (get_next_line.c:26)
==180757==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180757==    by 0x406A53: main (mandatory.cpp:119)
==180757== 
==180757== 10,000,001 bytes in 1 blocks are definitely lost in loss record 12 of 12
==180757==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180757==    by 0x4072EC: get_next_line (get_next_line.c:26)
==180757==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180757==    by 0x406A9B: main (mandatory.cpp:119)
==180757== 
==180759== Invalid write of size 1
==180759==    at 0x4073F9: get_next_line (get_next_line.c:69)
==180759==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180759==    by 0x406CC7: main (mandatory.cpp:132)
==180759==  Address 0x4de7ba0 is 0 bytes inside a block of size 10,001 free'd
==180759==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180759==    by 0x407852: ft_strdup2 (get_next_line_utils.c:229)
==180759==    by 0x4073ED: get_next_line (get_next_line.c:68)
==180759==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180759==    by 0x406CC7: main (mandatory.cpp:132)
==180759==  Block was alloc'd at
==180759==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180759==    by 0x40758A: ft_strjoin (get_next_line_utils.c:57)
==180759==    by 0x407452: get_next_line (get_next_line.c:83)
==180759==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180759==    by 0x406CC7: main (mandatory.cpp:132)
==180759== 
==180759== Invalid read of size 1
==180759==    at 0x4074E4: ft_strchr (get_next_line_utils.c:25)
==180759==    by 0x40731D: get_next_line (get_next_line.c:32)
==180759==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180759==    by 0x406CD3: main (mandatory.cpp:132)
==180759==  Address 0x4de7ba0 is 0 bytes inside a block of size 10,001 free'd
==180759==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180759==    by 0x407852: ft_strdup2 (get_next_line_utils.c:229)
==180759==    by 0x4073ED: get_next_line (get_next_line.c:68)
==180759==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180759==    by 0x406CC7: main (mandatory.cpp:132)
==180759==  Block was alloc'd at
==180759==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180759==    by 0x40758A: ft_strjoin (get_next_line_utils.c:57)
==180759==    by 0x407452: get_next_line (get_next_line.c:83)
==180759==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180759==    by 0x406CC7: main (mandatory.cpp:132)
==180759== 
==180759== Invalid read of size 1
==180759==    at 0x40739C: get_next_line (get_next_line.c:58)
==180759==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180759==    by 0x406CD3: main (mandatory.cpp:132)
==180759==  Address 0x4de7ba0 is 0 bytes inside a block of size 10,001 free'd
==180759==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180759==    by 0x407852: ft_strdup2 (get_next_line_utils.c:229)
==180759==    by 0x4073ED: get_next_line (get_next_line.c:68)
==180759==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180759==    by 0x406CC7: main (mandatory.cpp:132)
==180759==  Block was alloc'd at
==180759==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180759==    by 0x40758A: ft_strjoin (get_next_line_utils.c:57)
==180759==    by 0x407452: get_next_line (get_next_line.c:83)
==180759==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180759==    by 0x406CC7: main (mandatory.cpp:132)
==180759== 
==180759== 1 bytes in 1 blocks are definitely lost in loss record 1 of 3
==180759==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180759==    by 0x40742B: get_next_line (get_next_line.c:80)
==180759==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180759==    by 0x406CC7: main (mandatory.cpp:132)
==180759== 
==180759== 10,000,001 bytes in 1 blocks are possibly lost in loss record 2 of 3
==180759==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180759==    by 0x4072EC: get_next_line (get_next_line.c:26)
==180759==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180759==    by 0x406CC7: main (mandatory.cpp:132)
==180759== 
==180759== 10,000,001 bytes in 1 blocks are definitely lost in loss record 3 of 3
==180759==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180759==    by 0x4072EC: get_next_line (get_next_line.c:26)
==180759==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180759==    by 0x406CD3: main (mandatory.cpp:132)
==180759== 
==180761== 1 bytes in 1 blocks are definitely lost in loss record 1 of 4
==180761==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180761==    by 0x40742B: get_next_line (get_next_line.c:80)
==180761==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180761==    by 0x406EF3: main (mandatory.cpp:136)
==180761== 
==180761== 10,002 bytes in 1 blocks are possibly lost in loss record 2 of 4
==180761==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180761==    by 0x40758A: ft_strjoin (get_next_line_utils.c:57)
==180761==    by 0x407452: get_next_line (get_next_line.c:83)
==180761==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180761==    by 0x406EF3: main (mandatory.cpp:136)
==180761== 
==180761== 10,000,001 bytes in 1 blocks are possibly lost in loss record 3 of 4
==180761==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180761==    by 0x4072EC: get_next_line (get_next_line.c:26)
==180761==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180761==    by 0x406EF3: main (mandatory.cpp:136)
==180761== 
==180761== 10,000,001 bytes in 1 blocks are definitely lost in loss record 4 of 4
==180761==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180761==    by 0x4072EC: get_next_line (get_next_line.c:26)
==180761==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==180761==    by 0x406EFF: main (mandatory.cpp:136)
==180761== 
==180772== Invalid read of size 1
==180772==    at 0x484FBD4: strcmp (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==180772==    by 0x402CFA: gnl(int, char const*) (gnl.cpp:24)
==180772==    by 0x40711E: main (mandatory.cpp:141)
==180772==  Address 0x0 is not stack'd, malloc'd or (recently) free'd
==180772== 
