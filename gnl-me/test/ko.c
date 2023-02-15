==110576== Invalid write of size 1
==110576==    at 0x407387: get_next_line (get_next_line.c:47)
==110576==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110576==    by 0x404BB6: main (mandatory.cpp:25)
==110576==  Address 0x4de429f is 1 bytes before a block of size 2 alloc'd
==110576==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110576==    by 0x4072EC: get_next_line (get_next_line.c:27)
==110576==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110576==    by 0x404BB6: main (mandatory.cpp:25)
==110576== 
==110576== Invalid write of size 1
==110576==    at 0x407387: get_next_line (get_next_line.c:47)
==110576==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110576==    by 0x404BD8: main (mandatory.cpp:25)
==110576==  Address 0x4de42ef is 1 bytes before a block of size 2 alloc'd
==110576==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110576==    by 0x4072EC: get_next_line (get_next_line.c:27)
==110576==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110576==    by 0x404BD8: main (mandatory.cpp:25)
==110576== 
==110576== 2 bytes in 1 blocks are definitely lost in loss record 1 of 2
==110576==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110576==    by 0x4072EC: get_next_line (get_next_line.c:27)
==110576==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110576==    by 0x404BB6: main (mandatory.cpp:25)
==110576== 
==110576== 2 bytes in 1 blocks are definitely lost in loss record 2 of 2
==110576==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110576==    by 0x4072EC: get_next_line (get_next_line.c:27)
==110576==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110576==    by 0x404BD8: main (mandatory.cpp:25)
==110576== 
==110579== Invalid read of size 1
==110579==    at 0x4073AB: get_next_line (get_next_line.c:58)
==110579==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110579==    by 0x404E53: main (mandatory.cpp:31)
==110579==  Address 0x0 is not stack'd, malloc'd or (recently) free'd
==110579== 
==110587== 2 bytes in 1 blocks are definitely lost in loss record 2 of 3
==110587==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110587==    by 0x4075AF: ft_strjoin (get_next_line_utils.c:58)
==110587==    by 0x40746B: get_next_line (get_next_line.c:82)
==110587==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110587==    by 0x40507F: main (mandatory.cpp:36)
==110587== 
==110587== 2 bytes in 1 blocks are definitely lost in loss record 3 of 3
==110587==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110587==    by 0x4072EC: get_next_line (get_next_line.c:27)
==110587==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110587==    by 0x40508B: main (mandatory.cpp:36)
==110587== 
==110590== Invalid read of size 1
==110590==    at 0x407895: f_del_front_bn (get_next_line_utils.c:142)
==110590==    by 0x4073E7: get_next_line (get_next_line.c:63)
==110590==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110590==    by 0x4052AB: main (mandatory.cpp:41)
==110590==  Address 0x4de686a is 0 bytes after a block of size 42 alloc'd
==110590==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110590==    by 0x4075AF: ft_strjoin (get_next_line_utils.c:58)
==110590==    by 0x40746B: get_next_line (get_next_line.c:82)
==110590==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110590==    by 0x4052AB: main (mandatory.cpp:41)
==110590== 
==110590== Invalid write of size 1
==110590==    at 0x4078A9: f_del_front_bn (get_next_line_utils.c:148)
==110590==    by 0x4073E7: get_next_line (get_next_line.c:63)
==110590==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110590==    by 0x4052AB: main (mandatory.cpp:41)
==110590==  Address 0x4de6990 is 0 bytes after a block of size 0 alloc'd
==110590==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110590==    by 0x40783E: f_del_front_bn (get_next_line_utils.c:135)
==110590==    by 0x4073E7: get_next_line (get_next_line.c:63)
==110590==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110590==    by 0x4052AB: main (mandatory.cpp:41)
==110590== 
==110590== Invalid read of size 1
==110590==    at 0x407509: ft_strchr (get_next_line_utils.c:25)
==110590==    by 0x40731D: get_next_line (get_next_line.c:33)
==110590==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110590==    by 0x4052B7: main (mandatory.cpp:41)
==110590==  Address 0x4de6990 is 0 bytes after a block of size 0 alloc'd
==110590==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110590==    by 0x40783E: f_del_front_bn (get_next_line_utils.c:135)
==110590==    by 0x4073E7: get_next_line (get_next_line.c:63)
==110590==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110590==    by 0x4052AB: main (mandatory.cpp:41)
==110590== 
==110590== Invalid read of size 1
==110590==    at 0x4073AB: get_next_line (get_next_line.c:58)
==110590==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110590==    by 0x4052B7: main (mandatory.cpp:41)
==110590==  Address 0x4de6990 is 0 bytes after a block of size 0 alloc'd
==110590==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110590==    by 0x40783E: f_del_front_bn (get_next_line_utils.c:135)
==110590==    by 0x4073E7: get_next_line (get_next_line.c:63)
==110590==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110590==    by 0x4052AB: main (mandatory.cpp:41)
==110590== 
==110590== 2 bytes in 1 blocks are definitely lost in loss record 2 of 4
==110590==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110590==    by 0x4072EC: get_next_line (get_next_line.c:27)
==110590==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110590==    by 0x4052AB: main (mandatory.cpp:41)
==110590== 
==110590== 2 bytes in 1 blocks are definitely lost in loss record 3 of 4
==110590==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110590==    by 0x4072EC: get_next_line (get_next_line.c:27)
==110590==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110590==    by 0x4052B7: main (mandatory.cpp:41)
==110590== 
==110590== 43 bytes in 1 blocks are definitely lost in loss record 4 of 4
==110590==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110590==    by 0x40770C: f_search_bn (get_next_line_utils.c:97)
==110590==    by 0x4073C0: get_next_line (get_next_line.c:60)
==110590==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110590==    by 0x4052AB: main (mandatory.cpp:41)
==110590== 
==110591== Invalid read of size 1
==110591==    at 0x407895: f_del_front_bn (get_next_line_utils.c:142)
==110591==    by 0x4073E7: get_next_line (get_next_line.c:63)
==110591==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110591==    by 0x4054E9: main (mandatory.cpp:46)
==110591==  Address 0x4de6cd2 is 0 bytes after a block of size 2 alloc'd
==110591==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110591==    by 0x4075AF: ft_strjoin (get_next_line_utils.c:58)
==110591==    by 0x40746B: get_next_line (get_next_line.c:82)
==110591==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110591==    by 0x4054E9: main (mandatory.cpp:46)
==110591== 
==110591== Invalid write of size 1
==110591==    at 0x4078A9: f_del_front_bn (get_next_line_utils.c:148)
==110591==    by 0x4073E7: get_next_line (get_next_line.c:63)
==110591==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110591==    by 0x4054E9: main (mandatory.cpp:46)
==110591==  Address 0x4de6dc0 is 0 bytes after a block of size 0 alloc'd
==110591==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110591==    by 0x40783E: f_del_front_bn (get_next_line_utils.c:135)
==110591==    by 0x4073E7: get_next_line (get_next_line.c:63)
==110591==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110591==    by 0x4054E9: main (mandatory.cpp:46)
==110591== 
==110591== Invalid read of size 1
==110591==    at 0x407509: ft_strchr (get_next_line_utils.c:25)
==110591==    by 0x40731D: get_next_line (get_next_line.c:33)
==110591==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110591==    by 0x4054F5: main (mandatory.cpp:46)
==110591==  Address 0x4de6dc0 is 0 bytes after a block of size 0 alloc'd
==110591==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110591==    by 0x40783E: f_del_front_bn (get_next_line_utils.c:135)
==110591==    by 0x4073E7: get_next_line (get_next_line.c:63)
==110591==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110591==    by 0x4054E9: main (mandatory.cpp:46)
==110591== 
==110591== Invalid read of size 1
==110591==    at 0x4073AB: get_next_line (get_next_line.c:58)
==110591==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110591==    by 0x4054F5: main (mandatory.cpp:46)
==110591==  Address 0x4de6dc0 is 0 bytes after a block of size 0 alloc'd
==110591==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110591==    by 0x40783E: f_del_front_bn (get_next_line_utils.c:135)
==110591==    by 0x4073E7: get_next_line (get_next_line.c:63)
==110591==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110591==    by 0x4054E9: main (mandatory.cpp:46)
==110591== 
==110591== 2 bytes in 1 blocks are definitely lost in loss record 2 of 5
==110591==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110591==    by 0x4072EC: get_next_line (get_next_line.c:27)
==110591==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110591==    by 0x4054E9: main (mandatory.cpp:46)
==110591== 
==110591== 2 bytes in 1 blocks are definitely lost in loss record 3 of 5
==110591==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110591==    by 0x4072EC: get_next_line (get_next_line.c:27)
==110591==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110591==    by 0x4054F5: main (mandatory.cpp:46)
==110591== 
==110591== 3 bytes in 1 blocks are definitely lost in loss record 4 of 5
==110591==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110591==    by 0x40770C: f_search_bn (get_next_line_utils.c:97)
==110591==    by 0x4073C0: get_next_line (get_next_line.c:60)
==110591==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110591==    by 0x4054E9: main (mandatory.cpp:46)
==110591== 
==110591== 42 bytes in 1 blocks are definitely lost in loss record 5 of 5
==110591==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110591==    by 0x4075AF: ft_strjoin (get_next_line_utils.c:58)
==110591==    by 0x40746B: get_next_line (get_next_line.c:82)
==110591==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110591==    by 0x4054D7: main (mandatory.cpp:46)
==110591== 
==110595== Invalid read of size 1
==110595==    at 0x407895: f_del_front_bn (get_next_line_utils.c:142)
==110595==    by 0x4073E7: get_next_line (get_next_line.c:63)
==110595==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110595==    by 0x405715: main (mandatory.cpp:52)
==110595==  Address 0x4de6efb is 0 bytes after a block of size 43 alloc'd
==110595==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110595==    by 0x4075AF: ft_strjoin (get_next_line_utils.c:58)
==110595==    by 0x40746B: get_next_line (get_next_line.c:82)
==110595==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110595==    by 0x405715: main (mandatory.cpp:52)
==110595== 
==110595== Invalid write of size 1
==110595==    at 0x4078A9: f_del_front_bn (get_next_line_utils.c:148)
==110595==    by 0x4073E7: get_next_line (get_next_line.c:63)
==110595==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110595==    by 0x405715: main (mandatory.cpp:52)
==110595==  Address 0x4de7020 is 0 bytes after a block of size 0 alloc'd
==110595==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110595==    by 0x40783E: f_del_front_bn (get_next_line_utils.c:135)
==110595==    by 0x4073E7: get_next_line (get_next_line.c:63)
==110595==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110595==    by 0x405715: main (mandatory.cpp:52)
==110595== 
==110595== Invalid read of size 1
==110595==    at 0x407509: ft_strchr (get_next_line_utils.c:25)
==110595==    by 0x40731D: get_next_line (get_next_line.c:33)
==110595==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110595==    by 0x405721: main (mandatory.cpp:52)
==110595==  Address 0x4de7020 is 0 bytes after a block of size 0 alloc'd
==110595==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110595==    by 0x40783E: f_del_front_bn (get_next_line_utils.c:135)
==110595==    by 0x4073E7: get_next_line (get_next_line.c:63)
==110595==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110595==    by 0x405715: main (mandatory.cpp:52)
==110595== 
==110595== Invalid read of size 1
==110595==    at 0x4073AB: get_next_line (get_next_line.c:58)
==110595==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110595==    by 0x405721: main (mandatory.cpp:52)
==110595==  Address 0x4de7020 is 0 bytes after a block of size 0 alloc'd
==110595==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110595==    by 0x40783E: f_del_front_bn (get_next_line_utils.c:135)
==110595==    by 0x4073E7: get_next_line (get_next_line.c:63)
==110595==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110595==    by 0x405715: main (mandatory.cpp:52)
==110595== 
==110595== 2 bytes in 1 blocks are definitely lost in loss record 2 of 4
==110595==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110595==    by 0x4072EC: get_next_line (get_next_line.c:27)
==110595==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110595==    by 0x405715: main (mandatory.cpp:52)
==110595== 
==110595== 2 bytes in 1 blocks are definitely lost in loss record 3 of 4
==110595==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110595==    by 0x4072EC: get_next_line (get_next_line.c:27)
==110595==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110595==    by 0x405721: main (mandatory.cpp:52)
==110595== 
==110595== 44 bytes in 1 blocks are definitely lost in loss record 4 of 4
==110595==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110595==    by 0x40770C: f_search_bn (get_next_line_utils.c:97)
==110595==    by 0x4073C0: get_next_line (get_next_line.c:60)
==110595==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110595==    by 0x405715: main (mandatory.cpp:52)
==110595== 
==110598== Invalid read of size 1
==110598==    at 0x407895: f_del_front_bn (get_next_line_utils.c:142)
==110598==    by 0x4073E7: get_next_line (get_next_line.c:63)
==110598==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110598==    by 0x405953: main (mandatory.cpp:57)
==110598==  Address 0x4de7362 is 0 bytes after a block of size 2 alloc'd
==110598==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110598==    by 0x4075AF: ft_strjoin (get_next_line_utils.c:58)
==110598==    by 0x40746B: get_next_line (get_next_line.c:82)
==110598==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110598==    by 0x405953: main (mandatory.cpp:57)
==110598== 
==110598== Invalid write of size 1
==110598==    at 0x4078A9: f_del_front_bn (get_next_line_utils.c:148)
==110598==    by 0x4073E7: get_next_line (get_next_line.c:63)
==110598==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110598==    by 0x405953: main (mandatory.cpp:57)
==110598==  Address 0x4de7450 is 0 bytes after a block of size 0 alloc'd
==110598==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110598==    by 0x40783E: f_del_front_bn (get_next_line_utils.c:135)
==110598==    by 0x4073E7: get_next_line (get_next_line.c:63)
==110598==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110598==    by 0x405953: main (mandatory.cpp:57)
==110598== 
==110598== Invalid read of size 1
==110598==    at 0x407509: ft_strchr (get_next_line_utils.c:25)
==110598==    by 0x40731D: get_next_line (get_next_line.c:33)
==110598==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110598==    by 0x40595F: main (mandatory.cpp:57)
==110598==  Address 0x4de7450 is 0 bytes after a block of size 0 alloc'd
==110598==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110598==    by 0x40783E: f_del_front_bn (get_next_line_utils.c:135)
==110598==    by 0x4073E7: get_next_line (get_next_line.c:63)
==110598==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110598==    by 0x405953: main (mandatory.cpp:57)
==110598== 
==110598== Invalid read of size 1
==110598==    at 0x4073AB: get_next_line (get_next_line.c:58)
==110598==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110598==    by 0x40595F: main (mandatory.cpp:57)
==110598==  Address 0x4de7450 is 0 bytes after a block of size 0 alloc'd
==110598==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110598==    by 0x40783E: f_del_front_bn (get_next_line_utils.c:135)
==110598==    by 0x4073E7: get_next_line (get_next_line.c:63)
==110598==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110598==    by 0x405953: main (mandatory.cpp:57)
==110598== 
==110598== 2 bytes in 1 blocks are definitely lost in loss record 2 of 5
==110598==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110598==    by 0x4072EC: get_next_line (get_next_line.c:27)
==110598==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110598==    by 0x405953: main (mandatory.cpp:57)
==110598== 
==110598== 2 bytes in 1 blocks are definitely lost in loss record 3 of 5
==110598==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110598==    by 0x4072EC: get_next_line (get_next_line.c:27)
==110598==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110598==    by 0x40595F: main (mandatory.cpp:57)
==110598== 
==110598== 3 bytes in 1 blocks are definitely lost in loss record 4 of 5
==110598==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110598==    by 0x40770C: f_search_bn (get_next_line_utils.c:97)
==110598==    by 0x4073C0: get_next_line (get_next_line.c:60)
==110598==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110598==    by 0x405953: main (mandatory.cpp:57)
==110598== 
==110598== 43 bytes in 1 blocks are definitely lost in loss record 5 of 5
==110598==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110598==    by 0x4075AF: ft_strjoin (get_next_line_utils.c:58)
==110598==    by 0x40746B: get_next_line (get_next_line.c:82)
==110598==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110598==    by 0x405941: main (mandatory.cpp:57)
==110598== 
==110601== Invalid read of size 1
==110601==    at 0x407895: f_del_front_bn (get_next_line_utils.c:142)
==110601==    by 0x4073E7: get_next_line (get_next_line.c:63)
==110601==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110601==    by 0x405B89: main (mandatory.cpp:68)
==110601==  Address 0x4de758c is 0 bytes after a block of size 44 alloc'd
==110601==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110601==    by 0x4075AF: ft_strjoin (get_next_line_utils.c:58)
==110601==    by 0x40746B: get_next_line (get_next_line.c:82)
==110601==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110601==    by 0x405B89: main (mandatory.cpp:68)
==110601== 
==110601== Invalid write of size 1
==110601==    at 0x4078A9: f_del_front_bn (get_next_line_utils.c:148)
==110601==    by 0x4073E7: get_next_line (get_next_line.c:63)
==110601==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110601==    by 0x405B89: main (mandatory.cpp:68)
==110601==  Address 0x4de76b0 is 0 bytes after a block of size 0 alloc'd
==110601==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110601==    by 0x40783E: f_del_front_bn (get_next_line_utils.c:135)
==110601==    by 0x4073E7: get_next_line (get_next_line.c:63)
==110601==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110601==    by 0x405B89: main (mandatory.cpp:68)
==110601== 
==110601== Invalid read of size 1
==110601==    at 0x407509: ft_strchr (get_next_line_utils.c:25)
==110601==    by 0x40731D: get_next_line (get_next_line.c:33)
==110601==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110601==    by 0x405B95: main (mandatory.cpp:68)
==110601==  Address 0x4de76b0 is 0 bytes after a block of size 0 alloc'd
==110601==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110601==    by 0x40783E: f_del_front_bn (get_next_line_utils.c:135)
==110601==    by 0x4073E7: get_next_line (get_next_line.c:63)
==110601==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110601==    by 0x405B89: main (mandatory.cpp:68)
==110601== 
==110601== Invalid read of size 1
==110601==    at 0x4073AB: get_next_line (get_next_line.c:58)
==110601==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110601==    by 0x405B95: main (mandatory.cpp:68)
==110601==  Address 0x4de76b0 is 0 bytes after a block of size 0 alloc'd
==110601==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110601==    by 0x40783E: f_del_front_bn (get_next_line_utils.c:135)
==110601==    by 0x4073E7: get_next_line (get_next_line.c:63)
==110601==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110601==    by 0x405B89: main (mandatory.cpp:68)
==110601== 
==110601== 2 bytes in 1 blocks are definitely lost in loss record 2 of 4
==110601==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110601==    by 0x4072EC: get_next_line (get_next_line.c:27)
==110601==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110601==    by 0x405B89: main (mandatory.cpp:68)
==110601== 
==110601== 2 bytes in 1 blocks are definitely lost in loss record 3 of 4
==110601==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110601==    by 0x4072EC: get_next_line (get_next_line.c:27)
==110601==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110601==    by 0x405B95: main (mandatory.cpp:68)
==110601== 
==110601== 45 bytes in 1 blocks are definitely lost in loss record 4 of 4
==110601==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110601==    by 0x40770C: f_search_bn (get_next_line_utils.c:97)
==110601==    by 0x4073C0: get_next_line (get_next_line.c:60)
==110601==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110601==    by 0x405B89: main (mandatory.cpp:68)
==110601== 
==110612== Invalid read of size 1
==110612==    at 0x407895: f_del_front_bn (get_next_line_utils.c:142)
==110612==    by 0x4073E7: get_next_line (get_next_line.c:63)
==110612==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110612==    by 0x405DC7: main (mandatory.cpp:73)
==110612==  Address 0x4de79f2 is 0 bytes after a block of size 2 alloc'd
==110612==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110612==    by 0x4075AF: ft_strjoin (get_next_line_utils.c:58)
==110612==    by 0x40746B: get_next_line (get_next_line.c:82)
==110612==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110612==    by 0x405DC7: main (mandatory.cpp:73)
==110612== 
==110612== Invalid write of size 1
==110612==    at 0x4078A9: f_del_front_bn (get_next_line_utils.c:148)
==110612==    by 0x4073E7: get_next_line (get_next_line.c:63)
==110612==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110612==    by 0x405DC7: main (mandatory.cpp:73)
==110612==  Address 0x4de7ae0 is 0 bytes after a block of size 0 alloc'd
==110612==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110612==    by 0x40783E: f_del_front_bn (get_next_line_utils.c:135)
==110612==    by 0x4073E7: get_next_line (get_next_line.c:63)
==110612==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110612==    by 0x405DC7: main (mandatory.cpp:73)
==110612== 
==110612== Invalid read of size 1
==110612==    at 0x407509: ft_strchr (get_next_line_utils.c:25)
==110612==    by 0x40731D: get_next_line (get_next_line.c:33)
==110612==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110612==    by 0x405DD3: main (mandatory.cpp:73)
==110612==  Address 0x4de7ae0 is 0 bytes after a block of size 0 alloc'd
==110612==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110612==    by 0x40783E: f_del_front_bn (get_next_line_utils.c:135)
==110612==    by 0x4073E7: get_next_line (get_next_line.c:63)
==110612==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110612==    by 0x405DC7: main (mandatory.cpp:73)
==110612== 
==110612== Invalid read of size 1
==110612==    at 0x4073AB: get_next_line (get_next_line.c:58)
==110612==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110612==    by 0x405DD3: main (mandatory.cpp:73)
==110612==  Address 0x4de7ae0 is 0 bytes after a block of size 0 alloc'd
==110612==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110612==    by 0x40783E: f_del_front_bn (get_next_line_utils.c:135)
==110612==    by 0x4073E7: get_next_line (get_next_line.c:63)
==110612==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110612==    by 0x405DC7: main (mandatory.cpp:73)
==110612== 
==110612== 2 bytes in 1 blocks are definitely lost in loss record 2 of 5
==110612==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110612==    by 0x4072EC: get_next_line (get_next_line.c:27)
==110612==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110612==    by 0x405DC7: main (mandatory.cpp:73)
==110612== 
==110612== 2 bytes in 1 blocks are definitely lost in loss record 3 of 5
==110612==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110612==    by 0x4072EC: get_next_line (get_next_line.c:27)
==110612==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110612==    by 0x405DD3: main (mandatory.cpp:73)
==110612== 
==110612== 3 bytes in 1 blocks are definitely lost in loss record 4 of 5
==110612==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110612==    by 0x40770C: f_search_bn (get_next_line_utils.c:97)
==110612==    by 0x4073C0: get_next_line (get_next_line.c:60)
==110612==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110612==    by 0x405DC7: main (mandatory.cpp:73)
==110612== 
==110612== 44 bytes in 1 blocks are definitely lost in loss record 5 of 5
==110612==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110612==    by 0x4075AF: ft_strjoin (get_next_line_utils.c:58)
==110612==    by 0x40746B: get_next_line (get_next_line.c:82)
==110612==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110612==    by 0x405DB5: main (mandatory.cpp:73)
==110612== 
==110613== 2 bytes in 1 blocks are definitely lost in loss record 2 of 7
==110613==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110613==    by 0x4075AF: ft_strjoin (get_next_line_utils.c:58)
==110613==    by 0x40746B: get_next_line (get_next_line.c:82)
==110613==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110613==    by 0x405FF3: main (mandatory.cpp:79)
==110613== 
==110613== 2 bytes in 1 blocks are definitely lost in loss record 3 of 7
==110613==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110613==    by 0x4075AF: ft_strjoin (get_next_line_utils.c:58)
==110613==    by 0x40746B: get_next_line (get_next_line.c:82)
==110613==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110613==    by 0x406005: main (mandatory.cpp:79)
==110613== 
==110613== 2 bytes in 1 blocks are definitely lost in loss record 4 of 7
==110613==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110613==    by 0x4075AF: ft_strjoin (get_next_line_utils.c:58)
==110613==    by 0x40746B: get_next_line (get_next_line.c:82)
==110613==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110613==    by 0x406017: main (mandatory.cpp:79)
==110613== 
==110613== 2 bytes in 1 blocks are definitely lost in loss record 5 of 7
==110613==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110613==    by 0x4075AF: ft_strjoin (get_next_line_utils.c:58)
==110613==    by 0x40746B: get_next_line (get_next_line.c:82)
==110613==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110613==    by 0x406029: main (mandatory.cpp:79)
==110613== 
==110613== 2 bytes in 1 blocks are definitely lost in loss record 6 of 7
==110613==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110613==    by 0x4075AF: ft_strjoin (get_next_line_utils.c:58)
==110613==    by 0x40746B: get_next_line (get_next_line.c:82)
==110613==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110613==    by 0x40603B: main (mandatory.cpp:79)
==110613== 
==110613== 2 bytes in 1 blocks are definitely lost in loss record 7 of 7
==110613==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110613==    by 0x4072EC: get_next_line (get_next_line.c:27)
==110613==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110613==    by 0x406047: main (mandatory.cpp:79)
==110613== 
==110617== Invalid read of size 1
==110617==    at 0x407895: f_del_front_bn (get_next_line_utils.c:142)
==110617==    by 0x4073E7: get_next_line (get_next_line.c:63)
==110617==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110617==    by 0x4062AF: main (mandatory.cpp:88)
==110617==  Address 0x4dec1fa is 0 bytes after a block of size 42 alloc'd
==110617==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110617==    by 0x4075AF: ft_strjoin (get_next_line_utils.c:58)
==110617==    by 0x40746B: get_next_line (get_next_line.c:82)
==110617==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110617==    by 0x4062AF: main (mandatory.cpp:88)
==110617== 
==110617== Invalid write of size 1
==110617==    at 0x4078A9: f_del_front_bn (get_next_line_utils.c:148)
==110617==    by 0x4073E7: get_next_line (get_next_line.c:63)
==110617==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110617==    by 0x4062AF: main (mandatory.cpp:88)
==110617==  Address 0x4dec320 is 0 bytes after a block of size 0 alloc'd
==110617==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110617==    by 0x40783E: f_del_front_bn (get_next_line_utils.c:135)
==110617==    by 0x4073E7: get_next_line (get_next_line.c:63)
==110617==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110617==    by 0x4062AF: main (mandatory.cpp:88)
==110617== 
==110617== Invalid read of size 1
==110617==    at 0x407509: ft_strchr (get_next_line_utils.c:25)
==110617==    by 0x40731D: get_next_line (get_next_line.c:33)
==110617==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110617==    by 0x4062BB: main (mandatory.cpp:88)
==110617==  Address 0x4dec320 is 0 bytes after a block of size 0 alloc'd
==110617==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110617==    by 0x40783E: f_del_front_bn (get_next_line_utils.c:135)
==110617==    by 0x4073E7: get_next_line (get_next_line.c:63)
==110617==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110617==    by 0x4062AF: main (mandatory.cpp:88)
==110617== 
==110617== Invalid read of size 1
==110617==    at 0x4073AB: get_next_line (get_next_line.c:58)
==110617==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110617==    by 0x4062BB: main (mandatory.cpp:88)
==110617==  Address 0x4dec320 is 0 bytes after a block of size 0 alloc'd
==110617==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110617==    by 0x40783E: f_del_front_bn (get_next_line_utils.c:135)
==110617==    by 0x4073E7: get_next_line (get_next_line.c:63)
==110617==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110617==    by 0x4062AF: main (mandatory.cpp:88)
==110617== 
==110617== 2 bytes in 1 blocks are definitely lost in loss record 2 of 8
==110617==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110617==    by 0x4072EC: get_next_line (get_next_line.c:27)
==110617==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110617==    by 0x4062AF: main (mandatory.cpp:88)
==110617== 
==110617== 2 bytes in 1 blocks are definitely lost in loss record 3 of 8
==110617==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110617==    by 0x4072EC: get_next_line (get_next_line.c:27)
==110617==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110617==    by 0x4062BB: main (mandatory.cpp:88)
==110617== 
==110617== 43 bytes in 1 blocks are definitely lost in loss record 4 of 8
==110617==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110617==    by 0x4075AF: ft_strjoin (get_next_line_utils.c:58)
==110617==    by 0x40746B: get_next_line (get_next_line.c:82)
==110617==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110617==    by 0x406267: main (mandatory.cpp:88)
==110617== 
==110617== 43 bytes in 1 blocks are definitely lost in loss record 5 of 8
==110617==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110617==    by 0x40770C: f_search_bn (get_next_line_utils.c:97)
==110617==    by 0x4073C0: get_next_line (get_next_line.c:60)
==110617==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110617==    by 0x4062AF: main (mandatory.cpp:88)
==110617== 
==110617== 44 bytes in 1 blocks are definitely lost in loss record 6 of 8
==110617==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110617==    by 0x4075AF: ft_strjoin (get_next_line_utils.c:58)
==110617==    by 0x40746B: get_next_line (get_next_line.c:82)
==110617==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110617==    by 0x406279: main (mandatory.cpp:88)
==110617== 
==110617== 44 bytes in 1 blocks are definitely lost in loss record 7 of 8
==110617==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110617==    by 0x4075AF: ft_strjoin (get_next_line_utils.c:58)
==110617==    by 0x40746B: get_next_line (get_next_line.c:82)
==110617==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110617==    by 0x40629D: main (mandatory.cpp:88)
==110617== 
==110617== 45 bytes in 1 blocks are definitely lost in loss record 8 of 8
==110617==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110617==    by 0x4075AF: ft_strjoin (get_next_line_utils.c:58)
==110617==    by 0x40746B: get_next_line (get_next_line.c:82)
==110617==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110617==    by 0x40628B: main (mandatory.cpp:88)
==110617== 
==110621== 2 bytes in 1 blocks are definitely lost in loss record 2 of 7
==110621==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110621==    by 0x4072EC: get_next_line (get_next_line.c:27)
==110621==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110621==    by 0x40652F: main (mandatory.cpp:97)
==110621== 
==110621== 42 bytes in 1 blocks are definitely lost in loss record 3 of 7
==110621==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110621==    by 0x4075AF: ft_strjoin (get_next_line_utils.c:58)
==110621==    by 0x40746B: get_next_line (get_next_line.c:82)
==110621==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110621==    by 0x4064DB: main (mandatory.cpp:97)
==110621== 
==110621== 42 bytes in 1 blocks are definitely lost in loss record 4 of 7
==110621==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110621==    by 0x4075AF: ft_strjoin (get_next_line_utils.c:58)
==110621==    by 0x40746B: get_next_line (get_next_line.c:82)
==110621==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110621==    by 0x406523: main (mandatory.cpp:97)
==110621== 
==110621== 43 bytes in 1 blocks are definitely lost in loss record 5 of 7
==110621==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110621==    by 0x4075AF: ft_strjoin (get_next_line_utils.c:58)
==110621==    by 0x40746B: get_next_line (get_next_line.c:82)
==110621==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110621==    by 0x4064ED: main (mandatory.cpp:97)
==110621== 
==110621== 43 bytes in 1 blocks are definitely lost in loss record 6 of 7
==110621==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110621==    by 0x4075AF: ft_strjoin (get_next_line_utils.c:58)
==110621==    by 0x40746B: get_next_line (get_next_line.c:82)
==110621==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110621==    by 0x406511: main (mandatory.cpp:97)
==110621== 
==110621== 44 bytes in 1 blocks are definitely lost in loss record 7 of 7
==110621==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110621==    by 0x4075AF: ft_strjoin (get_next_line_utils.c:58)
==110621==    by 0x40746B: get_next_line (get_next_line.c:82)
==110621==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110621==    by 0x4064FF: main (mandatory.cpp:97)
==110621== 
==110624== Invalid read of size 1
==110624==    at 0x407895: f_del_front_bn (get_next_line_utils.c:142)
==110624==    by 0x4073E7: get_next_line (get_next_line.c:63)
==110624==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110624==    by 0x4067DF: main (mandatory.cpp:106)
==110624==  Address 0x4decd5a is 0 bytes after a block of size 42 alloc'd
==110624==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110624==    by 0x4075AF: ft_strjoin (get_next_line_utils.c:58)
==110624==    by 0x40746B: get_next_line (get_next_line.c:82)
==110624==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110624==    by 0x4067DF: main (mandatory.cpp:106)
==110624== 
==110624== Invalid write of size 1
==110624==    at 0x4078A9: f_del_front_bn (get_next_line_utils.c:148)
==110624==    by 0x4073E7: get_next_line (get_next_line.c:63)
==110624==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110624==    by 0x4067DF: main (mandatory.cpp:106)
==110624==  Address 0x4dece80 is 0 bytes after a block of size 0 alloc'd
==110624==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110624==    by 0x40783E: f_del_front_bn (get_next_line_utils.c:135)
==110624==    by 0x4073E7: get_next_line (get_next_line.c:63)
==110624==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110624==    by 0x4067DF: main (mandatory.cpp:106)
==110624== 
==110624== Invalid read of size 1
==110624==    at 0x407509: ft_strchr (get_next_line_utils.c:25)
==110624==    by 0x40731D: get_next_line (get_next_line.c:33)
==110624==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110624==    by 0x4067EB: main (mandatory.cpp:106)
==110624==  Address 0x4dece80 is 0 bytes after a block of size 0 alloc'd
==110624==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110624==    by 0x40783E: f_del_front_bn (get_next_line_utils.c:135)
==110624==    by 0x4073E7: get_next_line (get_next_line.c:63)
==110624==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110624==    by 0x4067DF: main (mandatory.cpp:106)
==110624== 
==110624== Invalid read of size 1
==110624==    at 0x4073AB: get_next_line (get_next_line.c:58)
==110624==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110624==    by 0x4067EB: main (mandatory.cpp:106)
==110624==  Address 0x4dece80 is 0 bytes after a block of size 0 alloc'd
==110624==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110624==    by 0x40783E: f_del_front_bn (get_next_line_utils.c:135)
==110624==    by 0x4073E7: get_next_line (get_next_line.c:63)
==110624==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110624==    by 0x4067DF: main (mandatory.cpp:106)
==110624== 
==110624== 2 bytes in 1 blocks are definitely lost in loss record 2 of 12
==110624==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110624==    by 0x4075AF: ft_strjoin (get_next_line_utils.c:58)
==110624==    by 0x40746B: get_next_line (get_next_line.c:82)
==110624==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110624==    by 0x406761: main (mandatory.cpp:106)
==110624== 
==110624== 2 bytes in 1 blocks are definitely lost in loss record 3 of 12
==110624==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110624==    by 0x4075AF: ft_strjoin (get_next_line_utils.c:58)
==110624==    by 0x40746B: get_next_line (get_next_line.c:82)
==110624==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110624==    by 0x406785: main (mandatory.cpp:106)
==110624== 
==110624== 2 bytes in 1 blocks are definitely lost in loss record 4 of 12
==110624==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110624==    by 0x4075AF: ft_strjoin (get_next_line_utils.c:58)
==110624==    by 0x40746B: get_next_line (get_next_line.c:82)
==110624==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110624==    by 0x4067A9: main (mandatory.cpp:106)
==110624== 
==110624== 2 bytes in 1 blocks are definitely lost in loss record 5 of 12
==110624==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110624==    by 0x4075AF: ft_strjoin (get_next_line_utils.c:58)
==110624==    by 0x40746B: get_next_line (get_next_line.c:82)
==110624==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110624==    by 0x4067CD: main (mandatory.cpp:106)
==110624== 
==110624== 2 bytes in 1 blocks are definitely lost in loss record 6 of 12
==110624==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110624==    by 0x4072EC: get_next_line (get_next_line.c:27)
==110624==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110624==    by 0x4067DF: main (mandatory.cpp:106)
==110624== 
==110624== 2 bytes in 1 blocks are definitely lost in loss record 7 of 12
==110624==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110624==    by 0x4072EC: get_next_line (get_next_line.c:27)
==110624==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110624==    by 0x4067EB: main (mandatory.cpp:106)
==110624== 
==110624== 43 bytes in 1 blocks are definitely lost in loss record 8 of 12
==110624==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110624==    by 0x4075AF: ft_strjoin (get_next_line_utils.c:58)
==110624==    by 0x40746B: get_next_line (get_next_line.c:82)
==110624==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110624==    by 0x40674F: main (mandatory.cpp:106)
==110624== 
==110624== 43 bytes in 1 blocks are definitely lost in loss record 9 of 12
==110624==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110624==    by 0x40770C: f_search_bn (get_next_line_utils.c:97)
==110624==    by 0x4073C0: get_next_line (get_next_line.c:60)
==110624==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110624==    by 0x4067DF: main (mandatory.cpp:106)
==110624== 
==110624== 44 bytes in 1 blocks are definitely lost in loss record 10 of 12
==110624==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110624==    by 0x4075AF: ft_strjoin (get_next_line_utils.c:58)
==110624==    by 0x40746B: get_next_line (get_next_line.c:82)
==110624==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110624==    by 0x406773: main (mandatory.cpp:106)
==110624== 
==110624== 44 bytes in 1 blocks are definitely lost in loss record 11 of 12
==110624==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110624==    by 0x4075AF: ft_strjoin (get_next_line_utils.c:58)
==110624==    by 0x40746B: get_next_line (get_next_line.c:82)
==110624==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110624==    by 0x4067BB: main (mandatory.cpp:106)
==110624== 
==110624== 45 bytes in 1 blocks are definitely lost in loss record 12 of 12
==110624==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110624==    by 0x4075AF: ft_strjoin (get_next_line_utils.c:58)
==110624==    by 0x40746B: get_next_line (get_next_line.c:82)
==110624==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110624==    by 0x406797: main (mandatory.cpp:106)
==110624== 
==110626== 2 bytes in 1 blocks are definitely lost in loss record 2 of 11
==110626==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110626==    by 0x4075AF: ft_strjoin (get_next_line_utils.c:58)
==110626==    by 0x40746B: get_next_line (get_next_line.c:82)
==110626==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110626==    by 0x406A1D: main (mandatory.cpp:119)
==110626== 
==110626== 2 bytes in 1 blocks are definitely lost in loss record 3 of 11
==110626==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110626==    by 0x4075AF: ft_strjoin (get_next_line_utils.c:58)
==110626==    by 0x40746B: get_next_line (get_next_line.c:82)
==110626==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110626==    by 0x406A41: main (mandatory.cpp:119)
==110626== 
==110626== 2 bytes in 1 blocks are definitely lost in loss record 4 of 11
==110626==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110626==    by 0x4075AF: ft_strjoin (get_next_line_utils.c:58)
==110626==    by 0x40746B: get_next_line (get_next_line.c:82)
==110626==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110626==    by 0x406A65: main (mandatory.cpp:119)
==110626== 
==110626== 2 bytes in 1 blocks are definitely lost in loss record 5 of 11
==110626==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110626==    by 0x4075AF: ft_strjoin (get_next_line_utils.c:58)
==110626==    by 0x40746B: get_next_line (get_next_line.c:82)
==110626==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110626==    by 0x406A89: main (mandatory.cpp:119)
==110626== 
==110626== 2 bytes in 1 blocks are definitely lost in loss record 6 of 11
==110626==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110626==    by 0x4072EC: get_next_line (get_next_line.c:27)
==110626==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110626==    by 0x406AA7: main (mandatory.cpp:119)
==110626== 
==110626== 43 bytes in 1 blocks are definitely lost in loss record 7 of 11
==110626==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110626==    by 0x4075AF: ft_strjoin (get_next_line_utils.c:58)
==110626==    by 0x40746B: get_next_line (get_next_line.c:82)
==110626==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110626==    by 0x406A0B: main (mandatory.cpp:119)
==110626== 
==110626== 43 bytes in 1 blocks are definitely lost in loss record 8 of 11
==110626==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110626==    by 0x4075AF: ft_strjoin (get_next_line_utils.c:58)
==110626==    by 0x40746B: get_next_line (get_next_line.c:82)
==110626==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110626==    by 0x406A9B: main (mandatory.cpp:119)
==110626== 
==110626== 44 bytes in 1 blocks are definitely lost in loss record 9 of 11
==110626==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110626==    by 0x4075AF: ft_strjoin (get_next_line_utils.c:58)
==110626==    by 0x40746B: get_next_line (get_next_line.c:82)
==110626==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110626==    by 0x406A2F: main (mandatory.cpp:119)
==110626== 
==110626== 44 bytes in 1 blocks are definitely lost in loss record 10 of 11
==110626==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110626==    by 0x4075AF: ft_strjoin (get_next_line_utils.c:58)
==110626==    by 0x40746B: get_next_line (get_next_line.c:82)
==110626==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110626==    by 0x406A77: main (mandatory.cpp:119)
==110626== 
==110626== 45 bytes in 1 blocks are definitely lost in loss record 11 of 11
==110626==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110626==    by 0x4075AF: ft_strjoin (get_next_line_utils.c:58)
==110626==    by 0x40746B: get_next_line (get_next_line.c:82)
==110626==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110626==    by 0x406A53: main (mandatory.cpp:119)
==110626== 
==110636== Invalid read of size 1
==110636==    at 0x484FBD4: strcmp (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110636==    by 0x402CFA: gnl(int, char const*) (gnl.cpp:24)
==110636==    by 0x40711E: main (mandatory.cpp:141)
==110636==  Address 0x0 is not stack'd, malloc'd or (recently) free'd
==110636== 
==110668== Invalid write of size 1
==110668==    at 0x4073B9: get_next_line (get_next_line.c:47)
==110668==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110668==    by 0x404BB6: main (mandatory.cpp:25)
==110668==  Address 0x4de429f is 1 bytes before a block of size 43 alloc'd
==110668==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110668==    by 0x40731E: get_next_line (get_next_line.c:27)
==110668==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110668==    by 0x404BB6: main (mandatory.cpp:25)
==110668== 
==110668== Invalid write of size 1
==110668==    at 0x4073B9: get_next_line (get_next_line.c:47)
==110668==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110668==    by 0x404BD8: main (mandatory.cpp:25)
==110668==  Address 0x4de430f is 1 bytes before a block of size 43 alloc'd
==110668==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110668==    by 0x40731E: get_next_line (get_next_line.c:27)
==110668==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110668==    by 0x404BD8: main (mandatory.cpp:25)
==110668== 
==110668== 43 bytes in 1 blocks are definitely lost in loss record 1 of 2
==110668==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110668==    by 0x40731E: get_next_line (get_next_line.c:27)
==110668==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110668==    by 0x404BB6: main (mandatory.cpp:25)
==110668== 
==110668== 43 bytes in 1 blocks are definitely lost in loss record 2 of 2
==110668==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110668==    by 0x40731E: get_next_line (get_next_line.c:27)
==110668==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110668==    by 0x404BD8: main (mandatory.cpp:25)
==110668== 
==110669== Invalid read of size 1
==110669==    at 0x4073DD: get_next_line (get_next_line.c:58)
==110669==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110669==    by 0x404E53: main (mandatory.cpp:31)
==110669==  Address 0x0 is not stack'd, malloc'd or (recently) free'd
==110669== 
==110673== 2 bytes in 1 blocks are definitely lost in loss record 2 of 3
==110673==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110673==    by 0x4075E1: ft_strjoin (get_next_line_utils.c:58)
==110673==    by 0x40749D: get_next_line (get_next_line.c:82)
==110673==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110673==    by 0x40507F: main (mandatory.cpp:36)
==110673== 
==110673== 43 bytes in 1 blocks are definitely lost in loss record 3 of 3
==110673==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110673==    by 0x40731E: get_next_line (get_next_line.c:27)
==110673==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110673==    by 0x40508B: main (mandatory.cpp:36)
==110673== 
==110674== Invalid read of size 1
==110674==    at 0x4078C7: f_del_front_bn (get_next_line_utils.c:142)
==110674==    by 0x407419: get_next_line (get_next_line.c:63)
==110674==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110674==    by 0x4052AB: main (mandatory.cpp:41)
==110674==  Address 0x4de59ea is 0 bytes after a block of size 42 alloc'd
==110674==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110674==    by 0x4075E1: ft_strjoin (get_next_line_utils.c:58)
==110674==    by 0x40749D: get_next_line (get_next_line.c:82)
==110674==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110674==    by 0x4052AB: main (mandatory.cpp:41)
==110674== 
==110674== Invalid write of size 1
==110674==    at 0x4078DB: f_del_front_bn (get_next_line_utils.c:148)
==110674==    by 0x407419: get_next_line (get_next_line.c:63)
==110674==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110674==    by 0x4052AB: main (mandatory.cpp:41)
==110674==  Address 0x4de5b10 is 0 bytes after a block of size 0 alloc'd
==110674==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110674==    by 0x407870: f_del_front_bn (get_next_line_utils.c:135)
==110674==    by 0x407419: get_next_line (get_next_line.c:63)
==110674==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110674==    by 0x4052AB: main (mandatory.cpp:41)
==110674== 
==110674== Invalid read of size 1
==110674==    at 0x40753B: ft_strchr (get_next_line_utils.c:25)
==110674==    by 0x40734F: get_next_line (get_next_line.c:33)
==110674==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110674==    by 0x4052B7: main (mandatory.cpp:41)
==110674==  Address 0x4de5b10 is 0 bytes after a block of size 0 alloc'd
==110674==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110674==    by 0x407870: f_del_front_bn (get_next_line_utils.c:135)
==110674==    by 0x407419: get_next_line (get_next_line.c:63)
==110674==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110674==    by 0x4052AB: main (mandatory.cpp:41)
==110674== 
==110674== Invalid read of size 1
==110674==    at 0x4073DD: get_next_line (get_next_line.c:58)
==110674==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110674==    by 0x4052B7: main (mandatory.cpp:41)
==110674==  Address 0x4de5b10 is 0 bytes after a block of size 0 alloc'd
==110674==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110674==    by 0x407870: f_del_front_bn (get_next_line_utils.c:135)
==110674==    by 0x407419: get_next_line (get_next_line.c:63)
==110674==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110674==    by 0x4052AB: main (mandatory.cpp:41)
==110674== 
==110674== 43 bytes in 1 blocks are definitely lost in loss record 2 of 4
==110674==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110674==    by 0x40731E: get_next_line (get_next_line.c:27)
==110674==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110674==    by 0x4052AB: main (mandatory.cpp:41)
==110674== 
==110674== 43 bytes in 1 blocks are definitely lost in loss record 3 of 4
==110674==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110674==    by 0x40773E: f_search_bn (get_next_line_utils.c:97)
==110674==    by 0x4073F2: get_next_line (get_next_line.c:60)
==110674==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110674==    by 0x4052AB: main (mandatory.cpp:41)
==110674== 
==110674== 43 bytes in 1 blocks are definitely lost in loss record 4 of 4
==110674==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110674==    by 0x40731E: get_next_line (get_next_line.c:27)
==110674==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110674==    by 0x4052B7: main (mandatory.cpp:41)
==110674== 
==110679== Invalid read of size 1
==110679==    at 0x4078C7: f_del_front_bn (get_next_line_utils.c:142)
==110679==    by 0x407419: get_next_line (get_next_line.c:63)
==110679==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110679==    by 0x4054E9: main (mandatory.cpp:46)
==110679==  Address 0x4de5db2 is 0 bytes after a block of size 2 alloc'd
==110679==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110679==    by 0x407870: f_del_front_bn (get_next_line_utils.c:135)
==110679==    by 0x4074DC: get_next_line (get_next_line.c:87)
==110679==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110679==    by 0x4054D7: main (mandatory.cpp:46)
==110679== 
==110679== Invalid write of size 1
==110679==    at 0x4078DB: f_del_front_bn (get_next_line_utils.c:148)
==110679==    by 0x407419: get_next_line (get_next_line.c:63)
==110679==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110679==    by 0x4054E9: main (mandatory.cpp:46)
==110679==  Address 0x4de5f10 is 0 bytes after a block of size 0 alloc'd
==110679==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110679==    by 0x407870: f_del_front_bn (get_next_line_utils.c:135)
==110679==    by 0x407419: get_next_line (get_next_line.c:63)
==110679==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110679==    by 0x4054E9: main (mandatory.cpp:46)
==110679== 
==110679== Invalid read of size 1
==110679==    at 0x40753B: ft_strchr (get_next_line_utils.c:25)
==110679==    by 0x40734F: get_next_line (get_next_line.c:33)
==110679==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110679==    by 0x4054F5: main (mandatory.cpp:46)
==110679==  Address 0x4de5f10 is 0 bytes after a block of size 0 alloc'd
==110679==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110679==    by 0x407870: f_del_front_bn (get_next_line_utils.c:135)
==110679==    by 0x407419: get_next_line (get_next_line.c:63)
==110679==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110679==    by 0x4054E9: main (mandatory.cpp:46)
==110679== 
==110679== Invalid read of size 1
==110679==    at 0x4073DD: get_next_line (get_next_line.c:58)
==110679==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110679==    by 0x4054F5: main (mandatory.cpp:46)
==110679==  Address 0x4de5f10 is 0 bytes after a block of size 0 alloc'd
==110679==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110679==    by 0x407870: f_del_front_bn (get_next_line_utils.c:135)
==110679==    by 0x407419: get_next_line (get_next_line.c:63)
==110679==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110679==    by 0x4054E9: main (mandatory.cpp:46)
==110679== 
==110679== 3 bytes in 1 blocks are definitely lost in loss record 2 of 5
==110679==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110679==    by 0x40773E: f_search_bn (get_next_line_utils.c:97)
==110679==    by 0x4073F2: get_next_line (get_next_line.c:60)
==110679==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110679==    by 0x4054E9: main (mandatory.cpp:46)
==110679== 
==110679== 43 bytes in 1 blocks are definitely lost in loss record 3 of 5
==110679==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110679==    by 0x4075E1: ft_strjoin (get_next_line_utils.c:58)
==110679==    by 0x40749D: get_next_line (get_next_line.c:82)
==110679==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110679==    by 0x4054D7: main (mandatory.cpp:46)
==110679== 
==110679== 43 bytes in 1 blocks are definitely lost in loss record 4 of 5
==110679==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110679==    by 0x40731E: get_next_line (get_next_line.c:27)
==110679==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110679==    by 0x4054E9: main (mandatory.cpp:46)
==110679== 
==110679== 43 bytes in 1 blocks are definitely lost in loss record 5 of 5
==110679==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110679==    by 0x40731E: get_next_line (get_next_line.c:27)
==110679==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110679==    by 0x4054F5: main (mandatory.cpp:46)
==110679== 
==110686== Invalid read of size 1
==110686==    at 0x4078C7: f_del_front_bn (get_next_line_utils.c:142)
==110686==    by 0x407419: get_next_line (get_next_line.c:63)
==110686==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110686==    by 0x405715: main (mandatory.cpp:52)
==110686==  Address 0x4de600b is 0 bytes after a block of size 43 alloc'd
==110686==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110686==    by 0x4075E1: ft_strjoin (get_next_line_utils.c:58)
==110686==    by 0x40749D: get_next_line (get_next_line.c:82)
==110686==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110686==    by 0x405715: main (mandatory.cpp:52)
==110686== 
==110686== Invalid write of size 1
==110686==    at 0x4078DB: f_del_front_bn (get_next_line_utils.c:148)
==110686==    by 0x407419: get_next_line (get_next_line.c:63)
==110686==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110686==    by 0x405715: main (mandatory.cpp:52)
==110686==  Address 0x4de6130 is 0 bytes after a block of size 0 alloc'd
==110686==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110686==    by 0x407870: f_del_front_bn (get_next_line_utils.c:135)
==110686==    by 0x407419: get_next_line (get_next_line.c:63)
==110686==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110686==    by 0x405715: main (mandatory.cpp:52)
==110686== 
==110686== Invalid read of size 1
==110686==    at 0x40753B: ft_strchr (get_next_line_utils.c:25)
==110686==    by 0x40734F: get_next_line (get_next_line.c:33)
==110686==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110686==    by 0x405721: main (mandatory.cpp:52)
==110686==  Address 0x4de6130 is 0 bytes after a block of size 0 alloc'd
==110686==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110686==    by 0x407870: f_del_front_bn (get_next_line_utils.c:135)
==110686==    by 0x407419: get_next_line (get_next_line.c:63)
==110686==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110686==    by 0x405715: main (mandatory.cpp:52)
==110686== 
==110686== Invalid read of size 1
==110686==    at 0x4073DD: get_next_line (get_next_line.c:58)
==110686==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110686==    by 0x405721: main (mandatory.cpp:52)
==110686==  Address 0x4de6130 is 0 bytes after a block of size 0 alloc'd
==110686==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110686==    by 0x407870: f_del_front_bn (get_next_line_utils.c:135)
==110686==    by 0x407419: get_next_line (get_next_line.c:63)
==110686==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110686==    by 0x405715: main (mandatory.cpp:52)
==110686== 
==110686== 43 bytes in 1 blocks are definitely lost in loss record 2 of 4
==110686==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110686==    by 0x40731E: get_next_line (get_next_line.c:27)
==110686==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110686==    by 0x405715: main (mandatory.cpp:52)
==110686== 
==110686== 43 bytes in 1 blocks are definitely lost in loss record 3 of 4
==110686==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110686==    by 0x40731E: get_next_line (get_next_line.c:27)
==110686==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110686==    by 0x405721: main (mandatory.cpp:52)
==110686== 
==110686== 44 bytes in 1 blocks are definitely lost in loss record 4 of 4
==110686==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110686==    by 0x40773E: f_search_bn (get_next_line_utils.c:97)
==110686==    by 0x4073F2: get_next_line (get_next_line.c:60)
==110686==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110686==    by 0x405715: main (mandatory.cpp:52)
==110686== 
==110687== 43 bytes in 1 blocks are definitely lost in loss record 2 of 3
==110687==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110687==    by 0x4075E1: ft_strjoin (get_next_line_utils.c:58)
==110687==    by 0x40749D: get_next_line (get_next_line.c:82)
==110687==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110687==    by 0x405941: main (mandatory.cpp:57)
==110687== 
==110687== 43 bytes in 1 blocks are definitely lost in loss record 3 of 3
==110687==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110687==    by 0x40731E: get_next_line (get_next_line.c:27)
==110687==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110687==    by 0x405991: main (mandatory.cpp:57)
==110687== 
==110691== Invalid read of size 1
==110691==    at 0x4078C7: f_del_front_bn (get_next_line_utils.c:142)
==110691==    by 0x407419: get_next_line (get_next_line.c:63)
==110691==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110691==    by 0x405BBB: main (mandatory.cpp:68)
==110691==  Address 0x4de669c is 0 bytes after a block of size 44 alloc'd
==110691==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110691==    by 0x4075E1: ft_strjoin (get_next_line_utils.c:58)
==110691==    by 0x40749D: get_next_line (get_next_line.c:82)
==110691==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110691==    by 0x405BBB: main (mandatory.cpp:68)
==110691== 
==110691== Invalid write of size 1
==110691==    at 0x4078DB: f_del_front_bn (get_next_line_utils.c:148)
==110691==    by 0x407419: get_next_line (get_next_line.c:63)
==110691==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110691==    by 0x405BBB: main (mandatory.cpp:68)
==110691==  Address 0x4de67c0 is 0 bytes after a block of size 0 alloc'd
==110691==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110691==    by 0x407870: f_del_front_bn (get_next_line_utils.c:135)
==110691==    by 0x407419: get_next_line (get_next_line.c:63)
==110691==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110691==    by 0x405BBB: main (mandatory.cpp:68)
==110691== 
==110691== Invalid read of size 1
==110691==    at 0x40753B: ft_strchr (get_next_line_utils.c:25)
==110691==    by 0x40734F: get_next_line (get_next_line.c:33)
==110691==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110691==    by 0x405BC7: main (mandatory.cpp:68)
==110691==  Address 0x4de67c0 is 0 bytes after a block of size 0 alloc'd
==110691==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110691==    by 0x407870: f_del_front_bn (get_next_line_utils.c:135)
==110691==    by 0x407419: get_next_line (get_next_line.c:63)
==110691==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110691==    by 0x405BBB: main (mandatory.cpp:68)
==110691== 
==110691== Invalid read of size 1
==110691==    at 0x4073DD: get_next_line (get_next_line.c:58)
==110691==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110691==    by 0x405BC7: main (mandatory.cpp:68)
==110691==  Address 0x4de67c0 is 0 bytes after a block of size 0 alloc'd
==110691==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110691==    by 0x407870: f_del_front_bn (get_next_line_utils.c:135)
==110691==    by 0x407419: get_next_line (get_next_line.c:63)
==110691==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110691==    by 0x405BBB: main (mandatory.cpp:68)
==110691== 
==110691== 43 bytes in 1 blocks are definitely lost in loss record 2 of 4
==110691==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110691==    by 0x40731E: get_next_line (get_next_line.c:27)
==110691==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110691==    by 0x405BBB: main (mandatory.cpp:68)
==110691== 
==110691== 43 bytes in 1 blocks are definitely lost in loss record 3 of 4
==110691==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110691==    by 0x40731E: get_next_line (get_next_line.c:27)
==110691==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110691==    by 0x405BC7: main (mandatory.cpp:68)
==110691== 
==110691== 45 bytes in 1 blocks are definitely lost in loss record 4 of 4
==110691==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110691==    by 0x40773E: f_search_bn (get_next_line_utils.c:97)
==110691==    by 0x4073F2: get_next_line (get_next_line.c:60)
==110691==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110691==    by 0x405BBB: main (mandatory.cpp:68)
==110691== 
==110692== Invalid read of size 1
==110692==    at 0x4078C7: f_del_front_bn (get_next_line_utils.c:142)
==110692==    by 0x407419: get_next_line (get_next_line.c:63)
==110692==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110692==    by 0x405DF9: main (mandatory.cpp:73)
==110692==  Address 0x4de6a62 is 0 bytes after a block of size 2 alloc'd
==110692==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110692==    by 0x407870: f_del_front_bn (get_next_line_utils.c:135)
==110692==    by 0x4074DC: get_next_line (get_next_line.c:87)
==110692==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110692==    by 0x405DE7: main (mandatory.cpp:73)
==110692== 
==110692== Invalid write of size 1
==110692==    at 0x4078DB: f_del_front_bn (get_next_line_utils.c:148)
==110692==    by 0x407419: get_next_line (get_next_line.c:63)
==110692==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110692==    by 0x405DF9: main (mandatory.cpp:73)
==110692==  Address 0x4de6bc0 is 0 bytes after a block of size 0 alloc'd
==110692==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110692==    by 0x407870: f_del_front_bn (get_next_line_utils.c:135)
==110692==    by 0x407419: get_next_line (get_next_line.c:63)
==110692==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110692==    by 0x405DF9: main (mandatory.cpp:73)
==110692== 
==110692== Invalid read of size 1
==110692==    at 0x40753B: ft_strchr (get_next_line_utils.c:25)
==110692==    by 0x40734F: get_next_line (get_next_line.c:33)
==110692==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110692==    by 0x405E05: main (mandatory.cpp:73)
==110692==  Address 0x4de6bc0 is 0 bytes after a block of size 0 alloc'd
==110692==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110692==    by 0x407870: f_del_front_bn (get_next_line_utils.c:135)
==110692==    by 0x407419: get_next_line (get_next_line.c:63)
==110692==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110692==    by 0x405DF9: main (mandatory.cpp:73)
==110692== 
==110692== Invalid read of size 1
==110692==    at 0x4073DD: get_next_line (get_next_line.c:58)
==110692==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110692==    by 0x405E05: main (mandatory.cpp:73)
==110692==  Address 0x4de6bc0 is 0 bytes after a block of size 0 alloc'd
==110692==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110692==    by 0x407870: f_del_front_bn (get_next_line_utils.c:135)
==110692==    by 0x407419: get_next_line (get_next_line.c:63)
==110692==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110692==    by 0x405DF9: main (mandatory.cpp:73)
==110692== 
==110692== 3 bytes in 1 blocks are definitely lost in loss record 2 of 5
==110692==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110692==    by 0x40773E: f_search_bn (get_next_line_utils.c:97)
==110692==    by 0x4073F2: get_next_line (get_next_line.c:60)
==110692==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110692==    by 0x405DF9: main (mandatory.cpp:73)
==110692== 
==110692== 43 bytes in 1 blocks are definitely lost in loss record 3 of 5
==110692==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110692==    by 0x40731E: get_next_line (get_next_line.c:27)
==110692==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110692==    by 0x405DF9: main (mandatory.cpp:73)
==110692== 
==110692== 43 bytes in 1 blocks are definitely lost in loss record 4 of 5
==110692==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110692==    by 0x40731E: get_next_line (get_next_line.c:27)
==110692==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110692==    by 0x405E05: main (mandatory.cpp:73)
==110692== 
==110692== 45 bytes in 1 blocks are definitely lost in loss record 5 of 5
==110692==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110692==    by 0x4075E1: ft_strjoin (get_next_line_utils.c:58)
==110692==    by 0x40749D: get_next_line (get_next_line.c:82)
==110692==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110692==    by 0x405DE7: main (mandatory.cpp:73)
==110692== 
==110697== 6 bytes in 1 blocks are definitely lost in loss record 2 of 7
==110697==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110697==    by 0x4075E1: ft_strjoin (get_next_line_utils.c:58)
==110697==    by 0x40749D: get_next_line (get_next_line.c:82)
==110697==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110697==    by 0x406025: main (mandatory.cpp:79)
==110697== 
==110697== 43 bytes in 1 blocks are definitely lost in loss record 3 of 7
==110697==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110697==    by 0x40731E: get_next_line (get_next_line.c:27)
==110697==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110697==    by 0x406037: main (mandatory.cpp:79)
==110697== 
==110697== 43 bytes in 1 blocks are definitely lost in loss record 4 of 7
==110697==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110697==    by 0x40731E: get_next_line (get_next_line.c:27)
==110697==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110697==    by 0x406049: main (mandatory.cpp:79)
==110697== 
==110697== 43 bytes in 1 blocks are definitely lost in loss record 5 of 7
==110697==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110697==    by 0x40731E: get_next_line (get_next_line.c:27)
==110697==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110697==    by 0x40605B: main (mandatory.cpp:79)
==110697== 
==110697== 43 bytes in 1 blocks are definitely lost in loss record 6 of 7
==110697==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110697==    by 0x40731E: get_next_line (get_next_line.c:27)
==110697==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110697==    by 0x40606D: main (mandatory.cpp:79)
==110697== 
==110697== 43 bytes in 1 blocks are definitely lost in loss record 7 of 7
==110697==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110697==    by 0x40731E: get_next_line (get_next_line.c:27)
==110697==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110697==    by 0x406079: main (mandatory.cpp:79)
==110697== 
==110700== Invalid read of size 1
==110700==    at 0x4078C7: f_del_front_bn (get_next_line_utils.c:142)
==110700==    by 0x407419: get_next_line (get_next_line.c:63)
==110700==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110700==    by 0x4062E1: main (mandatory.cpp:88)
==110700==  Address 0x4de775a is 0 bytes after a block of size 42 alloc'd
==110700==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110700==    by 0x4075E1: ft_strjoin (get_next_line_utils.c:58)
==110700==    by 0x40749D: get_next_line (get_next_line.c:82)
==110700==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110700==    by 0x4062E1: main (mandatory.cpp:88)
==110700== 
==110700== Invalid write of size 1
==110700==    at 0x4078DB: f_del_front_bn (get_next_line_utils.c:148)
==110700==    by 0x407419: get_next_line (get_next_line.c:63)
==110700==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110700==    by 0x4062E1: main (mandatory.cpp:88)
==110700==  Address 0x4de7880 is 0 bytes after a block of size 0 alloc'd
==110700==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110700==    by 0x407870: f_del_front_bn (get_next_line_utils.c:135)
==110700==    by 0x407419: get_next_line (get_next_line.c:63)
==110700==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110700==    by 0x4062E1: main (mandatory.cpp:88)
==110700== 
==110700== Invalid read of size 1
==110700==    at 0x40753B: ft_strchr (get_next_line_utils.c:25)
==110700==    by 0x40734F: get_next_line (get_next_line.c:33)
==110700==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110700==    by 0x4062ED: main (mandatory.cpp:88)
==110700==  Address 0x4de7880 is 0 bytes after a block of size 0 alloc'd
==110700==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110700==    by 0x407870: f_del_front_bn (get_next_line_utils.c:135)
==110700==    by 0x407419: get_next_line (get_next_line.c:63)
==110700==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110700==    by 0x4062E1: main (mandatory.cpp:88)
==110700== 
==110700== Invalid read of size 1
==110700==    at 0x4073DD: get_next_line (get_next_line.c:58)
==110700==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110700==    by 0x4062ED: main (mandatory.cpp:88)
==110700==  Address 0x4de7880 is 0 bytes after a block of size 0 alloc'd
==110700==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110700==    by 0x407870: f_del_front_bn (get_next_line_utils.c:135)
==110700==    by 0x407419: get_next_line (get_next_line.c:63)
==110700==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110700==    by 0x4062E1: main (mandatory.cpp:88)
==110700== 
==110700== 43 bytes in 1 blocks are definitely lost in loss record 2 of 8
==110700==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110700==    by 0x4075E1: ft_strjoin (get_next_line_utils.c:58)
==110700==    by 0x40749D: get_next_line (get_next_line.c:82)
==110700==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110700==    by 0x406299: main (mandatory.cpp:88)
==110700== 
==110700== 43 bytes in 1 blocks are definitely lost in loss record 3 of 8
==110700==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110700==    by 0x40731E: get_next_line (get_next_line.c:27)
==110700==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110700==    by 0x4062E1: main (mandatory.cpp:88)
==110700== 
==110700== 43 bytes in 1 blocks are definitely lost in loss record 4 of 8
==110700==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110700==    by 0x40773E: f_search_bn (get_next_line_utils.c:97)
==110700==    by 0x4073F2: get_next_line (get_next_line.c:60)
==110700==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110700==    by 0x4062E1: main (mandatory.cpp:88)
==110700== 
==110700== 43 bytes in 1 blocks are definitely lost in loss record 5 of 8
==110700==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110700==    by 0x40731E: get_next_line (get_next_line.c:27)
==110700==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110700==    by 0x4062ED: main (mandatory.cpp:88)
==110700== 
==110700== 82 bytes in 1 blocks are definitely lost in loss record 6 of 8
==110700==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110700==    by 0x4075E1: ft_strjoin (get_next_line_utils.c:58)
==110700==    by 0x40749D: get_next_line (get_next_line.c:82)
==110700==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110700==    by 0x4062CF: main (mandatory.cpp:88)
==110700== 
==110700== 84 bytes in 1 blocks are definitely lost in loss record 7 of 8
==110700==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110700==    by 0x4075E1: ft_strjoin (get_next_line_utils.c:58)
==110700==    by 0x40749D: get_next_line (get_next_line.c:82)
==110700==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110700==    by 0x4062BD: main (mandatory.cpp:88)
==110700== 
==110700== 85 bytes in 1 blocks are definitely lost in loss record 8 of 8
==110700==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110700==    by 0x4075E1: ft_strjoin (get_next_line_utils.c:58)
==110700==    by 0x40749D: get_next_line (get_next_line.c:82)
==110700==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110700==    by 0x4062AB: main (mandatory.cpp:88)
==110700== 
==110701== 42 bytes in 1 blocks are definitely lost in loss record 2 of 7
==110701==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110701==    by 0x4075E1: ft_strjoin (get_next_line_utils.c:58)
==110701==    by 0x40749D: get_next_line (get_next_line.c:82)
==110701==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110701==    by 0x406555: main (mandatory.cpp:97)
==110701== 
==110701== 43 bytes in 1 blocks are definitely lost in loss record 3 of 7
==110701==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110701==    by 0x4075E1: ft_strjoin (get_next_line_utils.c:58)
==110701==    by 0x40749D: get_next_line (get_next_line.c:82)
==110701==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110701==    by 0x40650D: main (mandatory.cpp:97)
==110701== 
==110701== 43 bytes in 1 blocks are definitely lost in loss record 4 of 7
==110701==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110701==    by 0x4075E1: ft_strjoin (get_next_line_utils.c:58)
==110701==    by 0x40749D: get_next_line (get_next_line.c:82)
==110701==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110701==    by 0x406543: main (mandatory.cpp:97)
==110701== 
==110701== 43 bytes in 1 blocks are definitely lost in loss record 5 of 7
==110701==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110701==    by 0x40731E: get_next_line (get_next_line.c:27)
==110701==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110701==    by 0x406561: main (mandatory.cpp:97)
==110701== 
==110701== 44 bytes in 1 blocks are definitely lost in loss record 6 of 7
==110701==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110701==    by 0x4075E1: ft_strjoin (get_next_line_utils.c:58)
==110701==    by 0x40749D: get_next_line (get_next_line.c:82)
==110701==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110701==    by 0x40651F: main (mandatory.cpp:97)
==110701== 
==110701== 44 bytes in 1 blocks are definitely lost in loss record 7 of 7
==110701==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110701==    by 0x4075E1: ft_strjoin (get_next_line_utils.c:58)
==110701==    by 0x40749D: get_next_line (get_next_line.c:82)
==110701==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110701==    by 0x406531: main (mandatory.cpp:97)
==110701== 
==110705== Invalid read of size 1
==110705==    at 0x4078C7: f_del_front_bn (get_next_line_utils.c:142)
==110705==    by 0x407419: get_next_line (get_next_line.c:63)
==110705==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110705==    by 0x406811: main (mandatory.cpp:106)
==110705==  Address 0x4de826a is 0 bytes after a block of size 42 alloc'd
==110705==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110705==    by 0x4075E1: ft_strjoin (get_next_line_utils.c:58)
==110705==    by 0x40749D: get_next_line (get_next_line.c:82)
==110705==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110705==    by 0x406811: main (mandatory.cpp:106)
==110705== 
==110705== Invalid write of size 1
==110705==    at 0x4078DB: f_del_front_bn (get_next_line_utils.c:148)
==110705==    by 0x407419: get_next_line (get_next_line.c:63)
==110705==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110705==    by 0x406811: main (mandatory.cpp:106)
==110705==  Address 0x4de8390 is 0 bytes after a block of size 0 alloc'd
==110705==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110705==    by 0x407870: f_del_front_bn (get_next_line_utils.c:135)
==110705==    by 0x407419: get_next_line (get_next_line.c:63)
==110705==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110705==    by 0x406811: main (mandatory.cpp:106)
==110705== 
==110705== Invalid read of size 1
==110705==    at 0x40753B: ft_strchr (get_next_line_utils.c:25)
==110705==    by 0x40734F: get_next_line (get_next_line.c:33)
==110705==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110705==    by 0x40681D: main (mandatory.cpp:106)
==110705==  Address 0x4de8390 is 0 bytes after a block of size 0 alloc'd
==110705==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110705==    by 0x407870: f_del_front_bn (get_next_line_utils.c:135)
==110705==    by 0x407419: get_next_line (get_next_line.c:63)
==110705==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110705==    by 0x406811: main (mandatory.cpp:106)
==110705== 
==110705== Invalid read of size 1
==110705==    at 0x4073DD: get_next_line (get_next_line.c:58)
==110705==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110705==    by 0x40681D: main (mandatory.cpp:106)
==110705==  Address 0x4de8390 is 0 bytes after a block of size 0 alloc'd
==110705==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110705==    by 0x407870: f_del_front_bn (get_next_line_utils.c:135)
==110705==    by 0x407419: get_next_line (get_next_line.c:63)
==110705==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110705==    by 0x406811: main (mandatory.cpp:106)
==110705== 
==110705== 43 bytes in 1 blocks are definitely lost in loss record 2 of 12
==110705==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110705==    by 0x4075E1: ft_strjoin (get_next_line_utils.c:58)
==110705==    by 0x40749D: get_next_line (get_next_line.c:82)
==110705==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110705==    by 0x406781: main (mandatory.cpp:106)
==110705== 
==110705== 43 bytes in 1 blocks are definitely lost in loss record 3 of 12
==110705==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110705==    by 0x4075E1: ft_strjoin (get_next_line_utils.c:58)
==110705==    by 0x40749D: get_next_line (get_next_line.c:82)
==110705==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110705==    by 0x406793: main (mandatory.cpp:106)
==110705== 
==110705== 43 bytes in 1 blocks are definitely lost in loss record 4 of 12
==110705==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110705==    by 0x40731E: get_next_line (get_next_line.c:27)
==110705==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110705==    by 0x4067B7: main (mandatory.cpp:106)
==110705== 
==110705== 43 bytes in 1 blocks are definitely lost in loss record 5 of 12
==110705==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110705==    by 0x40731E: get_next_line (get_next_line.c:27)
==110705==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110705==    by 0x4067DB: main (mandatory.cpp:106)
==110705== 
==110705== 43 bytes in 1 blocks are definitely lost in loss record 6 of 12
==110705==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110705==    by 0x40731E: get_next_line (get_next_line.c:27)
==110705==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110705==    by 0x4067FF: main (mandatory.cpp:106)
==110705== 
==110705== 43 bytes in 1 blocks are definitely lost in loss record 7 of 12
==110705==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110705==    by 0x40731E: get_next_line (get_next_line.c:27)
==110705==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110705==    by 0x406811: main (mandatory.cpp:106)
==110705== 
==110705== 43 bytes in 1 blocks are definitely lost in loss record 8 of 12
==110705==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110705==    by 0x40773E: f_search_bn (get_next_line_utils.c:97)
==110705==    by 0x4073F2: get_next_line (get_next_line.c:60)
==110705==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110705==    by 0x406811: main (mandatory.cpp:106)
==110705== 
==110705== 43 bytes in 1 blocks are definitely lost in loss record 9 of 12
==110705==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110705==    by 0x40731E: get_next_line (get_next_line.c:27)
==110705==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110705==    by 0x40681D: main (mandatory.cpp:106)
==110705== 
==110705== 79 bytes in 1 blocks are definitely lost in loss record 10 of 12
==110705==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110705==    by 0x4075E1: ft_strjoin (get_next_line_utils.c:58)
==110705==    by 0x40749D: get_next_line (get_next_line.c:82)
==110705==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110705==    by 0x4067ED: main (mandatory.cpp:106)
==110705== 
==110705== 82 bytes in 1 blocks are definitely lost in loss record 11 of 12
==110705==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110705==    by 0x4075E1: ft_strjoin (get_next_line_utils.c:58)
==110705==    by 0x40749D: get_next_line (get_next_line.c:82)
==110705==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110705==    by 0x4067C9: main (mandatory.cpp:106)
==110705== 
==110705== 84 bytes in 1 blocks are definitely lost in loss record 12 of 12
==110705==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110705==    by 0x4075E1: ft_strjoin (get_next_line_utils.c:58)
==110705==    by 0x40749D: get_next_line (get_next_line.c:82)
==110705==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110705==    by 0x4067A5: main (mandatory.cpp:106)
==110705== 
==110706== 43 bytes in 1 blocks are definitely lost in loss record 2 of 11
==110706==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110706==    by 0x4075E1: ft_strjoin (get_next_line_utils.c:58)
==110706==    by 0x40749D: get_next_line (get_next_line.c:82)
==110706==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110706==    by 0x406A3D: main (mandatory.cpp:119)
==110706== 
==110706== 43 bytes in 1 blocks are definitely lost in loss record 3 of 11
==110706==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110706==    by 0x4075E1: ft_strjoin (get_next_line_utils.c:58)
==110706==    by 0x40749D: get_next_line (get_next_line.c:82)
==110706==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110706==    by 0x406A4F: main (mandatory.cpp:119)
==110706== 
==110706== 43 bytes in 1 blocks are definitely lost in loss record 4 of 11
==110706==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110706==    by 0x40731E: get_next_line (get_next_line.c:27)
==110706==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110706==    by 0x406A73: main (mandatory.cpp:119)
==110706== 
==110706== 43 bytes in 1 blocks are definitely lost in loss record 5 of 11
==110706==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110706==    by 0x40731E: get_next_line (get_next_line.c:27)
==110706==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110706==    by 0x406A97: main (mandatory.cpp:119)
==110706== 
==110706== 43 bytes in 1 blocks are definitely lost in loss record 6 of 11
==110706==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110706==    by 0x40731E: get_next_line (get_next_line.c:27)
==110706==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110706==    by 0x406ABB: main (mandatory.cpp:119)
==110706== 
==110706== 43 bytes in 1 blocks are definitely lost in loss record 7 of 11
==110706==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110706==    by 0x4075E1: ft_strjoin (get_next_line_utils.c:58)
==110706==    by 0x40749D: get_next_line (get_next_line.c:82)
==110706==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110706==    by 0x406ACD: main (mandatory.cpp:119)
==110706== 
==110706== 43 bytes in 1 blocks are definitely lost in loss record 8 of 11
==110706==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110706==    by 0x40731E: get_next_line (get_next_line.c:27)
==110706==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110706==    by 0x406AD9: main (mandatory.cpp:119)
==110706== 
==110706== 79 bytes in 1 blocks are definitely lost in loss record 9 of 11
==110706==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110706==    by 0x4075E1: ft_strjoin (get_next_line_utils.c:58)
==110706==    by 0x40749D: get_next_line (get_next_line.c:82)
==110706==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110706==    by 0x406AA9: main (mandatory.cpp:119)
==110706== 
==110706== 82 bytes in 1 blocks are definitely lost in loss record 10 of 11
==110706==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110706==    by 0x4075E1: ft_strjoin (get_next_line_utils.c:58)
==110706==    by 0x40749D: get_next_line (get_next_line.c:82)
==110706==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110706==    by 0x406A85: main (mandatory.cpp:119)
==110706== 
==110706== 84 bytes in 1 blocks are definitely lost in loss record 11 of 11
==110706==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110706==    by 0x4075E1: ft_strjoin (get_next_line_utils.c:58)
==110706==    by 0x40749D: get_next_line (get_next_line.c:82)
==110706==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110706==    by 0x406A61: main (mandatory.cpp:119)
==110706== 
==110710== Invalid read of size 1
==110710==    at 0x4078C7: f_del_front_bn (get_next_line_utils.c:142)
==110710==    by 0x407419: get_next_line (get_next_line.c:63)
==110710==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110710==    by 0x406CF9: main (mandatory.cpp:132)
==110710==  Address 0x4f120f1 is 0 bytes after a block of size 10,001 alloc'd
==110710==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110710==    by 0x4075E1: ft_strjoin (get_next_line_utils.c:58)
==110710==    by 0x40749D: get_next_line (get_next_line.c:82)
==110710==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110710==    by 0x406CF9: main (mandatory.cpp:132)
==110710== 
==110710== Invalid write of size 1
==110710==    at 0x4078DB: f_del_front_bn (get_next_line_utils.c:148)
==110710==    by 0x407419: get_next_line (get_next_line.c:63)
==110710==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110710==    by 0x406CF9: main (mandatory.cpp:132)
==110710==  Address 0x4f17000 is 0 bytes after a block of size 0 alloc'd
==110710==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110710==    by 0x407870: f_del_front_bn (get_next_line_utils.c:135)
==110710==    by 0x407419: get_next_line (get_next_line.c:63)
==110710==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110710==    by 0x406CF9: main (mandatory.cpp:132)
==110710== 
==110710== Invalid read of size 1
==110710==    at 0x40753B: ft_strchr (get_next_line_utils.c:25)
==110710==    by 0x40734F: get_next_line (get_next_line.c:33)
==110710==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110710==    by 0x406D05: main (mandatory.cpp:132)
==110710==  Address 0x4f17000 is 0 bytes after a block of size 0 alloc'd
==110710==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110710==    by 0x407870: f_del_front_bn (get_next_line_utils.c:135)
==110710==    by 0x407419: get_next_line (get_next_line.c:63)
==110710==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110710==    by 0x406CF9: main (mandatory.cpp:132)
==110710== 
==110710== Invalid read of size 1
==110710==    at 0x4073DD: get_next_line (get_next_line.c:58)
==110710==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110710==    by 0x406D05: main (mandatory.cpp:132)
==110710==  Address 0x4f17000 is 0 bytes after a block of size 0 alloc'd
==110710==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110710==    by 0x407870: f_del_front_bn (get_next_line_utils.c:135)
==110710==    by 0x407419: get_next_line (get_next_line.c:63)
==110710==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110710==    by 0x406CF9: main (mandatory.cpp:132)
==110710== 
==110710== 43 bytes in 1 blocks are definitely lost in loss record 2 of 4
==110710==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110710==    by 0x40731E: get_next_line (get_next_line.c:27)
==110710==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110710==    by 0x406CF9: main (mandatory.cpp:132)
==110710== 
==110710== 43 bytes in 1 blocks are definitely lost in loss record 3 of 4
==110710==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110710==    by 0x40731E: get_next_line (get_next_line.c:27)
==110710==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110710==    by 0x406D05: main (mandatory.cpp:132)
==110710== 
==110710== 10,002 bytes in 1 blocks are definitely lost in loss record 4 of 4
==110710==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110710==    by 0x40773E: f_search_bn (get_next_line_utils.c:97)
==110710==    by 0x4073F2: get_next_line (get_next_line.c:60)
==110710==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110710==    by 0x406CF9: main (mandatory.cpp:132)
==110710== 
==110713== 43 bytes in 1 blocks are definitely lost in loss record 2 of 3
==110713==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110713==    by 0x40731E: get_next_line (get_next_line.c:27)
==110713==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110713==    by 0x406F31: main (mandatory.cpp:136)
==110713== 
==110713== 10,002 bytes in 1 blocks are definitely lost in loss record 3 of 3
==110713==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110713==    by 0x4075E1: ft_strjoin (get_next_line_utils.c:58)
==110713==    by 0x40749D: get_next_line (get_next_line.c:82)
==110713==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110713==    by 0x406F25: main (mandatory.cpp:136)
==110713== 
==110714== Invalid read of size 1
==110714==    at 0x484FBD4: strcmp (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110714==    by 0x402CFA: gnl(int, char const*) (gnl.cpp:24)
==110714==    by 0x407150: main (mandatory.cpp:141)
==110714==  Address 0x0 is not stack'd, malloc'd or (recently) free'd
==110714== 
==110743== Invalid write of size 1
==110743==    at 0x407387: get_next_line (get_next_line.c:47)
==110743==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110743==    by 0x404BB6: main (mandatory.cpp:25)
==110743==  Address 0x51d203f is 1 bytes before a block of size 10,000,001 alloc'd
==110743==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110743==    by 0x4072EC: get_next_line (get_next_line.c:27)
==110743==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110743==    by 0x404BB6: main (mandatory.cpp:25)
==110743== 
==110743== Invalid write of size 1
==110743==    at 0x407387: get_next_line (get_next_line.c:47)
==110743==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110743==    by 0x404BD8: main (mandatory.cpp:25)
==110743==  Address 0x5b5c03f is 1 bytes before a block of size 10,000,001 alloc'd
==110743==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110743==    by 0x4072EC: get_next_line (get_next_line.c:27)
==110743==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110743==    by 0x404BD8: main (mandatory.cpp:25)
==110743== 
==110743== 10,000,001 bytes in 1 blocks are possibly lost in loss record 1 of 2
==110743==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110743==    by 0x4072EC: get_next_line (get_next_line.c:27)
==110743==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110743==    by 0x404BB6: main (mandatory.cpp:25)
==110743== 
==110743== 10,000,001 bytes in 1 blocks are definitely lost in loss record 2 of 2
==110743==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110743==    by 0x4072EC: get_next_line (get_next_line.c:27)
==110743==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110743==    by 0x404BD8: main (mandatory.cpp:25)
==110743== 
==110746== Invalid read of size 1
==110746==    at 0x4073AB: get_next_line (get_next_line.c:58)
==110746==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110746==    by 0x404E53: main (mandatory.cpp:31)
==110746==  Address 0x0 is not stack'd, malloc'd or (recently) free'd
==110746== 
==110748== 2 bytes in 1 blocks are definitely lost in loss record 2 of 3
==110748==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110748==    by 0x4075AF: ft_strjoin (get_next_line_utils.c:58)
==110748==    by 0x40746B: get_next_line (get_next_line.c:82)
==110748==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110748==    by 0x40507F: main (mandatory.cpp:36)
==110748== 
==110748== 10,000,001 bytes in 1 blocks are definitely lost in loss record 3 of 3
==110748==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110748==    by 0x4072EC: get_next_line (get_next_line.c:27)
==110748==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110748==    by 0x40508B: main (mandatory.cpp:36)
==110748== 
==110756== Invalid read of size 1
==110756==    at 0x407895: f_del_front_bn (get_next_line_utils.c:142)
==110756==    by 0x4073E7: get_next_line (get_next_line.c:63)
==110756==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110756==    by 0x4052AB: main (mandatory.cpp:41)
==110756==  Address 0x4de599a is 0 bytes after a block of size 42 alloc'd
==110756==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110756==    by 0x4075AF: ft_strjoin (get_next_line_utils.c:58)
==110756==    by 0x40746B: get_next_line (get_next_line.c:82)
==110756==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110756==    by 0x4052AB: main (mandatory.cpp:41)
==110756== 
==110756== Invalid write of size 1
==110756==    at 0x4078A9: f_del_front_bn (get_next_line_utils.c:148)
==110756==    by 0x4073E7: get_next_line (get_next_line.c:63)
==110756==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110756==    by 0x4052AB: main (mandatory.cpp:41)
==110756==  Address 0x4de5ac0 is 0 bytes after a block of size 0 alloc'd
==110756==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110756==    by 0x40783E: f_del_front_bn (get_next_line_utils.c:135)
==110756==    by 0x4073E7: get_next_line (get_next_line.c:63)
==110756==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110756==    by 0x4052AB: main (mandatory.cpp:41)
==110756== 
==110756== Invalid read of size 1
==110756==    at 0x407509: ft_strchr (get_next_line_utils.c:25)
==110756==    by 0x40731D: get_next_line (get_next_line.c:33)
==110756==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110756==    by 0x4052B7: main (mandatory.cpp:41)
==110756==  Address 0x4de5ac0 is 0 bytes after a block of size 0 alloc'd
==110756==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110756==    by 0x40783E: f_del_front_bn (get_next_line_utils.c:135)
==110756==    by 0x4073E7: get_next_line (get_next_line.c:63)
==110756==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110756==    by 0x4052AB: main (mandatory.cpp:41)
==110756== 
==110756== Invalid read of size 1
==110756==    at 0x4073AB: get_next_line (get_next_line.c:58)
==110756==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110756==    by 0x4052B7: main (mandatory.cpp:41)
==110756==  Address 0x4de5ac0 is 0 bytes after a block of size 0 alloc'd
==110756==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110756==    by 0x40783E: f_del_front_bn (get_next_line_utils.c:135)
==110756==    by 0x4073E7: get_next_line (get_next_line.c:63)
==110756==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110756==    by 0x4052AB: main (mandatory.cpp:41)
==110756== 
==110756== 43 bytes in 1 blocks are definitely lost in loss record 2 of 4
==110756==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110756==    by 0x40770C: f_search_bn (get_next_line_utils.c:97)
==110756==    by 0x4073C0: get_next_line (get_next_line.c:60)
==110756==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110756==    by 0x4052AB: main (mandatory.cpp:41)
==110756== 
==110756== 10,000,001 bytes in 1 blocks are possibly lost in loss record 3 of 4
==110756==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110756==    by 0x4072EC: get_next_line (get_next_line.c:27)
==110756==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110756==    by 0x4052AB: main (mandatory.cpp:41)
==110756== 
==110756== 10,000,001 bytes in 1 blocks are definitely lost in loss record 4 of 4
==110756==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110756==    by 0x4072EC: get_next_line (get_next_line.c:27)
==110756==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110756==    by 0x4052B7: main (mandatory.cpp:41)
==110756== 
==110760== Invalid read of size 1
==110760==    at 0x407895: f_del_front_bn (get_next_line_utils.c:142)
==110760==    by 0x4073E7: get_next_line (get_next_line.c:63)
==110760==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110760==    by 0x4054E9: main (mandatory.cpp:46)
==110760==  Address 0x4de5d62 is 0 bytes after a block of size 2 alloc'd
==110760==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110760==    by 0x40783E: f_del_front_bn (get_next_line_utils.c:135)
==110760==    by 0x4074AA: get_next_line (get_next_line.c:87)
==110760==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110760==    by 0x4054D7: main (mandatory.cpp:46)
==110760== 
==110760== Invalid write of size 1
==110760==    at 0x4078A9: f_del_front_bn (get_next_line_utils.c:148)
==110760==    by 0x4073E7: get_next_line (get_next_line.c:63)
==110760==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110760==    by 0x4054E9: main (mandatory.cpp:46)
==110760==  Address 0x4de5e50 is 0 bytes after a block of size 0 alloc'd
==110760==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110760==    by 0x40783E: f_del_front_bn (get_next_line_utils.c:135)
==110760==    by 0x4073E7: get_next_line (get_next_line.c:63)
==110760==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110760==    by 0x4054E9: main (mandatory.cpp:46)
==110760== 
==110760== Invalid read of size 1
==110760==    at 0x407509: ft_strchr (get_next_line_utils.c:25)
==110760==    by 0x40731D: get_next_line (get_next_line.c:33)
==110760==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110760==    by 0x4054F5: main (mandatory.cpp:46)
==110760==  Address 0x4de5e50 is 0 bytes after a block of size 0 alloc'd
==110760==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110760==    by 0x40783E: f_del_front_bn (get_next_line_utils.c:135)
==110760==    by 0x4073E7: get_next_line (get_next_line.c:63)
==110760==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110760==    by 0x4054E9: main (mandatory.cpp:46)
==110760== 
==110760== Invalid read of size 1
==110760==    at 0x4073AB: get_next_line (get_next_line.c:58)
==110760==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110760==    by 0x4054F5: main (mandatory.cpp:46)
==110760==  Address 0x4de5e50 is 0 bytes after a block of size 0 alloc'd
==110760==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110760==    by 0x40783E: f_del_front_bn (get_next_line_utils.c:135)
==110760==    by 0x4073E7: get_next_line (get_next_line.c:63)
==110760==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110760==    by 0x4054E9: main (mandatory.cpp:46)
==110760== 
==110760== 3 bytes in 1 blocks are definitely lost in loss record 2 of 5
==110760==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110760==    by 0x40770C: f_search_bn (get_next_line_utils.c:97)
==110760==    by 0x4073C0: get_next_line (get_next_line.c:60)
==110760==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110760==    by 0x4054E9: main (mandatory.cpp:46)
==110760== 
==110760== 43 bytes in 1 blocks are definitely lost in loss record 3 of 5
==110760==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110760==    by 0x4075AF: ft_strjoin (get_next_line_utils.c:58)
==110760==    by 0x40746B: get_next_line (get_next_line.c:82)
==110760==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110760==    by 0x4054D7: main (mandatory.cpp:46)
==110760== 
==110760== 10,000,001 bytes in 1 blocks are possibly lost in loss record 4 of 5
==110760==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110760==    by 0x4072EC: get_next_line (get_next_line.c:27)
==110760==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110760==    by 0x4054F5: main (mandatory.cpp:46)
==110760== 
==110760== 10,000,001 bytes in 1 blocks are definitely lost in loss record 5 of 5
==110760==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110760==    by 0x4072EC: get_next_line (get_next_line.c:27)
==110760==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110760==    by 0x4054E9: main (mandatory.cpp:46)
==110760== 
==110761== Invalid read of size 1
==110761==    at 0x407895: f_del_front_bn (get_next_line_utils.c:142)
==110761==    by 0x4073E7: get_next_line (get_next_line.c:63)
==110761==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110761==    by 0x405715: main (mandatory.cpp:52)
==110761==  Address 0x4de5fbb is 0 bytes after a block of size 43 alloc'd
==110761==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110761==    by 0x4075AF: ft_strjoin (get_next_line_utils.c:58)
==110761==    by 0x40746B: get_next_line (get_next_line.c:82)
==110761==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110761==    by 0x405715: main (mandatory.cpp:52)
==110761== 
==110761== Invalid write of size 1
==110761==    at 0x4078A9: f_del_front_bn (get_next_line_utils.c:148)
==110761==    by 0x4073E7: get_next_line (get_next_line.c:63)
==110761==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110761==    by 0x405715: main (mandatory.cpp:52)
==110761==  Address 0x4de60e0 is 0 bytes after a block of size 0 alloc'd
==110761==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110761==    by 0x40783E: f_del_front_bn (get_next_line_utils.c:135)
==110761==    by 0x4073E7: get_next_line (get_next_line.c:63)
==110761==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110761==    by 0x405715: main (mandatory.cpp:52)
==110761== 
==110761== Invalid read of size 1
==110761==    at 0x407509: ft_strchr (get_next_line_utils.c:25)
==110761==    by 0x40731D: get_next_line (get_next_line.c:33)
==110761==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110761==    by 0x405721: main (mandatory.cpp:52)
==110761==  Address 0x4de60e0 is 0 bytes after a block of size 0 alloc'd
==110761==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110761==    by 0x40783E: f_del_front_bn (get_next_line_utils.c:135)
==110761==    by 0x4073E7: get_next_line (get_next_line.c:63)
==110761==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110761==    by 0x405715: main (mandatory.cpp:52)
==110761== 
==110761== Invalid read of size 1
==110761==    at 0x4073AB: get_next_line (get_next_line.c:58)
==110761==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110761==    by 0x405721: main (mandatory.cpp:52)
==110761==  Address 0x4de60e0 is 0 bytes after a block of size 0 alloc'd
==110761==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110761==    by 0x40783E: f_del_front_bn (get_next_line_utils.c:135)
==110761==    by 0x4073E7: get_next_line (get_next_line.c:63)
==110761==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110761==    by 0x405715: main (mandatory.cpp:52)
==110761== 
==110761== 44 bytes in 1 blocks are definitely lost in loss record 2 of 4
==110761==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110761==    by 0x40770C: f_search_bn (get_next_line_utils.c:97)
==110761==    by 0x4073C0: get_next_line (get_next_line.c:60)
==110761==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110761==    by 0x405715: main (mandatory.cpp:52)
==110761== 
==110761== 10,000,001 bytes in 1 blocks are possibly lost in loss record 3 of 4
==110761==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110761==    by 0x4072EC: get_next_line (get_next_line.c:27)
==110761==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110761==    by 0x405715: main (mandatory.cpp:52)
==110761== 
==110761== 10,000,001 bytes in 1 blocks are definitely lost in loss record 4 of 4
==110761==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110761==    by 0x4072EC: get_next_line (get_next_line.c:27)
==110761==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110761==    by 0x405721: main (mandatory.cpp:52)
==110761== 
==110765== Invalid read of size 1
==110765==    at 0x407895: f_del_front_bn (get_next_line_utils.c:142)
==110765==    by 0x4073E7: get_next_line (get_next_line.c:63)
==110765==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110765==    by 0x405953: main (mandatory.cpp:57)
==110765==  Address 0x4de6382 is 0 bytes after a block of size 2 alloc'd
==110765==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110765==    by 0x40783E: f_del_front_bn (get_next_line_utils.c:135)
==110765==    by 0x4074AA: get_next_line (get_next_line.c:87)
==110765==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110765==    by 0x405941: main (mandatory.cpp:57)
==110765== 
==110765== Invalid write of size 1
==110765==    at 0x4078A9: f_del_front_bn (get_next_line_utils.c:148)
==110765==    by 0x4073E7: get_next_line (get_next_line.c:63)
==110765==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110765==    by 0x405953: main (mandatory.cpp:57)
==110765==  Address 0x4de6470 is 0 bytes after a block of size 0 alloc'd
==110765==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110765==    by 0x40783E: f_del_front_bn (get_next_line_utils.c:135)
==110765==    by 0x4073E7: get_next_line (get_next_line.c:63)
==110765==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110765==    by 0x405953: main (mandatory.cpp:57)
==110765== 
==110765== Invalid read of size 1
==110765==    at 0x407509: ft_strchr (get_next_line_utils.c:25)
==110765==    by 0x40731D: get_next_line (get_next_line.c:33)
==110765==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110765==    by 0x40595F: main (mandatory.cpp:57)
==110765==  Address 0x4de6470 is 0 bytes after a block of size 0 alloc'd
==110765==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110765==    by 0x40783E: f_del_front_bn (get_next_line_utils.c:135)
==110765==    by 0x4073E7: get_next_line (get_next_line.c:63)
==110765==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110765==    by 0x405953: main (mandatory.cpp:57)
==110765== 
==110765== Invalid read of size 1
==110765==    at 0x4073AB: get_next_line (get_next_line.c:58)
==110765==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110765==    by 0x40595F: main (mandatory.cpp:57)
==110765==  Address 0x4de6470 is 0 bytes after a block of size 0 alloc'd
==110765==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110765==    by 0x40783E: f_del_front_bn (get_next_line_utils.c:135)
==110765==    by 0x4073E7: get_next_line (get_next_line.c:63)
==110765==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110765==    by 0x405953: main (mandatory.cpp:57)
==110765== 
==110765== 3 bytes in 1 blocks are definitely lost in loss record 2 of 5
==110765==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110765==    by 0x40770C: f_search_bn (get_next_line_utils.c:97)
==110765==    by 0x4073C0: get_next_line (get_next_line.c:60)
==110765==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110765==    by 0x405953: main (mandatory.cpp:57)
==110765== 
==110765== 44 bytes in 1 blocks are definitely lost in loss record 3 of 5
==110765==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110765==    by 0x4075AF: ft_strjoin (get_next_line_utils.c:58)
==110765==    by 0x40746B: get_next_line (get_next_line.c:82)
==110765==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110765==    by 0x405941: main (mandatory.cpp:57)
==110765== 
==110765== 10,000,001 bytes in 1 blocks are possibly lost in loss record 4 of 5
==110765==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110765==    by 0x4072EC: get_next_line (get_next_line.c:27)
==110765==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110765==    by 0x40595F: main (mandatory.cpp:57)
==110765== 
==110765== 10,000,001 bytes in 1 blocks are definitely lost in loss record 5 of 5
==110765==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110765==    by 0x4072EC: get_next_line (get_next_line.c:27)
==110765==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110765==    by 0x405953: main (mandatory.cpp:57)
==110765== 
==110766== Invalid read of size 1
==110766==    at 0x407895: f_del_front_bn (get_next_line_utils.c:142)
==110766==    by 0x4073E7: get_next_line (get_next_line.c:63)
==110766==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110766==    by 0x405B89: main (mandatory.cpp:68)
==110766==  Address 0x4de65dc is 0 bytes after a block of size 44 alloc'd
==110766==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110766==    by 0x4075AF: ft_strjoin (get_next_line_utils.c:58)
==110766==    by 0x40746B: get_next_line (get_next_line.c:82)
==110766==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110766==    by 0x405B89: main (mandatory.cpp:68)
==110766== 
==110766== Invalid write of size 1
==110766==    at 0x4078A9: f_del_front_bn (get_next_line_utils.c:148)
==110766==    by 0x4073E7: get_next_line (get_next_line.c:63)
==110766==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110766==    by 0x405B89: main (mandatory.cpp:68)
==110766==  Address 0x4de6700 is 0 bytes after a block of size 0 alloc'd
==110766==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110766==    by 0x40783E: f_del_front_bn (get_next_line_utils.c:135)
==110766==    by 0x4073E7: get_next_line (get_next_line.c:63)
==110766==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110766==    by 0x405B89: main (mandatory.cpp:68)
==110766== 
==110766== Invalid read of size 1
==110766==    at 0x407509: ft_strchr (get_next_line_utils.c:25)
==110766==    by 0x40731D: get_next_line (get_next_line.c:33)
==110766==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110766==    by 0x405B95: main (mandatory.cpp:68)
==110766==  Address 0x4de6700 is 0 bytes after a block of size 0 alloc'd
==110766==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110766==    by 0x40783E: f_del_front_bn (get_next_line_utils.c:135)
==110766==    by 0x4073E7: get_next_line (get_next_line.c:63)
==110766==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110766==    by 0x405B89: main (mandatory.cpp:68)
==110766== 
==110766== Invalid read of size 1
==110766==    at 0x4073AB: get_next_line (get_next_line.c:58)
==110766==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110766==    by 0x405B95: main (mandatory.cpp:68)
==110766==  Address 0x4de6700 is 0 bytes after a block of size 0 alloc'd
==110766==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110766==    by 0x40783E: f_del_front_bn (get_next_line_utils.c:135)
==110766==    by 0x4073E7: get_next_line (get_next_line.c:63)
==110766==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110766==    by 0x405B89: main (mandatory.cpp:68)
==110766== 
==110766== 45 bytes in 1 blocks are definitely lost in loss record 2 of 4
==110766==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110766==    by 0x40770C: f_search_bn (get_next_line_utils.c:97)
==110766==    by 0x4073C0: get_next_line (get_next_line.c:60)
==110766==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110766==    by 0x405B89: main (mandatory.cpp:68)
==110766== 
==110766== 10,000,001 bytes in 1 blocks are possibly lost in loss record 3 of 4
==110766==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110766==    by 0x4072EC: get_next_line (get_next_line.c:27)
==110766==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110766==    by 0x405B89: main (mandatory.cpp:68)
==110766== 
==110766== 10,000,001 bytes in 1 blocks are definitely lost in loss record 4 of 4
==110766==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110766==    by 0x4072EC: get_next_line (get_next_line.c:27)
==110766==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110766==    by 0x405B95: main (mandatory.cpp:68)
==110766== 
==110769== Invalid read of size 1
==110769==    at 0x407895: f_del_front_bn (get_next_line_utils.c:142)
==110769==    by 0x4073E7: get_next_line (get_next_line.c:63)
==110769==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110769==    by 0x405DC7: main (mandatory.cpp:73)
==110769==  Address 0x4de69a2 is 0 bytes after a block of size 2 alloc'd
==110769==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110769==    by 0x40783E: f_del_front_bn (get_next_line_utils.c:135)
==110769==    by 0x4074AA: get_next_line (get_next_line.c:87)
==110769==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110769==    by 0x405DB5: main (mandatory.cpp:73)
==110769== 
==110769== Invalid write of size 1
==110769==    at 0x4078A9: f_del_front_bn (get_next_line_utils.c:148)
==110769==    by 0x4073E7: get_next_line (get_next_line.c:63)
==110769==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110769==    by 0x405DC7: main (mandatory.cpp:73)
==110769==  Address 0x4de6a90 is 0 bytes after a block of size 0 alloc'd
==110769==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110769==    by 0x40783E: f_del_front_bn (get_next_line_utils.c:135)
==110769==    by 0x4073E7: get_next_line (get_next_line.c:63)
==110769==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110769==    by 0x405DC7: main (mandatory.cpp:73)
==110769== 
==110769== Invalid read of size 1
==110769==    at 0x407509: ft_strchr (get_next_line_utils.c:25)
==110769==    by 0x40731D: get_next_line (get_next_line.c:33)
==110769==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110769==    by 0x405DD3: main (mandatory.cpp:73)
==110769==  Address 0x4de6a90 is 0 bytes after a block of size 0 alloc'd
==110769==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110769==    by 0x40783E: f_del_front_bn (get_next_line_utils.c:135)
==110769==    by 0x4073E7: get_next_line (get_next_line.c:63)
==110769==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110769==    by 0x405DC7: main (mandatory.cpp:73)
==110769== 
==110769== Invalid read of size 1
==110769==    at 0x4073AB: get_next_line (get_next_line.c:58)
==110769==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110769==    by 0x405DD3: main (mandatory.cpp:73)
==110769==  Address 0x4de6a90 is 0 bytes after a block of size 0 alloc'd
==110769==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110769==    by 0x40783E: f_del_front_bn (get_next_line_utils.c:135)
==110769==    by 0x4073E7: get_next_line (get_next_line.c:63)
==110769==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110769==    by 0x405DC7: main (mandatory.cpp:73)
==110769== 
==110769== 3 bytes in 1 blocks are definitely lost in loss record 2 of 5
==110769==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110769==    by 0x40770C: f_search_bn (get_next_line_utils.c:97)
==110769==    by 0x4073C0: get_next_line (get_next_line.c:60)
==110769==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110769==    by 0x405DC7: main (mandatory.cpp:73)
==110769== 
==110769== 45 bytes in 1 blocks are definitely lost in loss record 3 of 5
==110769==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110769==    by 0x4075AF: ft_strjoin (get_next_line_utils.c:58)
==110769==    by 0x40746B: get_next_line (get_next_line.c:82)
==110769==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110769==    by 0x405DB5: main (mandatory.cpp:73)
==110769== 
==110769== 10,000,001 bytes in 1 blocks are possibly lost in loss record 4 of 5
==110769==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110769==    by 0x4072EC: get_next_line (get_next_line.c:27)
==110769==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110769==    by 0x405DD3: main (mandatory.cpp:73)
==110769== 
==110769== 10,000,001 bytes in 1 blocks are definitely lost in loss record 5 of 5
==110769==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110769==    by 0x4072EC: get_next_line (get_next_line.c:27)
==110769==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110769==    by 0x405DC7: main (mandatory.cpp:73)
==110769== 
==110773== 6 bytes in 1 blocks are definitely lost in loss record 2 of 7
==110773==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110773==    by 0x4075AF: ft_strjoin (get_next_line_utils.c:58)
==110773==    by 0x40746B: get_next_line (get_next_line.c:82)
==110773==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110773==    by 0x405FF3: main (mandatory.cpp:79)
==110773== 
==110773== 10,000,001 bytes in 1 blocks are possibly lost in loss record 3 of 7
==110773==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110773==    by 0x4072EC: get_next_line (get_next_line.c:27)
==110773==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110773==    by 0x406017: main (mandatory.cpp:79)
==110773== 
==110773== 10,000,001 bytes in 1 blocks are possibly lost in loss record 4 of 7
==110773==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110773==    by 0x4072EC: get_next_line (get_next_line.c:27)
==110773==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110773==    by 0x406047: main (mandatory.cpp:79)
==110773== 
==110773== 10,000,001 bytes in 1 blocks are definitely lost in loss record 5 of 7
==110773==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110773==    by 0x4072EC: get_next_line (get_next_line.c:27)
==110773==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110773==    by 0x406005: main (mandatory.cpp:79)
==110773== 
==110773== 10,000,001 bytes in 1 blocks are definitely lost in loss record 6 of 7
==110773==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110773==    by 0x4072EC: get_next_line (get_next_line.c:27)
==110773==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110773==    by 0x406029: main (mandatory.cpp:79)
==110773== 
==110773== 10,000,001 bytes in 1 blocks are definitely lost in loss record 7 of 7
==110773==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110773==    by 0x4072EC: get_next_line (get_next_line.c:27)
==110773==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110773==    by 0x40603B: main (mandatory.cpp:79)
==110773== 
==110774== Invalid read of size 1
==110774==    at 0x407895: f_del_front_bn (get_next_line_utils.c:142)
==110774==    by 0x4073E7: get_next_line (get_next_line.c:63)
==110774==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110774==    by 0x4062AF: main (mandatory.cpp:88)
==110774==  Address 0x4de746a is 0 bytes after a block of size 42 alloc'd
==110774==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110774==    by 0x40783E: f_del_front_bn (get_next_line_utils.c:135)
==110774==    by 0x407344: get_next_line (get_next_line.c:36)
==110774==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110774==    by 0x40629D: main (mandatory.cpp:88)
==110774== 
==110774== Invalid write of size 1
==110774==    at 0x4078A9: f_del_front_bn (get_next_line_utils.c:148)
==110774==    by 0x4073E7: get_next_line (get_next_line.c:63)
==110774==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110774==    by 0x4062AF: main (mandatory.cpp:88)
==110774==  Address 0x4de7590 is 0 bytes after a block of size 0 alloc'd
==110774==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110774==    by 0x40783E: f_del_front_bn (get_next_line_utils.c:135)
==110774==    by 0x4073E7: get_next_line (get_next_line.c:63)
==110774==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110774==    by 0x4062AF: main (mandatory.cpp:88)
==110774== 
==110774== Invalid read of size 1
==110774==    at 0x407509: ft_strchr (get_next_line_utils.c:25)
==110774==    by 0x40731D: get_next_line (get_next_line.c:33)
==110774==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110774==    by 0x4062BB: main (mandatory.cpp:88)
==110774==  Address 0x4de7590 is 0 bytes after a block of size 0 alloc'd
==110774==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110774==    by 0x40783E: f_del_front_bn (get_next_line_utils.c:135)
==110774==    by 0x4073E7: get_next_line (get_next_line.c:63)
==110774==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110774==    by 0x4062AF: main (mandatory.cpp:88)
==110774== 
==110774== Invalid read of size 1
==110774==    at 0x4073AB: get_next_line (get_next_line.c:58)
==110774==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110774==    by 0x4062BB: main (mandatory.cpp:88)
==110774==  Address 0x4de7590 is 0 bytes after a block of size 0 alloc'd
==110774==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110774==    by 0x40783E: f_del_front_bn (get_next_line_utils.c:135)
==110774==    by 0x4073E7: get_next_line (get_next_line.c:63)
==110774==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110774==    by 0x4062AF: main (mandatory.cpp:88)
==110774== 
==110774== 43 bytes in 1 blocks are definitely lost in loss record 2 of 8
==110774==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110774==    by 0x40770C: f_search_bn (get_next_line_utils.c:97)
==110774==    by 0x4073C0: get_next_line (get_next_line.c:60)
==110774==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110774==    by 0x4062AF: main (mandatory.cpp:88)
==110774== 
==110774== 214 bytes in 1 blocks are definitely lost in loss record 3 of 8
==110774==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110774==    by 0x4075AF: ft_strjoin (get_next_line_utils.c:58)
==110774==    by 0x40746B: get_next_line (get_next_line.c:82)
==110774==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110774==    by 0x406267: main (mandatory.cpp:88)
==110774== 
==110774== 10,000,001 bytes in 1 blocks are possibly lost in loss record 4 of 8
==110774==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110774==    by 0x4072EC: get_next_line (get_next_line.c:27)
==110774==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110774==    by 0x40628B: main (mandatory.cpp:88)
==110774== 
==110774== 10,000,001 bytes in 1 blocks are possibly lost in loss record 5 of 8
==110774==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110774==    by 0x4072EC: get_next_line (get_next_line.c:27)
==110774==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110774==    by 0x4062BB: main (mandatory.cpp:88)
==110774== 
==110774== 10,000,001 bytes in 1 blocks are definitely lost in loss record 6 of 8
==110774==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110774==    by 0x4072EC: get_next_line (get_next_line.c:27)
==110774==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110774==    by 0x406279: main (mandatory.cpp:88)
==110774== 
==110774== 10,000,001 bytes in 1 blocks are definitely lost in loss record 7 of 8
==110774==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110774==    by 0x4072EC: get_next_line (get_next_line.c:27)
==110774==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110774==    by 0x40629D: main (mandatory.cpp:88)
==110774== 
==110774== 10,000,001 bytes in 1 blocks are definitely lost in loss record 8 of 8
==110774==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110774==    by 0x4072EC: get_next_line (get_next_line.c:27)
==110774==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110774==    by 0x4062AF: main (mandatory.cpp:88)
==110774== 
==110778== 210 bytes in 1 blocks are definitely lost in loss record 2 of 7
==110778==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110778==    by 0x4075AF: ft_strjoin (get_next_line_utils.c:58)
==110778==    by 0x40746B: get_next_line (get_next_line.c:82)
==110778==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110778==    by 0x4064DB: main (mandatory.cpp:97)
==110778== 
==110778== 10,000,001 bytes in 1 blocks are possibly lost in loss record 3 of 7
==110778==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110778==    by 0x4072EC: get_next_line (get_next_line.c:27)
==110778==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110778==    by 0x4064FF: main (mandatory.cpp:97)
==110778== 
==110778== 10,000,001 bytes in 1 blocks are possibly lost in loss record 4 of 7
==110778==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110778==    by 0x4072EC: get_next_line (get_next_line.c:27)
==110778==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110778==    by 0x40652F: main (mandatory.cpp:97)
==110778== 
==110778== 10,000,001 bytes in 1 blocks are definitely lost in loss record 5 of 7
==110778==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110778==    by 0x4072EC: get_next_line (get_next_line.c:27)
==110778==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110778==    by 0x4064ED: main (mandatory.cpp:97)
==110778== 
==110778== 10,000,001 bytes in 1 blocks are definitely lost in loss record 6 of 7
==110778==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110778==    by 0x4072EC: get_next_line (get_next_line.c:27)
==110778==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110778==    by 0x406511: main (mandatory.cpp:97)
==110778== 
==110778== 10,000,001 bytes in 1 blocks are definitely lost in loss record 7 of 7
==110778==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110778==    by 0x4072EC: get_next_line (get_next_line.c:27)
==110778==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110778==    by 0x406523: main (mandatory.cpp:97)
==110778== 
==110779== Invalid read of size 1
==110779==    at 0x407895: f_del_front_bn (get_next_line_utils.c:142)
==110779==    by 0x4073E7: get_next_line (get_next_line.c:63)
==110779==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110779==    by 0x4067DF: main (mandatory.cpp:106)
==110779==  Address 0x4de7eda is 0 bytes after a block of size 42 alloc'd
==110779==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110779==    by 0x40783E: f_del_front_bn (get_next_line_utils.c:135)
==110779==    by 0x407344: get_next_line (get_next_line.c:36)
==110779==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110779==    by 0x4067CD: main (mandatory.cpp:106)
==110779== 
==110779== Invalid write of size 1
==110779==    at 0x4078A9: f_del_front_bn (get_next_line_utils.c:148)
==110779==    by 0x4073E7: get_next_line (get_next_line.c:63)
==110779==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110779==    by 0x4067DF: main (mandatory.cpp:106)
==110779==  Address 0x4de8000 is 0 bytes after a block of size 0 alloc'd
==110779==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110779==    by 0x40783E: f_del_front_bn (get_next_line_utils.c:135)
==110779==    by 0x4073E7: get_next_line (get_next_line.c:63)
==110779==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110779==    by 0x4067DF: main (mandatory.cpp:106)
==110779== 
==110779== Invalid read of size 1
==110779==    at 0x407509: ft_strchr (get_next_line_utils.c:25)
==110779==    by 0x40731D: get_next_line (get_next_line.c:33)
==110779==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110779==    by 0x4067EB: main (mandatory.cpp:106)
==110779==  Address 0x4de8000 is 0 bytes after a block of size 0 alloc'd
==110779==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110779==    by 0x40783E: f_del_front_bn (get_next_line_utils.c:135)
==110779==    by 0x4073E7: get_next_line (get_next_line.c:63)
==110779==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110779==    by 0x4067DF: main (mandatory.cpp:106)
==110779== 
==110779== Invalid read of size 1
==110779==    at 0x4073AB: get_next_line (get_next_line.c:58)
==110779==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110779==    by 0x4067EB: main (mandatory.cpp:106)
==110779==  Address 0x4de8000 is 0 bytes after a block of size 0 alloc'd
==110779==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110779==    by 0x40783E: f_del_front_bn (get_next_line_utils.c:135)
==110779==    by 0x4073E7: get_next_line (get_next_line.c:63)
==110779==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110779==    by 0x4067DF: main (mandatory.cpp:106)
==110779== 
==110779== 43 bytes in 1 blocks are definitely lost in loss record 2 of 12
==110779==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110779==    by 0x40770C: f_search_bn (get_next_line_utils.c:97)
==110779==    by 0x4073C0: get_next_line (get_next_line.c:60)
==110779==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110779==    by 0x4067DF: main (mandatory.cpp:106)
==110779== 
==110779== 218 bytes in 1 blocks are definitely lost in loss record 3 of 12
==110779==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110779==    by 0x4075AF: ft_strjoin (get_next_line_utils.c:58)
==110779==    by 0x40746B: get_next_line (get_next_line.c:82)
==110779==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110779==    by 0x40674F: main (mandatory.cpp:106)
==110779== 
==110779== 10,000,001 bytes in 1 blocks are possibly lost in loss record 4 of 12
==110779==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110779==    by 0x4072EC: get_next_line (get_next_line.c:27)
==110779==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110779==    by 0x406773: main (mandatory.cpp:106)
==110779== 
==110779== 10,000,001 bytes in 1 blocks are possibly lost in loss record 5 of 12
==110779==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110779==    by 0x4072EC: get_next_line (get_next_line.c:27)
==110779==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110779==    by 0x4067A9: main (mandatory.cpp:106)
==110779== 
==110779== 10,000,001 bytes in 1 blocks are possibly lost in loss record 6 of 12
==110779==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110779==    by 0x4072EC: get_next_line (get_next_line.c:27)
==110779==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110779==    by 0x4067BB: main (mandatory.cpp:106)
==110779== 
==110779== 10,000,001 bytes in 1 blocks are possibly lost in loss record 7 of 12
==110779==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110779==    by 0x4072EC: get_next_line (get_next_line.c:27)
==110779==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110779==    by 0x4067CD: main (mandatory.cpp:106)
==110779== 
==110779== 10,000,001 bytes in 1 blocks are possibly lost in loss record 8 of 12
==110779==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110779==    by 0x4072EC: get_next_line (get_next_line.c:27)
==110779==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110779==    by 0x4067EB: main (mandatory.cpp:106)
==110779== 
==110779== 10,000,001 bytes in 1 blocks are definitely lost in loss record 9 of 12
==110779==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110779==    by 0x4072EC: get_next_line (get_next_line.c:27)
==110779==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110779==    by 0x406761: main (mandatory.cpp:106)
==110779== 
==110779== 10,000,001 bytes in 1 blocks are definitely lost in loss record 10 of 12
==110779==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110779==    by 0x4072EC: get_next_line (get_next_line.c:27)
==110779==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110779==    by 0x406785: main (mandatory.cpp:106)
==110779== 
==110779== 10,000,001 bytes in 1 blocks are definitely lost in loss record 11 of 12
==110779==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110779==    by 0x4072EC: get_next_line (get_next_line.c:27)
==110779==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110779==    by 0x406797: main (mandatory.cpp:106)
==110779== 
==110779== 10,000,001 bytes in 1 blocks are definitely lost in loss record 12 of 12
==110779==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110779==    by 0x4072EC: get_next_line (get_next_line.c:27)
==110779==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110779==    by 0x4067DF: main (mandatory.cpp:106)
==110779== 
==110783== 219 bytes in 1 blocks are definitely lost in loss record 2 of 11
==110783==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110783==    by 0x4075AF: ft_strjoin (get_next_line_utils.c:58)
==110783==    by 0x40746B: get_next_line (get_next_line.c:82)
==110783==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110783==    by 0x406A0B: main (mandatory.cpp:119)
==110783== 
==110783== 10,000,001 bytes in 1 blocks are possibly lost in loss record 3 of 11
==110783==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110783==    by 0x4072EC: get_next_line (get_next_line.c:27)
==110783==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110783==    by 0x406A2F: main (mandatory.cpp:119)
==110783== 
==110783== 10,000,001 bytes in 1 blocks are possibly lost in loss record 4 of 11
==110783==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110783==    by 0x4072EC: get_next_line (get_next_line.c:27)
==110783==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110783==    by 0x406A65: main (mandatory.cpp:119)
==110783== 
==110783== 10,000,001 bytes in 1 blocks are possibly lost in loss record 5 of 11
==110783==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110783==    by 0x4072EC: get_next_line (get_next_line.c:27)
==110783==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110783==    by 0x406A77: main (mandatory.cpp:119)
==110783== 
==110783== 10,000,001 bytes in 1 blocks are possibly lost in loss record 6 of 11
==110783==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110783==    by 0x4072EC: get_next_line (get_next_line.c:27)
==110783==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110783==    by 0x406A89: main (mandatory.cpp:119)
==110783== 
==110783== 10,000,001 bytes in 1 blocks are possibly lost in loss record 7 of 11
==110783==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110783==    by 0x4072EC: get_next_line (get_next_line.c:27)
==110783==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110783==    by 0x406AA7: main (mandatory.cpp:119)
==110783== 
==110783== 10,000,001 bytes in 1 blocks are definitely lost in loss record 8 of 11
==110783==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110783==    by 0x4072EC: get_next_line (get_next_line.c:27)
==110783==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110783==    by 0x406A1D: main (mandatory.cpp:119)
==110783== 
==110783== 10,000,001 bytes in 1 blocks are definitely lost in loss record 9 of 11
==110783==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110783==    by 0x4072EC: get_next_line (get_next_line.c:27)
==110783==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110783==    by 0x406A41: main (mandatory.cpp:119)
==110783== 
==110783== 10,000,001 bytes in 1 blocks are definitely lost in loss record 10 of 11
==110783==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110783==    by 0x4072EC: get_next_line (get_next_line.c:27)
==110783==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110783==    by 0x406A53: main (mandatory.cpp:119)
==110783== 
==110783== 10,000,001 bytes in 1 blocks are definitely lost in loss record 11 of 11
==110783==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110783==    by 0x4072EC: get_next_line (get_next_line.c:27)
==110783==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110783==    by 0x406A9B: main (mandatory.cpp:119)
==110783== 
==110786== Invalid read of size 1
==110786==    at 0x407895: f_del_front_bn (get_next_line_utils.c:142)
==110786==    by 0x4073E7: get_next_line (get_next_line.c:63)
==110786==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110786==    by 0x406CC7: main (mandatory.cpp:132)
==110786==  Address 0x4dea2b1 is 0 bytes after a block of size 10,001 alloc'd
==110786==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110786==    by 0x4075AF: ft_strjoin (get_next_line_utils.c:58)
==110786==    by 0x40746B: get_next_line (get_next_line.c:82)
==110786==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110786==    by 0x406CC7: main (mandatory.cpp:132)
==110786== 
==110786== Invalid write of size 1
==110786==    at 0x4078A9: f_del_front_bn (get_next_line_utils.c:148)
==110786==    by 0x4073E7: get_next_line (get_next_line.c:63)
==110786==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110786==    by 0x406CC7: main (mandatory.cpp:132)
==110786==  Address 0x4def1c0 is 0 bytes after a block of size 0 alloc'd
==110786==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110786==    by 0x40783E: f_del_front_bn (get_next_line_utils.c:135)
==110786==    by 0x4073E7: get_next_line (get_next_line.c:63)
==110786==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110786==    by 0x406CC7: main (mandatory.cpp:132)
==110786== 
==110786== Invalid read of size 1
==110786==    at 0x407509: ft_strchr (get_next_line_utils.c:25)
==110786==    by 0x40731D: get_next_line (get_next_line.c:33)
==110786==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110786==    by 0x406CD3: main (mandatory.cpp:132)
==110786==  Address 0x4def1c0 is 0 bytes after a block of size 0 alloc'd
==110786==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110786==    by 0x40783E: f_del_front_bn (get_next_line_utils.c:135)
==110786==    by 0x4073E7: get_next_line (get_next_line.c:63)
==110786==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110786==    by 0x406CC7: main (mandatory.cpp:132)
==110786== 
==110786== Invalid read of size 1
==110786==    at 0x4073AB: get_next_line (get_next_line.c:58)
==110786==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110786==    by 0x406CD3: main (mandatory.cpp:132)
==110786==  Address 0x4def1c0 is 0 bytes after a block of size 0 alloc'd
==110786==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110786==    by 0x40783E: f_del_front_bn (get_next_line_utils.c:135)
==110786==    by 0x4073E7: get_next_line (get_next_line.c:63)
==110786==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110786==    by 0x406CC7: main (mandatory.cpp:132)
==110786== 
==110786== 10,002 bytes in 1 blocks are definitely lost in loss record 2 of 4
==110786==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110786==    by 0x40770C: f_search_bn (get_next_line_utils.c:97)
==110786==    by 0x4073C0: get_next_line (get_next_line.c:60)
==110786==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110786==    by 0x406CC7: main (mandatory.cpp:132)
==110786== 
==110786== 10,000,001 bytes in 1 blocks are possibly lost in loss record 3 of 4
==110786==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110786==    by 0x4072EC: get_next_line (get_next_line.c:27)
==110786==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110786==    by 0x406CC7: main (mandatory.cpp:132)
==110786== 
==110786== 10,000,001 bytes in 1 blocks are definitely lost in loss record 4 of 4
==110786==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110786==    by 0x4072EC: get_next_line (get_next_line.c:27)
==110786==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110786==    by 0x406CD3: main (mandatory.cpp:132)
==110786== 
==110787== 10,002 bytes in 1 blocks are definitely lost in loss record 2 of 3
==110787==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110787==    by 0x4075AF: ft_strjoin (get_next_line_utils.c:58)
==110787==    by 0x40746B: get_next_line (get_next_line.c:82)
==110787==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110787==    by 0x406EF3: main (mandatory.cpp:136)
==110787== 
==110787== 10,000,001 bytes in 1 blocks are definitely lost in loss record 3 of 3
==110787==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110787==    by 0x4072EC: get_next_line (get_next_line.c:27)
==110787==    by 0x402CC6: gnl(int, char const*) (gnl.cpp:20)
==110787==    by 0x406EFF: main (mandatory.cpp:136)
==110787== 
==110791== Invalid read of size 1
==110791==    at 0x484FBD4: strcmp (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==110791==    by 0x402CFA: gnl(int, char const*) (gnl.cpp:24)
==110791==    by 0x40711E: main (mandatory.cpp:141)
==110791==  Address 0x0 is not stack'd, malloc'd or (recently) free'd
==110791== 
