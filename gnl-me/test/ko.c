==64755== Invalid write of size 1
==64755==    at 0x4073B0: get_next_line (get_next_line.c:49)
==64755==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64755==    by 0x404BC6: main (mandatory.cpp:25)
==64755==  Address 0x4de429f is 1 bytes before a block of size 2 alloc'd
==64755==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64755==    by 0x4072FC: get_next_line (get_next_line.c:27)
==64755==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64755==    by 0x404BC6: main (mandatory.cpp:25)
==64755== 
==64755== Invalid write of size 1
==64755==    at 0x4073B0: get_next_line (get_next_line.c:49)
==64755==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64755==    by 0x404BE8: main (mandatory.cpp:25)
==64755==  Address 0x4de42ef is 1 bytes before a block of size 2 alloc'd
==64755==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64755==    by 0x4072FC: get_next_line (get_next_line.c:27)
==64755==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64755==    by 0x404BE8: main (mandatory.cpp:25)
==64755== 
==64755== 2 bytes in 1 blocks are definitely lost in loss record 1 of 2
==64755==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64755==    by 0x4072FC: get_next_line (get_next_line.c:27)
==64755==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64755==    by 0x404BC6: main (mandatory.cpp:25)
==64755== 
==64755== 2 bytes in 1 blocks are definitely lost in loss record 2 of 2
==64755==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64755==    by 0x4072FC: get_next_line (get_next_line.c:27)
==64755==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64755==    by 0x404BE8: main (mandatory.cpp:25)
==64755== 
==64770== Invalid read of size 1
==64770==    at 0x4073D4: get_next_line (get_next_line.c:61)
==64770==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64770==    by 0x404E63: main (mandatory.cpp:31)
==64770==  Address 0x0 is not stack'd, malloc'd or (recently) free'd
==64770== 
==64793== 2 bytes in 1 blocks are definitely lost in loss record 2 of 3
==64793==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64793==    by 0x4075D8: ft_strjoin (get_next_line_utils.c:58)
==64793==    by 0x407494: get_next_line (get_next_line.c:100)
==64793==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64793==    by 0x40508F: main (mandatory.cpp:36)
==64793== 
==64793== 2 bytes in 1 blocks are definitely lost in loss record 3 of 3
==64793==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64793==    by 0x4072FC: get_next_line (get_next_line.c:27)
==64793==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64793==    by 0x40509B: main (mandatory.cpp:36)
==64793== 
==64794== Invalid read of size 1
==64794==    at 0x4078BE: f_del_front_bn (get_next_line_utils.c:142)
==64794==    by 0x407410: get_next_line (get_next_line.c:66)
==64794==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64794==    by 0x4052BB: main (mandatory.cpp:41)
==64794==  Address 0x4de686a is 0 bytes after a block of size 42 alloc'd
==64794==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64794==    by 0x4075D8: ft_strjoin (get_next_line_utils.c:58)
==64794==    by 0x407494: get_next_line (get_next_line.c:100)
==64794==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64794==    by 0x4052BB: main (mandatory.cpp:41)
==64794== 
==64794== Invalid write of size 1
==64794==    at 0x4078D2: f_del_front_bn (get_next_line_utils.c:148)
==64794==    by 0x407410: get_next_line (get_next_line.c:66)
==64794==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64794==    by 0x4052BB: main (mandatory.cpp:41)
==64794==  Address 0x4de6990 is 0 bytes after a block of size 0 alloc'd
==64794==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64794==    by 0x407867: f_del_front_bn (get_next_line_utils.c:135)
==64794==    by 0x407410: get_next_line (get_next_line.c:66)
==64794==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64794==    by 0x4052BB: main (mandatory.cpp:41)
==64794== 
==64794== Invalid read of size 1
==64794==    at 0x407532: ft_strchr (get_next_line_utils.c:25)
==64794==    by 0x40732D: get_next_line (get_next_line.c:33)
==64794==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64794==    by 0x4052C7: main (mandatory.cpp:41)
==64794==  Address 0x4de6990 is 0 bytes after a block of size 0 alloc'd
==64794==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64794==    by 0x407867: f_del_front_bn (get_next_line_utils.c:135)
==64794==    by 0x407410: get_next_line (get_next_line.c:66)
==64794==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64794==    by 0x4052BB: main (mandatory.cpp:41)
==64794== 
==64794== Invalid read of size 1
==64794==    at 0x407532: ft_strchr (get_next_line_utils.c:25)
==64794==    by 0x407384: get_next_line (get_next_line.c:46)
==64794==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64794==    by 0x4052C7: main (mandatory.cpp:41)
==64794==  Address 0x4de6990 is 0 bytes after a block of size 0 alloc'd
==64794==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64794==    by 0x407867: f_del_front_bn (get_next_line_utils.c:135)
==64794==    by 0x407410: get_next_line (get_next_line.c:66)
==64794==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64794==    by 0x4052BB: main (mandatory.cpp:41)
==64794== 
==64794== Invalid read of size 1
==64794==    at 0x4073D4: get_next_line (get_next_line.c:61)
==64794==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64794==    by 0x4052C7: main (mandatory.cpp:41)
==64794==  Address 0x4de6990 is 0 bytes after a block of size 0 alloc'd
==64794==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64794==    by 0x407867: f_del_front_bn (get_next_line_utils.c:135)
==64794==    by 0x407410: get_next_line (get_next_line.c:66)
==64794==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64794==    by 0x4052BB: main (mandatory.cpp:41)
==64794== 
==64794== 2 bytes in 1 blocks are definitely lost in loss record 2 of 4
==64794==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64794==    by 0x4072FC: get_next_line (get_next_line.c:27)
==64794==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64794==    by 0x4052BB: main (mandatory.cpp:41)
==64794== 
==64794== 2 bytes in 1 blocks are definitely lost in loss record 3 of 4
==64794==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64794==    by 0x4072FC: get_next_line (get_next_line.c:27)
==64794==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64794==    by 0x4052C7: main (mandatory.cpp:41)
==64794== 
==64794== 43 bytes in 1 blocks are definitely lost in loss record 4 of 4
==64794==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64794==    by 0x407735: f_search_bn (get_next_line_utils.c:97)
==64794==    by 0x4073E9: get_next_line (get_next_line.c:63)
==64794==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64794==    by 0x4052BB: main (mandatory.cpp:41)
==64794== 
==64799== Invalid read of size 1
==64799==    at 0x4078BE: f_del_front_bn (get_next_line_utils.c:142)
==64799==    by 0x407410: get_next_line (get_next_line.c:66)
==64799==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64799==    by 0x4054F9: main (mandatory.cpp:46)
==64799==  Address 0x4de6cd2 is 0 bytes after a block of size 2 alloc'd
==64799==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64799==    by 0x4075D8: ft_strjoin (get_next_line_utils.c:58)
==64799==    by 0x407494: get_next_line (get_next_line.c:100)
==64799==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64799==    by 0x4054F9: main (mandatory.cpp:46)
==64799== 
==64799== Invalid write of size 1
==64799==    at 0x4078D2: f_del_front_bn (get_next_line_utils.c:148)
==64799==    by 0x407410: get_next_line (get_next_line.c:66)
==64799==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64799==    by 0x4054F9: main (mandatory.cpp:46)
==64799==  Address 0x4de6dc0 is 0 bytes after a block of size 0 alloc'd
==64799==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64799==    by 0x407867: f_del_front_bn (get_next_line_utils.c:135)
==64799==    by 0x407410: get_next_line (get_next_line.c:66)
==64799==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64799==    by 0x4054F9: main (mandatory.cpp:46)
==64799== 
==64799== Invalid read of size 1
==64799==    at 0x407532: ft_strchr (get_next_line_utils.c:25)
==64799==    by 0x40732D: get_next_line (get_next_line.c:33)
==64799==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64799==    by 0x405505: main (mandatory.cpp:46)
==64799==  Address 0x4de6dc0 is 0 bytes after a block of size 0 alloc'd
==64799==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64799==    by 0x407867: f_del_front_bn (get_next_line_utils.c:135)
==64799==    by 0x407410: get_next_line (get_next_line.c:66)
==64799==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64799==    by 0x4054F9: main (mandatory.cpp:46)
==64799== 
==64799== Invalid read of size 1
==64799==    at 0x407532: ft_strchr (get_next_line_utils.c:25)
==64799==    by 0x407384: get_next_line (get_next_line.c:46)
==64799==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64799==    by 0x405505: main (mandatory.cpp:46)
==64799==  Address 0x4de6dc0 is 0 bytes after a block of size 0 alloc'd
==64799==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64799==    by 0x407867: f_del_front_bn (get_next_line_utils.c:135)
==64799==    by 0x407410: get_next_line (get_next_line.c:66)
==64799==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64799==    by 0x4054F9: main (mandatory.cpp:46)
==64799== 
==64799== Invalid read of size 1
==64799==    at 0x4073D4: get_next_line (get_next_line.c:61)
==64799==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64799==    by 0x405505: main (mandatory.cpp:46)
==64799==  Address 0x4de6dc0 is 0 bytes after a block of size 0 alloc'd
==64799==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64799==    by 0x407867: f_del_front_bn (get_next_line_utils.c:135)
==64799==    by 0x407410: get_next_line (get_next_line.c:66)
==64799==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64799==    by 0x4054F9: main (mandatory.cpp:46)
==64799== 
==64799== 2 bytes in 1 blocks are definitely lost in loss record 2 of 5
==64799==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64799==    by 0x4072FC: get_next_line (get_next_line.c:27)
==64799==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64799==    by 0x4054F9: main (mandatory.cpp:46)
==64799== 
==64799== 2 bytes in 1 blocks are definitely lost in loss record 3 of 5
==64799==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64799==    by 0x4072FC: get_next_line (get_next_line.c:27)
==64799==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64799==    by 0x405505: main (mandatory.cpp:46)
==64799== 
==64799== 3 bytes in 1 blocks are definitely lost in loss record 4 of 5
==64799==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64799==    by 0x407735: f_search_bn (get_next_line_utils.c:97)
==64799==    by 0x4073E9: get_next_line (get_next_line.c:63)
==64799==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64799==    by 0x4054F9: main (mandatory.cpp:46)
==64799== 
==64799== 42 bytes in 1 blocks are definitely lost in loss record 5 of 5
==64799==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64799==    by 0x4075D8: ft_strjoin (get_next_line_utils.c:58)
==64799==    by 0x407494: get_next_line (get_next_line.c:100)
==64799==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64799==    by 0x4054E7: main (mandatory.cpp:46)
==64799== 
==64801== Invalid read of size 1
==64801==    at 0x4078BE: f_del_front_bn (get_next_line_utils.c:142)
==64801==    by 0x407410: get_next_line (get_next_line.c:66)
==64801==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64801==    by 0x405725: main (mandatory.cpp:52)
==64801==  Address 0x4de6efb is 0 bytes after a block of size 43 alloc'd
==64801==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64801==    by 0x4075D8: ft_strjoin (get_next_line_utils.c:58)
==64801==    by 0x407494: get_next_line (get_next_line.c:100)
==64801==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64801==    by 0x405725: main (mandatory.cpp:52)
==64801== 
==64801== Invalid write of size 1
==64801==    at 0x4078D2: f_del_front_bn (get_next_line_utils.c:148)
==64801==    by 0x407410: get_next_line (get_next_line.c:66)
==64801==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64801==    by 0x405725: main (mandatory.cpp:52)
==64801==  Address 0x4de7020 is 0 bytes after a block of size 0 alloc'd
==64801==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64801==    by 0x407867: f_del_front_bn (get_next_line_utils.c:135)
==64801==    by 0x407410: get_next_line (get_next_line.c:66)
==64801==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64801==    by 0x405725: main (mandatory.cpp:52)
==64801== 
==64801== Invalid read of size 1
==64801==    at 0x407532: ft_strchr (get_next_line_utils.c:25)
==64801==    by 0x40732D: get_next_line (get_next_line.c:33)
==64801==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64801==    by 0x405731: main (mandatory.cpp:52)
==64801==  Address 0x4de7020 is 0 bytes after a block of size 0 alloc'd
==64801==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64801==    by 0x407867: f_del_front_bn (get_next_line_utils.c:135)
==64801==    by 0x407410: get_next_line (get_next_line.c:66)
==64801==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64801==    by 0x405725: main (mandatory.cpp:52)
==64801== 
==64801== Invalid read of size 1
==64801==    at 0x407532: ft_strchr (get_next_line_utils.c:25)
==64801==    by 0x407384: get_next_line (get_next_line.c:46)
==64801==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64801==    by 0x405731: main (mandatory.cpp:52)
==64801==  Address 0x4de7020 is 0 bytes after a block of size 0 alloc'd
==64801==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64801==    by 0x407867: f_del_front_bn (get_next_line_utils.c:135)
==64801==    by 0x407410: get_next_line (get_next_line.c:66)
==64801==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64801==    by 0x405725: main (mandatory.cpp:52)
==64801== 
==64801== Invalid read of size 1
==64801==    at 0x4073D4: get_next_line (get_next_line.c:61)
==64801==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64801==    by 0x405731: main (mandatory.cpp:52)
==64801==  Address 0x4de7020 is 0 bytes after a block of size 0 alloc'd
==64801==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64801==    by 0x407867: f_del_front_bn (get_next_line_utils.c:135)
==64801==    by 0x407410: get_next_line (get_next_line.c:66)
==64801==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64801==    by 0x405725: main (mandatory.cpp:52)
==64801== 
==64801== 2 bytes in 1 blocks are definitely lost in loss record 2 of 4
==64801==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64801==    by 0x4072FC: get_next_line (get_next_line.c:27)
==64801==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64801==    by 0x405725: main (mandatory.cpp:52)
==64801== 
==64801== 2 bytes in 1 blocks are definitely lost in loss record 3 of 4
==64801==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64801==    by 0x4072FC: get_next_line (get_next_line.c:27)
==64801==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64801==    by 0x405731: main (mandatory.cpp:52)
==64801== 
==64801== 44 bytes in 1 blocks are definitely lost in loss record 4 of 4
==64801==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64801==    by 0x407735: f_search_bn (get_next_line_utils.c:97)
==64801==    by 0x4073E9: get_next_line (get_next_line.c:63)
==64801==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64801==    by 0x405725: main (mandatory.cpp:52)
==64801== 
==64809== Invalid read of size 1
==64809==    at 0x4078BE: f_del_front_bn (get_next_line_utils.c:142)
==64809==    by 0x407410: get_next_line (get_next_line.c:66)
==64809==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64809==    by 0x405963: main (mandatory.cpp:57)
==64809==  Address 0x4de7362 is 0 bytes after a block of size 2 alloc'd
==64809==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64809==    by 0x4075D8: ft_strjoin (get_next_line_utils.c:58)
==64809==    by 0x407494: get_next_line (get_next_line.c:100)
==64809==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64809==    by 0x405963: main (mandatory.cpp:57)
==64809== 
==64809== Invalid write of size 1
==64809==    at 0x4078D2: f_del_front_bn (get_next_line_utils.c:148)
==64809==    by 0x407410: get_next_line (get_next_line.c:66)
==64809==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64809==    by 0x405963: main (mandatory.cpp:57)
==64809==  Address 0x4de7450 is 0 bytes after a block of size 0 alloc'd
==64809==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64809==    by 0x407867: f_del_front_bn (get_next_line_utils.c:135)
==64809==    by 0x407410: get_next_line (get_next_line.c:66)
==64809==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64809==    by 0x405963: main (mandatory.cpp:57)
==64809== 
==64809== Invalid read of size 1
==64809==    at 0x407532: ft_strchr (get_next_line_utils.c:25)
==64809==    by 0x40732D: get_next_line (get_next_line.c:33)
==64809==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64809==    by 0x40596F: main (mandatory.cpp:57)
==64809==  Address 0x4de7450 is 0 bytes after a block of size 0 alloc'd
==64809==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64809==    by 0x407867: f_del_front_bn (get_next_line_utils.c:135)
==64809==    by 0x407410: get_next_line (get_next_line.c:66)
==64809==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64809==    by 0x405963: main (mandatory.cpp:57)
==64809== 
==64809== Invalid read of size 1
==64809==    at 0x407532: ft_strchr (get_next_line_utils.c:25)
==64809==    by 0x407384: get_next_line (get_next_line.c:46)
==64809==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64809==    by 0x40596F: main (mandatory.cpp:57)
==64809==  Address 0x4de7450 is 0 bytes after a block of size 0 alloc'd
==64809==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64809==    by 0x407867: f_del_front_bn (get_next_line_utils.c:135)
==64809==    by 0x407410: get_next_line (get_next_line.c:66)
==64809==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64809==    by 0x405963: main (mandatory.cpp:57)
==64809== 
==64809== Invalid read of size 1
==64809==    at 0x4073D4: get_next_line (get_next_line.c:61)
==64809==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64809==    by 0x40596F: main (mandatory.cpp:57)
==64809==  Address 0x4de7450 is 0 bytes after a block of size 0 alloc'd
==64809==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64809==    by 0x407867: f_del_front_bn (get_next_line_utils.c:135)
==64809==    by 0x407410: get_next_line (get_next_line.c:66)
==64809==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64809==    by 0x405963: main (mandatory.cpp:57)
==64809== 
==64809== 2 bytes in 1 blocks are definitely lost in loss record 2 of 5
==64809==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64809==    by 0x4072FC: get_next_line (get_next_line.c:27)
==64809==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64809==    by 0x405963: main (mandatory.cpp:57)
==64809== 
==64809== 2 bytes in 1 blocks are definitely lost in loss record 3 of 5
==64809==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64809==    by 0x4072FC: get_next_line (get_next_line.c:27)
==64809==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64809==    by 0x40596F: main (mandatory.cpp:57)
==64809== 
==64809== 3 bytes in 1 blocks are definitely lost in loss record 4 of 5
==64809==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64809==    by 0x407735: f_search_bn (get_next_line_utils.c:97)
==64809==    by 0x4073E9: get_next_line (get_next_line.c:63)
==64809==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64809==    by 0x405963: main (mandatory.cpp:57)
==64809== 
==64809== 43 bytes in 1 blocks are definitely lost in loss record 5 of 5
==64809==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64809==    by 0x4075D8: ft_strjoin (get_next_line_utils.c:58)
==64809==    by 0x407494: get_next_line (get_next_line.c:100)
==64809==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64809==    by 0x405951: main (mandatory.cpp:57)
==64809== 
==64813== Invalid read of size 1
==64813==    at 0x4078BE: f_del_front_bn (get_next_line_utils.c:142)
==64813==    by 0x407410: get_next_line (get_next_line.c:66)
==64813==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64813==    by 0x405B99: main (mandatory.cpp:68)
==64813==  Address 0x4de758c is 0 bytes after a block of size 44 alloc'd
==64813==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64813==    by 0x4075D8: ft_strjoin (get_next_line_utils.c:58)
==64813==    by 0x407494: get_next_line (get_next_line.c:100)
==64813==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64813==    by 0x405B99: main (mandatory.cpp:68)
==64813== 
==64813== Invalid write of size 1
==64813==    at 0x4078D2: f_del_front_bn (get_next_line_utils.c:148)
==64813==    by 0x407410: get_next_line (get_next_line.c:66)
==64813==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64813==    by 0x405B99: main (mandatory.cpp:68)
==64813==  Address 0x4de76b0 is 0 bytes after a block of size 0 alloc'd
==64813==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64813==    by 0x407867: f_del_front_bn (get_next_line_utils.c:135)
==64813==    by 0x407410: get_next_line (get_next_line.c:66)
==64813==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64813==    by 0x405B99: main (mandatory.cpp:68)
==64813== 
==64813== Invalid read of size 1
==64813==    at 0x407532: ft_strchr (get_next_line_utils.c:25)
==64813==    by 0x40732D: get_next_line (get_next_line.c:33)
==64813==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64813==    by 0x405BA5: main (mandatory.cpp:68)
==64813==  Address 0x4de76b0 is 0 bytes after a block of size 0 alloc'd
==64813==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64813==    by 0x407867: f_del_front_bn (get_next_line_utils.c:135)
==64813==    by 0x407410: get_next_line (get_next_line.c:66)
==64813==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64813==    by 0x405B99: main (mandatory.cpp:68)
==64813== 
==64813== Invalid read of size 1
==64813==    at 0x407532: ft_strchr (get_next_line_utils.c:25)
==64813==    by 0x407384: get_next_line (get_next_line.c:46)
==64813==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64813==    by 0x405BA5: main (mandatory.cpp:68)
==64813==  Address 0x4de76b0 is 0 bytes after a block of size 0 alloc'd
==64813==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64813==    by 0x407867: f_del_front_bn (get_next_line_utils.c:135)
==64813==    by 0x407410: get_next_line (get_next_line.c:66)
==64813==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64813==    by 0x405B99: main (mandatory.cpp:68)
==64813== 
==64813== Invalid read of size 1
==64813==    at 0x4073D4: get_next_line (get_next_line.c:61)
==64813==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64813==    by 0x405BA5: main (mandatory.cpp:68)
==64813==  Address 0x4de76b0 is 0 bytes after a block of size 0 alloc'd
==64813==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64813==    by 0x407867: f_del_front_bn (get_next_line_utils.c:135)
==64813==    by 0x407410: get_next_line (get_next_line.c:66)
==64813==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64813==    by 0x405B99: main (mandatory.cpp:68)
==64813== 
==64813== 2 bytes in 1 blocks are definitely lost in loss record 2 of 4
==64813==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64813==    by 0x4072FC: get_next_line (get_next_line.c:27)
==64813==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64813==    by 0x405B99: main (mandatory.cpp:68)
==64813== 
==64813== 2 bytes in 1 blocks are definitely lost in loss record 3 of 4
==64813==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64813==    by 0x4072FC: get_next_line (get_next_line.c:27)
==64813==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64813==    by 0x405BA5: main (mandatory.cpp:68)
==64813== 
==64813== 45 bytes in 1 blocks are definitely lost in loss record 4 of 4
==64813==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64813==    by 0x407735: f_search_bn (get_next_line_utils.c:97)
==64813==    by 0x4073E9: get_next_line (get_next_line.c:63)
==64813==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64813==    by 0x405B99: main (mandatory.cpp:68)
==64813== 
==64815== Invalid read of size 1
==64815==    at 0x4078BE: f_del_front_bn (get_next_line_utils.c:142)
==64815==    by 0x407410: get_next_line (get_next_line.c:66)
==64815==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64815==    by 0x405DD7: main (mandatory.cpp:73)
==64815==  Address 0x4de79f2 is 0 bytes after a block of size 2 alloc'd
==64815==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64815==    by 0x4075D8: ft_strjoin (get_next_line_utils.c:58)
==64815==    by 0x407494: get_next_line (get_next_line.c:100)
==64815==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64815==    by 0x405DD7: main (mandatory.cpp:73)
==64815== 
==64815== Invalid write of size 1
==64815==    at 0x4078D2: f_del_front_bn (get_next_line_utils.c:148)
==64815==    by 0x407410: get_next_line (get_next_line.c:66)
==64815==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64815==    by 0x405DD7: main (mandatory.cpp:73)
==64815==  Address 0x4de7ae0 is 0 bytes after a block of size 0 alloc'd
==64815==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64815==    by 0x407867: f_del_front_bn (get_next_line_utils.c:135)
==64815==    by 0x407410: get_next_line (get_next_line.c:66)
==64815==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64815==    by 0x405DD7: main (mandatory.cpp:73)
==64815== 
==64815== Invalid read of size 1
==64815==    at 0x407532: ft_strchr (get_next_line_utils.c:25)
==64815==    by 0x40732D: get_next_line (get_next_line.c:33)
==64815==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64815==    by 0x405DE3: main (mandatory.cpp:73)
==64815==  Address 0x4de7ae0 is 0 bytes after a block of size 0 alloc'd
==64815==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64815==    by 0x407867: f_del_front_bn (get_next_line_utils.c:135)
==64815==    by 0x407410: get_next_line (get_next_line.c:66)
==64815==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64815==    by 0x405DD7: main (mandatory.cpp:73)
==64815== 
==64815== Invalid read of size 1
==64815==    at 0x407532: ft_strchr (get_next_line_utils.c:25)
==64815==    by 0x407384: get_next_line (get_next_line.c:46)
==64815==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64815==    by 0x405DE3: main (mandatory.cpp:73)
==64815==  Address 0x4de7ae0 is 0 bytes after a block of size 0 alloc'd
==64815==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64815==    by 0x407867: f_del_front_bn (get_next_line_utils.c:135)
==64815==    by 0x407410: get_next_line (get_next_line.c:66)
==64815==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64815==    by 0x405DD7: main (mandatory.cpp:73)
==64815== 
==64815== Invalid read of size 1
==64815==    at 0x4073D4: get_next_line (get_next_line.c:61)
==64815==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64815==    by 0x405DE3: main (mandatory.cpp:73)
==64815==  Address 0x4de7ae0 is 0 bytes after a block of size 0 alloc'd
==64815==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64815==    by 0x407867: f_del_front_bn (get_next_line_utils.c:135)
==64815==    by 0x407410: get_next_line (get_next_line.c:66)
==64815==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64815==    by 0x405DD7: main (mandatory.cpp:73)
==64815== 
==64815== 2 bytes in 1 blocks are definitely lost in loss record 2 of 5
==64815==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64815==    by 0x4072FC: get_next_line (get_next_line.c:27)
==64815==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64815==    by 0x405DD7: main (mandatory.cpp:73)
==64815== 
==64815== 2 bytes in 1 blocks are definitely lost in loss record 3 of 5
==64815==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64815==    by 0x4072FC: get_next_line (get_next_line.c:27)
==64815==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64815==    by 0x405DE3: main (mandatory.cpp:73)
==64815== 
==64815== 3 bytes in 1 blocks are definitely lost in loss record 4 of 5
==64815==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64815==    by 0x407735: f_search_bn (get_next_line_utils.c:97)
==64815==    by 0x4073E9: get_next_line (get_next_line.c:63)
==64815==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64815==    by 0x405DD7: main (mandatory.cpp:73)
==64815== 
==64815== 44 bytes in 1 blocks are definitely lost in loss record 5 of 5
==64815==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64815==    by 0x4075D8: ft_strjoin (get_next_line_utils.c:58)
==64815==    by 0x407494: get_next_line (get_next_line.c:100)
==64815==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64815==    by 0x405DC5: main (mandatory.cpp:73)
==64815== 
==64818== 2 bytes in 1 blocks are definitely lost in loss record 2 of 7
==64818==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64818==    by 0x4075D8: ft_strjoin (get_next_line_utils.c:58)
==64818==    by 0x407494: get_next_line (get_next_line.c:100)
==64818==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64818==    by 0x406003: main (mandatory.cpp:79)
==64818== 
==64818== 2 bytes in 1 blocks are definitely lost in loss record 3 of 7
==64818==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64818==    by 0x4075D8: ft_strjoin (get_next_line_utils.c:58)
==64818==    by 0x407494: get_next_line (get_next_line.c:100)
==64818==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64818==    by 0x406015: main (mandatory.cpp:79)
==64818== 
==64818== 2 bytes in 1 blocks are definitely lost in loss record 4 of 7
==64818==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64818==    by 0x4075D8: ft_strjoin (get_next_line_utils.c:58)
==64818==    by 0x407494: get_next_line (get_next_line.c:100)
==64818==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64818==    by 0x406027: main (mandatory.cpp:79)
==64818== 
==64818== 2 bytes in 1 blocks are definitely lost in loss record 5 of 7
==64818==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64818==    by 0x4075D8: ft_strjoin (get_next_line_utils.c:58)
==64818==    by 0x407494: get_next_line (get_next_line.c:100)
==64818==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64818==    by 0x406039: main (mandatory.cpp:79)
==64818== 
==64818== 2 bytes in 1 blocks are definitely lost in loss record 6 of 7
==64818==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64818==    by 0x4075D8: ft_strjoin (get_next_line_utils.c:58)
==64818==    by 0x407494: get_next_line (get_next_line.c:100)
==64818==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64818==    by 0x40604B: main (mandatory.cpp:79)
==64818== 
==64818== 2 bytes in 1 blocks are definitely lost in loss record 7 of 7
==64818==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64818==    by 0x4072FC: get_next_line (get_next_line.c:27)
==64818==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64818==    by 0x406057: main (mandatory.cpp:79)
==64818== 
==64823== Invalid read of size 1
==64823==    at 0x4078BE: f_del_front_bn (get_next_line_utils.c:142)
==64823==    by 0x407410: get_next_line (get_next_line.c:66)
==64823==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64823==    by 0x4062BF: main (mandatory.cpp:88)
==64823==  Address 0x4dec1fa is 0 bytes after a block of size 42 alloc'd
==64823==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64823==    by 0x4075D8: ft_strjoin (get_next_line_utils.c:58)
==64823==    by 0x407494: get_next_line (get_next_line.c:100)
==64823==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64823==    by 0x4062BF: main (mandatory.cpp:88)
==64823== 
==64823== Invalid write of size 1
==64823==    at 0x4078D2: f_del_front_bn (get_next_line_utils.c:148)
==64823==    by 0x407410: get_next_line (get_next_line.c:66)
==64823==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64823==    by 0x4062BF: main (mandatory.cpp:88)
==64823==  Address 0x4dec320 is 0 bytes after a block of size 0 alloc'd
==64823==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64823==    by 0x407867: f_del_front_bn (get_next_line_utils.c:135)
==64823==    by 0x407410: get_next_line (get_next_line.c:66)
==64823==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64823==    by 0x4062BF: main (mandatory.cpp:88)
==64823== 
==64823== Invalid read of size 1
==64823==    at 0x407532: ft_strchr (get_next_line_utils.c:25)
==64823==    by 0x40732D: get_next_line (get_next_line.c:33)
==64823==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64823==    by 0x4062CB: main (mandatory.cpp:88)
==64823==  Address 0x4dec320 is 0 bytes after a block of size 0 alloc'd
==64823==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64823==    by 0x407867: f_del_front_bn (get_next_line_utils.c:135)
==64823==    by 0x407410: get_next_line (get_next_line.c:66)
==64823==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64823==    by 0x4062BF: main (mandatory.cpp:88)
==64823== 
==64823== Invalid read of size 1
==64823==    at 0x407532: ft_strchr (get_next_line_utils.c:25)
==64823==    by 0x407384: get_next_line (get_next_line.c:46)
==64823==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64823==    by 0x4062CB: main (mandatory.cpp:88)
==64823==  Address 0x4dec320 is 0 bytes after a block of size 0 alloc'd
==64823==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64823==    by 0x407867: f_del_front_bn (get_next_line_utils.c:135)
==64823==    by 0x407410: get_next_line (get_next_line.c:66)
==64823==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64823==    by 0x4062BF: main (mandatory.cpp:88)
==64823== 
==64823== Invalid read of size 1
==64823==    at 0x4073D4: get_next_line (get_next_line.c:61)
==64823==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64823==    by 0x4062CB: main (mandatory.cpp:88)
==64823==  Address 0x4dec320 is 0 bytes after a block of size 0 alloc'd
==64823==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64823==    by 0x407867: f_del_front_bn (get_next_line_utils.c:135)
==64823==    by 0x407410: get_next_line (get_next_line.c:66)
==64823==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64823==    by 0x4062BF: main (mandatory.cpp:88)
==64823== 
==64823== 2 bytes in 1 blocks are definitely lost in loss record 2 of 8
==64823==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64823==    by 0x4072FC: get_next_line (get_next_line.c:27)
==64823==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64823==    by 0x4062BF: main (mandatory.cpp:88)
==64823== 
==64823== 2 bytes in 1 blocks are definitely lost in loss record 3 of 8
==64823==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64823==    by 0x4072FC: get_next_line (get_next_line.c:27)
==64823==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64823==    by 0x4062CB: main (mandatory.cpp:88)
==64823== 
==64823== 43 bytes in 1 blocks are definitely lost in loss record 4 of 8
==64823==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64823==    by 0x4075D8: ft_strjoin (get_next_line_utils.c:58)
==64823==    by 0x407494: get_next_line (get_next_line.c:100)
==64823==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64823==    by 0x406277: main (mandatory.cpp:88)
==64823== 
==64823== 43 bytes in 1 blocks are definitely lost in loss record 5 of 8
==64823==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64823==    by 0x407735: f_search_bn (get_next_line_utils.c:97)
==64823==    by 0x4073E9: get_next_line (get_next_line.c:63)
==64823==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64823==    by 0x4062BF: main (mandatory.cpp:88)
==64823== 
==64823== 44 bytes in 1 blocks are definitely lost in loss record 6 of 8
==64823==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64823==    by 0x4075D8: ft_strjoin (get_next_line_utils.c:58)
==64823==    by 0x407494: get_next_line (get_next_line.c:100)
==64823==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64823==    by 0x406289: main (mandatory.cpp:88)
==64823== 
==64823== 44 bytes in 1 blocks are definitely lost in loss record 7 of 8
==64823==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64823==    by 0x4075D8: ft_strjoin (get_next_line_utils.c:58)
==64823==    by 0x407494: get_next_line (get_next_line.c:100)
==64823==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64823==    by 0x4062AD: main (mandatory.cpp:88)
==64823== 
==64823== 45 bytes in 1 blocks are definitely lost in loss record 8 of 8
==64823==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64823==    by 0x4075D8: ft_strjoin (get_next_line_utils.c:58)
==64823==    by 0x407494: get_next_line (get_next_line.c:100)
==64823==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64823==    by 0x40629B: main (mandatory.cpp:88)
==64823== 
==64826== 2 bytes in 1 blocks are definitely lost in loss record 2 of 7
==64826==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64826==    by 0x4072FC: get_next_line (get_next_line.c:27)
==64826==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64826==    by 0x40653F: main (mandatory.cpp:97)
==64826== 
==64826== 42 bytes in 1 blocks are definitely lost in loss record 3 of 7
==64826==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64826==    by 0x4075D8: ft_strjoin (get_next_line_utils.c:58)
==64826==    by 0x407494: get_next_line (get_next_line.c:100)
==64826==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64826==    by 0x4064EB: main (mandatory.cpp:97)
==64826== 
==64826== 42 bytes in 1 blocks are definitely lost in loss record 4 of 7
==64826==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64826==    by 0x4075D8: ft_strjoin (get_next_line_utils.c:58)
==64826==    by 0x407494: get_next_line (get_next_line.c:100)
==64826==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64826==    by 0x406533: main (mandatory.cpp:97)
==64826== 
==64826== 43 bytes in 1 blocks are definitely lost in loss record 5 of 7
==64826==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64826==    by 0x4075D8: ft_strjoin (get_next_line_utils.c:58)
==64826==    by 0x407494: get_next_line (get_next_line.c:100)
==64826==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64826==    by 0x4064FD: main (mandatory.cpp:97)
==64826== 
==64826== 43 bytes in 1 blocks are definitely lost in loss record 6 of 7
==64826==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64826==    by 0x4075D8: ft_strjoin (get_next_line_utils.c:58)
==64826==    by 0x407494: get_next_line (get_next_line.c:100)
==64826==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64826==    by 0x406521: main (mandatory.cpp:97)
==64826== 
==64826== 44 bytes in 1 blocks are definitely lost in loss record 7 of 7
==64826==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64826==    by 0x4075D8: ft_strjoin (get_next_line_utils.c:58)
==64826==    by 0x407494: get_next_line (get_next_line.c:100)
==64826==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64826==    by 0x40650F: main (mandatory.cpp:97)
==64826== 
==64829== Invalid read of size 1
==64829==    at 0x4078BE: f_del_front_bn (get_next_line_utils.c:142)
==64829==    by 0x407410: get_next_line (get_next_line.c:66)
==64829==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64829==    by 0x4067EF: main (mandatory.cpp:106)
==64829==  Address 0x4decd5a is 0 bytes after a block of size 42 alloc'd
==64829==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64829==    by 0x4075D8: ft_strjoin (get_next_line_utils.c:58)
==64829==    by 0x407494: get_next_line (get_next_line.c:100)
==64829==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64829==    by 0x4067EF: main (mandatory.cpp:106)
==64829== 
==64829== Invalid write of size 1
==64829==    at 0x4078D2: f_del_front_bn (get_next_line_utils.c:148)
==64829==    by 0x407410: get_next_line (get_next_line.c:66)
==64829==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64829==    by 0x4067EF: main (mandatory.cpp:106)
==64829==  Address 0x4dece80 is 0 bytes after a block of size 0 alloc'd
==64829==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64829==    by 0x407867: f_del_front_bn (get_next_line_utils.c:135)
==64829==    by 0x407410: get_next_line (get_next_line.c:66)
==64829==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64829==    by 0x4067EF: main (mandatory.cpp:106)
==64829== 
==64829== Invalid read of size 1
==64829==    at 0x407532: ft_strchr (get_next_line_utils.c:25)
==64829==    by 0x40732D: get_next_line (get_next_line.c:33)
==64829==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64829==    by 0x4067FB: main (mandatory.cpp:106)
==64829==  Address 0x4dece80 is 0 bytes after a block of size 0 alloc'd
==64829==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64829==    by 0x407867: f_del_front_bn (get_next_line_utils.c:135)
==64829==    by 0x407410: get_next_line (get_next_line.c:66)
==64829==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64829==    by 0x4067EF: main (mandatory.cpp:106)
==64829== 
==64829== Invalid read of size 1
==64829==    at 0x407532: ft_strchr (get_next_line_utils.c:25)
==64829==    by 0x407384: get_next_line (get_next_line.c:46)
==64829==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64829==    by 0x4067FB: main (mandatory.cpp:106)
==64829==  Address 0x4dece80 is 0 bytes after a block of size 0 alloc'd
==64829==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64829==    by 0x407867: f_del_front_bn (get_next_line_utils.c:135)
==64829==    by 0x407410: get_next_line (get_next_line.c:66)
==64829==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64829==    by 0x4067EF: main (mandatory.cpp:106)
==64829== 
==64829== Invalid read of size 1
==64829==    at 0x4073D4: get_next_line (get_next_line.c:61)
==64829==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64829==    by 0x4067FB: main (mandatory.cpp:106)
==64829==  Address 0x4dece80 is 0 bytes after a block of size 0 alloc'd
==64829==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64829==    by 0x407867: f_del_front_bn (get_next_line_utils.c:135)
==64829==    by 0x407410: get_next_line (get_next_line.c:66)
==64829==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64829==    by 0x4067EF: main (mandatory.cpp:106)
==64829== 
==64829== 2 bytes in 1 blocks are definitely lost in loss record 2 of 12
==64829==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64829==    by 0x4075D8: ft_strjoin (get_next_line_utils.c:58)
==64829==    by 0x407494: get_next_line (get_next_line.c:100)
==64829==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64829==    by 0x406771: main (mandatory.cpp:106)
==64829== 
==64829== 2 bytes in 1 blocks are definitely lost in loss record 3 of 12
==64829==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64829==    by 0x4075D8: ft_strjoin (get_next_line_utils.c:58)
==64829==    by 0x407494: get_next_line (get_next_line.c:100)
==64829==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64829==    by 0x406795: main (mandatory.cpp:106)
==64829== 
==64829== 2 bytes in 1 blocks are definitely lost in loss record 4 of 12
==64829==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64829==    by 0x4075D8: ft_strjoin (get_next_line_utils.c:58)
==64829==    by 0x407494: get_next_line (get_next_line.c:100)
==64829==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64829==    by 0x4067B9: main (mandatory.cpp:106)
==64829== 
==64829== 2 bytes in 1 blocks are definitely lost in loss record 5 of 12
==64829==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64829==    by 0x4075D8: ft_strjoin (get_next_line_utils.c:58)
==64829==    by 0x407494: get_next_line (get_next_line.c:100)
==64829==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64829==    by 0x4067DD: main (mandatory.cpp:106)
==64829== 
==64829== 2 bytes in 1 blocks are definitely lost in loss record 6 of 12
==64829==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64829==    by 0x4072FC: get_next_line (get_next_line.c:27)
==64829==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64829==    by 0x4067EF: main (mandatory.cpp:106)
==64829== 
==64829== 2 bytes in 1 blocks are definitely lost in loss record 7 of 12
==64829==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64829==    by 0x4072FC: get_next_line (get_next_line.c:27)
==64829==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64829==    by 0x4067FB: main (mandatory.cpp:106)
==64829== 
==64829== 43 bytes in 1 blocks are definitely lost in loss record 8 of 12
==64829==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64829==    by 0x4075D8: ft_strjoin (get_next_line_utils.c:58)
==64829==    by 0x407494: get_next_line (get_next_line.c:100)
==64829==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64829==    by 0x40675F: main (mandatory.cpp:106)
==64829== 
==64829== 43 bytes in 1 blocks are definitely lost in loss record 9 of 12
==64829==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64829==    by 0x407735: f_search_bn (get_next_line_utils.c:97)
==64829==    by 0x4073E9: get_next_line (get_next_line.c:63)
==64829==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64829==    by 0x4067EF: main (mandatory.cpp:106)
==64829== 
==64829== 44 bytes in 1 blocks are definitely lost in loss record 10 of 12
==64829==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64829==    by 0x4075D8: ft_strjoin (get_next_line_utils.c:58)
==64829==    by 0x407494: get_next_line (get_next_line.c:100)
==64829==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64829==    by 0x406783: main (mandatory.cpp:106)
==64829== 
==64829== 44 bytes in 1 blocks are definitely lost in loss record 11 of 12
==64829==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64829==    by 0x4075D8: ft_strjoin (get_next_line_utils.c:58)
==64829==    by 0x407494: get_next_line (get_next_line.c:100)
==64829==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64829==    by 0x4067CB: main (mandatory.cpp:106)
==64829== 
==64829== 45 bytes in 1 blocks are definitely lost in loss record 12 of 12
==64829==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64829==    by 0x4075D8: ft_strjoin (get_next_line_utils.c:58)
==64829==    by 0x407494: get_next_line (get_next_line.c:100)
==64829==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64829==    by 0x4067A7: main (mandatory.cpp:106)
==64829== 
==64831== 2 bytes in 1 blocks are definitely lost in loss record 2 of 11
==64831==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64831==    by 0x4075D8: ft_strjoin (get_next_line_utils.c:58)
==64831==    by 0x407494: get_next_line (get_next_line.c:100)
==64831==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64831==    by 0x406A2D: main (mandatory.cpp:119)
==64831== 
==64831== 2 bytes in 1 blocks are definitely lost in loss record 3 of 11
==64831==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64831==    by 0x4075D8: ft_strjoin (get_next_line_utils.c:58)
==64831==    by 0x407494: get_next_line (get_next_line.c:100)
==64831==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64831==    by 0x406A51: main (mandatory.cpp:119)
==64831== 
==64831== 2 bytes in 1 blocks are definitely lost in loss record 4 of 11
==64831==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64831==    by 0x4075D8: ft_strjoin (get_next_line_utils.c:58)
==64831==    by 0x407494: get_next_line (get_next_line.c:100)
==64831==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64831==    by 0x406A75: main (mandatory.cpp:119)
==64831== 
==64831== 2 bytes in 1 blocks are definitely lost in loss record 5 of 11
==64831==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64831==    by 0x4075D8: ft_strjoin (get_next_line_utils.c:58)
==64831==    by 0x407494: get_next_line (get_next_line.c:100)
==64831==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64831==    by 0x406A99: main (mandatory.cpp:119)
==64831== 
==64831== 2 bytes in 1 blocks are definitely lost in loss record 6 of 11
==64831==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64831==    by 0x4072FC: get_next_line (get_next_line.c:27)
==64831==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64831==    by 0x406AB7: main (mandatory.cpp:119)
==64831== 
==64831== 43 bytes in 1 blocks are definitely lost in loss record 7 of 11
==64831==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64831==    by 0x4075D8: ft_strjoin (get_next_line_utils.c:58)
==64831==    by 0x407494: get_next_line (get_next_line.c:100)
==64831==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64831==    by 0x406A1B: main (mandatory.cpp:119)
==64831== 
==64831== 43 bytes in 1 blocks are definitely lost in loss record 8 of 11
==64831==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64831==    by 0x4075D8: ft_strjoin (get_next_line_utils.c:58)
==64831==    by 0x407494: get_next_line (get_next_line.c:100)
==64831==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64831==    by 0x406AAB: main (mandatory.cpp:119)
==64831== 
==64831== 44 bytes in 1 blocks are definitely lost in loss record 9 of 11
==64831==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64831==    by 0x4075D8: ft_strjoin (get_next_line_utils.c:58)
==64831==    by 0x407494: get_next_line (get_next_line.c:100)
==64831==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64831==    by 0x406A3F: main (mandatory.cpp:119)
==64831== 
==64831== 44 bytes in 1 blocks are definitely lost in loss record 10 of 11
==64831==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64831==    by 0x4075D8: ft_strjoin (get_next_line_utils.c:58)
==64831==    by 0x407494: get_next_line (get_next_line.c:100)
==64831==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64831==    by 0x406A87: main (mandatory.cpp:119)
==64831== 
==64831== 45 bytes in 1 blocks are definitely lost in loss record 11 of 11
==64831==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64831==    by 0x4075D8: ft_strjoin (get_next_line_utils.c:58)
==64831==    by 0x407494: get_next_line (get_next_line.c:100)
==64831==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64831==    by 0x406A63: main (mandatory.cpp:119)
==64831== 
==64839== Invalid read of size 1
==64839==    at 0x484FBD4: strcmp (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64839==    by 0x402D0A: gnl(int, char const*) (gnl.cpp:24)
==64839==    by 0x40712E: main (mandatory.cpp:141)
==64839==  Address 0x0 is not stack'd, malloc'd or (recently) free'd
==64839== 
==64867== Invalid write of size 1
==64867==    at 0x4073E2: get_next_line (get_next_line.c:49)
==64867==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64867==    by 0x404BC6: main (mandatory.cpp:25)
==64867==  Address 0x4de429f is 1 bytes before a block of size 43 alloc'd
==64867==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64867==    by 0x40732E: get_next_line (get_next_line.c:27)
==64867==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64867==    by 0x404BC6: main (mandatory.cpp:25)
==64867== 
==64867== Invalid write of size 1
==64867==    at 0x4073E2: get_next_line (get_next_line.c:49)
==64867==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64867==    by 0x404BE8: main (mandatory.cpp:25)
==64867==  Address 0x4de430f is 1 bytes before a block of size 43 alloc'd
==64867==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64867==    by 0x40732E: get_next_line (get_next_line.c:27)
==64867==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64867==    by 0x404BE8: main (mandatory.cpp:25)
==64867== 
==64867== 43 bytes in 1 blocks are definitely lost in loss record 1 of 2
==64867==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64867==    by 0x40732E: get_next_line (get_next_line.c:27)
==64867==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64867==    by 0x404BC6: main (mandatory.cpp:25)
==64867== 
==64867== 43 bytes in 1 blocks are definitely lost in loss record 2 of 2
==64867==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64867==    by 0x40732E: get_next_line (get_next_line.c:27)
==64867==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64867==    by 0x404BE8: main (mandatory.cpp:25)
==64867== 
==64870== Invalid read of size 1
==64870==    at 0x407406: get_next_line (get_next_line.c:61)
==64870==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64870==    by 0x404E63: main (mandatory.cpp:31)
==64870==  Address 0x0 is not stack'd, malloc'd or (recently) free'd
==64870== 
==64871== 2 bytes in 1 blocks are definitely lost in loss record 2 of 3
==64871==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64871==    by 0x40760A: ft_strjoin (get_next_line_utils.c:58)
==64871==    by 0x4074C6: get_next_line (get_next_line.c:100)
==64871==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64871==    by 0x40508F: main (mandatory.cpp:36)
==64871== 
==64871== 43 bytes in 1 blocks are definitely lost in loss record 3 of 3
==64871==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64871==    by 0x40732E: get_next_line (get_next_line.c:27)
==64871==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64871==    by 0x40509B: main (mandatory.cpp:36)
==64871== 
==64879== Invalid read of size 1
==64879==    at 0x4078F0: f_del_front_bn (get_next_line_utils.c:142)
==64879==    by 0x407442: get_next_line (get_next_line.c:66)
==64879==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64879==    by 0x4052BB: main (mandatory.cpp:41)
==64879==  Address 0x4de59ea is 0 bytes after a block of size 42 alloc'd
==64879==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64879==    by 0x40760A: ft_strjoin (get_next_line_utils.c:58)
==64879==    by 0x4074C6: get_next_line (get_next_line.c:100)
==64879==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64879==    by 0x4052BB: main (mandatory.cpp:41)
==64879== 
==64879== Invalid write of size 1
==64879==    at 0x407904: f_del_front_bn (get_next_line_utils.c:148)
==64879==    by 0x407442: get_next_line (get_next_line.c:66)
==64879==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64879==    by 0x4052BB: main (mandatory.cpp:41)
==64879==  Address 0x4de5b10 is 0 bytes after a block of size 0 alloc'd
==64879==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64879==    by 0x407899: f_del_front_bn (get_next_line_utils.c:135)
==64879==    by 0x407442: get_next_line (get_next_line.c:66)
==64879==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64879==    by 0x4052BB: main (mandatory.cpp:41)
==64879== 
==64879== Invalid read of size 1
==64879==    at 0x407564: ft_strchr (get_next_line_utils.c:25)
==64879==    by 0x40735F: get_next_line (get_next_line.c:33)
==64879==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64879==    by 0x4052C7: main (mandatory.cpp:41)
==64879==  Address 0x4de5b10 is 0 bytes after a block of size 0 alloc'd
==64879==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64879==    by 0x407899: f_del_front_bn (get_next_line_utils.c:135)
==64879==    by 0x407442: get_next_line (get_next_line.c:66)
==64879==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64879==    by 0x4052BB: main (mandatory.cpp:41)
==64879== 
==64879== Invalid read of size 1
==64879==    at 0x407564: ft_strchr (get_next_line_utils.c:25)
==64879==    by 0x4073B6: get_next_line (get_next_line.c:46)
==64879==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64879==    by 0x4052C7: main (mandatory.cpp:41)
==64879==  Address 0x4de5b10 is 0 bytes after a block of size 0 alloc'd
==64879==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64879==    by 0x407899: f_del_front_bn (get_next_line_utils.c:135)
==64879==    by 0x407442: get_next_line (get_next_line.c:66)
==64879==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64879==    by 0x4052BB: main (mandatory.cpp:41)
==64879== 
==64879== Invalid read of size 1
==64879==    at 0x407406: get_next_line (get_next_line.c:61)
==64879==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64879==    by 0x4052C7: main (mandatory.cpp:41)
==64879==  Address 0x4de5b10 is 0 bytes after a block of size 0 alloc'd
==64879==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64879==    by 0x407899: f_del_front_bn (get_next_line_utils.c:135)
==64879==    by 0x407442: get_next_line (get_next_line.c:66)
==64879==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64879==    by 0x4052BB: main (mandatory.cpp:41)
==64879== 
==64879== 43 bytes in 1 blocks are definitely lost in loss record 2 of 4
==64879==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64879==    by 0x40732E: get_next_line (get_next_line.c:27)
==64879==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64879==    by 0x4052BB: main (mandatory.cpp:41)
==64879== 
==64879== 43 bytes in 1 blocks are definitely lost in loss record 3 of 4
==64879==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64879==    by 0x407767: f_search_bn (get_next_line_utils.c:97)
==64879==    by 0x40741B: get_next_line (get_next_line.c:63)
==64879==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64879==    by 0x4052BB: main (mandatory.cpp:41)
==64879== 
==64879== 43 bytes in 1 blocks are definitely lost in loss record 4 of 4
==64879==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64879==    by 0x40732E: get_next_line (get_next_line.c:27)
==64879==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64879==    by 0x4052C7: main (mandatory.cpp:41)
==64879== 
==64882== Invalid read of size 1
==64882==    at 0x4078F0: f_del_front_bn (get_next_line_utils.c:142)
==64882==    by 0x407442: get_next_line (get_next_line.c:66)
==64882==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64882==    by 0x4054F9: main (mandatory.cpp:46)
==64882==  Address 0x4de5db2 is 0 bytes after a block of size 2 alloc'd
==64882==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64882==    by 0x407899: f_del_front_bn (get_next_line_utils.c:135)
==64882==    by 0x407505: get_next_line (get_next_line.c:105)
==64882==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64882==    by 0x4054E7: main (mandatory.cpp:46)
==64882== 
==64882== Invalid write of size 1
==64882==    at 0x407904: f_del_front_bn (get_next_line_utils.c:148)
==64882==    by 0x407442: get_next_line (get_next_line.c:66)
==64882==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64882==    by 0x4054F9: main (mandatory.cpp:46)
==64882==  Address 0x4de5f10 is 0 bytes after a block of size 0 alloc'd
==64882==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64882==    by 0x407899: f_del_front_bn (get_next_line_utils.c:135)
==64882==    by 0x407442: get_next_line (get_next_line.c:66)
==64882==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64882==    by 0x4054F9: main (mandatory.cpp:46)
==64882== 
==64882== Invalid read of size 1
==64882==    at 0x407564: ft_strchr (get_next_line_utils.c:25)
==64882==    by 0x40735F: get_next_line (get_next_line.c:33)
==64882==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64882==    by 0x405505: main (mandatory.cpp:46)
==64882==  Address 0x4de5f10 is 0 bytes after a block of size 0 alloc'd
==64882==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64882==    by 0x407899: f_del_front_bn (get_next_line_utils.c:135)
==64882==    by 0x407442: get_next_line (get_next_line.c:66)
==64882==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64882==    by 0x4054F9: main (mandatory.cpp:46)
==64882== 
==64882== Invalid read of size 1
==64882==    at 0x407564: ft_strchr (get_next_line_utils.c:25)
==64882==    by 0x4073B6: get_next_line (get_next_line.c:46)
==64882==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64882==    by 0x405505: main (mandatory.cpp:46)
==64882==  Address 0x4de5f10 is 0 bytes after a block of size 0 alloc'd
==64882==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64882==    by 0x407899: f_del_front_bn (get_next_line_utils.c:135)
==64882==    by 0x407442: get_next_line (get_next_line.c:66)
==64882==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64882==    by 0x4054F9: main (mandatory.cpp:46)
==64882== 
==64882== Invalid read of size 1
==64882==    at 0x407406: get_next_line (get_next_line.c:61)
==64882==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64882==    by 0x405505: main (mandatory.cpp:46)
==64882==  Address 0x4de5f10 is 0 bytes after a block of size 0 alloc'd
==64882==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64882==    by 0x407899: f_del_front_bn (get_next_line_utils.c:135)
==64882==    by 0x407442: get_next_line (get_next_line.c:66)
==64882==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64882==    by 0x4054F9: main (mandatory.cpp:46)
==64882== 
==64882== 3 bytes in 1 blocks are definitely lost in loss record 2 of 5
==64882==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64882==    by 0x407767: f_search_bn (get_next_line_utils.c:97)
==64882==    by 0x40741B: get_next_line (get_next_line.c:63)
==64882==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64882==    by 0x4054F9: main (mandatory.cpp:46)
==64882== 
==64882== 43 bytes in 1 blocks are definitely lost in loss record 3 of 5
==64882==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64882==    by 0x40760A: ft_strjoin (get_next_line_utils.c:58)
==64882==    by 0x4074C6: get_next_line (get_next_line.c:100)
==64882==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64882==    by 0x4054E7: main (mandatory.cpp:46)
==64882== 
==64882== 43 bytes in 1 blocks are definitely lost in loss record 4 of 5
==64882==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64882==    by 0x40732E: get_next_line (get_next_line.c:27)
==64882==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64882==    by 0x4054F9: main (mandatory.cpp:46)
==64882== 
==64882== 43 bytes in 1 blocks are definitely lost in loss record 5 of 5
==64882==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64882==    by 0x40732E: get_next_line (get_next_line.c:27)
==64882==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64882==    by 0x405505: main (mandatory.cpp:46)
==64882== 
==64886== Invalid read of size 1
==64886==    at 0x4078F0: f_del_front_bn (get_next_line_utils.c:142)
==64886==    by 0x407442: get_next_line (get_next_line.c:66)
==64886==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64886==    by 0x405725: main (mandatory.cpp:52)
==64886==  Address 0x4de600b is 0 bytes after a block of size 43 alloc'd
==64886==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64886==    by 0x40760A: ft_strjoin (get_next_line_utils.c:58)
==64886==    by 0x4074C6: get_next_line (get_next_line.c:100)
==64886==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64886==    by 0x405725: main (mandatory.cpp:52)
==64886== 
==64886== Invalid write of size 1
==64886==    at 0x407904: f_del_front_bn (get_next_line_utils.c:148)
==64886==    by 0x407442: get_next_line (get_next_line.c:66)
==64886==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64886==    by 0x405725: main (mandatory.cpp:52)
==64886==  Address 0x4de6130 is 0 bytes after a block of size 0 alloc'd
==64886==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64886==    by 0x407899: f_del_front_bn (get_next_line_utils.c:135)
==64886==    by 0x407442: get_next_line (get_next_line.c:66)
==64886==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64886==    by 0x405725: main (mandatory.cpp:52)
==64886== 
==64886== Invalid read of size 1
==64886==    at 0x407564: ft_strchr (get_next_line_utils.c:25)
==64886==    by 0x40735F: get_next_line (get_next_line.c:33)
==64886==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64886==    by 0x405731: main (mandatory.cpp:52)
==64886==  Address 0x4de6130 is 0 bytes after a block of size 0 alloc'd
==64886==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64886==    by 0x407899: f_del_front_bn (get_next_line_utils.c:135)
==64886==    by 0x407442: get_next_line (get_next_line.c:66)
==64886==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64886==    by 0x405725: main (mandatory.cpp:52)
==64886== 
==64886== Invalid read of size 1
==64886==    at 0x407564: ft_strchr (get_next_line_utils.c:25)
==64886==    by 0x4073B6: get_next_line (get_next_line.c:46)
==64886==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64886==    by 0x405731: main (mandatory.cpp:52)
==64886==  Address 0x4de6130 is 0 bytes after a block of size 0 alloc'd
==64886==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64886==    by 0x407899: f_del_front_bn (get_next_line_utils.c:135)
==64886==    by 0x407442: get_next_line (get_next_line.c:66)
==64886==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64886==    by 0x405725: main (mandatory.cpp:52)
==64886== 
==64886== Invalid read of size 1
==64886==    at 0x407406: get_next_line (get_next_line.c:61)
==64886==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64886==    by 0x405731: main (mandatory.cpp:52)
==64886==  Address 0x4de6130 is 0 bytes after a block of size 0 alloc'd
==64886==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64886==    by 0x407899: f_del_front_bn (get_next_line_utils.c:135)
==64886==    by 0x407442: get_next_line (get_next_line.c:66)
==64886==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64886==    by 0x405725: main (mandatory.cpp:52)
==64886== 
==64886== 43 bytes in 1 blocks are definitely lost in loss record 2 of 4
==64886==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64886==    by 0x40732E: get_next_line (get_next_line.c:27)
==64886==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64886==    by 0x405725: main (mandatory.cpp:52)
==64886== 
==64886== 43 bytes in 1 blocks are definitely lost in loss record 3 of 4
==64886==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64886==    by 0x40732E: get_next_line (get_next_line.c:27)
==64886==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64886==    by 0x405731: main (mandatory.cpp:52)
==64886== 
==64886== 44 bytes in 1 blocks are definitely lost in loss record 4 of 4
==64886==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64886==    by 0x407767: f_search_bn (get_next_line_utils.c:97)
==64886==    by 0x40741B: get_next_line (get_next_line.c:63)
==64886==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64886==    by 0x405725: main (mandatory.cpp:52)
==64886== 
==64889== 43 bytes in 1 blocks are definitely lost in loss record 2 of 3
==64889==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64889==    by 0x40760A: ft_strjoin (get_next_line_utils.c:58)
==64889==    by 0x4074C6: get_next_line (get_next_line.c:100)
==64889==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64889==    by 0x405951: main (mandatory.cpp:57)
==64889== 
==64889== 43 bytes in 1 blocks are definitely lost in loss record 3 of 3
==64889==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64889==    by 0x40732E: get_next_line (get_next_line.c:27)
==64889==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64889==    by 0x4059A1: main (mandatory.cpp:57)
==64889== 
==64890== Invalid read of size 1
==64890==    at 0x4078F0: f_del_front_bn (get_next_line_utils.c:142)
==64890==    by 0x407442: get_next_line (get_next_line.c:66)
==64890==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64890==    by 0x405BCB: main (mandatory.cpp:68)
==64890==  Address 0x4de669c is 0 bytes after a block of size 44 alloc'd
==64890==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64890==    by 0x40760A: ft_strjoin (get_next_line_utils.c:58)
==64890==    by 0x4074C6: get_next_line (get_next_line.c:100)
==64890==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64890==    by 0x405BCB: main (mandatory.cpp:68)
==64890== 
==64890== Invalid write of size 1
==64890==    at 0x407904: f_del_front_bn (get_next_line_utils.c:148)
==64890==    by 0x407442: get_next_line (get_next_line.c:66)
==64890==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64890==    by 0x405BCB: main (mandatory.cpp:68)
==64890==  Address 0x4de67c0 is 0 bytes after a block of size 0 alloc'd
==64890==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64890==    by 0x407899: f_del_front_bn (get_next_line_utils.c:135)
==64890==    by 0x407442: get_next_line (get_next_line.c:66)
==64890==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64890==    by 0x405BCB: main (mandatory.cpp:68)
==64890== 
==64890== Invalid read of size 1
==64890==    at 0x407564: ft_strchr (get_next_line_utils.c:25)
==64890==    by 0x40735F: get_next_line (get_next_line.c:33)
==64890==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64890==    by 0x405BD7: main (mandatory.cpp:68)
==64890==  Address 0x4de67c0 is 0 bytes after a block of size 0 alloc'd
==64890==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64890==    by 0x407899: f_del_front_bn (get_next_line_utils.c:135)
==64890==    by 0x407442: get_next_line (get_next_line.c:66)
==64890==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64890==    by 0x405BCB: main (mandatory.cpp:68)
==64890== 
==64890== Invalid read of size 1
==64890==    at 0x407564: ft_strchr (get_next_line_utils.c:25)
==64890==    by 0x4073B6: get_next_line (get_next_line.c:46)
==64890==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64890==    by 0x405BD7: main (mandatory.cpp:68)
==64890==  Address 0x4de67c0 is 0 bytes after a block of size 0 alloc'd
==64890==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64890==    by 0x407899: f_del_front_bn (get_next_line_utils.c:135)
==64890==    by 0x407442: get_next_line (get_next_line.c:66)
==64890==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64890==    by 0x405BCB: main (mandatory.cpp:68)
==64890== 
==64890== Invalid read of size 1
==64890==    at 0x407406: get_next_line (get_next_line.c:61)
==64890==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64890==    by 0x405BD7: main (mandatory.cpp:68)
==64890==  Address 0x4de67c0 is 0 bytes after a block of size 0 alloc'd
==64890==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64890==    by 0x407899: f_del_front_bn (get_next_line_utils.c:135)
==64890==    by 0x407442: get_next_line (get_next_line.c:66)
==64890==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64890==    by 0x405BCB: main (mandatory.cpp:68)
==64890== 
==64890== 43 bytes in 1 blocks are definitely lost in loss record 2 of 4
==64890==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64890==    by 0x40732E: get_next_line (get_next_line.c:27)
==64890==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64890==    by 0x405BCB: main (mandatory.cpp:68)
==64890== 
==64890== 43 bytes in 1 blocks are definitely lost in loss record 3 of 4
==64890==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64890==    by 0x40732E: get_next_line (get_next_line.c:27)
==64890==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64890==    by 0x405BD7: main (mandatory.cpp:68)
==64890== 
==64890== 45 bytes in 1 blocks are definitely lost in loss record 4 of 4
==64890==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64890==    by 0x407767: f_search_bn (get_next_line_utils.c:97)
==64890==    by 0x40741B: get_next_line (get_next_line.c:63)
==64890==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64890==    by 0x405BCB: main (mandatory.cpp:68)
==64890== 
==64894== Invalid read of size 1
==64894==    at 0x4078F0: f_del_front_bn (get_next_line_utils.c:142)
==64894==    by 0x407442: get_next_line (get_next_line.c:66)
==64894==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64894==    by 0x405E09: main (mandatory.cpp:73)
==64894==  Address 0x4de6a62 is 0 bytes after a block of size 2 alloc'd
==64894==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64894==    by 0x407899: f_del_front_bn (get_next_line_utils.c:135)
==64894==    by 0x407505: get_next_line (get_next_line.c:105)
==64894==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64894==    by 0x405DF7: main (mandatory.cpp:73)
==64894== 
==64894== Invalid write of size 1
==64894==    at 0x407904: f_del_front_bn (get_next_line_utils.c:148)
==64894==    by 0x407442: get_next_line (get_next_line.c:66)
==64894==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64894==    by 0x405E09: main (mandatory.cpp:73)
==64894==  Address 0x4de6bc0 is 0 bytes after a block of size 0 alloc'd
==64894==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64894==    by 0x407899: f_del_front_bn (get_next_line_utils.c:135)
==64894==    by 0x407442: get_next_line (get_next_line.c:66)
==64894==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64894==    by 0x405E09: main (mandatory.cpp:73)
==64894== 
==64894== Invalid read of size 1
==64894==    at 0x407564: ft_strchr (get_next_line_utils.c:25)
==64894==    by 0x40735F: get_next_line (get_next_line.c:33)
==64894==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64894==    by 0x405E15: main (mandatory.cpp:73)
==64894==  Address 0x4de6bc0 is 0 bytes after a block of size 0 alloc'd
==64894==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64894==    by 0x407899: f_del_front_bn (get_next_line_utils.c:135)
==64894==    by 0x407442: get_next_line (get_next_line.c:66)
==64894==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64894==    by 0x405E09: main (mandatory.cpp:73)
==64894== 
==64894== Invalid read of size 1
==64894==    at 0x407564: ft_strchr (get_next_line_utils.c:25)
==64894==    by 0x4073B6: get_next_line (get_next_line.c:46)
==64894==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64894==    by 0x405E15: main (mandatory.cpp:73)
==64894==  Address 0x4de6bc0 is 0 bytes after a block of size 0 alloc'd
==64894==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64894==    by 0x407899: f_del_front_bn (get_next_line_utils.c:135)
==64894==    by 0x407442: get_next_line (get_next_line.c:66)
==64894==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64894==    by 0x405E09: main (mandatory.cpp:73)
==64894== 
==64894== Invalid read of size 1
==64894==    at 0x407406: get_next_line (get_next_line.c:61)
==64894==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64894==    by 0x405E15: main (mandatory.cpp:73)
==64894==  Address 0x4de6bc0 is 0 bytes after a block of size 0 alloc'd
==64894==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64894==    by 0x407899: f_del_front_bn (get_next_line_utils.c:135)
==64894==    by 0x407442: get_next_line (get_next_line.c:66)
==64894==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64894==    by 0x405E09: main (mandatory.cpp:73)
==64894== 
==64894== 3 bytes in 1 blocks are definitely lost in loss record 2 of 5
==64894==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64894==    by 0x407767: f_search_bn (get_next_line_utils.c:97)
==64894==    by 0x40741B: get_next_line (get_next_line.c:63)
==64894==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64894==    by 0x405E09: main (mandatory.cpp:73)
==64894== 
==64894== 43 bytes in 1 blocks are definitely lost in loss record 3 of 5
==64894==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64894==    by 0x40732E: get_next_line (get_next_line.c:27)
==64894==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64894==    by 0x405E09: main (mandatory.cpp:73)
==64894== 
==64894== 43 bytes in 1 blocks are definitely lost in loss record 4 of 5
==64894==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64894==    by 0x40732E: get_next_line (get_next_line.c:27)
==64894==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64894==    by 0x405E15: main (mandatory.cpp:73)
==64894== 
==64894== 45 bytes in 1 blocks are definitely lost in loss record 5 of 5
==64894==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64894==    by 0x40760A: ft_strjoin (get_next_line_utils.c:58)
==64894==    by 0x4074C6: get_next_line (get_next_line.c:100)
==64894==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64894==    by 0x405DF7: main (mandatory.cpp:73)
==64894== 
==64896== 6 bytes in 1 blocks are definitely lost in loss record 2 of 7
==64896==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64896==    by 0x40760A: ft_strjoin (get_next_line_utils.c:58)
==64896==    by 0x4074C6: get_next_line (get_next_line.c:100)
==64896==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64896==    by 0x406035: main (mandatory.cpp:79)
==64896== 
==64896== 43 bytes in 1 blocks are definitely lost in loss record 3 of 7
==64896==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64896==    by 0x40732E: get_next_line (get_next_line.c:27)
==64896==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64896==    by 0x406047: main (mandatory.cpp:79)
==64896== 
==64896== 43 bytes in 1 blocks are definitely lost in loss record 4 of 7
==64896==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64896==    by 0x40732E: get_next_line (get_next_line.c:27)
==64896==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64896==    by 0x406059: main (mandatory.cpp:79)
==64896== 
==64896== 43 bytes in 1 blocks are definitely lost in loss record 5 of 7
==64896==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64896==    by 0x40732E: get_next_line (get_next_line.c:27)
==64896==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64896==    by 0x40606B: main (mandatory.cpp:79)
==64896== 
==64896== 43 bytes in 1 blocks are definitely lost in loss record 6 of 7
==64896==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64896==    by 0x40732E: get_next_line (get_next_line.c:27)
==64896==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64896==    by 0x40607D: main (mandatory.cpp:79)
==64896== 
==64896== 43 bytes in 1 blocks are definitely lost in loss record 7 of 7
==64896==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64896==    by 0x40732E: get_next_line (get_next_line.c:27)
==64896==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64896==    by 0x406089: main (mandatory.cpp:79)
==64896== 
==64899== Invalid read of size 1
==64899==    at 0x4078F0: f_del_front_bn (get_next_line_utils.c:142)
==64899==    by 0x407442: get_next_line (get_next_line.c:66)
==64899==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64899==    by 0x4062F1: main (mandatory.cpp:88)
==64899==  Address 0x4de775a is 0 bytes after a block of size 42 alloc'd
==64899==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64899==    by 0x40760A: ft_strjoin (get_next_line_utils.c:58)
==64899==    by 0x4074C6: get_next_line (get_next_line.c:100)
==64899==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64899==    by 0x4062F1: main (mandatory.cpp:88)
==64899== 
==64899== Invalid write of size 1
==64899==    at 0x407904: f_del_front_bn (get_next_line_utils.c:148)
==64899==    by 0x407442: get_next_line (get_next_line.c:66)
==64899==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64899==    by 0x4062F1: main (mandatory.cpp:88)
==64899==  Address 0x4de7880 is 0 bytes after a block of size 0 alloc'd
==64899==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64899==    by 0x407899: f_del_front_bn (get_next_line_utils.c:135)
==64899==    by 0x407442: get_next_line (get_next_line.c:66)
==64899==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64899==    by 0x4062F1: main (mandatory.cpp:88)
==64899== 
==64899== Invalid read of size 1
==64899==    at 0x407564: ft_strchr (get_next_line_utils.c:25)
==64899==    by 0x40735F: get_next_line (get_next_line.c:33)
==64899==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64899==    by 0x4062FD: main (mandatory.cpp:88)
==64899==  Address 0x4de7880 is 0 bytes after a block of size 0 alloc'd
==64899==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64899==    by 0x407899: f_del_front_bn (get_next_line_utils.c:135)
==64899==    by 0x407442: get_next_line (get_next_line.c:66)
==64899==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64899==    by 0x4062F1: main (mandatory.cpp:88)
==64899== 
==64899== Invalid read of size 1
==64899==    at 0x407564: ft_strchr (get_next_line_utils.c:25)
==64899==    by 0x4073B6: get_next_line (get_next_line.c:46)
==64899==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64899==    by 0x4062FD: main (mandatory.cpp:88)
==64899==  Address 0x4de7880 is 0 bytes after a block of size 0 alloc'd
==64899==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64899==    by 0x407899: f_del_front_bn (get_next_line_utils.c:135)
==64899==    by 0x407442: get_next_line (get_next_line.c:66)
==64899==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64899==    by 0x4062F1: main (mandatory.cpp:88)
==64899== 
==64899== Invalid read of size 1
==64899==    at 0x407406: get_next_line (get_next_line.c:61)
==64899==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64899==    by 0x4062FD: main (mandatory.cpp:88)
==64899==  Address 0x4de7880 is 0 bytes after a block of size 0 alloc'd
==64899==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64899==    by 0x407899: f_del_front_bn (get_next_line_utils.c:135)
==64899==    by 0x407442: get_next_line (get_next_line.c:66)
==64899==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64899==    by 0x4062F1: main (mandatory.cpp:88)
==64899== 
==64899== 43 bytes in 1 blocks are definitely lost in loss record 2 of 8
==64899==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64899==    by 0x40760A: ft_strjoin (get_next_line_utils.c:58)
==64899==    by 0x4074C6: get_next_line (get_next_line.c:100)
==64899==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64899==    by 0x4062A9: main (mandatory.cpp:88)
==64899== 
==64899== 43 bytes in 1 blocks are definitely lost in loss record 3 of 8
==64899==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64899==    by 0x40732E: get_next_line (get_next_line.c:27)
==64899==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64899==    by 0x4062F1: main (mandatory.cpp:88)
==64899== 
==64899== 43 bytes in 1 blocks are definitely lost in loss record 4 of 8
==64899==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64899==    by 0x407767: f_search_bn (get_next_line_utils.c:97)
==64899==    by 0x40741B: get_next_line (get_next_line.c:63)
==64899==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64899==    by 0x4062F1: main (mandatory.cpp:88)
==64899== 
==64899== 43 bytes in 1 blocks are definitely lost in loss record 5 of 8
==64899==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64899==    by 0x40732E: get_next_line (get_next_line.c:27)
==64899==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64899==    by 0x4062FD: main (mandatory.cpp:88)
==64899== 
==64899== 82 bytes in 1 blocks are definitely lost in loss record 6 of 8
==64899==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64899==    by 0x40760A: ft_strjoin (get_next_line_utils.c:58)
==64899==    by 0x4074C6: get_next_line (get_next_line.c:100)
==64899==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64899==    by 0x4062DF: main (mandatory.cpp:88)
==64899== 
==64899== 84 bytes in 1 blocks are definitely lost in loss record 7 of 8
==64899==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64899==    by 0x40760A: ft_strjoin (get_next_line_utils.c:58)
==64899==    by 0x4074C6: get_next_line (get_next_line.c:100)
==64899==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64899==    by 0x4062CD: main (mandatory.cpp:88)
==64899== 
==64899== 85 bytes in 1 blocks are definitely lost in loss record 8 of 8
==64899==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64899==    by 0x40760A: ft_strjoin (get_next_line_utils.c:58)
==64899==    by 0x4074C6: get_next_line (get_next_line.c:100)
==64899==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64899==    by 0x4062BB: main (mandatory.cpp:88)
==64899== 
==64904== 42 bytes in 1 blocks are definitely lost in loss record 2 of 7
==64904==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64904==    by 0x40760A: ft_strjoin (get_next_line_utils.c:58)
==64904==    by 0x4074C6: get_next_line (get_next_line.c:100)
==64904==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64904==    by 0x406565: main (mandatory.cpp:97)
==64904== 
==64904== 43 bytes in 1 blocks are definitely lost in loss record 3 of 7
==64904==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64904==    by 0x40760A: ft_strjoin (get_next_line_utils.c:58)
==64904==    by 0x4074C6: get_next_line (get_next_line.c:100)
==64904==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64904==    by 0x40651D: main (mandatory.cpp:97)
==64904== 
==64904== 43 bytes in 1 blocks are definitely lost in loss record 4 of 7
==64904==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64904==    by 0x40760A: ft_strjoin (get_next_line_utils.c:58)
==64904==    by 0x4074C6: get_next_line (get_next_line.c:100)
==64904==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64904==    by 0x406553: main (mandatory.cpp:97)
==64904== 
==64904== 43 bytes in 1 blocks are definitely lost in loss record 5 of 7
==64904==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64904==    by 0x40732E: get_next_line (get_next_line.c:27)
==64904==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64904==    by 0x406571: main (mandatory.cpp:97)
==64904== 
==64904== 44 bytes in 1 blocks are definitely lost in loss record 6 of 7
==64904==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64904==    by 0x40760A: ft_strjoin (get_next_line_utils.c:58)
==64904==    by 0x4074C6: get_next_line (get_next_line.c:100)
==64904==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64904==    by 0x40652F: main (mandatory.cpp:97)
==64904== 
==64904== 44 bytes in 1 blocks are definitely lost in loss record 7 of 7
==64904==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64904==    by 0x40760A: ft_strjoin (get_next_line_utils.c:58)
==64904==    by 0x4074C6: get_next_line (get_next_line.c:100)
==64904==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64904==    by 0x406541: main (mandatory.cpp:97)
==64904== 
==64905== Invalid read of size 1
==64905==    at 0x4078F0: f_del_front_bn (get_next_line_utils.c:142)
==64905==    by 0x407442: get_next_line (get_next_line.c:66)
==64905==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64905==    by 0x406821: main (mandatory.cpp:106)
==64905==  Address 0x4de826a is 0 bytes after a block of size 42 alloc'd
==64905==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64905==    by 0x40760A: ft_strjoin (get_next_line_utils.c:58)
==64905==    by 0x4074C6: get_next_line (get_next_line.c:100)
==64905==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64905==    by 0x406821: main (mandatory.cpp:106)
==64905== 
==64905== Invalid write of size 1
==64905==    at 0x407904: f_del_front_bn (get_next_line_utils.c:148)
==64905==    by 0x407442: get_next_line (get_next_line.c:66)
==64905==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64905==    by 0x406821: main (mandatory.cpp:106)
==64905==  Address 0x4de8390 is 0 bytes after a block of size 0 alloc'd
==64905==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64905==    by 0x407899: f_del_front_bn (get_next_line_utils.c:135)
==64905==    by 0x407442: get_next_line (get_next_line.c:66)
==64905==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64905==    by 0x406821: main (mandatory.cpp:106)
==64905== 
==64905== Invalid read of size 1
==64905==    at 0x407564: ft_strchr (get_next_line_utils.c:25)
==64905==    by 0x40735F: get_next_line (get_next_line.c:33)
==64905==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64905==    by 0x40682D: main (mandatory.cpp:106)
==64905==  Address 0x4de8390 is 0 bytes after a block of size 0 alloc'd
==64905==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64905==    by 0x407899: f_del_front_bn (get_next_line_utils.c:135)
==64905==    by 0x407442: get_next_line (get_next_line.c:66)
==64905==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64905==    by 0x406821: main (mandatory.cpp:106)
==64905== 
==64905== Invalid read of size 1
==64905==    at 0x407564: ft_strchr (get_next_line_utils.c:25)
==64905==    by 0x4073B6: get_next_line (get_next_line.c:46)
==64905==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64905==    by 0x40682D: main (mandatory.cpp:106)
==64905==  Address 0x4de8390 is 0 bytes after a block of size 0 alloc'd
==64905==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64905==    by 0x407899: f_del_front_bn (get_next_line_utils.c:135)
==64905==    by 0x407442: get_next_line (get_next_line.c:66)
==64905==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64905==    by 0x406821: main (mandatory.cpp:106)
==64905== 
==64905== Invalid read of size 1
==64905==    at 0x407406: get_next_line (get_next_line.c:61)
==64905==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64905==    by 0x40682D: main (mandatory.cpp:106)
==64905==  Address 0x4de8390 is 0 bytes after a block of size 0 alloc'd
==64905==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64905==    by 0x407899: f_del_front_bn (get_next_line_utils.c:135)
==64905==    by 0x407442: get_next_line (get_next_line.c:66)
==64905==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64905==    by 0x406821: main (mandatory.cpp:106)
==64905== 
==64905== 43 bytes in 1 blocks are definitely lost in loss record 2 of 12
==64905==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64905==    by 0x40760A: ft_strjoin (get_next_line_utils.c:58)
==64905==    by 0x4074C6: get_next_line (get_next_line.c:100)
==64905==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64905==    by 0x406791: main (mandatory.cpp:106)
==64905== 
==64905== 43 bytes in 1 blocks are definitely lost in loss record 3 of 12
==64905==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64905==    by 0x40760A: ft_strjoin (get_next_line_utils.c:58)
==64905==    by 0x4074C6: get_next_line (get_next_line.c:100)
==64905==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64905==    by 0x4067A3: main (mandatory.cpp:106)
==64905== 
==64905== 43 bytes in 1 blocks are definitely lost in loss record 4 of 12
==64905==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64905==    by 0x40732E: get_next_line (get_next_line.c:27)
==64905==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64905==    by 0x4067C7: main (mandatory.cpp:106)
==64905== 
==64905== 43 bytes in 1 blocks are definitely lost in loss record 5 of 12
==64905==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64905==    by 0x40732E: get_next_line (get_next_line.c:27)
==64905==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64905==    by 0x4067EB: main (mandatory.cpp:106)
==64905== 
==64905== 43 bytes in 1 blocks are definitely lost in loss record 6 of 12
==64905==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64905==    by 0x40732E: get_next_line (get_next_line.c:27)
==64905==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64905==    by 0x40680F: main (mandatory.cpp:106)
==64905== 
==64905== 43 bytes in 1 blocks are definitely lost in loss record 7 of 12
==64905==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64905==    by 0x40732E: get_next_line (get_next_line.c:27)
==64905==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64905==    by 0x406821: main (mandatory.cpp:106)
==64905== 
==64905== 43 bytes in 1 blocks are definitely lost in loss record 8 of 12
==64905==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64905==    by 0x407767: f_search_bn (get_next_line_utils.c:97)
==64905==    by 0x40741B: get_next_line (get_next_line.c:63)
==64905==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64905==    by 0x406821: main (mandatory.cpp:106)
==64905== 
==64905== 43 bytes in 1 blocks are definitely lost in loss record 9 of 12
==64905==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64905==    by 0x40732E: get_next_line (get_next_line.c:27)
==64905==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64905==    by 0x40682D: main (mandatory.cpp:106)
==64905== 
==64905== 79 bytes in 1 blocks are definitely lost in loss record 10 of 12
==64905==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64905==    by 0x40760A: ft_strjoin (get_next_line_utils.c:58)
==64905==    by 0x4074C6: get_next_line (get_next_line.c:100)
==64905==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64905==    by 0x4067FD: main (mandatory.cpp:106)
==64905== 
==64905== 82 bytes in 1 blocks are definitely lost in loss record 11 of 12
==64905==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64905==    by 0x40760A: ft_strjoin (get_next_line_utils.c:58)
==64905==    by 0x4074C6: get_next_line (get_next_line.c:100)
==64905==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64905==    by 0x4067D9: main (mandatory.cpp:106)
==64905== 
==64905== 84 bytes in 1 blocks are definitely lost in loss record 12 of 12
==64905==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64905==    by 0x40760A: ft_strjoin (get_next_line_utils.c:58)
==64905==    by 0x4074C6: get_next_line (get_next_line.c:100)
==64905==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64905==    by 0x4067B5: main (mandatory.cpp:106)
==64905== 
==64909== 43 bytes in 1 blocks are definitely lost in loss record 2 of 11
==64909==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64909==    by 0x40760A: ft_strjoin (get_next_line_utils.c:58)
==64909==    by 0x4074C6: get_next_line (get_next_line.c:100)
==64909==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64909==    by 0x406A4D: main (mandatory.cpp:119)
==64909== 
==64909== 43 bytes in 1 blocks are definitely lost in loss record 3 of 11
==64909==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64909==    by 0x40760A: ft_strjoin (get_next_line_utils.c:58)
==64909==    by 0x4074C6: get_next_line (get_next_line.c:100)
==64909==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64909==    by 0x406A5F: main (mandatory.cpp:119)
==64909== 
==64909== 43 bytes in 1 blocks are definitely lost in loss record 4 of 11
==64909==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64909==    by 0x40732E: get_next_line (get_next_line.c:27)
==64909==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64909==    by 0x406A83: main (mandatory.cpp:119)
==64909== 
==64909== 43 bytes in 1 blocks are definitely lost in loss record 5 of 11
==64909==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64909==    by 0x40732E: get_next_line (get_next_line.c:27)
==64909==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64909==    by 0x406AA7: main (mandatory.cpp:119)
==64909== 
==64909== 43 bytes in 1 blocks are definitely lost in loss record 6 of 11
==64909==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64909==    by 0x40732E: get_next_line (get_next_line.c:27)
==64909==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64909==    by 0x406ACB: main (mandatory.cpp:119)
==64909== 
==64909== 43 bytes in 1 blocks are definitely lost in loss record 7 of 11
==64909==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64909==    by 0x40760A: ft_strjoin (get_next_line_utils.c:58)
==64909==    by 0x4074C6: get_next_line (get_next_line.c:100)
==64909==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64909==    by 0x406ADD: main (mandatory.cpp:119)
==64909== 
==64909== 43 bytes in 1 blocks are definitely lost in loss record 8 of 11
==64909==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64909==    by 0x40732E: get_next_line (get_next_line.c:27)
==64909==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64909==    by 0x406AE9: main (mandatory.cpp:119)
==64909== 
==64909== 79 bytes in 1 blocks are definitely lost in loss record 9 of 11
==64909==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64909==    by 0x40760A: ft_strjoin (get_next_line_utils.c:58)
==64909==    by 0x4074C6: get_next_line (get_next_line.c:100)
==64909==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64909==    by 0x406AB9: main (mandatory.cpp:119)
==64909== 
==64909== 82 bytes in 1 blocks are definitely lost in loss record 10 of 11
==64909==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64909==    by 0x40760A: ft_strjoin (get_next_line_utils.c:58)
==64909==    by 0x4074C6: get_next_line (get_next_line.c:100)
==64909==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64909==    by 0x406A95: main (mandatory.cpp:119)
==64909== 
==64909== 84 bytes in 1 blocks are definitely lost in loss record 11 of 11
==64909==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64909==    by 0x40760A: ft_strjoin (get_next_line_utils.c:58)
==64909==    by 0x4074C6: get_next_line (get_next_line.c:100)
==64909==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64909==    by 0x406A71: main (mandatory.cpp:119)
==64909== 
==64911== Invalid read of size 1
==64911==    at 0x4078F0: f_del_front_bn (get_next_line_utils.c:142)
==64911==    by 0x407442: get_next_line (get_next_line.c:66)
==64911==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64911==    by 0x406D09: main (mandatory.cpp:132)
==64911==  Address 0x4f120f1 is 0 bytes after a block of size 10,001 alloc'd
==64911==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64911==    by 0x40760A: ft_strjoin (get_next_line_utils.c:58)
==64911==    by 0x4074C6: get_next_line (get_next_line.c:100)
==64911==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64911==    by 0x406D09: main (mandatory.cpp:132)
==64911== 
==64911== Invalid write of size 1
==64911==    at 0x407904: f_del_front_bn (get_next_line_utils.c:148)
==64911==    by 0x407442: get_next_line (get_next_line.c:66)
==64911==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64911==    by 0x406D09: main (mandatory.cpp:132)
==64911==  Address 0x4f17000 is 0 bytes after a block of size 0 alloc'd
==64911==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64911==    by 0x407899: f_del_front_bn (get_next_line_utils.c:135)
==64911==    by 0x407442: get_next_line (get_next_line.c:66)
==64911==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64911==    by 0x406D09: main (mandatory.cpp:132)
==64911== 
==64911== Invalid read of size 1
==64911==    at 0x407564: ft_strchr (get_next_line_utils.c:25)
==64911==    by 0x40735F: get_next_line (get_next_line.c:33)
==64911==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64911==    by 0x406D15: main (mandatory.cpp:132)
==64911==  Address 0x4f17000 is 0 bytes after a block of size 0 alloc'd
==64911==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64911==    by 0x407899: f_del_front_bn (get_next_line_utils.c:135)
==64911==    by 0x407442: get_next_line (get_next_line.c:66)
==64911==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64911==    by 0x406D09: main (mandatory.cpp:132)
==64911== 
==64911== Invalid read of size 1
==64911==    at 0x407564: ft_strchr (get_next_line_utils.c:25)
==64911==    by 0x4073B6: get_next_line (get_next_line.c:46)
==64911==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64911==    by 0x406D15: main (mandatory.cpp:132)
==64911==  Address 0x4f17000 is 0 bytes after a block of size 0 alloc'd
==64911==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64911==    by 0x407899: f_del_front_bn (get_next_line_utils.c:135)
==64911==    by 0x407442: get_next_line (get_next_line.c:66)
==64911==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64911==    by 0x406D09: main (mandatory.cpp:132)
==64911== 
==64911== Invalid read of size 1
==64911==    at 0x407406: get_next_line (get_next_line.c:61)
==64911==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64911==    by 0x406D15: main (mandatory.cpp:132)
==64911==  Address 0x4f17000 is 0 bytes after a block of size 0 alloc'd
==64911==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64911==    by 0x407899: f_del_front_bn (get_next_line_utils.c:135)
==64911==    by 0x407442: get_next_line (get_next_line.c:66)
==64911==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64911==    by 0x406D09: main (mandatory.cpp:132)
==64911== 
==64911== 43 bytes in 1 blocks are definitely lost in loss record 2 of 4
==64911==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64911==    by 0x40732E: get_next_line (get_next_line.c:27)
==64911==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64911==    by 0x406D09: main (mandatory.cpp:132)
==64911== 
==64911== 43 bytes in 1 blocks are definitely lost in loss record 3 of 4
==64911==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64911==    by 0x40732E: get_next_line (get_next_line.c:27)
==64911==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64911==    by 0x406D15: main (mandatory.cpp:132)
==64911== 
==64911== 10,002 bytes in 1 blocks are definitely lost in loss record 4 of 4
==64911==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64911==    by 0x407767: f_search_bn (get_next_line_utils.c:97)
==64911==    by 0x40741B: get_next_line (get_next_line.c:63)
==64911==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64911==    by 0x406D09: main (mandatory.cpp:132)
==64911== 
==64914== 43 bytes in 1 blocks are definitely lost in loss record 2 of 3
==64914==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64914==    by 0x40732E: get_next_line (get_next_line.c:27)
==64914==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64914==    by 0x406F41: main (mandatory.cpp:136)
==64914== 
==64914== 10,002 bytes in 1 blocks are definitely lost in loss record 3 of 3
==64914==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64914==    by 0x40760A: ft_strjoin (get_next_line_utils.c:58)
==64914==    by 0x4074C6: get_next_line (get_next_line.c:100)
==64914==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64914==    by 0x406F35: main (mandatory.cpp:136)
==64914== 
==64917== Invalid read of size 1
==64917==    at 0x484FBD4: strcmp (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64917==    by 0x402D0A: gnl(int, char const*) (gnl.cpp:24)
==64917==    by 0x407160: main (mandatory.cpp:141)
==64917==  Address 0x0 is not stack'd, malloc'd or (recently) free'd
==64917== 
==64945== Invalid write of size 1
==64945==    at 0x4073B0: get_next_line (get_next_line.c:49)
==64945==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64945==    by 0x404BC6: main (mandatory.cpp:25)
==64945==  Address 0x51d203f is 1 bytes before a block of size 10,000,001 alloc'd
==64945==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64945==    by 0x4072FC: get_next_line (get_next_line.c:27)
==64945==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64945==    by 0x404BC6: main (mandatory.cpp:25)
==64945== 
==64945== Invalid write of size 1
==64945==    at 0x4073B0: get_next_line (get_next_line.c:49)
==64945==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64945==    by 0x404BE8: main (mandatory.cpp:25)
==64945==  Address 0x5b5c03f is 1 bytes before a block of size 10,000,001 alloc'd
==64945==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64945==    by 0x4072FC: get_next_line (get_next_line.c:27)
==64945==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64945==    by 0x404BE8: main (mandatory.cpp:25)
==64945== 
==64945== 10,000,001 bytes in 1 blocks are possibly lost in loss record 1 of 2
==64945==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64945==    by 0x4072FC: get_next_line (get_next_line.c:27)
==64945==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64945==    by 0x404BC6: main (mandatory.cpp:25)
==64945== 
==64945== 10,000,001 bytes in 1 blocks are definitely lost in loss record 2 of 2
==64945==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64945==    by 0x4072FC: get_next_line (get_next_line.c:27)
==64945==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64945==    by 0x404BE8: main (mandatory.cpp:25)
==64945== 
==64946== Invalid read of size 1
==64946==    at 0x4073D4: get_next_line (get_next_line.c:61)
==64946==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64946==    by 0x404E63: main (mandatory.cpp:31)
==64946==  Address 0x0 is not stack'd, malloc'd or (recently) free'd
==64946== 
==64948== 2 bytes in 1 blocks are definitely lost in loss record 2 of 3
==64948==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64948==    by 0x4075D8: ft_strjoin (get_next_line_utils.c:58)
==64948==    by 0x407494: get_next_line (get_next_line.c:100)
==64948==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64948==    by 0x40508F: main (mandatory.cpp:36)
==64948== 
==64948== 10,000,001 bytes in 1 blocks are definitely lost in loss record 3 of 3
==64948==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64948==    by 0x4072FC: get_next_line (get_next_line.c:27)
==64948==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64948==    by 0x40509B: main (mandatory.cpp:36)
==64948== 
==64955== Invalid read of size 1
==64955==    at 0x4078BE: f_del_front_bn (get_next_line_utils.c:142)
==64955==    by 0x407410: get_next_line (get_next_line.c:66)
==64955==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64955==    by 0x4052BB: main (mandatory.cpp:41)
==64955==  Address 0x4de599a is 0 bytes after a block of size 42 alloc'd
==64955==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64955==    by 0x4075D8: ft_strjoin (get_next_line_utils.c:58)
==64955==    by 0x407494: get_next_line (get_next_line.c:100)
==64955==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64955==    by 0x4052BB: main (mandatory.cpp:41)
==64955== 
==64955== Invalid write of size 1
==64955==    at 0x4078D2: f_del_front_bn (get_next_line_utils.c:148)
==64955==    by 0x407410: get_next_line (get_next_line.c:66)
==64955==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64955==    by 0x4052BB: main (mandatory.cpp:41)
==64955==  Address 0x4de5ac0 is 0 bytes after a block of size 0 alloc'd
==64955==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64955==    by 0x407867: f_del_front_bn (get_next_line_utils.c:135)
==64955==    by 0x407410: get_next_line (get_next_line.c:66)
==64955==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64955==    by 0x4052BB: main (mandatory.cpp:41)
==64955== 
==64955== Invalid read of size 1
==64955==    at 0x407532: ft_strchr (get_next_line_utils.c:25)
==64955==    by 0x40732D: get_next_line (get_next_line.c:33)
==64955==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64955==    by 0x4052C7: main (mandatory.cpp:41)
==64955==  Address 0x4de5ac0 is 0 bytes after a block of size 0 alloc'd
==64955==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64955==    by 0x407867: f_del_front_bn (get_next_line_utils.c:135)
==64955==    by 0x407410: get_next_line (get_next_line.c:66)
==64955==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64955==    by 0x4052BB: main (mandatory.cpp:41)
==64955== 
==64955== Invalid read of size 1
==64955==    at 0x407532: ft_strchr (get_next_line_utils.c:25)
==64955==    by 0x407384: get_next_line (get_next_line.c:46)
==64955==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64955==    by 0x4052C7: main (mandatory.cpp:41)
==64955==  Address 0x4de5ac0 is 0 bytes after a block of size 0 alloc'd
==64955==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64955==    by 0x407867: f_del_front_bn (get_next_line_utils.c:135)
==64955==    by 0x407410: get_next_line (get_next_line.c:66)
==64955==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64955==    by 0x4052BB: main (mandatory.cpp:41)
==64955== 
==64955== Invalid read of size 1
==64955==    at 0x4073D4: get_next_line (get_next_line.c:61)
==64955==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64955==    by 0x4052C7: main (mandatory.cpp:41)
==64955==  Address 0x4de5ac0 is 0 bytes after a block of size 0 alloc'd
==64955==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64955==    by 0x407867: f_del_front_bn (get_next_line_utils.c:135)
==64955==    by 0x407410: get_next_line (get_next_line.c:66)
==64955==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64955==    by 0x4052BB: main (mandatory.cpp:41)
==64955== 
==64955== 43 bytes in 1 blocks are definitely lost in loss record 2 of 4
==64955==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64955==    by 0x407735: f_search_bn (get_next_line_utils.c:97)
==64955==    by 0x4073E9: get_next_line (get_next_line.c:63)
==64955==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64955==    by 0x4052BB: main (mandatory.cpp:41)
==64955== 
==64955== 10,000,001 bytes in 1 blocks are possibly lost in loss record 3 of 4
==64955==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64955==    by 0x4072FC: get_next_line (get_next_line.c:27)
==64955==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64955==    by 0x4052BB: main (mandatory.cpp:41)
==64955== 
==64955== 10,000,001 bytes in 1 blocks are definitely lost in loss record 4 of 4
==64955==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64955==    by 0x4072FC: get_next_line (get_next_line.c:27)
==64955==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64955==    by 0x4052C7: main (mandatory.cpp:41)
==64955== 
==64957== Invalid read of size 1
==64957==    at 0x4078BE: f_del_front_bn (get_next_line_utils.c:142)
==64957==    by 0x407410: get_next_line (get_next_line.c:66)
==64957==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64957==    by 0x4054F9: main (mandatory.cpp:46)
==64957==  Address 0x4de5d62 is 0 bytes after a block of size 2 alloc'd
==64957==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64957==    by 0x407867: f_del_front_bn (get_next_line_utils.c:135)
==64957==    by 0x4074D3: get_next_line (get_next_line.c:105)
==64957==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64957==    by 0x4054E7: main (mandatory.cpp:46)
==64957== 
==64957== Invalid write of size 1
==64957==    at 0x4078D2: f_del_front_bn (get_next_line_utils.c:148)
==64957==    by 0x407410: get_next_line (get_next_line.c:66)
==64957==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64957==    by 0x4054F9: main (mandatory.cpp:46)
==64957==  Address 0x4de5e50 is 0 bytes after a block of size 0 alloc'd
==64957==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64957==    by 0x407867: f_del_front_bn (get_next_line_utils.c:135)
==64957==    by 0x407410: get_next_line (get_next_line.c:66)
==64957==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64957==    by 0x4054F9: main (mandatory.cpp:46)
==64957== 
==64957== Invalid read of size 1
==64957==    at 0x407532: ft_strchr (get_next_line_utils.c:25)
==64957==    by 0x40732D: get_next_line (get_next_line.c:33)
==64957==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64957==    by 0x405505: main (mandatory.cpp:46)
==64957==  Address 0x4de5e50 is 0 bytes after a block of size 0 alloc'd
==64957==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64957==    by 0x407867: f_del_front_bn (get_next_line_utils.c:135)
==64957==    by 0x407410: get_next_line (get_next_line.c:66)
==64957==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64957==    by 0x4054F9: main (mandatory.cpp:46)
==64957== 
==64957== Invalid read of size 1
==64957==    at 0x407532: ft_strchr (get_next_line_utils.c:25)
==64957==    by 0x407384: get_next_line (get_next_line.c:46)
==64957==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64957==    by 0x405505: main (mandatory.cpp:46)
==64957==  Address 0x4de5e50 is 0 bytes after a block of size 0 alloc'd
==64957==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64957==    by 0x407867: f_del_front_bn (get_next_line_utils.c:135)
==64957==    by 0x407410: get_next_line (get_next_line.c:66)
==64957==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64957==    by 0x4054F9: main (mandatory.cpp:46)
==64957== 
==64957== Invalid read of size 1
==64957==    at 0x4073D4: get_next_line (get_next_line.c:61)
==64957==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64957==    by 0x405505: main (mandatory.cpp:46)
==64957==  Address 0x4de5e50 is 0 bytes after a block of size 0 alloc'd
==64957==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64957==    by 0x407867: f_del_front_bn (get_next_line_utils.c:135)
==64957==    by 0x407410: get_next_line (get_next_line.c:66)
==64957==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64957==    by 0x4054F9: main (mandatory.cpp:46)
==64957== 
==64957== 3 bytes in 1 blocks are definitely lost in loss record 2 of 5
==64957==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64957==    by 0x407735: f_search_bn (get_next_line_utils.c:97)
==64957==    by 0x4073E9: get_next_line (get_next_line.c:63)
==64957==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64957==    by 0x4054F9: main (mandatory.cpp:46)
==64957== 
==64957== 43 bytes in 1 blocks are definitely lost in loss record 3 of 5
==64957==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64957==    by 0x4075D8: ft_strjoin (get_next_line_utils.c:58)
==64957==    by 0x407494: get_next_line (get_next_line.c:100)
==64957==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64957==    by 0x4054E7: main (mandatory.cpp:46)
==64957== 
==64957== 10,000,001 bytes in 1 blocks are possibly lost in loss record 4 of 5
==64957==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64957==    by 0x4072FC: get_next_line (get_next_line.c:27)
==64957==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64957==    by 0x405505: main (mandatory.cpp:46)
==64957== 
==64957== 10,000,001 bytes in 1 blocks are definitely lost in loss record 5 of 5
==64957==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64957==    by 0x4072FC: get_next_line (get_next_line.c:27)
==64957==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64957==    by 0x4054F9: main (mandatory.cpp:46)
==64957== 
==64962== Invalid read of size 1
==64962==    at 0x4078BE: f_del_front_bn (get_next_line_utils.c:142)
==64962==    by 0x407410: get_next_line (get_next_line.c:66)
==64962==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64962==    by 0x405725: main (mandatory.cpp:52)
==64962==  Address 0x4de5fbb is 0 bytes after a block of size 43 alloc'd
==64962==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64962==    by 0x4075D8: ft_strjoin (get_next_line_utils.c:58)
==64962==    by 0x407494: get_next_line (get_next_line.c:100)
==64962==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64962==    by 0x405725: main (mandatory.cpp:52)
==64962== 
==64962== Invalid write of size 1
==64962==    at 0x4078D2: f_del_front_bn (get_next_line_utils.c:148)
==64962==    by 0x407410: get_next_line (get_next_line.c:66)
==64962==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64962==    by 0x405725: main (mandatory.cpp:52)
==64962==  Address 0x4de60e0 is 0 bytes after a block of size 0 alloc'd
==64962==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64962==    by 0x407867: f_del_front_bn (get_next_line_utils.c:135)
==64962==    by 0x407410: get_next_line (get_next_line.c:66)
==64962==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64962==    by 0x405725: main (mandatory.cpp:52)
==64962== 
==64962== Invalid read of size 1
==64962==    at 0x407532: ft_strchr (get_next_line_utils.c:25)
==64962==    by 0x40732D: get_next_line (get_next_line.c:33)
==64962==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64962==    by 0x405731: main (mandatory.cpp:52)
==64962==  Address 0x4de60e0 is 0 bytes after a block of size 0 alloc'd
==64962==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64962==    by 0x407867: f_del_front_bn (get_next_line_utils.c:135)
==64962==    by 0x407410: get_next_line (get_next_line.c:66)
==64962==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64962==    by 0x405725: main (mandatory.cpp:52)
==64962== 
==64962== Invalid read of size 1
==64962==    at 0x407532: ft_strchr (get_next_line_utils.c:25)
==64962==    by 0x407384: get_next_line (get_next_line.c:46)
==64962==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64962==    by 0x405731: main (mandatory.cpp:52)
==64962==  Address 0x4de60e0 is 0 bytes after a block of size 0 alloc'd
==64962==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64962==    by 0x407867: f_del_front_bn (get_next_line_utils.c:135)
==64962==    by 0x407410: get_next_line (get_next_line.c:66)
==64962==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64962==    by 0x405725: main (mandatory.cpp:52)
==64962== 
==64962== Invalid read of size 1
==64962==    at 0x4073D4: get_next_line (get_next_line.c:61)
==64962==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64962==    by 0x405731: main (mandatory.cpp:52)
==64962==  Address 0x4de60e0 is 0 bytes after a block of size 0 alloc'd
==64962==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64962==    by 0x407867: f_del_front_bn (get_next_line_utils.c:135)
==64962==    by 0x407410: get_next_line (get_next_line.c:66)
==64962==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64962==    by 0x405725: main (mandatory.cpp:52)
==64962== 
==64962== 44 bytes in 1 blocks are definitely lost in loss record 2 of 4
==64962==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64962==    by 0x407735: f_search_bn (get_next_line_utils.c:97)
==64962==    by 0x4073E9: get_next_line (get_next_line.c:63)
==64962==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64962==    by 0x405725: main (mandatory.cpp:52)
==64962== 
==64962== 10,000,001 bytes in 1 blocks are possibly lost in loss record 3 of 4
==64962==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64962==    by 0x4072FC: get_next_line (get_next_line.c:27)
==64962==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64962==    by 0x405725: main (mandatory.cpp:52)
==64962== 
==64962== 10,000,001 bytes in 1 blocks are definitely lost in loss record 4 of 4
==64962==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64962==    by 0x4072FC: get_next_line (get_next_line.c:27)
==64962==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64962==    by 0x405731: main (mandatory.cpp:52)
==64962== 
==64963== Invalid read of size 1
==64963==    at 0x4078BE: f_del_front_bn (get_next_line_utils.c:142)
==64963==    by 0x407410: get_next_line (get_next_line.c:66)
==64963==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64963==    by 0x405963: main (mandatory.cpp:57)
==64963==  Address 0x4de6382 is 0 bytes after a block of size 2 alloc'd
==64963==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64963==    by 0x407867: f_del_front_bn (get_next_line_utils.c:135)
==64963==    by 0x4074D3: get_next_line (get_next_line.c:105)
==64963==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64963==    by 0x405951: main (mandatory.cpp:57)
==64963== 
==64963== Invalid write of size 1
==64963==    at 0x4078D2: f_del_front_bn (get_next_line_utils.c:148)
==64963==    by 0x407410: get_next_line (get_next_line.c:66)
==64963==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64963==    by 0x405963: main (mandatory.cpp:57)
==64963==  Address 0x4de6470 is 0 bytes after a block of size 0 alloc'd
==64963==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64963==    by 0x407867: f_del_front_bn (get_next_line_utils.c:135)
==64963==    by 0x407410: get_next_line (get_next_line.c:66)
==64963==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64963==    by 0x405963: main (mandatory.cpp:57)
==64963== 
==64963== Invalid read of size 1
==64963==    at 0x407532: ft_strchr (get_next_line_utils.c:25)
==64963==    by 0x40732D: get_next_line (get_next_line.c:33)
==64963==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64963==    by 0x40596F: main (mandatory.cpp:57)
==64963==  Address 0x4de6470 is 0 bytes after a block of size 0 alloc'd
==64963==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64963==    by 0x407867: f_del_front_bn (get_next_line_utils.c:135)
==64963==    by 0x407410: get_next_line (get_next_line.c:66)
==64963==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64963==    by 0x405963: main (mandatory.cpp:57)
==64963== 
==64963== Invalid read of size 1
==64963==    at 0x407532: ft_strchr (get_next_line_utils.c:25)
==64963==    by 0x407384: get_next_line (get_next_line.c:46)
==64963==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64963==    by 0x40596F: main (mandatory.cpp:57)
==64963==  Address 0x4de6470 is 0 bytes after a block of size 0 alloc'd
==64963==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64963==    by 0x407867: f_del_front_bn (get_next_line_utils.c:135)
==64963==    by 0x407410: get_next_line (get_next_line.c:66)
==64963==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64963==    by 0x405963: main (mandatory.cpp:57)
==64963== 
==64963== Invalid read of size 1
==64963==    at 0x4073D4: get_next_line (get_next_line.c:61)
==64963==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64963==    by 0x40596F: main (mandatory.cpp:57)
==64963==  Address 0x4de6470 is 0 bytes after a block of size 0 alloc'd
==64963==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64963==    by 0x407867: f_del_front_bn (get_next_line_utils.c:135)
==64963==    by 0x407410: get_next_line (get_next_line.c:66)
==64963==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64963==    by 0x405963: main (mandatory.cpp:57)
==64963== 
==64963== 3 bytes in 1 blocks are definitely lost in loss record 2 of 5
==64963==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64963==    by 0x407735: f_search_bn (get_next_line_utils.c:97)
==64963==    by 0x4073E9: get_next_line (get_next_line.c:63)
==64963==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64963==    by 0x405963: main (mandatory.cpp:57)
==64963== 
==64963== 44 bytes in 1 blocks are definitely lost in loss record 3 of 5
==64963==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64963==    by 0x4075D8: ft_strjoin (get_next_line_utils.c:58)
==64963==    by 0x407494: get_next_line (get_next_line.c:100)
==64963==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64963==    by 0x405951: main (mandatory.cpp:57)
==64963== 
==64963== 10,000,001 bytes in 1 blocks are possibly lost in loss record 4 of 5
==64963==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64963==    by 0x4072FC: get_next_line (get_next_line.c:27)
==64963==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64963==    by 0x40596F: main (mandatory.cpp:57)
==64963== 
==64963== 10,000,001 bytes in 1 blocks are definitely lost in loss record 5 of 5
==64963==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64963==    by 0x4072FC: get_next_line (get_next_line.c:27)
==64963==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64963==    by 0x405963: main (mandatory.cpp:57)
==64963== 
==64966== Invalid read of size 1
==64966==    at 0x4078BE: f_del_front_bn (get_next_line_utils.c:142)
==64966==    by 0x407410: get_next_line (get_next_line.c:66)
==64966==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64966==    by 0x405B99: main (mandatory.cpp:68)
==64966==  Address 0x4de65dc is 0 bytes after a block of size 44 alloc'd
==64966==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64966==    by 0x4075D8: ft_strjoin (get_next_line_utils.c:58)
==64966==    by 0x407494: get_next_line (get_next_line.c:100)
==64966==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64966==    by 0x405B99: main (mandatory.cpp:68)
==64966== 
==64966== Invalid write of size 1
==64966==    at 0x4078D2: f_del_front_bn (get_next_line_utils.c:148)
==64966==    by 0x407410: get_next_line (get_next_line.c:66)
==64966==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64966==    by 0x405B99: main (mandatory.cpp:68)
==64966==  Address 0x4de6700 is 0 bytes after a block of size 0 alloc'd
==64966==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64966==    by 0x407867: f_del_front_bn (get_next_line_utils.c:135)
==64966==    by 0x407410: get_next_line (get_next_line.c:66)
==64966==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64966==    by 0x405B99: main (mandatory.cpp:68)
==64966== 
==64966== Invalid read of size 1
==64966==    at 0x407532: ft_strchr (get_next_line_utils.c:25)
==64966==    by 0x40732D: get_next_line (get_next_line.c:33)
==64966==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64966==    by 0x405BA5: main (mandatory.cpp:68)
==64966==  Address 0x4de6700 is 0 bytes after a block of size 0 alloc'd
==64966==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64966==    by 0x407867: f_del_front_bn (get_next_line_utils.c:135)
==64966==    by 0x407410: get_next_line (get_next_line.c:66)
==64966==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64966==    by 0x405B99: main (mandatory.cpp:68)
==64966== 
==64966== Invalid read of size 1
==64966==    at 0x407532: ft_strchr (get_next_line_utils.c:25)
==64966==    by 0x407384: get_next_line (get_next_line.c:46)
==64966==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64966==    by 0x405BA5: main (mandatory.cpp:68)
==64966==  Address 0x4de6700 is 0 bytes after a block of size 0 alloc'd
==64966==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64966==    by 0x407867: f_del_front_bn (get_next_line_utils.c:135)
==64966==    by 0x407410: get_next_line (get_next_line.c:66)
==64966==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64966==    by 0x405B99: main (mandatory.cpp:68)
==64966== 
==64966== Invalid read of size 1
==64966==    at 0x4073D4: get_next_line (get_next_line.c:61)
==64966==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64966==    by 0x405BA5: main (mandatory.cpp:68)
==64966==  Address 0x4de6700 is 0 bytes after a block of size 0 alloc'd
==64966==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64966==    by 0x407867: f_del_front_bn (get_next_line_utils.c:135)
==64966==    by 0x407410: get_next_line (get_next_line.c:66)
==64966==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64966==    by 0x405B99: main (mandatory.cpp:68)
==64966== 
==64966== 45 bytes in 1 blocks are definitely lost in loss record 2 of 4
==64966==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64966==    by 0x407735: f_search_bn (get_next_line_utils.c:97)
==64966==    by 0x4073E9: get_next_line (get_next_line.c:63)
==64966==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64966==    by 0x405B99: main (mandatory.cpp:68)
==64966== 
==64966== 10,000,001 bytes in 1 blocks are possibly lost in loss record 3 of 4
==64966==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64966==    by 0x4072FC: get_next_line (get_next_line.c:27)
==64966==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64966==    by 0x405B99: main (mandatory.cpp:68)
==64966== 
==64966== 10,000,001 bytes in 1 blocks are definitely lost in loss record 4 of 4
==64966==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64966==    by 0x4072FC: get_next_line (get_next_line.c:27)
==64966==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64966==    by 0x405BA5: main (mandatory.cpp:68)
==64966== 
==64969== Invalid read of size 1
==64969==    at 0x4078BE: f_del_front_bn (get_next_line_utils.c:142)
==64969==    by 0x407410: get_next_line (get_next_line.c:66)
==64969==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64969==    by 0x405DD7: main (mandatory.cpp:73)
==64969==  Address 0x4de69a2 is 0 bytes after a block of size 2 alloc'd
==64969==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64969==    by 0x407867: f_del_front_bn (get_next_line_utils.c:135)
==64969==    by 0x4074D3: get_next_line (get_next_line.c:105)
==64969==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64969==    by 0x405DC5: main (mandatory.cpp:73)
==64969== 
==64969== Invalid write of size 1
==64969==    at 0x4078D2: f_del_front_bn (get_next_line_utils.c:148)
==64969==    by 0x407410: get_next_line (get_next_line.c:66)
==64969==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64969==    by 0x405DD7: main (mandatory.cpp:73)
==64969==  Address 0x4de6a90 is 0 bytes after a block of size 0 alloc'd
==64969==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64969==    by 0x407867: f_del_front_bn (get_next_line_utils.c:135)
==64969==    by 0x407410: get_next_line (get_next_line.c:66)
==64969==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64969==    by 0x405DD7: main (mandatory.cpp:73)
==64969== 
==64969== Invalid read of size 1
==64969==    at 0x407532: ft_strchr (get_next_line_utils.c:25)
==64969==    by 0x40732D: get_next_line (get_next_line.c:33)
==64969==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64969==    by 0x405DE3: main (mandatory.cpp:73)
==64969==  Address 0x4de6a90 is 0 bytes after a block of size 0 alloc'd
==64969==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64969==    by 0x407867: f_del_front_bn (get_next_line_utils.c:135)
==64969==    by 0x407410: get_next_line (get_next_line.c:66)
==64969==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64969==    by 0x405DD7: main (mandatory.cpp:73)
==64969== 
==64969== Invalid read of size 1
==64969==    at 0x407532: ft_strchr (get_next_line_utils.c:25)
==64969==    by 0x407384: get_next_line (get_next_line.c:46)
==64969==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64969==    by 0x405DE3: main (mandatory.cpp:73)
==64969==  Address 0x4de6a90 is 0 bytes after a block of size 0 alloc'd
==64969==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64969==    by 0x407867: f_del_front_bn (get_next_line_utils.c:135)
==64969==    by 0x407410: get_next_line (get_next_line.c:66)
==64969==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64969==    by 0x405DD7: main (mandatory.cpp:73)
==64969== 
==64969== Invalid read of size 1
==64969==    at 0x4073D4: get_next_line (get_next_line.c:61)
==64969==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64969==    by 0x405DE3: main (mandatory.cpp:73)
==64969==  Address 0x4de6a90 is 0 bytes after a block of size 0 alloc'd
==64969==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64969==    by 0x407867: f_del_front_bn (get_next_line_utils.c:135)
==64969==    by 0x407410: get_next_line (get_next_line.c:66)
==64969==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64969==    by 0x405DD7: main (mandatory.cpp:73)
==64969== 
==64969== 3 bytes in 1 blocks are definitely lost in loss record 2 of 5
==64969==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64969==    by 0x407735: f_search_bn (get_next_line_utils.c:97)
==64969==    by 0x4073E9: get_next_line (get_next_line.c:63)
==64969==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64969==    by 0x405DD7: main (mandatory.cpp:73)
==64969== 
==64969== 45 bytes in 1 blocks are definitely lost in loss record 3 of 5
==64969==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64969==    by 0x4075D8: ft_strjoin (get_next_line_utils.c:58)
==64969==    by 0x407494: get_next_line (get_next_line.c:100)
==64969==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64969==    by 0x405DC5: main (mandatory.cpp:73)
==64969== 
==64969== 10,000,001 bytes in 1 blocks are possibly lost in loss record 4 of 5
==64969==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64969==    by 0x4072FC: get_next_line (get_next_line.c:27)
==64969==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64969==    by 0x405DE3: main (mandatory.cpp:73)
==64969== 
==64969== 10,000,001 bytes in 1 blocks are definitely lost in loss record 5 of 5
==64969==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64969==    by 0x4072FC: get_next_line (get_next_line.c:27)
==64969==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64969==    by 0x405DD7: main (mandatory.cpp:73)
==64969== 
==64972== 6 bytes in 1 blocks are definitely lost in loss record 2 of 7
==64972==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64972==    by 0x4075D8: ft_strjoin (get_next_line_utils.c:58)
==64972==    by 0x407494: get_next_line (get_next_line.c:100)
==64972==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64972==    by 0x406003: main (mandatory.cpp:79)
==64972== 
==64972== 10,000,001 bytes in 1 blocks are possibly lost in loss record 3 of 7
==64972==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64972==    by 0x4072FC: get_next_line (get_next_line.c:27)
==64972==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64972==    by 0x406027: main (mandatory.cpp:79)
==64972== 
==64972== 10,000,001 bytes in 1 blocks are possibly lost in loss record 4 of 7
==64972==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64972==    by 0x4072FC: get_next_line (get_next_line.c:27)
==64972==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64972==    by 0x406057: main (mandatory.cpp:79)
==64972== 
==64972== 10,000,001 bytes in 1 blocks are definitely lost in loss record 5 of 7
==64972==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64972==    by 0x4072FC: get_next_line (get_next_line.c:27)
==64972==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64972==    by 0x406015: main (mandatory.cpp:79)
==64972== 
==64972== 10,000,001 bytes in 1 blocks are definitely lost in loss record 6 of 7
==64972==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64972==    by 0x4072FC: get_next_line (get_next_line.c:27)
==64972==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64972==    by 0x406039: main (mandatory.cpp:79)
==64972== 
==64972== 10,000,001 bytes in 1 blocks are definitely lost in loss record 7 of 7
==64972==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64972==    by 0x4072FC: get_next_line (get_next_line.c:27)
==64972==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64972==    by 0x40604B: main (mandatory.cpp:79)
==64972== 
==64975== Invalid read of size 1
==64975==    at 0x4078BE: f_del_front_bn (get_next_line_utils.c:142)
==64975==    by 0x407410: get_next_line (get_next_line.c:66)
==64975==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64975==    by 0x4062BF: main (mandatory.cpp:88)
==64975==  Address 0x4de746a is 0 bytes after a block of size 42 alloc'd
==64975==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64975==    by 0x407867: f_del_front_bn (get_next_line_utils.c:135)
==64975==    by 0x407354: get_next_line (get_next_line.c:36)
==64975==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64975==    by 0x4062AD: main (mandatory.cpp:88)
==64975== 
==64975== Invalid write of size 1
==64975==    at 0x4078D2: f_del_front_bn (get_next_line_utils.c:148)
==64975==    by 0x407410: get_next_line (get_next_line.c:66)
==64975==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64975==    by 0x4062BF: main (mandatory.cpp:88)
==64975==  Address 0x4de7590 is 0 bytes after a block of size 0 alloc'd
==64975==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64975==    by 0x407867: f_del_front_bn (get_next_line_utils.c:135)
==64975==    by 0x407410: get_next_line (get_next_line.c:66)
==64975==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64975==    by 0x4062BF: main (mandatory.cpp:88)
==64975== 
==64975== Invalid read of size 1
==64975==    at 0x407532: ft_strchr (get_next_line_utils.c:25)
==64975==    by 0x40732D: get_next_line (get_next_line.c:33)
==64975==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64975==    by 0x4062CB: main (mandatory.cpp:88)
==64975==  Address 0x4de7590 is 0 bytes after a block of size 0 alloc'd
==64975==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64975==    by 0x407867: f_del_front_bn (get_next_line_utils.c:135)
==64975==    by 0x407410: get_next_line (get_next_line.c:66)
==64975==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64975==    by 0x4062BF: main (mandatory.cpp:88)
==64975== 
==64975== Invalid read of size 1
==64975==    at 0x407532: ft_strchr (get_next_line_utils.c:25)
==64975==    by 0x407384: get_next_line (get_next_line.c:46)
==64975==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64975==    by 0x4062CB: main (mandatory.cpp:88)
==64975==  Address 0x4de7590 is 0 bytes after a block of size 0 alloc'd
==64975==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64975==    by 0x407867: f_del_front_bn (get_next_line_utils.c:135)
==64975==    by 0x407410: get_next_line (get_next_line.c:66)
==64975==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64975==    by 0x4062BF: main (mandatory.cpp:88)
==64975== 
==64975== Invalid read of size 1
==64975==    at 0x4073D4: get_next_line (get_next_line.c:61)
==64975==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64975==    by 0x4062CB: main (mandatory.cpp:88)
==64975==  Address 0x4de7590 is 0 bytes after a block of size 0 alloc'd
==64975==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64975==    by 0x407867: f_del_front_bn (get_next_line_utils.c:135)
==64975==    by 0x407410: get_next_line (get_next_line.c:66)
==64975==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64975==    by 0x4062BF: main (mandatory.cpp:88)
==64975== 
==64975== 43 bytes in 1 blocks are definitely lost in loss record 2 of 8
==64975==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64975==    by 0x407735: f_search_bn (get_next_line_utils.c:97)
==64975==    by 0x4073E9: get_next_line (get_next_line.c:63)
==64975==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64975==    by 0x4062BF: main (mandatory.cpp:88)
==64975== 
==64975== 214 bytes in 1 blocks are definitely lost in loss record 3 of 8
==64975==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64975==    by 0x4075D8: ft_strjoin (get_next_line_utils.c:58)
==64975==    by 0x407494: get_next_line (get_next_line.c:100)
==64975==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64975==    by 0x406277: main (mandatory.cpp:88)
==64975== 
==64975== 10,000,001 bytes in 1 blocks are possibly lost in loss record 4 of 8
==64975==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64975==    by 0x4072FC: get_next_line (get_next_line.c:27)
==64975==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64975==    by 0x40629B: main (mandatory.cpp:88)
==64975== 
==64975== 10,000,001 bytes in 1 blocks are possibly lost in loss record 5 of 8
==64975==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64975==    by 0x4072FC: get_next_line (get_next_line.c:27)
==64975==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64975==    by 0x4062CB: main (mandatory.cpp:88)
==64975== 
==64975== 10,000,001 bytes in 1 blocks are definitely lost in loss record 6 of 8
==64975==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64975==    by 0x4072FC: get_next_line (get_next_line.c:27)
==64975==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64975==    by 0x406289: main (mandatory.cpp:88)
==64975== 
==64975== 10,000,001 bytes in 1 blocks are definitely lost in loss record 7 of 8
==64975==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64975==    by 0x4072FC: get_next_line (get_next_line.c:27)
==64975==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64975==    by 0x4062AD: main (mandatory.cpp:88)
==64975== 
==64975== 10,000,001 bytes in 1 blocks are definitely lost in loss record 8 of 8
==64975==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64975==    by 0x4072FC: get_next_line (get_next_line.c:27)
==64975==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64975==    by 0x4062BF: main (mandatory.cpp:88)
==64975== 
==64976== 210 bytes in 1 blocks are definitely lost in loss record 2 of 7
==64976==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64976==    by 0x4075D8: ft_strjoin (get_next_line_utils.c:58)
==64976==    by 0x407494: get_next_line (get_next_line.c:100)
==64976==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64976==    by 0x4064EB: main (mandatory.cpp:97)
==64976== 
==64976== 10,000,001 bytes in 1 blocks are possibly lost in loss record 3 of 7
==64976==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64976==    by 0x4072FC: get_next_line (get_next_line.c:27)
==64976==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64976==    by 0x40650F: main (mandatory.cpp:97)
==64976== 
==64976== 10,000,001 bytes in 1 blocks are possibly lost in loss record 4 of 7
==64976==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64976==    by 0x4072FC: get_next_line (get_next_line.c:27)
==64976==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64976==    by 0x40653F: main (mandatory.cpp:97)
==64976== 
==64976== 10,000,001 bytes in 1 blocks are definitely lost in loss record 5 of 7
==64976==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64976==    by 0x4072FC: get_next_line (get_next_line.c:27)
==64976==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64976==    by 0x4064FD: main (mandatory.cpp:97)
==64976== 
==64976== 10,000,001 bytes in 1 blocks are definitely lost in loss record 6 of 7
==64976==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64976==    by 0x4072FC: get_next_line (get_next_line.c:27)
==64976==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64976==    by 0x406521: main (mandatory.cpp:97)
==64976== 
==64976== 10,000,001 bytes in 1 blocks are definitely lost in loss record 7 of 7
==64976==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64976==    by 0x4072FC: get_next_line (get_next_line.c:27)
==64976==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64976==    by 0x406533: main (mandatory.cpp:97)
==64976== 
==64980== Invalid read of size 1
==64980==    at 0x4078BE: f_del_front_bn (get_next_line_utils.c:142)
==64980==    by 0x407410: get_next_line (get_next_line.c:66)
==64980==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64980==    by 0x4067EF: main (mandatory.cpp:106)
==64980==  Address 0x4de7eda is 0 bytes after a block of size 42 alloc'd
==64980==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64980==    by 0x407867: f_del_front_bn (get_next_line_utils.c:135)
==64980==    by 0x407354: get_next_line (get_next_line.c:36)
==64980==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64980==    by 0x4067DD: main (mandatory.cpp:106)
==64980== 
==64980== Invalid write of size 1
==64980==    at 0x4078D2: f_del_front_bn (get_next_line_utils.c:148)
==64980==    by 0x407410: get_next_line (get_next_line.c:66)
==64980==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64980==    by 0x4067EF: main (mandatory.cpp:106)
==64980==  Address 0x4de8000 is 0 bytes after a block of size 0 alloc'd
==64980==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64980==    by 0x407867: f_del_front_bn (get_next_line_utils.c:135)
==64980==    by 0x407410: get_next_line (get_next_line.c:66)
==64980==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64980==    by 0x4067EF: main (mandatory.cpp:106)
==64980== 
==64980== Invalid read of size 1
==64980==    at 0x407532: ft_strchr (get_next_line_utils.c:25)
==64980==    by 0x40732D: get_next_line (get_next_line.c:33)
==64980==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64980==    by 0x4067FB: main (mandatory.cpp:106)
==64980==  Address 0x4de8000 is 0 bytes after a block of size 0 alloc'd
==64980==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64980==    by 0x407867: f_del_front_bn (get_next_line_utils.c:135)
==64980==    by 0x407410: get_next_line (get_next_line.c:66)
==64980==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64980==    by 0x4067EF: main (mandatory.cpp:106)
==64980== 
==64980== Invalid read of size 1
==64980==    at 0x407532: ft_strchr (get_next_line_utils.c:25)
==64980==    by 0x407384: get_next_line (get_next_line.c:46)
==64980==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64980==    by 0x4067FB: main (mandatory.cpp:106)
==64980==  Address 0x4de8000 is 0 bytes after a block of size 0 alloc'd
==64980==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64980==    by 0x407867: f_del_front_bn (get_next_line_utils.c:135)
==64980==    by 0x407410: get_next_line (get_next_line.c:66)
==64980==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64980==    by 0x4067EF: main (mandatory.cpp:106)
==64980== 
==64980== Invalid read of size 1
==64980==    at 0x4073D4: get_next_line (get_next_line.c:61)
==64980==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64980==    by 0x4067FB: main (mandatory.cpp:106)
==64980==  Address 0x4de8000 is 0 bytes after a block of size 0 alloc'd
==64980==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64980==    by 0x407867: f_del_front_bn (get_next_line_utils.c:135)
==64980==    by 0x407410: get_next_line (get_next_line.c:66)
==64980==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64980==    by 0x4067EF: main (mandatory.cpp:106)
==64980== 
==64980== 43 bytes in 1 blocks are definitely lost in loss record 2 of 12
==64980==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64980==    by 0x407735: f_search_bn (get_next_line_utils.c:97)
==64980==    by 0x4073E9: get_next_line (get_next_line.c:63)
==64980==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64980==    by 0x4067EF: main (mandatory.cpp:106)
==64980== 
==64980== 218 bytes in 1 blocks are definitely lost in loss record 3 of 12
==64980==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64980==    by 0x4075D8: ft_strjoin (get_next_line_utils.c:58)
==64980==    by 0x407494: get_next_line (get_next_line.c:100)
==64980==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64980==    by 0x40675F: main (mandatory.cpp:106)
==64980== 
==64980== 10,000,001 bytes in 1 blocks are possibly lost in loss record 4 of 12
==64980==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64980==    by 0x4072FC: get_next_line (get_next_line.c:27)
==64980==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64980==    by 0x406783: main (mandatory.cpp:106)
==64980== 
==64980== 10,000,001 bytes in 1 blocks are possibly lost in loss record 5 of 12
==64980==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64980==    by 0x4072FC: get_next_line (get_next_line.c:27)
==64980==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64980==    by 0x4067B9: main (mandatory.cpp:106)
==64980== 
==64980== 10,000,001 bytes in 1 blocks are possibly lost in loss record 6 of 12
==64980==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64980==    by 0x4072FC: get_next_line (get_next_line.c:27)
==64980==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64980==    by 0x4067CB: main (mandatory.cpp:106)
==64980== 
==64980== 10,000,001 bytes in 1 blocks are possibly lost in loss record 7 of 12
==64980==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64980==    by 0x4072FC: get_next_line (get_next_line.c:27)
==64980==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64980==    by 0x4067DD: main (mandatory.cpp:106)
==64980== 
==64980== 10,000,001 bytes in 1 blocks are possibly lost in loss record 8 of 12
==64980==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64980==    by 0x4072FC: get_next_line (get_next_line.c:27)
==64980==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64980==    by 0x4067FB: main (mandatory.cpp:106)
==64980== 
==64980== 10,000,001 bytes in 1 blocks are definitely lost in loss record 9 of 12
==64980==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64980==    by 0x4072FC: get_next_line (get_next_line.c:27)
==64980==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64980==    by 0x406771: main (mandatory.cpp:106)
==64980== 
==64980== 10,000,001 bytes in 1 blocks are definitely lost in loss record 10 of 12
==64980==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64980==    by 0x4072FC: get_next_line (get_next_line.c:27)
==64980==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64980==    by 0x406795: main (mandatory.cpp:106)
==64980== 
==64980== 10,000,001 bytes in 1 blocks are definitely lost in loss record 11 of 12
==64980==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64980==    by 0x4072FC: get_next_line (get_next_line.c:27)
==64980==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64980==    by 0x4067A7: main (mandatory.cpp:106)
==64980== 
==64980== 10,000,001 bytes in 1 blocks are definitely lost in loss record 12 of 12
==64980==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64980==    by 0x4072FC: get_next_line (get_next_line.c:27)
==64980==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64980==    by 0x4067EF: main (mandatory.cpp:106)
==64980== 
==64982== 219 bytes in 1 blocks are definitely lost in loss record 2 of 11
==64982==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64982==    by 0x4075D8: ft_strjoin (get_next_line_utils.c:58)
==64982==    by 0x407494: get_next_line (get_next_line.c:100)
==64982==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64982==    by 0x406A1B: main (mandatory.cpp:119)
==64982== 
==64982== 10,000,001 bytes in 1 blocks are possibly lost in loss record 3 of 11
==64982==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64982==    by 0x4072FC: get_next_line (get_next_line.c:27)
==64982==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64982==    by 0x406A3F: main (mandatory.cpp:119)
==64982== 
==64982== 10,000,001 bytes in 1 blocks are possibly lost in loss record 4 of 11
==64982==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64982==    by 0x4072FC: get_next_line (get_next_line.c:27)
==64982==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64982==    by 0x406A75: main (mandatory.cpp:119)
==64982== 
==64982== 10,000,001 bytes in 1 blocks are possibly lost in loss record 5 of 11
==64982==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64982==    by 0x4072FC: get_next_line (get_next_line.c:27)
==64982==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64982==    by 0x406A87: main (mandatory.cpp:119)
==64982== 
==64982== 10,000,001 bytes in 1 blocks are possibly lost in loss record 6 of 11
==64982==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64982==    by 0x4072FC: get_next_line (get_next_line.c:27)
==64982==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64982==    by 0x406A99: main (mandatory.cpp:119)
==64982== 
==64982== 10,000,001 bytes in 1 blocks are possibly lost in loss record 7 of 11
==64982==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64982==    by 0x4072FC: get_next_line (get_next_line.c:27)
==64982==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64982==    by 0x406AB7: main (mandatory.cpp:119)
==64982== 
==64982== 10,000,001 bytes in 1 blocks are definitely lost in loss record 8 of 11
==64982==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64982==    by 0x4072FC: get_next_line (get_next_line.c:27)
==64982==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64982==    by 0x406A2D: main (mandatory.cpp:119)
==64982== 
==64982== 10,000,001 bytes in 1 blocks are definitely lost in loss record 9 of 11
==64982==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64982==    by 0x4072FC: get_next_line (get_next_line.c:27)
==64982==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64982==    by 0x406A51: main (mandatory.cpp:119)
==64982== 
==64982== 10,000,001 bytes in 1 blocks are definitely lost in loss record 10 of 11
==64982==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64982==    by 0x4072FC: get_next_line (get_next_line.c:27)
==64982==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64982==    by 0x406A63: main (mandatory.cpp:119)
==64982== 
==64982== 10,000,001 bytes in 1 blocks are definitely lost in loss record 11 of 11
==64982==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64982==    by 0x4072FC: get_next_line (get_next_line.c:27)
==64982==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64982==    by 0x406AAB: main (mandatory.cpp:119)
==64982== 
==64985== Invalid read of size 1
==64985==    at 0x4078BE: f_del_front_bn (get_next_line_utils.c:142)
==64985==    by 0x407410: get_next_line (get_next_line.c:66)
==64985==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64985==    by 0x406CD7: main (mandatory.cpp:132)
==64985==  Address 0x4dea2b1 is 0 bytes after a block of size 10,001 alloc'd
==64985==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64985==    by 0x4075D8: ft_strjoin (get_next_line_utils.c:58)
==64985==    by 0x407494: get_next_line (get_next_line.c:100)
==64985==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64985==    by 0x406CD7: main (mandatory.cpp:132)
==64985== 
==64985== Invalid write of size 1
==64985==    at 0x4078D2: f_del_front_bn (get_next_line_utils.c:148)
==64985==    by 0x407410: get_next_line (get_next_line.c:66)
==64985==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64985==    by 0x406CD7: main (mandatory.cpp:132)
==64985==  Address 0x4def1c0 is 0 bytes after a block of size 0 alloc'd
==64985==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64985==    by 0x407867: f_del_front_bn (get_next_line_utils.c:135)
==64985==    by 0x407410: get_next_line (get_next_line.c:66)
==64985==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64985==    by 0x406CD7: main (mandatory.cpp:132)
==64985== 
==64985== Invalid read of size 1
==64985==    at 0x407532: ft_strchr (get_next_line_utils.c:25)
==64985==    by 0x40732D: get_next_line (get_next_line.c:33)
==64985==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64985==    by 0x406CE3: main (mandatory.cpp:132)
==64985==  Address 0x4def1c0 is 0 bytes after a block of size 0 alloc'd
==64985==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64985==    by 0x407867: f_del_front_bn (get_next_line_utils.c:135)
==64985==    by 0x407410: get_next_line (get_next_line.c:66)
==64985==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64985==    by 0x406CD7: main (mandatory.cpp:132)
==64985== 
==64985== Invalid read of size 1
==64985==    at 0x407532: ft_strchr (get_next_line_utils.c:25)
==64985==    by 0x407384: get_next_line (get_next_line.c:46)
==64985==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64985==    by 0x406CE3: main (mandatory.cpp:132)
==64985==  Address 0x4def1c0 is 0 bytes after a block of size 0 alloc'd
==64985==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64985==    by 0x407867: f_del_front_bn (get_next_line_utils.c:135)
==64985==    by 0x407410: get_next_line (get_next_line.c:66)
==64985==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64985==    by 0x406CD7: main (mandatory.cpp:132)
==64985== 
==64985== Invalid read of size 1
==64985==    at 0x4073D4: get_next_line (get_next_line.c:61)
==64985==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64985==    by 0x406CE3: main (mandatory.cpp:132)
==64985==  Address 0x4def1c0 is 0 bytes after a block of size 0 alloc'd
==64985==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64985==    by 0x407867: f_del_front_bn (get_next_line_utils.c:135)
==64985==    by 0x407410: get_next_line (get_next_line.c:66)
==64985==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64985==    by 0x406CD7: main (mandatory.cpp:132)
==64985== 
==64985== 10,002 bytes in 1 blocks are definitely lost in loss record 2 of 4
==64985==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64985==    by 0x407735: f_search_bn (get_next_line_utils.c:97)
==64985==    by 0x4073E9: get_next_line (get_next_line.c:63)
==64985==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64985==    by 0x406CD7: main (mandatory.cpp:132)
==64985== 
==64985== 10,000,001 bytes in 1 blocks are possibly lost in loss record 3 of 4
==64985==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64985==    by 0x4072FC: get_next_line (get_next_line.c:27)
==64985==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64985==    by 0x406CD7: main (mandatory.cpp:132)
==64985== 
==64985== 10,000,001 bytes in 1 blocks are definitely lost in loss record 4 of 4
==64985==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64985==    by 0x4072FC: get_next_line (get_next_line.c:27)
==64985==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64985==    by 0x406CE3: main (mandatory.cpp:132)
==64985== 
==64989== 10,002 bytes in 1 blocks are definitely lost in loss record 2 of 3
==64989==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64989==    by 0x4075D8: ft_strjoin (get_next_line_utils.c:58)
==64989==    by 0x407494: get_next_line (get_next_line.c:100)
==64989==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64989==    by 0x406F03: main (mandatory.cpp:136)
==64989== 
==64989== 10,000,001 bytes in 1 blocks are definitely lost in loss record 3 of 3
==64989==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64989==    by 0x4072FC: get_next_line (get_next_line.c:27)
==64989==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==64989==    by 0x406F0F: main (mandatory.cpp:136)
==64989== 
==64990== Invalid read of size 1
==64990==    at 0x484FBD4: strcmp (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==64990==    by 0x402D0A: gnl(int, char const*) (gnl.cpp:24)
==64990==    by 0x40712E: main (mandatory.cpp:141)
==64990==  Address 0x0 is not stack'd, malloc'd or (recently) free'd
==64990== 
