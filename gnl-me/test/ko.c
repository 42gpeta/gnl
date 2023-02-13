==348387== Invalid write of size 1
==348387==    at 0x40735C: get_next_line (get_next_line.c:39)
==348387==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348387==    by 0x404BD6: main (mandatory.cpp:25)
==348387==  Address 0x4de429f is 1 bytes before a block of size 2 alloc'd
==348387==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348387==    by 0x40730C: get_next_line (get_next_line.c:27)
==348387==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348387==    by 0x404BD6: main (mandatory.cpp:25)
==348387== 
==348409== Invalid read of size 1
==348409==    at 0x407383: get_next_line (get_next_line.c:47)
==348409==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348409==    by 0x404E73: main (mandatory.cpp:31)
==348409==  Address 0x0 is not stack'd, malloc'd or (recently) free'd
==348409== 
==348410== 2 bytes in 1 blocks are definitely lost in loss record 2 of 3
==348410==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348410==    by 0x4075E3: ft_strjoin (get_next_line_utils.c:64)
==348410==    by 0x40749F: get_next_line (get_next_line.c:79)
==348410==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348410==    by 0x40509F: main (mandatory.cpp:36)
==348410== 
==348410== 2 bytes in 1 blocks are definitely lost in loss record 3 of 3
==348410==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348410==    by 0x40730C: get_next_line (get_next_line.c:27)
==348410==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348410==    by 0x4050AB: main (mandatory.cpp:36)
==348410== 
==348411== Invalid write of size 1
==348411==    at 0x4073A4: get_next_line (get_next_line.c:50)
==348411==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348411==    by 0x4052CB: main (mandatory.cpp:41)
==348411==  Address 0x4de6840 is 0 bytes inside a block of size 42 free'd
==348411==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348411==    by 0x407B52: ft_strdup2 (get_next_line_utils.c:329)
==348411==    by 0x407398: get_next_line (get_next_line.c:49)
==348411==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348411==    by 0x4052CB: main (mandatory.cpp:41)
==348411==  Block was alloc'd at
==348411==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348411==    by 0x4075E3: ft_strjoin (get_next_line_utils.c:64)
==348411==    by 0x40749F: get_next_line (get_next_line.c:79)
==348411==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348411==    by 0x4052CB: main (mandatory.cpp:41)
==348411== 
==348411== Invalid read of size 1
==348411==    at 0x407383: get_next_line (get_next_line.c:47)
==348411==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348411==    by 0x4052D7: main (mandatory.cpp:41)
==348411==  Address 0x4de6840 is 0 bytes inside a block of size 42 free'd
==348411==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348411==    by 0x407B52: ft_strdup2 (get_next_line_utils.c:329)
==348411==    by 0x407398: get_next_line (get_next_line.c:49)
==348411==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348411==    by 0x4052CB: main (mandatory.cpp:41)
==348411==  Block was alloc'd at
==348411==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348411==    by 0x4075E3: ft_strjoin (get_next_line_utils.c:64)
==348411==    by 0x40749F: get_next_line (get_next_line.c:79)
==348411==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348411==    by 0x4052CB: main (mandatory.cpp:41)
==348411== 
==348411== 2 bytes in 1 blocks are definitely lost in loss record 1 of 2
==348411==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348411==    by 0x40730C: get_next_line (get_next_line.c:27)
==348411==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348411==    by 0x4052CB: main (mandatory.cpp:41)
==348411== 
==348411== 2 bytes in 1 blocks are definitely lost in loss record 2 of 2
==348411==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348411==    by 0x40730C: get_next_line (get_next_line.c:27)
==348411==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348411==    by 0x4052D7: main (mandatory.cpp:41)
==348411== 
==348416== Invalid write of size 1
==348416==    at 0x4073A4: get_next_line (get_next_line.c:50)
==348416==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348416==    by 0x405509: main (mandatory.cpp:46)
==348416==  Address 0x4de6e90 is 0 bytes inside a block of size 2 free'd
==348416==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348416==    by 0x407B52: ft_strdup2 (get_next_line_utils.c:329)
==348416==    by 0x407398: get_next_line (get_next_line.c:49)
==348416==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348416==    by 0x405509: main (mandatory.cpp:46)
==348416==  Block was alloc'd at
==348416==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348416==    by 0x4075E3: ft_strjoin (get_next_line_utils.c:64)
==348416==    by 0x40749F: get_next_line (get_next_line.c:79)
==348416==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348416==    by 0x405509: main (mandatory.cpp:46)
==348416== 
==348416== Invalid read of size 1
==348416==    at 0x407383: get_next_line (get_next_line.c:47)
==348416==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348416==    by 0x405515: main (mandatory.cpp:46)
==348416==  Address 0x4de6e90 is 0 bytes inside a block of size 2 free'd
==348416==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348416==    by 0x407B52: ft_strdup2 (get_next_line_utils.c:329)
==348416==    by 0x407398: get_next_line (get_next_line.c:49)
==348416==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348416==    by 0x405509: main (mandatory.cpp:46)
==348416==  Block was alloc'd at
==348416==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348416==    by 0x4075E3: ft_strjoin (get_next_line_utils.c:64)
==348416==    by 0x40749F: get_next_line (get_next_line.c:79)
==348416==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348416==    by 0x405509: main (mandatory.cpp:46)
==348416== 
==348416== 2 bytes in 1 blocks are definitely lost in loss record 1 of 3
==348416==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348416==    by 0x40730C: get_next_line (get_next_line.c:27)
==348416==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348416==    by 0x405509: main (mandatory.cpp:46)
==348416== 
==348416== 2 bytes in 1 blocks are definitely lost in loss record 2 of 3
==348416==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348416==    by 0x40730C: get_next_line (get_next_line.c:27)
==348416==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348416==    by 0x405515: main (mandatory.cpp:46)
==348416== 
==348416== 46 bytes in 1 blocks are definitely lost in loss record 3 of 3
==348416==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348416==    by 0x4075E3: ft_strjoin (get_next_line_utils.c:64)
==348416==    by 0x40749F: get_next_line (get_next_line.c:79)
==348416==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348416==    by 0x4054F7: main (mandatory.cpp:46)
==348416== 
==348418== Invalid write of size 1
==348418==    at 0x4073A4: get_next_line (get_next_line.c:50)
==348418==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348418==    by 0x405735: main (mandatory.cpp:52)
==348418==  Address 0x4de6ed0 is 0 bytes inside a block of size 43 free'd
==348418==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348418==    by 0x407B52: ft_strdup2 (get_next_line_utils.c:329)
==348418==    by 0x407398: get_next_line (get_next_line.c:49)
==348418==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348418==    by 0x405735: main (mandatory.cpp:52)
==348418==  Block was alloc'd at
==348418==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348418==    by 0x4075E3: ft_strjoin (get_next_line_utils.c:64)
==348418==    by 0x40749F: get_next_line (get_next_line.c:79)
==348418==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348418==    by 0x405735: main (mandatory.cpp:52)
==348418== 
==348418== Invalid read of size 1
==348418==    at 0x407383: get_next_line (get_next_line.c:47)
==348418==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348418==    by 0x405741: main (mandatory.cpp:52)
==348418==  Address 0x4de6ed0 is 0 bytes inside a block of size 43 free'd
==348418==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348418==    by 0x407B52: ft_strdup2 (get_next_line_utils.c:329)
==348418==    by 0x407398: get_next_line (get_next_line.c:49)
==348418==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348418==    by 0x405735: main (mandatory.cpp:52)
==348418==  Block was alloc'd at
==348418==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348418==    by 0x4075E3: ft_strjoin (get_next_line_utils.c:64)
==348418==    by 0x40749F: get_next_line (get_next_line.c:79)
==348418==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348418==    by 0x405735: main (mandatory.cpp:52)
==348418== 
==348418== 2 bytes in 1 blocks are definitely lost in loss record 1 of 2
==348418==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348418==    by 0x40730C: get_next_line (get_next_line.c:27)
==348418==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348418==    by 0x405735: main (mandatory.cpp:52)
==348418== 
==348418== 2 bytes in 1 blocks are definitely lost in loss record 2 of 2
==348418==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348418==    by 0x40730C: get_next_line (get_next_line.c:27)
==348418==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348418==    by 0x405741: main (mandatory.cpp:52)
==348418== 
==348425== Invalid write of size 1
==348425==    at 0x4073A4: get_next_line (get_next_line.c:50)
==348425==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348425==    by 0x405973: main (mandatory.cpp:57)
==348425==  Address 0x4de7360 is 0 bytes inside a block of size 2 free'd
==348425==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348425==    by 0x407B52: ft_strdup2 (get_next_line_utils.c:329)
==348425==    by 0x407398: get_next_line (get_next_line.c:49)
==348425==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348425==    by 0x405973: main (mandatory.cpp:57)
==348425==  Block was alloc'd at
==348425==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348425==    by 0x4075E3: ft_strjoin (get_next_line_utils.c:64)
==348425==    by 0x40749F: get_next_line (get_next_line.c:79)
==348425==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348425==    by 0x405973: main (mandatory.cpp:57)
==348425== 
==348425== Invalid read of size 1
==348425==    at 0x407383: get_next_line (get_next_line.c:47)
==348425==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348425==    by 0x40597F: main (mandatory.cpp:57)
==348425==  Address 0x4de7360 is 0 bytes inside a block of size 2 free'd
==348425==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348425==    by 0x407B52: ft_strdup2 (get_next_line_utils.c:329)
==348425==    by 0x407398: get_next_line (get_next_line.c:49)
==348425==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348425==    by 0x405973: main (mandatory.cpp:57)
==348425==  Block was alloc'd at
==348425==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348425==    by 0x4075E3: ft_strjoin (get_next_line_utils.c:64)
==348425==    by 0x40749F: get_next_line (get_next_line.c:79)
==348425==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348425==    by 0x405973: main (mandatory.cpp:57)
==348425== 
==348425== 2 bytes in 1 blocks are definitely lost in loss record 1 of 3
==348425==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348425==    by 0x40730C: get_next_line (get_next_line.c:27)
==348425==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348425==    by 0x405973: main (mandatory.cpp:57)
==348425== 
==348425== 2 bytes in 1 blocks are definitely lost in loss record 2 of 3
==348425==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348425==    by 0x40730C: get_next_line (get_next_line.c:27)
==348425==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348425==    by 0x40597F: main (mandatory.cpp:57)
==348425== 
==348425== 43 bytes in 1 blocks are definitely lost in loss record 3 of 3
==348425==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348425==    by 0x4075E3: ft_strjoin (get_next_line_utils.c:64)
==348425==    by 0x40749F: get_next_line (get_next_line.c:79)
==348425==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348425==    by 0x405961: main (mandatory.cpp:57)
==348425== 
==348426== Invalid write of size 1
==348426==    at 0x4073A4: get_next_line (get_next_line.c:50)
==348426==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348426==    by 0x405BA9: main (mandatory.cpp:68)
==348426==  Address 0x4de7560 is 0 bytes inside a block of size 44 free'd
==348426==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348426==    by 0x407B52: ft_strdup2 (get_next_line_utils.c:329)
==348426==    by 0x407398: get_next_line (get_next_line.c:49)
==348426==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348426==    by 0x405BA9: main (mandatory.cpp:68)
==348426==  Block was alloc'd at
==348426==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348426==    by 0x4075E3: ft_strjoin (get_next_line_utils.c:64)
==348426==    by 0x40749F: get_next_line (get_next_line.c:79)
==348426==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348426==    by 0x405BA9: main (mandatory.cpp:68)
==348426== 
==348426== Invalid read of size 1
==348426==    at 0x407383: get_next_line (get_next_line.c:47)
==348426==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348426==    by 0x405BB5: main (mandatory.cpp:68)
==348426==  Address 0x4de7560 is 0 bytes inside a block of size 44 free'd
==348426==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348426==    by 0x407B52: ft_strdup2 (get_next_line_utils.c:329)
==348426==    by 0x407398: get_next_line (get_next_line.c:49)
==348426==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348426==    by 0x405BA9: main (mandatory.cpp:68)
==348426==  Block was alloc'd at
==348426==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348426==    by 0x4075E3: ft_strjoin (get_next_line_utils.c:64)
==348426==    by 0x40749F: get_next_line (get_next_line.c:79)
==348426==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348426==    by 0x405BA9: main (mandatory.cpp:68)
==348426== 
==348426== 2 bytes in 1 blocks are definitely lost in loss record 1 of 2
==348426==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348426==    by 0x40730C: get_next_line (get_next_line.c:27)
==348426==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348426==    by 0x405BA9: main (mandatory.cpp:68)
==348426== 
==348426== 2 bytes in 1 blocks are definitely lost in loss record 2 of 2
==348426==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348426==    by 0x40730C: get_next_line (get_next_line.c:27)
==348426==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348426==    by 0x405BB5: main (mandatory.cpp:68)
==348426== 
==348427== Invalid write of size 1
==348427==    at 0x4073A4: get_next_line (get_next_line.c:50)
==348427==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348427==    by 0x405DE7: main (mandatory.cpp:73)
==348427==  Address 0x4de79f0 is 0 bytes inside a block of size 2 free'd
==348427==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348427==    by 0x407B52: ft_strdup2 (get_next_line_utils.c:329)
==348427==    by 0x407398: get_next_line (get_next_line.c:49)
==348427==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348427==    by 0x405DE7: main (mandatory.cpp:73)
==348427==  Block was alloc'd at
==348427==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348427==    by 0x4075E3: ft_strjoin (get_next_line_utils.c:64)
==348427==    by 0x40749F: get_next_line (get_next_line.c:79)
==348427==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348427==    by 0x405DE7: main (mandatory.cpp:73)
==348427== 
==348427== Invalid read of size 1
==348427==    at 0x407383: get_next_line (get_next_line.c:47)
==348427==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348427==    by 0x405DF3: main (mandatory.cpp:73)
==348427==  Address 0x4de79f0 is 0 bytes inside a block of size 2 free'd
==348427==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348427==    by 0x407B52: ft_strdup2 (get_next_line_utils.c:329)
==348427==    by 0x407398: get_next_line (get_next_line.c:49)
==348427==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348427==    by 0x405DE7: main (mandatory.cpp:73)
==348427==  Block was alloc'd at
==348427==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348427==    by 0x4075E3: ft_strjoin (get_next_line_utils.c:64)
==348427==    by 0x40749F: get_next_line (get_next_line.c:79)
==348427==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348427==    by 0x405DE7: main (mandatory.cpp:73)
==348427== 
==348427== 2 bytes in 1 blocks are definitely lost in loss record 1 of 3
==348427==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348427==    by 0x40730C: get_next_line (get_next_line.c:27)
==348427==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348427==    by 0x405DE7: main (mandatory.cpp:73)
==348427== 
==348427== 2 bytes in 1 blocks are definitely lost in loss record 2 of 3
==348427==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348427==    by 0x40730C: get_next_line (get_next_line.c:27)
==348427==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348427==    by 0x405DF3: main (mandatory.cpp:73)
==348427== 
==348427== 44 bytes in 1 blocks are definitely lost in loss record 3 of 3
==348427==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348427==    by 0x4075E3: ft_strjoin (get_next_line_utils.c:64)
==348427==    by 0x40749F: get_next_line (get_next_line.c:79)
==348427==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348427==    by 0x405DD5: main (mandatory.cpp:73)
==348427== 
==348434== 2 bytes in 1 blocks are definitely lost in loss record 2 of 7
==348434==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348434==    by 0x4075E3: ft_strjoin (get_next_line_utils.c:64)
==348434==    by 0x40749F: get_next_line (get_next_line.c:79)
==348434==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348434==    by 0x406013: main (mandatory.cpp:79)
==348434== 
==348434== 2 bytes in 1 blocks are definitely lost in loss record 3 of 7
==348434==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348434==    by 0x4075E3: ft_strjoin (get_next_line_utils.c:64)
==348434==    by 0x40749F: get_next_line (get_next_line.c:79)
==348434==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348434==    by 0x406025: main (mandatory.cpp:79)
==348434== 
==348434== 2 bytes in 1 blocks are definitely lost in loss record 4 of 7
==348434==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348434==    by 0x4075E3: ft_strjoin (get_next_line_utils.c:64)
==348434==    by 0x40749F: get_next_line (get_next_line.c:79)
==348434==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348434==    by 0x406037: main (mandatory.cpp:79)
==348434== 
==348434== 2 bytes in 1 blocks are definitely lost in loss record 5 of 7
==348434==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348434==    by 0x4075E3: ft_strjoin (get_next_line_utils.c:64)
==348434==    by 0x40749F: get_next_line (get_next_line.c:79)
==348434==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348434==    by 0x406049: main (mandatory.cpp:79)
==348434== 
==348434== 2 bytes in 1 blocks are definitely lost in loss record 6 of 7
==348434==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348434==    by 0x4075E3: ft_strjoin (get_next_line_utils.c:64)
==348434==    by 0x40749F: get_next_line (get_next_line.c:79)
==348434==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348434==    by 0x40605B: main (mandatory.cpp:79)
==348434== 
==348434== 2 bytes in 1 blocks are definitely lost in loss record 7 of 7
==348434==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348434==    by 0x40730C: get_next_line (get_next_line.c:27)
==348434==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348434==    by 0x406067: main (mandatory.cpp:79)
==348434== 
==348436== Invalid write of size 1
==348436==    at 0x4073A4: get_next_line (get_next_line.c:50)
==348436==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348436==    by 0x4062CF: main (mandatory.cpp:88)
==348436==  Address 0x4dec1d0 is 0 bytes inside a block of size 42 free'd
==348436==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348436==    by 0x407B52: ft_strdup2 (get_next_line_utils.c:329)
==348436==    by 0x407398: get_next_line (get_next_line.c:49)
==348436==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348436==    by 0x4062CF: main (mandatory.cpp:88)
==348436==  Block was alloc'd at
==348436==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348436==    by 0x4075E3: ft_strjoin (get_next_line_utils.c:64)
==348436==    by 0x40749F: get_next_line (get_next_line.c:79)
==348436==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348436==    by 0x4062CF: main (mandatory.cpp:88)
==348436== 
==348436== Invalid read of size 1
==348436==    at 0x407383: get_next_line (get_next_line.c:47)
==348436==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348436==    by 0x4062DB: main (mandatory.cpp:88)
==348436==  Address 0x4dec1d0 is 0 bytes inside a block of size 42 free'd
==348436==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348436==    by 0x407B52: ft_strdup2 (get_next_line_utils.c:329)
==348436==    by 0x407398: get_next_line (get_next_line.c:49)
==348436==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348436==    by 0x4062CF: main (mandatory.cpp:88)
==348436==  Block was alloc'd at
==348436==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348436==    by 0x4075E3: ft_strjoin (get_next_line_utils.c:64)
==348436==    by 0x40749F: get_next_line (get_next_line.c:79)
==348436==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348436==    by 0x4062CF: main (mandatory.cpp:88)
==348436== 
==348436== 2 bytes in 1 blocks are definitely lost in loss record 1 of 6
==348436==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348436==    by 0x40730C: get_next_line (get_next_line.c:27)
==348436==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348436==    by 0x4062CF: main (mandatory.cpp:88)
==348436== 
==348436== 2 bytes in 1 blocks are definitely lost in loss record 2 of 6
==348436==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348436==    by 0x40730C: get_next_line (get_next_line.c:27)
==348436==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348436==    by 0x4062DB: main (mandatory.cpp:88)
==348436== 
==348436== 43 bytes in 1 blocks are definitely lost in loss record 3 of 6
==348436==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348436==    by 0x4075E3: ft_strjoin (get_next_line_utils.c:64)
==348436==    by 0x40749F: get_next_line (get_next_line.c:79)
==348436==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348436==    by 0x406287: main (mandatory.cpp:88)
==348436== 
==348436== 44 bytes in 1 blocks are definitely lost in loss record 4 of 6
==348436==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348436==    by 0x4075E3: ft_strjoin (get_next_line_utils.c:64)
==348436==    by 0x40749F: get_next_line (get_next_line.c:79)
==348436==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348436==    by 0x406299: main (mandatory.cpp:88)
==348436== 
==348436== 44 bytes in 1 blocks are definitely lost in loss record 5 of 6
==348436==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348436==    by 0x4075E3: ft_strjoin (get_next_line_utils.c:64)
==348436==    by 0x40749F: get_next_line (get_next_line.c:79)
==348436==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348436==    by 0x4062BD: main (mandatory.cpp:88)
==348436== 
==348436== 45 bytes in 1 blocks are definitely lost in loss record 6 of 6
==348436==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348436==    by 0x4075E3: ft_strjoin (get_next_line_utils.c:64)
==348436==    by 0x40749F: get_next_line (get_next_line.c:79)
==348436==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348436==    by 0x4062AB: main (mandatory.cpp:88)
==348436== 
==348449== 2 bytes in 1 blocks are definitely lost in loss record 2 of 7
==348449==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348449==    by 0x40730C: get_next_line (get_next_line.c:27)
==348449==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348449==    by 0x40654F: main (mandatory.cpp:97)
==348449== 
==348449== 42 bytes in 1 blocks are definitely lost in loss record 3 of 7
==348449==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348449==    by 0x4075E3: ft_strjoin (get_next_line_utils.c:64)
==348449==    by 0x40749F: get_next_line (get_next_line.c:79)
==348449==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348449==    by 0x4064FB: main (mandatory.cpp:97)
==348449== 
==348449== 42 bytes in 1 blocks are definitely lost in loss record 4 of 7
==348449==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348449==    by 0x4075E3: ft_strjoin (get_next_line_utils.c:64)
==348449==    by 0x40749F: get_next_line (get_next_line.c:79)
==348449==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348449==    by 0x406543: main (mandatory.cpp:97)
==348449== 
==348449== 43 bytes in 1 blocks are definitely lost in loss record 5 of 7
==348449==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348449==    by 0x4075E3: ft_strjoin (get_next_line_utils.c:64)
==348449==    by 0x40749F: get_next_line (get_next_line.c:79)
==348449==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348449==    by 0x40650D: main (mandatory.cpp:97)
==348449== 
==348449== 43 bytes in 1 blocks are definitely lost in loss record 6 of 7
==348449==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348449==    by 0x4075E3: ft_strjoin (get_next_line_utils.c:64)
==348449==    by 0x40749F: get_next_line (get_next_line.c:79)
==348449==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348449==    by 0x406531: main (mandatory.cpp:97)
==348449== 
==348449== 44 bytes in 1 blocks are definitely lost in loss record 7 of 7
==348449==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348449==    by 0x4075E3: ft_strjoin (get_next_line_utils.c:64)
==348449==    by 0x40749F: get_next_line (get_next_line.c:79)
==348449==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348449==    by 0x40651F: main (mandatory.cpp:97)
==348449== 
==348450== Invalid write of size 1
==348450==    at 0x4073A4: get_next_line (get_next_line.c:50)
==348450==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348450==    by 0x4067FF: main (mandatory.cpp:106)
==348450==  Address 0x4decd30 is 0 bytes inside a block of size 42 free'd
==348450==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348450==    by 0x407B52: ft_strdup2 (get_next_line_utils.c:329)
==348450==    by 0x407398: get_next_line (get_next_line.c:49)
==348450==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348450==    by 0x4067FF: main (mandatory.cpp:106)
==348450==  Block was alloc'd at
==348450==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348450==    by 0x4075E3: ft_strjoin (get_next_line_utils.c:64)
==348450==    by 0x40749F: get_next_line (get_next_line.c:79)
==348450==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348450==    by 0x4067FF: main (mandatory.cpp:106)
==348450== 
==348450== Invalid read of size 1
==348450==    at 0x407383: get_next_line (get_next_line.c:47)
==348450==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348450==    by 0x40680B: main (mandatory.cpp:106)
==348450==  Address 0x4decd30 is 0 bytes inside a block of size 42 free'd
==348450==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348450==    by 0x407B52: ft_strdup2 (get_next_line_utils.c:329)
==348450==    by 0x407398: get_next_line (get_next_line.c:49)
==348450==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348450==    by 0x4067FF: main (mandatory.cpp:106)
==348450==  Block was alloc'd at
==348450==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348450==    by 0x4075E3: ft_strjoin (get_next_line_utils.c:64)
==348450==    by 0x40749F: get_next_line (get_next_line.c:79)
==348450==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348450==    by 0x4067FF: main (mandatory.cpp:106)
==348450== 
==348450== 2 bytes in 1 blocks are definitely lost in loss record 1 of 10
==348450==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348450==    by 0x4075E3: ft_strjoin (get_next_line_utils.c:64)
==348450==    by 0x40749F: get_next_line (get_next_line.c:79)
==348450==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348450==    by 0x406781: main (mandatory.cpp:106)
==348450== 
==348450== 2 bytes in 1 blocks are definitely lost in loss record 2 of 10
==348450==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348450==    by 0x4075E3: ft_strjoin (get_next_line_utils.c:64)
==348450==    by 0x40749F: get_next_line (get_next_line.c:79)
==348450==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348450==    by 0x4067A5: main (mandatory.cpp:106)
==348450== 
==348450== 2 bytes in 1 blocks are definitely lost in loss record 3 of 10
==348450==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348450==    by 0x4075E3: ft_strjoin (get_next_line_utils.c:64)
==348450==    by 0x40749F: get_next_line (get_next_line.c:79)
==348450==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348450==    by 0x4067C9: main (mandatory.cpp:106)
==348450== 
==348450== 2 bytes in 1 blocks are definitely lost in loss record 4 of 10
==348450==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348450==    by 0x4075E3: ft_strjoin (get_next_line_utils.c:64)
==348450==    by 0x40749F: get_next_line (get_next_line.c:79)
==348450==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348450==    by 0x4067ED: main (mandatory.cpp:106)
==348450== 
==348450== 2 bytes in 1 blocks are definitely lost in loss record 5 of 10
==348450==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348450==    by 0x40730C: get_next_line (get_next_line.c:27)
==348450==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348450==    by 0x4067FF: main (mandatory.cpp:106)
==348450== 
==348450== 2 bytes in 1 blocks are definitely lost in loss record 6 of 10
==348450==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348450==    by 0x40730C: get_next_line (get_next_line.c:27)
==348450==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348450==    by 0x40680B: main (mandatory.cpp:106)
==348450== 
==348450== 43 bytes in 1 blocks are definitely lost in loss record 7 of 10
==348450==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348450==    by 0x4075E3: ft_strjoin (get_next_line_utils.c:64)
==348450==    by 0x40749F: get_next_line (get_next_line.c:79)
==348450==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348450==    by 0x40676F: main (mandatory.cpp:106)
==348450== 
==348450== 44 bytes in 1 blocks are definitely lost in loss record 8 of 10
==348450==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348450==    by 0x4075E3: ft_strjoin (get_next_line_utils.c:64)
==348450==    by 0x40749F: get_next_line (get_next_line.c:79)
==348450==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348450==    by 0x406793: main (mandatory.cpp:106)
==348450== 
==348450== 44 bytes in 1 blocks are definitely lost in loss record 9 of 10
==348450==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348450==    by 0x4075E3: ft_strjoin (get_next_line_utils.c:64)
==348450==    by 0x40749F: get_next_line (get_next_line.c:79)
==348450==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348450==    by 0x4067DB: main (mandatory.cpp:106)
==348450== 
==348450== 45 bytes in 1 blocks are definitely lost in loss record 10 of 10
==348450==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348450==    by 0x4075E3: ft_strjoin (get_next_line_utils.c:64)
==348450==    by 0x40749F: get_next_line (get_next_line.c:79)
==348450==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348450==    by 0x4067B7: main (mandatory.cpp:106)
==348450== 
==348451== 2 bytes in 1 blocks are definitely lost in loss record 2 of 11
==348451==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348451==    by 0x4075E3: ft_strjoin (get_next_line_utils.c:64)
==348451==    by 0x40749F: get_next_line (get_next_line.c:79)
==348451==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348451==    by 0x406A3D: main (mandatory.cpp:119)
==348451== 
==348451== 2 bytes in 1 blocks are definitely lost in loss record 3 of 11
==348451==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348451==    by 0x4075E3: ft_strjoin (get_next_line_utils.c:64)
==348451==    by 0x40749F: get_next_line (get_next_line.c:79)
==348451==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348451==    by 0x406A61: main (mandatory.cpp:119)
==348451== 
==348451== 2 bytes in 1 blocks are definitely lost in loss record 4 of 11
==348451==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348451==    by 0x4075E3: ft_strjoin (get_next_line_utils.c:64)
==348451==    by 0x40749F: get_next_line (get_next_line.c:79)
==348451==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348451==    by 0x406A85: main (mandatory.cpp:119)
==348451== 
==348451== 2 bytes in 1 blocks are definitely lost in loss record 5 of 11
==348451==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348451==    by 0x4075E3: ft_strjoin (get_next_line_utils.c:64)
==348451==    by 0x40749F: get_next_line (get_next_line.c:79)
==348451==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348451==    by 0x406AA9: main (mandatory.cpp:119)
==348451== 
==348451== 2 bytes in 1 blocks are definitely lost in loss record 6 of 11
==348451==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348451==    by 0x40730C: get_next_line (get_next_line.c:27)
==348451==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348451==    by 0x406AC7: main (mandatory.cpp:119)
==348451== 
==348451== 43 bytes in 1 blocks are definitely lost in loss record 7 of 11
==348451==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348451==    by 0x4075E3: ft_strjoin (get_next_line_utils.c:64)
==348451==    by 0x40749F: get_next_line (get_next_line.c:79)
==348451==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348451==    by 0x406A2B: main (mandatory.cpp:119)
==348451== 
==348451== 43 bytes in 1 blocks are definitely lost in loss record 8 of 11
==348451==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348451==    by 0x4075E3: ft_strjoin (get_next_line_utils.c:64)
==348451==    by 0x40749F: get_next_line (get_next_line.c:79)
==348451==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348451==    by 0x406ABB: main (mandatory.cpp:119)
==348451== 
==348451== 44 bytes in 1 blocks are definitely lost in loss record 9 of 11
==348451==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348451==    by 0x4075E3: ft_strjoin (get_next_line_utils.c:64)
==348451==    by 0x40749F: get_next_line (get_next_line.c:79)
==348451==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348451==    by 0x406A4F: main (mandatory.cpp:119)
==348451== 
==348451== 44 bytes in 1 blocks are definitely lost in loss record 10 of 11
==348451==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348451==    by 0x4075E3: ft_strjoin (get_next_line_utils.c:64)
==348451==    by 0x40749F: get_next_line (get_next_line.c:79)
==348451==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348451==    by 0x406A97: main (mandatory.cpp:119)
==348451== 
==348451== 45 bytes in 1 blocks are definitely lost in loss record 11 of 11
==348451==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348451==    by 0x4075E3: ft_strjoin (get_next_line_utils.c:64)
==348451==    by 0x40749F: get_next_line (get_next_line.c:79)
==348451==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348451==    by 0x406A73: main (mandatory.cpp:119)
==348451== 
==348462== 2 bytes in 1 blocks are definitely lost in loss record 2 of 11
==348462==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348462==    by 0x4075E3: ft_strjoin (get_next_line_utils.c:64)
==348462==    by 0x40749F: get_next_line (get_next_line.c:79)
==348462==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348462==    by 0x40714F: main (mandatory.cpp:141)
==348462== 
==348462== 2 bytes in 1 blocks are definitely lost in loss record 3 of 11
==348462==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348462==    by 0x4075E3: ft_strjoin (get_next_line_utils.c:64)
==348462==    by 0x40749F: get_next_line (get_next_line.c:79)
==348462==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348462==    by 0x407171: main (mandatory.cpp:141)
==348462== 
==348462== 2 bytes in 1 blocks are definitely lost in loss record 4 of 11
==348462==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348462==    by 0x4075E3: ft_strjoin (get_next_line_utils.c:64)
==348462==    by 0x40749F: get_next_line (get_next_line.c:79)
==348462==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348462==    by 0x407193: main (mandatory.cpp:141)
==348462== 
==348462== 2 bytes in 1 blocks are definitely lost in loss record 5 of 11
==348462==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348462==    by 0x4075E3: ft_strjoin (get_next_line_utils.c:64)
==348462==    by 0x40749F: get_next_line (get_next_line.c:79)
==348462==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348462==    by 0x4071B5: main (mandatory.cpp:141)
==348462== 
==348462== 2 bytes in 1 blocks are definitely lost in loss record 6 of 11
==348462==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348462==    by 0x40730C: get_next_line (get_next_line.c:27)
==348462==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348462==    by 0x4071D1: main (mandatory.cpp:141)
==348462== 
==348462== 43 bytes in 1 blocks are definitely lost in loss record 7 of 11
==348462==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348462==    by 0x4075E3: ft_strjoin (get_next_line_utils.c:64)
==348462==    by 0x40749F: get_next_line (get_next_line.c:79)
==348462==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348462==    by 0x40713E: main (mandatory.cpp:141)
==348462== 
==348462== 43 bytes in 1 blocks are definitely lost in loss record 8 of 11
==348462==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348462==    by 0x4075E3: ft_strjoin (get_next_line_utils.c:64)
==348462==    by 0x40749F: get_next_line (get_next_line.c:79)
==348462==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348462==    by 0x4071C6: main (mandatory.cpp:141)
==348462== 
==348462== 44 bytes in 1 blocks are definitely lost in loss record 9 of 11
==348462==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348462==    by 0x4075E3: ft_strjoin (get_next_line_utils.c:64)
==348462==    by 0x40749F: get_next_line (get_next_line.c:79)
==348462==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348462==    by 0x407160: main (mandatory.cpp:141)
==348462== 
==348462== 44 bytes in 1 blocks are definitely lost in loss record 10 of 11
==348462==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348462==    by 0x4075E3: ft_strjoin (get_next_line_utils.c:64)
==348462==    by 0x40749F: get_next_line (get_next_line.c:79)
==348462==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348462==    by 0x4071A4: main (mandatory.cpp:141)
==348462== 
==348462== 45 bytes in 1 blocks are definitely lost in loss record 11 of 11
==348462==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348462==    by 0x4075E3: ft_strjoin (get_next_line_utils.c:64)
==348462==    by 0x40749F: get_next_line (get_next_line.c:79)
==348462==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348462==    by 0x407182: main (mandatory.cpp:141)
==348462== 
==348492== Invalid write of size 1
==348492==    at 0x40738E: get_next_line (get_next_line.c:39)
==348492==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348492==    by 0x404BD6: main (mandatory.cpp:25)
==348492==  Address 0x4de429f is 1 bytes before a block of size 43 alloc'd
==348492==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348492==    by 0x40733E: get_next_line (get_next_line.c:27)
==348492==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348492==    by 0x404BD6: main (mandatory.cpp:25)
==348492== 
==348493== Invalid read of size 1
==348493==    at 0x4073B5: get_next_line (get_next_line.c:47)
==348493==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348493==    by 0x404E73: main (mandatory.cpp:31)
==348493==  Address 0x0 is not stack'd, malloc'd or (recently) free'd
==348493== 
==348531== 43 bytes in 1 blocks are definitely lost in loss record 2 of 2
==348531==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348531==    by 0x40733E: get_next_line (get_next_line.c:27)
==348531==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348531==    by 0x4050AB: main (mandatory.cpp:36)
==348531== 
==348540== Invalid read of size 1
==348540==    at 0x40791F: f_del_front_bn (get_next_line_utils.c:224)
==348540==    by 0x407478: get_next_line (get_next_line.c:67)
==348540==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348540==    by 0x4052CB: main (mandatory.cpp:41)
==348540==  Address 0x4de59ea is 0 bytes after a block of size 42 alloc'd
==348540==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348540==    by 0x407615: ft_strjoin (get_next_line_utils.c:64)
==348540==    by 0x40744F: get_next_line (get_next_line.c:65)
==348540==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348540==    by 0x4052CB: main (mandatory.cpp:41)
==348540== 
==348540== Argument 'size' of function malloc has a fishy (possibly negative) value: -112
==348540==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348540==    by 0x40794D: f_del_front_bn (get_next_line_utils.c:230)
==348540==    by 0x407478: get_next_line (get_next_line.c:67)
==348540==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348540==    by 0x4052CB: main (mandatory.cpp:41)
==348540== 
==348540== Invalid read of size 1
==348540==    at 0x4073B5: get_next_line (get_next_line.c:47)
==348540==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348540==    by 0x4052D7: main (mandatory.cpp:41)
==348540==  Address 0x0 is not stack'd, malloc'd or (recently) free'd
==348540== 
==348540== 42 bytes in 1 blocks are definitely lost in loss record 1 of 2
==348540==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348540==    by 0x407615: ft_strjoin (get_next_line_utils.c:64)
==348540==    by 0x40744F: get_next_line (get_next_line.c:65)
==348540==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348540==    by 0x4052CB: main (mandatory.cpp:41)
==348540== 
==348543== Invalid write of size 1
==348543==    at 0x4073D6: get_next_line (get_next_line.c:50)
==348543==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348543==    by 0x405509: main (mandatory.cpp:46)
==348543==  Address 0x4de5e20 is 0 bytes inside a block of size 2 free'd
==348543==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348543==    by 0x407B84: ft_strdup2 (get_next_line_utils.c:329)
==348543==    by 0x4073CA: get_next_line (get_next_line.c:49)
==348543==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348543==    by 0x405509: main (mandatory.cpp:46)
==348543==  Block was alloc'd at
==348543==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348543==    by 0x40794D: f_del_front_bn (get_next_line_utils.c:230)
==348543==    by 0x407478: get_next_line (get_next_line.c:67)
==348543==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348543==    by 0x4054F7: main (mandatory.cpp:46)
==348543== 
==348543== Invalid read of size 1
==348543==    at 0x4073B5: get_next_line (get_next_line.c:47)
==348543==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348543==    by 0x405515: main (mandatory.cpp:46)
==348543==  Address 0x4de5e20 is 0 bytes inside a block of size 2 free'd
==348543==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348543==    by 0x407B84: ft_strdup2 (get_next_line_utils.c:329)
==348543==    by 0x4073CA: get_next_line (get_next_line.c:49)
==348543==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348543==    by 0x405509: main (mandatory.cpp:46)
==348543==  Block was alloc'd at
==348543==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348543==    by 0x40794D: f_del_front_bn (get_next_line_utils.c:230)
==348543==    by 0x407478: get_next_line (get_next_line.c:67)
==348543==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348543==    by 0x4054F7: main (mandatory.cpp:46)
==348543== 
==348543== 43 bytes in 1 blocks are definitely lost in loss record 1 of 2
==348543==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348543==    by 0x40733E: get_next_line (get_next_line.c:27)
==348543==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348543==    by 0x405509: main (mandatory.cpp:46)
==348543== 
==348543== 43 bytes in 1 blocks are definitely lost in loss record 2 of 2
==348543==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348543==    by 0x40733E: get_next_line (get_next_line.c:27)
==348543==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348543==    by 0x405515: main (mandatory.cpp:46)
==348543== 
==348546== Invalid write of size 1
==348546==    at 0x4073D6: get_next_line (get_next_line.c:50)
==348546==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348546==    by 0x405735: main (mandatory.cpp:52)
==348546==  Address 0x4de5fe0 is 0 bytes inside a block of size 43 free'd
==348546==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348546==    by 0x407B84: ft_strdup2 (get_next_line_utils.c:329)
==348546==    by 0x4073CA: get_next_line (get_next_line.c:49)
==348546==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348546==    by 0x405735: main (mandatory.cpp:52)
==348546==  Block was alloc'd at
==348546==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348546==    by 0x407615: ft_strjoin (get_next_line_utils.c:64)
==348546==    by 0x4074D1: get_next_line (get_next_line.c:79)
==348546==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348546==    by 0x405735: main (mandatory.cpp:52)
==348546== 
==348546== Invalid read of size 1
==348546==    at 0x4073B5: get_next_line (get_next_line.c:47)
==348546==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348546==    by 0x405741: main (mandatory.cpp:52)
==348546==  Address 0x4de5fe0 is 0 bytes inside a block of size 43 free'd
==348546==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348546==    by 0x407B84: ft_strdup2 (get_next_line_utils.c:329)
==348546==    by 0x4073CA: get_next_line (get_next_line.c:49)
==348546==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348546==    by 0x405735: main (mandatory.cpp:52)
==348546==  Block was alloc'd at
==348546==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348546==    by 0x407615: ft_strjoin (get_next_line_utils.c:64)
==348546==    by 0x4074D1: get_next_line (get_next_line.c:79)
==348546==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348546==    by 0x405735: main (mandatory.cpp:52)
==348546== 
==348546== 43 bytes in 1 blocks are definitely lost in loss record 1 of 2
==348546==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348546==    by 0x40733E: get_next_line (get_next_line.c:27)
==348546==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348546==    by 0x405735: main (mandatory.cpp:52)
==348546== 
==348546== 43 bytes in 1 blocks are definitely lost in loss record 2 of 2
==348546==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348546==    by 0x40733E: get_next_line (get_next_line.c:27)
==348546==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348546==    by 0x405741: main (mandatory.cpp:52)
==348546== 
==348547== 43 bytes in 1 blocks are definitely lost in loss record 2 of 3
==348547==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348547==    by 0x407615: ft_strjoin (get_next_line_utils.c:64)
==348547==    by 0x4074D1: get_next_line (get_next_line.c:79)
==348547==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348547==    by 0x405961: main (mandatory.cpp:57)
==348547== 
==348547== 43 bytes in 1 blocks are definitely lost in loss record 3 of 3
==348547==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348547==    by 0x40733E: get_next_line (get_next_line.c:27)
==348547==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348547==    by 0x4059B1: main (mandatory.cpp:57)
==348547== 
==348549== Invalid read of size 1
==348549==    at 0x40791F: f_del_front_bn (get_next_line_utils.c:224)
==348549==    by 0x407478: get_next_line (get_next_line.c:67)
==348549==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348549==    by 0x405BDB: main (mandatory.cpp:68)
==348549==  Address 0x4de669c is 0 bytes after a block of size 44 alloc'd
==348549==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348549==    by 0x407615: ft_strjoin (get_next_line_utils.c:64)
==348549==    by 0x40744F: get_next_line (get_next_line.c:65)
==348549==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348549==    by 0x405BDB: main (mandatory.cpp:68)
==348549== 
==348549== Argument 'size' of function malloc has a fishy (possibly negative) value: -112
==348549==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348549==    by 0x40794D: f_del_front_bn (get_next_line_utils.c:230)
==348549==    by 0x407478: get_next_line (get_next_line.c:67)
==348549==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348549==    by 0x405BDB: main (mandatory.cpp:68)
==348549== 
==348549== Invalid read of size 1
==348549==    at 0x4073B5: get_next_line (get_next_line.c:47)
==348549==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348549==    by 0x405BE7: main (mandatory.cpp:68)
==348549==  Address 0x0 is not stack'd, malloc'd or (recently) free'd
==348549== 
==348549== 44 bytes in 1 blocks are definitely lost in loss record 2 of 2
==348549==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348549==    by 0x407615: ft_strjoin (get_next_line_utils.c:64)
==348549==    by 0x40744F: get_next_line (get_next_line.c:65)
==348549==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348549==    by 0x405BDB: main (mandatory.cpp:68)
==348549== 
==348554== Invalid write of size 1
==348554==    at 0x4073D6: get_next_line (get_next_line.c:50)
==348554==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348554==    by 0x405E19: main (mandatory.cpp:73)
==348554==  Address 0x4de6a60 is 0 bytes inside a block of size 2 free'd
==348554==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348554==    by 0x407B84: ft_strdup2 (get_next_line_utils.c:329)
==348554==    by 0x4073CA: get_next_line (get_next_line.c:49)
==348554==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348554==    by 0x405E19: main (mandatory.cpp:73)
==348554==  Block was alloc'd at
==348554==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348554==    by 0x40794D: f_del_front_bn (get_next_line_utils.c:230)
==348554==    by 0x407478: get_next_line (get_next_line.c:67)
==348554==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348554==    by 0x405E07: main (mandatory.cpp:73)
==348554== 
==348554== Invalid read of size 1
==348554==    at 0x4073B5: get_next_line (get_next_line.c:47)
==348554==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348554==    by 0x405E25: main (mandatory.cpp:73)
==348554==  Address 0x4de6a60 is 0 bytes inside a block of size 2 free'd
==348554==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348554==    by 0x407B84: ft_strdup2 (get_next_line_utils.c:329)
==348554==    by 0x4073CA: get_next_line (get_next_line.c:49)
==348554==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348554==    by 0x405E19: main (mandatory.cpp:73)
==348554==  Block was alloc'd at
==348554==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348554==    by 0x40794D: f_del_front_bn (get_next_line_utils.c:230)
==348554==    by 0x407478: get_next_line (get_next_line.c:67)
==348554==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348554==    by 0x405E07: main (mandatory.cpp:73)
==348554== 
==348554== 43 bytes in 1 blocks are definitely lost in loss record 1 of 2
==348554==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348554==    by 0x40733E: get_next_line (get_next_line.c:27)
==348554==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348554==    by 0x405E19: main (mandatory.cpp:73)
==348554== 
==348554== 43 bytes in 1 blocks are definitely lost in loss record 2 of 2
==348554==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348554==    by 0x40733E: get_next_line (get_next_line.c:27)
==348554==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348554==    by 0x405E25: main (mandatory.cpp:73)
==348554== 
==348558== Invalid write of size 1
==348558==    at 0x4073D6: get_next_line (get_next_line.c:50)
==348558==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348558==    by 0x406057: main (mandatory.cpp:79)
==348558==  Address 0x4de6cc0 is 0 bytes inside a block of size 5 free'd
==348558==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348558==    by 0x407B84: ft_strdup2 (get_next_line_utils.c:329)
==348558==    by 0x4073CA: get_next_line (get_next_line.c:49)
==348558==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348558==    by 0x406057: main (mandatory.cpp:79)
==348558==  Block was alloc'd at
==348558==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348558==    by 0x40794D: f_del_front_bn (get_next_line_utils.c:230)
==348558==    by 0x407478: get_next_line (get_next_line.c:67)
==348558==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348558==    by 0x406045: main (mandatory.cpp:79)
==348558== 
==348558== Invalid read of size 1
==348558==    at 0x4073B5: get_next_line (get_next_line.c:47)
==348558==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348558==    by 0x406069: main (mandatory.cpp:79)
==348558==  Address 0x4de6cc0 is 0 bytes inside a block of size 5 free'd
==348558==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348558==    by 0x407B84: ft_strdup2 (get_next_line_utils.c:329)
==348558==    by 0x4073CA: get_next_line (get_next_line.c:49)
==348558==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348558==    by 0x406057: main (mandatory.cpp:79)
==348558==  Block was alloc'd at
==348558==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348558==    by 0x40794D: f_del_front_bn (get_next_line_utils.c:230)
==348558==    by 0x407478: get_next_line (get_next_line.c:67)
==348558==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348558==    by 0x406045: main (mandatory.cpp:79)
==348558== 
==348558== Invalid read of size 1
==348558==    at 0x484FBD4: strcmp (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348558==    by 0x402D1A: gnl(int, char const*) (gnl.cpp:24)
==348558==    by 0x406069: main (mandatory.cpp:79)
==348558==  Address 0x0 is not stack'd, malloc'd or (recently) free'd
==348558== 
==348558== 43 bytes in 1 blocks are definitely lost in loss record 1 of 2
==348558==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348558==    by 0x40733E: get_next_line (get_next_line.c:27)
==348558==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348558==    by 0x406057: main (mandatory.cpp:79)
==348558== 
==348558== 43 bytes in 1 blocks are definitely lost in loss record 2 of 2
==348558==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348558==    by 0x40733E: get_next_line (get_next_line.c:27)
==348558==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348558==    by 0x406069: main (mandatory.cpp:79)
==348558== 
==348561== Invalid read of size 1
==348561==    at 0x40791F: f_del_front_bn (get_next_line_utils.c:224)
==348561==    by 0x407478: get_next_line (get_next_line.c:67)
==348561==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348561==    by 0x406301: main (mandatory.cpp:88)
==348561==  Address 0x4de775a is 0 bytes after a block of size 42 alloc'd
==348561==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348561==    by 0x407615: ft_strjoin (get_next_line_utils.c:64)
==348561==    by 0x40744F: get_next_line (get_next_line.c:65)
==348561==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348561==    by 0x406301: main (mandatory.cpp:88)
==348561== 
==348561== Argument 'size' of function malloc has a fishy (possibly negative) value: -112
==348561==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348561==    by 0x40794D: f_del_front_bn (get_next_line_utils.c:230)
==348561==    by 0x407478: get_next_line (get_next_line.c:67)
==348561==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348561==    by 0x406301: main (mandatory.cpp:88)
==348561== 
==348561== Invalid read of size 1
==348561==    at 0x4073B5: get_next_line (get_next_line.c:47)
==348561==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348561==    by 0x40630D: main (mandatory.cpp:88)
==348561==  Address 0x0 is not stack'd, malloc'd or (recently) free'd
==348561== 
==348561== 42 bytes in 1 blocks are definitely lost in loss record 1 of 6
==348561==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348561==    by 0x407615: ft_strjoin (get_next_line_utils.c:64)
==348561==    by 0x40744F: get_next_line (get_next_line.c:65)
==348561==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348561==    by 0x406301: main (mandatory.cpp:88)
==348561== 
==348561== 43 bytes in 1 blocks are definitely lost in loss record 3 of 6
==348561==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348561==    by 0x407615: ft_strjoin (get_next_line_utils.c:64)
==348561==    by 0x4074D1: get_next_line (get_next_line.c:79)
==348561==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348561==    by 0x4062B9: main (mandatory.cpp:88)
==348561== 
==348561== 82 bytes in 1 blocks are definitely lost in loss record 4 of 6
==348561==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348561==    by 0x407615: ft_strjoin (get_next_line_utils.c:64)
==348561==    by 0x4074D1: get_next_line (get_next_line.c:79)
==348561==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348561==    by 0x4062EF: main (mandatory.cpp:88)
==348561== 
==348561== 84 bytes in 1 blocks are definitely lost in loss record 5 of 6
==348561==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348561==    by 0x407615: ft_strjoin (get_next_line_utils.c:64)
==348561==    by 0x4074D1: get_next_line (get_next_line.c:79)
==348561==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348561==    by 0x4062DD: main (mandatory.cpp:88)
==348561== 
==348561== 85 bytes in 1 blocks are definitely lost in loss record 6 of 6
==348561==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348561==    by 0x407615: ft_strjoin (get_next_line_utils.c:64)
==348561==    by 0x4074D1: get_next_line (get_next_line.c:79)
==348561==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348561==    by 0x4062CB: main (mandatory.cpp:88)
==348561== 
==348564== 43 bytes in 1 blocks are definitely lost in loss record 2 of 6
==348564==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348564==    by 0x407615: ft_strjoin (get_next_line_utils.c:64)
==348564==    by 0x4074D1: get_next_line (get_next_line.c:79)
==348564==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348564==    by 0x40652D: main (mandatory.cpp:97)
==348564== 
==348564== 43 bytes in 1 blocks are definitely lost in loss record 3 of 6
==348564==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348564==    by 0x407615: ft_strjoin (get_next_line_utils.c:64)
==348564==    by 0x4074D1: get_next_line (get_next_line.c:79)
==348564==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348564==    by 0x406563: main (mandatory.cpp:97)
==348564== 
==348564== 43 bytes in 1 blocks are definitely lost in loss record 4 of 6
==348564==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348564==    by 0x40733E: get_next_line (get_next_line.c:27)
==348564==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348564==    by 0x406581: main (mandatory.cpp:97)
==348564== 
==348564== 44 bytes in 1 blocks are definitely lost in loss record 5 of 6
==348564==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348564==    by 0x407615: ft_strjoin (get_next_line_utils.c:64)
==348564==    by 0x4074D1: get_next_line (get_next_line.c:79)
==348564==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348564==    by 0x40653F: main (mandatory.cpp:97)
==348564== 
==348564== 44 bytes in 1 blocks are definitely lost in loss record 6 of 6
==348564==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348564==    by 0x407615: ft_strjoin (get_next_line_utils.c:64)
==348564==    by 0x4074D1: get_next_line (get_next_line.c:79)
==348564==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348564==    by 0x406551: main (mandatory.cpp:97)
==348564== 
==348565== Invalid write of size 1
==348565==    at 0x4073D6: get_next_line (get_next_line.c:50)
==348565==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348565==    by 0x40680D: main (mandatory.cpp:106)
==348565==  Address 0x4de7f30 is 0 bytes inside a block of size 42 free'd
==348565==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348565==    by 0x407B84: ft_strdup2 (get_next_line_utils.c:329)
==348565==    by 0x4073CA: get_next_line (get_next_line.c:49)
==348565==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348565==    by 0x40680D: main (mandatory.cpp:106)
==348565==  Block was alloc'd at
==348565==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348565==    by 0x40794D: f_del_front_bn (get_next_line_utils.c:230)
==348565==    by 0x407478: get_next_line (get_next_line.c:67)
==348565==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348565==    by 0x4067FB: main (mandatory.cpp:106)
==348565== 
==348565== Invalid read of size 1
==348565==    at 0x4073B5: get_next_line (get_next_line.c:47)
==348565==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348565==    by 0x40681F: main (mandatory.cpp:106)
==348565==  Address 0x4de7f30 is 0 bytes inside a block of size 42 free'd
==348565==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348565==    by 0x407B84: ft_strdup2 (get_next_line_utils.c:329)
==348565==    by 0x4073CA: get_next_line (get_next_line.c:49)
==348565==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348565==    by 0x40680D: main (mandatory.cpp:106)
==348565==  Block was alloc'd at
==348565==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348565==    by 0x40794D: f_del_front_bn (get_next_line_utils.c:230)
==348565==    by 0x407478: get_next_line (get_next_line.c:67)
==348565==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348565==    by 0x4067FB: main (mandatory.cpp:106)
==348565== 
==348565== Invalid read of size 1
==348565==    at 0x484FBD4: strcmp (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348565==    by 0x402D1A: gnl(int, char const*) (gnl.cpp:24)
==348565==    by 0x40681F: main (mandatory.cpp:106)
==348565==  Address 0x0 is not stack'd, malloc'd or (recently) free'd
==348565== 
==348565== 43 bytes in 1 blocks are definitely lost in loss record 1 of 7
==348565==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348565==    by 0x407615: ft_strjoin (get_next_line_utils.c:64)
==348565==    by 0x4074D1: get_next_line (get_next_line.c:79)
==348565==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348565==    by 0x4067A1: main (mandatory.cpp:106)
==348565== 
==348565== 43 bytes in 1 blocks are definitely lost in loss record 2 of 7
==348565==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348565==    by 0x407615: ft_strjoin (get_next_line_utils.c:64)
==348565==    by 0x4074D1: get_next_line (get_next_line.c:79)
==348565==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348565==    by 0x4067B3: main (mandatory.cpp:106)
==348565== 
==348565== 43 bytes in 1 blocks are definitely lost in loss record 3 of 7
==348565==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348565==    by 0x40733E: get_next_line (get_next_line.c:27)
==348565==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348565==    by 0x40680D: main (mandatory.cpp:106)
==348565== 
==348565== 43 bytes in 1 blocks are definitely lost in loss record 4 of 7
==348565==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348565==    by 0x40733E: get_next_line (get_next_line.c:27)
==348565==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348565==    by 0x40681F: main (mandatory.cpp:106)
==348565== 
==348565== 80 bytes in 1 blocks are definitely lost in loss record 5 of 7
==348565==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348565==    by 0x407615: ft_strjoin (get_next_line_utils.c:64)
==348565==    by 0x4074D1: get_next_line (get_next_line.c:79)
==348565==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348565==    by 0x4067E9: main (mandatory.cpp:106)
==348565== 
==348565== 83 bytes in 1 blocks are definitely lost in loss record 6 of 7
==348565==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348565==    by 0x407615: ft_strjoin (get_next_line_utils.c:64)
==348565==    by 0x4074D1: get_next_line (get_next_line.c:79)
==348565==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348565==    by 0x4067D7: main (mandatory.cpp:106)
==348565== 
==348565== 84 bytes in 1 blocks are definitely lost in loss record 7 of 7
==348565==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348565==    by 0x407615: ft_strjoin (get_next_line_utils.c:64)
==348565==    by 0x4074D1: get_next_line (get_next_line.c:79)
==348565==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348565==    by 0x4067C5: main (mandatory.cpp:106)
==348565== 
==348570== Invalid write of size 1
==348570==    at 0x4073D6: get_next_line (get_next_line.c:50)
==348570==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348570==    by 0x406AC9: main (mandatory.cpp:119)
==348570==  Address 0x4de8260 is 0 bytes inside a block of size 43 free'd
==348570==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348570==    by 0x407B84: ft_strdup2 (get_next_line_utils.c:329)
==348570==    by 0x4073CA: get_next_line (get_next_line.c:49)
==348570==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348570==    by 0x406AC9: main (mandatory.cpp:119)
==348570==  Block was alloc'd at
==348570==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348570==    by 0x40794D: f_del_front_bn (get_next_line_utils.c:230)
==348570==    by 0x407478: get_next_line (get_next_line.c:67)
==348570==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348570==    by 0x406AB7: main (mandatory.cpp:119)
==348570== 
==348570== Invalid read of size 1
==348570==    at 0x4073B5: get_next_line (get_next_line.c:47)
==348570==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348570==    by 0x406ADB: main (mandatory.cpp:119)
==348570==  Address 0x4de8260 is 0 bytes inside a block of size 43 free'd
==348570==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348570==    by 0x407B84: ft_strdup2 (get_next_line_utils.c:329)
==348570==    by 0x4073CA: get_next_line (get_next_line.c:49)
==348570==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348570==    by 0x406AC9: main (mandatory.cpp:119)
==348570==  Block was alloc'd at
==348570==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348570==    by 0x40794D: f_del_front_bn (get_next_line_utils.c:230)
==348570==    by 0x407478: get_next_line (get_next_line.c:67)
==348570==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348570==    by 0x406AB7: main (mandatory.cpp:119)
==348570== 
==348570== Invalid read of size 1
==348570==    at 0x484FBD4: strcmp (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348570==    by 0x402D1A: gnl(int, char const*) (gnl.cpp:24)
==348570==    by 0x406ADB: main (mandatory.cpp:119)
==348570==  Address 0x0 is not stack'd, malloc'd or (recently) free'd
==348570== 
==348570== 43 bytes in 1 blocks are definitely lost in loss record 1 of 7
==348570==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348570==    by 0x407615: ft_strjoin (get_next_line_utils.c:64)
==348570==    by 0x4074D1: get_next_line (get_next_line.c:79)
==348570==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348570==    by 0x406A5D: main (mandatory.cpp:119)
==348570== 
==348570== 43 bytes in 1 blocks are definitely lost in loss record 2 of 7
==348570==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348570==    by 0x407615: ft_strjoin (get_next_line_utils.c:64)
==348570==    by 0x4074D1: get_next_line (get_next_line.c:79)
==348570==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348570==    by 0x406A6F: main (mandatory.cpp:119)
==348570== 
==348570== 43 bytes in 1 blocks are definitely lost in loss record 3 of 7
==348570==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348570==    by 0x40733E: get_next_line (get_next_line.c:27)
==348570==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348570==    by 0x406AC9: main (mandatory.cpp:119)
==348570== 
==348570== 43 bytes in 1 blocks are definitely lost in loss record 4 of 7
==348570==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348570==    by 0x40733E: get_next_line (get_next_line.c:27)
==348570==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348570==    by 0x406ADB: main (mandatory.cpp:119)
==348570== 
==348570== 80 bytes in 1 blocks are definitely lost in loss record 5 of 7
==348570==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348570==    by 0x407615: ft_strjoin (get_next_line_utils.c:64)
==348570==    by 0x4074D1: get_next_line (get_next_line.c:79)
==348570==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348570==    by 0x406AA5: main (mandatory.cpp:119)
==348570== 
==348570== 83 bytes in 1 blocks are definitely lost in loss record 6 of 7
==348570==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348570==    by 0x407615: ft_strjoin (get_next_line_utils.c:64)
==348570==    by 0x4074D1: get_next_line (get_next_line.c:79)
==348570==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348570==    by 0x406A93: main (mandatory.cpp:119)
==348570== 
==348570== 84 bytes in 1 blocks are definitely lost in loss record 7 of 7
==348570==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348570==    by 0x407615: ft_strjoin (get_next_line_utils.c:64)
==348570==    by 0x4074D1: get_next_line (get_next_line.c:79)
==348570==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348570==    by 0x406A81: main (mandatory.cpp:119)
==348570== 
==348572== Invalid read of size 1
==348572==    at 0x40791F: f_del_front_bn (get_next_line_utils.c:224)
==348572==    by 0x407478: get_next_line (get_next_line.c:67)
==348572==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348572==    by 0x406D19: main (mandatory.cpp:132)
==348572==  Address 0x4f120f1 is 0 bytes after a block of size 10,001 alloc'd
==348572==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348572==    by 0x407615: ft_strjoin (get_next_line_utils.c:64)
==348572==    by 0x40744F: get_next_line (get_next_line.c:65)
==348572==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348572==    by 0x406D19: main (mandatory.cpp:132)
==348572== 
==348572== Argument 'size' of function malloc has a fishy (possibly negative) value: -10080
==348572==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348572==    by 0x40794D: f_del_front_bn (get_next_line_utils.c:230)
==348572==    by 0x407478: get_next_line (get_next_line.c:67)
==348572==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348572==    by 0x406D19: main (mandatory.cpp:132)
==348572== 
==348572== Invalid read of size 1
==348572==    at 0x4073B5: get_next_line (get_next_line.c:47)
==348572==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348572==    by 0x406D25: main (mandatory.cpp:132)
==348572==  Address 0x0 is not stack'd, malloc'd or (recently) free'd
==348572== 
==348572== 10,001 bytes in 1 blocks are definitely lost in loss record 2 of 2
==348572==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348572==    by 0x407615: ft_strjoin (get_next_line_utils.c:64)
==348572==    by 0x40744F: get_next_line (get_next_line.c:65)
==348572==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348572==    by 0x406D19: main (mandatory.cpp:132)
==348572== 
==348575== 43 bytes in 1 blocks are definitely lost in loss record 2 of 2
==348575==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348575==    by 0x40733E: get_next_line (get_next_line.c:27)
==348575==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348575==    by 0x406F51: main (mandatory.cpp:136)
==348575== 
==348576== Invalid write of size 1
==348576==    at 0x4073D6: get_next_line (get_next_line.c:50)
==348576==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348576==    by 0x4071D6: main (mandatory.cpp:141)
==348576==  Address 0x4de8880 is 0 bytes inside a block of size 43 free'd
==348576==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348576==    by 0x407B84: ft_strdup2 (get_next_line_utils.c:329)
==348576==    by 0x4073CA: get_next_line (get_next_line.c:49)
==348576==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348576==    by 0x4071D6: main (mandatory.cpp:141)
==348576==  Block was alloc'd at
==348576==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348576==    by 0x40794D: f_del_front_bn (get_next_line_utils.c:230)
==348576==    by 0x407478: get_next_line (get_next_line.c:67)
==348576==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348576==    by 0x4071C5: main (mandatory.cpp:141)
==348576== 
==348576== Invalid read of size 1
==348576==    at 0x4073B5: get_next_line (get_next_line.c:47)
==348576==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348576==    by 0x4071E7: main (mandatory.cpp:141)
==348576==  Address 0x4de8880 is 0 bytes inside a block of size 43 free'd
==348576==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348576==    by 0x407B84: ft_strdup2 (get_next_line_utils.c:329)
==348576==    by 0x4073CA: get_next_line (get_next_line.c:49)
==348576==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348576==    by 0x4071D6: main (mandatory.cpp:141)
==348576==  Block was alloc'd at
==348576==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348576==    by 0x40794D: f_del_front_bn (get_next_line_utils.c:230)
==348576==    by 0x407478: get_next_line (get_next_line.c:67)
==348576==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348576==    by 0x4071C5: main (mandatory.cpp:141)
==348576== 
==348576== Invalid read of size 1
==348576==    at 0x484FBD4: strcmp (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348576==    by 0x402D1A: gnl(int, char const*) (gnl.cpp:24)
==348576==    by 0x4071E7: main (mandatory.cpp:141)
==348576==  Address 0x0 is not stack'd, malloc'd or (recently) free'd
==348576== 
==348576== 43 bytes in 1 blocks are definitely lost in loss record 1 of 7
==348576==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348576==    by 0x407615: ft_strjoin (get_next_line_utils.c:64)
==348576==    by 0x4074D1: get_next_line (get_next_line.c:79)
==348576==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348576==    by 0x407170: main (mandatory.cpp:141)
==348576== 
==348576== 43 bytes in 1 blocks are definitely lost in loss record 2 of 7
==348576==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348576==    by 0x407615: ft_strjoin (get_next_line_utils.c:64)
==348576==    by 0x4074D1: get_next_line (get_next_line.c:79)
==348576==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348576==    by 0x407181: main (mandatory.cpp:141)
==348576== 
==348576== 43 bytes in 1 blocks are definitely lost in loss record 3 of 7
==348576==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348576==    by 0x40733E: get_next_line (get_next_line.c:27)
==348576==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348576==    by 0x4071D6: main (mandatory.cpp:141)
==348576== 
==348576== 43 bytes in 1 blocks are definitely lost in loss record 4 of 7
==348576==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348576==    by 0x40733E: get_next_line (get_next_line.c:27)
==348576==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348576==    by 0x4071E7: main (mandatory.cpp:141)
==348576== 
==348576== 80 bytes in 1 blocks are definitely lost in loss record 5 of 7
==348576==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348576==    by 0x407615: ft_strjoin (get_next_line_utils.c:64)
==348576==    by 0x4074D1: get_next_line (get_next_line.c:79)
==348576==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348576==    by 0x4071B4: main (mandatory.cpp:141)
==348576== 
==348576== 83 bytes in 1 blocks are definitely lost in loss record 6 of 7
==348576==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348576==    by 0x407615: ft_strjoin (get_next_line_utils.c:64)
==348576==    by 0x4074D1: get_next_line (get_next_line.c:79)
==348576==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348576==    by 0x4071A3: main (mandatory.cpp:141)
==348576== 
==348576== 84 bytes in 1 blocks are definitely lost in loss record 7 of 7
==348576==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348576==    by 0x407615: ft_strjoin (get_next_line_utils.c:64)
==348576==    by 0x4074D1: get_next_line (get_next_line.c:79)
==348576==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348576==    by 0x407192: main (mandatory.cpp:141)
==348576== 
==348604== Invalid write of size 1
==348604==    at 0x40735C: get_next_line (get_next_line.c:39)
==348604==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348604==    by 0x404BD6: main (mandatory.cpp:25)
==348604==  Address 0x51d203f is 1 bytes before a block of size 10,000,001 alloc'd
==348604==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348604==    by 0x40730C: get_next_line (get_next_line.c:27)
==348604==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348604==    by 0x404BD6: main (mandatory.cpp:25)
==348604== 
==348605== Invalid read of size 1
==348605==    at 0x407383: get_next_line (get_next_line.c:47)
==348605==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348605==    by 0x404E73: main (mandatory.cpp:31)
==348605==  Address 0x0 is not stack'd, malloc'd or (recently) free'd
==348605== 
==348610== 10,000,001 bytes in 1 blocks are definitely lost in loss record 2 of 2
==348610==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348610==    by 0x40730C: get_next_line (get_next_line.c:27)
==348610==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348610==    by 0x4050AB: main (mandatory.cpp:36)
==348610== 
==348616== Invalid read of size 1
==348616==    at 0x4078F0: f_del_front_bn (get_next_line_utils.c:224)
==348616==    by 0x407449: get_next_line (get_next_line.c:67)
==348616==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348616==    by 0x4052CB: main (mandatory.cpp:41)
==348616==  Address 0x4de599a is 0 bytes after a block of size 42 alloc'd
==348616==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348616==    by 0x4075E6: ft_strjoin (get_next_line_utils.c:64)
==348616==    by 0x407420: get_next_line (get_next_line.c:65)
==348616==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348616==    by 0x4052CB: main (mandatory.cpp:41)
==348616== 
==348616== Argument 'size' of function malloc has a fishy (possibly negative) value: -112
==348616==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348616==    by 0x40791E: f_del_front_bn (get_next_line_utils.c:230)
==348616==    by 0x407449: get_next_line (get_next_line.c:67)
==348616==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348616==    by 0x4052CB: main (mandatory.cpp:41)
==348616== 
==348616== Invalid read of size 1
==348616==    at 0x407383: get_next_line (get_next_line.c:47)
==348616==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348616==    by 0x4052D7: main (mandatory.cpp:41)
==348616==  Address 0x0 is not stack'd, malloc'd or (recently) free'd
==348616== 
==348616== 42 bytes in 1 blocks are definitely lost in loss record 1 of 2
==348616==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348616==    by 0x4075E6: ft_strjoin (get_next_line_utils.c:64)
==348616==    by 0x407420: get_next_line (get_next_line.c:65)
==348616==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348616==    by 0x4052CB: main (mandatory.cpp:41)
==348616== 
==348619== Invalid write of size 1
==348619==    at 0x4073A4: get_next_line (get_next_line.c:50)
==348619==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348619==    by 0x405509: main (mandatory.cpp:46)
==348619==  Address 0x4de5d60 is 0 bytes inside a block of size 2 free'd
==348619==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348619==    by 0x407B55: ft_strdup2 (get_next_line_utils.c:329)
==348619==    by 0x407398: get_next_line (get_next_line.c:49)
==348619==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348619==    by 0x405509: main (mandatory.cpp:46)
==348619==  Block was alloc'd at
==348619==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348619==    by 0x40791E: f_del_front_bn (get_next_line_utils.c:230)
==348619==    by 0x407449: get_next_line (get_next_line.c:67)
==348619==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348619==    by 0x4054F7: main (mandatory.cpp:46)
==348619== 
==348619== Invalid read of size 1
==348619==    at 0x407383: get_next_line (get_next_line.c:47)
==348619==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348619==    by 0x405515: main (mandatory.cpp:46)
==348619==  Address 0x4de5d60 is 0 bytes inside a block of size 2 free'd
==348619==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348619==    by 0x407B55: ft_strdup2 (get_next_line_utils.c:329)
==348619==    by 0x407398: get_next_line (get_next_line.c:49)
==348619==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348619==    by 0x405509: main (mandatory.cpp:46)
==348619==  Block was alloc'd at
==348619==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348619==    by 0x40791E: f_del_front_bn (get_next_line_utils.c:230)
==348619==    by 0x407449: get_next_line (get_next_line.c:67)
==348619==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348619==    by 0x4054F7: main (mandatory.cpp:46)
==348619== 
==348619== 10,000,001 bytes in 1 blocks are possibly lost in loss record 1 of 2
==348619==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348619==    by 0x40730C: get_next_line (get_next_line.c:27)
==348619==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348619==    by 0x405515: main (mandatory.cpp:46)
==348619== 
==348619== 10,000,001 bytes in 1 blocks are definitely lost in loss record 2 of 2
==348619==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348619==    by 0x40730C: get_next_line (get_next_line.c:27)
==348619==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348619==    by 0x405509: main (mandatory.cpp:46)
==348619== 
==348620== Invalid read of size 1
==348620==    at 0x4078F0: f_del_front_bn (get_next_line_utils.c:224)
==348620==    by 0x407449: get_next_line (get_next_line.c:67)
==348620==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348620==    by 0x405735: main (mandatory.cpp:52)
==348620==  Address 0x4de5fbb is 0 bytes after a block of size 43 alloc'd
==348620==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348620==    by 0x4075E6: ft_strjoin (get_next_line_utils.c:64)
==348620==    by 0x407420: get_next_line (get_next_line.c:65)
==348620==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348620==    by 0x405735: main (mandatory.cpp:52)
==348620== 
==348620== Argument 'size' of function malloc has a fishy (possibly negative) value: -112
==348620==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348620==    by 0x40791E: f_del_front_bn (get_next_line_utils.c:230)
==348620==    by 0x407449: get_next_line (get_next_line.c:67)
==348620==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348620==    by 0x405735: main (mandatory.cpp:52)
==348620== 
==348620== Invalid read of size 1
==348620==    at 0x407383: get_next_line (get_next_line.c:47)
==348620==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348620==    by 0x405741: main (mandatory.cpp:52)
==348620==  Address 0x0 is not stack'd, malloc'd or (recently) free'd
==348620== 
==348620== 43 bytes in 1 blocks are definitely lost in loss record 1 of 2
==348620==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348620==    by 0x4075E6: ft_strjoin (get_next_line_utils.c:64)
==348620==    by 0x407420: get_next_line (get_next_line.c:65)
==348620==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348620==    by 0x405735: main (mandatory.cpp:52)
==348620== 
==348622== Invalid write of size 1
==348622==    at 0x4073A4: get_next_line (get_next_line.c:50)
==348622==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348622==    by 0x405973: main (mandatory.cpp:57)
==348622==  Address 0x4de6380 is 0 bytes inside a block of size 2 free'd
==348622==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348622==    by 0x407B55: ft_strdup2 (get_next_line_utils.c:329)
==348622==    by 0x407398: get_next_line (get_next_line.c:49)
==348622==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348622==    by 0x405973: main (mandatory.cpp:57)
==348622==  Block was alloc'd at
==348622==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348622==    by 0x40791E: f_del_front_bn (get_next_line_utils.c:230)
==348622==    by 0x407449: get_next_line (get_next_line.c:67)
==348622==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348622==    by 0x405961: main (mandatory.cpp:57)
==348622== 
==348622== Invalid read of size 1
==348622==    at 0x407383: get_next_line (get_next_line.c:47)
==348622==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348622==    by 0x40597F: main (mandatory.cpp:57)
==348622==  Address 0x4de6380 is 0 bytes inside a block of size 2 free'd
==348622==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348622==    by 0x407B55: ft_strdup2 (get_next_line_utils.c:329)
==348622==    by 0x407398: get_next_line (get_next_line.c:49)
==348622==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348622==    by 0x405973: main (mandatory.cpp:57)
==348622==  Block was alloc'd at
==348622==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348622==    by 0x40791E: f_del_front_bn (get_next_line_utils.c:230)
==348622==    by 0x407449: get_next_line (get_next_line.c:67)
==348622==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348622==    by 0x405961: main (mandatory.cpp:57)
==348622== 
==348622== 10,000,001 bytes in 1 blocks are possibly lost in loss record 1 of 2
==348622==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348622==    by 0x40730C: get_next_line (get_next_line.c:27)
==348622==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348622==    by 0x40597F: main (mandatory.cpp:57)
==348622== 
==348622== 10,000,001 bytes in 1 blocks are definitely lost in loss record 2 of 2
==348622==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348622==    by 0x40730C: get_next_line (get_next_line.c:27)
==348622==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348622==    by 0x405973: main (mandatory.cpp:57)
==348622== 
==348627== Invalid read of size 1
==348627==    at 0x4078F0: f_del_front_bn (get_next_line_utils.c:224)
==348627==    by 0x407449: get_next_line (get_next_line.c:67)
==348627==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348627==    by 0x405BA9: main (mandatory.cpp:68)
==348627==  Address 0x4de65dc is 0 bytes after a block of size 44 alloc'd
==348627==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348627==    by 0x4075E6: ft_strjoin (get_next_line_utils.c:64)
==348627==    by 0x407420: get_next_line (get_next_line.c:65)
==348627==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348627==    by 0x405BA9: main (mandatory.cpp:68)
==348627== 
==348627== Argument 'size' of function malloc has a fishy (possibly negative) value: -112
==348627==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348627==    by 0x40791E: f_del_front_bn (get_next_line_utils.c:230)
==348627==    by 0x407449: get_next_line (get_next_line.c:67)
==348627==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348627==    by 0x405BA9: main (mandatory.cpp:68)
==348627== 
==348627== Invalid read of size 1
==348627==    at 0x407383: get_next_line (get_next_line.c:47)
==348627==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348627==    by 0x405BB5: main (mandatory.cpp:68)
==348627==  Address 0x0 is not stack'd, malloc'd or (recently) free'd
==348627== 
==348627== 44 bytes in 1 blocks are definitely lost in loss record 1 of 2
==348627==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348627==    by 0x4075E6: ft_strjoin (get_next_line_utils.c:64)
==348627==    by 0x407420: get_next_line (get_next_line.c:65)
==348627==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348627==    by 0x405BA9: main (mandatory.cpp:68)
==348627== 
==348629== Invalid write of size 1
==348629==    at 0x4073A4: get_next_line (get_next_line.c:50)
==348629==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348629==    by 0x405DE7: main (mandatory.cpp:73)
==348629==  Address 0x4de69a0 is 0 bytes inside a block of size 2 free'd
==348629==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348629==    by 0x407B55: ft_strdup2 (get_next_line_utils.c:329)
==348629==    by 0x407398: get_next_line (get_next_line.c:49)
==348629==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348629==    by 0x405DE7: main (mandatory.cpp:73)
==348629==  Block was alloc'd at
==348629==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348629==    by 0x40791E: f_del_front_bn (get_next_line_utils.c:230)
==348629==    by 0x407449: get_next_line (get_next_line.c:67)
==348629==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348629==    by 0x405DD5: main (mandatory.cpp:73)
==348629== 
==348629== Invalid read of size 1
==348629==    at 0x407383: get_next_line (get_next_line.c:47)
==348629==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348629==    by 0x405DF3: main (mandatory.cpp:73)
==348629==  Address 0x4de69a0 is 0 bytes inside a block of size 2 free'd
==348629==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348629==    by 0x407B55: ft_strdup2 (get_next_line_utils.c:329)
==348629==    by 0x407398: get_next_line (get_next_line.c:49)
==348629==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348629==    by 0x405DE7: main (mandatory.cpp:73)
==348629==  Block was alloc'd at
==348629==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348629==    by 0x40791E: f_del_front_bn (get_next_line_utils.c:230)
==348629==    by 0x407449: get_next_line (get_next_line.c:67)
==348629==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348629==    by 0x405DD5: main (mandatory.cpp:73)
==348629== 
==348629== 10,000,001 bytes in 1 blocks are possibly lost in loss record 1 of 2
==348629==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348629==    by 0x40730C: get_next_line (get_next_line.c:27)
==348629==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348629==    by 0x405DF3: main (mandatory.cpp:73)
==348629== 
==348629== 10,000,001 bytes in 1 blocks are definitely lost in loss record 2 of 2
==348629==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348629==    by 0x40730C: get_next_line (get_next_line.c:27)
==348629==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348629==    by 0x405DE7: main (mandatory.cpp:73)
==348629== 
==348632== Invalid write of size 1
==348632==    at 0x4073A4: get_next_line (get_next_line.c:50)
==348632==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348632==    by 0x406025: main (mandatory.cpp:79)
==348632==  Address 0x4de6c70 is 0 bytes inside a block of size 5 free'd
==348632==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348632==    by 0x407B55: ft_strdup2 (get_next_line_utils.c:329)
==348632==    by 0x407398: get_next_line (get_next_line.c:49)
==348632==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348632==    by 0x406025: main (mandatory.cpp:79)
==348632==  Block was alloc'd at
==348632==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348632==    by 0x40791E: f_del_front_bn (get_next_line_utils.c:230)
==348632==    by 0x407449: get_next_line (get_next_line.c:67)
==348632==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348632==    by 0x406013: main (mandatory.cpp:79)
==348632== 
==348632== Invalid read of size 1
==348632==    at 0x407383: get_next_line (get_next_line.c:47)
==348632==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348632==    by 0x406037: main (mandatory.cpp:79)
==348632==  Address 0x4de6c70 is 0 bytes inside a block of size 5 free'd
==348632==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348632==    by 0x407B55: ft_strdup2 (get_next_line_utils.c:329)
==348632==    by 0x407398: get_next_line (get_next_line.c:49)
==348632==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348632==    by 0x406025: main (mandatory.cpp:79)
==348632==  Block was alloc'd at
==348632==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348632==    by 0x40791E: f_del_front_bn (get_next_line_utils.c:230)
==348632==    by 0x407449: get_next_line (get_next_line.c:67)
==348632==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348632==    by 0x406013: main (mandatory.cpp:79)
==348632== 
==348632== Invalid read of size 1
==348632==    at 0x484FBD4: strcmp (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348632==    by 0x402D1A: gnl(int, char const*) (gnl.cpp:24)
==348632==    by 0x406037: main (mandatory.cpp:79)
==348632==  Address 0x0 is not stack'd, malloc'd or (recently) free'd
==348632== 
==348632== 10,000,001 bytes in 1 blocks are possibly lost in loss record 1 of 2
==348632==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348632==    by 0x40730C: get_next_line (get_next_line.c:27)
==348632==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348632==    by 0x406037: main (mandatory.cpp:79)
==348632== 
==348632== 10,000,001 bytes in 1 blocks are definitely lost in loss record 2 of 2
==348632==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348632==    by 0x40730C: get_next_line (get_next_line.c:27)
==348632==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348632==    by 0x406025: main (mandatory.cpp:79)
==348632== 
==348633== Invalid write of size 1
==348633==    at 0x4073A4: get_next_line (get_next_line.c:50)
==348633==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348633==    by 0x406299: main (mandatory.cpp:88)
==348633==  Address 0x4de7090 is 0 bytes inside a block of size 172 free'd
==348633==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348633==    by 0x407B55: ft_strdup2 (get_next_line_utils.c:329)
==348633==    by 0x407398: get_next_line (get_next_line.c:49)
==348633==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348633==    by 0x406299: main (mandatory.cpp:88)
==348633==  Block was alloc'd at
==348633==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348633==    by 0x40791E: f_del_front_bn (get_next_line_utils.c:230)
==348633==    by 0x407449: get_next_line (get_next_line.c:67)
==348633==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348633==    by 0x406287: main (mandatory.cpp:88)
==348633== 
==348633== Invalid read of size 1
==348633==    at 0x407383: get_next_line (get_next_line.c:47)
==348633==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348633==    by 0x4062AB: main (mandatory.cpp:88)
==348633==  Address 0x4de7090 is 0 bytes inside a block of size 172 free'd
==348633==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348633==    by 0x407B55: ft_strdup2 (get_next_line_utils.c:329)
==348633==    by 0x407398: get_next_line (get_next_line.c:49)
==348633==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348633==    by 0x406299: main (mandatory.cpp:88)
==348633==  Block was alloc'd at
==348633==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348633==    by 0x40791E: f_del_front_bn (get_next_line_utils.c:230)
==348633==    by 0x407449: get_next_line (get_next_line.c:67)
==348633==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348633==    by 0x406287: main (mandatory.cpp:88)
==348633== 
==348633== Invalid read of size 1
==348633==    at 0x484FBD4: strcmp (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348633==    by 0x402D1A: gnl(int, char const*) (gnl.cpp:24)
==348633==    by 0x4062AB: main (mandatory.cpp:88)
==348633==  Address 0x0 is not stack'd, malloc'd or (recently) free'd
==348633== 
==348633== 10,000,001 bytes in 1 blocks are possibly lost in loss record 1 of 2
==348633==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348633==    by 0x40730C: get_next_line (get_next_line.c:27)
==348633==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348633==    by 0x4062AB: main (mandatory.cpp:88)
==348633== 
==348633== 10,000,001 bytes in 1 blocks are definitely lost in loss record 2 of 2
==348633==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348633==    by 0x40730C: get_next_line (get_next_line.c:27)
==348633==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348633==    by 0x406299: main (mandatory.cpp:88)
==348633== 
==348634== Invalid write of size 1
==348634==    at 0x4073A4: get_next_line (get_next_line.c:50)
==348634==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348634==    by 0x40650D: main (mandatory.cpp:97)
==348634==  Address 0x4de73c0 is 0 bytes inside a block of size 169 free'd
==348634==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348634==    by 0x407B55: ft_strdup2 (get_next_line_utils.c:329)
==348634==    by 0x407398: get_next_line (get_next_line.c:49)
==348634==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348634==    by 0x40650D: main (mandatory.cpp:97)
==348634==  Block was alloc'd at
==348634==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348634==    by 0x40791E: f_del_front_bn (get_next_line_utils.c:230)
==348634==    by 0x407449: get_next_line (get_next_line.c:67)
==348634==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348634==    by 0x4064FB: main (mandatory.cpp:97)
==348634== 
==348634== Invalid read of size 1
==348634==    at 0x407383: get_next_line (get_next_line.c:47)
==348634==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348634==    by 0x40651F: main (mandatory.cpp:97)
==348634==  Address 0x4de73c0 is 0 bytes inside a block of size 169 free'd
==348634==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348634==    by 0x407B55: ft_strdup2 (get_next_line_utils.c:329)
==348634==    by 0x407398: get_next_line (get_next_line.c:49)
==348634==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348634==    by 0x40650D: main (mandatory.cpp:97)
==348634==  Block was alloc'd at
==348634==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348634==    by 0x40791E: f_del_front_bn (get_next_line_utils.c:230)
==348634==    by 0x407449: get_next_line (get_next_line.c:67)
==348634==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348634==    by 0x4064FB: main (mandatory.cpp:97)
==348634== 
==348634== Invalid read of size 1
==348634==    at 0x484FBD4: strcmp (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348634==    by 0x402D1A: gnl(int, char const*) (gnl.cpp:24)
==348634==    by 0x40651F: main (mandatory.cpp:97)
==348634==  Address 0x0 is not stack'd, malloc'd or (recently) free'd
==348634== 
==348634== 10,000,001 bytes in 1 blocks are possibly lost in loss record 1 of 2
==348634==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348634==    by 0x40730C: get_next_line (get_next_line.c:27)
==348634==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348634==    by 0x40651F: main (mandatory.cpp:97)
==348634== 
==348634== 10,000,001 bytes in 1 blocks are definitely lost in loss record 2 of 2
==348634==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348634==    by 0x40730C: get_next_line (get_next_line.c:27)
==348634==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348634==    by 0x40650D: main (mandatory.cpp:97)
==348634== 
==348674== Invalid write of size 1
==348674==    at 0x4073A4: get_next_line (get_next_line.c:50)
==348674==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348674==    by 0x406781: main (mandatory.cpp:106)
==348674==  Address 0x4de76f0 is 0 bytes inside a block of size 176 free'd
==348674==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348674==    by 0x407B55: ft_strdup2 (get_next_line_utils.c:329)
==348674==    by 0x407398: get_next_line (get_next_line.c:49)
==348674==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348674==    by 0x406781: main (mandatory.cpp:106)
==348674==  Block was alloc'd at
==348674==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348674==    by 0x40791E: f_del_front_bn (get_next_line_utils.c:230)
==348674==    by 0x407449: get_next_line (get_next_line.c:67)
==348674==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348674==    by 0x40676F: main (mandatory.cpp:106)
==348674== 
==348674== Invalid read of size 1
==348674==    at 0x407383: get_next_line (get_next_line.c:47)
==348674==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348674==    by 0x406793: main (mandatory.cpp:106)
==348674==  Address 0x4de76f0 is 0 bytes inside a block of size 176 free'd
==348674==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348674==    by 0x407B55: ft_strdup2 (get_next_line_utils.c:329)
==348674==    by 0x407398: get_next_line (get_next_line.c:49)
==348674==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348674==    by 0x406781: main (mandatory.cpp:106)
==348674==  Block was alloc'd at
==348674==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348674==    by 0x40791E: f_del_front_bn (get_next_line_utils.c:230)
==348674==    by 0x407449: get_next_line (get_next_line.c:67)
==348674==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348674==    by 0x40676F: main (mandatory.cpp:106)
==348674== 
==348674== Invalid read of size 1
==348674==    at 0x484FBD4: strcmp (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348674==    by 0x402D1A: gnl(int, char const*) (gnl.cpp:24)
==348674==    by 0x406793: main (mandatory.cpp:106)
==348674==  Address 0x0 is not stack'd, malloc'd or (recently) free'd
==348674== 
==348674== 10,000,001 bytes in 1 blocks are possibly lost in loss record 1 of 2
==348674==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348674==    by 0x40730C: get_next_line (get_next_line.c:27)
==348674==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348674==    by 0x406793: main (mandatory.cpp:106)
==348674== 
==348674== 10,000,001 bytes in 1 blocks are definitely lost in loss record 2 of 2
==348674==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348674==    by 0x40730C: get_next_line (get_next_line.c:27)
==348674==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348674==    by 0x406781: main (mandatory.cpp:106)
==348674== 
==348676== Invalid write of size 1
==348676==    at 0x4073A4: get_next_line (get_next_line.c:50)
==348676==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348676==    by 0x406A3D: main (mandatory.cpp:119)
==348676==  Address 0x4de7a20 is 0 bytes inside a block of size 177 free'd
==348676==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348676==    by 0x407B55: ft_strdup2 (get_next_line_utils.c:329)
==348676==    by 0x407398: get_next_line (get_next_line.c:49)
==348676==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348676==    by 0x406A3D: main (mandatory.cpp:119)
==348676==  Block was alloc'd at
==348676==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348676==    by 0x40791E: f_del_front_bn (get_next_line_utils.c:230)
==348676==    by 0x407449: get_next_line (get_next_line.c:67)
==348676==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348676==    by 0x406A2B: main (mandatory.cpp:119)
==348676== 
==348676== Invalid read of size 1
==348676==    at 0x407383: get_next_line (get_next_line.c:47)
==348676==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348676==    by 0x406A4F: main (mandatory.cpp:119)
==348676==  Address 0x4de7a20 is 0 bytes inside a block of size 177 free'd
==348676==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348676==    by 0x407B55: ft_strdup2 (get_next_line_utils.c:329)
==348676==    by 0x407398: get_next_line (get_next_line.c:49)
==348676==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348676==    by 0x406A3D: main (mandatory.cpp:119)
==348676==  Block was alloc'd at
==348676==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348676==    by 0x40791E: f_del_front_bn (get_next_line_utils.c:230)
==348676==    by 0x407449: get_next_line (get_next_line.c:67)
==348676==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348676==    by 0x406A2B: main (mandatory.cpp:119)
==348676== 
==348676== Invalid read of size 1
==348676==    at 0x484FBD4: strcmp (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348676==    by 0x402D1A: gnl(int, char const*) (gnl.cpp:24)
==348676==    by 0x406A4F: main (mandatory.cpp:119)
==348676==  Address 0x0 is not stack'd, malloc'd or (recently) free'd
==348676== 
==348676== 10,000,001 bytes in 1 blocks are possibly lost in loss record 1 of 2
==348676==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348676==    by 0x40730C: get_next_line (get_next_line.c:27)
==348676==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348676==    by 0x406A4F: main (mandatory.cpp:119)
==348676== 
==348676== 10,000,001 bytes in 1 blocks are definitely lost in loss record 2 of 2
==348676==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348676==    by 0x40730C: get_next_line (get_next_line.c:27)
==348676==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348676==    by 0x406A3D: main (mandatory.cpp:119)
==348676== 
==348679== Invalid read of size 1
==348679==    at 0x4078F0: f_del_front_bn (get_next_line_utils.c:224)
==348679==    by 0x407449: get_next_line (get_next_line.c:67)
==348679==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348679==    by 0x406CE7: main (mandatory.cpp:132)
==348679==  Address 0x4dea2b1 is 0 bytes after a block of size 10,001 alloc'd
==348679==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348679==    by 0x4075E6: ft_strjoin (get_next_line_utils.c:64)
==348679==    by 0x407420: get_next_line (get_next_line.c:65)
==348679==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348679==    by 0x406CE7: main (mandatory.cpp:132)
==348679== 
==348679== Argument 'size' of function malloc has a fishy (possibly negative) value: -10080
==348679==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348679==    by 0x40791E: f_del_front_bn (get_next_line_utils.c:230)
==348679==    by 0x407449: get_next_line (get_next_line.c:67)
==348679==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348679==    by 0x406CE7: main (mandatory.cpp:132)
==348679== 
==348679== Invalid read of size 1
==348679==    at 0x407383: get_next_line (get_next_line.c:47)
==348679==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348679==    by 0x406CF3: main (mandatory.cpp:132)
==348679==  Address 0x0 is not stack'd, malloc'd or (recently) free'd
==348679== 
==348679== 10,001 bytes in 1 blocks are definitely lost in loss record 1 of 2
==348679==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348679==    by 0x4075E6: ft_strjoin (get_next_line_utils.c:64)
==348679==    by 0x407420: get_next_line (get_next_line.c:65)
==348679==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348679==    by 0x406CE7: main (mandatory.cpp:132)
==348679== 
==348680== 10,000,001 bytes in 1 blocks are definitely lost in loss record 2 of 2
==348680==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348680==    by 0x40730C: get_next_line (get_next_line.c:27)
==348680==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348680==    by 0x406F1F: main (mandatory.cpp:136)
==348680== 
==348681== Invalid write of size 1
==348681==    at 0x4073A4: get_next_line (get_next_line.c:50)
==348681==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348681==    by 0x40714F: main (mandatory.cpp:141)
==348681==  Address 0x4de8040 is 0 bytes inside a block of size 177 free'd
==348681==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348681==    by 0x407B55: ft_strdup2 (get_next_line_utils.c:329)
==348681==    by 0x407398: get_next_line (get_next_line.c:49)
==348681==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348681==    by 0x40714F: main (mandatory.cpp:141)
==348681==  Block was alloc'd at
==348681==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348681==    by 0x40791E: f_del_front_bn (get_next_line_utils.c:230)
==348681==    by 0x407449: get_next_line (get_next_line.c:67)
==348681==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348681==    by 0x40713E: main (mandatory.cpp:141)
==348681== 
==348681== Invalid read of size 1
==348681==    at 0x407383: get_next_line (get_next_line.c:47)
==348681==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348681==    by 0x407160: main (mandatory.cpp:141)
==348681==  Address 0x4de8040 is 0 bytes inside a block of size 177 free'd
==348681==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348681==    by 0x407B55: ft_strdup2 (get_next_line_utils.c:329)
==348681==    by 0x407398: get_next_line (get_next_line.c:49)
==348681==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348681==    by 0x40714F: main (mandatory.cpp:141)
==348681==  Block was alloc'd at
==348681==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348681==    by 0x40791E: f_del_front_bn (get_next_line_utils.c:230)
==348681==    by 0x407449: get_next_line (get_next_line.c:67)
==348681==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348681==    by 0x40713E: main (mandatory.cpp:141)
==348681== 
==348681== Invalid read of size 1
==348681==    at 0x484FBD4: strcmp (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348681==    by 0x402D1A: gnl(int, char const*) (gnl.cpp:24)
==348681==    by 0x407160: main (mandatory.cpp:141)
==348681==  Address 0x0 is not stack'd, malloc'd or (recently) free'd
==348681== 
==348681== 10,000,001 bytes in 1 blocks are possibly lost in loss record 1 of 2
==348681==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348681==    by 0x40730C: get_next_line (get_next_line.c:27)
==348681==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348681==    by 0x407160: main (mandatory.cpp:141)
==348681== 
==348681== 10,000,001 bytes in 1 blocks are definitely lost in loss record 2 of 2
==348681==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==348681==    by 0x40730C: get_next_line (get_next_line.c:27)
==348681==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==348681==    by 0x40714F: main (mandatory.cpp:141)
==348681== 
