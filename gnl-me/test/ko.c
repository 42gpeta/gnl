==316249== Invalid write of size 1
==316249==    at 0x40735C: get_next_line (get_next_line.c:39)
==316249==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==316249==    by 0x404BD6: main (mandatory.cpp:25)
==316249==  Address 0x4de429f is 1 bytes before a block of size 2 alloc'd
==316249==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==316249==    by 0x40730C: get_next_line (get_next_line.c:27)
==316249==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==316249==    by 0x404BD6: main (mandatory.cpp:25)
==316249== 
==316249== Conditional jump or move depends on uninitialised value(s)
==316249==    at 0x407551: ft_strlen (get_next_line_utils.c:43)
==316249==    by 0x407587: ft_strjoin (get_next_line_utils.c:59)
==316249==    by 0x40744E: get_next_line (get_next_line.c:76)
==316249==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==316249==    by 0x404BD6: main (mandatory.cpp:25)
==316249== 
==316249== Conditional jump or move depends on uninitialised value(s)
==316249==    at 0x407651: ft_strjoin (get_next_line_utils.c:74)
==316249==    by 0x40744E: get_next_line (get_next_line.c:76)
==316249==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==316249==    by 0x404BD6: main (mandatory.cpp:25)
==316249== 
==316270== 2 bytes in 1 blocks are definitely lost in loss record 1 of 2
==316270==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==316270==    by 0x40730C: get_next_line (get_next_line.c:27)
==316270==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==316270==    by 0x404E73: main (mandatory.cpp:31)
==316270== 
==316270== 2 bytes in 1 blocks are definitely lost in loss record 2 of 2
==316270==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==316270==    by 0x40730C: get_next_line (get_next_line.c:27)
==316270==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==316270==    by 0x404E7F: main (mandatory.cpp:31)
==316270== 
==316290== 2 bytes in 1 blocks are definitely lost in loss record 2 of 3
==316290==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==316290==    by 0x4075A4: ft_strjoin (get_next_line_utils.c:64)
==316290==    by 0x40744E: get_next_line (get_next_line.c:76)
==316290==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==316290==    by 0x40509F: main (mandatory.cpp:36)
==316290== 
==316290== 2 bytes in 1 blocks are definitely lost in loss record 3 of 3
==316290==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==316290==    by 0x40730C: get_next_line (get_next_line.c:27)
==316290==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==316290==    by 0x4050AB: main (mandatory.cpp:36)
==316290== 
==316291== Invalid read of size 1
==316291==    at 0x484FBD4: strcmp (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==316291==    by 0x402D1A: gnl(int, char const*) (gnl.cpp:24)
==316291==    by 0x4052CB: main (mandatory.cpp:41)
==316291==  Address 0x0 is not stack'd, malloc'd or (recently) free'd
==316291== 
==316291== 2 bytes in 1 blocks are definitely lost in loss record 1 of 2
==316291==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==316291==    by 0x40730C: get_next_line (get_next_line.c:27)
==316291==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==316291==    by 0x4052CB: main (mandatory.cpp:41)
==316291== 
==316292== Invalid read of size 1
==316292==    at 0x484FBD4: strcmp (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==316292==    by 0x402D1A: gnl(int, char const*) (gnl.cpp:24)
==316292==    by 0x405509: main (mandatory.cpp:46)
==316292==  Address 0x0 is not stack'd, malloc'd or (recently) free'd
==316292== 
==316292== 2 bytes in 1 blocks are definitely lost in loss record 2 of 3
==316292==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==316292==    by 0x40730C: get_next_line (get_next_line.c:27)
==316292==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==316292==    by 0x405509: main (mandatory.cpp:46)
==316292== 
==316292== 46 bytes in 1 blocks are definitely lost in loss record 3 of 3
==316292==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==316292==    by 0x4075A4: ft_strjoin (get_next_line_utils.c:64)
==316292==    by 0x40744E: get_next_line (get_next_line.c:76)
==316292==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==316292==    by 0x4054F7: main (mandatory.cpp:46)
==316292== 
==316294== Invalid read of size 1
==316294==    at 0x484FBD4: strcmp (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==316294==    by 0x402D1A: gnl(int, char const*) (gnl.cpp:24)
==316294==    by 0x405735: main (mandatory.cpp:52)
==316294==  Address 0x0 is not stack'd, malloc'd or (recently) free'd
==316294== 
==316294== 2 bytes in 1 blocks are definitely lost in loss record 1 of 2
==316294==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==316294==    by 0x40730C: get_next_line (get_next_line.c:27)
==316294==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==316294==    by 0x405735: main (mandatory.cpp:52)
==316294== 
==316295== Invalid read of size 1
==316295==    at 0x484FBD4: strcmp (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==316295==    by 0x402D1A: gnl(int, char const*) (gnl.cpp:24)
==316295==    by 0x405973: main (mandatory.cpp:57)
==316295==  Address 0x0 is not stack'd, malloc'd or (recently) free'd
==316295== 
==316295== 2 bytes in 1 blocks are definitely lost in loss record 2 of 3
==316295==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==316295==    by 0x40730C: get_next_line (get_next_line.c:27)
==316295==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==316295==    by 0x405973: main (mandatory.cpp:57)
==316295== 
==316295== 43 bytes in 1 blocks are definitely lost in loss record 3 of 3
==316295==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==316295==    by 0x4075A4: ft_strjoin (get_next_line_utils.c:64)
==316295==    by 0x40744E: get_next_line (get_next_line.c:76)
==316295==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==316295==    by 0x405961: main (mandatory.cpp:57)
==316295== 
==316298== Invalid read of size 1
==316298==    at 0x484FBD4: strcmp (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==316298==    by 0x402D1A: gnl(int, char const*) (gnl.cpp:24)
==316298==    by 0x405BA9: main (mandatory.cpp:68)
==316298==  Address 0x0 is not stack'd, malloc'd or (recently) free'd
==316298== 
==316298== 2 bytes in 1 blocks are definitely lost in loss record 1 of 2
==316298==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==316298==    by 0x40730C: get_next_line (get_next_line.c:27)
==316298==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==316298==    by 0x405BA9: main (mandatory.cpp:68)
==316298== 
==316299== Invalid read of size 1
==316299==    at 0x484FBD4: strcmp (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==316299==    by 0x402D1A: gnl(int, char const*) (gnl.cpp:24)
==316299==    by 0x405DE7: main (mandatory.cpp:73)
==316299==  Address 0x0 is not stack'd, malloc'd or (recently) free'd
==316299== 
==316299== 2 bytes in 1 blocks are definitely lost in loss record 2 of 3
==316299==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==316299==    by 0x40730C: get_next_line (get_next_line.c:27)
==316299==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==316299==    by 0x405DE7: main (mandatory.cpp:73)
==316299== 
==316299== 44 bytes in 1 blocks are definitely lost in loss record 3 of 3
==316299==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==316299==    by 0x4075A4: ft_strjoin (get_next_line_utils.c:64)
==316299==    by 0x40744E: get_next_line (get_next_line.c:76)
==316299==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==316299==    by 0x405DD5: main (mandatory.cpp:73)
==316299== 
==316301== 2 bytes in 1 blocks are definitely lost in loss record 2 of 7
==316301==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==316301==    by 0x4075A4: ft_strjoin (get_next_line_utils.c:64)
==316301==    by 0x40744E: get_next_line (get_next_line.c:76)
==316301==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==316301==    by 0x406013: main (mandatory.cpp:79)
==316301== 
==316301== 2 bytes in 1 blocks are definitely lost in loss record 3 of 7
==316301==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==316301==    by 0x4075A4: ft_strjoin (get_next_line_utils.c:64)
==316301==    by 0x40744E: get_next_line (get_next_line.c:76)
==316301==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==316301==    by 0x406025: main (mandatory.cpp:79)
==316301== 
==316301== 2 bytes in 1 blocks are definitely lost in loss record 4 of 7
==316301==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==316301==    by 0x4075A4: ft_strjoin (get_next_line_utils.c:64)
==316301==    by 0x40744E: get_next_line (get_next_line.c:76)
==316301==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==316301==    by 0x406037: main (mandatory.cpp:79)
==316301== 
==316301== 2 bytes in 1 blocks are definitely lost in loss record 5 of 7
==316301==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==316301==    by 0x4075A4: ft_strjoin (get_next_line_utils.c:64)
==316301==    by 0x40744E: get_next_line (get_next_line.c:76)
==316301==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==316301==    by 0x406049: main (mandatory.cpp:79)
==316301== 
==316301== 2 bytes in 1 blocks are definitely lost in loss record 6 of 7
==316301==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==316301==    by 0x4075A4: ft_strjoin (get_next_line_utils.c:64)
==316301==    by 0x40744E: get_next_line (get_next_line.c:76)
==316301==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==316301==    by 0x40605B: main (mandatory.cpp:79)
==316301== 
==316301== 2 bytes in 1 blocks are definitely lost in loss record 7 of 7
==316301==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==316301==    by 0x40730C: get_next_line (get_next_line.c:27)
==316301==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==316301==    by 0x406067: main (mandatory.cpp:79)
==316301== 
==316302== Invalid read of size 1
==316302==    at 0x484FBD4: strcmp (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==316302==    by 0x402D1A: gnl(int, char const*) (gnl.cpp:24)
==316302==    by 0x4062CF: main (mandatory.cpp:88)
==316302==  Address 0x0 is not stack'd, malloc'd or (recently) free'd
==316302== 
==316302== 2 bytes in 1 blocks are definitely lost in loss record 1 of 6
==316302==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==316302==    by 0x40730C: get_next_line (get_next_line.c:27)
==316302==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==316302==    by 0x4062CF: main (mandatory.cpp:88)
==316302== 
==316302== 43 bytes in 1 blocks are definitely lost in loss record 3 of 6
==316302==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==316302==    by 0x4075A4: ft_strjoin (get_next_line_utils.c:64)
==316302==    by 0x40744E: get_next_line (get_next_line.c:76)
==316302==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==316302==    by 0x406287: main (mandatory.cpp:88)
==316302== 
==316302== 44 bytes in 1 blocks are definitely lost in loss record 4 of 6
==316302==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==316302==    by 0x4075A4: ft_strjoin (get_next_line_utils.c:64)
==316302==    by 0x40744E: get_next_line (get_next_line.c:76)
==316302==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==316302==    by 0x406299: main (mandatory.cpp:88)
==316302== 
==316302== 44 bytes in 1 blocks are definitely lost in loss record 5 of 6
==316302==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==316302==    by 0x4075A4: ft_strjoin (get_next_line_utils.c:64)
==316302==    by 0x40744E: get_next_line (get_next_line.c:76)
==316302==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==316302==    by 0x4062BD: main (mandatory.cpp:88)
==316302== 
==316302== 45 bytes in 1 blocks are definitely lost in loss record 6 of 6
==316302==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==316302==    by 0x4075A4: ft_strjoin (get_next_line_utils.c:64)
==316302==    by 0x40744E: get_next_line (get_next_line.c:76)
==316302==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==316302==    by 0x4062AB: main (mandatory.cpp:88)
==316302== 
==316303== 2 bytes in 1 blocks are definitely lost in loss record 2 of 7
==316303==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==316303==    by 0x40730C: get_next_line (get_next_line.c:27)
==316303==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==316303==    by 0x40654F: main (mandatory.cpp:97)
==316303== 
==316303== 42 bytes in 1 blocks are definitely lost in loss record 3 of 7
==316303==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==316303==    by 0x4075A4: ft_strjoin (get_next_line_utils.c:64)
==316303==    by 0x40744E: get_next_line (get_next_line.c:76)
==316303==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==316303==    by 0x4064FB: main (mandatory.cpp:97)
==316303== 
==316303== 42 bytes in 1 blocks are definitely lost in loss record 4 of 7
==316303==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==316303==    by 0x4075A4: ft_strjoin (get_next_line_utils.c:64)
==316303==    by 0x40744E: get_next_line (get_next_line.c:76)
==316303==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==316303==    by 0x406543: main (mandatory.cpp:97)
==316303== 
==316303== 43 bytes in 1 blocks are definitely lost in loss record 5 of 7
==316303==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==316303==    by 0x4075A4: ft_strjoin (get_next_line_utils.c:64)
==316303==    by 0x40744E: get_next_line (get_next_line.c:76)
==316303==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==316303==    by 0x40650D: main (mandatory.cpp:97)
==316303== 
==316303== 43 bytes in 1 blocks are definitely lost in loss record 6 of 7
==316303==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==316303==    by 0x4075A4: ft_strjoin (get_next_line_utils.c:64)
==316303==    by 0x40744E: get_next_line (get_next_line.c:76)
==316303==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==316303==    by 0x406531: main (mandatory.cpp:97)
==316303== 
==316303== 44 bytes in 1 blocks are definitely lost in loss record 7 of 7
==316303==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==316303==    by 0x4075A4: ft_strjoin (get_next_line_utils.c:64)
==316303==    by 0x40744E: get_next_line (get_next_line.c:76)
==316303==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==316303==    by 0x40651F: main (mandatory.cpp:97)
==316303== 
==316306== Invalid read of size 1
==316306==    at 0x484FBD4: strcmp (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==316306==    by 0x402D1A: gnl(int, char const*) (gnl.cpp:24)
==316306==    by 0x4067FF: main (mandatory.cpp:106)
==316306==  Address 0x0 is not stack'd, malloc'd or (recently) free'd
==316306== 
==316306== 2 bytes in 1 blocks are definitely lost in loss record 1 of 10
==316306==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==316306==    by 0x4075A4: ft_strjoin (get_next_line_utils.c:64)
==316306==    by 0x40744E: get_next_line (get_next_line.c:76)
==316306==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==316306==    by 0x406781: main (mandatory.cpp:106)
==316306== 
==316306== 2 bytes in 1 blocks are definitely lost in loss record 2 of 10
==316306==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==316306==    by 0x4075A4: ft_strjoin (get_next_line_utils.c:64)
==316306==    by 0x40744E: get_next_line (get_next_line.c:76)
==316306==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==316306==    by 0x4067A5: main (mandatory.cpp:106)
==316306== 
==316306== 2 bytes in 1 blocks are definitely lost in loss record 3 of 10
==316306==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==316306==    by 0x4075A4: ft_strjoin (get_next_line_utils.c:64)
==316306==    by 0x40744E: get_next_line (get_next_line.c:76)
==316306==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==316306==    by 0x4067C9: main (mandatory.cpp:106)
==316306== 
==316306== 2 bytes in 1 blocks are definitely lost in loss record 4 of 10
==316306==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==316306==    by 0x4075A4: ft_strjoin (get_next_line_utils.c:64)
==316306==    by 0x40744E: get_next_line (get_next_line.c:76)
==316306==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==316306==    by 0x4067ED: main (mandatory.cpp:106)
==316306== 
==316306== 2 bytes in 1 blocks are definitely lost in loss record 5 of 10
==316306==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==316306==    by 0x40730C: get_next_line (get_next_line.c:27)
==316306==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==316306==    by 0x4067FF: main (mandatory.cpp:106)
==316306== 
==316306== 43 bytes in 1 blocks are definitely lost in loss record 7 of 10
==316306==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==316306==    by 0x4075A4: ft_strjoin (get_next_line_utils.c:64)
==316306==    by 0x40744E: get_next_line (get_next_line.c:76)
==316306==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==316306==    by 0x40676F: main (mandatory.cpp:106)
==316306== 
==316306== 44 bytes in 1 blocks are definitely lost in loss record 8 of 10
==316306==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==316306==    by 0x4075A4: ft_strjoin (get_next_line_utils.c:64)
==316306==    by 0x40744E: get_next_line (get_next_line.c:76)
==316306==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==316306==    by 0x406793: main (mandatory.cpp:106)
==316306== 
==316306== 44 bytes in 1 blocks are definitely lost in loss record 9 of 10
==316306==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==316306==    by 0x4075A4: ft_strjoin (get_next_line_utils.c:64)
==316306==    by 0x40744E: get_next_line (get_next_line.c:76)
==316306==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==316306==    by 0x4067DB: main (mandatory.cpp:106)
==316306== 
==316306== 45 bytes in 1 blocks are definitely lost in loss record 10 of 10
==316306==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==316306==    by 0x4075A4: ft_strjoin (get_next_line_utils.c:64)
==316306==    by 0x40744E: get_next_line (get_next_line.c:76)
==316306==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==316306==    by 0x4067B7: main (mandatory.cpp:106)
==316306== 
==316307== 2 bytes in 1 blocks are definitely lost in loss record 2 of 11
==316307==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==316307==    by 0x4075A4: ft_strjoin (get_next_line_utils.c:64)
==316307==    by 0x40744E: get_next_line (get_next_line.c:76)
==316307==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==316307==    by 0x406A3D: main (mandatory.cpp:119)
==316307== 
==316307== 2 bytes in 1 blocks are definitely lost in loss record 3 of 11
==316307==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==316307==    by 0x4075A4: ft_strjoin (get_next_line_utils.c:64)
==316307==    by 0x40744E: get_next_line (get_next_line.c:76)
==316307==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==316307==    by 0x406A61: main (mandatory.cpp:119)
==316307== 
==316307== 2 bytes in 1 blocks are definitely lost in loss record 4 of 11
==316307==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==316307==    by 0x4075A4: ft_strjoin (get_next_line_utils.c:64)
==316307==    by 0x40744E: get_next_line (get_next_line.c:76)
==316307==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==316307==    by 0x406A85: main (mandatory.cpp:119)
==316307== 
==316307== 2 bytes in 1 blocks are definitely lost in loss record 5 of 11
==316307==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==316307==    by 0x4075A4: ft_strjoin (get_next_line_utils.c:64)
==316307==    by 0x40744E: get_next_line (get_next_line.c:76)
==316307==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==316307==    by 0x406AA9: main (mandatory.cpp:119)
==316307== 
==316307== 2 bytes in 1 blocks are definitely lost in loss record 6 of 11
==316307==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==316307==    by 0x40730C: get_next_line (get_next_line.c:27)
==316307==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==316307==    by 0x406AC7: main (mandatory.cpp:119)
==316307== 
==316307== 43 bytes in 1 blocks are definitely lost in loss record 7 of 11
==316307==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==316307==    by 0x4075A4: ft_strjoin (get_next_line_utils.c:64)
==316307==    by 0x40744E: get_next_line (get_next_line.c:76)
==316307==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==316307==    by 0x406A2B: main (mandatory.cpp:119)
==316307== 
==316307== 43 bytes in 1 blocks are definitely lost in loss record 8 of 11
==316307==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==316307==    by 0x4075A4: ft_strjoin (get_next_line_utils.c:64)
==316307==    by 0x40744E: get_next_line (get_next_line.c:76)
==316307==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==316307==    by 0x406ABB: main (mandatory.cpp:119)
==316307== 
==316307== 44 bytes in 1 blocks are definitely lost in loss record 9 of 11
==316307==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==316307==    by 0x4075A4: ft_strjoin (get_next_line_utils.c:64)
==316307==    by 0x40744E: get_next_line (get_next_line.c:76)
==316307==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==316307==    by 0x406A4F: main (mandatory.cpp:119)
==316307== 
==316307== 44 bytes in 1 blocks are definitely lost in loss record 10 of 11
==316307==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==316307==    by 0x4075A4: ft_strjoin (get_next_line_utils.c:64)
==316307==    by 0x40744E: get_next_line (get_next_line.c:76)
==316307==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==316307==    by 0x406A97: main (mandatory.cpp:119)
==316307== 
==316307== 45 bytes in 1 blocks are definitely lost in loss record 11 of 11
==316307==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==316307==    by 0x4075A4: ft_strjoin (get_next_line_utils.c:64)
==316307==    by 0x40744E: get_next_line (get_next_line.c:76)
==316307==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==316307==    by 0x406A73: main (mandatory.cpp:119)
==316307== 
==316311== 2 bytes in 1 blocks are definitely lost in loss record 2 of 11
==316311==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==316311==    by 0x4075A4: ft_strjoin (get_next_line_utils.c:64)
==316311==    by 0x40744E: get_next_line (get_next_line.c:76)
==316311==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==316311==    by 0x40714F: main (mandatory.cpp:141)
==316311== 
==316311== 2 bytes in 1 blocks are definitely lost in loss record 3 of 11
==316311==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==316311==    by 0x4075A4: ft_strjoin (get_next_line_utils.c:64)
==316311==    by 0x40744E: get_next_line (get_next_line.c:76)
==316311==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==316311==    by 0x407171: main (mandatory.cpp:141)
==316311== 
==316311== 2 bytes in 1 blocks are definitely lost in loss record 4 of 11
==316311==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==316311==    by 0x4075A4: ft_strjoin (get_next_line_utils.c:64)
==316311==    by 0x40744E: get_next_line (get_next_line.c:76)
==316311==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==316311==    by 0x407193: main (mandatory.cpp:141)
==316311== 
==316311== 2 bytes in 1 blocks are definitely lost in loss record 5 of 11
==316311==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==316311==    by 0x4075A4: ft_strjoin (get_next_line_utils.c:64)
==316311==    by 0x40744E: get_next_line (get_next_line.c:76)
==316311==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==316311==    by 0x4071B5: main (mandatory.cpp:141)
==316311== 
==316311== 2 bytes in 1 blocks are definitely lost in loss record 6 of 11
==316311==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==316311==    by 0x40730C: get_next_line (get_next_line.c:27)
==316311==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==316311==    by 0x4071D1: main (mandatory.cpp:141)
==316311== 
==316311== 43 bytes in 1 blocks are definitely lost in loss record 7 of 11
==316311==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==316311==    by 0x4075A4: ft_strjoin (get_next_line_utils.c:64)
==316311==    by 0x40744E: get_next_line (get_next_line.c:76)
==316311==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==316311==    by 0x40713E: main (mandatory.cpp:141)
==316311== 
==316311== 43 bytes in 1 blocks are definitely lost in loss record 8 of 11
==316311==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==316311==    by 0x4075A4: ft_strjoin (get_next_line_utils.c:64)
==316311==    by 0x40744E: get_next_line (get_next_line.c:76)
==316311==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==316311==    by 0x4071C6: main (mandatory.cpp:141)
==316311== 
==316311== 44 bytes in 1 blocks are definitely lost in loss record 9 of 11
==316311==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==316311==    by 0x4075A4: ft_strjoin (get_next_line_utils.c:64)
==316311==    by 0x40744E: get_next_line (get_next_line.c:76)
==316311==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==316311==    by 0x407160: main (mandatory.cpp:141)
==316311== 
==316311== 44 bytes in 1 blocks are definitely lost in loss record 10 of 11
==316311==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==316311==    by 0x4075A4: ft_strjoin (get_next_line_utils.c:64)
==316311==    by 0x40744E: get_next_line (get_next_line.c:76)
==316311==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==316311==    by 0x4071A4: main (mandatory.cpp:141)
==316311== 
==316311== 45 bytes in 1 blocks are definitely lost in loss record 11 of 11
==316311==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==316311==    by 0x4075A4: ft_strjoin (get_next_line_utils.c:64)
==316311==    by 0x40744E: get_next_line (get_next_line.c:76)
==316311==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==316311==    by 0x407182: main (mandatory.cpp:141)
==316311== 
==316334== Invalid write of size 1
==316334==    at 0x40738E: get_next_line (get_next_line.c:39)
==316334==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==316334==    by 0x404BD6: main (mandatory.cpp:25)
==316334==  Address 0x4de429f is 1 bytes before a block of size 43 alloc'd
==316334==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==316334==    by 0x40733E: get_next_line (get_next_line.c:27)
==316334==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==316334==    by 0x404BD6: main (mandatory.cpp:25)
==316334== 
==316334== Conditional jump or move depends on uninitialised value(s)
==316334==    at 0x407583: ft_strlen (get_next_line_utils.c:43)
==316334==    by 0x4075B9: ft_strjoin (get_next_line_utils.c:59)
==316334==    by 0x407480: get_next_line (get_next_line.c:76)
==316334==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==316334==    by 0x404BD6: main (mandatory.cpp:25)
==316334== 
==316334== Conditional jump or move depends on uninitialised value(s)
==316334==    at 0x407683: ft_strjoin (get_next_line_utils.c:74)
==316334==    by 0x407480: get_next_line (get_next_line.c:76)
==316334==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==316334==    by 0x404BD6: main (mandatory.cpp:25)
==316334== 
==316339== 43 bytes in 1 blocks are definitely lost in loss record 1 of 2
==316339==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==316339==    by 0x40733E: get_next_line (get_next_line.c:27)
==316339==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==316339==    by 0x404E73: main (mandatory.cpp:31)
==316339== 
==316339== 43 bytes in 1 blocks are definitely lost in loss record 2 of 2
==316339==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==316339==    by 0x40733E: get_next_line (get_next_line.c:27)
==316339==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==316339==    by 0x404E7F: main (mandatory.cpp:31)
==316339== 
==316340== 43 bytes in 1 blocks are definitely lost in loss record 1 of 1
==316340==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==316340==    by 0x40733E: get_next_line (get_next_line.c:27)
==316340==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==316340==    by 0x4050AB: main (mandatory.cpp:36)
==316340== 
==316345== 43 bytes in 1 blocks are definitely lost in loss record 1 of 1
==316345==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==316345==    by 0x40733E: get_next_line (get_next_line.c:27)
==316345==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==316345==    by 0x4052D7: main (mandatory.cpp:41)
==316345== 
==316347== Invalid read of size 1
==316347==    at 0x484FBD4: strcmp (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==316347==    by 0x402D1A: gnl(int, char const*) (gnl.cpp:24)
==316347==    by 0x405509: main (mandatory.cpp:46)
==316347==  Address 0x0 is not stack'd, malloc'd or (recently) free'd
==316347== 
==316347== 43 bytes in 1 blocks are definitely lost in loss record 1 of 1
==316347==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==316347==    by 0x40733E: get_next_line (get_next_line.c:27)
==316347==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==316347==    by 0x405509: main (mandatory.cpp:46)
==316347== 
==316348== Invalid read of size 1
==316348==    at 0x484FBD4: strcmp (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==316348==    by 0x402D1A: gnl(int, char const*) (gnl.cpp:24)
==316348==    by 0x405735: main (mandatory.cpp:52)
==316348==  Address 0x0 is not stack'd, malloc'd or (recently) free'd
==316348== 
==316348== 43 bytes in 1 blocks are definitely lost in loss record 2 of 2
==316348==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==316348==    by 0x40733E: get_next_line (get_next_line.c:27)
==316348==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==316348==    by 0x405735: main (mandatory.cpp:52)
==316348== 
==316351== 43 bytes in 1 blocks are definitely lost in loss record 2 of 3
==316351==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==316351==    by 0x4075D6: ft_strjoin (get_next_line_utils.c:64)
==316351==    by 0x407480: get_next_line (get_next_line.c:76)
==316351==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==316351==    by 0x405961: main (mandatory.cpp:57)
==316351== 
==316351== 43 bytes in 1 blocks are definitely lost in loss record 3 of 3
==316351==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==316351==    by 0x40733E: get_next_line (get_next_line.c:27)
==316351==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==316351==    by 0x4059B1: main (mandatory.cpp:57)
==316351== 
==316352== 43 bytes in 1 blocks are definitely lost in loss record 1 of 1
==316352==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==316352==    by 0x40733E: get_next_line (get_next_line.c:27)
==316352==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==316352==    by 0x405BE7: main (mandatory.cpp:68)
==316352== 
==316353== Invalid read of size 1
==316353==    at 0x484FBD4: strcmp (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==316353==    by 0x402D1A: gnl(int, char const*) (gnl.cpp:24)
==316353==    by 0x405E19: main (mandatory.cpp:73)
==316353==  Address 0x0 is not stack'd, malloc'd or (recently) free'd
==316353== 
==316353== 43 bytes in 1 blocks are definitely lost in loss record 1 of 1
==316353==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==316353==    by 0x40733E: get_next_line (get_next_line.c:27)
==316353==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==316353==    by 0x405E19: main (mandatory.cpp:73)
==316353== 
==316355== Invalid read of size 1
==316355==    at 0x484FBD4: strcmp (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==316355==    by 0x402D1A: gnl(int, char const*) (gnl.cpp:24)
==316355==    by 0x406057: main (mandatory.cpp:79)
==316355==  Address 0x0 is not stack'd, malloc'd or (recently) free'd
==316355== 
==316355== 43 bytes in 1 blocks are definitely lost in loss record 1 of 1
==316355==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==316355==    by 0x40733E: get_next_line (get_next_line.c:27)
==316355==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==316355==    by 0x406057: main (mandatory.cpp:79)
==316355== 
==316356== 43 bytes in 1 blocks are definitely lost in loss record 1 of 5
==316356==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==316356==    by 0x4075D6: ft_strjoin (get_next_line_utils.c:64)
==316356==    by 0x407480: get_next_line (get_next_line.c:76)
==316356==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==316356==    by 0x4062B9: main (mandatory.cpp:88)
==316356== 
==316356== 43 bytes in 1 blocks are definitely lost in loss record 2 of 5
==316356==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==316356==    by 0x40733E: get_next_line (get_next_line.c:27)
==316356==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==316356==    by 0x40630D: main (mandatory.cpp:88)
==316356== 
==316356== 82 bytes in 1 blocks are definitely lost in loss record 3 of 5
==316356==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==316356==    by 0x4075D6: ft_strjoin (get_next_line_utils.c:64)
==316356==    by 0x407480: get_next_line (get_next_line.c:76)
==316356==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==316356==    by 0x4062EF: main (mandatory.cpp:88)
==316356== 
==316356== 84 bytes in 1 blocks are definitely lost in loss record 4 of 5
==316356==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==316356==    by 0x4075D6: ft_strjoin (get_next_line_utils.c:64)
==316356==    by 0x407480: get_next_line (get_next_line.c:76)
==316356==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==316356==    by 0x4062DD: main (mandatory.cpp:88)
==316356== 
==316356== 85 bytes in 1 blocks are definitely lost in loss record 5 of 5
==316356==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==316356==    by 0x4075D6: ft_strjoin (get_next_line_utils.c:64)
==316356==    by 0x407480: get_next_line (get_next_line.c:76)
==316356==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==316356==    by 0x4062CB: main (mandatory.cpp:88)
==316356== 
==316359== 43 bytes in 1 blocks are definitely lost in loss record 1 of 5
==316359==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==316359==    by 0x4075D6: ft_strjoin (get_next_line_utils.c:64)
==316359==    by 0x407480: get_next_line (get_next_line.c:76)
==316359==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==316359==    by 0x40652D: main (mandatory.cpp:97)
==316359== 
==316359== 43 bytes in 1 blocks are definitely lost in loss record 2 of 5
==316359==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==316359==    by 0x4075D6: ft_strjoin (get_next_line_utils.c:64)
==316359==    by 0x407480: get_next_line (get_next_line.c:76)
==316359==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==316359==    by 0x406563: main (mandatory.cpp:97)
==316359== 
==316359== 43 bytes in 1 blocks are definitely lost in loss record 3 of 5
==316359==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==316359==    by 0x40733E: get_next_line (get_next_line.c:27)
==316359==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==316359==    by 0x406581: main (mandatory.cpp:97)
==316359== 
==316359== 44 bytes in 1 blocks are definitely lost in loss record 4 of 5
==316359==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==316359==    by 0x4075D6: ft_strjoin (get_next_line_utils.c:64)
==316359==    by 0x407480: get_next_line (get_next_line.c:76)
==316359==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==316359==    by 0x40653F: main (mandatory.cpp:97)
==316359== 
==316359== 44 bytes in 1 blocks are definitely lost in loss record 5 of 5
==316359==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==316359==    by 0x4075D6: ft_strjoin (get_next_line_utils.c:64)
==316359==    by 0x407480: get_next_line (get_next_line.c:76)
==316359==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==316359==    by 0x406551: main (mandatory.cpp:97)
==316359== 
==316360== Invalid read of size 1
==316360==    at 0x484FBD4: strcmp (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==316360==    by 0x402D1A: gnl(int, char const*) (gnl.cpp:24)
==316360==    by 0x40680D: main (mandatory.cpp:106)
==316360==  Address 0x0 is not stack'd, malloc'd or (recently) free'd
==316360== 
==316360== 43 bytes in 1 blocks are definitely lost in loss record 1 of 6
==316360==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==316360==    by 0x4075D6: ft_strjoin (get_next_line_utils.c:64)
==316360==    by 0x407480: get_next_line (get_next_line.c:76)
==316360==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==316360==    by 0x4067A1: main (mandatory.cpp:106)
==316360== 
==316360== 43 bytes in 1 blocks are definitely lost in loss record 2 of 6
==316360==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==316360==    by 0x4075D6: ft_strjoin (get_next_line_utils.c:64)
==316360==    by 0x407480: get_next_line (get_next_line.c:76)
==316360==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==316360==    by 0x4067B3: main (mandatory.cpp:106)
==316360== 
==316360== 43 bytes in 1 blocks are definitely lost in loss record 3 of 6
==316360==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==316360==    by 0x40733E: get_next_line (get_next_line.c:27)
==316360==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==316360==    by 0x40680D: main (mandatory.cpp:106)
==316360== 
==316360== 80 bytes in 1 blocks are definitely lost in loss record 4 of 6
==316360==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==316360==    by 0x4075D6: ft_strjoin (get_next_line_utils.c:64)
==316360==    by 0x407480: get_next_line (get_next_line.c:76)
==316360==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==316360==    by 0x4067E9: main (mandatory.cpp:106)
==316360== 
==316360== 83 bytes in 1 blocks are definitely lost in loss record 5 of 6
==316360==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==316360==    by 0x4075D6: ft_strjoin (get_next_line_utils.c:64)
==316360==    by 0x407480: get_next_line (get_next_line.c:76)
==316360==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==316360==    by 0x4067D7: main (mandatory.cpp:106)
==316360== 
==316360== 84 bytes in 1 blocks are definitely lost in loss record 6 of 6
==316360==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==316360==    by 0x4075D6: ft_strjoin (get_next_line_utils.c:64)
==316360==    by 0x407480: get_next_line (get_next_line.c:76)
==316360==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==316360==    by 0x4067C5: main (mandatory.cpp:106)
==316360== 
==316362== Invalid read of size 1
==316362==    at 0x484FBD4: strcmp (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==316362==    by 0x402D1A: gnl(int, char const*) (gnl.cpp:24)
==316362==    by 0x406AC9: main (mandatory.cpp:119)
==316362==  Address 0x0 is not stack'd, malloc'd or (recently) free'd
==316362== 
==316362== 43 bytes in 1 blocks are definitely lost in loss record 1 of 6
==316362==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==316362==    by 0x4075D6: ft_strjoin (get_next_line_utils.c:64)
==316362==    by 0x407480: get_next_line (get_next_line.c:76)
==316362==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==316362==    by 0x406A5D: main (mandatory.cpp:119)
==316362== 
==316362== 43 bytes in 1 blocks are definitely lost in loss record 2 of 6
==316362==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==316362==    by 0x4075D6: ft_strjoin (get_next_line_utils.c:64)
==316362==    by 0x407480: get_next_line (get_next_line.c:76)
==316362==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==316362==    by 0x406A6F: main (mandatory.cpp:119)
==316362== 
==316362== 43 bytes in 1 blocks are definitely lost in loss record 3 of 6
==316362==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==316362==    by 0x40733E: get_next_line (get_next_line.c:27)
==316362==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==316362==    by 0x406AC9: main (mandatory.cpp:119)
==316362== 
==316362== 80 bytes in 1 blocks are definitely lost in loss record 4 of 6
==316362==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==316362==    by 0x4075D6: ft_strjoin (get_next_line_utils.c:64)
==316362==    by 0x407480: get_next_line (get_next_line.c:76)
==316362==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==316362==    by 0x406AA5: main (mandatory.cpp:119)
==316362== 
==316362== 83 bytes in 1 blocks are definitely lost in loss record 5 of 6
==316362==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==316362==    by 0x4075D6: ft_strjoin (get_next_line_utils.c:64)
==316362==    by 0x407480: get_next_line (get_next_line.c:76)
==316362==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==316362==    by 0x406A93: main (mandatory.cpp:119)
==316362== 
==316362== 84 bytes in 1 blocks are definitely lost in loss record 6 of 6
==316362==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==316362==    by 0x4075D6: ft_strjoin (get_next_line_utils.c:64)
==316362==    by 0x407480: get_next_line (get_next_line.c:76)
==316362==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==316362==    by 0x406A81: main (mandatory.cpp:119)
==316362== 
==316364== 43 bytes in 1 blocks are definitely lost in loss record 1 of 1
==316364==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==316364==    by 0x40733E: get_next_line (get_next_line.c:27)
==316364==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==316364==    by 0x406D25: main (mandatory.cpp:132)
==316364== 
==316365== 43 bytes in 1 blocks are definitely lost in loss record 1 of 1
==316365==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==316365==    by 0x40733E: get_next_line (get_next_line.c:27)
==316365==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==316365==    by 0x406F51: main (mandatory.cpp:136)
==316365== 
==316368== Invalid read of size 1
==316368==    at 0x484FBD4: strcmp (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==316368==    by 0x402D1A: gnl(int, char const*) (gnl.cpp:24)
==316368==    by 0x4071D6: main (mandatory.cpp:141)
==316368==  Address 0x0 is not stack'd, malloc'd or (recently) free'd
==316368== 
==316368== 43 bytes in 1 blocks are definitely lost in loss record 1 of 6
==316368==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==316368==    by 0x4075D6: ft_strjoin (get_next_line_utils.c:64)
==316368==    by 0x407480: get_next_line (get_next_line.c:76)
==316368==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==316368==    by 0x407170: main (mandatory.cpp:141)
==316368== 
==316368== 43 bytes in 1 blocks are definitely lost in loss record 2 of 6
==316368==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==316368==    by 0x4075D6: ft_strjoin (get_next_line_utils.c:64)
==316368==    by 0x407480: get_next_line (get_next_line.c:76)
==316368==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==316368==    by 0x407181: main (mandatory.cpp:141)
==316368== 
==316368== 43 bytes in 1 blocks are definitely lost in loss record 3 of 6
==316368==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==316368==    by 0x40733E: get_next_line (get_next_line.c:27)
==316368==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==316368==    by 0x4071D6: main (mandatory.cpp:141)
==316368== 
==316368== 80 bytes in 1 blocks are definitely lost in loss record 4 of 6
==316368==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==316368==    by 0x4075D6: ft_strjoin (get_next_line_utils.c:64)
==316368==    by 0x407480: get_next_line (get_next_line.c:76)
==316368==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==316368==    by 0x4071B4: main (mandatory.cpp:141)
==316368== 
==316368== 83 bytes in 1 blocks are definitely lost in loss record 5 of 6
==316368==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==316368==    by 0x4075D6: ft_strjoin (get_next_line_utils.c:64)
==316368==    by 0x407480: get_next_line (get_next_line.c:76)
==316368==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==316368==    by 0x4071A3: main (mandatory.cpp:141)
==316368== 
==316368== 84 bytes in 1 blocks are definitely lost in loss record 6 of 6
==316368==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==316368==    by 0x4075D6: ft_strjoin (get_next_line_utils.c:64)
==316368==    by 0x407480: get_next_line (get_next_line.c:76)
==316368==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==316368==    by 0x407192: main (mandatory.cpp:141)
==316368== 
==316391== Invalid write of size 1
==316391==    at 0x40735C: get_next_line (get_next_line.c:39)
==316391==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==316391==    by 0x404BD6: main (mandatory.cpp:25)
==316391==  Address 0x51d203f is 1 bytes before a block of size 10,000,001 alloc'd
==316391==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==316391==    by 0x40730C: get_next_line (get_next_line.c:27)
==316391==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==316391==    by 0x404BD6: main (mandatory.cpp:25)
==316391== 
==316391== Conditional jump or move depends on uninitialised value(s)
==316391==    at 0x407554: ft_strlen (get_next_line_utils.c:43)
==316391==    by 0x40758A: ft_strjoin (get_next_line_utils.c:59)
==316391==    by 0x407451: get_next_line (get_next_line.c:76)
==316391==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==316391==    by 0x404BD6: main (mandatory.cpp:25)
==316391== 
==316391== Conditional jump or move depends on uninitialised value(s)
==316391==    at 0x407654: ft_strjoin (get_next_line_utils.c:74)
==316391==    by 0x407451: get_next_line (get_next_line.c:76)
==316391==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==316391==    by 0x404BD6: main (mandatory.cpp:25)
==316391== 
==316392== 10,000,001 bytes in 1 blocks are possibly lost in loss record 1 of 2
==316392==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==316392==    by 0x40730C: get_next_line (get_next_line.c:27)
==316392==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==316392==    by 0x404E73: main (mandatory.cpp:31)
==316392== 
==316392== 10,000,001 bytes in 1 blocks are definitely lost in loss record 2 of 2
==316392==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==316392==    by 0x40730C: get_next_line (get_next_line.c:27)
==316392==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==316392==    by 0x404E7F: main (mandatory.cpp:31)
==316392== 
==316393== 10,000,001 bytes in 1 blocks are definitely lost in loss record 1 of 1
==316393==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==316393==    by 0x40730C: get_next_line (get_next_line.c:27)
==316393==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==316393==    by 0x4050AB: main (mandatory.cpp:36)
==316393== 
==316399== 10,000,001 bytes in 1 blocks are definitely lost in loss record 1 of 1
==316399==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==316399==    by 0x40730C: get_next_line (get_next_line.c:27)
==316399==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==316399==    by 0x4052D7: main (mandatory.cpp:41)
==316399== 
==316400== Invalid read of size 1
==316400==    at 0x484FBD4: strcmp (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==316400==    by 0x402D1A: gnl(int, char const*) (gnl.cpp:24)
==316400==    by 0x405509: main (mandatory.cpp:46)
==316400==  Address 0x0 is not stack'd, malloc'd or (recently) free'd
==316400== 
==316400== 10,000,001 bytes in 1 blocks are definitely lost in loss record 1 of 1
==316400==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==316400==    by 0x40730C: get_next_line (get_next_line.c:27)
==316400==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==316400==    by 0x405509: main (mandatory.cpp:46)
==316400== 
==316403== 10,000,001 bytes in 1 blocks are definitely lost in loss record 1 of 1
==316403==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==316403==    by 0x40730C: get_next_line (get_next_line.c:27)
==316403==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==316403==    by 0x405741: main (mandatory.cpp:52)
==316403== 
==316404== Invalid read of size 1
==316404==    at 0x484FBD4: strcmp (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==316404==    by 0x402D1A: gnl(int, char const*) (gnl.cpp:24)
==316404==    by 0x405973: main (mandatory.cpp:57)
==316404==  Address 0x0 is not stack'd, malloc'd or (recently) free'd
==316404== 
==316404== 10,000,001 bytes in 1 blocks are definitely lost in loss record 1 of 1
==316404==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==316404==    by 0x40730C: get_next_line (get_next_line.c:27)
==316404==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==316404==    by 0x405973: main (mandatory.cpp:57)
==316404== 
==316405== 10,000,001 bytes in 1 blocks are definitely lost in loss record 1 of 1
==316405==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==316405==    by 0x40730C: get_next_line (get_next_line.c:27)
==316405==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==316405==    by 0x405BB5: main (mandatory.cpp:68)
==316405== 
==316407== Invalid read of size 1
==316407==    at 0x484FBD4: strcmp (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==316407==    by 0x402D1A: gnl(int, char const*) (gnl.cpp:24)
==316407==    by 0x405DE7: main (mandatory.cpp:73)
==316407==  Address 0x0 is not stack'd, malloc'd or (recently) free'd
==316407== 
==316407== 10,000,001 bytes in 1 blocks are definitely lost in loss record 1 of 1
==316407==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==316407==    by 0x40730C: get_next_line (get_next_line.c:27)
==316407==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==316407==    by 0x405DE7: main (mandatory.cpp:73)
==316407== 
==316408== Invalid read of size 1
==316408==    at 0x484FBD4: strcmp (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==316408==    by 0x402D1A: gnl(int, char const*) (gnl.cpp:24)
==316408==    by 0x406025: main (mandatory.cpp:79)
==316408==  Address 0x0 is not stack'd, malloc'd or (recently) free'd
==316408== 
==316408== 10,000,001 bytes in 1 blocks are definitely lost in loss record 1 of 1
==316408==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==316408==    by 0x40730C: get_next_line (get_next_line.c:27)
==316408==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==316408==    by 0x406025: main (mandatory.cpp:79)
==316408== 
==316411== Invalid read of size 1
==316411==    at 0x484FBD4: strcmp (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==316411==    by 0x402D1A: gnl(int, char const*) (gnl.cpp:24)
==316411==    by 0x406299: main (mandatory.cpp:88)
==316411==  Address 0x0 is not stack'd, malloc'd or (recently) free'd
==316411== 
==316411== 10,000,001 bytes in 1 blocks are definitely lost in loss record 1 of 1
==316411==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==316411==    by 0x40730C: get_next_line (get_next_line.c:27)
==316411==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==316411==    by 0x406299: main (mandatory.cpp:88)
==316411== 
==316426== Invalid read of size 1
==316426==    at 0x484FBD4: strcmp (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==316426==    by 0x402D1A: gnl(int, char const*) (gnl.cpp:24)
==316426==    by 0x40650D: main (mandatory.cpp:97)
==316426==  Address 0x0 is not stack'd, malloc'd or (recently) free'd
==316426== 
==316426== 10,000,001 bytes in 1 blocks are definitely lost in loss record 1 of 1
==316426==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==316426==    by 0x40730C: get_next_line (get_next_line.c:27)
==316426==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==316426==    by 0x40650D: main (mandatory.cpp:97)
==316426== 
==316427== Invalid read of size 1
==316427==    at 0x484FBD4: strcmp (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==316427==    by 0x402D1A: gnl(int, char const*) (gnl.cpp:24)
==316427==    by 0x406781: main (mandatory.cpp:106)
==316427==  Address 0x0 is not stack'd, malloc'd or (recently) free'd
==316427== 
==316427== 10,000,001 bytes in 1 blocks are definitely lost in loss record 1 of 1
==316427==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==316427==    by 0x40730C: get_next_line (get_next_line.c:27)
==316427==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==316427==    by 0x406781: main (mandatory.cpp:106)
==316427== 
==316429== Invalid read of size 1
==316429==    at 0x484FBD4: strcmp (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==316429==    by 0x402D1A: gnl(int, char const*) (gnl.cpp:24)
==316429==    by 0x406A3D: main (mandatory.cpp:119)
==316429==  Address 0x0 is not stack'd, malloc'd or (recently) free'd
==316429== 
==316429== 10,000,001 bytes in 1 blocks are definitely lost in loss record 1 of 1
==316429==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==316429==    by 0x40730C: get_next_line (get_next_line.c:27)
==316429==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==316429==    by 0x406A3D: main (mandatory.cpp:119)
==316429== 
==316431== 10,000,001 bytes in 1 blocks are definitely lost in loss record 1 of 1
==316431==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==316431==    by 0x40730C: get_next_line (get_next_line.c:27)
==316431==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==316431==    by 0x406CF3: main (mandatory.cpp:132)
==316431== 
==316436== 10,000,001 bytes in 1 blocks are definitely lost in loss record 1 of 1
==316436==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==316436==    by 0x40730C: get_next_line (get_next_line.c:27)
==316436==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==316436==    by 0x406F1F: main (mandatory.cpp:136)
==316436== 
==316437== Invalid read of size 1
==316437==    at 0x484FBD4: strcmp (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==316437==    by 0x402D1A: gnl(int, char const*) (gnl.cpp:24)
==316437==    by 0x40714F: main (mandatory.cpp:141)
==316437==  Address 0x0 is not stack'd, malloc'd or (recently) free'd
==316437== 
==316437== 10,000,001 bytes in 1 blocks are definitely lost in loss record 1 of 1
==316437==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==316437==    by 0x40730C: get_next_line (get_next_line.c:27)
==316437==    by 0x402CE6: gnl(int, char const*) (gnl.cpp:20)
==316437==    by 0x40714F: main (mandatory.cpp:141)
==316437== 
