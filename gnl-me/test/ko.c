==359648== Invalid write of size 1
==359648==    at 0x40734C: get_next_line (get_next_line.c:38)
==359648==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359648==    by 0x404BC6: main (mandatory.cpp:25)
==359648==  Address 0x4de329f is 1 bytes before a block of size 2 alloc'd
==359648==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359648==    by 0x4072FC: get_next_line (get_next_line.c:27)
==359648==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359648==    by 0x404BC6: main (mandatory.cpp:25)
==359648== 
==359648== Conditional jump or move depends on uninitialised value(s)
==359648==    at 0x407508: ft_strlen (get_next_line_utils.c:43)
==359648==    by 0x40753E: ft_strjoin (get_next_line_utils.c:59)
==359648==    by 0x40738B: get_next_line (get_next_line.c:48)
==359648==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359648==    by 0x404BC6: main (mandatory.cpp:25)
==359648== 
==359648== Conditional jump or move depends on uninitialised value(s)
==359648==    at 0x4075FB: ft_strjoin (get_next_line_utils.c:75)
==359648==    by 0x40738B: get_next_line (get_next_line.c:48)
==359648==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359648==    by 0x404BC6: main (mandatory.cpp:25)
==359648== 
==359648== Invalid write of size 1
==359648==    at 0x40734C: get_next_line (get_next_line.c:38)
==359648==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359648==    by 0x404BE8: main (mandatory.cpp:25)
==359648==  Address 0x4de43cf is 1 bytes before a block of size 2 alloc'd
==359648==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359648==    by 0x4072FC: get_next_line (get_next_line.c:27)
==359648==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359648==    by 0x404BE8: main (mandatory.cpp:25)
==359648== 
==359648== Conditional jump or move depends on uninitialised value(s)
==359648==    at 0x4075FB: ft_strjoin (get_next_line_utils.c:75)
==359648==    by 0x40738B: get_next_line (get_next_line.c:48)
==359648==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359648==    by 0x404BE8: main (mandatory.cpp:25)
==359648== 
==359648== 1 bytes in 1 blocks are definitely lost in loss record 2 of 5
==359648==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359648==    by 0x407364: get_next_line (get_next_line.c:43)
==359648==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359648==    by 0x404BC6: main (mandatory.cpp:25)
==359648== 
==359648== 1 bytes in 1 blocks are definitely lost in loss record 3 of 5
==359648==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359648==    by 0x407554: ft_strjoin (get_next_line_utils.c:64)
==359648==    by 0x40738B: get_next_line (get_next_line.c:48)
==359648==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359648==    by 0x404BC6: main (mandatory.cpp:25)
==359648== 
==359648== 2 bytes in 1 blocks are definitely lost in loss record 4 of 5
==359648==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359648==    by 0x4072FC: get_next_line (get_next_line.c:27)
==359648==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359648==    by 0x404BC6: main (mandatory.cpp:25)
==359648== 
==359648== 2 bytes in 1 blocks are definitely lost in loss record 5 of 5
==359648==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359648==    by 0x4072FC: get_next_line (get_next_line.c:27)
==359648==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359648==    by 0x404BE8: main (mandatory.cpp:25)
==359648== 
==359652== Invalid read of size 1
==359652==    at 0x407503: ft_strlen (get_next_line_utils.c:43)
==359652==    by 0x407530: ft_strjoin (get_next_line_utils.c:59)
==359652==    by 0x40738B: get_next_line (get_next_line.c:48)
==359652==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359652==    by 0x404E6F: main (mandatory.cpp:31)
==359652==  Address 0x4de4690 is 0 bytes inside a block of size 1 free'd
==359652==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359652==    by 0x40743F: get_next_line (get_next_line.c:67)
==359652==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359652==    by 0x404E63: main (mandatory.cpp:31)
==359652==  Block was alloc'd at
==359652==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359652==    by 0x407554: ft_strjoin (get_next_line_utils.c:64)
==359652==    by 0x40738B: get_next_line (get_next_line.c:48)
==359652==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359652==    by 0x404E63: main (mandatory.cpp:31)
==359652== 
==359652== Invalid read of size 1
==359652==    at 0x4075AA: ft_strjoin (get_next_line_utils.c:68)
==359652==    by 0x40738B: get_next_line (get_next_line.c:48)
==359652==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359652==    by 0x404E6F: main (mandatory.cpp:31)
==359652==  Address 0x4de4690 is 0 bytes inside a block of size 1 free'd
==359652==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359652==    by 0x40743F: get_next_line (get_next_line.c:67)
==359652==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359652==    by 0x404E63: main (mandatory.cpp:31)
==359652==  Block was alloc'd at
==359652==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359652==    by 0x407554: ft_strjoin (get_next_line_utils.c:64)
==359652==    by 0x40738B: get_next_line (get_next_line.c:48)
==359652==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359652==    by 0x404E63: main (mandatory.cpp:31)
==359652== 
==359652== 1 bytes in 1 blocks are definitely lost in loss record 1 of 1
==359652==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359652==    by 0x407364: get_next_line (get_next_line.c:43)
==359652==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359652==    by 0x404E63: main (mandatory.cpp:31)
==359652== 
==359670== Invalid read of size 1
==359670==    at 0x407724: f_del_front_bn (get_next_line_utils.c:162)
==359670==    by 0x4073CD: get_next_line (get_next_line.c:52)
==359670==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359670==    by 0x40508F: main (mandatory.cpp:36)
==359670==  Address 0x4de4690 is 0 bytes inside a block of size 2 free'd
==359670==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359670==    by 0x407702: f_search_bn (get_next_line_utils.c:118)
==359670==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359670==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359670==    by 0x40508F: main (mandatory.cpp:36)
==359670==  Block was alloc'd at
==359670==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359670==    by 0x407554: ft_strjoin (get_next_line_utils.c:64)
==359670==    by 0x40738B: get_next_line (get_next_line.c:48)
==359670==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359670==    by 0x40508F: main (mandatory.cpp:36)
==359670== 
==359670== Invalid read of size 1
==359670==    at 0x407503: ft_strlen (get_next_line_utils.c:43)
==359670==    by 0x407530: ft_strjoin (get_next_line_utils.c:59)
==359670==    by 0x40738B: get_next_line (get_next_line.c:48)
==359670==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359670==    by 0x40509B: main (mandatory.cpp:36)
==359670==  Address 0x4de4691 is 1 bytes inside a block of size 2 free'd
==359670==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359670==    by 0x407702: f_search_bn (get_next_line_utils.c:118)
==359670==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359670==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359670==    by 0x40508F: main (mandatory.cpp:36)
==359670==  Block was alloc'd at
==359670==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359670==    by 0x407554: ft_strjoin (get_next_line_utils.c:64)
==359670==    by 0x40738B: get_next_line (get_next_line.c:48)
==359670==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359670==    by 0x40508F: main (mandatory.cpp:36)
==359670== 
==359670== Invalid read of size 1
==359670==    at 0x4075AA: ft_strjoin (get_next_line_utils.c:68)
==359670==    by 0x40738B: get_next_line (get_next_line.c:48)
==359670==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359670==    by 0x40509B: main (mandatory.cpp:36)
==359670==  Address 0x4de4691 is 1 bytes inside a block of size 2 free'd
==359670==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359670==    by 0x407702: f_search_bn (get_next_line_utils.c:118)
==359670==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359670==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359670==    by 0x40508F: main (mandatory.cpp:36)
==359670==  Block was alloc'd at
==359670==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359670==    by 0x407554: ft_strjoin (get_next_line_utils.c:64)
==359670==    by 0x40738B: get_next_line (get_next_line.c:48)
==359670==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359670==    by 0x40508F: main (mandatory.cpp:36)
==359670== 
==359670== 1 bytes in 1 blocks are definitely lost in loss record 1 of 1
==359670==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359670==    by 0x407364: get_next_line (get_next_line.c:43)
==359670==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359670==    by 0x40508F: main (mandatory.cpp:36)
==359670== 
==359693== Invalid read of size 1
==359693==    at 0x484FBD4: strcmp (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359693==    by 0x402D0A: gnl(int, char const*) (gnl.cpp:24)
==359693==    by 0x4052BB: main (mandatory.cpp:41)
==359693==  Address 0x0 is not stack'd, malloc'd or (recently) free'd
==359693== 
==359693== 1 bytes in 1 blocks are definitely lost in loss record 1 of 2
==359693==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359693==    by 0x407364: get_next_line (get_next_line.c:43)
==359693==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359693==    by 0x4052BB: main (mandatory.cpp:41)
==359693== 
==359693== 902 bytes in 41 blocks are definitely lost in loss record 2 of 2
==359693==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359693==    by 0x407554: ft_strjoin (get_next_line_utils.c:64)
==359693==    by 0x40738B: get_next_line (get_next_line.c:48)
==359693==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359693==    by 0x4052BB: main (mandatory.cpp:41)
==359693== 
==359695== Invalid read of size 1
==359695==    at 0x407724: f_del_front_bn (get_next_line_utils.c:162)
==359695==    by 0x4073CD: get_next_line (get_next_line.c:52)
==359695==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359695==    by 0x4054E7: main (mandatory.cpp:46)
==359695==  Address 0x4de5b50 is 0 bytes inside a block of size 42 free'd
==359695==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359695==    by 0x407702: f_search_bn (get_next_line_utils.c:118)
==359695==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359695==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359695==    by 0x4054E7: main (mandatory.cpp:46)
==359695==  Block was alloc'd at
==359695==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359695==    by 0x407554: ft_strjoin (get_next_line_utils.c:64)
==359695==    by 0x40738B: get_next_line (get_next_line.c:48)
==359695==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359695==    by 0x4054E7: main (mandatory.cpp:46)
==359695== 
==359695== Invalid read of size 1
==359695==    at 0x407503: ft_strlen (get_next_line_utils.c:43)
==359695==    by 0x407530: ft_strjoin (get_next_line_utils.c:59)
==359695==    by 0x40738B: get_next_line (get_next_line.c:48)
==359695==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359695==    by 0x4054F9: main (mandatory.cpp:46)
==359695==  Address 0x4de5b79 is 41 bytes inside a block of size 42 free'd
==359695==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359695==    by 0x407702: f_search_bn (get_next_line_utils.c:118)
==359695==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359695==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359695==    by 0x4054E7: main (mandatory.cpp:46)
==359695==  Block was alloc'd at
==359695==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359695==    by 0x407554: ft_strjoin (get_next_line_utils.c:64)
==359695==    by 0x40738B: get_next_line (get_next_line.c:48)
==359695==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359695==    by 0x4054E7: main (mandatory.cpp:46)
==359695== 
==359695== Invalid read of size 1
==359695==    at 0x4075AA: ft_strjoin (get_next_line_utils.c:68)
==359695==    by 0x40738B: get_next_line (get_next_line.c:48)
==359695==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359695==    by 0x4054F9: main (mandatory.cpp:46)
==359695==  Address 0x4de5b79 is 41 bytes inside a block of size 42 free'd
==359695==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359695==    by 0x407702: f_search_bn (get_next_line_utils.c:118)
==359695==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359695==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359695==    by 0x4054E7: main (mandatory.cpp:46)
==359695==  Block was alloc'd at
==359695==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359695==    by 0x407554: ft_strjoin (get_next_line_utils.c:64)
==359695==    by 0x40738B: get_next_line (get_next_line.c:48)
==359695==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359695==    by 0x4054E7: main (mandatory.cpp:46)
==359695== 
==359695== Invalid read of size 1
==359695==    at 0x484FBD4: strcmp (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359695==    by 0x402D0A: gnl(int, char const*) (gnl.cpp:24)
==359695==    by 0x4054F9: main (mandatory.cpp:46)
==359695==  Address 0x0 is not stack'd, malloc'd or (recently) free'd
==359695== 
==359695== 1 bytes in 1 blocks are definitely lost in loss record 1 of 3
==359695==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359695==    by 0x407364: get_next_line (get_next_line.c:43)
==359695==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359695==    by 0x4054E7: main (mandatory.cpp:46)
==359695== 
==359695== 2 bytes in 1 blocks are definitely lost in loss record 2 of 3
==359695==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359695==    by 0x407554: ft_strjoin (get_next_line_utils.c:64)
==359695==    by 0x40738B: get_next_line (get_next_line.c:48)
==359695==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359695==    by 0x4054F9: main (mandatory.cpp:46)
==359695== 
==359695== 860 bytes in 40 blocks are definitely lost in loss record 3 of 3
==359695==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359695==    by 0x407554: ft_strjoin (get_next_line_utils.c:64)
==359695==    by 0x40738B: get_next_line (get_next_line.c:48)
==359695==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359695==    by 0x4054E7: main (mandatory.cpp:46)
==359695== 
==359700== Invalid read of size 1
==359700==    at 0x484FBD4: strcmp (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359700==    by 0x402D0A: gnl(int, char const*) (gnl.cpp:24)
==359700==    by 0x405725: main (mandatory.cpp:52)
==359700==  Address 0x0 is not stack'd, malloc'd or (recently) free'd
==359700== 
==359700== 1 bytes in 1 blocks are definitely lost in loss record 1 of 2
==359700==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359700==    by 0x407364: get_next_line (get_next_line.c:43)
==359700==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359700==    by 0x405725: main (mandatory.cpp:52)
==359700== 
==359700== 945 bytes in 42 blocks are definitely lost in loss record 2 of 2
==359700==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359700==    by 0x407554: ft_strjoin (get_next_line_utils.c:64)
==359700==    by 0x40738B: get_next_line (get_next_line.c:48)
==359700==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359700==    by 0x405725: main (mandatory.cpp:52)
==359700== 
==359703== Invalid read of size 1
==359703==    at 0x407724: f_del_front_bn (get_next_line_utils.c:162)
==359703==    by 0x4073CD: get_next_line (get_next_line.c:52)
==359703==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359703==    by 0x405951: main (mandatory.cpp:57)
==359703==  Address 0x4de61e0 is 0 bytes inside a block of size 43 free'd
==359703==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359703==    by 0x407702: f_search_bn (get_next_line_utils.c:118)
==359703==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359703==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359703==    by 0x405951: main (mandatory.cpp:57)
==359703==  Block was alloc'd at
==359703==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359703==    by 0x407554: ft_strjoin (get_next_line_utils.c:64)
==359703==    by 0x40738B: get_next_line (get_next_line.c:48)
==359703==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359703==    by 0x405951: main (mandatory.cpp:57)
==359703== 
==359703== Invalid read of size 1
==359703==    at 0x407503: ft_strlen (get_next_line_utils.c:43)
==359703==    by 0x407530: ft_strjoin (get_next_line_utils.c:59)
==359703==    by 0x40738B: get_next_line (get_next_line.c:48)
==359703==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359703==    by 0x405963: main (mandatory.cpp:57)
==359703==  Address 0x4de620a is 42 bytes inside a block of size 43 free'd
==359703==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359703==    by 0x407702: f_search_bn (get_next_line_utils.c:118)
==359703==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359703==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359703==    by 0x405951: main (mandatory.cpp:57)
==359703==  Block was alloc'd at
==359703==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359703==    by 0x407554: ft_strjoin (get_next_line_utils.c:64)
==359703==    by 0x40738B: get_next_line (get_next_line.c:48)
==359703==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359703==    by 0x405951: main (mandatory.cpp:57)
==359703== 
==359703== Invalid read of size 1
==359703==    at 0x4075AA: ft_strjoin (get_next_line_utils.c:68)
==359703==    by 0x40738B: get_next_line (get_next_line.c:48)
==359703==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359703==    by 0x405963: main (mandatory.cpp:57)
==359703==  Address 0x4de620a is 42 bytes inside a block of size 43 free'd
==359703==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359703==    by 0x407702: f_search_bn (get_next_line_utils.c:118)
==359703==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359703==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359703==    by 0x405951: main (mandatory.cpp:57)
==359703==  Block was alloc'd at
==359703==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359703==    by 0x407554: ft_strjoin (get_next_line_utils.c:64)
==359703==    by 0x40738B: get_next_line (get_next_line.c:48)
==359703==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359703==    by 0x405951: main (mandatory.cpp:57)
==359703== 
==359703== Invalid read of size 1
==359703==    at 0x484FBD4: strcmp (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359703==    by 0x402D0A: gnl(int, char const*) (gnl.cpp:24)
==359703==    by 0x405963: main (mandatory.cpp:57)
==359703==  Address 0x0 is not stack'd, malloc'd or (recently) free'd
==359703== 
==359703== 1 bytes in 1 blocks are definitely lost in loss record 1 of 3
==359703==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359703==    by 0x407364: get_next_line (get_next_line.c:43)
==359703==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359703==    by 0x405951: main (mandatory.cpp:57)
==359703== 
==359703== 2 bytes in 1 blocks are definitely lost in loss record 2 of 3
==359703==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359703==    by 0x407554: ft_strjoin (get_next_line_utils.c:64)
==359703==    by 0x40738B: get_next_line (get_next_line.c:48)
==359703==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359703==    by 0x405963: main (mandatory.cpp:57)
==359703== 
==359703== 902 bytes in 41 blocks are definitely lost in loss record 3 of 3
==359703==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359703==    by 0x407554: ft_strjoin (get_next_line_utils.c:64)
==359703==    by 0x40738B: get_next_line (get_next_line.c:48)
==359703==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359703==    by 0x405951: main (mandatory.cpp:57)
==359703== 
==359707== Invalid read of size 1
==359707==    at 0x484FBD4: strcmp (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359707==    by 0x402D0A: gnl(int, char const*) (gnl.cpp:24)
==359707==    by 0x405B99: main (mandatory.cpp:68)
==359707==  Address 0x0 is not stack'd, malloc'd or (recently) free'd
==359707== 
==359707== 1 bytes in 1 blocks are definitely lost in loss record 1 of 2
==359707==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359707==    by 0x407364: get_next_line (get_next_line.c:43)
==359707==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359707==    by 0x405B99: main (mandatory.cpp:68)
==359707== 
==359707== 989 bytes in 43 blocks are definitely lost in loss record 2 of 2
==359707==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359707==    by 0x407554: ft_strjoin (get_next_line_utils.c:64)
==359707==    by 0x40738B: get_next_line (get_next_line.c:48)
==359707==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359707==    by 0x405B99: main (mandatory.cpp:68)
==359707== 
==359710== Invalid read of size 1
==359710==    at 0x407724: f_del_front_bn (get_next_line_utils.c:162)
==359710==    by 0x4073CD: get_next_line (get_next_line.c:52)
==359710==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359710==    by 0x405DC5: main (mandatory.cpp:73)
==359710==  Address 0x4de6870 is 0 bytes inside a block of size 44 free'd
==359710==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359710==    by 0x407702: f_search_bn (get_next_line_utils.c:118)
==359710==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359710==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359710==    by 0x405DC5: main (mandatory.cpp:73)
==359710==  Block was alloc'd at
==359710==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359710==    by 0x407554: ft_strjoin (get_next_line_utils.c:64)
==359710==    by 0x40738B: get_next_line (get_next_line.c:48)
==359710==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359710==    by 0x405DC5: main (mandatory.cpp:73)
==359710== 
==359710== Invalid read of size 1
==359710==    at 0x407503: ft_strlen (get_next_line_utils.c:43)
==359710==    by 0x407530: ft_strjoin (get_next_line_utils.c:59)
==359710==    by 0x40738B: get_next_line (get_next_line.c:48)
==359710==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359710==    by 0x405DD7: main (mandatory.cpp:73)
==359710==  Address 0x4de689b is 43 bytes inside a block of size 44 free'd
==359710==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359710==    by 0x407702: f_search_bn (get_next_line_utils.c:118)
==359710==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359710==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359710==    by 0x405DC5: main (mandatory.cpp:73)
==359710==  Block was alloc'd at
==359710==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359710==    by 0x407554: ft_strjoin (get_next_line_utils.c:64)
==359710==    by 0x40738B: get_next_line (get_next_line.c:48)
==359710==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359710==    by 0x405DC5: main (mandatory.cpp:73)
==359710== 
==359710== Invalid read of size 1
==359710==    at 0x4075AA: ft_strjoin (get_next_line_utils.c:68)
==359710==    by 0x40738B: get_next_line (get_next_line.c:48)
==359710==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359710==    by 0x405DD7: main (mandatory.cpp:73)
==359710==  Address 0x4de689b is 43 bytes inside a block of size 44 free'd
==359710==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359710==    by 0x407702: f_search_bn (get_next_line_utils.c:118)
==359710==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359710==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359710==    by 0x405DC5: main (mandatory.cpp:73)
==359710==  Block was alloc'd at
==359710==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359710==    by 0x407554: ft_strjoin (get_next_line_utils.c:64)
==359710==    by 0x40738B: get_next_line (get_next_line.c:48)
==359710==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359710==    by 0x405DC5: main (mandatory.cpp:73)
==359710== 
==359710== Invalid read of size 1
==359710==    at 0x484FBD4: strcmp (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359710==    by 0x402D0A: gnl(int, char const*) (gnl.cpp:24)
==359710==    by 0x405DD7: main (mandatory.cpp:73)
==359710==  Address 0x0 is not stack'd, malloc'd or (recently) free'd
==359710== 
==359710== 1 bytes in 1 blocks are definitely lost in loss record 1 of 3
==359710==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359710==    by 0x407364: get_next_line (get_next_line.c:43)
==359710==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359710==    by 0x405DC5: main (mandatory.cpp:73)
==359710== 
==359710== 2 bytes in 1 blocks are definitely lost in loss record 2 of 3
==359710==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359710==    by 0x407554: ft_strjoin (get_next_line_utils.c:64)
==359710==    by 0x40738B: get_next_line (get_next_line.c:48)
==359710==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359710==    by 0x405DD7: main (mandatory.cpp:73)
==359710== 
==359710== 945 bytes in 42 blocks are definitely lost in loss record 3 of 3
==359710==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359710==    by 0x407554: ft_strjoin (get_next_line_utils.c:64)
==359710==    by 0x40738B: get_next_line (get_next_line.c:48)
==359710==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359710==    by 0x405DC5: main (mandatory.cpp:73)
==359710== 
==359716== Invalid read of size 1
==359716==    at 0x407724: f_del_front_bn (get_next_line_utils.c:162)
==359716==    by 0x4073CD: get_next_line (get_next_line.c:52)
==359716==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359716==    by 0x406003: main (mandatory.cpp:79)
==359716==  Address 0x4de5c00 is 0 bytes inside a block of size 2 free'd
==359716==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359716==    by 0x407702: f_search_bn (get_next_line_utils.c:118)
==359716==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359716==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359716==    by 0x406003: main (mandatory.cpp:79)
==359716==  Block was alloc'd at
==359716==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359716==    by 0x407554: ft_strjoin (get_next_line_utils.c:64)
==359716==    by 0x40738B: get_next_line (get_next_line.c:48)
==359716==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359716==    by 0x406003: main (mandatory.cpp:79)
==359716== 
==359716== Invalid read of size 1
==359716==    at 0x407503: ft_strlen (get_next_line_utils.c:43)
==359716==    by 0x407530: ft_strjoin (get_next_line_utils.c:59)
==359716==    by 0x40738B: get_next_line (get_next_line.c:48)
==359716==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359716==    by 0x406015: main (mandatory.cpp:79)
==359716==  Address 0x4de5c01 is 1 bytes inside a block of size 2 free'd
==359716==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359716==    by 0x407702: f_search_bn (get_next_line_utils.c:118)
==359716==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359716==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359716==    by 0x406003: main (mandatory.cpp:79)
==359716==  Block was alloc'd at
==359716==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359716==    by 0x407554: ft_strjoin (get_next_line_utils.c:64)
==359716==    by 0x40738B: get_next_line (get_next_line.c:48)
==359716==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359716==    by 0x406003: main (mandatory.cpp:79)
==359716== 
==359716== Invalid read of size 1
==359716==    at 0x4075AA: ft_strjoin (get_next_line_utils.c:68)
==359716==    by 0x40738B: get_next_line (get_next_line.c:48)
==359716==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359716==    by 0x406015: main (mandatory.cpp:79)
==359716==  Address 0x4de5c01 is 1 bytes inside a block of size 2 free'd
==359716==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359716==    by 0x407702: f_search_bn (get_next_line_utils.c:118)
==359716==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359716==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359716==    by 0x406003: main (mandatory.cpp:79)
==359716==  Block was alloc'd at
==359716==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359716==    by 0x407554: ft_strjoin (get_next_line_utils.c:64)
==359716==    by 0x40738B: get_next_line (get_next_line.c:48)
==359716==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359716==    by 0x406003: main (mandatory.cpp:79)
==359716== 
==359716== Invalid read of size 1
==359716==    at 0x407724: f_del_front_bn (get_next_line_utils.c:162)
==359716==    by 0x4073CD: get_next_line (get_next_line.c:52)
==359716==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359716==    by 0x406015: main (mandatory.cpp:79)
==359716==  Address 0x4de5cf0 is 0 bytes inside a block of size 2 free'd
==359716==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359716==    by 0x407702: f_search_bn (get_next_line_utils.c:118)
==359716==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359716==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359716==    by 0x406015: main (mandatory.cpp:79)
==359716==  Block was alloc'd at
==359716==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359716==    by 0x407554: ft_strjoin (get_next_line_utils.c:64)
==359716==    by 0x40738B: get_next_line (get_next_line.c:48)
==359716==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359716==    by 0x406015: main (mandatory.cpp:79)
==359716== 
==359716== Invalid read of size 1
==359716==    at 0x4075AA: ft_strjoin (get_next_line_utils.c:68)
==359716==    by 0x40738B: get_next_line (get_next_line.c:48)
==359716==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359716==    by 0x406027: main (mandatory.cpp:79)
==359716==  Address 0x4de5cf1 is 1 bytes inside a block of size 2 free'd
==359716==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359716==    by 0x407702: f_search_bn (get_next_line_utils.c:118)
==359716==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359716==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359716==    by 0x406015: main (mandatory.cpp:79)
==359716==  Block was alloc'd at
==359716==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359716==    by 0x407554: ft_strjoin (get_next_line_utils.c:64)
==359716==    by 0x40738B: get_next_line (get_next_line.c:48)
==359716==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359716==    by 0x406015: main (mandatory.cpp:79)
==359716== 
==359716== Invalid read of size 1
==359716==    at 0x407724: f_del_front_bn (get_next_line_utils.c:162)
==359716==    by 0x4073CD: get_next_line (get_next_line.c:52)
==359716==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359716==    by 0x406027: main (mandatory.cpp:79)
==359716==  Address 0x4de5de0 is 0 bytes inside a block of size 2 free'd
==359716==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359716==    by 0x407702: f_search_bn (get_next_line_utils.c:118)
==359716==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359716==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359716==    by 0x406027: main (mandatory.cpp:79)
==359716==  Block was alloc'd at
==359716==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359716==    by 0x407554: ft_strjoin (get_next_line_utils.c:64)
==359716==    by 0x40738B: get_next_line (get_next_line.c:48)
==359716==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359716==    by 0x406027: main (mandatory.cpp:79)
==359716== 
==359716== Invalid read of size 1
==359716==    at 0x4075AA: ft_strjoin (get_next_line_utils.c:68)
==359716==    by 0x40738B: get_next_line (get_next_line.c:48)
==359716==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359716==    by 0x406039: main (mandatory.cpp:79)
==359716==  Address 0x4de5de1 is 1 bytes inside a block of size 2 free'd
==359716==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359716==    by 0x407702: f_search_bn (get_next_line_utils.c:118)
==359716==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359716==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359716==    by 0x406027: main (mandatory.cpp:79)
==359716==  Block was alloc'd at
==359716==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359716==    by 0x407554: ft_strjoin (get_next_line_utils.c:64)
==359716==    by 0x40738B: get_next_line (get_next_line.c:48)
==359716==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359716==    by 0x406027: main (mandatory.cpp:79)
==359716== 
==359716== Invalid read of size 1
==359716==    at 0x407724: f_del_front_bn (get_next_line_utils.c:162)
==359716==    by 0x4073CD: get_next_line (get_next_line.c:52)
==359716==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359716==    by 0x406039: main (mandatory.cpp:79)
==359716==  Address 0x4de5ed0 is 0 bytes inside a block of size 2 free'd
==359716==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359716==    by 0x407702: f_search_bn (get_next_line_utils.c:118)
==359716==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359716==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359716==    by 0x406039: main (mandatory.cpp:79)
==359716==  Block was alloc'd at
==359716==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359716==    by 0x407554: ft_strjoin (get_next_line_utils.c:64)
==359716==    by 0x40738B: get_next_line (get_next_line.c:48)
==359716==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359716==    by 0x406039: main (mandatory.cpp:79)
==359716== 
==359716== Invalid read of size 1
==359716==    at 0x4075AA: ft_strjoin (get_next_line_utils.c:68)
==359716==    by 0x40738B: get_next_line (get_next_line.c:48)
==359716==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359716==    by 0x40604B: main (mandatory.cpp:79)
==359716==  Address 0x4de5ed1 is 1 bytes inside a block of size 2 free'd
==359716==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359716==    by 0x407702: f_search_bn (get_next_line_utils.c:118)
==359716==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359716==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359716==    by 0x406039: main (mandatory.cpp:79)
==359716==  Block was alloc'd at
==359716==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359716==    by 0x407554: ft_strjoin (get_next_line_utils.c:64)
==359716==    by 0x40738B: get_next_line (get_next_line.c:48)
==359716==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359716==    by 0x406039: main (mandatory.cpp:79)
==359716== 
==359716== Invalid read of size 1
==359716==    at 0x407724: f_del_front_bn (get_next_line_utils.c:162)
==359716==    by 0x4073CD: get_next_line (get_next_line.c:52)
==359716==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359716==    by 0x40604B: main (mandatory.cpp:79)
==359716==  Address 0x4de5fc0 is 0 bytes inside a block of size 2 free'd
==359716==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359716==    by 0x407702: f_search_bn (get_next_line_utils.c:118)
==359716==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359716==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359716==    by 0x40604B: main (mandatory.cpp:79)
==359716==  Block was alloc'd at
==359716==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359716==    by 0x407554: ft_strjoin (get_next_line_utils.c:64)
==359716==    by 0x40738B: get_next_line (get_next_line.c:48)
==359716==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359716==    by 0x40604B: main (mandatory.cpp:79)
==359716== 
==359716== Invalid read of size 1
==359716==    at 0x4075AA: ft_strjoin (get_next_line_utils.c:68)
==359716==    by 0x40738B: get_next_line (get_next_line.c:48)
==359716==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359716==    by 0x406057: main (mandatory.cpp:79)
==359716==  Address 0x4de5fc1 is 1 bytes inside a block of size 2 free'd
==359716==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359716==    by 0x407702: f_search_bn (get_next_line_utils.c:118)
==359716==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359716==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359716==    by 0x40604B: main (mandatory.cpp:79)
==359716==  Block was alloc'd at
==359716==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359716==    by 0x407554: ft_strjoin (get_next_line_utils.c:64)
==359716==    by 0x40738B: get_next_line (get_next_line.c:48)
==359716==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359716==    by 0x40604B: main (mandatory.cpp:79)
==359716== 
==359716== 1 bytes in 1 blocks are definitely lost in loss record 1 of 1
==359716==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359716==    by 0x407364: get_next_line (get_next_line.c:43)
==359716==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359716==    by 0x406003: main (mandatory.cpp:79)
==359716== 
==359718== Invalid read of size 1
==359718==    at 0x407724: f_del_front_bn (get_next_line_utils.c:162)
==359718==    by 0x4073CD: get_next_line (get_next_line.c:52)
==359718==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359718==    by 0x406277: main (mandatory.cpp:88)
==359718==  Address 0x4de6e40 is 0 bytes inside a block of size 43 free'd
==359718==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359718==    by 0x407702: f_search_bn (get_next_line_utils.c:118)
==359718==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359718==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359718==    by 0x406277: main (mandatory.cpp:88)
==359718==  Block was alloc'd at
==359718==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359718==    by 0x407554: ft_strjoin (get_next_line_utils.c:64)
==359718==    by 0x40738B: get_next_line (get_next_line.c:48)
==359718==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359718==    by 0x406277: main (mandatory.cpp:88)
==359718== 
==359718== Invalid read of size 1
==359718==    at 0x407503: ft_strlen (get_next_line_utils.c:43)
==359718==    by 0x407530: ft_strjoin (get_next_line_utils.c:59)
==359718==    by 0x40738B: get_next_line (get_next_line.c:48)
==359718==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359718==    by 0x406289: main (mandatory.cpp:88)
==359718==  Address 0x4de6e6a is 42 bytes inside a block of size 43 free'd
==359718==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359718==    by 0x407702: f_search_bn (get_next_line_utils.c:118)
==359718==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359718==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359718==    by 0x406277: main (mandatory.cpp:88)
==359718==  Block was alloc'd at
==359718==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359718==    by 0x407554: ft_strjoin (get_next_line_utils.c:64)
==359718==    by 0x40738B: get_next_line (get_next_line.c:48)
==359718==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359718==    by 0x406277: main (mandatory.cpp:88)
==359718== 
==359718== Invalid read of size 1
==359718==    at 0x4075AA: ft_strjoin (get_next_line_utils.c:68)
==359718==    by 0x40738B: get_next_line (get_next_line.c:48)
==359718==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359718==    by 0x406289: main (mandatory.cpp:88)
==359718==  Address 0x4de6e6a is 42 bytes inside a block of size 43 free'd
==359718==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359718==    by 0x407702: f_search_bn (get_next_line_utils.c:118)
==359718==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359718==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359718==    by 0x406277: main (mandatory.cpp:88)
==359718==  Block was alloc'd at
==359718==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359718==    by 0x407554: ft_strjoin (get_next_line_utils.c:64)
==359718==    by 0x40738B: get_next_line (get_next_line.c:48)
==359718==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359718==    by 0x406277: main (mandatory.cpp:88)
==359718== 
==359718== Invalid read of size 1
==359718==    at 0x407724: f_del_front_bn (get_next_line_utils.c:162)
==359718==    by 0x4073CD: get_next_line (get_next_line.c:52)
==359718==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359718==    by 0x406289: main (mandatory.cpp:88)
==359718==  Address 0x4de7ef0 is 0 bytes inside a block of size 44 free'd
==359718==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359718==    by 0x407702: f_search_bn (get_next_line_utils.c:118)
==359718==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359718==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359718==    by 0x406289: main (mandatory.cpp:88)
==359718==  Block was alloc'd at
==359718==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359718==    by 0x407554: ft_strjoin (get_next_line_utils.c:64)
==359718==    by 0x40738B: get_next_line (get_next_line.c:48)
==359718==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359718==    by 0x406289: main (mandatory.cpp:88)
==359718== 
==359718== Invalid read of size 1
==359718==    at 0x4075AA: ft_strjoin (get_next_line_utils.c:68)
==359718==    by 0x40738B: get_next_line (get_next_line.c:48)
==359718==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359718==    by 0x40629B: main (mandatory.cpp:88)
==359718==  Address 0x4de7f1b is 43 bytes inside a block of size 44 free'd
==359718==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359718==    by 0x407702: f_search_bn (get_next_line_utils.c:118)
==359718==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359718==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359718==    by 0x406289: main (mandatory.cpp:88)
==359718==  Block was alloc'd at
==359718==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359718==    by 0x407554: ft_strjoin (get_next_line_utils.c:64)
==359718==    by 0x40738B: get_next_line (get_next_line.c:48)
==359718==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359718==    by 0x406289: main (mandatory.cpp:88)
==359718== 
==359718== Invalid read of size 1
==359718==    at 0x407724: f_del_front_bn (get_next_line_utils.c:162)
==359718==    by 0x4073CD: get_next_line (get_next_line.c:52)
==359718==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359718==    by 0x40629B: main (mandatory.cpp:88)
==359718==  Address 0x4de9010 is 0 bytes inside a block of size 45 free'd
==359718==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359718==    by 0x407702: f_search_bn (get_next_line_utils.c:118)
==359718==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359718==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359718==    by 0x40629B: main (mandatory.cpp:88)
==359718==  Block was alloc'd at
==359718==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359718==    by 0x407554: ft_strjoin (get_next_line_utils.c:64)
==359718==    by 0x40738B: get_next_line (get_next_line.c:48)
==359718==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359718==    by 0x40629B: main (mandatory.cpp:88)
==359718== 
==359718== Invalid read of size 1
==359718==    at 0x4075AA: ft_strjoin (get_next_line_utils.c:68)
==359718==    by 0x40738B: get_next_line (get_next_line.c:48)
==359718==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359718==    by 0x4062AD: main (mandatory.cpp:88)
==359718==  Address 0x4de903c is 44 bytes inside a block of size 45 free'd
==359718==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359718==    by 0x407702: f_search_bn (get_next_line_utils.c:118)
==359718==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359718==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359718==    by 0x40629B: main (mandatory.cpp:88)
==359718==  Block was alloc'd at
==359718==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359718==    by 0x407554: ft_strjoin (get_next_line_utils.c:64)
==359718==    by 0x40738B: get_next_line (get_next_line.c:48)
==359718==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359718==    by 0x40629B: main (mandatory.cpp:88)
==359718== 
==359718== Invalid read of size 1
==359718==    at 0x407724: f_del_front_bn (get_next_line_utils.c:162)
==359718==    by 0x4073CD: get_next_line (get_next_line.c:52)
==359718==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359718==    by 0x4062AD: main (mandatory.cpp:88)
==359718==  Address 0x4dea0c0 is 0 bytes inside a block of size 44 free'd
==359718==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359718==    by 0x407702: f_search_bn (get_next_line_utils.c:118)
==359718==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359718==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359718==    by 0x4062AD: main (mandatory.cpp:88)
==359718==  Block was alloc'd at
==359718==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359718==    by 0x407554: ft_strjoin (get_next_line_utils.c:64)
==359718==    by 0x40738B: get_next_line (get_next_line.c:48)
==359718==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359718==    by 0x4062AD: main (mandatory.cpp:88)
==359718== 
==359718== Invalid read of size 1
==359718==    at 0x4075AA: ft_strjoin (get_next_line_utils.c:68)
==359718==    by 0x40738B: get_next_line (get_next_line.c:48)
==359718==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359718==    by 0x4062BF: main (mandatory.cpp:88)
==359718==  Address 0x4dea0eb is 43 bytes inside a block of size 44 free'd
==359718==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359718==    by 0x407702: f_search_bn (get_next_line_utils.c:118)
==359718==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359718==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359718==    by 0x4062AD: main (mandatory.cpp:88)
==359718==  Block was alloc'd at
==359718==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359718==    by 0x407554: ft_strjoin (get_next_line_utils.c:64)
==359718==    by 0x40738B: get_next_line (get_next_line.c:48)
==359718==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359718==    by 0x4062AD: main (mandatory.cpp:88)
==359718== 
==359718== Invalid read of size 1
==359718==    at 0x484FBD4: strcmp (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359718==    by 0x402D0A: gnl(int, char const*) (gnl.cpp:24)
==359718==    by 0x4062BF: main (mandatory.cpp:88)
==359718==  Address 0x0 is not stack'd, malloc'd or (recently) free'd
==359718== 
==359718== 1 bytes in 1 blocks are definitely lost in loss record 1 of 6
==359718==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359718==    by 0x407364: get_next_line (get_next_line.c:43)
==359718==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359718==    by 0x406277: main (mandatory.cpp:88)
==359718== 
==359718== 902 bytes in 41 blocks are definitely lost in loss record 2 of 6
==359718==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359718==    by 0x407554: ft_strjoin (get_next_line_utils.c:64)
==359718==    by 0x40738B: get_next_line (get_next_line.c:48)
==359718==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359718==    by 0x406277: main (mandatory.cpp:88)
==359718== 
==359718== 902 bytes in 41 blocks are definitely lost in loss record 3 of 6
==359718==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359718==    by 0x407554: ft_strjoin (get_next_line_utils.c:64)
==359718==    by 0x40738B: get_next_line (get_next_line.c:48)
==359718==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359718==    by 0x4062BF: main (mandatory.cpp:88)
==359718== 
==359718== 945 bytes in 42 blocks are definitely lost in loss record 4 of 6
==359718==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359718==    by 0x407554: ft_strjoin (get_next_line_utils.c:64)
==359718==    by 0x40738B: get_next_line (get_next_line.c:48)
==359718==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359718==    by 0x406289: main (mandatory.cpp:88)
==359718== 
==359718== 945 bytes in 42 blocks are definitely lost in loss record 5 of 6
==359718==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359718==    by 0x407554: ft_strjoin (get_next_line_utils.c:64)
==359718==    by 0x40738B: get_next_line (get_next_line.c:48)
==359718==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359718==    by 0x4062AD: main (mandatory.cpp:88)
==359718== 
==359718== 989 bytes in 43 blocks are definitely lost in loss record 6 of 6
==359718==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359718==    by 0x407554: ft_strjoin (get_next_line_utils.c:64)
==359718==    by 0x40738B: get_next_line (get_next_line.c:48)
==359718==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359718==    by 0x40629B: main (mandatory.cpp:88)
==359718== 
==359721== Invalid read of size 1
==359721==    at 0x407724: f_del_front_bn (get_next_line_utils.c:162)
==359721==    by 0x4073CD: get_next_line (get_next_line.c:52)
==359721==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359721==    by 0x4064EB: main (mandatory.cpp:97)
==359721==  Address 0x4de7100 is 0 bytes inside a block of size 42 free'd
==359721==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359721==    by 0x407702: f_search_bn (get_next_line_utils.c:118)
==359721==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359721==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359721==    by 0x4064EB: main (mandatory.cpp:97)
==359721==  Block was alloc'd at
==359721==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359721==    by 0x407554: ft_strjoin (get_next_line_utils.c:64)
==359721==    by 0x40738B: get_next_line (get_next_line.c:48)
==359721==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359721==    by 0x4064EB: main (mandatory.cpp:97)
==359721== 
==359721== Invalid read of size 1
==359721==    at 0x407503: ft_strlen (get_next_line_utils.c:43)
==359721==    by 0x407530: ft_strjoin (get_next_line_utils.c:59)
==359721==    by 0x40738B: get_next_line (get_next_line.c:48)
==359721==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359721==    by 0x4064FD: main (mandatory.cpp:97)
==359721==  Address 0x4de7129 is 41 bytes inside a block of size 42 free'd
==359721==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359721==    by 0x407702: f_search_bn (get_next_line_utils.c:118)
==359721==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359721==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359721==    by 0x4064EB: main (mandatory.cpp:97)
==359721==  Block was alloc'd at
==359721==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359721==    by 0x407554: ft_strjoin (get_next_line_utils.c:64)
==359721==    by 0x40738B: get_next_line (get_next_line.c:48)
==359721==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359721==    by 0x4064EB: main (mandatory.cpp:97)
==359721== 
==359721== Invalid read of size 1
==359721==    at 0x4075AA: ft_strjoin (get_next_line_utils.c:68)
==359721==    by 0x40738B: get_next_line (get_next_line.c:48)
==359721==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359721==    by 0x4064FD: main (mandatory.cpp:97)
==359721==  Address 0x4de7129 is 41 bytes inside a block of size 42 free'd
==359721==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359721==    by 0x407702: f_search_bn (get_next_line_utils.c:118)
==359721==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359721==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359721==    by 0x4064EB: main (mandatory.cpp:97)
==359721==  Block was alloc'd at
==359721==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359721==    by 0x407554: ft_strjoin (get_next_line_utils.c:64)
==359721==    by 0x40738B: get_next_line (get_next_line.c:48)
==359721==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359721==    by 0x4064EB: main (mandatory.cpp:97)
==359721== 
==359721== Invalid read of size 1
==359721==    at 0x407724: f_del_front_bn (get_next_line_utils.c:162)
==359721==    by 0x4073CD: get_next_line (get_next_line.c:52)
==359721==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359721==    by 0x4064FD: main (mandatory.cpp:97)
==359721==  Address 0x4de8140 is 0 bytes inside a block of size 43 free'd
==359721==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359721==    by 0x407702: f_search_bn (get_next_line_utils.c:118)
==359721==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359721==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359721==    by 0x4064FD: main (mandatory.cpp:97)
==359721==  Block was alloc'd at
==359721==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359721==    by 0x407554: ft_strjoin (get_next_line_utils.c:64)
==359721==    by 0x40738B: get_next_line (get_next_line.c:48)
==359721==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359721==    by 0x4064FD: main (mandatory.cpp:97)
==359721== 
==359721== Invalid read of size 1
==359721==    at 0x4075AA: ft_strjoin (get_next_line_utils.c:68)
==359721==    by 0x40738B: get_next_line (get_next_line.c:48)
==359721==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359721==    by 0x40650F: main (mandatory.cpp:97)
==359721==  Address 0x4de816a is 42 bytes inside a block of size 43 free'd
==359721==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359721==    by 0x407702: f_search_bn (get_next_line_utils.c:118)
==359721==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359721==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359721==    by 0x4064FD: main (mandatory.cpp:97)
==359721==  Block was alloc'd at
==359721==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359721==    by 0x407554: ft_strjoin (get_next_line_utils.c:64)
==359721==    by 0x40738B: get_next_line (get_next_line.c:48)
==359721==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359721==    by 0x4064FD: main (mandatory.cpp:97)
==359721== 
==359721== Invalid read of size 1
==359721==    at 0x407724: f_del_front_bn (get_next_line_utils.c:162)
==359721==    by 0x4073CD: get_next_line (get_next_line.c:52)
==359721==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359721==    by 0x40650F: main (mandatory.cpp:97)
==359721==  Address 0x4de91f0 is 0 bytes inside a block of size 44 free'd
==359721==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359721==    by 0x407702: f_search_bn (get_next_line_utils.c:118)
==359721==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359721==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359721==    by 0x40650F: main (mandatory.cpp:97)
==359721==  Block was alloc'd at
==359721==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359721==    by 0x407554: ft_strjoin (get_next_line_utils.c:64)
==359721==    by 0x40738B: get_next_line (get_next_line.c:48)
==359721==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359721==    by 0x40650F: main (mandatory.cpp:97)
==359721== 
==359721== Invalid read of size 1
==359721==    at 0x4075AA: ft_strjoin (get_next_line_utils.c:68)
==359721==    by 0x40738B: get_next_line (get_next_line.c:48)
==359721==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359721==    by 0x406521: main (mandatory.cpp:97)
==359721==  Address 0x4de921b is 43 bytes inside a block of size 44 free'd
==359721==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359721==    by 0x407702: f_search_bn (get_next_line_utils.c:118)
==359721==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359721==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359721==    by 0x40650F: main (mandatory.cpp:97)
==359721==  Block was alloc'd at
==359721==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359721==    by 0x407554: ft_strjoin (get_next_line_utils.c:64)
==359721==    by 0x40738B: get_next_line (get_next_line.c:48)
==359721==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359721==    by 0x40650F: main (mandatory.cpp:97)
==359721== 
==359721== Invalid read of size 1
==359721==    at 0x407724: f_del_front_bn (get_next_line_utils.c:162)
==359721==    by 0x4073CD: get_next_line (get_next_line.c:52)
==359721==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359721==    by 0x406521: main (mandatory.cpp:97)
==359721==  Address 0x4dea230 is 0 bytes inside a block of size 43 free'd
==359721==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359721==    by 0x407702: f_search_bn (get_next_line_utils.c:118)
==359721==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359721==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359721==    by 0x406521: main (mandatory.cpp:97)
==359721==  Block was alloc'd at
==359721==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359721==    by 0x407554: ft_strjoin (get_next_line_utils.c:64)
==359721==    by 0x40738B: get_next_line (get_next_line.c:48)
==359721==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359721==    by 0x406521: main (mandatory.cpp:97)
==359721== 
==359721== Invalid read of size 1
==359721==    at 0x4075AA: ft_strjoin (get_next_line_utils.c:68)
==359721==    by 0x40738B: get_next_line (get_next_line.c:48)
==359721==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359721==    by 0x406533: main (mandatory.cpp:97)
==359721==  Address 0x4dea25a is 42 bytes inside a block of size 43 free'd
==359721==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359721==    by 0x407702: f_search_bn (get_next_line_utils.c:118)
==359721==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359721==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359721==    by 0x406521: main (mandatory.cpp:97)
==359721==  Block was alloc'd at
==359721==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359721==    by 0x407554: ft_strjoin (get_next_line_utils.c:64)
==359721==    by 0x40738B: get_next_line (get_next_line.c:48)
==359721==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359721==    by 0x406521: main (mandatory.cpp:97)
==359721== 
==359721== Invalid read of size 1
==359721==    at 0x407724: f_del_front_bn (get_next_line_utils.c:162)
==359721==    by 0x4073CD: get_next_line (get_next_line.c:52)
==359721==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359721==    by 0x406533: main (mandatory.cpp:97)
==359721==  Address 0x4deb200 is 0 bytes inside a block of size 42 free'd
==359721==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359721==    by 0x407702: f_search_bn (get_next_line_utils.c:118)
==359721==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359721==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359721==    by 0x406533: main (mandatory.cpp:97)
==359721==  Block was alloc'd at
==359721==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359721==    by 0x407554: ft_strjoin (get_next_line_utils.c:64)
==359721==    by 0x40738B: get_next_line (get_next_line.c:48)
==359721==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359721==    by 0x406533: main (mandatory.cpp:97)
==359721== 
==359721== Invalid read of size 1
==359721==    at 0x4075AA: ft_strjoin (get_next_line_utils.c:68)
==359721==    by 0x40738B: get_next_line (get_next_line.c:48)
==359721==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359721==    by 0x40653F: main (mandatory.cpp:97)
==359721==  Address 0x4deb229 is 41 bytes inside a block of size 42 free'd
==359721==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359721==    by 0x407702: f_search_bn (get_next_line_utils.c:118)
==359721==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359721==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359721==    by 0x406533: main (mandatory.cpp:97)
==359721==  Block was alloc'd at
==359721==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359721==    by 0x407554: ft_strjoin (get_next_line_utils.c:64)
==359721==    by 0x40738B: get_next_line (get_next_line.c:48)
==359721==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359721==    by 0x406533: main (mandatory.cpp:97)
==359721== 
==359721== 1 bytes in 1 blocks are definitely lost in loss record 1 of 6
==359721==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359721==    by 0x407364: get_next_line (get_next_line.c:43)
==359721==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359721==    by 0x4064EB: main (mandatory.cpp:97)
==359721== 
==359721== 860 bytes in 40 blocks are definitely lost in loss record 2 of 6
==359721==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359721==    by 0x407554: ft_strjoin (get_next_line_utils.c:64)
==359721==    by 0x40738B: get_next_line (get_next_line.c:48)
==359721==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359721==    by 0x4064EB: main (mandatory.cpp:97)
==359721== 
==359721== 860 bytes in 40 blocks are definitely lost in loss record 3 of 6
==359721==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359721==    by 0x407554: ft_strjoin (get_next_line_utils.c:64)
==359721==    by 0x40738B: get_next_line (get_next_line.c:48)
==359721==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359721==    by 0x406533: main (mandatory.cpp:97)
==359721== 
==359721== 902 bytes in 41 blocks are definitely lost in loss record 4 of 6
==359721==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359721==    by 0x407554: ft_strjoin (get_next_line_utils.c:64)
==359721==    by 0x40738B: get_next_line (get_next_line.c:48)
==359721==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359721==    by 0x4064FD: main (mandatory.cpp:97)
==359721== 
==359721== 902 bytes in 41 blocks are definitely lost in loss record 5 of 6
==359721==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359721==    by 0x407554: ft_strjoin (get_next_line_utils.c:64)
==359721==    by 0x40738B: get_next_line (get_next_line.c:48)
==359721==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359721==    by 0x406521: main (mandatory.cpp:97)
==359721== 
==359721== 945 bytes in 42 blocks are definitely lost in loss record 6 of 6
==359721==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359721==    by 0x407554: ft_strjoin (get_next_line_utils.c:64)
==359721==    by 0x40738B: get_next_line (get_next_line.c:48)
==359721==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359721==    by 0x40650F: main (mandatory.cpp:97)
==359721== 
==359722== Invalid read of size 1
==359722==    at 0x407724: f_del_front_bn (get_next_line_utils.c:162)
==359722==    by 0x4073CD: get_next_line (get_next_line.c:52)
==359722==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359722==    by 0x40675F: main (mandatory.cpp:106)
==359722==  Address 0x4de74a0 is 0 bytes inside a block of size 43 free'd
==359722==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359722==    by 0x407702: f_search_bn (get_next_line_utils.c:118)
==359722==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359722==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359722==    by 0x40675F: main (mandatory.cpp:106)
==359722==  Block was alloc'd at
==359722==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359722==    by 0x407554: ft_strjoin (get_next_line_utils.c:64)
==359722==    by 0x40738B: get_next_line (get_next_line.c:48)
==359722==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359722==    by 0x40675F: main (mandatory.cpp:106)
==359722== 
==359722== Invalid read of size 1
==359722==    at 0x407503: ft_strlen (get_next_line_utils.c:43)
==359722==    by 0x407530: ft_strjoin (get_next_line_utils.c:59)
==359722==    by 0x40738B: get_next_line (get_next_line.c:48)
==359722==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359722==    by 0x406771: main (mandatory.cpp:106)
==359722==  Address 0x4de74ca is 42 bytes inside a block of size 43 free'd
==359722==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359722==    by 0x407702: f_search_bn (get_next_line_utils.c:118)
==359722==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359722==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359722==    by 0x40675F: main (mandatory.cpp:106)
==359722==  Block was alloc'd at
==359722==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359722==    by 0x407554: ft_strjoin (get_next_line_utils.c:64)
==359722==    by 0x40738B: get_next_line (get_next_line.c:48)
==359722==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359722==    by 0x40675F: main (mandatory.cpp:106)
==359722== 
==359722== Invalid read of size 1
==359722==    at 0x4075AA: ft_strjoin (get_next_line_utils.c:68)
==359722==    by 0x40738B: get_next_line (get_next_line.c:48)
==359722==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359722==    by 0x406771: main (mandatory.cpp:106)
==359722==  Address 0x4de74ca is 42 bytes inside a block of size 43 free'd
==359722==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359722==    by 0x407702: f_search_bn (get_next_line_utils.c:118)
==359722==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359722==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359722==    by 0x40675F: main (mandatory.cpp:106)
==359722==  Block was alloc'd at
==359722==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359722==    by 0x407554: ft_strjoin (get_next_line_utils.c:64)
==359722==    by 0x40738B: get_next_line (get_next_line.c:48)
==359722==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359722==    by 0x40675F: main (mandatory.cpp:106)
==359722== 
==359722== Invalid read of size 1
==359722==    at 0x407724: f_del_front_bn (get_next_line_utils.c:162)
==359722==    by 0x4073CD: get_next_line (get_next_line.c:52)
==359722==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359722==    by 0x406771: main (mandatory.cpp:106)
==359722==  Address 0x4de75d0 is 0 bytes inside a block of size 2 free'd
==359722==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359722==    by 0x407702: f_search_bn (get_next_line_utils.c:118)
==359722==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359722==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359722==    by 0x406771: main (mandatory.cpp:106)
==359722==  Block was alloc'd at
==359722==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359722==    by 0x407554: ft_strjoin (get_next_line_utils.c:64)
==359722==    by 0x40738B: get_next_line (get_next_line.c:48)
==359722==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359722==    by 0x406771: main (mandatory.cpp:106)
==359722== 
==359722== Invalid read of size 1
==359722==    at 0x4075AA: ft_strjoin (get_next_line_utils.c:68)
==359722==    by 0x40738B: get_next_line (get_next_line.c:48)
==359722==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359722==    by 0x406783: main (mandatory.cpp:106)
==359722==  Address 0x4de75d1 is 1 bytes inside a block of size 2 free'd
==359722==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359722==    by 0x407702: f_search_bn (get_next_line_utils.c:118)
==359722==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359722==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359722==    by 0x406771: main (mandatory.cpp:106)
==359722==  Block was alloc'd at
==359722==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359722==    by 0x407554: ft_strjoin (get_next_line_utils.c:64)
==359722==    by 0x40738B: get_next_line (get_next_line.c:48)
==359722==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359722==    by 0x406771: main (mandatory.cpp:106)
==359722== 
==359722== Invalid read of size 1
==359722==    at 0x407724: f_del_front_bn (get_next_line_utils.c:162)
==359722==    by 0x4073CD: get_next_line (get_next_line.c:52)
==359722==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359722==    by 0x406783: main (mandatory.cpp:106)
==359722==  Address 0x4de8640 is 0 bytes inside a block of size 44 free'd
==359722==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359722==    by 0x407702: f_search_bn (get_next_line_utils.c:118)
==359722==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359722==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359722==    by 0x406783: main (mandatory.cpp:106)
==359722==  Block was alloc'd at
==359722==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359722==    by 0x407554: ft_strjoin (get_next_line_utils.c:64)
==359722==    by 0x40738B: get_next_line (get_next_line.c:48)
==359722==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359722==    by 0x406783: main (mandatory.cpp:106)
==359722== 
==359722== Invalid read of size 1
==359722==    at 0x4075AA: ft_strjoin (get_next_line_utils.c:68)
==359722==    by 0x40738B: get_next_line (get_next_line.c:48)
==359722==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359722==    by 0x406795: main (mandatory.cpp:106)
==359722==  Address 0x4de866b is 43 bytes inside a block of size 44 free'd
==359722==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359722==    by 0x407702: f_search_bn (get_next_line_utils.c:118)
==359722==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359722==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359722==    by 0x406783: main (mandatory.cpp:106)
==359722==  Block was alloc'd at
==359722==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359722==    by 0x407554: ft_strjoin (get_next_line_utils.c:64)
==359722==    by 0x40738B: get_next_line (get_next_line.c:48)
==359722==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359722==    by 0x406783: main (mandatory.cpp:106)
==359722== 
==359722== Invalid read of size 1
==359722==    at 0x407724: f_del_front_bn (get_next_line_utils.c:162)
==359722==    by 0x4073CD: get_next_line (get_next_line.c:52)
==359722==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359722==    by 0x406795: main (mandatory.cpp:106)
==359722==  Address 0x4de8770 is 0 bytes inside a block of size 2 free'd
==359722==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359722==    by 0x407702: f_search_bn (get_next_line_utils.c:118)
==359722==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359722==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359722==    by 0x406795: main (mandatory.cpp:106)
==359722==  Block was alloc'd at
==359722==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359722==    by 0x407554: ft_strjoin (get_next_line_utils.c:64)
==359722==    by 0x40738B: get_next_line (get_next_line.c:48)
==359722==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359722==    by 0x406795: main (mandatory.cpp:106)
==359722== 
==359722== Invalid read of size 1
==359722==    at 0x4075AA: ft_strjoin (get_next_line_utils.c:68)
==359722==    by 0x40738B: get_next_line (get_next_line.c:48)
==359722==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359722==    by 0x4067A7: main (mandatory.cpp:106)
==359722==  Address 0x4de8771 is 1 bytes inside a block of size 2 free'd
==359722==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359722==    by 0x407702: f_search_bn (get_next_line_utils.c:118)
==359722==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359722==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359722==    by 0x406795: main (mandatory.cpp:106)
==359722==  Block was alloc'd at
==359722==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359722==    by 0x407554: ft_strjoin (get_next_line_utils.c:64)
==359722==    by 0x40738B: get_next_line (get_next_line.c:48)
==359722==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359722==    by 0x406795: main (mandatory.cpp:106)
==359722== 
==359722== Invalid read of size 1
==359722==    at 0x407724: f_del_front_bn (get_next_line_utils.c:162)
==359722==    by 0x4073CD: get_next_line (get_next_line.c:52)
==359722==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359722==    by 0x4067A7: main (mandatory.cpp:106)
==359722==  Address 0x4de9850 is 0 bytes inside a block of size 45 free'd
==359722==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359722==    by 0x407702: f_search_bn (get_next_line_utils.c:118)
==359722==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359722==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359722==    by 0x4067A7: main (mandatory.cpp:106)
==359722==  Block was alloc'd at
==359722==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359722==    by 0x407554: ft_strjoin (get_next_line_utils.c:64)
==359722==    by 0x40738B: get_next_line (get_next_line.c:48)
==359722==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359722==    by 0x4067A7: main (mandatory.cpp:106)
==359722== 
==359722== Invalid read of size 1
==359722==    at 0x4075AA: ft_strjoin (get_next_line_utils.c:68)
==359722==    by 0x40738B: get_next_line (get_next_line.c:48)
==359722==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359722==    by 0x4067B9: main (mandatory.cpp:106)
==359722==  Address 0x4de987c is 44 bytes inside a block of size 45 free'd
==359722==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359722==    by 0x407702: f_search_bn (get_next_line_utils.c:118)
==359722==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359722==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359722==    by 0x4067A7: main (mandatory.cpp:106)
==359722==  Block was alloc'd at
==359722==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359722==    by 0x407554: ft_strjoin (get_next_line_utils.c:64)
==359722==    by 0x40738B: get_next_line (get_next_line.c:48)
==359722==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359722==    by 0x4067A7: main (mandatory.cpp:106)
==359722== 
==359722== Invalid read of size 1
==359722==    at 0x407724: f_del_front_bn (get_next_line_utils.c:162)
==359722==    by 0x4073CD: get_next_line (get_next_line.c:52)
==359722==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359722==    by 0x4067B9: main (mandatory.cpp:106)
==359722==  Address 0x4de9980 is 0 bytes inside a block of size 2 free'd
==359722==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359722==    by 0x407702: f_search_bn (get_next_line_utils.c:118)
==359722==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359722==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359722==    by 0x4067B9: main (mandatory.cpp:106)
==359722==  Block was alloc'd at
==359722==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359722==    by 0x407554: ft_strjoin (get_next_line_utils.c:64)
==359722==    by 0x40738B: get_next_line (get_next_line.c:48)
==359722==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359722==    by 0x4067B9: main (mandatory.cpp:106)
==359722== 
==359722== Invalid read of size 1
==359722==    at 0x4075AA: ft_strjoin (get_next_line_utils.c:68)
==359722==    by 0x40738B: get_next_line (get_next_line.c:48)
==359722==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359722==    by 0x4067CB: main (mandatory.cpp:106)
==359722==  Address 0x4de9981 is 1 bytes inside a block of size 2 free'd
==359722==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359722==    by 0x407702: f_search_bn (get_next_line_utils.c:118)
==359722==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359722==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359722==    by 0x4067B9: main (mandatory.cpp:106)
==359722==  Block was alloc'd at
==359722==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359722==    by 0x407554: ft_strjoin (get_next_line_utils.c:64)
==359722==    by 0x40738B: get_next_line (get_next_line.c:48)
==359722==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359722==    by 0x4067B9: main (mandatory.cpp:106)
==359722== 
==359722== Invalid read of size 1
==359722==    at 0x407724: f_del_front_bn (get_next_line_utils.c:162)
==359722==    by 0x4073CD: get_next_line (get_next_line.c:52)
==359722==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359722==    by 0x4067CB: main (mandatory.cpp:106)
==359722==  Address 0x4dea9f0 is 0 bytes inside a block of size 44 free'd
==359722==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359722==    by 0x407702: f_search_bn (get_next_line_utils.c:118)
==359722==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359722==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359722==    by 0x4067CB: main (mandatory.cpp:106)
==359722==  Block was alloc'd at
==359722==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359722==    by 0x407554: ft_strjoin (get_next_line_utils.c:64)
==359722==    by 0x40738B: get_next_line (get_next_line.c:48)
==359722==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359722==    by 0x4067CB: main (mandatory.cpp:106)
==359722== 
==359722== Invalid read of size 1
==359722==    at 0x4075AA: ft_strjoin (get_next_line_utils.c:68)
==359722==    by 0x40738B: get_next_line (get_next_line.c:48)
==359722==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359722==    by 0x4067DD: main (mandatory.cpp:106)
==359722==  Address 0x4deaa1b is 43 bytes inside a block of size 44 free'd
==359722==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359722==    by 0x407702: f_search_bn (get_next_line_utils.c:118)
==359722==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359722==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359722==    by 0x4067CB: main (mandatory.cpp:106)
==359722==  Block was alloc'd at
==359722==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359722==    by 0x407554: ft_strjoin (get_next_line_utils.c:64)
==359722==    by 0x40738B: get_next_line (get_next_line.c:48)
==359722==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359722==    by 0x4067CB: main (mandatory.cpp:106)
==359722== 
==359722== Invalid read of size 1
==359722==    at 0x407724: f_del_front_bn (get_next_line_utils.c:162)
==359722==    by 0x4073CD: get_next_line (get_next_line.c:52)
==359722==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359722==    by 0x4067DD: main (mandatory.cpp:106)
==359722==  Address 0x4deab20 is 0 bytes inside a block of size 2 free'd
==359722==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359722==    by 0x407702: f_search_bn (get_next_line_utils.c:118)
==359722==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359722==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359722==    by 0x4067DD: main (mandatory.cpp:106)
==359722==  Block was alloc'd at
==359722==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359722==    by 0x407554: ft_strjoin (get_next_line_utils.c:64)
==359722==    by 0x40738B: get_next_line (get_next_line.c:48)
==359722==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359722==    by 0x4067DD: main (mandatory.cpp:106)
==359722== 
==359722== Invalid read of size 1
==359722==    at 0x4075AA: ft_strjoin (get_next_line_utils.c:68)
==359722==    by 0x40738B: get_next_line (get_next_line.c:48)
==359722==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359722==    by 0x4067EF: main (mandatory.cpp:106)
==359722==  Address 0x4deab21 is 1 bytes inside a block of size 2 free'd
==359722==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359722==    by 0x407702: f_search_bn (get_next_line_utils.c:118)
==359722==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359722==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359722==    by 0x4067DD: main (mandatory.cpp:106)
==359722==  Block was alloc'd at
==359722==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359722==    by 0x407554: ft_strjoin (get_next_line_utils.c:64)
==359722==    by 0x40738B: get_next_line (get_next_line.c:48)
==359722==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359722==    by 0x4067DD: main (mandatory.cpp:106)
==359722== 
==359722== Invalid read of size 1
==359722==    at 0x484FBD4: strcmp (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359722==    by 0x402D0A: gnl(int, char const*) (gnl.cpp:24)
==359722==    by 0x4067EF: main (mandatory.cpp:106)
==359722==  Address 0x0 is not stack'd, malloc'd or (recently) free'd
==359722== 
==359722== 1 bytes in 1 blocks are definitely lost in loss record 1 of 6
==359722==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359722==    by 0x407364: get_next_line (get_next_line.c:43)
==359722==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359722==    by 0x40675F: main (mandatory.cpp:106)
==359722== 
==359722== 902 bytes in 41 blocks are definitely lost in loss record 2 of 6
==359722==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359722==    by 0x407554: ft_strjoin (get_next_line_utils.c:64)
==359722==    by 0x40738B: get_next_line (get_next_line.c:48)
==359722==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359722==    by 0x40675F: main (mandatory.cpp:106)
==359722== 
==359722== 902 bytes in 41 blocks are definitely lost in loss record 3 of 6
==359722==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359722==    by 0x407554: ft_strjoin (get_next_line_utils.c:64)
==359722==    by 0x40738B: get_next_line (get_next_line.c:48)
==359722==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359722==    by 0x4067EF: main (mandatory.cpp:106)
==359722== 
==359722== 945 bytes in 42 blocks are definitely lost in loss record 4 of 6
==359722==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359722==    by 0x407554: ft_strjoin (get_next_line_utils.c:64)
==359722==    by 0x40738B: get_next_line (get_next_line.c:48)
==359722==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359722==    by 0x406783: main (mandatory.cpp:106)
==359722== 
==359722== 945 bytes in 42 blocks are definitely lost in loss record 5 of 6
==359722==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359722==    by 0x407554: ft_strjoin (get_next_line_utils.c:64)
==359722==    by 0x40738B: get_next_line (get_next_line.c:48)
==359722==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359722==    by 0x4067CB: main (mandatory.cpp:106)
==359722== 
==359722== 989 bytes in 43 blocks are definitely lost in loss record 6 of 6
==359722==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359722==    by 0x407554: ft_strjoin (get_next_line_utils.c:64)
==359722==    by 0x40738B: get_next_line (get_next_line.c:48)
==359722==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359722==    by 0x4067A7: main (mandatory.cpp:106)
==359722== 
==359725== Invalid read of size 1
==359725==    at 0x407724: f_del_front_bn (get_next_line_utils.c:162)
==359725==    by 0x4073CD: get_next_line (get_next_line.c:52)
==359725==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359725==    by 0x406A1B: main (mandatory.cpp:119)
==359725==  Address 0x4de77d0 is 0 bytes inside a block of size 43 free'd
==359725==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359725==    by 0x407702: f_search_bn (get_next_line_utils.c:118)
==359725==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359725==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359725==    by 0x406A1B: main (mandatory.cpp:119)
==359725==  Block was alloc'd at
==359725==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359725==    by 0x407554: ft_strjoin (get_next_line_utils.c:64)
==359725==    by 0x40738B: get_next_line (get_next_line.c:48)
==359725==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359725==    by 0x406A1B: main (mandatory.cpp:119)
==359725== 
==359725== Invalid read of size 1
==359725==    at 0x407503: ft_strlen (get_next_line_utils.c:43)
==359725==    by 0x407530: ft_strjoin (get_next_line_utils.c:59)
==359725==    by 0x40738B: get_next_line (get_next_line.c:48)
==359725==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359725==    by 0x406A2D: main (mandatory.cpp:119)
==359725==  Address 0x4de77fa is 42 bytes inside a block of size 43 free'd
==359725==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359725==    by 0x407702: f_search_bn (get_next_line_utils.c:118)
==359725==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359725==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359725==    by 0x406A1B: main (mandatory.cpp:119)
==359725==  Block was alloc'd at
==359725==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359725==    by 0x407554: ft_strjoin (get_next_line_utils.c:64)
==359725==    by 0x40738B: get_next_line (get_next_line.c:48)
==359725==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359725==    by 0x406A1B: main (mandatory.cpp:119)
==359725== 
==359725== Invalid read of size 1
==359725==    at 0x4075AA: ft_strjoin (get_next_line_utils.c:68)
==359725==    by 0x40738B: get_next_line (get_next_line.c:48)
==359725==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359725==    by 0x406A2D: main (mandatory.cpp:119)
==359725==  Address 0x4de77fa is 42 bytes inside a block of size 43 free'd
==359725==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359725==    by 0x407702: f_search_bn (get_next_line_utils.c:118)
==359725==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359725==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359725==    by 0x406A1B: main (mandatory.cpp:119)
==359725==  Block was alloc'd at
==359725==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359725==    by 0x407554: ft_strjoin (get_next_line_utils.c:64)
==359725==    by 0x40738B: get_next_line (get_next_line.c:48)
==359725==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359725==    by 0x406A1B: main (mandatory.cpp:119)
==359725== 
==359725== Invalid read of size 1
==359725==    at 0x407724: f_del_front_bn (get_next_line_utils.c:162)
==359725==    by 0x4073CD: get_next_line (get_next_line.c:52)
==359725==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359725==    by 0x406A2D: main (mandatory.cpp:119)
==359725==  Address 0x4de7900 is 0 bytes inside a block of size 2 free'd
==359725==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359725==    by 0x407702: f_search_bn (get_next_line_utils.c:118)
==359725==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359725==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359725==    by 0x406A2D: main (mandatory.cpp:119)
==359725==  Block was alloc'd at
==359725==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359725==    by 0x407554: ft_strjoin (get_next_line_utils.c:64)
==359725==    by 0x40738B: get_next_line (get_next_line.c:48)
==359725==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359725==    by 0x406A2D: main (mandatory.cpp:119)
==359725== 
==359725== Invalid read of size 1
==359725==    at 0x4075AA: ft_strjoin (get_next_line_utils.c:68)
==359725==    by 0x40738B: get_next_line (get_next_line.c:48)
==359725==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359725==    by 0x406A3F: main (mandatory.cpp:119)
==359725==  Address 0x4de7901 is 1 bytes inside a block of size 2 free'd
==359725==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359725==    by 0x407702: f_search_bn (get_next_line_utils.c:118)
==359725==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359725==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359725==    by 0x406A2D: main (mandatory.cpp:119)
==359725==  Block was alloc'd at
==359725==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359725==    by 0x407554: ft_strjoin (get_next_line_utils.c:64)
==359725==    by 0x40738B: get_next_line (get_next_line.c:48)
==359725==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359725==    by 0x406A2D: main (mandatory.cpp:119)
==359725== 
==359725== Invalid read of size 1
==359725==    at 0x407724: f_del_front_bn (get_next_line_utils.c:162)
==359725==    by 0x4073CD: get_next_line (get_next_line.c:52)
==359725==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359725==    by 0x406A3F: main (mandatory.cpp:119)
==359725==  Address 0x4de8970 is 0 bytes inside a block of size 44 free'd
==359725==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359725==    by 0x407702: f_search_bn (get_next_line_utils.c:118)
==359725==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359725==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359725==    by 0x406A3F: main (mandatory.cpp:119)
==359725==  Block was alloc'd at
==359725==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359725==    by 0x407554: ft_strjoin (get_next_line_utils.c:64)
==359725==    by 0x40738B: get_next_line (get_next_line.c:48)
==359725==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359725==    by 0x406A3F: main (mandatory.cpp:119)
==359725== 
==359725== Invalid read of size 1
==359725==    at 0x4075AA: ft_strjoin (get_next_line_utils.c:68)
==359725==    by 0x40738B: get_next_line (get_next_line.c:48)
==359725==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359725==    by 0x406A51: main (mandatory.cpp:119)
==359725==  Address 0x4de899b is 43 bytes inside a block of size 44 free'd
==359725==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359725==    by 0x407702: f_search_bn (get_next_line_utils.c:118)
==359725==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359725==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359725==    by 0x406A3F: main (mandatory.cpp:119)
==359725==  Block was alloc'd at
==359725==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359725==    by 0x407554: ft_strjoin (get_next_line_utils.c:64)
==359725==    by 0x40738B: get_next_line (get_next_line.c:48)
==359725==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359725==    by 0x406A3F: main (mandatory.cpp:119)
==359725== 
==359725== Invalid read of size 1
==359725==    at 0x407724: f_del_front_bn (get_next_line_utils.c:162)
==359725==    by 0x4073CD: get_next_line (get_next_line.c:52)
==359725==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359725==    by 0x406A51: main (mandatory.cpp:119)
==359725==  Address 0x4de8aa0 is 0 bytes inside a block of size 2 free'd
==359725==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359725==    by 0x407702: f_search_bn (get_next_line_utils.c:118)
==359725==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359725==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359725==    by 0x406A51: main (mandatory.cpp:119)
==359725==  Block was alloc'd at
==359725==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359725==    by 0x407554: ft_strjoin (get_next_line_utils.c:64)
==359725==    by 0x40738B: get_next_line (get_next_line.c:48)
==359725==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359725==    by 0x406A51: main (mandatory.cpp:119)
==359725== 
==359725== Invalid read of size 1
==359725==    at 0x4075AA: ft_strjoin (get_next_line_utils.c:68)
==359725==    by 0x40738B: get_next_line (get_next_line.c:48)
==359725==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359725==    by 0x406A63: main (mandatory.cpp:119)
==359725==  Address 0x4de8aa1 is 1 bytes inside a block of size 2 free'd
==359725==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359725==    by 0x407702: f_search_bn (get_next_line_utils.c:118)
==359725==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359725==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359725==    by 0x406A51: main (mandatory.cpp:119)
==359725==  Block was alloc'd at
==359725==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359725==    by 0x407554: ft_strjoin (get_next_line_utils.c:64)
==359725==    by 0x40738B: get_next_line (get_next_line.c:48)
==359725==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359725==    by 0x406A51: main (mandatory.cpp:119)
==359725== 
==359725== Invalid read of size 1
==359725==    at 0x407724: f_del_front_bn (get_next_line_utils.c:162)
==359725==    by 0x4073CD: get_next_line (get_next_line.c:52)
==359725==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359725==    by 0x406A63: main (mandatory.cpp:119)
==359725==  Address 0x4de9b80 is 0 bytes inside a block of size 45 free'd
==359725==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359725==    by 0x407702: f_search_bn (get_next_line_utils.c:118)
==359725==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359725==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359725==    by 0x406A63: main (mandatory.cpp:119)
==359725==  Block was alloc'd at
==359725==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359725==    by 0x407554: ft_strjoin (get_next_line_utils.c:64)
==359725==    by 0x40738B: get_next_line (get_next_line.c:48)
==359725==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359725==    by 0x406A63: main (mandatory.cpp:119)
==359725== 
==359725== Invalid read of size 1
==359725==    at 0x4075AA: ft_strjoin (get_next_line_utils.c:68)
==359725==    by 0x40738B: get_next_line (get_next_line.c:48)
==359725==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359725==    by 0x406A75: main (mandatory.cpp:119)
==359725==  Address 0x4de9bac is 44 bytes inside a block of size 45 free'd
==359725==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359725==    by 0x407702: f_search_bn (get_next_line_utils.c:118)
==359725==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359725==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359725==    by 0x406A63: main (mandatory.cpp:119)
==359725==  Block was alloc'd at
==359725==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359725==    by 0x407554: ft_strjoin (get_next_line_utils.c:64)
==359725==    by 0x40738B: get_next_line (get_next_line.c:48)
==359725==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359725==    by 0x406A63: main (mandatory.cpp:119)
==359725== 
==359725== Invalid read of size 1
==359725==    at 0x407724: f_del_front_bn (get_next_line_utils.c:162)
==359725==    by 0x4073CD: get_next_line (get_next_line.c:52)
==359725==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359725==    by 0x406A75: main (mandatory.cpp:119)
==359725==  Address 0x4de9cb0 is 0 bytes inside a block of size 2 free'd
==359725==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359725==    by 0x407702: f_search_bn (get_next_line_utils.c:118)
==359725==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359725==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359725==    by 0x406A75: main (mandatory.cpp:119)
==359725==  Block was alloc'd at
==359725==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359725==    by 0x407554: ft_strjoin (get_next_line_utils.c:64)
==359725==    by 0x40738B: get_next_line (get_next_line.c:48)
==359725==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359725==    by 0x406A75: main (mandatory.cpp:119)
==359725== 
==359725== Invalid read of size 1
==359725==    at 0x4075AA: ft_strjoin (get_next_line_utils.c:68)
==359725==    by 0x40738B: get_next_line (get_next_line.c:48)
==359725==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359725==    by 0x406A87: main (mandatory.cpp:119)
==359725==  Address 0x4de9cb1 is 1 bytes inside a block of size 2 free'd
==359725==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359725==    by 0x407702: f_search_bn (get_next_line_utils.c:118)
==359725==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359725==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359725==    by 0x406A75: main (mandatory.cpp:119)
==359725==  Block was alloc'd at
==359725==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359725==    by 0x407554: ft_strjoin (get_next_line_utils.c:64)
==359725==    by 0x40738B: get_next_line (get_next_line.c:48)
==359725==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359725==    by 0x406A75: main (mandatory.cpp:119)
==359725== 
==359725== Invalid read of size 1
==359725==    at 0x407724: f_del_front_bn (get_next_line_utils.c:162)
==359725==    by 0x4073CD: get_next_line (get_next_line.c:52)
==359725==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359725==    by 0x406A87: main (mandatory.cpp:119)
==359725==  Address 0x4dead20 is 0 bytes inside a block of size 44 free'd
==359725==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359725==    by 0x407702: f_search_bn (get_next_line_utils.c:118)
==359725==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359725==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359725==    by 0x406A87: main (mandatory.cpp:119)
==359725==  Block was alloc'd at
==359725==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359725==    by 0x407554: ft_strjoin (get_next_line_utils.c:64)
==359725==    by 0x40738B: get_next_line (get_next_line.c:48)
==359725==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359725==    by 0x406A87: main (mandatory.cpp:119)
==359725== 
==359725== Invalid read of size 1
==359725==    at 0x4075AA: ft_strjoin (get_next_line_utils.c:68)
==359725==    by 0x40738B: get_next_line (get_next_line.c:48)
==359725==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359725==    by 0x406A99: main (mandatory.cpp:119)
==359725==  Address 0x4dead4b is 43 bytes inside a block of size 44 free'd
==359725==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359725==    by 0x407702: f_search_bn (get_next_line_utils.c:118)
==359725==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359725==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359725==    by 0x406A87: main (mandatory.cpp:119)
==359725==  Block was alloc'd at
==359725==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359725==    by 0x407554: ft_strjoin (get_next_line_utils.c:64)
==359725==    by 0x40738B: get_next_line (get_next_line.c:48)
==359725==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359725==    by 0x406A87: main (mandatory.cpp:119)
==359725== 
==359725== Invalid read of size 1
==359725==    at 0x407724: f_del_front_bn (get_next_line_utils.c:162)
==359725==    by 0x4073CD: get_next_line (get_next_line.c:52)
==359725==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359725==    by 0x406A99: main (mandatory.cpp:119)
==359725==  Address 0x4deae50 is 0 bytes inside a block of size 2 free'd
==359725==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359725==    by 0x407702: f_search_bn (get_next_line_utils.c:118)
==359725==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359725==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359725==    by 0x406A99: main (mandatory.cpp:119)
==359725==  Block was alloc'd at
==359725==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359725==    by 0x407554: ft_strjoin (get_next_line_utils.c:64)
==359725==    by 0x40738B: get_next_line (get_next_line.c:48)
==359725==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359725==    by 0x406A99: main (mandatory.cpp:119)
==359725== 
==359725== Invalid read of size 1
==359725==    at 0x4075AA: ft_strjoin (get_next_line_utils.c:68)
==359725==    by 0x40738B: get_next_line (get_next_line.c:48)
==359725==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359725==    by 0x406AAB: main (mandatory.cpp:119)
==359725==  Address 0x4deae51 is 1 bytes inside a block of size 2 free'd
==359725==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359725==    by 0x407702: f_search_bn (get_next_line_utils.c:118)
==359725==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359725==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359725==    by 0x406A99: main (mandatory.cpp:119)
==359725==  Block was alloc'd at
==359725==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359725==    by 0x407554: ft_strjoin (get_next_line_utils.c:64)
==359725==    by 0x40738B: get_next_line (get_next_line.c:48)
==359725==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359725==    by 0x406A99: main (mandatory.cpp:119)
==359725== 
==359725== Invalid read of size 1
==359725==    at 0x407724: f_del_front_bn (get_next_line_utils.c:162)
==359725==    by 0x4073CD: get_next_line (get_next_line.c:52)
==359725==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359725==    by 0x406AAB: main (mandatory.cpp:119)
==359725==  Address 0x4debe50 is 0 bytes inside a block of size 43 free'd
==359725==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359725==    by 0x407702: f_search_bn (get_next_line_utils.c:118)
==359725==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359725==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359725==    by 0x406AAB: main (mandatory.cpp:119)
==359725==  Block was alloc'd at
==359725==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359725==    by 0x407554: ft_strjoin (get_next_line_utils.c:64)
==359725==    by 0x40738B: get_next_line (get_next_line.c:48)
==359725==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359725==    by 0x406AAB: main (mandatory.cpp:119)
==359725== 
==359725== Invalid read of size 1
==359725==    at 0x4075AA: ft_strjoin (get_next_line_utils.c:68)
==359725==    by 0x40738B: get_next_line (get_next_line.c:48)
==359725==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359725==    by 0x406AB7: main (mandatory.cpp:119)
==359725==  Address 0x4debe7a is 42 bytes inside a block of size 43 free'd
==359725==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359725==    by 0x407702: f_search_bn (get_next_line_utils.c:118)
==359725==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359725==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359725==    by 0x406AAB: main (mandatory.cpp:119)
==359725==  Block was alloc'd at
==359725==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359725==    by 0x407554: ft_strjoin (get_next_line_utils.c:64)
==359725==    by 0x40738B: get_next_line (get_next_line.c:48)
==359725==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359725==    by 0x406AAB: main (mandatory.cpp:119)
==359725== 
==359725== 1 bytes in 1 blocks are definitely lost in loss record 1 of 6
==359725==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359725==    by 0x407364: get_next_line (get_next_line.c:43)
==359725==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359725==    by 0x406A1B: main (mandatory.cpp:119)
==359725== 
==359725== 902 bytes in 41 blocks are definitely lost in loss record 2 of 6
==359725==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359725==    by 0x407554: ft_strjoin (get_next_line_utils.c:64)
==359725==    by 0x40738B: get_next_line (get_next_line.c:48)
==359725==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359725==    by 0x406A1B: main (mandatory.cpp:119)
==359725== 
==359725== 902 bytes in 41 blocks are definitely lost in loss record 3 of 6
==359725==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359725==    by 0x407554: ft_strjoin (get_next_line_utils.c:64)
==359725==    by 0x40738B: get_next_line (get_next_line.c:48)
==359725==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359725==    by 0x406AAB: main (mandatory.cpp:119)
==359725== 
==359725== 945 bytes in 42 blocks are definitely lost in loss record 4 of 6
==359725==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359725==    by 0x407554: ft_strjoin (get_next_line_utils.c:64)
==359725==    by 0x40738B: get_next_line (get_next_line.c:48)
==359725==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359725==    by 0x406A3F: main (mandatory.cpp:119)
==359725== 
==359725== 945 bytes in 42 blocks are definitely lost in loss record 5 of 6
==359725==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359725==    by 0x407554: ft_strjoin (get_next_line_utils.c:64)
==359725==    by 0x40738B: get_next_line (get_next_line.c:48)
==359725==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359725==    by 0x406A87: main (mandatory.cpp:119)
==359725== 
==359725== 989 bytes in 43 blocks are definitely lost in loss record 6 of 6
==359725==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359725==    by 0x407554: ft_strjoin (get_next_line_utils.c:64)
==359725==    by 0x40738B: get_next_line (get_next_line.c:48)
==359725==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359725==    by 0x406A63: main (mandatory.cpp:119)
==359725== 
==359735== Invalid read of size 1
==359735==    at 0x407724: f_del_front_bn (get_next_line_utils.c:162)
==359735==    by 0x4073CD: get_next_line (get_next_line.c:52)
==359735==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359735==    by 0x40712E: main (mandatory.cpp:141)
==359735==  Address 0x4de7df0 is 0 bytes inside a block of size 43 free'd
==359735==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359735==    by 0x407702: f_search_bn (get_next_line_utils.c:118)
==359735==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359735==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359735==    by 0x40712E: main (mandatory.cpp:141)
==359735==  Block was alloc'd at
==359735==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359735==    by 0x407554: ft_strjoin (get_next_line_utils.c:64)
==359735==    by 0x40738B: get_next_line (get_next_line.c:48)
==359735==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359735==    by 0x40712E: main (mandatory.cpp:141)
==359735== 
==359735== Invalid read of size 1
==359735==    at 0x407503: ft_strlen (get_next_line_utils.c:43)
==359735==    by 0x407530: ft_strjoin (get_next_line_utils.c:59)
==359735==    by 0x40738B: get_next_line (get_next_line.c:48)
==359735==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359735==    by 0x40713F: main (mandatory.cpp:141)
==359735==  Address 0x4de7e1a is 42 bytes inside a block of size 43 free'd
==359735==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359735==    by 0x407702: f_search_bn (get_next_line_utils.c:118)
==359735==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359735==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359735==    by 0x40712E: main (mandatory.cpp:141)
==359735==  Block was alloc'd at
==359735==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359735==    by 0x407554: ft_strjoin (get_next_line_utils.c:64)
==359735==    by 0x40738B: get_next_line (get_next_line.c:48)
==359735==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359735==    by 0x40712E: main (mandatory.cpp:141)
==359735== 
==359735== Invalid read of size 1
==359735==    at 0x4075AA: ft_strjoin (get_next_line_utils.c:68)
==359735==    by 0x40738B: get_next_line (get_next_line.c:48)
==359735==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359735==    by 0x40713F: main (mandatory.cpp:141)
==359735==  Address 0x4de7e1a is 42 bytes inside a block of size 43 free'd
==359735==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359735==    by 0x407702: f_search_bn (get_next_line_utils.c:118)
==359735==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359735==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359735==    by 0x40712E: main (mandatory.cpp:141)
==359735==  Block was alloc'd at
==359735==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359735==    by 0x407554: ft_strjoin (get_next_line_utils.c:64)
==359735==    by 0x40738B: get_next_line (get_next_line.c:48)
==359735==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359735==    by 0x40712E: main (mandatory.cpp:141)
==359735== 
==359735== Invalid read of size 1
==359735==    at 0x407724: f_del_front_bn (get_next_line_utils.c:162)
==359735==    by 0x4073CD: get_next_line (get_next_line.c:52)
==359735==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359735==    by 0x40713F: main (mandatory.cpp:141)
==359735==  Address 0x4de7f20 is 0 bytes inside a block of size 2 free'd
==359735==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359735==    by 0x407702: f_search_bn (get_next_line_utils.c:118)
==359735==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359735==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359735==    by 0x40713F: main (mandatory.cpp:141)
==359735==  Block was alloc'd at
==359735==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359735==    by 0x407554: ft_strjoin (get_next_line_utils.c:64)
==359735==    by 0x40738B: get_next_line (get_next_line.c:48)
==359735==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359735==    by 0x40713F: main (mandatory.cpp:141)
==359735== 
==359735== Invalid read of size 1
==359735==    at 0x4075AA: ft_strjoin (get_next_line_utils.c:68)
==359735==    by 0x40738B: get_next_line (get_next_line.c:48)
==359735==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359735==    by 0x407150: main (mandatory.cpp:141)
==359735==  Address 0x4de7f21 is 1 bytes inside a block of size 2 free'd
==359735==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359735==    by 0x407702: f_search_bn (get_next_line_utils.c:118)
==359735==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359735==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359735==    by 0x40713F: main (mandatory.cpp:141)
==359735==  Block was alloc'd at
==359735==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359735==    by 0x407554: ft_strjoin (get_next_line_utils.c:64)
==359735==    by 0x40738B: get_next_line (get_next_line.c:48)
==359735==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359735==    by 0x40713F: main (mandatory.cpp:141)
==359735== 
==359735== Invalid read of size 1
==359735==    at 0x407724: f_del_front_bn (get_next_line_utils.c:162)
==359735==    by 0x4073CD: get_next_line (get_next_line.c:52)
==359735==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359735==    by 0x407150: main (mandatory.cpp:141)
==359735==  Address 0x4de8f90 is 0 bytes inside a block of size 44 free'd
==359735==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359735==    by 0x407702: f_search_bn (get_next_line_utils.c:118)
==359735==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359735==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359735==    by 0x407150: main (mandatory.cpp:141)
==359735==  Block was alloc'd at
==359735==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359735==    by 0x407554: ft_strjoin (get_next_line_utils.c:64)
==359735==    by 0x40738B: get_next_line (get_next_line.c:48)
==359735==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359735==    by 0x407150: main (mandatory.cpp:141)
==359735== 
==359735== Invalid read of size 1
==359735==    at 0x4075AA: ft_strjoin (get_next_line_utils.c:68)
==359735==    by 0x40738B: get_next_line (get_next_line.c:48)
==359735==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359735==    by 0x407161: main (mandatory.cpp:141)
==359735==  Address 0x4de8fbb is 43 bytes inside a block of size 44 free'd
==359735==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359735==    by 0x407702: f_search_bn (get_next_line_utils.c:118)
==359735==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359735==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359735==    by 0x407150: main (mandatory.cpp:141)
==359735==  Block was alloc'd at
==359735==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359735==    by 0x407554: ft_strjoin (get_next_line_utils.c:64)
==359735==    by 0x40738B: get_next_line (get_next_line.c:48)
==359735==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359735==    by 0x407150: main (mandatory.cpp:141)
==359735== 
==359735== Invalid read of size 1
==359735==    at 0x407724: f_del_front_bn (get_next_line_utils.c:162)
==359735==    by 0x4073CD: get_next_line (get_next_line.c:52)
==359735==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359735==    by 0x407161: main (mandatory.cpp:141)
==359735==  Address 0x4de90c0 is 0 bytes inside a block of size 2 free'd
==359735==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359735==    by 0x407702: f_search_bn (get_next_line_utils.c:118)
==359735==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359735==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359735==    by 0x407161: main (mandatory.cpp:141)
==359735==  Block was alloc'd at
==359735==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359735==    by 0x407554: ft_strjoin (get_next_line_utils.c:64)
==359735==    by 0x40738B: get_next_line (get_next_line.c:48)
==359735==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359735==    by 0x407161: main (mandatory.cpp:141)
==359735== 
==359735== Invalid read of size 1
==359735==    at 0x4075AA: ft_strjoin (get_next_line_utils.c:68)
==359735==    by 0x40738B: get_next_line (get_next_line.c:48)
==359735==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359735==    by 0x407172: main (mandatory.cpp:141)
==359735==  Address 0x4de90c1 is 1 bytes inside a block of size 2 free'd
==359735==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359735==    by 0x407702: f_search_bn (get_next_line_utils.c:118)
==359735==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359735==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359735==    by 0x407161: main (mandatory.cpp:141)
==359735==  Block was alloc'd at
==359735==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359735==    by 0x407554: ft_strjoin (get_next_line_utils.c:64)
==359735==    by 0x40738B: get_next_line (get_next_line.c:48)
==359735==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359735==    by 0x407161: main (mandatory.cpp:141)
==359735== 
==359735== Invalid read of size 1
==359735==    at 0x407724: f_del_front_bn (get_next_line_utils.c:162)
==359735==    by 0x4073CD: get_next_line (get_next_line.c:52)
==359735==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359735==    by 0x407172: main (mandatory.cpp:141)
==359735==  Address 0x4dea1a0 is 0 bytes inside a block of size 45 free'd
==359735==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359735==    by 0x407702: f_search_bn (get_next_line_utils.c:118)
==359735==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359735==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359735==    by 0x407172: main (mandatory.cpp:141)
==359735==  Block was alloc'd at
==359735==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359735==    by 0x407554: ft_strjoin (get_next_line_utils.c:64)
==359735==    by 0x40738B: get_next_line (get_next_line.c:48)
==359735==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359735==    by 0x407172: main (mandatory.cpp:141)
==359735== 
==359735== Invalid read of size 1
==359735==    at 0x4075AA: ft_strjoin (get_next_line_utils.c:68)
==359735==    by 0x40738B: get_next_line (get_next_line.c:48)
==359735==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359735==    by 0x407183: main (mandatory.cpp:141)
==359735==  Address 0x4dea1cc is 44 bytes inside a block of size 45 free'd
==359735==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359735==    by 0x407702: f_search_bn (get_next_line_utils.c:118)
==359735==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359735==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359735==    by 0x407172: main (mandatory.cpp:141)
==359735==  Block was alloc'd at
==359735==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359735==    by 0x407554: ft_strjoin (get_next_line_utils.c:64)
==359735==    by 0x40738B: get_next_line (get_next_line.c:48)
==359735==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359735==    by 0x407172: main (mandatory.cpp:141)
==359735== 
==359735== Invalid read of size 1
==359735==    at 0x407724: f_del_front_bn (get_next_line_utils.c:162)
==359735==    by 0x4073CD: get_next_line (get_next_line.c:52)
==359735==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359735==    by 0x407183: main (mandatory.cpp:141)
==359735==  Address 0x4dea2d0 is 0 bytes inside a block of size 2 free'd
==359735==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359735==    by 0x407702: f_search_bn (get_next_line_utils.c:118)
==359735==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359735==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359735==    by 0x407183: main (mandatory.cpp:141)
==359735==  Block was alloc'd at
==359735==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359735==    by 0x407554: ft_strjoin (get_next_line_utils.c:64)
==359735==    by 0x40738B: get_next_line (get_next_line.c:48)
==359735==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359735==    by 0x407183: main (mandatory.cpp:141)
==359735== 
==359735== Invalid read of size 1
==359735==    at 0x4075AA: ft_strjoin (get_next_line_utils.c:68)
==359735==    by 0x40738B: get_next_line (get_next_line.c:48)
==359735==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359735==    by 0x407194: main (mandatory.cpp:141)
==359735==  Address 0x4dea2d1 is 1 bytes inside a block of size 2 free'd
==359735==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359735==    by 0x407702: f_search_bn (get_next_line_utils.c:118)
==359735==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359735==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359735==    by 0x407183: main (mandatory.cpp:141)
==359735==  Block was alloc'd at
==359735==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359735==    by 0x407554: ft_strjoin (get_next_line_utils.c:64)
==359735==    by 0x40738B: get_next_line (get_next_line.c:48)
==359735==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359735==    by 0x407183: main (mandatory.cpp:141)
==359735== 
==359735== Invalid read of size 1
==359735==    at 0x407724: f_del_front_bn (get_next_line_utils.c:162)
==359735==    by 0x4073CD: get_next_line (get_next_line.c:52)
==359735==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359735==    by 0x407194: main (mandatory.cpp:141)
==359735==  Address 0x4deb340 is 0 bytes inside a block of size 44 free'd
==359735==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359735==    by 0x407702: f_search_bn (get_next_line_utils.c:118)
==359735==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359735==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359735==    by 0x407194: main (mandatory.cpp:141)
==359735==  Block was alloc'd at
==359735==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359735==    by 0x407554: ft_strjoin (get_next_line_utils.c:64)
==359735==    by 0x40738B: get_next_line (get_next_line.c:48)
==359735==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359735==    by 0x407194: main (mandatory.cpp:141)
==359735== 
==359735== Invalid read of size 1
==359735==    at 0x4075AA: ft_strjoin (get_next_line_utils.c:68)
==359735==    by 0x40738B: get_next_line (get_next_line.c:48)
==359735==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359735==    by 0x4071A5: main (mandatory.cpp:141)
==359735==  Address 0x4deb36b is 43 bytes inside a block of size 44 free'd
==359735==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359735==    by 0x407702: f_search_bn (get_next_line_utils.c:118)
==359735==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359735==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359735==    by 0x407194: main (mandatory.cpp:141)
==359735==  Block was alloc'd at
==359735==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359735==    by 0x407554: ft_strjoin (get_next_line_utils.c:64)
==359735==    by 0x40738B: get_next_line (get_next_line.c:48)
==359735==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359735==    by 0x407194: main (mandatory.cpp:141)
==359735== 
==359735== Invalid read of size 1
==359735==    at 0x407724: f_del_front_bn (get_next_line_utils.c:162)
==359735==    by 0x4073CD: get_next_line (get_next_line.c:52)
==359735==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359735==    by 0x4071A5: main (mandatory.cpp:141)
==359735==  Address 0x4deb470 is 0 bytes inside a block of size 2 free'd
==359735==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359735==    by 0x407702: f_search_bn (get_next_line_utils.c:118)
==359735==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359735==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359735==    by 0x4071A5: main (mandatory.cpp:141)
==359735==  Block was alloc'd at
==359735==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359735==    by 0x407554: ft_strjoin (get_next_line_utils.c:64)
==359735==    by 0x40738B: get_next_line (get_next_line.c:48)
==359735==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359735==    by 0x4071A5: main (mandatory.cpp:141)
==359735== 
==359735== Invalid read of size 1
==359735==    at 0x4075AA: ft_strjoin (get_next_line_utils.c:68)
==359735==    by 0x40738B: get_next_line (get_next_line.c:48)
==359735==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359735==    by 0x4071B6: main (mandatory.cpp:141)
==359735==  Address 0x4deb471 is 1 bytes inside a block of size 2 free'd
==359735==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359735==    by 0x407702: f_search_bn (get_next_line_utils.c:118)
==359735==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359735==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359735==    by 0x4071A5: main (mandatory.cpp:141)
==359735==  Block was alloc'd at
==359735==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359735==    by 0x407554: ft_strjoin (get_next_line_utils.c:64)
==359735==    by 0x40738B: get_next_line (get_next_line.c:48)
==359735==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359735==    by 0x4071A5: main (mandatory.cpp:141)
==359735== 
==359735== Invalid read of size 1
==359735==    at 0x407724: f_del_front_bn (get_next_line_utils.c:162)
==359735==    by 0x4073CD: get_next_line (get_next_line.c:52)
==359735==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359735==    by 0x4071B6: main (mandatory.cpp:141)
==359735==  Address 0x4dec470 is 0 bytes inside a block of size 43 free'd
==359735==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359735==    by 0x407702: f_search_bn (get_next_line_utils.c:118)
==359735==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359735==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359735==    by 0x4071B6: main (mandatory.cpp:141)
==359735==  Block was alloc'd at
==359735==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359735==    by 0x407554: ft_strjoin (get_next_line_utils.c:64)
==359735==    by 0x40738B: get_next_line (get_next_line.c:48)
==359735==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359735==    by 0x4071B6: main (mandatory.cpp:141)
==359735== 
==359735== Invalid read of size 1
==359735==    at 0x4075AA: ft_strjoin (get_next_line_utils.c:68)
==359735==    by 0x40738B: get_next_line (get_next_line.c:48)
==359735==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359735==    by 0x4071C1: main (mandatory.cpp:141)
==359735==  Address 0x4dec49a is 42 bytes inside a block of size 43 free'd
==359735==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359735==    by 0x407702: f_search_bn (get_next_line_utils.c:118)
==359735==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359735==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359735==    by 0x4071B6: main (mandatory.cpp:141)
==359735==  Block was alloc'd at
==359735==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359735==    by 0x407554: ft_strjoin (get_next_line_utils.c:64)
==359735==    by 0x40738B: get_next_line (get_next_line.c:48)
==359735==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359735==    by 0x4071B6: main (mandatory.cpp:141)
==359735== 
==359735== 1 bytes in 1 blocks are definitely lost in loss record 1 of 6
==359735==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359735==    by 0x407364: get_next_line (get_next_line.c:43)
==359735==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359735==    by 0x40712E: main (mandatory.cpp:141)
==359735== 
==359735== 902 bytes in 41 blocks are definitely lost in loss record 2 of 6
==359735==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359735==    by 0x407554: ft_strjoin (get_next_line_utils.c:64)
==359735==    by 0x40738B: get_next_line (get_next_line.c:48)
==359735==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359735==    by 0x40712E: main (mandatory.cpp:141)
==359735== 
==359735== 902 bytes in 41 blocks are definitely lost in loss record 3 of 6
==359735==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359735==    by 0x407554: ft_strjoin (get_next_line_utils.c:64)
==359735==    by 0x40738B: get_next_line (get_next_line.c:48)
==359735==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359735==    by 0x4071B6: main (mandatory.cpp:141)
==359735== 
==359735== 945 bytes in 42 blocks are definitely lost in loss record 4 of 6
==359735==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359735==    by 0x407554: ft_strjoin (get_next_line_utils.c:64)
==359735==    by 0x40738B: get_next_line (get_next_line.c:48)
==359735==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359735==    by 0x407150: main (mandatory.cpp:141)
==359735== 
==359735== 945 bytes in 42 blocks are definitely lost in loss record 5 of 6
==359735==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359735==    by 0x407554: ft_strjoin (get_next_line_utils.c:64)
==359735==    by 0x40738B: get_next_line (get_next_line.c:48)
==359735==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359735==    by 0x407194: main (mandatory.cpp:141)
==359735== 
==359735== 989 bytes in 43 blocks are definitely lost in loss record 6 of 6
==359735==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359735==    by 0x407554: ft_strjoin (get_next_line_utils.c:64)
==359735==    by 0x40738B: get_next_line (get_next_line.c:48)
==359735==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359735==    by 0x407172: main (mandatory.cpp:141)
==359735== 
==359767== Invalid write of size 1
==359767==    at 0x40737E: get_next_line (get_next_line.c:38)
==359767==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359767==    by 0x404BC6: main (mandatory.cpp:25)
==359767==  Address 0x4de329f is 1 bytes before a block of size 43 alloc'd
==359767==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359767==    by 0x40732E: get_next_line (get_next_line.c:27)
==359767==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359767==    by 0x404BC6: main (mandatory.cpp:25)
==359767== 
==359767== Conditional jump or move depends on uninitialised value(s)
==359767==    at 0x40753A: ft_strlen (get_next_line_utils.c:43)
==359767==    by 0x407570: ft_strjoin (get_next_line_utils.c:59)
==359767==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359767==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359767==    by 0x404BC6: main (mandatory.cpp:25)
==359767== 
==359767== Conditional jump or move depends on uninitialised value(s)
==359767==    at 0x40762D: ft_strjoin (get_next_line_utils.c:75)
==359767==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359767==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359767==    by 0x404BC6: main (mandatory.cpp:25)
==359767== 
==359767== Invalid write of size 1
==359767==    at 0x40737E: get_next_line (get_next_line.c:38)
==359767==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359767==    by 0x404BE8: main (mandatory.cpp:25)
==359767==  Address 0x4de43ef is 1 bytes before a block of size 43 alloc'd
==359767==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359767==    by 0x40732E: get_next_line (get_next_line.c:27)
==359767==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359767==    by 0x404BE8: main (mandatory.cpp:25)
==359767== 
==359767== Conditional jump or move depends on uninitialised value(s)
==359767==    at 0x40762D: ft_strjoin (get_next_line_utils.c:75)
==359767==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359767==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359767==    by 0x404BE8: main (mandatory.cpp:25)
==359767== 
==359767== 1 bytes in 1 blocks are definitely lost in loss record 2 of 5
==359767==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359767==    by 0x407396: get_next_line (get_next_line.c:43)
==359767==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359767==    by 0x404BC6: main (mandatory.cpp:25)
==359767== 
==359767== 1 bytes in 1 blocks are definitely lost in loss record 3 of 5
==359767==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359767==    by 0x407586: ft_strjoin (get_next_line_utils.c:64)
==359767==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359767==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359767==    by 0x404BC6: main (mandatory.cpp:25)
==359767== 
==359767== 43 bytes in 1 blocks are definitely lost in loss record 4 of 5
==359767==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359767==    by 0x40732E: get_next_line (get_next_line.c:27)
==359767==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359767==    by 0x404BC6: main (mandatory.cpp:25)
==359767== 
==359767== 43 bytes in 1 blocks are definitely lost in loss record 5 of 5
==359767==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359767==    by 0x40732E: get_next_line (get_next_line.c:27)
==359767==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359767==    by 0x404BE8: main (mandatory.cpp:25)
==359767== 
==359774== Invalid read of size 1
==359774==    at 0x407535: ft_strlen (get_next_line_utils.c:43)
==359774==    by 0x407562: ft_strjoin (get_next_line_utils.c:59)
==359774==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359774==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359774==    by 0x404E6F: main (mandatory.cpp:31)
==359774==  Address 0x4de46b0 is 0 bytes inside a block of size 1 free'd
==359774==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359774==    by 0x407471: get_next_line (get_next_line.c:67)
==359774==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359774==    by 0x404E63: main (mandatory.cpp:31)
==359774==  Block was alloc'd at
==359774==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359774==    by 0x407586: ft_strjoin (get_next_line_utils.c:64)
==359774==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359774==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359774==    by 0x404E63: main (mandatory.cpp:31)
==359774== 
==359774== Invalid read of size 1
==359774==    at 0x4075DC: ft_strjoin (get_next_line_utils.c:68)
==359774==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359774==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359774==    by 0x404E6F: main (mandatory.cpp:31)
==359774==  Address 0x4de46b0 is 0 bytes inside a block of size 1 free'd
==359774==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359774==    by 0x407471: get_next_line (get_next_line.c:67)
==359774==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359774==    by 0x404E63: main (mandatory.cpp:31)
==359774==  Block was alloc'd at
==359774==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359774==    by 0x407586: ft_strjoin (get_next_line_utils.c:64)
==359774==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359774==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359774==    by 0x404E63: main (mandatory.cpp:31)
==359774== 
==359774== 1 bytes in 1 blocks are definitely lost in loss record 1 of 1
==359774==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359774==    by 0x407396: get_next_line (get_next_line.c:43)
==359774==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359774==    by 0x404E63: main (mandatory.cpp:31)
==359774== 
==359775== Invalid read of size 1
==359775==    at 0x407756: f_del_front_bn (get_next_line_utils.c:162)
==359775==    by 0x4073FF: get_next_line (get_next_line.c:52)
==359775==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359775==    by 0x40508F: main (mandatory.cpp:36)
==359775==  Address 0x4de46b0 is 0 bytes inside a block of size 2 free'd
==359775==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359775==    by 0x407734: f_search_bn (get_next_line_utils.c:118)
==359775==    by 0x4073EC: get_next_line (get_next_line.c:51)
==359775==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359775==    by 0x40508F: main (mandatory.cpp:36)
==359775==  Block was alloc'd at
==359775==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359775==    by 0x407586: ft_strjoin (get_next_line_utils.c:64)
==359775==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359775==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359775==    by 0x40508F: main (mandatory.cpp:36)
==359775== 
==359775== Invalid read of size 1
==359775==    at 0x407535: ft_strlen (get_next_line_utils.c:43)
==359775==    by 0x407562: ft_strjoin (get_next_line_utils.c:59)
==359775==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359775==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359775==    by 0x40509B: main (mandatory.cpp:36)
==359775==  Address 0x4de46b1 is 1 bytes inside a block of size 2 free'd
==359775==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359775==    by 0x407734: f_search_bn (get_next_line_utils.c:118)
==359775==    by 0x4073EC: get_next_line (get_next_line.c:51)
==359775==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359775==    by 0x40508F: main (mandatory.cpp:36)
==359775==  Block was alloc'd at
==359775==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359775==    by 0x407586: ft_strjoin (get_next_line_utils.c:64)
==359775==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359775==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359775==    by 0x40508F: main (mandatory.cpp:36)
==359775== 
==359775== Invalid read of size 1
==359775==    at 0x4075DC: ft_strjoin (get_next_line_utils.c:68)
==359775==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359775==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359775==    by 0x40509B: main (mandatory.cpp:36)
==359775==  Address 0x4de46b1 is 1 bytes inside a block of size 2 free'd
==359775==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359775==    by 0x407734: f_search_bn (get_next_line_utils.c:118)
==359775==    by 0x4073EC: get_next_line (get_next_line.c:51)
==359775==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359775==    by 0x40508F: main (mandatory.cpp:36)
==359775==  Block was alloc'd at
==359775==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359775==    by 0x407586: ft_strjoin (get_next_line_utils.c:64)
==359775==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359775==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359775==    by 0x40508F: main (mandatory.cpp:36)
==359775== 
==359775== 1 bytes in 1 blocks are definitely lost in loss record 1 of 1
==359775==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359775==    by 0x407396: get_next_line (get_next_line.c:43)
==359775==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359775==    by 0x40508F: main (mandatory.cpp:36)
==359775== 
==359778== Invalid write of size 1
==359778==    at 0x4077F9: f_last_line (get_next_line_utils.c:209)
==359778==    by 0x407432: get_next_line (get_next_line.c:59)
==359778==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359778==    by 0x4052BB: main (mandatory.cpp:41)
==359778==  Address 0x4de4a59 is 0 bytes after a block of size 41 alloc'd
==359778==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359778==    by 0x407799: f_last_line (get_next_line_utils.c:199)
==359778==    by 0x407432: get_next_line (get_next_line.c:59)
==359778==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359778==    by 0x4052BB: main (mandatory.cpp:41)
==359778== 
==359778== Invalid read of size 1
==359778==    at 0x484FBE8: strcmp (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359778==    by 0x402D0A: gnl(int, char const*) (gnl.cpp:24)
==359778==    by 0x4052BB: main (mandatory.cpp:41)
==359778==  Address 0x4de4a59 is 0 bytes after a block of size 41 alloc'd
==359778==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359778==    by 0x407799: f_last_line (get_next_line_utils.c:199)
==359778==    by 0x407432: get_next_line (get_next_line.c:59)
==359778==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359778==    by 0x4052BB: main (mandatory.cpp:41)
==359778== 
==359778== 1 bytes in 1 blocks are definitely lost in loss record 1 of 2
==359778==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359778==    by 0x407396: get_next_line (get_next_line.c:43)
==359778==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359778==    by 0x4052BB: main (mandatory.cpp:41)
==359778== 
==359778== 42 bytes in 1 blocks are definitely lost in loss record 2 of 2
==359778==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359778==    by 0x407586: ft_strjoin (get_next_line_utils.c:64)
==359778==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359778==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359778==    by 0x4052BB: main (mandatory.cpp:41)
==359778== 
==359788== Invalid read of size 1
==359788==    at 0x407756: f_del_front_bn (get_next_line_utils.c:162)
==359788==    by 0x4073FF: get_next_line (get_next_line.c:52)
==359788==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359788==    by 0x4054E7: main (mandatory.cpp:46)
==359788==  Address 0x4de4cd0 is 0 bytes inside a block of size 43 free'd
==359788==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359788==    by 0x407734: f_search_bn (get_next_line_utils.c:118)
==359788==    by 0x4073EC: get_next_line (get_next_line.c:51)
==359788==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359788==    by 0x4054E7: main (mandatory.cpp:46)
==359788==  Block was alloc'd at
==359788==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359788==    by 0x407586: ft_strjoin (get_next_line_utils.c:64)
==359788==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359788==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359788==    by 0x4054E7: main (mandatory.cpp:46)
==359788== 
==359788== Invalid read of size 1
==359788==    at 0x407535: ft_strlen (get_next_line_utils.c:43)
==359788==    by 0x407562: ft_strjoin (get_next_line_utils.c:59)
==359788==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359788==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359788==    by 0x4054F9: main (mandatory.cpp:46)
==359788==  Address 0x4de4cf9 is 41 bytes inside a block of size 43 free'd
==359788==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359788==    by 0x407734: f_search_bn (get_next_line_utils.c:118)
==359788==    by 0x4073EC: get_next_line (get_next_line.c:51)
==359788==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359788==    by 0x4054E7: main (mandatory.cpp:46)
==359788==  Block was alloc'd at
==359788==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359788==    by 0x407586: ft_strjoin (get_next_line_utils.c:64)
==359788==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359788==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359788==    by 0x4054E7: main (mandatory.cpp:46)
==359788== 
==359788== Invalid read of size 1
==359788==    at 0x4075DC: ft_strjoin (get_next_line_utils.c:68)
==359788==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359788==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359788==    by 0x4054F9: main (mandatory.cpp:46)
==359788==  Address 0x4de4cf9 is 41 bytes inside a block of size 43 free'd
==359788==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359788==    by 0x407734: f_search_bn (get_next_line_utils.c:118)
==359788==    by 0x4073EC: get_next_line (get_next_line.c:51)
==359788==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359788==    by 0x4054E7: main (mandatory.cpp:46)
==359788==  Block was alloc'd at
==359788==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359788==    by 0x407586: ft_strjoin (get_next_line_utils.c:64)
==359788==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359788==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359788==    by 0x4054E7: main (mandatory.cpp:46)
==359788== 
==359788== Invalid read of size 1
==359788==    at 0x4075BF: ft_strjoin (get_next_line_utils.c:70)
==359788==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359788==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359788==    by 0x4054F9: main (mandatory.cpp:46)
==359788==  Address 0x4de4cf9 is 41 bytes inside a block of size 43 free'd
==359788==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359788==    by 0x407734: f_search_bn (get_next_line_utils.c:118)
==359788==    by 0x4073EC: get_next_line (get_next_line.c:51)
==359788==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359788==    by 0x4054E7: main (mandatory.cpp:46)
==359788==  Block was alloc'd at
==359788==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359788==    by 0x407586: ft_strjoin (get_next_line_utils.c:64)
==359788==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359788==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359788==    by 0x4054E7: main (mandatory.cpp:46)
==359788== 
==359788== Invalid read of size 1
==359788==    at 0x484FBD4: strcmp (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359788==    by 0x402D0A: gnl(int, char const*) (gnl.cpp:24)
==359788==    by 0x4054F9: main (mandatory.cpp:46)
==359788==  Address 0x0 is not stack'd, malloc'd or (recently) free'd
==359788== 
==359788== 1 bytes in 1 blocks are definitely lost in loss record 1 of 1
==359788==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359788==    by 0x407396: get_next_line (get_next_line.c:43)
==359788==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359788==    by 0x4054E7: main (mandatory.cpp:46)
==359788== 
==359792== Invalid read of size 1
==359792==    at 0x484FBD4: strcmp (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359792==    by 0x402D0A: gnl(int, char const*) (gnl.cpp:24)
==359792==    by 0x405725: main (mandatory.cpp:52)
==359792==  Address 0x0 is not stack'd, malloc'd or (recently) free'd
==359792== 
==359792== 1 bytes in 1 blocks are definitely lost in loss record 1 of 2
==359792==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359792==    by 0x407396: get_next_line (get_next_line.c:43)
==359792==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359792==    by 0x405725: main (mandatory.cpp:52)
==359792== 
==359792== 43 bytes in 1 blocks are definitely lost in loss record 2 of 2
==359792==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359792==    by 0x407586: ft_strjoin (get_next_line_utils.c:64)
==359792==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359792==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359792==    by 0x405725: main (mandatory.cpp:52)
==359792== 
==359798== Invalid read of size 1
==359798==    at 0x407756: f_del_front_bn (get_next_line_utils.c:162)
==359798==    by 0x4073FF: get_next_line (get_next_line.c:52)
==359798==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359798==    by 0x405951: main (mandatory.cpp:57)
==359798==  Address 0x4de52f0 is 0 bytes inside a block of size 43 free'd
==359798==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359798==    by 0x407734: f_search_bn (get_next_line_utils.c:118)
==359798==    by 0x4073EC: get_next_line (get_next_line.c:51)
==359798==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359798==    by 0x405951: main (mandatory.cpp:57)
==359798==  Block was alloc'd at
==359798==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359798==    by 0x407586: ft_strjoin (get_next_line_utils.c:64)
==359798==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359798==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359798==    by 0x405951: main (mandatory.cpp:57)
==359798== 
==359798== Invalid read of size 1
==359798==    at 0x407535: ft_strlen (get_next_line_utils.c:43)
==359798==    by 0x407562: ft_strjoin (get_next_line_utils.c:59)
==359798==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359798==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359798==    by 0x4059A1: main (mandatory.cpp:57)
==359798==  Address 0x4de531a is 42 bytes inside a block of size 43 free'd
==359798==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359798==    by 0x407734: f_search_bn (get_next_line_utils.c:118)
==359798==    by 0x4073EC: get_next_line (get_next_line.c:51)
==359798==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359798==    by 0x405951: main (mandatory.cpp:57)
==359798==  Block was alloc'd at
==359798==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359798==    by 0x407586: ft_strjoin (get_next_line_utils.c:64)
==359798==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359798==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359798==    by 0x405951: main (mandatory.cpp:57)
==359798== 
==359798== Invalid read of size 1
==359798==    at 0x4075DC: ft_strjoin (get_next_line_utils.c:68)
==359798==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359798==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359798==    by 0x4059A1: main (mandatory.cpp:57)
==359798==  Address 0x4de531a is 42 bytes inside a block of size 43 free'd
==359798==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359798==    by 0x407734: f_search_bn (get_next_line_utils.c:118)
==359798==    by 0x4073EC: get_next_line (get_next_line.c:51)
==359798==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359798==    by 0x405951: main (mandatory.cpp:57)
==359798==  Block was alloc'd at
==359798==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359798==    by 0x407586: ft_strjoin (get_next_line_utils.c:64)
==359798==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359798==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359798==    by 0x405951: main (mandatory.cpp:57)
==359798== 
==359798== 1 bytes in 1 blocks are definitely lost in loss record 1 of 1
==359798==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359798==    by 0x407396: get_next_line (get_next_line.c:43)
==359798==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359798==    by 0x405951: main (mandatory.cpp:57)
==359798== 
==359801== Invalid write of size 1
==359801==    at 0x4077F9: f_last_line (get_next_line_utils.c:209)
==359801==    by 0x407432: get_next_line (get_next_line.c:59)
==359801==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359801==    by 0x405BCB: main (mandatory.cpp:68)
==359801==  Address 0x4de570b is 0 bytes after a block of size 43 alloc'd
==359801==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359801==    by 0x407799: f_last_line (get_next_line_utils.c:199)
==359801==    by 0x407432: get_next_line (get_next_line.c:59)
==359801==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359801==    by 0x405BCB: main (mandatory.cpp:68)
==359801== 
==359801== Invalid read of size 1
==359801==    at 0x484FBE8: strcmp (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359801==    by 0x402D0A: gnl(int, char const*) (gnl.cpp:24)
==359801==    by 0x405BCB: main (mandatory.cpp:68)
==359801==  Address 0x4de570b is 0 bytes after a block of size 43 alloc'd
==359801==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359801==    by 0x407799: f_last_line (get_next_line_utils.c:199)
==359801==    by 0x407432: get_next_line (get_next_line.c:59)
==359801==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359801==    by 0x405BCB: main (mandatory.cpp:68)
==359801== 
==359801== 1 bytes in 1 blocks are definitely lost in loss record 1 of 2
==359801==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359801==    by 0x407396: get_next_line (get_next_line.c:43)
==359801==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359801==    by 0x405BCB: main (mandatory.cpp:68)
==359801== 
==359801== 87 bytes in 2 blocks are definitely lost in loss record 2 of 2
==359801==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359801==    by 0x407586: ft_strjoin (get_next_line_utils.c:64)
==359801==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359801==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359801==    by 0x405BCB: main (mandatory.cpp:68)
==359801== 
==359802== Invalid read of size 1
==359802==    at 0x407756: f_del_front_bn (get_next_line_utils.c:162)
==359802==    by 0x4073FF: get_next_line (get_next_line.c:52)
==359802==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359802==    by 0x405DF7: main (mandatory.cpp:73)
==359802==  Address 0x4de5980 is 0 bytes inside a block of size 45 free'd
==359802==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359802==    by 0x407734: f_search_bn (get_next_line_utils.c:118)
==359802==    by 0x4073EC: get_next_line (get_next_line.c:51)
==359802==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359802==    by 0x405DF7: main (mandatory.cpp:73)
==359802==  Block was alloc'd at
==359802==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359802==    by 0x407586: ft_strjoin (get_next_line_utils.c:64)
==359802==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359802==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359802==    by 0x405DF7: main (mandatory.cpp:73)
==359802== 
==359802== Invalid read of size 1
==359802==    at 0x407535: ft_strlen (get_next_line_utils.c:43)
==359802==    by 0x407562: ft_strjoin (get_next_line_utils.c:59)
==359802==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359802==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359802==    by 0x405E09: main (mandatory.cpp:73)
==359802==  Address 0x4de59ab is 43 bytes inside a block of size 45 free'd
==359802==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359802==    by 0x407734: f_search_bn (get_next_line_utils.c:118)
==359802==    by 0x4073EC: get_next_line (get_next_line.c:51)
==359802==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359802==    by 0x405DF7: main (mandatory.cpp:73)
==359802==  Block was alloc'd at
==359802==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359802==    by 0x407586: ft_strjoin (get_next_line_utils.c:64)
==359802==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359802==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359802==    by 0x405DF7: main (mandatory.cpp:73)
==359802== 
==359802== Invalid read of size 1
==359802==    at 0x4075DC: ft_strjoin (get_next_line_utils.c:68)
==359802==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359802==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359802==    by 0x405E09: main (mandatory.cpp:73)
==359802==  Address 0x4de59ab is 43 bytes inside a block of size 45 free'd
==359802==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359802==    by 0x407734: f_search_bn (get_next_line_utils.c:118)
==359802==    by 0x4073EC: get_next_line (get_next_line.c:51)
==359802==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359802==    by 0x405DF7: main (mandatory.cpp:73)
==359802==  Block was alloc'd at
==359802==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359802==    by 0x407586: ft_strjoin (get_next_line_utils.c:64)
==359802==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359802==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359802==    by 0x405DF7: main (mandatory.cpp:73)
==359802== 
==359802== Invalid read of size 1
==359802==    at 0x4075BF: ft_strjoin (get_next_line_utils.c:70)
==359802==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359802==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359802==    by 0x405E09: main (mandatory.cpp:73)
==359802==  Address 0x4de59ab is 43 bytes inside a block of size 45 free'd
==359802==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359802==    by 0x407734: f_search_bn (get_next_line_utils.c:118)
==359802==    by 0x4073EC: get_next_line (get_next_line.c:51)
==359802==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359802==    by 0x405DF7: main (mandatory.cpp:73)
==359802==  Block was alloc'd at
==359802==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359802==    by 0x407586: ft_strjoin (get_next_line_utils.c:64)
==359802==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359802==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359802==    by 0x405DF7: main (mandatory.cpp:73)
==359802== 
==359802== Invalid read of size 1
==359802==    at 0x484FBD4: strcmp (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359802==    by 0x402D0A: gnl(int, char const*) (gnl.cpp:24)
==359802==    by 0x405E09: main (mandatory.cpp:73)
==359802==  Address 0x0 is not stack'd, malloc'd or (recently) free'd
==359802== 
==359802== 1 bytes in 1 blocks are definitely lost in loss record 1 of 2
==359802==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359802==    by 0x407396: get_next_line (get_next_line.c:43)
==359802==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359802==    by 0x405DF7: main (mandatory.cpp:73)
==359802== 
==359802== 43 bytes in 1 blocks are definitely lost in loss record 2 of 2
==359802==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359802==    by 0x407586: ft_strjoin (get_next_line_utils.c:64)
==359802==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359802==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359802==    by 0x405DF7: main (mandatory.cpp:73)
==359802== 
==359808== Invalid read of size 1
==359808==    at 0x407756: f_del_front_bn (get_next_line_utils.c:162)
==359808==    by 0x4073FF: get_next_line (get_next_line.c:52)
==359808==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359808==    by 0x406035: main (mandatory.cpp:79)
==359808==  Address 0x4de5c20 is 0 bytes inside a block of size 6 free'd
==359808==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359808==    by 0x407734: f_search_bn (get_next_line_utils.c:118)
==359808==    by 0x4073EC: get_next_line (get_next_line.c:51)
==359808==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359808==    by 0x406035: main (mandatory.cpp:79)
==359808==  Block was alloc'd at
==359808==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359808==    by 0x407586: ft_strjoin (get_next_line_utils.c:64)
==359808==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359808==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359808==    by 0x406035: main (mandatory.cpp:79)
==359808== 
==359808== Invalid read of size 1
==359808==    at 0x407535: ft_strlen (get_next_line_utils.c:43)
==359808==    by 0x407562: ft_strjoin (get_next_line_utils.c:59)
==359808==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359808==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359808==    by 0x406047: main (mandatory.cpp:79)
==359808==  Address 0x4de5c21 is 1 bytes inside a block of size 6 free'd
==359808==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359808==    by 0x407734: f_search_bn (get_next_line_utils.c:118)
==359808==    by 0x4073EC: get_next_line (get_next_line.c:51)
==359808==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359808==    by 0x406035: main (mandatory.cpp:79)
==359808==  Block was alloc'd at
==359808==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359808==    by 0x407586: ft_strjoin (get_next_line_utils.c:64)
==359808==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359808==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359808==    by 0x406035: main (mandatory.cpp:79)
==359808== 
==359808== Invalid read of size 1
==359808==    at 0x4075DC: ft_strjoin (get_next_line_utils.c:68)
==359808==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359808==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359808==    by 0x406047: main (mandatory.cpp:79)
==359808==  Address 0x4de5c21 is 1 bytes inside a block of size 6 free'd
==359808==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359808==    by 0x407734: f_search_bn (get_next_line_utils.c:118)
==359808==    by 0x4073EC: get_next_line (get_next_line.c:51)
==359808==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359808==    by 0x406035: main (mandatory.cpp:79)
==359808==  Block was alloc'd at
==359808==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359808==    by 0x407586: ft_strjoin (get_next_line_utils.c:64)
==359808==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359808==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359808==    by 0x406035: main (mandatory.cpp:79)
==359808== 
==359808== Invalid read of size 1
==359808==    at 0x4075BF: ft_strjoin (get_next_line_utils.c:70)
==359808==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359808==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359808==    by 0x406047: main (mandatory.cpp:79)
==359808==  Address 0x4de5c21 is 1 bytes inside a block of size 6 free'd
==359808==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359808==    by 0x407734: f_search_bn (get_next_line_utils.c:118)
==359808==    by 0x4073EC: get_next_line (get_next_line.c:51)
==359808==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359808==    by 0x406035: main (mandatory.cpp:79)
==359808==  Block was alloc'd at
==359808==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359808==    by 0x407586: ft_strjoin (get_next_line_utils.c:64)
==359808==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359808==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359808==    by 0x406035: main (mandatory.cpp:79)
==359808== 
==359808== Invalid read of size 1
==359808==    at 0x407756: f_del_front_bn (get_next_line_utils.c:162)
==359808==    by 0x4073FF: get_next_line (get_next_line.c:52)
==359808==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359808==    by 0x406047: main (mandatory.cpp:79)
==359808==  Address 0x4de5d30 is 0 bytes inside a block of size 5 free'd
==359808==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359808==    by 0x407734: f_search_bn (get_next_line_utils.c:118)
==359808==    by 0x4073EC: get_next_line (get_next_line.c:51)
==359808==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359808==    by 0x406047: main (mandatory.cpp:79)
==359808==  Block was alloc'd at
==359808==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359808==    by 0x407586: ft_strjoin (get_next_line_utils.c:64)
==359808==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359808==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359808==    by 0x406047: main (mandatory.cpp:79)
==359808== 
==359808== Invalid read of size 1
==359808==    at 0x4075DC: ft_strjoin (get_next_line_utils.c:68)
==359808==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359808==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359808==    by 0x406059: main (mandatory.cpp:79)
==359808==  Address 0x4de5d31 is 1 bytes inside a block of size 5 free'd
==359808==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359808==    by 0x407734: f_search_bn (get_next_line_utils.c:118)
==359808==    by 0x4073EC: get_next_line (get_next_line.c:51)
==359808==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359808==    by 0x406047: main (mandatory.cpp:79)
==359808==  Block was alloc'd at
==359808==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359808==    by 0x407586: ft_strjoin (get_next_line_utils.c:64)
==359808==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359808==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359808==    by 0x406047: main (mandatory.cpp:79)
==359808== 
==359808== Invalid read of size 1
==359808==    at 0x4075BF: ft_strjoin (get_next_line_utils.c:70)
==359808==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359808==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359808==    by 0x406059: main (mandatory.cpp:79)
==359808==  Address 0x4de5d31 is 1 bytes inside a block of size 5 free'd
==359808==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359808==    by 0x407734: f_search_bn (get_next_line_utils.c:118)
==359808==    by 0x4073EC: get_next_line (get_next_line.c:51)
==359808==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359808==    by 0x406047: main (mandatory.cpp:79)
==359808==  Block was alloc'd at
==359808==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359808==    by 0x407586: ft_strjoin (get_next_line_utils.c:64)
==359808==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359808==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359808==    by 0x406047: main (mandatory.cpp:79)
==359808== 
==359808== Invalid read of size 1
==359808==    at 0x407756: f_del_front_bn (get_next_line_utils.c:162)
==359808==    by 0x4073FF: get_next_line (get_next_line.c:52)
==359808==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359808==    by 0x406059: main (mandatory.cpp:79)
==359808==  Address 0x4de5e40 is 0 bytes inside a block of size 4 free'd
==359808==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359808==    by 0x407734: f_search_bn (get_next_line_utils.c:118)
==359808==    by 0x4073EC: get_next_line (get_next_line.c:51)
==359808==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359808==    by 0x406059: main (mandatory.cpp:79)
==359808==  Block was alloc'd at
==359808==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359808==    by 0x407586: ft_strjoin (get_next_line_utils.c:64)
==359808==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359808==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359808==    by 0x406059: main (mandatory.cpp:79)
==359808== 
==359808== Invalid read of size 1
==359808==    at 0x4075DC: ft_strjoin (get_next_line_utils.c:68)
==359808==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359808==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359808==    by 0x40606B: main (mandatory.cpp:79)
==359808==  Address 0x4de5e41 is 1 bytes inside a block of size 4 free'd
==359808==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359808==    by 0x407734: f_search_bn (get_next_line_utils.c:118)
==359808==    by 0x4073EC: get_next_line (get_next_line.c:51)
==359808==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359808==    by 0x406059: main (mandatory.cpp:79)
==359808==  Block was alloc'd at
==359808==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359808==    by 0x407586: ft_strjoin (get_next_line_utils.c:64)
==359808==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359808==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359808==    by 0x406059: main (mandatory.cpp:79)
==359808== 
==359808== Invalid read of size 1
==359808==    at 0x4075BF: ft_strjoin (get_next_line_utils.c:70)
==359808==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359808==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359808==    by 0x40606B: main (mandatory.cpp:79)
==359808==  Address 0x4de5e41 is 1 bytes inside a block of size 4 free'd
==359808==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359808==    by 0x407734: f_search_bn (get_next_line_utils.c:118)
==359808==    by 0x4073EC: get_next_line (get_next_line.c:51)
==359808==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359808==    by 0x406059: main (mandatory.cpp:79)
==359808==  Block was alloc'd at
==359808==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359808==    by 0x407586: ft_strjoin (get_next_line_utils.c:64)
==359808==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359808==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359808==    by 0x406059: main (mandatory.cpp:79)
==359808== 
==359808== Invalid read of size 1
==359808==    at 0x407756: f_del_front_bn (get_next_line_utils.c:162)
==359808==    by 0x4073FF: get_next_line (get_next_line.c:52)
==359808==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359808==    by 0x40606B: main (mandatory.cpp:79)
==359808==  Address 0x4de5f50 is 0 bytes inside a block of size 3 free'd
==359808==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359808==    by 0x407734: f_search_bn (get_next_line_utils.c:118)
==359808==    by 0x4073EC: get_next_line (get_next_line.c:51)
==359808==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359808==    by 0x40606B: main (mandatory.cpp:79)
==359808==  Block was alloc'd at
==359808==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359808==    by 0x407586: ft_strjoin (get_next_line_utils.c:64)
==359808==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359808==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359808==    by 0x40606B: main (mandatory.cpp:79)
==359808== 
==359808== Invalid read of size 1
==359808==    at 0x4075DC: ft_strjoin (get_next_line_utils.c:68)
==359808==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359808==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359808==    by 0x40607D: main (mandatory.cpp:79)
==359808==  Address 0x4de5f51 is 1 bytes inside a block of size 3 free'd
==359808==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359808==    by 0x407734: f_search_bn (get_next_line_utils.c:118)
==359808==    by 0x4073EC: get_next_line (get_next_line.c:51)
==359808==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359808==    by 0x40606B: main (mandatory.cpp:79)
==359808==  Block was alloc'd at
==359808==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359808==    by 0x407586: ft_strjoin (get_next_line_utils.c:64)
==359808==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359808==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359808==    by 0x40606B: main (mandatory.cpp:79)
==359808== 
==359808== Invalid read of size 1
==359808==    at 0x4075BF: ft_strjoin (get_next_line_utils.c:70)
==359808==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359808==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359808==    by 0x40607D: main (mandatory.cpp:79)
==359808==  Address 0x4de5f51 is 1 bytes inside a block of size 3 free'd
==359808==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359808==    by 0x407734: f_search_bn (get_next_line_utils.c:118)
==359808==    by 0x4073EC: get_next_line (get_next_line.c:51)
==359808==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359808==    by 0x40606B: main (mandatory.cpp:79)
==359808==  Block was alloc'd at
==359808==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359808==    by 0x407586: ft_strjoin (get_next_line_utils.c:64)
==359808==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359808==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359808==    by 0x40606B: main (mandatory.cpp:79)
==359808== 
==359808== Invalid read of size 1
==359808==    at 0x407756: f_del_front_bn (get_next_line_utils.c:162)
==359808==    by 0x4073FF: get_next_line (get_next_line.c:52)
==359808==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359808==    by 0x40607D: main (mandatory.cpp:79)
==359808==  Address 0x4de6060 is 0 bytes inside a block of size 2 free'd
==359808==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359808==    by 0x407734: f_search_bn (get_next_line_utils.c:118)
==359808==    by 0x4073EC: get_next_line (get_next_line.c:51)
==359808==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359808==    by 0x40607D: main (mandatory.cpp:79)
==359808==  Block was alloc'd at
==359808==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359808==    by 0x407586: ft_strjoin (get_next_line_utils.c:64)
==359808==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359808==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359808==    by 0x40607D: main (mandatory.cpp:79)
==359808== 
==359808== Invalid read of size 1
==359808==    at 0x4075DC: ft_strjoin (get_next_line_utils.c:68)
==359808==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359808==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359808==    by 0x406089: main (mandatory.cpp:79)
==359808==  Address 0x4de6061 is 1 bytes inside a block of size 2 free'd
==359808==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359808==    by 0x407734: f_search_bn (get_next_line_utils.c:118)
==359808==    by 0x4073EC: get_next_line (get_next_line.c:51)
==359808==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359808==    by 0x40607D: main (mandatory.cpp:79)
==359808==  Block was alloc'd at
==359808==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359808==    by 0x407586: ft_strjoin (get_next_line_utils.c:64)
==359808==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359808==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359808==    by 0x40607D: main (mandatory.cpp:79)
==359808== 
==359808== 1 bytes in 1 blocks are definitely lost in loss record 1 of 1
==359808==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359808==    by 0x407396: get_next_line (get_next_line.c:43)
==359808==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359808==    by 0x406035: main (mandatory.cpp:79)
==359808== 
==359812== Invalid read of size 1
==359812==    at 0x407756: f_del_front_bn (get_next_line_utils.c:162)
==359812==    by 0x4073FF: get_next_line (get_next_line.c:52)
==359812==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359812==    by 0x4062A9: main (mandatory.cpp:88)
==359812==  Address 0x4de5f50 is 0 bytes inside a block of size 43 free'd
==359812==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359812==    by 0x407734: f_search_bn (get_next_line_utils.c:118)
==359812==    by 0x4073EC: get_next_line (get_next_line.c:51)
==359812==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359812==    by 0x4062A9: main (mandatory.cpp:88)
==359812==  Block was alloc'd at
==359812==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359812==    by 0x407586: ft_strjoin (get_next_line_utils.c:64)
==359812==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359812==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359812==    by 0x4062A9: main (mandatory.cpp:88)
==359812== 
==359812== Invalid read of size 1
==359812==    at 0x407535: ft_strlen (get_next_line_utils.c:43)
==359812==    by 0x407562: ft_strjoin (get_next_line_utils.c:59)
==359812==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359812==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359812==    by 0x4062BB: main (mandatory.cpp:88)
==359812==  Address 0x4de5f7a is 42 bytes inside a block of size 43 free'd
==359812==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359812==    by 0x407734: f_search_bn (get_next_line_utils.c:118)
==359812==    by 0x4073EC: get_next_line (get_next_line.c:51)
==359812==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359812==    by 0x4062A9: main (mandatory.cpp:88)
==359812==  Block was alloc'd at
==359812==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359812==    by 0x407586: ft_strjoin (get_next_line_utils.c:64)
==359812==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359812==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359812==    by 0x4062A9: main (mandatory.cpp:88)
==359812== 
==359812== Invalid read of size 1
==359812==    at 0x4075DC: ft_strjoin (get_next_line_utils.c:68)
==359812==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359812==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359812==    by 0x4062BB: main (mandatory.cpp:88)
==359812==  Address 0x4de5f7a is 42 bytes inside a block of size 43 free'd
==359812==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359812==    by 0x407734: f_search_bn (get_next_line_utils.c:118)
==359812==    by 0x4073EC: get_next_line (get_next_line.c:51)
==359812==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359812==    by 0x4062A9: main (mandatory.cpp:88)
==359812==  Block was alloc'd at
==359812==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359812==    by 0x407586: ft_strjoin (get_next_line_utils.c:64)
==359812==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359812==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359812==    by 0x4062A9: main (mandatory.cpp:88)
==359812== 
==359812== Invalid read of size 1
==359812==    at 0x407756: f_del_front_bn (get_next_line_utils.c:162)
==359812==    by 0x4073FF: get_next_line (get_next_line.c:52)
==359812==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359812==    by 0x4062BB: main (mandatory.cpp:88)
==359812==  Address 0x4de6110 is 0 bytes inside a block of size 85 free'd
==359812==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359812==    by 0x407734: f_search_bn (get_next_line_utils.c:118)
==359812==    by 0x4073EC: get_next_line (get_next_line.c:51)
==359812==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359812==    by 0x4062BB: main (mandatory.cpp:88)
==359812==  Block was alloc'd at
==359812==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359812==    by 0x407586: ft_strjoin (get_next_line_utils.c:64)
==359812==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359812==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359812==    by 0x4062BB: main (mandatory.cpp:88)
==359812== 
==359812== Invalid read of size 1
==359812==    at 0x4075DC: ft_strjoin (get_next_line_utils.c:68)
==359812==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359812==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359812==    by 0x4062CD: main (mandatory.cpp:88)
==359812==  Address 0x4de613b is 43 bytes inside a block of size 85 free'd
==359812==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359812==    by 0x407734: f_search_bn (get_next_line_utils.c:118)
==359812==    by 0x4073EC: get_next_line (get_next_line.c:51)
==359812==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359812==    by 0x4062BB: main (mandatory.cpp:88)
==359812==  Block was alloc'd at
==359812==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359812==    by 0x407586: ft_strjoin (get_next_line_utils.c:64)
==359812==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359812==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359812==    by 0x4062BB: main (mandatory.cpp:88)
==359812== 
==359812== Invalid read of size 1
==359812==    at 0x4075BF: ft_strjoin (get_next_line_utils.c:70)
==359812==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359812==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359812==    by 0x4062CD: main (mandatory.cpp:88)
==359812==  Address 0x4de613b is 43 bytes inside a block of size 85 free'd
==359812==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359812==    by 0x407734: f_search_bn (get_next_line_utils.c:118)
==359812==    by 0x4073EC: get_next_line (get_next_line.c:51)
==359812==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359812==    by 0x4062BB: main (mandatory.cpp:88)
==359812==  Block was alloc'd at
==359812==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359812==    by 0x407586: ft_strjoin (get_next_line_utils.c:64)
==359812==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359812==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359812==    by 0x4062BB: main (mandatory.cpp:88)
==359812== 
==359812== Invalid read of size 1
==359812==    at 0x407756: f_del_front_bn (get_next_line_utils.c:162)
==359812==    by 0x4073FF: get_next_line (get_next_line.c:52)
==359812==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359812==    by 0x4062CD: main (mandatory.cpp:88)
==359812==  Address 0x4de6290 is 0 bytes inside a block of size 84 free'd
==359812==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359812==    by 0x407734: f_search_bn (get_next_line_utils.c:118)
==359812==    by 0x4073EC: get_next_line (get_next_line.c:51)
==359812==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359812==    by 0x4062CD: main (mandatory.cpp:88)
==359812==  Block was alloc'd at
==359812==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359812==    by 0x407586: ft_strjoin (get_next_line_utils.c:64)
==359812==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359812==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359812==    by 0x4062CD: main (mandatory.cpp:88)
==359812== 
==359812== Invalid read of size 1
==359812==    at 0x4075DC: ft_strjoin (get_next_line_utils.c:68)
==359812==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359812==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359812==    by 0x4062DF: main (mandatory.cpp:88)
==359812==  Address 0x4de62bc is 44 bytes inside a block of size 84 free'd
==359812==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359812==    by 0x407734: f_search_bn (get_next_line_utils.c:118)
==359812==    by 0x4073EC: get_next_line (get_next_line.c:51)
==359812==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359812==    by 0x4062CD: main (mandatory.cpp:88)
==359812==  Block was alloc'd at
==359812==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359812==    by 0x407586: ft_strjoin (get_next_line_utils.c:64)
==359812==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359812==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359812==    by 0x4062CD: main (mandatory.cpp:88)
==359812== 
==359812== Invalid read of size 1
==359812==    at 0x4075BF: ft_strjoin (get_next_line_utils.c:70)
==359812==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359812==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359812==    by 0x4062DF: main (mandatory.cpp:88)
==359812==  Address 0x4de62bc is 44 bytes inside a block of size 84 free'd
==359812==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359812==    by 0x407734: f_search_bn (get_next_line_utils.c:118)
==359812==    by 0x4073EC: get_next_line (get_next_line.c:51)
==359812==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359812==    by 0x4062CD: main (mandatory.cpp:88)
==359812==  Block was alloc'd at
==359812==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359812==    by 0x407586: ft_strjoin (get_next_line_utils.c:64)
==359812==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359812==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359812==    by 0x4062CD: main (mandatory.cpp:88)
==359812== 
==359812== Invalid read of size 1
==359812==    at 0x407756: f_del_front_bn (get_next_line_utils.c:162)
==359812==    by 0x4073FF: get_next_line (get_next_line.c:52)
==359812==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359812==    by 0x4062DF: main (mandatory.cpp:88)
==359812==  Address 0x4de6410 is 0 bytes inside a block of size 82 free'd
==359812==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359812==    by 0x407734: f_search_bn (get_next_line_utils.c:118)
==359812==    by 0x4073EC: get_next_line (get_next_line.c:51)
==359812==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359812==    by 0x4062DF: main (mandatory.cpp:88)
==359812==  Block was alloc'd at
==359812==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359812==    by 0x407586: ft_strjoin (get_next_line_utils.c:64)
==359812==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359812==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359812==    by 0x4062DF: main (mandatory.cpp:88)
==359812== 
==359812== Invalid read of size 1
==359812==    at 0x4075DC: ft_strjoin (get_next_line_utils.c:68)
==359812==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359812==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359812==    by 0x4062F1: main (mandatory.cpp:88)
==359812==  Address 0x4de643b is 43 bytes inside a block of size 82 free'd
==359812==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359812==    by 0x407734: f_search_bn (get_next_line_utils.c:118)
==359812==    by 0x4073EC: get_next_line (get_next_line.c:51)
==359812==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359812==    by 0x4062DF: main (mandatory.cpp:88)
==359812==  Block was alloc'd at
==359812==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359812==    by 0x407586: ft_strjoin (get_next_line_utils.c:64)
==359812==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359812==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359812==    by 0x4062DF: main (mandatory.cpp:88)
==359812== 
==359812== Invalid read of size 1
==359812==    at 0x4075BF: ft_strjoin (get_next_line_utils.c:70)
==359812==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359812==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359812==    by 0x4062F1: main (mandatory.cpp:88)
==359812==  Address 0x4de643b is 43 bytes inside a block of size 82 free'd
==359812==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359812==    by 0x407734: f_search_bn (get_next_line_utils.c:118)
==359812==    by 0x4073EC: get_next_line (get_next_line.c:51)
==359812==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359812==    by 0x4062DF: main (mandatory.cpp:88)
==359812==  Block was alloc'd at
==359812==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359812==    by 0x407586: ft_strjoin (get_next_line_utils.c:64)
==359812==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359812==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359812==    by 0x4062DF: main (mandatory.cpp:88)
==359812== 
==359812== Invalid write of size 1
==359812==    at 0x4077F9: f_last_line (get_next_line_utils.c:209)
==359812==    by 0x407432: get_next_line (get_next_line.c:59)
==359812==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359812==    by 0x4062F1: main (mandatory.cpp:88)
==359812==  Address 0x4de6629 is 0 bytes after a block of size 41 alloc'd
==359812==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359812==    by 0x407799: f_last_line (get_next_line_utils.c:199)
==359812==    by 0x407432: get_next_line (get_next_line.c:59)
==359812==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359812==    by 0x4062F1: main (mandatory.cpp:88)
==359812== 
==359812== Invalid read of size 1
==359812==    at 0x484FBE8: strcmp (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359812==    by 0x402D0A: gnl(int, char const*) (gnl.cpp:24)
==359812==    by 0x4062F1: main (mandatory.cpp:88)
==359812==  Address 0x4de6629 is 0 bytes after a block of size 41 alloc'd
==359812==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359812==    by 0x407799: f_last_line (get_next_line_utils.c:199)
==359812==    by 0x407432: get_next_line (get_next_line.c:59)
==359812==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359812==    by 0x4062F1: main (mandatory.cpp:88)
==359812== 
==359812== 1 bytes in 1 blocks are definitely lost in loss record 1 of 3
==359812==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359812==    by 0x407396: get_next_line (get_next_line.c:43)
==359812==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359812==    by 0x4062A9: main (mandatory.cpp:88)
==359812== 
==359812== 42 bytes in 1 blocks are definitely lost in loss record 2 of 3
==359812==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359812==    by 0x407586: ft_strjoin (get_next_line_utils.c:64)
==359812==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359812==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359812==    by 0x4062F1: main (mandatory.cpp:88)
==359812== 
==359812== 43 bytes in 1 blocks are definitely lost in loss record 3 of 3
==359812==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359812==    by 0x407586: ft_strjoin (get_next_line_utils.c:64)
==359812==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359812==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359812==    by 0x4062BB: main (mandatory.cpp:88)
==359812== 
==359813== Invalid read of size 1
==359813==    at 0x407756: f_del_front_bn (get_next_line_utils.c:162)
==359813==    by 0x4073FF: get_next_line (get_next_line.c:52)
==359813==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359813==    by 0x40651D: main (mandatory.cpp:97)
==359813==  Address 0x4de6280 is 0 bytes inside a block of size 43 free'd
==359813==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359813==    by 0x407734: f_search_bn (get_next_line_utils.c:118)
==359813==    by 0x4073EC: get_next_line (get_next_line.c:51)
==359813==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359813==    by 0x40651D: main (mandatory.cpp:97)
==359813==  Block was alloc'd at
==359813==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359813==    by 0x407586: ft_strjoin (get_next_line_utils.c:64)
==359813==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359813==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359813==    by 0x40651D: main (mandatory.cpp:97)
==359813== 
==359813== Invalid read of size 1
==359813==    at 0x407535: ft_strlen (get_next_line_utils.c:43)
==359813==    by 0x407562: ft_strjoin (get_next_line_utils.c:59)
==359813==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359813==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359813==    by 0x40652F: main (mandatory.cpp:97)
==359813==  Address 0x4de62a9 is 41 bytes inside a block of size 43 free'd
==359813==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359813==    by 0x407734: f_search_bn (get_next_line_utils.c:118)
==359813==    by 0x4073EC: get_next_line (get_next_line.c:51)
==359813==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359813==    by 0x40651D: main (mandatory.cpp:97)
==359813==  Block was alloc'd at
==359813==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359813==    by 0x407586: ft_strjoin (get_next_line_utils.c:64)
==359813==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359813==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359813==    by 0x40651D: main (mandatory.cpp:97)
==359813== 
==359813== Invalid read of size 1
==359813==    at 0x4075DC: ft_strjoin (get_next_line_utils.c:68)
==359813==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359813==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359813==    by 0x40652F: main (mandatory.cpp:97)
==359813==  Address 0x4de62a9 is 41 bytes inside a block of size 43 free'd
==359813==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359813==    by 0x407734: f_search_bn (get_next_line_utils.c:118)
==359813==    by 0x4073EC: get_next_line (get_next_line.c:51)
==359813==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359813==    by 0x40651D: main (mandatory.cpp:97)
==359813==  Block was alloc'd at
==359813==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359813==    by 0x407586: ft_strjoin (get_next_line_utils.c:64)
==359813==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359813==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359813==    by 0x40651D: main (mandatory.cpp:97)
==359813== 
==359813== Invalid read of size 1
==359813==    at 0x4075BF: ft_strjoin (get_next_line_utils.c:70)
==359813==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359813==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359813==    by 0x40652F: main (mandatory.cpp:97)
==359813==  Address 0x4de62a9 is 41 bytes inside a block of size 43 free'd
==359813==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359813==    by 0x407734: f_search_bn (get_next_line_utils.c:118)
==359813==    by 0x4073EC: get_next_line (get_next_line.c:51)
==359813==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359813==    by 0x40651D: main (mandatory.cpp:97)
==359813==  Block was alloc'd at
==359813==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359813==    by 0x407586: ft_strjoin (get_next_line_utils.c:64)
==359813==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359813==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359813==    by 0x40651D: main (mandatory.cpp:97)
==359813== 
==359813== Invalid read of size 1
==359813==    at 0x407756: f_del_front_bn (get_next_line_utils.c:162)
==359813==    by 0x4073FF: get_next_line (get_next_line.c:52)
==359813==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359813==    by 0x40652F: main (mandatory.cpp:97)
==359813==  Address 0x4de63d0 is 0 bytes inside a block of size 44 free'd
==359813==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359813==    by 0x407734: f_search_bn (get_next_line_utils.c:118)
==359813==    by 0x4073EC: get_next_line (get_next_line.c:51)
==359813==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359813==    by 0x40652F: main (mandatory.cpp:97)
==359813==  Block was alloc'd at
==359813==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359813==    by 0x407586: ft_strjoin (get_next_line_utils.c:64)
==359813==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359813==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359813==    by 0x40652F: main (mandatory.cpp:97)
==359813== 
==359813== Invalid read of size 1
==359813==    at 0x4075DC: ft_strjoin (get_next_line_utils.c:68)
==359813==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359813==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359813==    by 0x406541: main (mandatory.cpp:97)
==359813==  Address 0x4de63fa is 42 bytes inside a block of size 44 free'd
==359813==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359813==    by 0x407734: f_search_bn (get_next_line_utils.c:118)
==359813==    by 0x4073EC: get_next_line (get_next_line.c:51)
==359813==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359813==    by 0x40652F: main (mandatory.cpp:97)
==359813==  Block was alloc'd at
==359813==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359813==    by 0x407586: ft_strjoin (get_next_line_utils.c:64)
==359813==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359813==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359813==    by 0x40652F: main (mandatory.cpp:97)
==359813== 
==359813== Invalid read of size 1
==359813==    at 0x4075BF: ft_strjoin (get_next_line_utils.c:70)
==359813==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359813==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359813==    by 0x406541: main (mandatory.cpp:97)
==359813==  Address 0x4de63fa is 42 bytes inside a block of size 44 free'd
==359813==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359813==    by 0x407734: f_search_bn (get_next_line_utils.c:118)
==359813==    by 0x4073EC: get_next_line (get_next_line.c:51)
==359813==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359813==    by 0x40652F: main (mandatory.cpp:97)
==359813==  Block was alloc'd at
==359813==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359813==    by 0x407586: ft_strjoin (get_next_line_utils.c:64)
==359813==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359813==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359813==    by 0x40652F: main (mandatory.cpp:97)
==359813== 
==359813== Invalid read of size 1
==359813==    at 0x407756: f_del_front_bn (get_next_line_utils.c:162)
==359813==    by 0x4073FF: get_next_line (get_next_line.c:52)
==359813==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359813==    by 0x406541: main (mandatory.cpp:97)
==359813==  Address 0x4de6520 is 0 bytes inside a block of size 44 free'd
==359813==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359813==    by 0x407734: f_search_bn (get_next_line_utils.c:118)
==359813==    by 0x4073EC: get_next_line (get_next_line.c:51)
==359813==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359813==    by 0x406541: main (mandatory.cpp:97)
==359813==  Block was alloc'd at
==359813==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359813==    by 0x407586: ft_strjoin (get_next_line_utils.c:64)
==359813==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359813==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359813==    by 0x406541: main (mandatory.cpp:97)
==359813== 
==359813== Invalid read of size 1
==359813==    at 0x4075DC: ft_strjoin (get_next_line_utils.c:68)
==359813==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359813==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359813==    by 0x406553: main (mandatory.cpp:97)
==359813==  Address 0x4de654b is 43 bytes inside a block of size 44 free'd
==359813==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359813==    by 0x407734: f_search_bn (get_next_line_utils.c:118)
==359813==    by 0x4073EC: get_next_line (get_next_line.c:51)
==359813==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359813==    by 0x406541: main (mandatory.cpp:97)
==359813==  Block was alloc'd at
==359813==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359813==    by 0x407586: ft_strjoin (get_next_line_utils.c:64)
==359813==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359813==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359813==    by 0x406541: main (mandatory.cpp:97)
==359813== 
==359813== Invalid read of size 1
==359813==    at 0x407756: f_del_front_bn (get_next_line_utils.c:162)
==359813==    by 0x4073FF: get_next_line (get_next_line.c:52)
==359813==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359813==    by 0x406553: main (mandatory.cpp:97)
==359813==  Address 0x4de6670 is 0 bytes inside a block of size 43 free'd
==359813==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359813==    by 0x407734: f_search_bn (get_next_line_utils.c:118)
==359813==    by 0x4073EC: get_next_line (get_next_line.c:51)
==359813==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359813==    by 0x406553: main (mandatory.cpp:97)
==359813==  Block was alloc'd at
==359813==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359813==    by 0x407586: ft_strjoin (get_next_line_utils.c:64)
==359813==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359813==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359813==    by 0x406553: main (mandatory.cpp:97)
==359813== 
==359813== Invalid read of size 1
==359813==    at 0x4075DC: ft_strjoin (get_next_line_utils.c:68)
==359813==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359813==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359813==    by 0x406565: main (mandatory.cpp:97)
==359813==  Address 0x4de669a is 42 bytes inside a block of size 43 free'd
==359813==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359813==    by 0x407734: f_search_bn (get_next_line_utils.c:118)
==359813==    by 0x4073EC: get_next_line (get_next_line.c:51)
==359813==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359813==    by 0x406553: main (mandatory.cpp:97)
==359813==  Block was alloc'd at
==359813==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359813==    by 0x407586: ft_strjoin (get_next_line_utils.c:64)
==359813==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359813==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359813==    by 0x406553: main (mandatory.cpp:97)
==359813== 
==359813== Invalid read of size 1
==359813==    at 0x407756: f_del_front_bn (get_next_line_utils.c:162)
==359813==    by 0x4073FF: get_next_line (get_next_line.c:52)
==359813==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359813==    by 0x406565: main (mandatory.cpp:97)
==359813==  Address 0x4de67c0 is 0 bytes inside a block of size 42 free'd
==359813==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359813==    by 0x407734: f_search_bn (get_next_line_utils.c:118)
==359813==    by 0x4073EC: get_next_line (get_next_line.c:51)
==359813==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359813==    by 0x406565: main (mandatory.cpp:97)
==359813==  Block was alloc'd at
==359813==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359813==    by 0x407586: ft_strjoin (get_next_line_utils.c:64)
==359813==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359813==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359813==    by 0x406565: main (mandatory.cpp:97)
==359813== 
==359813== Invalid read of size 1
==359813==    at 0x4075DC: ft_strjoin (get_next_line_utils.c:68)
==359813==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359813==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359813==    by 0x406571: main (mandatory.cpp:97)
==359813==  Address 0x4de67e9 is 41 bytes inside a block of size 42 free'd
==359813==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359813==    by 0x407734: f_search_bn (get_next_line_utils.c:118)
==359813==    by 0x4073EC: get_next_line (get_next_line.c:51)
==359813==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359813==    by 0x406565: main (mandatory.cpp:97)
==359813==  Block was alloc'd at
==359813==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359813==    by 0x407586: ft_strjoin (get_next_line_utils.c:64)
==359813==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359813==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359813==    by 0x406565: main (mandatory.cpp:97)
==359813== 
==359813== 1 bytes in 1 blocks are definitely lost in loss record 1 of 1
==359813==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359813==    by 0x407396: get_next_line (get_next_line.c:43)
==359813==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359813==    by 0x40651D: main (mandatory.cpp:97)
==359813== 
==359816== Invalid read of size 1
==359816==    at 0x407756: f_del_front_bn (get_next_line_utils.c:162)
==359816==    by 0x4073FF: get_next_line (get_next_line.c:52)
==359816==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359816==    by 0x406791: main (mandatory.cpp:106)
==359816==  Address 0x4de65b0 is 0 bytes inside a block of size 43 free'd
==359816==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359816==    by 0x407734: f_search_bn (get_next_line_utils.c:118)
==359816==    by 0x4073EC: get_next_line (get_next_line.c:51)
==359816==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359816==    by 0x406791: main (mandatory.cpp:106)
==359816==  Block was alloc'd at
==359816==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359816==    by 0x407586: ft_strjoin (get_next_line_utils.c:64)
==359816==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359816==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359816==    by 0x406791: main (mandatory.cpp:106)
==359816== 
==359816== Invalid read of size 1
==359816==    at 0x407535: ft_strlen (get_next_line_utils.c:43)
==359816==    by 0x407562: ft_strjoin (get_next_line_utils.c:59)
==359816==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359816==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359816==    by 0x4067A3: main (mandatory.cpp:106)
==359816==  Address 0x4de65da is 42 bytes inside a block of size 43 free'd
==359816==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359816==    by 0x407734: f_search_bn (get_next_line_utils.c:118)
==359816==    by 0x4073EC: get_next_line (get_next_line.c:51)
==359816==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359816==    by 0x406791: main (mandatory.cpp:106)
==359816==  Block was alloc'd at
==359816==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359816==    by 0x407586: ft_strjoin (get_next_line_utils.c:64)
==359816==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359816==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359816==    by 0x406791: main (mandatory.cpp:106)
==359816== 
==359816== Invalid read of size 1
==359816==    at 0x4075DC: ft_strjoin (get_next_line_utils.c:68)
==359816==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359816==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359816==    by 0x4067A3: main (mandatory.cpp:106)
==359816==  Address 0x4de65da is 42 bytes inside a block of size 43 free'd
==359816==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359816==    by 0x407734: f_search_bn (get_next_line_utils.c:118)
==359816==    by 0x4073EC: get_next_line (get_next_line.c:51)
==359816==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359816==    by 0x406791: main (mandatory.cpp:106)
==359816==  Block was alloc'd at
==359816==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359816==    by 0x407586: ft_strjoin (get_next_line_utils.c:64)
==359816==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359816==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359816==    by 0x406791: main (mandatory.cpp:106)
==359816== 
==359816== Invalid read of size 1
==359816==    at 0x407756: f_del_front_bn (get_next_line_utils.c:162)
==359816==    by 0x4073FF: get_next_line (get_next_line.c:52)
==359816==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359816==    by 0x4067A3: main (mandatory.cpp:106)
==359816==  Address 0x4de6700 is 0 bytes inside a block of size 43 free'd
==359816==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359816==    by 0x407734: f_search_bn (get_next_line_utils.c:118)
==359816==    by 0x4073EC: get_next_line (get_next_line.c:51)
==359816==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359816==    by 0x4067A3: main (mandatory.cpp:106)
==359816==  Block was alloc'd at
==359816==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359816==    by 0x407586: ft_strjoin (get_next_line_utils.c:64)
==359816==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359816==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359816==    by 0x4067A3: main (mandatory.cpp:106)
==359816== 
==359816== Invalid read of size 1
==359816==    at 0x4075DC: ft_strjoin (get_next_line_utils.c:68)
==359816==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359816==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359816==    by 0x4067B5: main (mandatory.cpp:106)
==359816==  Address 0x4de6701 is 1 bytes inside a block of size 43 free'd
==359816==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359816==    by 0x407734: f_search_bn (get_next_line_utils.c:118)
==359816==    by 0x4073EC: get_next_line (get_next_line.c:51)
==359816==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359816==    by 0x4067A3: main (mandatory.cpp:106)
==359816==  Block was alloc'd at
==359816==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359816==    by 0x407586: ft_strjoin (get_next_line_utils.c:64)
==359816==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359816==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359816==    by 0x4067A3: main (mandatory.cpp:106)
==359816== 
==359816== Invalid read of size 1
==359816==    at 0x4075BF: ft_strjoin (get_next_line_utils.c:70)
==359816==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359816==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359816==    by 0x4067B5: main (mandatory.cpp:106)
==359816==  Address 0x4de6701 is 1 bytes inside a block of size 43 free'd
==359816==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359816==    by 0x407734: f_search_bn (get_next_line_utils.c:118)
==359816==    by 0x4073EC: get_next_line (get_next_line.c:51)
==359816==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359816==    by 0x4067A3: main (mandatory.cpp:106)
==359816==  Block was alloc'd at
==359816==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359816==    by 0x407586: ft_strjoin (get_next_line_utils.c:64)
==359816==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359816==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359816==    by 0x4067A3: main (mandatory.cpp:106)
==359816== 
==359816== Invalid read of size 1
==359816==    at 0x407756: f_del_front_bn (get_next_line_utils.c:162)
==359816==    by 0x4073FF: get_next_line (get_next_line.c:52)
==359816==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359816==    by 0x4067B5: main (mandatory.cpp:106)
==359816==  Address 0x4de6830 is 0 bytes inside a block of size 84 free'd
==359816==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359816==    by 0x407734: f_search_bn (get_next_line_utils.c:118)
==359816==    by 0x4073EC: get_next_line (get_next_line.c:51)
==359816==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359816==    by 0x4067B5: main (mandatory.cpp:106)
==359816==  Block was alloc'd at
==359816==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359816==    by 0x407586: ft_strjoin (get_next_line_utils.c:64)
==359816==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359816==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359816==    by 0x4067B5: main (mandatory.cpp:106)
==359816== 
==359816== Invalid read of size 1
==359816==    at 0x4075DC: ft_strjoin (get_next_line_utils.c:68)
==359816==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359816==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359816==    by 0x4067C7: main (mandatory.cpp:106)
==359816==  Address 0x4de685b is 43 bytes inside a block of size 84 free'd
==359816==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359816==    by 0x407734: f_search_bn (get_next_line_utils.c:118)
==359816==    by 0x4073EC: get_next_line (get_next_line.c:51)
==359816==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359816==    by 0x4067B5: main (mandatory.cpp:106)
==359816==  Block was alloc'd at
==359816==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359816==    by 0x407586: ft_strjoin (get_next_line_utils.c:64)
==359816==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359816==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359816==    by 0x4067B5: main (mandatory.cpp:106)
==359816== 
==359816== Invalid read of size 1
==359816==    at 0x4075BF: ft_strjoin (get_next_line_utils.c:70)
==359816==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359816==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359816==    by 0x4067C7: main (mandatory.cpp:106)
==359816==  Address 0x4de685b is 43 bytes inside a block of size 84 free'd
==359816==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359816==    by 0x407734: f_search_bn (get_next_line_utils.c:118)
==359816==    by 0x4073EC: get_next_line (get_next_line.c:51)
==359816==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359816==    by 0x4067B5: main (mandatory.cpp:106)
==359816==  Block was alloc'd at
==359816==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359816==    by 0x407586: ft_strjoin (get_next_line_utils.c:64)
==359816==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359816==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359816==    by 0x4067B5: main (mandatory.cpp:106)
==359816== 
==359816== Invalid read of size 1
==359816==    at 0x407756: f_del_front_bn (get_next_line_utils.c:162)
==359816==    by 0x4073FF: get_next_line (get_next_line.c:52)
==359816==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359816==    by 0x4067C7: main (mandatory.cpp:106)
==359816==  Address 0x4de69b0 is 0 bytes inside a block of size 83 free'd
==359816==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359816==    by 0x407734: f_search_bn (get_next_line_utils.c:118)
==359816==    by 0x4073EC: get_next_line (get_next_line.c:51)
==359816==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359816==    by 0x4067C7: main (mandatory.cpp:106)
==359816==  Block was alloc'd at
==359816==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359816==    by 0x407586: ft_strjoin (get_next_line_utils.c:64)
==359816==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359816==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359816==    by 0x4067C7: main (mandatory.cpp:106)
==359816== 
==359816== Invalid read of size 1
==359816==    at 0x4075DC: ft_strjoin (get_next_line_utils.c:68)
==359816==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359816==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359816==    by 0x4067D9: main (mandatory.cpp:106)
==359816==  Address 0x4de69b1 is 1 bytes inside a block of size 83 free'd
==359816==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359816==    by 0x407734: f_search_bn (get_next_line_utils.c:118)
==359816==    by 0x4073EC: get_next_line (get_next_line.c:51)
==359816==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359816==    by 0x4067C7: main (mandatory.cpp:106)
==359816==  Block was alloc'd at
==359816==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359816==    by 0x407586: ft_strjoin (get_next_line_utils.c:64)
==359816==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359816==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359816==    by 0x4067C7: main (mandatory.cpp:106)
==359816== 
==359816== Invalid read of size 1
==359816==    at 0x4075BF: ft_strjoin (get_next_line_utils.c:70)
==359816==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359816==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359816==    by 0x4067D9: main (mandatory.cpp:106)
==359816==  Address 0x4de69b1 is 1 bytes inside a block of size 83 free'd
==359816==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359816==    by 0x407734: f_search_bn (get_next_line_utils.c:118)
==359816==    by 0x4073EC: get_next_line (get_next_line.c:51)
==359816==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359816==    by 0x4067C7: main (mandatory.cpp:106)
==359816==  Block was alloc'd at
==359816==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359816==    by 0x407586: ft_strjoin (get_next_line_utils.c:64)
==359816==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359816==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359816==    by 0x4067C7: main (mandatory.cpp:106)
==359816== 
==359816== Invalid read of size 1
==359816==    at 0x407756: f_del_front_bn (get_next_line_utils.c:162)
==359816==    by 0x4073FF: get_next_line (get_next_line.c:52)
==359816==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359816==    by 0x4067D9: main (mandatory.cpp:106)
==359816==  Address 0x4de6b10 is 0 bytes inside a block of size 124 free'd
==359816==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359816==    by 0x407734: f_search_bn (get_next_line_utils.c:118)
==359816==    by 0x4073EC: get_next_line (get_next_line.c:51)
==359816==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359816==    by 0x4067D9: main (mandatory.cpp:106)
==359816==  Block was alloc'd at
==359816==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359816==    by 0x407586: ft_strjoin (get_next_line_utils.c:64)
==359816==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359816==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359816==    by 0x4067D9: main (mandatory.cpp:106)
==359816== 
==359816== Invalid read of size 1
==359816==    at 0x4075DC: ft_strjoin (get_next_line_utils.c:68)
==359816==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359816==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359816==    by 0x4067EB: main (mandatory.cpp:106)
==359816==  Address 0x4de6b3c is 44 bytes inside a block of size 124 free'd
==359816==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359816==    by 0x407734: f_search_bn (get_next_line_utils.c:118)
==359816==    by 0x4073EC: get_next_line (get_next_line.c:51)
==359816==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359816==    by 0x4067D9: main (mandatory.cpp:106)
==359816==  Block was alloc'd at
==359816==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359816==    by 0x407586: ft_strjoin (get_next_line_utils.c:64)
==359816==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359816==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359816==    by 0x4067D9: main (mandatory.cpp:106)
==359816== 
==359816== Invalid read of size 1
==359816==    at 0x4075BF: ft_strjoin (get_next_line_utils.c:70)
==359816==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359816==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359816==    by 0x4067EB: main (mandatory.cpp:106)
==359816==  Address 0x4de6b3c is 44 bytes inside a block of size 124 free'd
==359816==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359816==    by 0x407734: f_search_bn (get_next_line_utils.c:118)
==359816==    by 0x4073EC: get_next_line (get_next_line.c:51)
==359816==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359816==    by 0x4067D9: main (mandatory.cpp:106)
==359816==  Block was alloc'd at
==359816==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359816==    by 0x407586: ft_strjoin (get_next_line_utils.c:64)
==359816==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359816==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359816==    by 0x4067D9: main (mandatory.cpp:106)
==359816== 
==359816== Invalid read of size 1
==359816==    at 0x407756: f_del_front_bn (get_next_line_utils.c:162)
==359816==    by 0x4073FF: get_next_line (get_next_line.c:52)
==359816==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359816==    by 0x4067EB: main (mandatory.cpp:106)
==359816==  Address 0x4de6cb0 is 0 bytes inside a block of size 87 free'd
==359816==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359816==    by 0x407734: f_search_bn (get_next_line_utils.c:118)
==359816==    by 0x4073EC: get_next_line (get_next_line.c:51)
==359816==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359816==    by 0x4067EB: main (mandatory.cpp:106)
==359816==  Block was alloc'd at
==359816==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359816==    by 0x407586: ft_strjoin (get_next_line_utils.c:64)
==359816==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359816==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359816==    by 0x4067EB: main (mandatory.cpp:106)
==359816== 
==359816== Invalid read of size 1
==359816==    at 0x4075DC: ft_strjoin (get_next_line_utils.c:68)
==359816==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359816==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359816==    by 0x4067FD: main (mandatory.cpp:106)
==359816==  Address 0x4de6cb1 is 1 bytes inside a block of size 87 free'd
==359816==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359816==    by 0x407734: f_search_bn (get_next_line_utils.c:118)
==359816==    by 0x4073EC: get_next_line (get_next_line.c:51)
==359816==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359816==    by 0x4067EB: main (mandatory.cpp:106)
==359816==  Block was alloc'd at
==359816==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359816==    by 0x407586: ft_strjoin (get_next_line_utils.c:64)
==359816==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359816==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359816==    by 0x4067EB: main (mandatory.cpp:106)
==359816== 
==359816== Invalid read of size 1
==359816==    at 0x4075BF: ft_strjoin (get_next_line_utils.c:70)
==359816==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359816==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359816==    by 0x4067FD: main (mandatory.cpp:106)
==359816==  Address 0x4de6cb1 is 1 bytes inside a block of size 87 free'd
==359816==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359816==    by 0x407734: f_search_bn (get_next_line_utils.c:118)
==359816==    by 0x4073EC: get_next_line (get_next_line.c:51)
==359816==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359816==    by 0x4067EB: main (mandatory.cpp:106)
==359816==  Block was alloc'd at
==359816==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359816==    by 0x407586: ft_strjoin (get_next_line_utils.c:64)
==359816==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359816==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359816==    by 0x4067EB: main (mandatory.cpp:106)
==359816== 
==359816== Invalid read of size 1
==359816==    at 0x407756: f_del_front_bn (get_next_line_utils.c:162)
==359816==    by 0x4073FF: get_next_line (get_next_line.c:52)
==359816==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359816==    by 0x4067FD: main (mandatory.cpp:106)
==359816==  Address 0x4de6e10 is 0 bytes inside a block of size 86 free'd
==359816==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359816==    by 0x407734: f_search_bn (get_next_line_utils.c:118)
==359816==    by 0x4073EC: get_next_line (get_next_line.c:51)
==359816==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359816==    by 0x4067FD: main (mandatory.cpp:106)
==359816==  Block was alloc'd at
==359816==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359816==    by 0x407586: ft_strjoin (get_next_line_utils.c:64)
==359816==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359816==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359816==    by 0x4067FD: main (mandatory.cpp:106)
==359816== 
==359816== Invalid read of size 1
==359816==    at 0x4075DC: ft_strjoin (get_next_line_utils.c:68)
==359816==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359816==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359816==    by 0x40680F: main (mandatory.cpp:106)
==359816==  Address 0x4de6e3b is 43 bytes inside a block of size 86 free'd
==359816==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359816==    by 0x407734: f_search_bn (get_next_line_utils.c:118)
==359816==    by 0x4073EC: get_next_line (get_next_line.c:51)
==359816==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359816==    by 0x4067FD: main (mandatory.cpp:106)
==359816==  Block was alloc'd at
==359816==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359816==    by 0x407586: ft_strjoin (get_next_line_utils.c:64)
==359816==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359816==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359816==    by 0x4067FD: main (mandatory.cpp:106)
==359816== 
==359816== Invalid read of size 1
==359816==    at 0x4075BF: ft_strjoin (get_next_line_utils.c:70)
==359816==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359816==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359816==    by 0x40680F: main (mandatory.cpp:106)
==359816==  Address 0x4de6e3b is 43 bytes inside a block of size 86 free'd
==359816==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359816==    by 0x407734: f_search_bn (get_next_line_utils.c:118)
==359816==    by 0x4073EC: get_next_line (get_next_line.c:51)
==359816==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359816==    by 0x4067FD: main (mandatory.cpp:106)
==359816==  Block was alloc'd at
==359816==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359816==    by 0x407586: ft_strjoin (get_next_line_utils.c:64)
==359816==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359816==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359816==    by 0x4067FD: main (mandatory.cpp:106)
==359816== 
==359816== Invalid read of size 1
==359816==    at 0x407756: f_del_front_bn (get_next_line_utils.c:162)
==359816==    by 0x4073FF: get_next_line (get_next_line.c:52)
==359816==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359816==    by 0x40680F: main (mandatory.cpp:106)
==359816==  Address 0x4de6f90 is 0 bytes inside a block of size 43 free'd
==359816==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359816==    by 0x407734: f_search_bn (get_next_line_utils.c:118)
==359816==    by 0x4073EC: get_next_line (get_next_line.c:51)
==359816==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359816==    by 0x40680F: main (mandatory.cpp:106)
==359816==  Block was alloc'd at
==359816==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359816==    by 0x407586: ft_strjoin (get_next_line_utils.c:64)
==359816==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359816==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359816==    by 0x40680F: main (mandatory.cpp:106)
==359816== 
==359816== Invalid read of size 1
==359816==    at 0x4075DC: ft_strjoin (get_next_line_utils.c:68)
==359816==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359816==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359816==    by 0x406821: main (mandatory.cpp:106)
==359816==  Address 0x4de6f91 is 1 bytes inside a block of size 43 free'd
==359816==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359816==    by 0x407734: f_search_bn (get_next_line_utils.c:118)
==359816==    by 0x4073EC: get_next_line (get_next_line.c:51)
==359816==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359816==    by 0x40680F: main (mandatory.cpp:106)
==359816==  Block was alloc'd at
==359816==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359816==    by 0x407586: ft_strjoin (get_next_line_utils.c:64)
==359816==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359816==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359816==    by 0x40680F: main (mandatory.cpp:106)
==359816== 
==359816== Invalid read of size 1
==359816==    at 0x4075BF: ft_strjoin (get_next_line_utils.c:70)
==359816==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359816==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359816==    by 0x406821: main (mandatory.cpp:106)
==359816==  Address 0x4de6f91 is 1 bytes inside a block of size 43 free'd
==359816==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359816==    by 0x407734: f_search_bn (get_next_line_utils.c:118)
==359816==    by 0x4073EC: get_next_line (get_next_line.c:51)
==359816==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359816==    by 0x40680F: main (mandatory.cpp:106)
==359816==  Block was alloc'd at
==359816==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359816==    by 0x407586: ft_strjoin (get_next_line_utils.c:64)
==359816==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359816==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359816==    by 0x40680F: main (mandatory.cpp:106)
==359816== 
==359816== Invalid read of size 1
==359816==    at 0x484FBD4: strcmp (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359816==    by 0x402D0A: gnl(int, char const*) (gnl.cpp:24)
==359816==    by 0x406821: main (mandatory.cpp:106)
==359816==  Address 0x0 is not stack'd, malloc'd or (recently) free'd
==359816== 
==359816== 1 bytes in 1 blocks are definitely lost in loss record 1 of 1
==359816==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359816==    by 0x407396: get_next_line (get_next_line.c:43)
==359816==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359816==    by 0x406791: main (mandatory.cpp:106)
==359816== 
==359817== Invalid read of size 1
==359817==    at 0x407756: f_del_front_bn (get_next_line_utils.c:162)
==359817==    by 0x4073FF: get_next_line (get_next_line.c:52)
==359817==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359817==    by 0x406A4D: main (mandatory.cpp:119)
==359817==  Address 0x4de68e0 is 0 bytes inside a block of size 43 free'd
==359817==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359817==    by 0x407734: f_search_bn (get_next_line_utils.c:118)
==359817==    by 0x4073EC: get_next_line (get_next_line.c:51)
==359817==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359817==    by 0x406A4D: main (mandatory.cpp:119)
==359817==  Block was alloc'd at
==359817==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359817==    by 0x407586: ft_strjoin (get_next_line_utils.c:64)
==359817==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359817==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359817==    by 0x406A4D: main (mandatory.cpp:119)
==359817== 
==359817== Invalid read of size 1
==359817==    at 0x407535: ft_strlen (get_next_line_utils.c:43)
==359817==    by 0x407562: ft_strjoin (get_next_line_utils.c:59)
==359817==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359817==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359817==    by 0x406A5F: main (mandatory.cpp:119)
==359817==  Address 0x4de690a is 42 bytes inside a block of size 43 free'd
==359817==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359817==    by 0x407734: f_search_bn (get_next_line_utils.c:118)
==359817==    by 0x4073EC: get_next_line (get_next_line.c:51)
==359817==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359817==    by 0x406A4D: main (mandatory.cpp:119)
==359817==  Block was alloc'd at
==359817==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359817==    by 0x407586: ft_strjoin (get_next_line_utils.c:64)
==359817==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359817==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359817==    by 0x406A4D: main (mandatory.cpp:119)
==359817== 
==359817== Invalid read of size 1
==359817==    at 0x4075DC: ft_strjoin (get_next_line_utils.c:68)
==359817==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359817==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359817==    by 0x406A5F: main (mandatory.cpp:119)
==359817==  Address 0x4de690a is 42 bytes inside a block of size 43 free'd
==359817==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359817==    by 0x407734: f_search_bn (get_next_line_utils.c:118)
==359817==    by 0x4073EC: get_next_line (get_next_line.c:51)
==359817==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359817==    by 0x406A4D: main (mandatory.cpp:119)
==359817==  Block was alloc'd at
==359817==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359817==    by 0x407586: ft_strjoin (get_next_line_utils.c:64)
==359817==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359817==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359817==    by 0x406A4D: main (mandatory.cpp:119)
==359817== 
==359817== Invalid read of size 1
==359817==    at 0x407756: f_del_front_bn (get_next_line_utils.c:162)
==359817==    by 0x4073FF: get_next_line (get_next_line.c:52)
==359817==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359817==    by 0x406A5F: main (mandatory.cpp:119)
==359817==  Address 0x4de6a30 is 0 bytes inside a block of size 43 free'd
==359817==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359817==    by 0x407734: f_search_bn (get_next_line_utils.c:118)
==359817==    by 0x4073EC: get_next_line (get_next_line.c:51)
==359817==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359817==    by 0x406A5F: main (mandatory.cpp:119)
==359817==  Block was alloc'd at
==359817==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359817==    by 0x407586: ft_strjoin (get_next_line_utils.c:64)
==359817==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359817==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359817==    by 0x406A5F: main (mandatory.cpp:119)
==359817== 
==359817== Invalid read of size 1
==359817==    at 0x4075DC: ft_strjoin (get_next_line_utils.c:68)
==359817==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359817==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359817==    by 0x406A71: main (mandatory.cpp:119)
==359817==  Address 0x4de6a31 is 1 bytes inside a block of size 43 free'd
==359817==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359817==    by 0x407734: f_search_bn (get_next_line_utils.c:118)
==359817==    by 0x4073EC: get_next_line (get_next_line.c:51)
==359817==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359817==    by 0x406A5F: main (mandatory.cpp:119)
==359817==  Block was alloc'd at
==359817==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359817==    by 0x407586: ft_strjoin (get_next_line_utils.c:64)
==359817==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359817==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359817==    by 0x406A5F: main (mandatory.cpp:119)
==359817== 
==359817== Invalid read of size 1
==359817==    at 0x4075BF: ft_strjoin (get_next_line_utils.c:70)
==359817==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359817==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359817==    by 0x406A71: main (mandatory.cpp:119)
==359817==  Address 0x4de6a31 is 1 bytes inside a block of size 43 free'd
==359817==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359817==    by 0x407734: f_search_bn (get_next_line_utils.c:118)
==359817==    by 0x4073EC: get_next_line (get_next_line.c:51)
==359817==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359817==    by 0x406A5F: main (mandatory.cpp:119)
==359817==  Block was alloc'd at
==359817==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359817==    by 0x407586: ft_strjoin (get_next_line_utils.c:64)
==359817==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359817==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359817==    by 0x406A5F: main (mandatory.cpp:119)
==359817== 
==359817== Invalid read of size 1
==359817==    at 0x407756: f_del_front_bn (get_next_line_utils.c:162)
==359817==    by 0x4073FF: get_next_line (get_next_line.c:52)
==359817==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359817==    by 0x406A71: main (mandatory.cpp:119)
==359817==  Address 0x4de6b60 is 0 bytes inside a block of size 84 free'd
==359817==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359817==    by 0x407734: f_search_bn (get_next_line_utils.c:118)
==359817==    by 0x4073EC: get_next_line (get_next_line.c:51)
==359817==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359817==    by 0x406A71: main (mandatory.cpp:119)
==359817==  Block was alloc'd at
==359817==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359817==    by 0x407586: ft_strjoin (get_next_line_utils.c:64)
==359817==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359817==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359817==    by 0x406A71: main (mandatory.cpp:119)
==359817== 
==359817== Invalid read of size 1
==359817==    at 0x4075DC: ft_strjoin (get_next_line_utils.c:68)
==359817==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359817==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359817==    by 0x406A83: main (mandatory.cpp:119)
==359817==  Address 0x4de6b8b is 43 bytes inside a block of size 84 free'd
==359817==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359817==    by 0x407734: f_search_bn (get_next_line_utils.c:118)
==359817==    by 0x4073EC: get_next_line (get_next_line.c:51)
==359817==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359817==    by 0x406A71: main (mandatory.cpp:119)
==359817==  Block was alloc'd at
==359817==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359817==    by 0x407586: ft_strjoin (get_next_line_utils.c:64)
==359817==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359817==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359817==    by 0x406A71: main (mandatory.cpp:119)
==359817== 
==359817== Invalid read of size 1
==359817==    at 0x4075BF: ft_strjoin (get_next_line_utils.c:70)
==359817==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359817==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359817==    by 0x406A83: main (mandatory.cpp:119)
==359817==  Address 0x4de6b8b is 43 bytes inside a block of size 84 free'd
==359817==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359817==    by 0x407734: f_search_bn (get_next_line_utils.c:118)
==359817==    by 0x4073EC: get_next_line (get_next_line.c:51)
==359817==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359817==    by 0x406A71: main (mandatory.cpp:119)
==359817==  Block was alloc'd at
==359817==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359817==    by 0x407586: ft_strjoin (get_next_line_utils.c:64)
==359817==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359817==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359817==    by 0x406A71: main (mandatory.cpp:119)
==359817== 
==359817== Invalid read of size 1
==359817==    at 0x407756: f_del_front_bn (get_next_line_utils.c:162)
==359817==    by 0x4073FF: get_next_line (get_next_line.c:52)
==359817==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359817==    by 0x406A83: main (mandatory.cpp:119)
==359817==  Address 0x4de6ce0 is 0 bytes inside a block of size 83 free'd
==359817==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359817==    by 0x407734: f_search_bn (get_next_line_utils.c:118)
==359817==    by 0x4073EC: get_next_line (get_next_line.c:51)
==359817==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359817==    by 0x406A83: main (mandatory.cpp:119)
==359817==  Block was alloc'd at
==359817==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359817==    by 0x407586: ft_strjoin (get_next_line_utils.c:64)
==359817==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359817==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359817==    by 0x406A83: main (mandatory.cpp:119)
==359817== 
==359817== Invalid read of size 1
==359817==    at 0x4075DC: ft_strjoin (get_next_line_utils.c:68)
==359817==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359817==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359817==    by 0x406A95: main (mandatory.cpp:119)
==359817==  Address 0x4de6ce1 is 1 bytes inside a block of size 83 free'd
==359817==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359817==    by 0x407734: f_search_bn (get_next_line_utils.c:118)
==359817==    by 0x4073EC: get_next_line (get_next_line.c:51)
==359817==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359817==    by 0x406A83: main (mandatory.cpp:119)
==359817==  Block was alloc'd at
==359817==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359817==    by 0x407586: ft_strjoin (get_next_line_utils.c:64)
==359817==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359817==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359817==    by 0x406A83: main (mandatory.cpp:119)
==359817== 
==359817== Invalid read of size 1
==359817==    at 0x4075BF: ft_strjoin (get_next_line_utils.c:70)
==359817==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359817==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359817==    by 0x406A95: main (mandatory.cpp:119)
==359817==  Address 0x4de6ce1 is 1 bytes inside a block of size 83 free'd
==359817==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359817==    by 0x407734: f_search_bn (get_next_line_utils.c:118)
==359817==    by 0x4073EC: get_next_line (get_next_line.c:51)
==359817==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359817==    by 0x406A83: main (mandatory.cpp:119)
==359817==  Block was alloc'd at
==359817==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359817==    by 0x407586: ft_strjoin (get_next_line_utils.c:64)
==359817==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359817==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359817==    by 0x406A83: main (mandatory.cpp:119)
==359817== 
==359817== Invalid read of size 1
==359817==    at 0x407756: f_del_front_bn (get_next_line_utils.c:162)
==359817==    by 0x4073FF: get_next_line (get_next_line.c:52)
==359817==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359817==    by 0x406A95: main (mandatory.cpp:119)
==359817==  Address 0x4de6e40 is 0 bytes inside a block of size 124 free'd
==359817==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359817==    by 0x407734: f_search_bn (get_next_line_utils.c:118)
==359817==    by 0x4073EC: get_next_line (get_next_line.c:51)
==359817==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359817==    by 0x406A95: main (mandatory.cpp:119)
==359817==  Block was alloc'd at
==359817==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359817==    by 0x407586: ft_strjoin (get_next_line_utils.c:64)
==359817==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359817==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359817==    by 0x406A95: main (mandatory.cpp:119)
==359817== 
==359817== Invalid read of size 1
==359817==    at 0x4075DC: ft_strjoin (get_next_line_utils.c:68)
==359817==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359817==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359817==    by 0x406AA7: main (mandatory.cpp:119)
==359817==  Address 0x4de6e6c is 44 bytes inside a block of size 124 free'd
==359817==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359817==    by 0x407734: f_search_bn (get_next_line_utils.c:118)
==359817==    by 0x4073EC: get_next_line (get_next_line.c:51)
==359817==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359817==    by 0x406A95: main (mandatory.cpp:119)
==359817==  Block was alloc'd at
==359817==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359817==    by 0x407586: ft_strjoin (get_next_line_utils.c:64)
==359817==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359817==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359817==    by 0x406A95: main (mandatory.cpp:119)
==359817== 
==359817== Invalid read of size 1
==359817==    at 0x4075BF: ft_strjoin (get_next_line_utils.c:70)
==359817==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359817==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359817==    by 0x406AA7: main (mandatory.cpp:119)
==359817==  Address 0x4de6e6c is 44 bytes inside a block of size 124 free'd
==359817==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359817==    by 0x407734: f_search_bn (get_next_line_utils.c:118)
==359817==    by 0x4073EC: get_next_line (get_next_line.c:51)
==359817==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359817==    by 0x406A95: main (mandatory.cpp:119)
==359817==  Block was alloc'd at
==359817==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359817==    by 0x407586: ft_strjoin (get_next_line_utils.c:64)
==359817==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359817==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359817==    by 0x406A95: main (mandatory.cpp:119)
==359817== 
==359817== Invalid read of size 1
==359817==    at 0x407756: f_del_front_bn (get_next_line_utils.c:162)
==359817==    by 0x4073FF: get_next_line (get_next_line.c:52)
==359817==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359817==    by 0x406AA7: main (mandatory.cpp:119)
==359817==  Address 0x4de6fe0 is 0 bytes inside a block of size 88 free'd
==359817==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359817==    by 0x407734: f_search_bn (get_next_line_utils.c:118)
==359817==    by 0x4073EC: get_next_line (get_next_line.c:51)
==359817==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359817==    by 0x406AA7: main (mandatory.cpp:119)
==359817==  Block was alloc'd at
==359817==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359817==    by 0x407586: ft_strjoin (get_next_line_utils.c:64)
==359817==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359817==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359817==    by 0x406AA7: main (mandatory.cpp:119)
==359817== 
==359817== Invalid read of size 1
==359817==    at 0x4075DC: ft_strjoin (get_next_line_utils.c:68)
==359817==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359817==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359817==    by 0x406AB9: main (mandatory.cpp:119)
==359817==  Address 0x4de6fe1 is 1 bytes inside a block of size 88 free'd
==359817==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359817==    by 0x407734: f_search_bn (get_next_line_utils.c:118)
==359817==    by 0x4073EC: get_next_line (get_next_line.c:51)
==359817==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359817==    by 0x406AA7: main (mandatory.cpp:119)
==359817==  Block was alloc'd at
==359817==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359817==    by 0x407586: ft_strjoin (get_next_line_utils.c:64)
==359817==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359817==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359817==    by 0x406AA7: main (mandatory.cpp:119)
==359817== 
==359817== Invalid read of size 1
==359817==    at 0x4075BF: ft_strjoin (get_next_line_utils.c:70)
==359817==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359817==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359817==    by 0x406AB9: main (mandatory.cpp:119)
==359817==  Address 0x4de6fe1 is 1 bytes inside a block of size 88 free'd
==359817==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359817==    by 0x407734: f_search_bn (get_next_line_utils.c:118)
==359817==    by 0x4073EC: get_next_line (get_next_line.c:51)
==359817==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359817==    by 0x406AA7: main (mandatory.cpp:119)
==359817==  Block was alloc'd at
==359817==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359817==    by 0x407586: ft_strjoin (get_next_line_utils.c:64)
==359817==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359817==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359817==    by 0x406AA7: main (mandatory.cpp:119)
==359817== 
==359817== Invalid read of size 1
==359817==    at 0x407756: f_del_front_bn (get_next_line_utils.c:162)
==359817==    by 0x4073FF: get_next_line (get_next_line.c:52)
==359817==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359817==    by 0x406AB9: main (mandatory.cpp:119)
==359817==  Address 0x4de7140 is 0 bytes inside a block of size 87 free'd
==359817==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359817==    by 0x407734: f_search_bn (get_next_line_utils.c:118)
==359817==    by 0x4073EC: get_next_line (get_next_line.c:51)
==359817==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359817==    by 0x406AB9: main (mandatory.cpp:119)
==359817==  Block was alloc'd at
==359817==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359817==    by 0x407586: ft_strjoin (get_next_line_utils.c:64)
==359817==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359817==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359817==    by 0x406AB9: main (mandatory.cpp:119)
==359817== 
==359817== Invalid read of size 1
==359817==    at 0x4075DC: ft_strjoin (get_next_line_utils.c:68)
==359817==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359817==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359817==    by 0x406ACB: main (mandatory.cpp:119)
==359817==  Address 0x4de716b is 43 bytes inside a block of size 87 free'd
==359817==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359817==    by 0x407734: f_search_bn (get_next_line_utils.c:118)
==359817==    by 0x4073EC: get_next_line (get_next_line.c:51)
==359817==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359817==    by 0x406AB9: main (mandatory.cpp:119)
==359817==  Block was alloc'd at
==359817==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359817==    by 0x407586: ft_strjoin (get_next_line_utils.c:64)
==359817==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359817==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359817==    by 0x406AB9: main (mandatory.cpp:119)
==359817== 
==359817== Invalid read of size 1
==359817==    at 0x4075BF: ft_strjoin (get_next_line_utils.c:70)
==359817==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359817==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359817==    by 0x406ACB: main (mandatory.cpp:119)
==359817==  Address 0x4de716b is 43 bytes inside a block of size 87 free'd
==359817==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359817==    by 0x407734: f_search_bn (get_next_line_utils.c:118)
==359817==    by 0x4073EC: get_next_line (get_next_line.c:51)
==359817==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359817==    by 0x406AB9: main (mandatory.cpp:119)
==359817==  Block was alloc'd at
==359817==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359817==    by 0x407586: ft_strjoin (get_next_line_utils.c:64)
==359817==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359817==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359817==    by 0x406AB9: main (mandatory.cpp:119)
==359817== 
==359817== Invalid read of size 1
==359817==    at 0x407756: f_del_front_bn (get_next_line_utils.c:162)
==359817==    by 0x4073FF: get_next_line (get_next_line.c:52)
==359817==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359817==    by 0x406ACB: main (mandatory.cpp:119)
==359817==  Address 0x4de72c0 is 0 bytes inside a block of size 44 free'd
==359817==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359817==    by 0x407734: f_search_bn (get_next_line_utils.c:118)
==359817==    by 0x4073EC: get_next_line (get_next_line.c:51)
==359817==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359817==    by 0x406ACB: main (mandatory.cpp:119)
==359817==  Block was alloc'd at
==359817==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359817==    by 0x407586: ft_strjoin (get_next_line_utils.c:64)
==359817==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359817==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359817==    by 0x406ACB: main (mandatory.cpp:119)
==359817== 
==359817== Invalid read of size 1
==359817==    at 0x4075DC: ft_strjoin (get_next_line_utils.c:68)
==359817==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359817==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359817==    by 0x406ADD: main (mandatory.cpp:119)
==359817==  Address 0x4de72c1 is 1 bytes inside a block of size 44 free'd
==359817==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359817==    by 0x407734: f_search_bn (get_next_line_utils.c:118)
==359817==    by 0x4073EC: get_next_line (get_next_line.c:51)
==359817==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359817==    by 0x406ACB: main (mandatory.cpp:119)
==359817==  Block was alloc'd at
==359817==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359817==    by 0x407586: ft_strjoin (get_next_line_utils.c:64)
==359817==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359817==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359817==    by 0x406ACB: main (mandatory.cpp:119)
==359817== 
==359817== Invalid read of size 1
==359817==    at 0x4075BF: ft_strjoin (get_next_line_utils.c:70)
==359817==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359817==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359817==    by 0x406ADD: main (mandatory.cpp:119)
==359817==  Address 0x4de72c1 is 1 bytes inside a block of size 44 free'd
==359817==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359817==    by 0x407734: f_search_bn (get_next_line_utils.c:118)
==359817==    by 0x4073EC: get_next_line (get_next_line.c:51)
==359817==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359817==    by 0x406ACB: main (mandatory.cpp:119)
==359817==  Block was alloc'd at
==359817==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359817==    by 0x407586: ft_strjoin (get_next_line_utils.c:64)
==359817==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359817==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359817==    by 0x406ACB: main (mandatory.cpp:119)
==359817== 
==359817== Invalid read of size 1
==359817==    at 0x407756: f_del_front_bn (get_next_line_utils.c:162)
==359817==    by 0x4073FF: get_next_line (get_next_line.c:52)
==359817==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359817==    by 0x406ADD: main (mandatory.cpp:119)
==359817==  Address 0x4de73f0 is 0 bytes inside a block of size 43 free'd
==359817==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359817==    by 0x407734: f_search_bn (get_next_line_utils.c:118)
==359817==    by 0x4073EC: get_next_line (get_next_line.c:51)
==359817==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359817==    by 0x406ADD: main (mandatory.cpp:119)
==359817==  Block was alloc'd at
==359817==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359817==    by 0x407586: ft_strjoin (get_next_line_utils.c:64)
==359817==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359817==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359817==    by 0x406ADD: main (mandatory.cpp:119)
==359817== 
==359817== Invalid read of size 1
==359817==    at 0x4075DC: ft_strjoin (get_next_line_utils.c:68)
==359817==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359817==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359817==    by 0x406AE9: main (mandatory.cpp:119)
==359817==  Address 0x4de741a is 42 bytes inside a block of size 43 free'd
==359817==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359817==    by 0x407734: f_search_bn (get_next_line_utils.c:118)
==359817==    by 0x4073EC: get_next_line (get_next_line.c:51)
==359817==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359817==    by 0x406ADD: main (mandatory.cpp:119)
==359817==  Block was alloc'd at
==359817==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359817==    by 0x407586: ft_strjoin (get_next_line_utils.c:64)
==359817==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359817==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359817==    by 0x406ADD: main (mandatory.cpp:119)
==359817== 
==359817== 1 bytes in 1 blocks are definitely lost in loss record 1 of 1
==359817==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359817==    by 0x407396: get_next_line (get_next_line.c:43)
==359817==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359817==    by 0x406A4D: main (mandatory.cpp:119)
==359817== 
==359824== Invalid write of size 1
==359824==    at 0x4077F9: f_last_line (get_next_line_utils.c:209)
==359824==    by 0x407432: get_next_line (get_next_line.c:59)
==359824==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359824==    by 0x406D09: main (mandatory.cpp:132)
==359824==  Address 0x4f13850 is 0 bytes after a block of size 10,000 alloc'd
==359824==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359824==    by 0x407799: f_last_line (get_next_line_utils.c:199)
==359824==    by 0x407432: get_next_line (get_next_line.c:59)
==359824==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359824==    by 0x406D09: main (mandatory.cpp:132)
==359824== 
==359824== Invalid read of size 1
==359824==    at 0x484FBE8: strcmp (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359824==    by 0x402D0A: gnl(int, char const*) (gnl.cpp:24)
==359824==    by 0x406D09: main (mandatory.cpp:132)
==359824==  Address 0x4f13850 is 0 bytes after a block of size 10,000 alloc'd
==359824==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359824==    by 0x407799: f_last_line (get_next_line_utils.c:199)
==359824==    by 0x407432: get_next_line (get_next_line.c:59)
==359824==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359824==    by 0x406D09: main (mandatory.cpp:132)
==359824== 
==359824== 1 bytes in 1 blocks are definitely lost in loss record 1 of 2
==359824==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359824==    by 0x407396: get_next_line (get_next_line.c:43)
==359824==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359824==    by 0x406D09: main (mandatory.cpp:132)
==359824== 
==359824== 1,204,761 bytes in 239 blocks are definitely lost in loss record 2 of 2
==359824==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359824==    by 0x407586: ft_strjoin (get_next_line_utils.c:64)
==359824==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359824==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359824==    by 0x406D09: main (mandatory.cpp:132)
==359824== 
==359827== Invalid read of size 1
==359827==    at 0x407756: f_del_front_bn (get_next_line_utils.c:162)
==359827==    by 0x4073FF: get_next_line (get_next_line.c:52)
==359827==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359827==    by 0x406F35: main (mandatory.cpp:136)
==359827==  Address 0x4f0ecf0 is 0 bytes inside a block of size 10,002 free'd
==359827==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359827==    by 0x407734: f_search_bn (get_next_line_utils.c:118)
==359827==    by 0x4073EC: get_next_line (get_next_line.c:51)
==359827==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359827==    by 0x406F35: main (mandatory.cpp:136)
==359827==  Block was alloc'd at
==359827==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359827==    by 0x407586: ft_strjoin (get_next_line_utils.c:64)
==359827==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359827==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359827==    by 0x406F35: main (mandatory.cpp:136)
==359827== 
==359827== Invalid read of size 1
==359827==    at 0x407535: ft_strlen (get_next_line_utils.c:43)
==359827==    by 0x407562: ft_strjoin (get_next_line_utils.c:59)
==359827==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359827==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359827==    by 0x406F41: main (mandatory.cpp:136)
==359827==  Address 0x4f11401 is 10,001 bytes inside a block of size 10,002 free'd
==359827==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359827==    by 0x407734: f_search_bn (get_next_line_utils.c:118)
==359827==    by 0x4073EC: get_next_line (get_next_line.c:51)
==359827==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359827==    by 0x406F35: main (mandatory.cpp:136)
==359827==  Block was alloc'd at
==359827==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359827==    by 0x407586: ft_strjoin (get_next_line_utils.c:64)
==359827==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359827==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359827==    by 0x406F35: main (mandatory.cpp:136)
==359827== 
==359827== Invalid read of size 1
==359827==    at 0x4075DC: ft_strjoin (get_next_line_utils.c:68)
==359827==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359827==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359827==    by 0x406F41: main (mandatory.cpp:136)
==359827==  Address 0x4f11401 is 10,001 bytes inside a block of size 10,002 free'd
==359827==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359827==    by 0x407734: f_search_bn (get_next_line_utils.c:118)
==359827==    by 0x4073EC: get_next_line (get_next_line.c:51)
==359827==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359827==    by 0x406F35: main (mandatory.cpp:136)
==359827==  Block was alloc'd at
==359827==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359827==    by 0x407586: ft_strjoin (get_next_line_utils.c:64)
==359827==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359827==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359827==    by 0x406F35: main (mandatory.cpp:136)
==359827== 
==359827== 1 bytes in 1 blocks are definitely lost in loss record 1 of 2
==359827==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359827==    by 0x407396: get_next_line (get_next_line.c:43)
==359827==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359827==    by 0x406F35: main (mandatory.cpp:136)
==359827== 
==359827== 1,194,760 bytes in 238 blocks are definitely lost in loss record 2 of 2
==359827==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359827==    by 0x407586: ft_strjoin (get_next_line_utils.c:64)
==359827==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359827==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359827==    by 0x406F35: main (mandatory.cpp:136)
==359827== 
==359828== Invalid read of size 1
==359828==    at 0x407756: f_del_front_bn (get_next_line_utils.c:162)
==359828==    by 0x4073FF: get_next_line (get_next_line.c:52)
==359828==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359828==    by 0x407160: main (mandatory.cpp:141)
==359828==  Address 0x4de6f00 is 0 bytes inside a block of size 43 free'd
==359828==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359828==    by 0x407734: f_search_bn (get_next_line_utils.c:118)
==359828==    by 0x4073EC: get_next_line (get_next_line.c:51)
==359828==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359828==    by 0x407160: main (mandatory.cpp:141)
==359828==  Block was alloc'd at
==359828==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359828==    by 0x407586: ft_strjoin (get_next_line_utils.c:64)
==359828==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359828==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359828==    by 0x407160: main (mandatory.cpp:141)
==359828== 
==359828== Invalid read of size 1
==359828==    at 0x407535: ft_strlen (get_next_line_utils.c:43)
==359828==    by 0x407562: ft_strjoin (get_next_line_utils.c:59)
==359828==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359828==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359828==    by 0x407171: main (mandatory.cpp:141)
==359828==  Address 0x4de6f2a is 42 bytes inside a block of size 43 free'd
==359828==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359828==    by 0x407734: f_search_bn (get_next_line_utils.c:118)
==359828==    by 0x4073EC: get_next_line (get_next_line.c:51)
==359828==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359828==    by 0x407160: main (mandatory.cpp:141)
==359828==  Block was alloc'd at
==359828==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359828==    by 0x407586: ft_strjoin (get_next_line_utils.c:64)
==359828==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359828==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359828==    by 0x407160: main (mandatory.cpp:141)
==359828== 
==359828== Invalid read of size 1
==359828==    at 0x4075DC: ft_strjoin (get_next_line_utils.c:68)
==359828==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359828==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359828==    by 0x407171: main (mandatory.cpp:141)
==359828==  Address 0x4de6f2a is 42 bytes inside a block of size 43 free'd
==359828==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359828==    by 0x407734: f_search_bn (get_next_line_utils.c:118)
==359828==    by 0x4073EC: get_next_line (get_next_line.c:51)
==359828==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359828==    by 0x407160: main (mandatory.cpp:141)
==359828==  Block was alloc'd at
==359828==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359828==    by 0x407586: ft_strjoin (get_next_line_utils.c:64)
==359828==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359828==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359828==    by 0x407160: main (mandatory.cpp:141)
==359828== 
==359828== Invalid read of size 1
==359828==    at 0x407756: f_del_front_bn (get_next_line_utils.c:162)
==359828==    by 0x4073FF: get_next_line (get_next_line.c:52)
==359828==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359828==    by 0x407171: main (mandatory.cpp:141)
==359828==  Address 0x4de7050 is 0 bytes inside a block of size 43 free'd
==359828==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359828==    by 0x407734: f_search_bn (get_next_line_utils.c:118)
==359828==    by 0x4073EC: get_next_line (get_next_line.c:51)
==359828==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359828==    by 0x407171: main (mandatory.cpp:141)
==359828==  Block was alloc'd at
==359828==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359828==    by 0x407586: ft_strjoin (get_next_line_utils.c:64)
==359828==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359828==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359828==    by 0x407171: main (mandatory.cpp:141)
==359828== 
==359828== Invalid read of size 1
==359828==    at 0x4075DC: ft_strjoin (get_next_line_utils.c:68)
==359828==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359828==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359828==    by 0x407182: main (mandatory.cpp:141)
==359828==  Address 0x4de7051 is 1 bytes inside a block of size 43 free'd
==359828==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359828==    by 0x407734: f_search_bn (get_next_line_utils.c:118)
==359828==    by 0x4073EC: get_next_line (get_next_line.c:51)
==359828==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359828==    by 0x407171: main (mandatory.cpp:141)
==359828==  Block was alloc'd at
==359828==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359828==    by 0x407586: ft_strjoin (get_next_line_utils.c:64)
==359828==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359828==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359828==    by 0x407171: main (mandatory.cpp:141)
==359828== 
==359828== Invalid read of size 1
==359828==    at 0x4075BF: ft_strjoin (get_next_line_utils.c:70)
==359828==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359828==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359828==    by 0x407182: main (mandatory.cpp:141)
==359828==  Address 0x4de7051 is 1 bytes inside a block of size 43 free'd
==359828==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359828==    by 0x407734: f_search_bn (get_next_line_utils.c:118)
==359828==    by 0x4073EC: get_next_line (get_next_line.c:51)
==359828==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359828==    by 0x407171: main (mandatory.cpp:141)
==359828==  Block was alloc'd at
==359828==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359828==    by 0x407586: ft_strjoin (get_next_line_utils.c:64)
==359828==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359828==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359828==    by 0x407171: main (mandatory.cpp:141)
==359828== 
==359828== Invalid read of size 1
==359828==    at 0x407756: f_del_front_bn (get_next_line_utils.c:162)
==359828==    by 0x4073FF: get_next_line (get_next_line.c:52)
==359828==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359828==    by 0x407182: main (mandatory.cpp:141)
==359828==  Address 0x4de7180 is 0 bytes inside a block of size 84 free'd
==359828==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359828==    by 0x407734: f_search_bn (get_next_line_utils.c:118)
==359828==    by 0x4073EC: get_next_line (get_next_line.c:51)
==359828==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359828==    by 0x407182: main (mandatory.cpp:141)
==359828==  Block was alloc'd at
==359828==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359828==    by 0x407586: ft_strjoin (get_next_line_utils.c:64)
==359828==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359828==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359828==    by 0x407182: main (mandatory.cpp:141)
==359828== 
==359828== Invalid read of size 1
==359828==    at 0x4075DC: ft_strjoin (get_next_line_utils.c:68)
==359828==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359828==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359828==    by 0x407193: main (mandatory.cpp:141)
==359828==  Address 0x4de71ab is 43 bytes inside a block of size 84 free'd
==359828==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359828==    by 0x407734: f_search_bn (get_next_line_utils.c:118)
==359828==    by 0x4073EC: get_next_line (get_next_line.c:51)
==359828==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359828==    by 0x407182: main (mandatory.cpp:141)
==359828==  Block was alloc'd at
==359828==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359828==    by 0x407586: ft_strjoin (get_next_line_utils.c:64)
==359828==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359828==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359828==    by 0x407182: main (mandatory.cpp:141)
==359828== 
==359828== Invalid read of size 1
==359828==    at 0x4075BF: ft_strjoin (get_next_line_utils.c:70)
==359828==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359828==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359828==    by 0x407193: main (mandatory.cpp:141)
==359828==  Address 0x4de71ab is 43 bytes inside a block of size 84 free'd
==359828==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359828==    by 0x407734: f_search_bn (get_next_line_utils.c:118)
==359828==    by 0x4073EC: get_next_line (get_next_line.c:51)
==359828==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359828==    by 0x407182: main (mandatory.cpp:141)
==359828==  Block was alloc'd at
==359828==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359828==    by 0x407586: ft_strjoin (get_next_line_utils.c:64)
==359828==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359828==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359828==    by 0x407182: main (mandatory.cpp:141)
==359828== 
==359828== Invalid read of size 1
==359828==    at 0x407756: f_del_front_bn (get_next_line_utils.c:162)
==359828==    by 0x4073FF: get_next_line (get_next_line.c:52)
==359828==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359828==    by 0x407193: main (mandatory.cpp:141)
==359828==  Address 0x4de7300 is 0 bytes inside a block of size 83 free'd
==359828==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359828==    by 0x407734: f_search_bn (get_next_line_utils.c:118)
==359828==    by 0x4073EC: get_next_line (get_next_line.c:51)
==359828==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359828==    by 0x407193: main (mandatory.cpp:141)
==359828==  Block was alloc'd at
==359828==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359828==    by 0x407586: ft_strjoin (get_next_line_utils.c:64)
==359828==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359828==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359828==    by 0x407193: main (mandatory.cpp:141)
==359828== 
==359828== Invalid read of size 1
==359828==    at 0x4075DC: ft_strjoin (get_next_line_utils.c:68)
==359828==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359828==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359828==    by 0x4071A4: main (mandatory.cpp:141)
==359828==  Address 0x4de7301 is 1 bytes inside a block of size 83 free'd
==359828==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359828==    by 0x407734: f_search_bn (get_next_line_utils.c:118)
==359828==    by 0x4073EC: get_next_line (get_next_line.c:51)
==359828==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359828==    by 0x407193: main (mandatory.cpp:141)
==359828==  Block was alloc'd at
==359828==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359828==    by 0x407586: ft_strjoin (get_next_line_utils.c:64)
==359828==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359828==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359828==    by 0x407193: main (mandatory.cpp:141)
==359828== 
==359828== Invalid read of size 1
==359828==    at 0x4075BF: ft_strjoin (get_next_line_utils.c:70)
==359828==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359828==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359828==    by 0x4071A4: main (mandatory.cpp:141)
==359828==  Address 0x4de7301 is 1 bytes inside a block of size 83 free'd
==359828==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359828==    by 0x407734: f_search_bn (get_next_line_utils.c:118)
==359828==    by 0x4073EC: get_next_line (get_next_line.c:51)
==359828==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359828==    by 0x407193: main (mandatory.cpp:141)
==359828==  Block was alloc'd at
==359828==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359828==    by 0x407586: ft_strjoin (get_next_line_utils.c:64)
==359828==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359828==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359828==    by 0x407193: main (mandatory.cpp:141)
==359828== 
==359828== Invalid read of size 1
==359828==    at 0x407756: f_del_front_bn (get_next_line_utils.c:162)
==359828==    by 0x4073FF: get_next_line (get_next_line.c:52)
==359828==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359828==    by 0x4071A4: main (mandatory.cpp:141)
==359828==  Address 0x4de7460 is 0 bytes inside a block of size 124 free'd
==359828==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359828==    by 0x407734: f_search_bn (get_next_line_utils.c:118)
==359828==    by 0x4073EC: get_next_line (get_next_line.c:51)
==359828==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359828==    by 0x4071A4: main (mandatory.cpp:141)
==359828==  Block was alloc'd at
==359828==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359828==    by 0x407586: ft_strjoin (get_next_line_utils.c:64)
==359828==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359828==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359828==    by 0x4071A4: main (mandatory.cpp:141)
==359828== 
==359828== Invalid read of size 1
==359828==    at 0x4075DC: ft_strjoin (get_next_line_utils.c:68)
==359828==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359828==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359828==    by 0x4071B5: main (mandatory.cpp:141)
==359828==  Address 0x4de748c is 44 bytes inside a block of size 124 free'd
==359828==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359828==    by 0x407734: f_search_bn (get_next_line_utils.c:118)
==359828==    by 0x4073EC: get_next_line (get_next_line.c:51)
==359828==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359828==    by 0x4071A4: main (mandatory.cpp:141)
==359828==  Block was alloc'd at
==359828==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359828==    by 0x407586: ft_strjoin (get_next_line_utils.c:64)
==359828==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359828==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359828==    by 0x4071A4: main (mandatory.cpp:141)
==359828== 
==359828== Invalid read of size 1
==359828==    at 0x4075BF: ft_strjoin (get_next_line_utils.c:70)
==359828==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359828==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359828==    by 0x4071B5: main (mandatory.cpp:141)
==359828==  Address 0x4de748c is 44 bytes inside a block of size 124 free'd
==359828==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359828==    by 0x407734: f_search_bn (get_next_line_utils.c:118)
==359828==    by 0x4073EC: get_next_line (get_next_line.c:51)
==359828==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359828==    by 0x4071A4: main (mandatory.cpp:141)
==359828==  Block was alloc'd at
==359828==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359828==    by 0x407586: ft_strjoin (get_next_line_utils.c:64)
==359828==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359828==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359828==    by 0x4071A4: main (mandatory.cpp:141)
==359828== 
==359828== Invalid read of size 1
==359828==    at 0x407756: f_del_front_bn (get_next_line_utils.c:162)
==359828==    by 0x4073FF: get_next_line (get_next_line.c:52)
==359828==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359828==    by 0x4071B5: main (mandatory.cpp:141)
==359828==  Address 0x4de7600 is 0 bytes inside a block of size 88 free'd
==359828==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359828==    by 0x407734: f_search_bn (get_next_line_utils.c:118)
==359828==    by 0x4073EC: get_next_line (get_next_line.c:51)
==359828==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359828==    by 0x4071B5: main (mandatory.cpp:141)
==359828==  Block was alloc'd at
==359828==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359828==    by 0x407586: ft_strjoin (get_next_line_utils.c:64)
==359828==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359828==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359828==    by 0x4071B5: main (mandatory.cpp:141)
==359828== 
==359828== Invalid read of size 1
==359828==    at 0x4075DC: ft_strjoin (get_next_line_utils.c:68)
==359828==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359828==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359828==    by 0x4071C6: main (mandatory.cpp:141)
==359828==  Address 0x4de7601 is 1 bytes inside a block of size 88 free'd
==359828==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359828==    by 0x407734: f_search_bn (get_next_line_utils.c:118)
==359828==    by 0x4073EC: get_next_line (get_next_line.c:51)
==359828==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359828==    by 0x4071B5: main (mandatory.cpp:141)
==359828==  Block was alloc'd at
==359828==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359828==    by 0x407586: ft_strjoin (get_next_line_utils.c:64)
==359828==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359828==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359828==    by 0x4071B5: main (mandatory.cpp:141)
==359828== 
==359828== Invalid read of size 1
==359828==    at 0x4075BF: ft_strjoin (get_next_line_utils.c:70)
==359828==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359828==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359828==    by 0x4071C6: main (mandatory.cpp:141)
==359828==  Address 0x4de7601 is 1 bytes inside a block of size 88 free'd
==359828==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359828==    by 0x407734: f_search_bn (get_next_line_utils.c:118)
==359828==    by 0x4073EC: get_next_line (get_next_line.c:51)
==359828==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359828==    by 0x4071B5: main (mandatory.cpp:141)
==359828==  Block was alloc'd at
==359828==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359828==    by 0x407586: ft_strjoin (get_next_line_utils.c:64)
==359828==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359828==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359828==    by 0x4071B5: main (mandatory.cpp:141)
==359828== 
==359828== Invalid read of size 1
==359828==    at 0x407756: f_del_front_bn (get_next_line_utils.c:162)
==359828==    by 0x4073FF: get_next_line (get_next_line.c:52)
==359828==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359828==    by 0x4071C6: main (mandatory.cpp:141)
==359828==  Address 0x4de7760 is 0 bytes inside a block of size 87 free'd
==359828==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359828==    by 0x407734: f_search_bn (get_next_line_utils.c:118)
==359828==    by 0x4073EC: get_next_line (get_next_line.c:51)
==359828==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359828==    by 0x4071C6: main (mandatory.cpp:141)
==359828==  Block was alloc'd at
==359828==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359828==    by 0x407586: ft_strjoin (get_next_line_utils.c:64)
==359828==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359828==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359828==    by 0x4071C6: main (mandatory.cpp:141)
==359828== 
==359828== Invalid read of size 1
==359828==    at 0x4075DC: ft_strjoin (get_next_line_utils.c:68)
==359828==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359828==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359828==    by 0x4071D7: main (mandatory.cpp:141)
==359828==  Address 0x4de778b is 43 bytes inside a block of size 87 free'd
==359828==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359828==    by 0x407734: f_search_bn (get_next_line_utils.c:118)
==359828==    by 0x4073EC: get_next_line (get_next_line.c:51)
==359828==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359828==    by 0x4071C6: main (mandatory.cpp:141)
==359828==  Block was alloc'd at
==359828==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359828==    by 0x407586: ft_strjoin (get_next_line_utils.c:64)
==359828==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359828==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359828==    by 0x4071C6: main (mandatory.cpp:141)
==359828== 
==359828== Invalid read of size 1
==359828==    at 0x4075BF: ft_strjoin (get_next_line_utils.c:70)
==359828==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359828==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359828==    by 0x4071D7: main (mandatory.cpp:141)
==359828==  Address 0x4de778b is 43 bytes inside a block of size 87 free'd
==359828==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359828==    by 0x407734: f_search_bn (get_next_line_utils.c:118)
==359828==    by 0x4073EC: get_next_line (get_next_line.c:51)
==359828==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359828==    by 0x4071C6: main (mandatory.cpp:141)
==359828==  Block was alloc'd at
==359828==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359828==    by 0x407586: ft_strjoin (get_next_line_utils.c:64)
==359828==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359828==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359828==    by 0x4071C6: main (mandatory.cpp:141)
==359828== 
==359828== Invalid read of size 1
==359828==    at 0x407756: f_del_front_bn (get_next_line_utils.c:162)
==359828==    by 0x4073FF: get_next_line (get_next_line.c:52)
==359828==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359828==    by 0x4071D7: main (mandatory.cpp:141)
==359828==  Address 0x4de78e0 is 0 bytes inside a block of size 44 free'd
==359828==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359828==    by 0x407734: f_search_bn (get_next_line_utils.c:118)
==359828==    by 0x4073EC: get_next_line (get_next_line.c:51)
==359828==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359828==    by 0x4071D7: main (mandatory.cpp:141)
==359828==  Block was alloc'd at
==359828==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359828==    by 0x407586: ft_strjoin (get_next_line_utils.c:64)
==359828==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359828==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359828==    by 0x4071D7: main (mandatory.cpp:141)
==359828== 
==359828== Invalid read of size 1
==359828==    at 0x4075DC: ft_strjoin (get_next_line_utils.c:68)
==359828==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359828==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359828==    by 0x4071E8: main (mandatory.cpp:141)
==359828==  Address 0x4de78e1 is 1 bytes inside a block of size 44 free'd
==359828==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359828==    by 0x407734: f_search_bn (get_next_line_utils.c:118)
==359828==    by 0x4073EC: get_next_line (get_next_line.c:51)
==359828==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359828==    by 0x4071D7: main (mandatory.cpp:141)
==359828==  Block was alloc'd at
==359828==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359828==    by 0x407586: ft_strjoin (get_next_line_utils.c:64)
==359828==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359828==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359828==    by 0x4071D7: main (mandatory.cpp:141)
==359828== 
==359828== Invalid read of size 1
==359828==    at 0x4075BF: ft_strjoin (get_next_line_utils.c:70)
==359828==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359828==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359828==    by 0x4071E8: main (mandatory.cpp:141)
==359828==  Address 0x4de78e1 is 1 bytes inside a block of size 44 free'd
==359828==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359828==    by 0x407734: f_search_bn (get_next_line_utils.c:118)
==359828==    by 0x4073EC: get_next_line (get_next_line.c:51)
==359828==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359828==    by 0x4071D7: main (mandatory.cpp:141)
==359828==  Block was alloc'd at
==359828==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359828==    by 0x407586: ft_strjoin (get_next_line_utils.c:64)
==359828==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359828==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359828==    by 0x4071D7: main (mandatory.cpp:141)
==359828== 
==359828== Invalid read of size 1
==359828==    at 0x407756: f_del_front_bn (get_next_line_utils.c:162)
==359828==    by 0x4073FF: get_next_line (get_next_line.c:52)
==359828==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359828==    by 0x4071E8: main (mandatory.cpp:141)
==359828==  Address 0x4de7a10 is 0 bytes inside a block of size 43 free'd
==359828==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359828==    by 0x407734: f_search_bn (get_next_line_utils.c:118)
==359828==    by 0x4073EC: get_next_line (get_next_line.c:51)
==359828==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359828==    by 0x4071E8: main (mandatory.cpp:141)
==359828==  Block was alloc'd at
==359828==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359828==    by 0x407586: ft_strjoin (get_next_line_utils.c:64)
==359828==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359828==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359828==    by 0x4071E8: main (mandatory.cpp:141)
==359828== 
==359828== Invalid read of size 1
==359828==    at 0x4075DC: ft_strjoin (get_next_line_utils.c:68)
==359828==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359828==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359828==    by 0x4071F3: main (mandatory.cpp:141)
==359828==  Address 0x4de7a3a is 42 bytes inside a block of size 43 free'd
==359828==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359828==    by 0x407734: f_search_bn (get_next_line_utils.c:118)
==359828==    by 0x4073EC: get_next_line (get_next_line.c:51)
==359828==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359828==    by 0x4071E8: main (mandatory.cpp:141)
==359828==  Block was alloc'd at
==359828==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359828==    by 0x407586: ft_strjoin (get_next_line_utils.c:64)
==359828==    by 0x4073BD: get_next_line (get_next_line.c:48)
==359828==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359828==    by 0x4071E8: main (mandatory.cpp:141)
==359828== 
==359828== 1 bytes in 1 blocks are definitely lost in loss record 1 of 1
==359828==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359828==    by 0x407396: get_next_line (get_next_line.c:43)
==359828==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359828==    by 0x407160: main (mandatory.cpp:141)
==359828== 
==359855== Invalid write of size 1
==359855==    at 0x40734C: get_next_line (get_next_line.c:38)
==359855==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359855==    by 0x404BC6: main (mandatory.cpp:25)
==359855==  Address 0x51d103f is 1 bytes before a block of size 10,000,001 alloc'd
==359855==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359855==    by 0x4072FC: get_next_line (get_next_line.c:27)
==359855==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359855==    by 0x404BC6: main (mandatory.cpp:25)
==359855== 
==359855== Conditional jump or move depends on uninitialised value(s)
==359855==    at 0x40750E: ft_strlen (get_next_line_utils.c:43)
==359855==    by 0x407544: ft_strjoin (get_next_line_utils.c:59)
==359855==    by 0x40738B: get_next_line (get_next_line.c:48)
==359855==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359855==    by 0x404BC6: main (mandatory.cpp:25)
==359855== 
==359855== Conditional jump or move depends on uninitialised value(s)
==359855==    at 0x407601: ft_strjoin (get_next_line_utils.c:75)
==359855==    by 0x40738B: get_next_line (get_next_line.c:48)
==359855==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359855==    by 0x404BC6: main (mandatory.cpp:25)
==359855== 
==359855== Invalid write of size 1
==359855==    at 0x40734C: get_next_line (get_next_line.c:38)
==359855==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359855==    by 0x404BE8: main (mandatory.cpp:25)
==359855==  Address 0x5b5b03f is 1 bytes before a block of size 10,000,001 alloc'd
==359855==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359855==    by 0x4072FC: get_next_line (get_next_line.c:27)
==359855==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359855==    by 0x404BE8: main (mandatory.cpp:25)
==359855== 
==359855== Conditional jump or move depends on uninitialised value(s)
==359855==    at 0x407601: ft_strjoin (get_next_line_utils.c:75)
==359855==    by 0x40738B: get_next_line (get_next_line.c:48)
==359855==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359855==    by 0x404BE8: main (mandatory.cpp:25)
==359855== 
==359855== 1 bytes in 1 blocks are definitely lost in loss record 2 of 5
==359855==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359855==    by 0x407364: get_next_line (get_next_line.c:43)
==359855==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359855==    by 0x404BC6: main (mandatory.cpp:25)
==359855== 
==359855== 1 bytes in 1 blocks are definitely lost in loss record 3 of 5
==359855==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359855==    by 0x40755A: ft_strjoin (get_next_line_utils.c:64)
==359855==    by 0x40738B: get_next_line (get_next_line.c:48)
==359855==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359855==    by 0x404BC6: main (mandatory.cpp:25)
==359855== 
==359855== 10,000,001 bytes in 1 blocks are possibly lost in loss record 4 of 5
==359855==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359855==    by 0x4072FC: get_next_line (get_next_line.c:27)
==359855==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359855==    by 0x404BC6: main (mandatory.cpp:25)
==359855== 
==359855== 10,000,001 bytes in 1 blocks are definitely lost in loss record 5 of 5
==359855==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359855==    by 0x4072FC: get_next_line (get_next_line.c:27)
==359855==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359855==    by 0x404BE8: main (mandatory.cpp:25)
==359855== 
==359858== Invalid read of size 1
==359858==    at 0x407509: ft_strlen (get_next_line_utils.c:43)
==359858==    by 0x407536: ft_strjoin (get_next_line_utils.c:59)
==359858==    by 0x40738B: get_next_line (get_next_line.c:48)
==359858==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359858==    by 0x404E6F: main (mandatory.cpp:31)
==359858==  Address 0x4de4660 is 0 bytes inside a block of size 1 free'd
==359858==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359858==    by 0x407442: get_next_line (get_next_line.c:67)
==359858==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359858==    by 0x404E63: main (mandatory.cpp:31)
==359858==  Block was alloc'd at
==359858==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359858==    by 0x40755A: ft_strjoin (get_next_line_utils.c:64)
==359858==    by 0x40738B: get_next_line (get_next_line.c:48)
==359858==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359858==    by 0x404E63: main (mandatory.cpp:31)
==359858== 
==359858== Invalid read of size 1
==359858==    at 0x4075B0: ft_strjoin (get_next_line_utils.c:68)
==359858==    by 0x40738B: get_next_line (get_next_line.c:48)
==359858==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359858==    by 0x404E6F: main (mandatory.cpp:31)
==359858==  Address 0x4de4660 is 0 bytes inside a block of size 1 free'd
==359858==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359858==    by 0x407442: get_next_line (get_next_line.c:67)
==359858==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359858==    by 0x404E63: main (mandatory.cpp:31)
==359858==  Block was alloc'd at
==359858==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359858==    by 0x40755A: ft_strjoin (get_next_line_utils.c:64)
==359858==    by 0x40738B: get_next_line (get_next_line.c:48)
==359858==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359858==    by 0x404E63: main (mandatory.cpp:31)
==359858== 
==359858== 1 bytes in 1 blocks are definitely lost in loss record 1 of 1
==359858==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359858==    by 0x407364: get_next_line (get_next_line.c:43)
==359858==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359858==    by 0x404E63: main (mandatory.cpp:31)
==359858== 
==359860== Invalid read of size 1
==359860==    at 0x40772A: f_del_front_bn (get_next_line_utils.c:162)
==359860==    by 0x4073CD: get_next_line (get_next_line.c:52)
==359860==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359860==    by 0x40508F: main (mandatory.cpp:36)
==359860==  Address 0x4de4660 is 0 bytes inside a block of size 2 free'd
==359860==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359860==    by 0x407708: f_search_bn (get_next_line_utils.c:118)
==359860==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359860==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359860==    by 0x40508F: main (mandatory.cpp:36)
==359860==  Block was alloc'd at
==359860==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359860==    by 0x40755A: ft_strjoin (get_next_line_utils.c:64)
==359860==    by 0x40738B: get_next_line (get_next_line.c:48)
==359860==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359860==    by 0x40508F: main (mandatory.cpp:36)
==359860== 
==359860== Invalid read of size 1
==359860==    at 0x407509: ft_strlen (get_next_line_utils.c:43)
==359860==    by 0x407536: ft_strjoin (get_next_line_utils.c:59)
==359860==    by 0x40738B: get_next_line (get_next_line.c:48)
==359860==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359860==    by 0x40509B: main (mandatory.cpp:36)
==359860==  Address 0x4de4661 is 1 bytes inside a block of size 2 free'd
==359860==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359860==    by 0x407708: f_search_bn (get_next_line_utils.c:118)
==359860==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359860==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359860==    by 0x40508F: main (mandatory.cpp:36)
==359860==  Block was alloc'd at
==359860==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359860==    by 0x40755A: ft_strjoin (get_next_line_utils.c:64)
==359860==    by 0x40738B: get_next_line (get_next_line.c:48)
==359860==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359860==    by 0x40508F: main (mandatory.cpp:36)
==359860== 
==359860== Invalid read of size 1
==359860==    at 0x4075B0: ft_strjoin (get_next_line_utils.c:68)
==359860==    by 0x40738B: get_next_line (get_next_line.c:48)
==359860==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359860==    by 0x40509B: main (mandatory.cpp:36)
==359860==  Address 0x4de4661 is 1 bytes inside a block of size 2 free'd
==359860==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359860==    by 0x407708: f_search_bn (get_next_line_utils.c:118)
==359860==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359860==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359860==    by 0x40508F: main (mandatory.cpp:36)
==359860==  Block was alloc'd at
==359860==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359860==    by 0x40755A: ft_strjoin (get_next_line_utils.c:64)
==359860==    by 0x40738B: get_next_line (get_next_line.c:48)
==359860==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359860==    by 0x40508F: main (mandatory.cpp:36)
==359860== 
==359860== 1 bytes in 1 blocks are definitely lost in loss record 1 of 1
==359860==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359860==    by 0x407364: get_next_line (get_next_line.c:43)
==359860==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359860==    by 0x40508F: main (mandatory.cpp:36)
==359860== 
==359862== Invalid write of size 1
==359862==    at 0x4077CD: f_last_line (get_next_line_utils.c:209)
==359862==    by 0x407403: get_next_line (get_next_line.c:59)
==359862==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359862==    by 0x4052BB: main (mandatory.cpp:41)
==359862==  Address 0x4de4a09 is 0 bytes after a block of size 41 alloc'd
==359862==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359862==    by 0x40776D: f_last_line (get_next_line_utils.c:199)
==359862==    by 0x407403: get_next_line (get_next_line.c:59)
==359862==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359862==    by 0x4052BB: main (mandatory.cpp:41)
==359862== 
==359862== Invalid read of size 1
==359862==    at 0x484FBE8: strcmp (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359862==    by 0x402D0A: gnl(int, char const*) (gnl.cpp:24)
==359862==    by 0x4052BB: main (mandatory.cpp:41)
==359862==  Address 0x4de4a09 is 0 bytes after a block of size 41 alloc'd
==359862==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359862==    by 0x40776D: f_last_line (get_next_line_utils.c:199)
==359862==    by 0x407403: get_next_line (get_next_line.c:59)
==359862==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359862==    by 0x4052BB: main (mandatory.cpp:41)
==359862== 
==359862== 1 bytes in 1 blocks are definitely lost in loss record 1 of 2
==359862==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359862==    by 0x407364: get_next_line (get_next_line.c:43)
==359862==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359862==    by 0x4052BB: main (mandatory.cpp:41)
==359862== 
==359862== 42 bytes in 1 blocks are definitely lost in loss record 2 of 2
==359862==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359862==    by 0x40755A: ft_strjoin (get_next_line_utils.c:64)
==359862==    by 0x40738B: get_next_line (get_next_line.c:48)
==359862==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359862==    by 0x4052BB: main (mandatory.cpp:41)
==359862== 
==359872== Invalid read of size 1
==359872==    at 0x40772A: f_del_front_bn (get_next_line_utils.c:162)
==359872==    by 0x4073CD: get_next_line (get_next_line.c:52)
==359872==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359872==    by 0x4054E7: main (mandatory.cpp:46)
==359872==  Address 0x4de4c80 is 0 bytes inside a block of size 43 free'd
==359872==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359872==    by 0x407708: f_search_bn (get_next_line_utils.c:118)
==359872==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359872==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359872==    by 0x4054E7: main (mandatory.cpp:46)
==359872==  Block was alloc'd at
==359872==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359872==    by 0x40755A: ft_strjoin (get_next_line_utils.c:64)
==359872==    by 0x40738B: get_next_line (get_next_line.c:48)
==359872==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359872==    by 0x4054E7: main (mandatory.cpp:46)
==359872== 
==359872== Invalid read of size 1
==359872==    at 0x407509: ft_strlen (get_next_line_utils.c:43)
==359872==    by 0x407536: ft_strjoin (get_next_line_utils.c:59)
==359872==    by 0x40738B: get_next_line (get_next_line.c:48)
==359872==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359872==    by 0x4054F9: main (mandatory.cpp:46)
==359872==  Address 0x4de4ca9 is 41 bytes inside a block of size 43 free'd
==359872==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359872==    by 0x407708: f_search_bn (get_next_line_utils.c:118)
==359872==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359872==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359872==    by 0x4054E7: main (mandatory.cpp:46)
==359872==  Block was alloc'd at
==359872==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359872==    by 0x40755A: ft_strjoin (get_next_line_utils.c:64)
==359872==    by 0x40738B: get_next_line (get_next_line.c:48)
==359872==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359872==    by 0x4054E7: main (mandatory.cpp:46)
==359872== 
==359872== Invalid read of size 1
==359872==    at 0x4075B0: ft_strjoin (get_next_line_utils.c:68)
==359872==    by 0x40738B: get_next_line (get_next_line.c:48)
==359872==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359872==    by 0x4054F9: main (mandatory.cpp:46)
==359872==  Address 0x4de4ca9 is 41 bytes inside a block of size 43 free'd
==359872==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359872==    by 0x407708: f_search_bn (get_next_line_utils.c:118)
==359872==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359872==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359872==    by 0x4054E7: main (mandatory.cpp:46)
==359872==  Block was alloc'd at
==359872==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359872==    by 0x40755A: ft_strjoin (get_next_line_utils.c:64)
==359872==    by 0x40738B: get_next_line (get_next_line.c:48)
==359872==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359872==    by 0x4054E7: main (mandatory.cpp:46)
==359872== 
==359872== Invalid read of size 1
==359872==    at 0x407593: ft_strjoin (get_next_line_utils.c:70)
==359872==    by 0x40738B: get_next_line (get_next_line.c:48)
==359872==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359872==    by 0x4054F9: main (mandatory.cpp:46)
==359872==  Address 0x4de4ca9 is 41 bytes inside a block of size 43 free'd
==359872==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359872==    by 0x407708: f_search_bn (get_next_line_utils.c:118)
==359872==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359872==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359872==    by 0x4054E7: main (mandatory.cpp:46)
==359872==  Block was alloc'd at
==359872==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359872==    by 0x40755A: ft_strjoin (get_next_line_utils.c:64)
==359872==    by 0x40738B: get_next_line (get_next_line.c:48)
==359872==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359872==    by 0x4054E7: main (mandatory.cpp:46)
==359872== 
==359872== Invalid read of size 1
==359872==    at 0x484FBD4: strcmp (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359872==    by 0x402D0A: gnl(int, char const*) (gnl.cpp:24)
==359872==    by 0x4054F9: main (mandatory.cpp:46)
==359872==  Address 0x0 is not stack'd, malloc'd or (recently) free'd
==359872== 
==359872== 1 bytes in 1 blocks are definitely lost in loss record 1 of 1
==359872==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359872==    by 0x407364: get_next_line (get_next_line.c:43)
==359872==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359872==    by 0x4054E7: main (mandatory.cpp:46)
==359872== 
==359875== Invalid write of size 1
==359875==    at 0x4077CD: f_last_line (get_next_line_utils.c:209)
==359875==    by 0x407403: get_next_line (get_next_line.c:59)
==359875==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359875==    by 0x405725: main (mandatory.cpp:52)
==359875==  Address 0x4de502a is 0 bytes after a block of size 42 alloc'd
==359875==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359875==    by 0x40776D: f_last_line (get_next_line_utils.c:199)
==359875==    by 0x407403: get_next_line (get_next_line.c:59)
==359875==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359875==    by 0x405725: main (mandatory.cpp:52)
==359875== 
==359875== Invalid read of size 1
==359875==    at 0x484FBE8: strcmp (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359875==    by 0x402D0A: gnl(int, char const*) (gnl.cpp:24)
==359875==    by 0x405725: main (mandatory.cpp:52)
==359875==  Address 0x4de502a is 0 bytes after a block of size 42 alloc'd
==359875==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359875==    by 0x40776D: f_last_line (get_next_line_utils.c:199)
==359875==    by 0x407403: get_next_line (get_next_line.c:59)
==359875==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359875==    by 0x405725: main (mandatory.cpp:52)
==359875== 
==359875== 1 bytes in 1 blocks are definitely lost in loss record 1 of 2
==359875==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359875==    by 0x407364: get_next_line (get_next_line.c:43)
==359875==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359875==    by 0x405725: main (mandatory.cpp:52)
==359875== 
==359875== 43 bytes in 1 blocks are definitely lost in loss record 2 of 2
==359875==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359875==    by 0x40755A: ft_strjoin (get_next_line_utils.c:64)
==359875==    by 0x40738B: get_next_line (get_next_line.c:48)
==359875==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359875==    by 0x405725: main (mandatory.cpp:52)
==359875== 
==359876== Invalid read of size 1
==359876==    at 0x40772A: f_del_front_bn (get_next_line_utils.c:162)
==359876==    by 0x4073CD: get_next_line (get_next_line.c:52)
==359876==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359876==    by 0x405951: main (mandatory.cpp:57)
==359876==  Address 0x4de52a0 is 0 bytes inside a block of size 44 free'd
==359876==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359876==    by 0x407708: f_search_bn (get_next_line_utils.c:118)
==359876==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359876==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359876==    by 0x405951: main (mandatory.cpp:57)
==359876==  Block was alloc'd at
==359876==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359876==    by 0x40755A: ft_strjoin (get_next_line_utils.c:64)
==359876==    by 0x40738B: get_next_line (get_next_line.c:48)
==359876==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359876==    by 0x405951: main (mandatory.cpp:57)
==359876== 
==359876== Invalid read of size 1
==359876==    at 0x407509: ft_strlen (get_next_line_utils.c:43)
==359876==    by 0x407536: ft_strjoin (get_next_line_utils.c:59)
==359876==    by 0x40738B: get_next_line (get_next_line.c:48)
==359876==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359876==    by 0x405963: main (mandatory.cpp:57)
==359876==  Address 0x4de52ca is 42 bytes inside a block of size 44 free'd
==359876==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359876==    by 0x407708: f_search_bn (get_next_line_utils.c:118)
==359876==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359876==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359876==    by 0x405951: main (mandatory.cpp:57)
==359876==  Block was alloc'd at
==359876==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359876==    by 0x40755A: ft_strjoin (get_next_line_utils.c:64)
==359876==    by 0x40738B: get_next_line (get_next_line.c:48)
==359876==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359876==    by 0x405951: main (mandatory.cpp:57)
==359876== 
==359876== Invalid read of size 1
==359876==    at 0x4075B0: ft_strjoin (get_next_line_utils.c:68)
==359876==    by 0x40738B: get_next_line (get_next_line.c:48)
==359876==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359876==    by 0x405963: main (mandatory.cpp:57)
==359876==  Address 0x4de52ca is 42 bytes inside a block of size 44 free'd
==359876==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359876==    by 0x407708: f_search_bn (get_next_line_utils.c:118)
==359876==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359876==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359876==    by 0x405951: main (mandatory.cpp:57)
==359876==  Block was alloc'd at
==359876==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359876==    by 0x40755A: ft_strjoin (get_next_line_utils.c:64)
==359876==    by 0x40738B: get_next_line (get_next_line.c:48)
==359876==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359876==    by 0x405951: main (mandatory.cpp:57)
==359876== 
==359876== Invalid read of size 1
==359876==    at 0x407593: ft_strjoin (get_next_line_utils.c:70)
==359876==    by 0x40738B: get_next_line (get_next_line.c:48)
==359876==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359876==    by 0x405963: main (mandatory.cpp:57)
==359876==  Address 0x4de52ca is 42 bytes inside a block of size 44 free'd
==359876==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359876==    by 0x407708: f_search_bn (get_next_line_utils.c:118)
==359876==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359876==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359876==    by 0x405951: main (mandatory.cpp:57)
==359876==  Block was alloc'd at
==359876==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359876==    by 0x40755A: ft_strjoin (get_next_line_utils.c:64)
==359876==    by 0x40738B: get_next_line (get_next_line.c:48)
==359876==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359876==    by 0x405951: main (mandatory.cpp:57)
==359876== 
==359876== Invalid read of size 1
==359876==    at 0x484FBD4: strcmp (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359876==    by 0x402D0A: gnl(int, char const*) (gnl.cpp:24)
==359876==    by 0x405963: main (mandatory.cpp:57)
==359876==  Address 0x0 is not stack'd, malloc'd or (recently) free'd
==359876== 
==359876== 1 bytes in 1 blocks are definitely lost in loss record 1 of 1
==359876==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359876==    by 0x407364: get_next_line (get_next_line.c:43)
==359876==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359876==    by 0x405951: main (mandatory.cpp:57)
==359876== 
==359879== Invalid write of size 1
==359879==    at 0x4077CD: f_last_line (get_next_line_utils.c:209)
==359879==    by 0x407403: get_next_line (get_next_line.c:59)
==359879==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359879==    by 0x405B99: main (mandatory.cpp:68)
==359879==  Address 0x4de564b is 0 bytes after a block of size 43 alloc'd
==359879==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359879==    by 0x40776D: f_last_line (get_next_line_utils.c:199)
==359879==    by 0x407403: get_next_line (get_next_line.c:59)
==359879==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359879==    by 0x405B99: main (mandatory.cpp:68)
==359879== 
==359879== Invalid read of size 1
==359879==    at 0x484FBE8: strcmp (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359879==    by 0x402D0A: gnl(int, char const*) (gnl.cpp:24)
==359879==    by 0x405B99: main (mandatory.cpp:68)
==359879==  Address 0x4de564b is 0 bytes after a block of size 43 alloc'd
==359879==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359879==    by 0x40776D: f_last_line (get_next_line_utils.c:199)
==359879==    by 0x407403: get_next_line (get_next_line.c:59)
==359879==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359879==    by 0x405B99: main (mandatory.cpp:68)
==359879== 
==359879== 1 bytes in 1 blocks are definitely lost in loss record 1 of 2
==359879==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359879==    by 0x407364: get_next_line (get_next_line.c:43)
==359879==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359879==    by 0x405B99: main (mandatory.cpp:68)
==359879== 
==359879== 44 bytes in 1 blocks are definitely lost in loss record 2 of 2
==359879==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359879==    by 0x40755A: ft_strjoin (get_next_line_utils.c:64)
==359879==    by 0x40738B: get_next_line (get_next_line.c:48)
==359879==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359879==    by 0x405B99: main (mandatory.cpp:68)
==359879== 
==359880== Invalid read of size 1
==359880==    at 0x40772A: f_del_front_bn (get_next_line_utils.c:162)
==359880==    by 0x4073CD: get_next_line (get_next_line.c:52)
==359880==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359880==    by 0x405DC5: main (mandatory.cpp:73)
==359880==  Address 0x4de58c0 is 0 bytes inside a block of size 45 free'd
==359880==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359880==    by 0x407708: f_search_bn (get_next_line_utils.c:118)
==359880==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359880==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359880==    by 0x405DC5: main (mandatory.cpp:73)
==359880==  Block was alloc'd at
==359880==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359880==    by 0x40755A: ft_strjoin (get_next_line_utils.c:64)
==359880==    by 0x40738B: get_next_line (get_next_line.c:48)
==359880==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359880==    by 0x405DC5: main (mandatory.cpp:73)
==359880== 
==359880== Invalid read of size 1
==359880==    at 0x407509: ft_strlen (get_next_line_utils.c:43)
==359880==    by 0x407536: ft_strjoin (get_next_line_utils.c:59)
==359880==    by 0x40738B: get_next_line (get_next_line.c:48)
==359880==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359880==    by 0x405DD7: main (mandatory.cpp:73)
==359880==  Address 0x4de58eb is 43 bytes inside a block of size 45 free'd
==359880==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359880==    by 0x407708: f_search_bn (get_next_line_utils.c:118)
==359880==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359880==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359880==    by 0x405DC5: main (mandatory.cpp:73)
==359880==  Block was alloc'd at
==359880==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359880==    by 0x40755A: ft_strjoin (get_next_line_utils.c:64)
==359880==    by 0x40738B: get_next_line (get_next_line.c:48)
==359880==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359880==    by 0x405DC5: main (mandatory.cpp:73)
==359880== 
==359880== Invalid read of size 1
==359880==    at 0x4075B0: ft_strjoin (get_next_line_utils.c:68)
==359880==    by 0x40738B: get_next_line (get_next_line.c:48)
==359880==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359880==    by 0x405DD7: main (mandatory.cpp:73)
==359880==  Address 0x4de58eb is 43 bytes inside a block of size 45 free'd
==359880==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359880==    by 0x407708: f_search_bn (get_next_line_utils.c:118)
==359880==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359880==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359880==    by 0x405DC5: main (mandatory.cpp:73)
==359880==  Block was alloc'd at
==359880==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359880==    by 0x40755A: ft_strjoin (get_next_line_utils.c:64)
==359880==    by 0x40738B: get_next_line (get_next_line.c:48)
==359880==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359880==    by 0x405DC5: main (mandatory.cpp:73)
==359880== 
==359880== Invalid read of size 1
==359880==    at 0x407593: ft_strjoin (get_next_line_utils.c:70)
==359880==    by 0x40738B: get_next_line (get_next_line.c:48)
==359880==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359880==    by 0x405DD7: main (mandatory.cpp:73)
==359880==  Address 0x4de58eb is 43 bytes inside a block of size 45 free'd
==359880==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359880==    by 0x407708: f_search_bn (get_next_line_utils.c:118)
==359880==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359880==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359880==    by 0x405DC5: main (mandatory.cpp:73)
==359880==  Block was alloc'd at
==359880==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359880==    by 0x40755A: ft_strjoin (get_next_line_utils.c:64)
==359880==    by 0x40738B: get_next_line (get_next_line.c:48)
==359880==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359880==    by 0x405DC5: main (mandatory.cpp:73)
==359880== 
==359880== Invalid read of size 1
==359880==    at 0x484FBD4: strcmp (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359880==    by 0x402D0A: gnl(int, char const*) (gnl.cpp:24)
==359880==    by 0x405DD7: main (mandatory.cpp:73)
==359880==  Address 0x0 is not stack'd, malloc'd or (recently) free'd
==359880== 
==359880== 1 bytes in 1 blocks are definitely lost in loss record 1 of 1
==359880==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359880==    by 0x407364: get_next_line (get_next_line.c:43)
==359880==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359880==    by 0x405DC5: main (mandatory.cpp:73)
==359880== 
==359886== Invalid read of size 1
==359886==    at 0x40772A: f_del_front_bn (get_next_line_utils.c:162)
==359886==    by 0x4073CD: get_next_line (get_next_line.c:52)
==359886==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359886==    by 0x406003: main (mandatory.cpp:79)
==359886==  Address 0x4de5bd0 is 0 bytes inside a block of size 6 free'd
==359886==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359886==    by 0x407708: f_search_bn (get_next_line_utils.c:118)
==359886==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359886==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359886==    by 0x406003: main (mandatory.cpp:79)
==359886==  Block was alloc'd at
==359886==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359886==    by 0x40755A: ft_strjoin (get_next_line_utils.c:64)
==359886==    by 0x40738B: get_next_line (get_next_line.c:48)
==359886==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359886==    by 0x406003: main (mandatory.cpp:79)
==359886== 
==359886== Invalid read of size 1
==359886==    at 0x407509: ft_strlen (get_next_line_utils.c:43)
==359886==    by 0x407536: ft_strjoin (get_next_line_utils.c:59)
==359886==    by 0x40738B: get_next_line (get_next_line.c:48)
==359886==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359886==    by 0x406015: main (mandatory.cpp:79)
==359886==  Address 0x4de5bd1 is 1 bytes inside a block of size 6 free'd
==359886==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359886==    by 0x407708: f_search_bn (get_next_line_utils.c:118)
==359886==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359886==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359886==    by 0x406003: main (mandatory.cpp:79)
==359886==  Block was alloc'd at
==359886==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359886==    by 0x40755A: ft_strjoin (get_next_line_utils.c:64)
==359886==    by 0x40738B: get_next_line (get_next_line.c:48)
==359886==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359886==    by 0x406003: main (mandatory.cpp:79)
==359886== 
==359886== Invalid read of size 1
==359886==    at 0x4075B0: ft_strjoin (get_next_line_utils.c:68)
==359886==    by 0x40738B: get_next_line (get_next_line.c:48)
==359886==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359886==    by 0x406015: main (mandatory.cpp:79)
==359886==  Address 0x4de5bd1 is 1 bytes inside a block of size 6 free'd
==359886==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359886==    by 0x407708: f_search_bn (get_next_line_utils.c:118)
==359886==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359886==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359886==    by 0x406003: main (mandatory.cpp:79)
==359886==  Block was alloc'd at
==359886==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359886==    by 0x40755A: ft_strjoin (get_next_line_utils.c:64)
==359886==    by 0x40738B: get_next_line (get_next_line.c:48)
==359886==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359886==    by 0x406003: main (mandatory.cpp:79)
==359886== 
==359886== Invalid read of size 1
==359886==    at 0x407593: ft_strjoin (get_next_line_utils.c:70)
==359886==    by 0x40738B: get_next_line (get_next_line.c:48)
==359886==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359886==    by 0x406015: main (mandatory.cpp:79)
==359886==  Address 0x4de5bd1 is 1 bytes inside a block of size 6 free'd
==359886==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359886==    by 0x407708: f_search_bn (get_next_line_utils.c:118)
==359886==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359886==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359886==    by 0x406003: main (mandatory.cpp:79)
==359886==  Block was alloc'd at
==359886==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359886==    by 0x40755A: ft_strjoin (get_next_line_utils.c:64)
==359886==    by 0x40738B: get_next_line (get_next_line.c:48)
==359886==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359886==    by 0x406003: main (mandatory.cpp:79)
==359886== 
==359886== Invalid read of size 1
==359886==    at 0x40772A: f_del_front_bn (get_next_line_utils.c:162)
==359886==    by 0x4073CD: get_next_line (get_next_line.c:52)
==359886==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359886==    by 0x406015: main (mandatory.cpp:79)
==359886==  Address 0x4de5c70 is 0 bytes inside a block of size 5 free'd
==359886==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359886==    by 0x407708: f_search_bn (get_next_line_utils.c:118)
==359886==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359886==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359886==    by 0x406015: main (mandatory.cpp:79)
==359886==  Block was alloc'd at
==359886==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359886==    by 0x40755A: ft_strjoin (get_next_line_utils.c:64)
==359886==    by 0x40738B: get_next_line (get_next_line.c:48)
==359886==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359886==    by 0x406015: main (mandatory.cpp:79)
==359886== 
==359886== Invalid read of size 1
==359886==    at 0x4075B0: ft_strjoin (get_next_line_utils.c:68)
==359886==    by 0x40738B: get_next_line (get_next_line.c:48)
==359886==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359886==    by 0x406027: main (mandatory.cpp:79)
==359886==  Address 0x4de5c71 is 1 bytes inside a block of size 5 free'd
==359886==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359886==    by 0x407708: f_search_bn (get_next_line_utils.c:118)
==359886==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359886==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359886==    by 0x406015: main (mandatory.cpp:79)
==359886==  Block was alloc'd at
==359886==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359886==    by 0x40755A: ft_strjoin (get_next_line_utils.c:64)
==359886==    by 0x40738B: get_next_line (get_next_line.c:48)
==359886==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359886==    by 0x406015: main (mandatory.cpp:79)
==359886== 
==359886== Invalid read of size 1
==359886==    at 0x407593: ft_strjoin (get_next_line_utils.c:70)
==359886==    by 0x40738B: get_next_line (get_next_line.c:48)
==359886==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359886==    by 0x406027: main (mandatory.cpp:79)
==359886==  Address 0x4de5c71 is 1 bytes inside a block of size 5 free'd
==359886==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359886==    by 0x407708: f_search_bn (get_next_line_utils.c:118)
==359886==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359886==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359886==    by 0x406015: main (mandatory.cpp:79)
==359886==  Block was alloc'd at
==359886==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359886==    by 0x40755A: ft_strjoin (get_next_line_utils.c:64)
==359886==    by 0x40738B: get_next_line (get_next_line.c:48)
==359886==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359886==    by 0x406015: main (mandatory.cpp:79)
==359886== 
==359886== Invalid read of size 1
==359886==    at 0x40772A: f_del_front_bn (get_next_line_utils.c:162)
==359886==    by 0x4073CD: get_next_line (get_next_line.c:52)
==359886==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359886==    by 0x406027: main (mandatory.cpp:79)
==359886==  Address 0x4de5d10 is 0 bytes inside a block of size 4 free'd
==359886==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359886==    by 0x407708: f_search_bn (get_next_line_utils.c:118)
==359886==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359886==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359886==    by 0x406027: main (mandatory.cpp:79)
==359886==  Block was alloc'd at
==359886==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359886==    by 0x40755A: ft_strjoin (get_next_line_utils.c:64)
==359886==    by 0x40738B: get_next_line (get_next_line.c:48)
==359886==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359886==    by 0x406027: main (mandatory.cpp:79)
==359886== 
==359886== Invalid read of size 1
==359886==    at 0x4075B0: ft_strjoin (get_next_line_utils.c:68)
==359886==    by 0x40738B: get_next_line (get_next_line.c:48)
==359886==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359886==    by 0x406039: main (mandatory.cpp:79)
==359886==  Address 0x4de5d11 is 1 bytes inside a block of size 4 free'd
==359886==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359886==    by 0x407708: f_search_bn (get_next_line_utils.c:118)
==359886==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359886==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359886==    by 0x406027: main (mandatory.cpp:79)
==359886==  Block was alloc'd at
==359886==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359886==    by 0x40755A: ft_strjoin (get_next_line_utils.c:64)
==359886==    by 0x40738B: get_next_line (get_next_line.c:48)
==359886==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359886==    by 0x406027: main (mandatory.cpp:79)
==359886== 
==359886== Invalid read of size 1
==359886==    at 0x407593: ft_strjoin (get_next_line_utils.c:70)
==359886==    by 0x40738B: get_next_line (get_next_line.c:48)
==359886==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359886==    by 0x406039: main (mandatory.cpp:79)
==359886==  Address 0x4de5d11 is 1 bytes inside a block of size 4 free'd
==359886==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359886==    by 0x407708: f_search_bn (get_next_line_utils.c:118)
==359886==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359886==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359886==    by 0x406027: main (mandatory.cpp:79)
==359886==  Block was alloc'd at
==359886==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359886==    by 0x40755A: ft_strjoin (get_next_line_utils.c:64)
==359886==    by 0x40738B: get_next_line (get_next_line.c:48)
==359886==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359886==    by 0x406027: main (mandatory.cpp:79)
==359886== 
==359886== Invalid read of size 1
==359886==    at 0x40772A: f_del_front_bn (get_next_line_utils.c:162)
==359886==    by 0x4073CD: get_next_line (get_next_line.c:52)
==359886==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359886==    by 0x406039: main (mandatory.cpp:79)
==359886==  Address 0x4de5db0 is 0 bytes inside a block of size 3 free'd
==359886==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359886==    by 0x407708: f_search_bn (get_next_line_utils.c:118)
==359886==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359886==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359886==    by 0x406039: main (mandatory.cpp:79)
==359886==  Block was alloc'd at
==359886==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359886==    by 0x40755A: ft_strjoin (get_next_line_utils.c:64)
==359886==    by 0x40738B: get_next_line (get_next_line.c:48)
==359886==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359886==    by 0x406039: main (mandatory.cpp:79)
==359886== 
==359886== Invalid read of size 1
==359886==    at 0x4075B0: ft_strjoin (get_next_line_utils.c:68)
==359886==    by 0x40738B: get_next_line (get_next_line.c:48)
==359886==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359886==    by 0x40604B: main (mandatory.cpp:79)
==359886==  Address 0x4de5db1 is 1 bytes inside a block of size 3 free'd
==359886==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359886==    by 0x407708: f_search_bn (get_next_line_utils.c:118)
==359886==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359886==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359886==    by 0x406039: main (mandatory.cpp:79)
==359886==  Block was alloc'd at
==359886==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359886==    by 0x40755A: ft_strjoin (get_next_line_utils.c:64)
==359886==    by 0x40738B: get_next_line (get_next_line.c:48)
==359886==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359886==    by 0x406039: main (mandatory.cpp:79)
==359886== 
==359886== Invalid read of size 1
==359886==    at 0x407593: ft_strjoin (get_next_line_utils.c:70)
==359886==    by 0x40738B: get_next_line (get_next_line.c:48)
==359886==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359886==    by 0x40604B: main (mandatory.cpp:79)
==359886==  Address 0x4de5db1 is 1 bytes inside a block of size 3 free'd
==359886==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359886==    by 0x407708: f_search_bn (get_next_line_utils.c:118)
==359886==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359886==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359886==    by 0x406039: main (mandatory.cpp:79)
==359886==  Block was alloc'd at
==359886==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359886==    by 0x40755A: ft_strjoin (get_next_line_utils.c:64)
==359886==    by 0x40738B: get_next_line (get_next_line.c:48)
==359886==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359886==    by 0x406039: main (mandatory.cpp:79)
==359886== 
==359886== Invalid read of size 1
==359886==    at 0x40772A: f_del_front_bn (get_next_line_utils.c:162)
==359886==    by 0x4073CD: get_next_line (get_next_line.c:52)
==359886==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359886==    by 0x40604B: main (mandatory.cpp:79)
==359886==  Address 0x4de5e50 is 0 bytes inside a block of size 2 free'd
==359886==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359886==    by 0x407708: f_search_bn (get_next_line_utils.c:118)
==359886==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359886==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359886==    by 0x40604B: main (mandatory.cpp:79)
==359886==  Block was alloc'd at
==359886==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359886==    by 0x40755A: ft_strjoin (get_next_line_utils.c:64)
==359886==    by 0x40738B: get_next_line (get_next_line.c:48)
==359886==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359886==    by 0x40604B: main (mandatory.cpp:79)
==359886== 
==359886== Invalid read of size 1
==359886==    at 0x4075B0: ft_strjoin (get_next_line_utils.c:68)
==359886==    by 0x40738B: get_next_line (get_next_line.c:48)
==359886==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359886==    by 0x406057: main (mandatory.cpp:79)
==359886==  Address 0x4de5e51 is 1 bytes inside a block of size 2 free'd
==359886==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359886==    by 0x407708: f_search_bn (get_next_line_utils.c:118)
==359886==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359886==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359886==    by 0x40604B: main (mandatory.cpp:79)
==359886==  Block was alloc'd at
==359886==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359886==    by 0x40755A: ft_strjoin (get_next_line_utils.c:64)
==359886==    by 0x40738B: get_next_line (get_next_line.c:48)
==359886==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359886==    by 0x40604B: main (mandatory.cpp:79)
==359886== 
==359886== 1 bytes in 1 blocks are definitely lost in loss record 1 of 1
==359886==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359886==    by 0x407364: get_next_line (get_next_line.c:43)
==359886==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359886==    by 0x406003: main (mandatory.cpp:79)
==359886== 
==359889== Invalid read of size 1
==359889==    at 0x40772A: f_del_front_bn (get_next_line_utils.c:162)
==359889==    by 0x4073CD: get_next_line (get_next_line.c:52)
==359889==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359889==    by 0x406277: main (mandatory.cpp:88)
==359889==  Address 0x4de5f00 is 0 bytes inside a block of size 214 free'd
==359889==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359889==    by 0x407708: f_search_bn (get_next_line_utils.c:118)
==359889==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359889==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359889==    by 0x406277: main (mandatory.cpp:88)
==359889==  Block was alloc'd at
==359889==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359889==    by 0x40755A: ft_strjoin (get_next_line_utils.c:64)
==359889==    by 0x40738B: get_next_line (get_next_line.c:48)
==359889==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359889==    by 0x406277: main (mandatory.cpp:88)
==359889== 
==359889== Invalid read of size 1
==359889==    at 0x407509: ft_strlen (get_next_line_utils.c:43)
==359889==    by 0x407536: ft_strjoin (get_next_line_utils.c:59)
==359889==    by 0x40738B: get_next_line (get_next_line.c:48)
==359889==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359889==    by 0x406289: main (mandatory.cpp:88)
==359889==  Address 0x4de5f2a is 42 bytes inside a block of size 214 free'd
==359889==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359889==    by 0x407708: f_search_bn (get_next_line_utils.c:118)
==359889==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359889==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359889==    by 0x406277: main (mandatory.cpp:88)
==359889==  Block was alloc'd at
==359889==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359889==    by 0x40755A: ft_strjoin (get_next_line_utils.c:64)
==359889==    by 0x40738B: get_next_line (get_next_line.c:48)
==359889==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359889==    by 0x406277: main (mandatory.cpp:88)
==359889== 
==359889== Invalid read of size 1
==359889==    at 0x4075B0: ft_strjoin (get_next_line_utils.c:68)
==359889==    by 0x40738B: get_next_line (get_next_line.c:48)
==359889==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359889==    by 0x406289: main (mandatory.cpp:88)
==359889==  Address 0x4de5f2a is 42 bytes inside a block of size 214 free'd
==359889==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359889==    by 0x407708: f_search_bn (get_next_line_utils.c:118)
==359889==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359889==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359889==    by 0x406277: main (mandatory.cpp:88)
==359889==  Block was alloc'd at
==359889==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359889==    by 0x40755A: ft_strjoin (get_next_line_utils.c:64)
==359889==    by 0x40738B: get_next_line (get_next_line.c:48)
==359889==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359889==    by 0x406277: main (mandatory.cpp:88)
==359889== 
==359889== Invalid read of size 1
==359889==    at 0x407593: ft_strjoin (get_next_line_utils.c:70)
==359889==    by 0x40738B: get_next_line (get_next_line.c:48)
==359889==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359889==    by 0x406289: main (mandatory.cpp:88)
==359889==  Address 0x4de5f2a is 42 bytes inside a block of size 214 free'd
==359889==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359889==    by 0x407708: f_search_bn (get_next_line_utils.c:118)
==359889==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359889==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359889==    by 0x406277: main (mandatory.cpp:88)
==359889==  Block was alloc'd at
==359889==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359889==    by 0x40755A: ft_strjoin (get_next_line_utils.c:64)
==359889==    by 0x40738B: get_next_line (get_next_line.c:48)
==359889==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359889==    by 0x406277: main (mandatory.cpp:88)
==359889== 
==359889== Invalid read of size 1
==359889==    at 0x40772A: f_del_front_bn (get_next_line_utils.c:162)
==359889==    by 0x4073CD: get_next_line (get_next_line.c:52)
==359889==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359889==    by 0x406289: main (mandatory.cpp:88)
==359889==  Address 0x4de6090 is 0 bytes inside a block of size 172 free'd
==359889==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359889==    by 0x407708: f_search_bn (get_next_line_utils.c:118)
==359889==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359889==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359889==    by 0x406289: main (mandatory.cpp:88)
==359889==  Block was alloc'd at
==359889==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359889==    by 0x40755A: ft_strjoin (get_next_line_utils.c:64)
==359889==    by 0x40738B: get_next_line (get_next_line.c:48)
==359889==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359889==    by 0x406289: main (mandatory.cpp:88)
==359889== 
==359889== Invalid read of size 1
==359889==    at 0x4075B0: ft_strjoin (get_next_line_utils.c:68)
==359889==    by 0x40738B: get_next_line (get_next_line.c:48)
==359889==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359889==    by 0x40629B: main (mandatory.cpp:88)
==359889==  Address 0x4de60bb is 43 bytes inside a block of size 172 free'd
==359889==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359889==    by 0x407708: f_search_bn (get_next_line_utils.c:118)
==359889==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359889==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359889==    by 0x406289: main (mandatory.cpp:88)
==359889==  Block was alloc'd at
==359889==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359889==    by 0x40755A: ft_strjoin (get_next_line_utils.c:64)
==359889==    by 0x40738B: get_next_line (get_next_line.c:48)
==359889==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359889==    by 0x406289: main (mandatory.cpp:88)
==359889== 
==359889== Invalid read of size 1
==359889==    at 0x407593: ft_strjoin (get_next_line_utils.c:70)
==359889==    by 0x40738B: get_next_line (get_next_line.c:48)
==359889==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359889==    by 0x40629B: main (mandatory.cpp:88)
==359889==  Address 0x4de60bb is 43 bytes inside a block of size 172 free'd
==359889==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359889==    by 0x407708: f_search_bn (get_next_line_utils.c:118)
==359889==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359889==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359889==    by 0x406289: main (mandatory.cpp:88)
==359889==  Block was alloc'd at
==359889==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359889==    by 0x40755A: ft_strjoin (get_next_line_utils.c:64)
==359889==    by 0x40738B: get_next_line (get_next_line.c:48)
==359889==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359889==    by 0x406289: main (mandatory.cpp:88)
==359889== 
==359889== Invalid read of size 1
==359889==    at 0x40772A: f_del_front_bn (get_next_line_utils.c:162)
==359889==    by 0x4073CD: get_next_line (get_next_line.c:52)
==359889==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359889==    by 0x40629B: main (mandatory.cpp:88)
==359889==  Address 0x4de61f0 is 0 bytes inside a block of size 129 free'd
==359889==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359889==    by 0x407708: f_search_bn (get_next_line_utils.c:118)
==359889==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359889==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359889==    by 0x40629B: main (mandatory.cpp:88)
==359889==  Block was alloc'd at
==359889==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359889==    by 0x40755A: ft_strjoin (get_next_line_utils.c:64)
==359889==    by 0x40738B: get_next_line (get_next_line.c:48)
==359889==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359889==    by 0x40629B: main (mandatory.cpp:88)
==359889== 
==359889== Invalid read of size 1
==359889==    at 0x4075B0: ft_strjoin (get_next_line_utils.c:68)
==359889==    by 0x40738B: get_next_line (get_next_line.c:48)
==359889==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359889==    by 0x4062AD: main (mandatory.cpp:88)
==359889==  Address 0x4de621c is 44 bytes inside a block of size 129 free'd
==359889==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359889==    by 0x407708: f_search_bn (get_next_line_utils.c:118)
==359889==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359889==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359889==    by 0x40629B: main (mandatory.cpp:88)
==359889==  Block was alloc'd at
==359889==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359889==    by 0x40755A: ft_strjoin (get_next_line_utils.c:64)
==359889==    by 0x40738B: get_next_line (get_next_line.c:48)
==359889==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359889==    by 0x40629B: main (mandatory.cpp:88)
==359889== 
==359889== Invalid read of size 1
==359889==    at 0x407593: ft_strjoin (get_next_line_utils.c:70)
==359889==    by 0x40738B: get_next_line (get_next_line.c:48)
==359889==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359889==    by 0x4062AD: main (mandatory.cpp:88)
==359889==  Address 0x4de621c is 44 bytes inside a block of size 129 free'd
==359889==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359889==    by 0x407708: f_search_bn (get_next_line_utils.c:118)
==359889==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359889==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359889==    by 0x40629B: main (mandatory.cpp:88)
==359889==  Block was alloc'd at
==359889==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359889==    by 0x40755A: ft_strjoin (get_next_line_utils.c:64)
==359889==    by 0x40738B: get_next_line (get_next_line.c:48)
==359889==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359889==    by 0x40629B: main (mandatory.cpp:88)
==359889== 
==359889== Invalid read of size 1
==359889==    at 0x40772A: f_del_front_bn (get_next_line_utils.c:162)
==359889==    by 0x4073CD: get_next_line (get_next_line.c:52)
==359889==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359889==    by 0x4062AD: main (mandatory.cpp:88)
==359889==  Address 0x4de6330 is 0 bytes inside a block of size 85 free'd
==359889==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359889==    by 0x407708: f_search_bn (get_next_line_utils.c:118)
==359889==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359889==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359889==    by 0x4062AD: main (mandatory.cpp:88)
==359889==  Block was alloc'd at
==359889==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359889==    by 0x40755A: ft_strjoin (get_next_line_utils.c:64)
==359889==    by 0x40738B: get_next_line (get_next_line.c:48)
==359889==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359889==    by 0x4062AD: main (mandatory.cpp:88)
==359889== 
==359889== Invalid read of size 1
==359889==    at 0x4075B0: ft_strjoin (get_next_line_utils.c:68)
==359889==    by 0x40738B: get_next_line (get_next_line.c:48)
==359889==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359889==    by 0x4062BF: main (mandatory.cpp:88)
==359889==  Address 0x4de635b is 43 bytes inside a block of size 85 free'd
==359889==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359889==    by 0x407708: f_search_bn (get_next_line_utils.c:118)
==359889==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359889==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359889==    by 0x4062AD: main (mandatory.cpp:88)
==359889==  Block was alloc'd at
==359889==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359889==    by 0x40755A: ft_strjoin (get_next_line_utils.c:64)
==359889==    by 0x40738B: get_next_line (get_next_line.c:48)
==359889==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359889==    by 0x4062AD: main (mandatory.cpp:88)
==359889== 
==359889== Invalid read of size 1
==359889==    at 0x407593: ft_strjoin (get_next_line_utils.c:70)
==359889==    by 0x40738B: get_next_line (get_next_line.c:48)
==359889==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359889==    by 0x4062BF: main (mandatory.cpp:88)
==359889==  Address 0x4de635b is 43 bytes inside a block of size 85 free'd
==359889==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359889==    by 0x407708: f_search_bn (get_next_line_utils.c:118)
==359889==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359889==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359889==    by 0x4062AD: main (mandatory.cpp:88)
==359889==  Block was alloc'd at
==359889==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359889==    by 0x40755A: ft_strjoin (get_next_line_utils.c:64)
==359889==    by 0x40738B: get_next_line (get_next_line.c:48)
==359889==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359889==    by 0x4062AD: main (mandatory.cpp:88)
==359889== 
==359889== Invalid read of size 1
==359889==    at 0x484FBD4: strcmp (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359889==    by 0x402D0A: gnl(int, char const*) (gnl.cpp:24)
==359889==    by 0x4062BF: main (mandatory.cpp:88)
==359889==  Address 0x0 is not stack'd, malloc'd or (recently) free'd
==359889== 
==359889== 1 bytes in 1 blocks are definitely lost in loss record 1 of 1
==359889==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359889==    by 0x407364: get_next_line (get_next_line.c:43)
==359889==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359889==    by 0x406277: main (mandatory.cpp:88)
==359889== 
==359890== Invalid read of size 1
==359890==    at 0x40772A: f_del_front_bn (get_next_line_utils.c:162)
==359890==    by 0x4073CD: get_next_line (get_next_line.c:52)
==359890==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359890==    by 0x4064EB: main (mandatory.cpp:97)
==359890==  Address 0x4de6230 is 0 bytes inside a block of size 210 free'd
==359890==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359890==    by 0x407708: f_search_bn (get_next_line_utils.c:118)
==359890==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359890==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359890==    by 0x4064EB: main (mandatory.cpp:97)
==359890==  Block was alloc'd at
==359890==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359890==    by 0x40755A: ft_strjoin (get_next_line_utils.c:64)
==359890==    by 0x40738B: get_next_line (get_next_line.c:48)
==359890==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359890==    by 0x4064EB: main (mandatory.cpp:97)
==359890== 
==359890== Invalid read of size 1
==359890==    at 0x407509: ft_strlen (get_next_line_utils.c:43)
==359890==    by 0x407536: ft_strjoin (get_next_line_utils.c:59)
==359890==    by 0x40738B: get_next_line (get_next_line.c:48)
==359890==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359890==    by 0x4064FD: main (mandatory.cpp:97)
==359890==  Address 0x4de6259 is 41 bytes inside a block of size 210 free'd
==359890==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359890==    by 0x407708: f_search_bn (get_next_line_utils.c:118)
==359890==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359890==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359890==    by 0x4064EB: main (mandatory.cpp:97)
==359890==  Block was alloc'd at
==359890==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359890==    by 0x40755A: ft_strjoin (get_next_line_utils.c:64)
==359890==    by 0x40738B: get_next_line (get_next_line.c:48)
==359890==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359890==    by 0x4064EB: main (mandatory.cpp:97)
==359890== 
==359890== Invalid read of size 1
==359890==    at 0x4075B0: ft_strjoin (get_next_line_utils.c:68)
==359890==    by 0x40738B: get_next_line (get_next_line.c:48)
==359890==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359890==    by 0x4064FD: main (mandatory.cpp:97)
==359890==  Address 0x4de6259 is 41 bytes inside a block of size 210 free'd
==359890==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359890==    by 0x407708: f_search_bn (get_next_line_utils.c:118)
==359890==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359890==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359890==    by 0x4064EB: main (mandatory.cpp:97)
==359890==  Block was alloc'd at
==359890==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359890==    by 0x40755A: ft_strjoin (get_next_line_utils.c:64)
==359890==    by 0x40738B: get_next_line (get_next_line.c:48)
==359890==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359890==    by 0x4064EB: main (mandatory.cpp:97)
==359890== 
==359890== Invalid read of size 1
==359890==    at 0x407593: ft_strjoin (get_next_line_utils.c:70)
==359890==    by 0x40738B: get_next_line (get_next_line.c:48)
==359890==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359890==    by 0x4064FD: main (mandatory.cpp:97)
==359890==  Address 0x4de6259 is 41 bytes inside a block of size 210 free'd
==359890==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359890==    by 0x407708: f_search_bn (get_next_line_utils.c:118)
==359890==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359890==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359890==    by 0x4064EB: main (mandatory.cpp:97)
==359890==  Block was alloc'd at
==359890==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359890==    by 0x40755A: ft_strjoin (get_next_line_utils.c:64)
==359890==    by 0x40738B: get_next_line (get_next_line.c:48)
==359890==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359890==    by 0x4064EB: main (mandatory.cpp:97)
==359890== 
==359890== Invalid read of size 1
==359890==    at 0x40772A: f_del_front_bn (get_next_line_utils.c:162)
==359890==    by 0x4073CD: get_next_line (get_next_line.c:52)
==359890==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359890==    by 0x4064FD: main (mandatory.cpp:97)
==359890==  Address 0x4de63c0 is 0 bytes inside a block of size 169 free'd
==359890==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359890==    by 0x407708: f_search_bn (get_next_line_utils.c:118)
==359890==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359890==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359890==    by 0x4064FD: main (mandatory.cpp:97)
==359890==  Block was alloc'd at
==359890==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359890==    by 0x40755A: ft_strjoin (get_next_line_utils.c:64)
==359890==    by 0x40738B: get_next_line (get_next_line.c:48)
==359890==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359890==    by 0x4064FD: main (mandatory.cpp:97)
==359890== 
==359890== Invalid read of size 1
==359890==    at 0x4075B0: ft_strjoin (get_next_line_utils.c:68)
==359890==    by 0x40738B: get_next_line (get_next_line.c:48)
==359890==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359890==    by 0x40650F: main (mandatory.cpp:97)
==359890==  Address 0x4de63ea is 42 bytes inside a block of size 169 free'd
==359890==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359890==    by 0x407708: f_search_bn (get_next_line_utils.c:118)
==359890==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359890==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359890==    by 0x4064FD: main (mandatory.cpp:97)
==359890==  Block was alloc'd at
==359890==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359890==    by 0x40755A: ft_strjoin (get_next_line_utils.c:64)
==359890==    by 0x40738B: get_next_line (get_next_line.c:48)
==359890==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359890==    by 0x4064FD: main (mandatory.cpp:97)
==359890== 
==359890== Invalid read of size 1
==359890==    at 0x407593: ft_strjoin (get_next_line_utils.c:70)
==359890==    by 0x40738B: get_next_line (get_next_line.c:48)
==359890==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359890==    by 0x40650F: main (mandatory.cpp:97)
==359890==  Address 0x4de63ea is 42 bytes inside a block of size 169 free'd
==359890==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359890==    by 0x407708: f_search_bn (get_next_line_utils.c:118)
==359890==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359890==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359890==    by 0x4064FD: main (mandatory.cpp:97)
==359890==  Block was alloc'd at
==359890==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359890==    by 0x40755A: ft_strjoin (get_next_line_utils.c:64)
==359890==    by 0x40738B: get_next_line (get_next_line.c:48)
==359890==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359890==    by 0x4064FD: main (mandatory.cpp:97)
==359890== 
==359890== Invalid read of size 1
==359890==    at 0x40772A: f_del_front_bn (get_next_line_utils.c:162)
==359890==    by 0x4073CD: get_next_line (get_next_line.c:52)
==359890==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359890==    by 0x40650F: main (mandatory.cpp:97)
==359890==  Address 0x4de6520 is 0 bytes inside a block of size 127 free'd
==359890==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359890==    by 0x407708: f_search_bn (get_next_line_utils.c:118)
==359890==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359890==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359890==    by 0x40650F: main (mandatory.cpp:97)
==359890==  Block was alloc'd at
==359890==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359890==    by 0x40755A: ft_strjoin (get_next_line_utils.c:64)
==359890==    by 0x40738B: get_next_line (get_next_line.c:48)
==359890==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359890==    by 0x40650F: main (mandatory.cpp:97)
==359890== 
==359890== Invalid read of size 1
==359890==    at 0x4075B0: ft_strjoin (get_next_line_utils.c:68)
==359890==    by 0x40738B: get_next_line (get_next_line.c:48)
==359890==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359890==    by 0x406521: main (mandatory.cpp:97)
==359890==  Address 0x4de654b is 43 bytes inside a block of size 127 free'd
==359890==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359890==    by 0x407708: f_search_bn (get_next_line_utils.c:118)
==359890==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359890==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359890==    by 0x40650F: main (mandatory.cpp:97)
==359890==  Block was alloc'd at
==359890==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359890==    by 0x40755A: ft_strjoin (get_next_line_utils.c:64)
==359890==    by 0x40738B: get_next_line (get_next_line.c:48)
==359890==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359890==    by 0x40650F: main (mandatory.cpp:97)
==359890== 
==359890== Invalid read of size 1
==359890==    at 0x407593: ft_strjoin (get_next_line_utils.c:70)
==359890==    by 0x40738B: get_next_line (get_next_line.c:48)
==359890==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359890==    by 0x406521: main (mandatory.cpp:97)
==359890==  Address 0x4de654b is 43 bytes inside a block of size 127 free'd
==359890==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359890==    by 0x407708: f_search_bn (get_next_line_utils.c:118)
==359890==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359890==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359890==    by 0x40650F: main (mandatory.cpp:97)
==359890==  Block was alloc'd at
==359890==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359890==    by 0x40755A: ft_strjoin (get_next_line_utils.c:64)
==359890==    by 0x40738B: get_next_line (get_next_line.c:48)
==359890==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359890==    by 0x40650F: main (mandatory.cpp:97)
==359890== 
==359890== Invalid read of size 1
==359890==    at 0x40772A: f_del_front_bn (get_next_line_utils.c:162)
==359890==    by 0x4073CD: get_next_line (get_next_line.c:52)
==359890==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359890==    by 0x406521: main (mandatory.cpp:97)
==359890==  Address 0x4de6650 is 0 bytes inside a block of size 84 free'd
==359890==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359890==    by 0x407708: f_search_bn (get_next_line_utils.c:118)
==359890==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359890==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359890==    by 0x406521: main (mandatory.cpp:97)
==359890==  Block was alloc'd at
==359890==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359890==    by 0x40755A: ft_strjoin (get_next_line_utils.c:64)
==359890==    by 0x40738B: get_next_line (get_next_line.c:48)
==359890==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359890==    by 0x406521: main (mandatory.cpp:97)
==359890== 
==359890== Invalid read of size 1
==359890==    at 0x4075B0: ft_strjoin (get_next_line_utils.c:68)
==359890==    by 0x40738B: get_next_line (get_next_line.c:48)
==359890==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359890==    by 0x406533: main (mandatory.cpp:97)
==359890==  Address 0x4de667a is 42 bytes inside a block of size 84 free'd
==359890==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359890==    by 0x407708: f_search_bn (get_next_line_utils.c:118)
==359890==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359890==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359890==    by 0x406521: main (mandatory.cpp:97)
==359890==  Block was alloc'd at
==359890==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359890==    by 0x40755A: ft_strjoin (get_next_line_utils.c:64)
==359890==    by 0x40738B: get_next_line (get_next_line.c:48)
==359890==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359890==    by 0x406521: main (mandatory.cpp:97)
==359890== 
==359890== Invalid read of size 1
==359890==    at 0x407593: ft_strjoin (get_next_line_utils.c:70)
==359890==    by 0x40738B: get_next_line (get_next_line.c:48)
==359890==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359890==    by 0x406533: main (mandatory.cpp:97)
==359890==  Address 0x4de667a is 42 bytes inside a block of size 84 free'd
==359890==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359890==    by 0x407708: f_search_bn (get_next_line_utils.c:118)
==359890==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359890==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359890==    by 0x406521: main (mandatory.cpp:97)
==359890==  Block was alloc'd at
==359890==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359890==    by 0x40755A: ft_strjoin (get_next_line_utils.c:64)
==359890==    by 0x40738B: get_next_line (get_next_line.c:48)
==359890==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359890==    by 0x406521: main (mandatory.cpp:97)
==359890== 
==359890== Invalid read of size 1
==359890==    at 0x40772A: f_del_front_bn (get_next_line_utils.c:162)
==359890==    by 0x4073CD: get_next_line (get_next_line.c:52)
==359890==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359890==    by 0x406533: main (mandatory.cpp:97)
==359890==  Address 0x4de6760 is 0 bytes inside a block of size 42 free'd
==359890==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359890==    by 0x407708: f_search_bn (get_next_line_utils.c:118)
==359890==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359890==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359890==    by 0x406533: main (mandatory.cpp:97)
==359890==  Block was alloc'd at
==359890==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359890==    by 0x40755A: ft_strjoin (get_next_line_utils.c:64)
==359890==    by 0x40738B: get_next_line (get_next_line.c:48)
==359890==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359890==    by 0x406533: main (mandatory.cpp:97)
==359890== 
==359890== Invalid read of size 1
==359890==    at 0x4075B0: ft_strjoin (get_next_line_utils.c:68)
==359890==    by 0x40738B: get_next_line (get_next_line.c:48)
==359890==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359890==    by 0x40653F: main (mandatory.cpp:97)
==359890==  Address 0x4de6789 is 41 bytes inside a block of size 42 free'd
==359890==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359890==    by 0x407708: f_search_bn (get_next_line_utils.c:118)
==359890==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359890==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359890==    by 0x406533: main (mandatory.cpp:97)
==359890==  Block was alloc'd at
==359890==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359890==    by 0x40755A: ft_strjoin (get_next_line_utils.c:64)
==359890==    by 0x40738B: get_next_line (get_next_line.c:48)
==359890==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359890==    by 0x406533: main (mandatory.cpp:97)
==359890== 
==359890== 1 bytes in 1 blocks are definitely lost in loss record 1 of 1
==359890==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359890==    by 0x407364: get_next_line (get_next_line.c:43)
==359890==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359890==    by 0x4064EB: main (mandatory.cpp:97)
==359890== 
==359893== Invalid read of size 1
==359893==    at 0x40772A: f_del_front_bn (get_next_line_utils.c:162)
==359893==    by 0x4073CD: get_next_line (get_next_line.c:52)
==359893==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359893==    by 0x40675F: main (mandatory.cpp:106)
==359893==  Address 0x4de6560 is 0 bytes inside a block of size 218 free'd
==359893==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359893==    by 0x407708: f_search_bn (get_next_line_utils.c:118)
==359893==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359893==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359893==    by 0x40675F: main (mandatory.cpp:106)
==359893==  Block was alloc'd at
==359893==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359893==    by 0x40755A: ft_strjoin (get_next_line_utils.c:64)
==359893==    by 0x40738B: get_next_line (get_next_line.c:48)
==359893==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359893==    by 0x40675F: main (mandatory.cpp:106)
==359893== 
==359893== Invalid read of size 1
==359893==    at 0x407509: ft_strlen (get_next_line_utils.c:43)
==359893==    by 0x407536: ft_strjoin (get_next_line_utils.c:59)
==359893==    by 0x40738B: get_next_line (get_next_line.c:48)
==359893==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359893==    by 0x406771: main (mandatory.cpp:106)
==359893==  Address 0x4de658a is 42 bytes inside a block of size 218 free'd
==359893==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359893==    by 0x407708: f_search_bn (get_next_line_utils.c:118)
==359893==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359893==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359893==    by 0x40675F: main (mandatory.cpp:106)
==359893==  Block was alloc'd at
==359893==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359893==    by 0x40755A: ft_strjoin (get_next_line_utils.c:64)
==359893==    by 0x40738B: get_next_line (get_next_line.c:48)
==359893==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359893==    by 0x40675F: main (mandatory.cpp:106)
==359893== 
==359893== Invalid read of size 1
==359893==    at 0x4075B0: ft_strjoin (get_next_line_utils.c:68)
==359893==    by 0x40738B: get_next_line (get_next_line.c:48)
==359893==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359893==    by 0x406771: main (mandatory.cpp:106)
==359893==  Address 0x4de658a is 42 bytes inside a block of size 218 free'd
==359893==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359893==    by 0x407708: f_search_bn (get_next_line_utils.c:118)
==359893==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359893==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359893==    by 0x40675F: main (mandatory.cpp:106)
==359893==  Block was alloc'd at
==359893==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359893==    by 0x40755A: ft_strjoin (get_next_line_utils.c:64)
==359893==    by 0x40738B: get_next_line (get_next_line.c:48)
==359893==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359893==    by 0x40675F: main (mandatory.cpp:106)
==359893== 
==359893== Invalid read of size 1
==359893==    at 0x407593: ft_strjoin (get_next_line_utils.c:70)
==359893==    by 0x40738B: get_next_line (get_next_line.c:48)
==359893==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359893==    by 0x406771: main (mandatory.cpp:106)
==359893==  Address 0x4de658a is 42 bytes inside a block of size 218 free'd
==359893==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359893==    by 0x407708: f_search_bn (get_next_line_utils.c:118)
==359893==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359893==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359893==    by 0x40675F: main (mandatory.cpp:106)
==359893==  Block was alloc'd at
==359893==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359893==    by 0x40755A: ft_strjoin (get_next_line_utils.c:64)
==359893==    by 0x40738B: get_next_line (get_next_line.c:48)
==359893==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359893==    by 0x40675F: main (mandatory.cpp:106)
==359893== 
==359893== Invalid read of size 1
==359893==    at 0x40772A: f_del_front_bn (get_next_line_utils.c:162)
==359893==    by 0x4073CD: get_next_line (get_next_line.c:52)
==359893==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359893==    by 0x406771: main (mandatory.cpp:106)
==359893==  Address 0x4de66f0 is 0 bytes inside a block of size 176 free'd
==359893==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359893==    by 0x407708: f_search_bn (get_next_line_utils.c:118)
==359893==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359893==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359893==    by 0x406771: main (mandatory.cpp:106)
==359893==  Block was alloc'd at
==359893==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359893==    by 0x40755A: ft_strjoin (get_next_line_utils.c:64)
==359893==    by 0x40738B: get_next_line (get_next_line.c:48)
==359893==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359893==    by 0x406771: main (mandatory.cpp:106)
==359893== 
==359893== Invalid read of size 1
==359893==    at 0x4075B0: ft_strjoin (get_next_line_utils.c:68)
==359893==    by 0x40738B: get_next_line (get_next_line.c:48)
==359893==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359893==    by 0x406783: main (mandatory.cpp:106)
==359893==  Address 0x4de66f1 is 1 bytes inside a block of size 176 free'd
==359893==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359893==    by 0x407708: f_search_bn (get_next_line_utils.c:118)
==359893==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359893==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359893==    by 0x406771: main (mandatory.cpp:106)
==359893==  Block was alloc'd at
==359893==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359893==    by 0x40755A: ft_strjoin (get_next_line_utils.c:64)
==359893==    by 0x40738B: get_next_line (get_next_line.c:48)
==359893==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359893==    by 0x406771: main (mandatory.cpp:106)
==359893== 
==359893== Invalid read of size 1
==359893==    at 0x407593: ft_strjoin (get_next_line_utils.c:70)
==359893==    by 0x40738B: get_next_line (get_next_line.c:48)
==359893==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359893==    by 0x406783: main (mandatory.cpp:106)
==359893==  Address 0x4de66f1 is 1 bytes inside a block of size 176 free'd
==359893==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359893==    by 0x407708: f_search_bn (get_next_line_utils.c:118)
==359893==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359893==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359893==    by 0x406771: main (mandatory.cpp:106)
==359893==  Block was alloc'd at
==359893==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359893==    by 0x40755A: ft_strjoin (get_next_line_utils.c:64)
==359893==    by 0x40738B: get_next_line (get_next_line.c:48)
==359893==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359893==    by 0x406771: main (mandatory.cpp:106)
==359893== 
==359893== Invalid read of size 1
==359893==    at 0x40772A: f_del_front_bn (get_next_line_utils.c:162)
==359893==    by 0x4073CD: get_next_line (get_next_line.c:52)
==359893==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359893==    by 0x406783: main (mandatory.cpp:106)
==359893==  Address 0x4de6830 is 0 bytes inside a block of size 175 free'd
==359893==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359893==    by 0x407708: f_search_bn (get_next_line_utils.c:118)
==359893==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359893==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359893==    by 0x406783: main (mandatory.cpp:106)
==359893==  Block was alloc'd at
==359893==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359893==    by 0x40755A: ft_strjoin (get_next_line_utils.c:64)
==359893==    by 0x40738B: get_next_line (get_next_line.c:48)
==359893==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359893==    by 0x406783: main (mandatory.cpp:106)
==359893== 
==359893== Invalid read of size 1
==359893==    at 0x4075B0: ft_strjoin (get_next_line_utils.c:68)
==359893==    by 0x40738B: get_next_line (get_next_line.c:48)
==359893==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359893==    by 0x406795: main (mandatory.cpp:106)
==359893==  Address 0x4de685b is 43 bytes inside a block of size 175 free'd
==359893==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359893==    by 0x407708: f_search_bn (get_next_line_utils.c:118)
==359893==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359893==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359893==    by 0x406783: main (mandatory.cpp:106)
==359893==  Block was alloc'd at
==359893==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359893==    by 0x40755A: ft_strjoin (get_next_line_utils.c:64)
==359893==    by 0x40738B: get_next_line (get_next_line.c:48)
==359893==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359893==    by 0x406783: main (mandatory.cpp:106)
==359893== 
==359893== Invalid read of size 1
==359893==    at 0x407593: ft_strjoin (get_next_line_utils.c:70)
==359893==    by 0x40738B: get_next_line (get_next_line.c:48)
==359893==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359893==    by 0x406795: main (mandatory.cpp:106)
==359893==  Address 0x4de685b is 43 bytes inside a block of size 175 free'd
==359893==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359893==    by 0x407708: f_search_bn (get_next_line_utils.c:118)
==359893==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359893==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359893==    by 0x406783: main (mandatory.cpp:106)
==359893==  Block was alloc'd at
==359893==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359893==    by 0x40755A: ft_strjoin (get_next_line_utils.c:64)
==359893==    by 0x40738B: get_next_line (get_next_line.c:48)
==359893==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359893==    by 0x406783: main (mandatory.cpp:106)
==359893== 
==359893== Invalid read of size 1
==359893==    at 0x40772A: f_del_front_bn (get_next_line_utils.c:162)
==359893==    by 0x4073CD: get_next_line (get_next_line.c:52)
==359893==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359893==    by 0x406795: main (mandatory.cpp:106)
==359893==  Address 0x4de6990 is 0 bytes inside a block of size 132 free'd
==359893==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359893==    by 0x407708: f_search_bn (get_next_line_utils.c:118)
==359893==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359893==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359893==    by 0x406795: main (mandatory.cpp:106)
==359893==  Block was alloc'd at
==359893==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359893==    by 0x40755A: ft_strjoin (get_next_line_utils.c:64)
==359893==    by 0x40738B: get_next_line (get_next_line.c:48)
==359893==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359893==    by 0x406795: main (mandatory.cpp:106)
==359893== 
==359893== Invalid read of size 1
==359893==    at 0x4075B0: ft_strjoin (get_next_line_utils.c:68)
==359893==    by 0x40738B: get_next_line (get_next_line.c:48)
==359893==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359893==    by 0x4067A7: main (mandatory.cpp:106)
==359893==  Address 0x4de6991 is 1 bytes inside a block of size 132 free'd
==359893==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359893==    by 0x407708: f_search_bn (get_next_line_utils.c:118)
==359893==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359893==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359893==    by 0x406795: main (mandatory.cpp:106)
==359893==  Block was alloc'd at
==359893==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359893==    by 0x40755A: ft_strjoin (get_next_line_utils.c:64)
==359893==    by 0x40738B: get_next_line (get_next_line.c:48)
==359893==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359893==    by 0x406795: main (mandatory.cpp:106)
==359893== 
==359893== Invalid read of size 1
==359893==    at 0x407593: ft_strjoin (get_next_line_utils.c:70)
==359893==    by 0x40738B: get_next_line (get_next_line.c:48)
==359893==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359893==    by 0x4067A7: main (mandatory.cpp:106)
==359893==  Address 0x4de6991 is 1 bytes inside a block of size 132 free'd
==359893==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359893==    by 0x407708: f_search_bn (get_next_line_utils.c:118)
==359893==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359893==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359893==    by 0x406795: main (mandatory.cpp:106)
==359893==  Block was alloc'd at
==359893==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359893==    by 0x40755A: ft_strjoin (get_next_line_utils.c:64)
==359893==    by 0x40738B: get_next_line (get_next_line.c:48)
==359893==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359893==    by 0x406795: main (mandatory.cpp:106)
==359893== 
==359893== Invalid read of size 1
==359893==    at 0x40772A: f_del_front_bn (get_next_line_utils.c:162)
==359893==    by 0x4073CD: get_next_line (get_next_line.c:52)
==359893==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359893==    by 0x4067A7: main (mandatory.cpp:106)
==359893==  Address 0x4de6ab0 is 0 bytes inside a block of size 131 free'd
==359893==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359893==    by 0x407708: f_search_bn (get_next_line_utils.c:118)
==359893==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359893==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359893==    by 0x4067A7: main (mandatory.cpp:106)
==359893==  Block was alloc'd at
==359893==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359893==    by 0x40755A: ft_strjoin (get_next_line_utils.c:64)
==359893==    by 0x40738B: get_next_line (get_next_line.c:48)
==359893==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359893==    by 0x4067A7: main (mandatory.cpp:106)
==359893== 
==359893== Invalid read of size 1
==359893==    at 0x4075B0: ft_strjoin (get_next_line_utils.c:68)
==359893==    by 0x40738B: get_next_line (get_next_line.c:48)
==359893==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359893==    by 0x4067B9: main (mandatory.cpp:106)
==359893==  Address 0x4de6adc is 44 bytes inside a block of size 131 free'd
==359893==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359893==    by 0x407708: f_search_bn (get_next_line_utils.c:118)
==359893==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359893==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359893==    by 0x4067A7: main (mandatory.cpp:106)
==359893==  Block was alloc'd at
==359893==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359893==    by 0x40755A: ft_strjoin (get_next_line_utils.c:64)
==359893==    by 0x40738B: get_next_line (get_next_line.c:48)
==359893==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359893==    by 0x4067A7: main (mandatory.cpp:106)
==359893== 
==359893== Invalid read of size 1
==359893==    at 0x407593: ft_strjoin (get_next_line_utils.c:70)
==359893==    by 0x40738B: get_next_line (get_next_line.c:48)
==359893==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359893==    by 0x4067B9: main (mandatory.cpp:106)
==359893==  Address 0x4de6adc is 44 bytes inside a block of size 131 free'd
==359893==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359893==    by 0x407708: f_search_bn (get_next_line_utils.c:118)
==359893==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359893==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359893==    by 0x4067A7: main (mandatory.cpp:106)
==359893==  Block was alloc'd at
==359893==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359893==    by 0x40755A: ft_strjoin (get_next_line_utils.c:64)
==359893==    by 0x40738B: get_next_line (get_next_line.c:48)
==359893==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359893==    by 0x4067A7: main (mandatory.cpp:106)
==359893== 
==359893== Invalid read of size 1
==359893==    at 0x40772A: f_del_front_bn (get_next_line_utils.c:162)
==359893==    by 0x4073CD: get_next_line (get_next_line.c:52)
==359893==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359893==    by 0x4067B9: main (mandatory.cpp:106)
==359893==  Address 0x4de6bf0 is 0 bytes inside a block of size 87 free'd
==359893==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359893==    by 0x407708: f_search_bn (get_next_line_utils.c:118)
==359893==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359893==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359893==    by 0x4067B9: main (mandatory.cpp:106)
==359893==  Block was alloc'd at
==359893==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359893==    by 0x40755A: ft_strjoin (get_next_line_utils.c:64)
==359893==    by 0x40738B: get_next_line (get_next_line.c:48)
==359893==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359893==    by 0x4067B9: main (mandatory.cpp:106)
==359893== 
==359893== Invalid read of size 1
==359893==    at 0x4075B0: ft_strjoin (get_next_line_utils.c:68)
==359893==    by 0x40738B: get_next_line (get_next_line.c:48)
==359893==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359893==    by 0x4067CB: main (mandatory.cpp:106)
==359893==  Address 0x4de6bf1 is 1 bytes inside a block of size 87 free'd
==359893==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359893==    by 0x407708: f_search_bn (get_next_line_utils.c:118)
==359893==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359893==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359893==    by 0x4067B9: main (mandatory.cpp:106)
==359893==  Block was alloc'd at
==359893==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359893==    by 0x40755A: ft_strjoin (get_next_line_utils.c:64)
==359893==    by 0x40738B: get_next_line (get_next_line.c:48)
==359893==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359893==    by 0x4067B9: main (mandatory.cpp:106)
==359893== 
==359893== Invalid read of size 1
==359893==    at 0x407593: ft_strjoin (get_next_line_utils.c:70)
==359893==    by 0x40738B: get_next_line (get_next_line.c:48)
==359893==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359893==    by 0x4067CB: main (mandatory.cpp:106)
==359893==  Address 0x4de6bf1 is 1 bytes inside a block of size 87 free'd
==359893==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359893==    by 0x407708: f_search_bn (get_next_line_utils.c:118)
==359893==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359893==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359893==    by 0x4067B9: main (mandatory.cpp:106)
==359893==  Block was alloc'd at
==359893==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359893==    by 0x40755A: ft_strjoin (get_next_line_utils.c:64)
==359893==    by 0x40738B: get_next_line (get_next_line.c:48)
==359893==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359893==    by 0x4067B9: main (mandatory.cpp:106)
==359893== 
==359893== Invalid read of size 1
==359893==    at 0x40772A: f_del_front_bn (get_next_line_utils.c:162)
==359893==    by 0x4073CD: get_next_line (get_next_line.c:52)
==359893==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359893==    by 0x4067CB: main (mandatory.cpp:106)
==359893==  Address 0x4de6ce0 is 0 bytes inside a block of size 86 free'd
==359893==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359893==    by 0x407708: f_search_bn (get_next_line_utils.c:118)
==359893==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359893==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359893==    by 0x4067CB: main (mandatory.cpp:106)
==359893==  Block was alloc'd at
==359893==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359893==    by 0x40755A: ft_strjoin (get_next_line_utils.c:64)
==359893==    by 0x40738B: get_next_line (get_next_line.c:48)
==359893==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359893==    by 0x4067CB: main (mandatory.cpp:106)
==359893== 
==359893== Invalid read of size 1
==359893==    at 0x4075B0: ft_strjoin (get_next_line_utils.c:68)
==359893==    by 0x40738B: get_next_line (get_next_line.c:48)
==359893==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359893==    by 0x4067DD: main (mandatory.cpp:106)
==359893==  Address 0x4de6d0b is 43 bytes inside a block of size 86 free'd
==359893==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359893==    by 0x407708: f_search_bn (get_next_line_utils.c:118)
==359893==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359893==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359893==    by 0x4067CB: main (mandatory.cpp:106)
==359893==  Block was alloc'd at
==359893==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359893==    by 0x40755A: ft_strjoin (get_next_line_utils.c:64)
==359893==    by 0x40738B: get_next_line (get_next_line.c:48)
==359893==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359893==    by 0x4067CB: main (mandatory.cpp:106)
==359893== 
==359893== Invalid read of size 1
==359893==    at 0x407593: ft_strjoin (get_next_line_utils.c:70)
==359893==    by 0x40738B: get_next_line (get_next_line.c:48)
==359893==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359893==    by 0x4067DD: main (mandatory.cpp:106)
==359893==  Address 0x4de6d0b is 43 bytes inside a block of size 86 free'd
==359893==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359893==    by 0x407708: f_search_bn (get_next_line_utils.c:118)
==359893==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359893==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359893==    by 0x4067CB: main (mandatory.cpp:106)
==359893==  Block was alloc'd at
==359893==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359893==    by 0x40755A: ft_strjoin (get_next_line_utils.c:64)
==359893==    by 0x40738B: get_next_line (get_next_line.c:48)
==359893==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359893==    by 0x4067CB: main (mandatory.cpp:106)
==359893== 
==359893== Invalid read of size 1
==359893==    at 0x40772A: f_del_front_bn (get_next_line_utils.c:162)
==359893==    by 0x4073CD: get_next_line (get_next_line.c:52)
==359893==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359893==    by 0x4067DD: main (mandatory.cpp:106)
==359893==  Address 0x4de6df0 is 0 bytes inside a block of size 43 free'd
==359893==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359893==    by 0x407708: f_search_bn (get_next_line_utils.c:118)
==359893==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359893==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359893==    by 0x4067DD: main (mandatory.cpp:106)
==359893==  Block was alloc'd at
==359893==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359893==    by 0x40755A: ft_strjoin (get_next_line_utils.c:64)
==359893==    by 0x40738B: get_next_line (get_next_line.c:48)
==359893==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359893==    by 0x4067DD: main (mandatory.cpp:106)
==359893== 
==359893== Invalid read of size 1
==359893==    at 0x4075B0: ft_strjoin (get_next_line_utils.c:68)
==359893==    by 0x40738B: get_next_line (get_next_line.c:48)
==359893==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359893==    by 0x4067EF: main (mandatory.cpp:106)
==359893==  Address 0x4de6df1 is 1 bytes inside a block of size 43 free'd
==359893==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359893==    by 0x407708: f_search_bn (get_next_line_utils.c:118)
==359893==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359893==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359893==    by 0x4067DD: main (mandatory.cpp:106)
==359893==  Block was alloc'd at
==359893==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359893==    by 0x40755A: ft_strjoin (get_next_line_utils.c:64)
==359893==    by 0x40738B: get_next_line (get_next_line.c:48)
==359893==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359893==    by 0x4067DD: main (mandatory.cpp:106)
==359893== 
==359893== Invalid read of size 1
==359893==    at 0x407593: ft_strjoin (get_next_line_utils.c:70)
==359893==    by 0x40738B: get_next_line (get_next_line.c:48)
==359893==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359893==    by 0x4067EF: main (mandatory.cpp:106)
==359893==  Address 0x4de6df1 is 1 bytes inside a block of size 43 free'd
==359893==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359893==    by 0x407708: f_search_bn (get_next_line_utils.c:118)
==359893==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359893==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359893==    by 0x4067DD: main (mandatory.cpp:106)
==359893==  Block was alloc'd at
==359893==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359893==    by 0x40755A: ft_strjoin (get_next_line_utils.c:64)
==359893==    by 0x40738B: get_next_line (get_next_line.c:48)
==359893==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359893==    by 0x4067DD: main (mandatory.cpp:106)
==359893== 
==359893== Invalid read of size 1
==359893==    at 0x484FBD4: strcmp (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359893==    by 0x402D0A: gnl(int, char const*) (gnl.cpp:24)
==359893==    by 0x4067EF: main (mandatory.cpp:106)
==359893==  Address 0x0 is not stack'd, malloc'd or (recently) free'd
==359893== 
==359893== 1 bytes in 1 blocks are definitely lost in loss record 1 of 1
==359893==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359893==    by 0x407364: get_next_line (get_next_line.c:43)
==359893==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359893==    by 0x40675F: main (mandatory.cpp:106)
==359893== 
==359894== Invalid read of size 1
==359894==    at 0x40772A: f_del_front_bn (get_next_line_utils.c:162)
==359894==    by 0x4073CD: get_next_line (get_next_line.c:52)
==359894==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359894==    by 0x406A1B: main (mandatory.cpp:119)
==359894==  Address 0x4de6890 is 0 bytes inside a block of size 219 free'd
==359894==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359894==    by 0x407708: f_search_bn (get_next_line_utils.c:118)
==359894==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359894==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359894==    by 0x406A1B: main (mandatory.cpp:119)
==359894==  Block was alloc'd at
==359894==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359894==    by 0x40755A: ft_strjoin (get_next_line_utils.c:64)
==359894==    by 0x40738B: get_next_line (get_next_line.c:48)
==359894==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359894==    by 0x406A1B: main (mandatory.cpp:119)
==359894== 
==359894== Invalid read of size 1
==359894==    at 0x407509: ft_strlen (get_next_line_utils.c:43)
==359894==    by 0x407536: ft_strjoin (get_next_line_utils.c:59)
==359894==    by 0x40738B: get_next_line (get_next_line.c:48)
==359894==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359894==    by 0x406A2D: main (mandatory.cpp:119)
==359894==  Address 0x4de68ba is 42 bytes inside a block of size 219 free'd
==359894==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359894==    by 0x407708: f_search_bn (get_next_line_utils.c:118)
==359894==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359894==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359894==    by 0x406A1B: main (mandatory.cpp:119)
==359894==  Block was alloc'd at
==359894==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359894==    by 0x40755A: ft_strjoin (get_next_line_utils.c:64)
==359894==    by 0x40738B: get_next_line (get_next_line.c:48)
==359894==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359894==    by 0x406A1B: main (mandatory.cpp:119)
==359894== 
==359894== Invalid read of size 1
==359894==    at 0x4075B0: ft_strjoin (get_next_line_utils.c:68)
==359894==    by 0x40738B: get_next_line (get_next_line.c:48)
==359894==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359894==    by 0x406A2D: main (mandatory.cpp:119)
==359894==  Address 0x4de68ba is 42 bytes inside a block of size 219 free'd
==359894==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359894==    by 0x407708: f_search_bn (get_next_line_utils.c:118)
==359894==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359894==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359894==    by 0x406A1B: main (mandatory.cpp:119)
==359894==  Block was alloc'd at
==359894==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359894==    by 0x40755A: ft_strjoin (get_next_line_utils.c:64)
==359894==    by 0x40738B: get_next_line (get_next_line.c:48)
==359894==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359894==    by 0x406A1B: main (mandatory.cpp:119)
==359894== 
==359894== Invalid read of size 1
==359894==    at 0x407593: ft_strjoin (get_next_line_utils.c:70)
==359894==    by 0x40738B: get_next_line (get_next_line.c:48)
==359894==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359894==    by 0x406A2D: main (mandatory.cpp:119)
==359894==  Address 0x4de68ba is 42 bytes inside a block of size 219 free'd
==359894==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359894==    by 0x407708: f_search_bn (get_next_line_utils.c:118)
==359894==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359894==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359894==    by 0x406A1B: main (mandatory.cpp:119)
==359894==  Block was alloc'd at
==359894==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359894==    by 0x40755A: ft_strjoin (get_next_line_utils.c:64)
==359894==    by 0x40738B: get_next_line (get_next_line.c:48)
==359894==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359894==    by 0x406A1B: main (mandatory.cpp:119)
==359894== 
==359894== Invalid read of size 1
==359894==    at 0x40772A: f_del_front_bn (get_next_line_utils.c:162)
==359894==    by 0x4073CD: get_next_line (get_next_line.c:52)
==359894==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359894==    by 0x406A2D: main (mandatory.cpp:119)
==359894==  Address 0x4de6a20 is 0 bytes inside a block of size 177 free'd
==359894==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359894==    by 0x407708: f_search_bn (get_next_line_utils.c:118)
==359894==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359894==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359894==    by 0x406A2D: main (mandatory.cpp:119)
==359894==  Block was alloc'd at
==359894==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359894==    by 0x40755A: ft_strjoin (get_next_line_utils.c:64)
==359894==    by 0x40738B: get_next_line (get_next_line.c:48)
==359894==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359894==    by 0x406A2D: main (mandatory.cpp:119)
==359894== 
==359894== Invalid read of size 1
==359894==    at 0x4075B0: ft_strjoin (get_next_line_utils.c:68)
==359894==    by 0x40738B: get_next_line (get_next_line.c:48)
==359894==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359894==    by 0x406A3F: main (mandatory.cpp:119)
==359894==  Address 0x4de6a21 is 1 bytes inside a block of size 177 free'd
==359894==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359894==    by 0x407708: f_search_bn (get_next_line_utils.c:118)
==359894==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359894==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359894==    by 0x406A2D: main (mandatory.cpp:119)
==359894==  Block was alloc'd at
==359894==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359894==    by 0x40755A: ft_strjoin (get_next_line_utils.c:64)
==359894==    by 0x40738B: get_next_line (get_next_line.c:48)
==359894==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359894==    by 0x406A2D: main (mandatory.cpp:119)
==359894== 
==359894== Invalid read of size 1
==359894==    at 0x407593: ft_strjoin (get_next_line_utils.c:70)
==359894==    by 0x40738B: get_next_line (get_next_line.c:48)
==359894==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359894==    by 0x406A3F: main (mandatory.cpp:119)
==359894==  Address 0x4de6a21 is 1 bytes inside a block of size 177 free'd
==359894==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359894==    by 0x407708: f_search_bn (get_next_line_utils.c:118)
==359894==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359894==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359894==    by 0x406A2D: main (mandatory.cpp:119)
==359894==  Block was alloc'd at
==359894==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359894==    by 0x40755A: ft_strjoin (get_next_line_utils.c:64)
==359894==    by 0x40738B: get_next_line (get_next_line.c:48)
==359894==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359894==    by 0x406A2D: main (mandatory.cpp:119)
==359894== 
==359894== Invalid read of size 1
==359894==    at 0x40772A: f_del_front_bn (get_next_line_utils.c:162)
==359894==    by 0x4073CD: get_next_line (get_next_line.c:52)
==359894==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359894==    by 0x406A3F: main (mandatory.cpp:119)
==359894==  Address 0x4de6b70 is 0 bytes inside a block of size 176 free'd
==359894==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359894==    by 0x407708: f_search_bn (get_next_line_utils.c:118)
==359894==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359894==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359894==    by 0x406A3F: main (mandatory.cpp:119)
==359894==  Block was alloc'd at
==359894==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359894==    by 0x40755A: ft_strjoin (get_next_line_utils.c:64)
==359894==    by 0x40738B: get_next_line (get_next_line.c:48)
==359894==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359894==    by 0x406A3F: main (mandatory.cpp:119)
==359894== 
==359894== Invalid read of size 1
==359894==    at 0x4075B0: ft_strjoin (get_next_line_utils.c:68)
==359894==    by 0x40738B: get_next_line (get_next_line.c:48)
==359894==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359894==    by 0x406A51: main (mandatory.cpp:119)
==359894==  Address 0x4de6b9b is 43 bytes inside a block of size 176 free'd
==359894==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359894==    by 0x407708: f_search_bn (get_next_line_utils.c:118)
==359894==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359894==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359894==    by 0x406A3F: main (mandatory.cpp:119)
==359894==  Block was alloc'd at
==359894==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359894==    by 0x40755A: ft_strjoin (get_next_line_utils.c:64)
==359894==    by 0x40738B: get_next_line (get_next_line.c:48)
==359894==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359894==    by 0x406A3F: main (mandatory.cpp:119)
==359894== 
==359894== Invalid read of size 1
==359894==    at 0x407593: ft_strjoin (get_next_line_utils.c:70)
==359894==    by 0x40738B: get_next_line (get_next_line.c:48)
==359894==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359894==    by 0x406A51: main (mandatory.cpp:119)
==359894==  Address 0x4de6b9b is 43 bytes inside a block of size 176 free'd
==359894==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359894==    by 0x407708: f_search_bn (get_next_line_utils.c:118)
==359894==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359894==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359894==    by 0x406A3F: main (mandatory.cpp:119)
==359894==  Block was alloc'd at
==359894==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359894==    by 0x40755A: ft_strjoin (get_next_line_utils.c:64)
==359894==    by 0x40738B: get_next_line (get_next_line.c:48)
==359894==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359894==    by 0x406A3F: main (mandatory.cpp:119)
==359894== 
==359894== Invalid read of size 1
==359894==    at 0x40772A: f_del_front_bn (get_next_line_utils.c:162)
==359894==    by 0x4073CD: get_next_line (get_next_line.c:52)
==359894==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359894==    by 0x406A51: main (mandatory.cpp:119)
==359894==  Address 0x4de6cd0 is 0 bytes inside a block of size 133 free'd
==359894==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359894==    by 0x407708: f_search_bn (get_next_line_utils.c:118)
==359894==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359894==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359894==    by 0x406A51: main (mandatory.cpp:119)
==359894==  Block was alloc'd at
==359894==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359894==    by 0x40755A: ft_strjoin (get_next_line_utils.c:64)
==359894==    by 0x40738B: get_next_line (get_next_line.c:48)
==359894==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359894==    by 0x406A51: main (mandatory.cpp:119)
==359894== 
==359894== Invalid read of size 1
==359894==    at 0x4075B0: ft_strjoin (get_next_line_utils.c:68)
==359894==    by 0x40738B: get_next_line (get_next_line.c:48)
==359894==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359894==    by 0x406A63: main (mandatory.cpp:119)
==359894==  Address 0x4de6cd1 is 1 bytes inside a block of size 133 free'd
==359894==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359894==    by 0x407708: f_search_bn (get_next_line_utils.c:118)
==359894==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359894==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359894==    by 0x406A51: main (mandatory.cpp:119)
==359894==  Block was alloc'd at
==359894==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359894==    by 0x40755A: ft_strjoin (get_next_line_utils.c:64)
==359894==    by 0x40738B: get_next_line (get_next_line.c:48)
==359894==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359894==    by 0x406A51: main (mandatory.cpp:119)
==359894== 
==359894== Invalid read of size 1
==359894==    at 0x407593: ft_strjoin (get_next_line_utils.c:70)
==359894==    by 0x40738B: get_next_line (get_next_line.c:48)
==359894==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359894==    by 0x406A63: main (mandatory.cpp:119)
==359894==  Address 0x4de6cd1 is 1 bytes inside a block of size 133 free'd
==359894==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359894==    by 0x407708: f_search_bn (get_next_line_utils.c:118)
==359894==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359894==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359894==    by 0x406A51: main (mandatory.cpp:119)
==359894==  Block was alloc'd at
==359894==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359894==    by 0x40755A: ft_strjoin (get_next_line_utils.c:64)
==359894==    by 0x40738B: get_next_line (get_next_line.c:48)
==359894==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359894==    by 0x406A51: main (mandatory.cpp:119)
==359894== 
==359894== Invalid read of size 1
==359894==    at 0x40772A: f_del_front_bn (get_next_line_utils.c:162)
==359894==    by 0x4073CD: get_next_line (get_next_line.c:52)
==359894==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359894==    by 0x406A63: main (mandatory.cpp:119)
==359894==  Address 0x4de6df0 is 0 bytes inside a block of size 132 free'd
==359894==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359894==    by 0x407708: f_search_bn (get_next_line_utils.c:118)
==359894==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359894==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359894==    by 0x406A63: main (mandatory.cpp:119)
==359894==  Block was alloc'd at
==359894==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359894==    by 0x40755A: ft_strjoin (get_next_line_utils.c:64)
==359894==    by 0x40738B: get_next_line (get_next_line.c:48)
==359894==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359894==    by 0x406A63: main (mandatory.cpp:119)
==359894== 
==359894== Invalid read of size 1
==359894==    at 0x4075B0: ft_strjoin (get_next_line_utils.c:68)
==359894==    by 0x40738B: get_next_line (get_next_line.c:48)
==359894==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359894==    by 0x406A75: main (mandatory.cpp:119)
==359894==  Address 0x4de6e1c is 44 bytes inside a block of size 132 free'd
==359894==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359894==    by 0x407708: f_search_bn (get_next_line_utils.c:118)
==359894==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359894==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359894==    by 0x406A63: main (mandatory.cpp:119)
==359894==  Block was alloc'd at
==359894==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359894==    by 0x40755A: ft_strjoin (get_next_line_utils.c:64)
==359894==    by 0x40738B: get_next_line (get_next_line.c:48)
==359894==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359894==    by 0x406A63: main (mandatory.cpp:119)
==359894== 
==359894== Invalid read of size 1
==359894==    at 0x407593: ft_strjoin (get_next_line_utils.c:70)
==359894==    by 0x40738B: get_next_line (get_next_line.c:48)
==359894==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359894==    by 0x406A75: main (mandatory.cpp:119)
==359894==  Address 0x4de6e1c is 44 bytes inside a block of size 132 free'd
==359894==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359894==    by 0x407708: f_search_bn (get_next_line_utils.c:118)
==359894==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359894==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359894==    by 0x406A63: main (mandatory.cpp:119)
==359894==  Block was alloc'd at
==359894==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359894==    by 0x40755A: ft_strjoin (get_next_line_utils.c:64)
==359894==    by 0x40738B: get_next_line (get_next_line.c:48)
==359894==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359894==    by 0x406A63: main (mandatory.cpp:119)
==359894== 
==359894== Invalid read of size 1
==359894==    at 0x40772A: f_del_front_bn (get_next_line_utils.c:162)
==359894==    by 0x4073CD: get_next_line (get_next_line.c:52)
==359894==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359894==    by 0x406A75: main (mandatory.cpp:119)
==359894==  Address 0x4de6f30 is 0 bytes inside a block of size 88 free'd
==359894==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359894==    by 0x407708: f_search_bn (get_next_line_utils.c:118)
==359894==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359894==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359894==    by 0x406A75: main (mandatory.cpp:119)
==359894==  Block was alloc'd at
==359894==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359894==    by 0x40755A: ft_strjoin (get_next_line_utils.c:64)
==359894==    by 0x40738B: get_next_line (get_next_line.c:48)
==359894==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359894==    by 0x406A75: main (mandatory.cpp:119)
==359894== 
==359894== Invalid read of size 1
==359894==    at 0x4075B0: ft_strjoin (get_next_line_utils.c:68)
==359894==    by 0x40738B: get_next_line (get_next_line.c:48)
==359894==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359894==    by 0x406A87: main (mandatory.cpp:119)
==359894==  Address 0x4de6f31 is 1 bytes inside a block of size 88 free'd
==359894==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359894==    by 0x407708: f_search_bn (get_next_line_utils.c:118)
==359894==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359894==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359894==    by 0x406A75: main (mandatory.cpp:119)
==359894==  Block was alloc'd at
==359894==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359894==    by 0x40755A: ft_strjoin (get_next_line_utils.c:64)
==359894==    by 0x40738B: get_next_line (get_next_line.c:48)
==359894==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359894==    by 0x406A75: main (mandatory.cpp:119)
==359894== 
==359894== Invalid read of size 1
==359894==    at 0x407593: ft_strjoin (get_next_line_utils.c:70)
==359894==    by 0x40738B: get_next_line (get_next_line.c:48)
==359894==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359894==    by 0x406A87: main (mandatory.cpp:119)
==359894==  Address 0x4de6f31 is 1 bytes inside a block of size 88 free'd
==359894==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359894==    by 0x407708: f_search_bn (get_next_line_utils.c:118)
==359894==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359894==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359894==    by 0x406A75: main (mandatory.cpp:119)
==359894==  Block was alloc'd at
==359894==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359894==    by 0x40755A: ft_strjoin (get_next_line_utils.c:64)
==359894==    by 0x40738B: get_next_line (get_next_line.c:48)
==359894==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359894==    by 0x406A75: main (mandatory.cpp:119)
==359894== 
==359894== Invalid read of size 1
==359894==    at 0x40772A: f_del_front_bn (get_next_line_utils.c:162)
==359894==    by 0x4073CD: get_next_line (get_next_line.c:52)
==359894==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359894==    by 0x406A87: main (mandatory.cpp:119)
==359894==  Address 0x4de7020 is 0 bytes inside a block of size 87 free'd
==359894==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359894==    by 0x407708: f_search_bn (get_next_line_utils.c:118)
==359894==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359894==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359894==    by 0x406A87: main (mandatory.cpp:119)
==359894==  Block was alloc'd at
==359894==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359894==    by 0x40755A: ft_strjoin (get_next_line_utils.c:64)
==359894==    by 0x40738B: get_next_line (get_next_line.c:48)
==359894==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359894==    by 0x406A87: main (mandatory.cpp:119)
==359894== 
==359894== Invalid read of size 1
==359894==    at 0x4075B0: ft_strjoin (get_next_line_utils.c:68)
==359894==    by 0x40738B: get_next_line (get_next_line.c:48)
==359894==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359894==    by 0x406A99: main (mandatory.cpp:119)
==359894==  Address 0x4de704b is 43 bytes inside a block of size 87 free'd
==359894==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359894==    by 0x407708: f_search_bn (get_next_line_utils.c:118)
==359894==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359894==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359894==    by 0x406A87: main (mandatory.cpp:119)
==359894==  Block was alloc'd at
==359894==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359894==    by 0x40755A: ft_strjoin (get_next_line_utils.c:64)
==359894==    by 0x40738B: get_next_line (get_next_line.c:48)
==359894==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359894==    by 0x406A87: main (mandatory.cpp:119)
==359894== 
==359894== Invalid read of size 1
==359894==    at 0x407593: ft_strjoin (get_next_line_utils.c:70)
==359894==    by 0x40738B: get_next_line (get_next_line.c:48)
==359894==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359894==    by 0x406A99: main (mandatory.cpp:119)
==359894==  Address 0x4de704b is 43 bytes inside a block of size 87 free'd
==359894==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359894==    by 0x407708: f_search_bn (get_next_line_utils.c:118)
==359894==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359894==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359894==    by 0x406A87: main (mandatory.cpp:119)
==359894==  Block was alloc'd at
==359894==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359894==    by 0x40755A: ft_strjoin (get_next_line_utils.c:64)
==359894==    by 0x40738B: get_next_line (get_next_line.c:48)
==359894==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359894==    by 0x406A87: main (mandatory.cpp:119)
==359894== 
==359894== Invalid read of size 1
==359894==    at 0x40772A: f_del_front_bn (get_next_line_utils.c:162)
==359894==    by 0x4073CD: get_next_line (get_next_line.c:52)
==359894==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359894==    by 0x406A99: main (mandatory.cpp:119)
==359894==  Address 0x4de7130 is 0 bytes inside a block of size 44 free'd
==359894==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359894==    by 0x407708: f_search_bn (get_next_line_utils.c:118)
==359894==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359894==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359894==    by 0x406A99: main (mandatory.cpp:119)
==359894==  Block was alloc'd at
==359894==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359894==    by 0x40755A: ft_strjoin (get_next_line_utils.c:64)
==359894==    by 0x40738B: get_next_line (get_next_line.c:48)
==359894==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359894==    by 0x406A99: main (mandatory.cpp:119)
==359894== 
==359894== Invalid read of size 1
==359894==    at 0x4075B0: ft_strjoin (get_next_line_utils.c:68)
==359894==    by 0x40738B: get_next_line (get_next_line.c:48)
==359894==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359894==    by 0x406AAB: main (mandatory.cpp:119)
==359894==  Address 0x4de7131 is 1 bytes inside a block of size 44 free'd
==359894==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359894==    by 0x407708: f_search_bn (get_next_line_utils.c:118)
==359894==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359894==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359894==    by 0x406A99: main (mandatory.cpp:119)
==359894==  Block was alloc'd at
==359894==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359894==    by 0x40755A: ft_strjoin (get_next_line_utils.c:64)
==359894==    by 0x40738B: get_next_line (get_next_line.c:48)
==359894==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359894==    by 0x406A99: main (mandatory.cpp:119)
==359894== 
==359894== Invalid read of size 1
==359894==    at 0x407593: ft_strjoin (get_next_line_utils.c:70)
==359894==    by 0x40738B: get_next_line (get_next_line.c:48)
==359894==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359894==    by 0x406AAB: main (mandatory.cpp:119)
==359894==  Address 0x4de7131 is 1 bytes inside a block of size 44 free'd
==359894==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359894==    by 0x407708: f_search_bn (get_next_line_utils.c:118)
==359894==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359894==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359894==    by 0x406A99: main (mandatory.cpp:119)
==359894==  Block was alloc'd at
==359894==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359894==    by 0x40755A: ft_strjoin (get_next_line_utils.c:64)
==359894==    by 0x40738B: get_next_line (get_next_line.c:48)
==359894==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359894==    by 0x406A99: main (mandatory.cpp:119)
==359894== 
==359894== Invalid read of size 1
==359894==    at 0x40772A: f_del_front_bn (get_next_line_utils.c:162)
==359894==    by 0x4073CD: get_next_line (get_next_line.c:52)
==359894==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359894==    by 0x406AAB: main (mandatory.cpp:119)
==359894==  Address 0x4de71f0 is 0 bytes inside a block of size 43 free'd
==359894==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359894==    by 0x407708: f_search_bn (get_next_line_utils.c:118)
==359894==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359894==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359894==    by 0x406AAB: main (mandatory.cpp:119)
==359894==  Block was alloc'd at
==359894==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359894==    by 0x40755A: ft_strjoin (get_next_line_utils.c:64)
==359894==    by 0x40738B: get_next_line (get_next_line.c:48)
==359894==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359894==    by 0x406AAB: main (mandatory.cpp:119)
==359894== 
==359894== Invalid read of size 1
==359894==    at 0x4075B0: ft_strjoin (get_next_line_utils.c:68)
==359894==    by 0x40738B: get_next_line (get_next_line.c:48)
==359894==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359894==    by 0x406AB7: main (mandatory.cpp:119)
==359894==  Address 0x4de721a is 42 bytes inside a block of size 43 free'd
==359894==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359894==    by 0x407708: f_search_bn (get_next_line_utils.c:118)
==359894==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359894==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359894==    by 0x406AAB: main (mandatory.cpp:119)
==359894==  Block was alloc'd at
==359894==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359894==    by 0x40755A: ft_strjoin (get_next_line_utils.c:64)
==359894==    by 0x40738B: get_next_line (get_next_line.c:48)
==359894==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359894==    by 0x406AAB: main (mandatory.cpp:119)
==359894== 
==359894== 1 bytes in 1 blocks are definitely lost in loss record 1 of 1
==359894==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359894==    by 0x407364: get_next_line (get_next_line.c:43)
==359894==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359894==    by 0x406A1B: main (mandatory.cpp:119)
==359894== 
==359900== Invalid write of size 1
==359900==    at 0x4077CD: f_last_line (get_next_line_utils.c:209)
==359900==    by 0x407403: get_next_line (get_next_line.c:59)
==359900==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359900==    by 0x406CD7: main (mandatory.cpp:132)
==359900==  Address 0x4deba10 is 0 bytes after a block of size 10,000 alloc'd
==359900==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359900==    by 0x40776D: f_last_line (get_next_line_utils.c:199)
==359900==    by 0x407403: get_next_line (get_next_line.c:59)
==359900==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359900==    by 0x406CD7: main (mandatory.cpp:132)
==359900== 
==359900== Invalid read of size 1
==359900==    at 0x484FBE8: strcmp (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359900==    by 0x402D0A: gnl(int, char const*) (gnl.cpp:24)
==359900==    by 0x406CD7: main (mandatory.cpp:132)
==359900==  Address 0x4deba10 is 0 bytes after a block of size 10,000 alloc'd
==359900==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359900==    by 0x40776D: f_last_line (get_next_line_utils.c:199)
==359900==    by 0x407403: get_next_line (get_next_line.c:59)
==359900==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359900==    by 0x406CD7: main (mandatory.cpp:132)
==359900== 
==359900== 1 bytes in 1 blocks are definitely lost in loss record 1 of 2
==359900==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359900==    by 0x407364: get_next_line (get_next_line.c:43)
==359900==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359900==    by 0x406CD7: main (mandatory.cpp:132)
==359900== 
==359900== 10,001 bytes in 1 blocks are definitely lost in loss record 2 of 2
==359900==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359900==    by 0x40755A: ft_strjoin (get_next_line_utils.c:64)
==359900==    by 0x40738B: get_next_line (get_next_line.c:48)
==359900==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359900==    by 0x406CD7: main (mandatory.cpp:132)
==359900== 
==359903== Invalid read of size 1
==359903==    at 0x40772A: f_del_front_bn (get_next_line_utils.c:162)
==359903==    by 0x4073CD: get_next_line (get_next_line.c:52)
==359903==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359903==    by 0x406F03: main (mandatory.cpp:136)
==359903==  Address 0x4de6eb0 is 0 bytes inside a block of size 10,002 free'd
==359903==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359903==    by 0x407708: f_search_bn (get_next_line_utils.c:118)
==359903==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359903==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359903==    by 0x406F03: main (mandatory.cpp:136)
==359903==  Block was alloc'd at
==359903==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359903==    by 0x40755A: ft_strjoin (get_next_line_utils.c:64)
==359903==    by 0x40738B: get_next_line (get_next_line.c:48)
==359903==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359903==    by 0x406F03: main (mandatory.cpp:136)
==359903== 
==359903== Invalid read of size 1
==359903==    at 0x407509: ft_strlen (get_next_line_utils.c:43)
==359903==    by 0x407536: ft_strjoin (get_next_line_utils.c:59)
==359903==    by 0x40738B: get_next_line (get_next_line.c:48)
==359903==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359903==    by 0x406F0F: main (mandatory.cpp:136)
==359903==  Address 0x4de95c1 is 10,001 bytes inside a block of size 10,002 free'd
==359903==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359903==    by 0x407708: f_search_bn (get_next_line_utils.c:118)
==359903==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359903==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359903==    by 0x406F03: main (mandatory.cpp:136)
==359903==  Block was alloc'd at
==359903==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359903==    by 0x40755A: ft_strjoin (get_next_line_utils.c:64)
==359903==    by 0x40738B: get_next_line (get_next_line.c:48)
==359903==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359903==    by 0x406F03: main (mandatory.cpp:136)
==359903== 
==359903== Invalid read of size 1
==359903==    at 0x4075B0: ft_strjoin (get_next_line_utils.c:68)
==359903==    by 0x40738B: get_next_line (get_next_line.c:48)
==359903==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359903==    by 0x406F0F: main (mandatory.cpp:136)
==359903==  Address 0x4de95c1 is 10,001 bytes inside a block of size 10,002 free'd
==359903==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359903==    by 0x407708: f_search_bn (get_next_line_utils.c:118)
==359903==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359903==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359903==    by 0x406F03: main (mandatory.cpp:136)
==359903==  Block was alloc'd at
==359903==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359903==    by 0x40755A: ft_strjoin (get_next_line_utils.c:64)
==359903==    by 0x40738B: get_next_line (get_next_line.c:48)
==359903==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359903==    by 0x406F03: main (mandatory.cpp:136)
==359903== 
==359903== 1 bytes in 1 blocks are definitely lost in loss record 1 of 1
==359903==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359903==    by 0x407364: get_next_line (get_next_line.c:43)
==359903==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359903==    by 0x406F03: main (mandatory.cpp:136)
==359903== 
==359904== Invalid read of size 1
==359904==    at 0x40772A: f_del_front_bn (get_next_line_utils.c:162)
==359904==    by 0x4073CD: get_next_line (get_next_line.c:52)
==359904==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359904==    by 0x40712E: main (mandatory.cpp:141)
==359904==  Address 0x4de6eb0 is 0 bytes inside a block of size 219 free'd
==359904==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359904==    by 0x407708: f_search_bn (get_next_line_utils.c:118)
==359904==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359904==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359904==    by 0x40712E: main (mandatory.cpp:141)
==359904==  Block was alloc'd at
==359904==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359904==    by 0x40755A: ft_strjoin (get_next_line_utils.c:64)
==359904==    by 0x40738B: get_next_line (get_next_line.c:48)
==359904==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359904==    by 0x40712E: main (mandatory.cpp:141)
==359904== 
==359904== Invalid read of size 1
==359904==    at 0x407509: ft_strlen (get_next_line_utils.c:43)
==359904==    by 0x407536: ft_strjoin (get_next_line_utils.c:59)
==359904==    by 0x40738B: get_next_line (get_next_line.c:48)
==359904==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359904==    by 0x40713F: main (mandatory.cpp:141)
==359904==  Address 0x4de6eda is 42 bytes inside a block of size 219 free'd
==359904==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359904==    by 0x407708: f_search_bn (get_next_line_utils.c:118)
==359904==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359904==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359904==    by 0x40712E: main (mandatory.cpp:141)
==359904==  Block was alloc'd at
==359904==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359904==    by 0x40755A: ft_strjoin (get_next_line_utils.c:64)
==359904==    by 0x40738B: get_next_line (get_next_line.c:48)
==359904==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359904==    by 0x40712E: main (mandatory.cpp:141)
==359904== 
==359904== Invalid read of size 1
==359904==    at 0x4075B0: ft_strjoin (get_next_line_utils.c:68)
==359904==    by 0x40738B: get_next_line (get_next_line.c:48)
==359904==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359904==    by 0x40713F: main (mandatory.cpp:141)
==359904==  Address 0x4de6eda is 42 bytes inside a block of size 219 free'd
==359904==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359904==    by 0x407708: f_search_bn (get_next_line_utils.c:118)
==359904==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359904==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359904==    by 0x40712E: main (mandatory.cpp:141)
==359904==  Block was alloc'd at
==359904==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359904==    by 0x40755A: ft_strjoin (get_next_line_utils.c:64)
==359904==    by 0x40738B: get_next_line (get_next_line.c:48)
==359904==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359904==    by 0x40712E: main (mandatory.cpp:141)
==359904== 
==359904== Invalid read of size 1
==359904==    at 0x407593: ft_strjoin (get_next_line_utils.c:70)
==359904==    by 0x40738B: get_next_line (get_next_line.c:48)
==359904==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359904==    by 0x40713F: main (mandatory.cpp:141)
==359904==  Address 0x4de6eda is 42 bytes inside a block of size 219 free'd
==359904==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359904==    by 0x407708: f_search_bn (get_next_line_utils.c:118)
==359904==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359904==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359904==    by 0x40712E: main (mandatory.cpp:141)
==359904==  Block was alloc'd at
==359904==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359904==    by 0x40755A: ft_strjoin (get_next_line_utils.c:64)
==359904==    by 0x40738B: get_next_line (get_next_line.c:48)
==359904==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359904==    by 0x40712E: main (mandatory.cpp:141)
==359904== 
==359904== Invalid read of size 1
==359904==    at 0x40772A: f_del_front_bn (get_next_line_utils.c:162)
==359904==    by 0x4073CD: get_next_line (get_next_line.c:52)
==359904==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359904==    by 0x40713F: main (mandatory.cpp:141)
==359904==  Address 0x4de7040 is 0 bytes inside a block of size 177 free'd
==359904==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359904==    by 0x407708: f_search_bn (get_next_line_utils.c:118)
==359904==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359904==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359904==    by 0x40713F: main (mandatory.cpp:141)
==359904==  Block was alloc'd at
==359904==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359904==    by 0x40755A: ft_strjoin (get_next_line_utils.c:64)
==359904==    by 0x40738B: get_next_line (get_next_line.c:48)
==359904==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359904==    by 0x40713F: main (mandatory.cpp:141)
==359904== 
==359904== Invalid read of size 1
==359904==    at 0x4075B0: ft_strjoin (get_next_line_utils.c:68)
==359904==    by 0x40738B: get_next_line (get_next_line.c:48)
==359904==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359904==    by 0x407150: main (mandatory.cpp:141)
==359904==  Address 0x4de7041 is 1 bytes inside a block of size 177 free'd
==359904==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359904==    by 0x407708: f_search_bn (get_next_line_utils.c:118)
==359904==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359904==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359904==    by 0x40713F: main (mandatory.cpp:141)
==359904==  Block was alloc'd at
==359904==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359904==    by 0x40755A: ft_strjoin (get_next_line_utils.c:64)
==359904==    by 0x40738B: get_next_line (get_next_line.c:48)
==359904==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359904==    by 0x40713F: main (mandatory.cpp:141)
==359904== 
==359904== Invalid read of size 1
==359904==    at 0x407593: ft_strjoin (get_next_line_utils.c:70)
==359904==    by 0x40738B: get_next_line (get_next_line.c:48)
==359904==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359904==    by 0x407150: main (mandatory.cpp:141)
==359904==  Address 0x4de7041 is 1 bytes inside a block of size 177 free'd
==359904==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359904==    by 0x407708: f_search_bn (get_next_line_utils.c:118)
==359904==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359904==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359904==    by 0x40713F: main (mandatory.cpp:141)
==359904==  Block was alloc'd at
==359904==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359904==    by 0x40755A: ft_strjoin (get_next_line_utils.c:64)
==359904==    by 0x40738B: get_next_line (get_next_line.c:48)
==359904==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359904==    by 0x40713F: main (mandatory.cpp:141)
==359904== 
==359904== Invalid read of size 1
==359904==    at 0x40772A: f_del_front_bn (get_next_line_utils.c:162)
==359904==    by 0x4073CD: get_next_line (get_next_line.c:52)
==359904==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359904==    by 0x407150: main (mandatory.cpp:141)
==359904==  Address 0x4de7190 is 0 bytes inside a block of size 176 free'd
==359904==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359904==    by 0x407708: f_search_bn (get_next_line_utils.c:118)
==359904==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359904==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359904==    by 0x407150: main (mandatory.cpp:141)
==359904==  Block was alloc'd at
==359904==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359904==    by 0x40755A: ft_strjoin (get_next_line_utils.c:64)
==359904==    by 0x40738B: get_next_line (get_next_line.c:48)
==359904==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359904==    by 0x407150: main (mandatory.cpp:141)
==359904== 
==359904== Invalid read of size 1
==359904==    at 0x4075B0: ft_strjoin (get_next_line_utils.c:68)
==359904==    by 0x40738B: get_next_line (get_next_line.c:48)
==359904==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359904==    by 0x407161: main (mandatory.cpp:141)
==359904==  Address 0x4de71bb is 43 bytes inside a block of size 176 free'd
==359904==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359904==    by 0x407708: f_search_bn (get_next_line_utils.c:118)
==359904==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359904==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359904==    by 0x407150: main (mandatory.cpp:141)
==359904==  Block was alloc'd at
==359904==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359904==    by 0x40755A: ft_strjoin (get_next_line_utils.c:64)
==359904==    by 0x40738B: get_next_line (get_next_line.c:48)
==359904==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359904==    by 0x407150: main (mandatory.cpp:141)
==359904== 
==359904== Invalid read of size 1
==359904==    at 0x407593: ft_strjoin (get_next_line_utils.c:70)
==359904==    by 0x40738B: get_next_line (get_next_line.c:48)
==359904==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359904==    by 0x407161: main (mandatory.cpp:141)
==359904==  Address 0x4de71bb is 43 bytes inside a block of size 176 free'd
==359904==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359904==    by 0x407708: f_search_bn (get_next_line_utils.c:118)
==359904==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359904==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359904==    by 0x407150: main (mandatory.cpp:141)
==359904==  Block was alloc'd at
==359904==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359904==    by 0x40755A: ft_strjoin (get_next_line_utils.c:64)
==359904==    by 0x40738B: get_next_line (get_next_line.c:48)
==359904==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359904==    by 0x407150: main (mandatory.cpp:141)
==359904== 
==359904== Invalid read of size 1
==359904==    at 0x40772A: f_del_front_bn (get_next_line_utils.c:162)
==359904==    by 0x4073CD: get_next_line (get_next_line.c:52)
==359904==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359904==    by 0x407161: main (mandatory.cpp:141)
==359904==  Address 0x4de72f0 is 0 bytes inside a block of size 133 free'd
==359904==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359904==    by 0x407708: f_search_bn (get_next_line_utils.c:118)
==359904==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359904==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359904==    by 0x407161: main (mandatory.cpp:141)
==359904==  Block was alloc'd at
==359904==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359904==    by 0x40755A: ft_strjoin (get_next_line_utils.c:64)
==359904==    by 0x40738B: get_next_line (get_next_line.c:48)
==359904==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359904==    by 0x407161: main (mandatory.cpp:141)
==359904== 
==359904== Invalid read of size 1
==359904==    at 0x4075B0: ft_strjoin (get_next_line_utils.c:68)
==359904==    by 0x40738B: get_next_line (get_next_line.c:48)
==359904==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359904==    by 0x407172: main (mandatory.cpp:141)
==359904==  Address 0x4de72f1 is 1 bytes inside a block of size 133 free'd
==359904==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359904==    by 0x407708: f_search_bn (get_next_line_utils.c:118)
==359904==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359904==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359904==    by 0x407161: main (mandatory.cpp:141)
==359904==  Block was alloc'd at
==359904==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359904==    by 0x40755A: ft_strjoin (get_next_line_utils.c:64)
==359904==    by 0x40738B: get_next_line (get_next_line.c:48)
==359904==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359904==    by 0x407161: main (mandatory.cpp:141)
==359904== 
==359904== Invalid read of size 1
==359904==    at 0x407593: ft_strjoin (get_next_line_utils.c:70)
==359904==    by 0x40738B: get_next_line (get_next_line.c:48)
==359904==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359904==    by 0x407172: main (mandatory.cpp:141)
==359904==  Address 0x4de72f1 is 1 bytes inside a block of size 133 free'd
==359904==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359904==    by 0x407708: f_search_bn (get_next_line_utils.c:118)
==359904==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359904==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359904==    by 0x407161: main (mandatory.cpp:141)
==359904==  Block was alloc'd at
==359904==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359904==    by 0x40755A: ft_strjoin (get_next_line_utils.c:64)
==359904==    by 0x40738B: get_next_line (get_next_line.c:48)
==359904==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359904==    by 0x407161: main (mandatory.cpp:141)
==359904== 
==359904== Invalid read of size 1
==359904==    at 0x40772A: f_del_front_bn (get_next_line_utils.c:162)
==359904==    by 0x4073CD: get_next_line (get_next_line.c:52)
==359904==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359904==    by 0x407172: main (mandatory.cpp:141)
==359904==  Address 0x4de7410 is 0 bytes inside a block of size 132 free'd
==359904==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359904==    by 0x407708: f_search_bn (get_next_line_utils.c:118)
==359904==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359904==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359904==    by 0x407172: main (mandatory.cpp:141)
==359904==  Block was alloc'd at
==359904==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359904==    by 0x40755A: ft_strjoin (get_next_line_utils.c:64)
==359904==    by 0x40738B: get_next_line (get_next_line.c:48)
==359904==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359904==    by 0x407172: main (mandatory.cpp:141)
==359904== 
==359904== Invalid read of size 1
==359904==    at 0x4075B0: ft_strjoin (get_next_line_utils.c:68)
==359904==    by 0x40738B: get_next_line (get_next_line.c:48)
==359904==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359904==    by 0x407183: main (mandatory.cpp:141)
==359904==  Address 0x4de743c is 44 bytes inside a block of size 132 free'd
==359904==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359904==    by 0x407708: f_search_bn (get_next_line_utils.c:118)
==359904==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359904==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359904==    by 0x407172: main (mandatory.cpp:141)
==359904==  Block was alloc'd at
==359904==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359904==    by 0x40755A: ft_strjoin (get_next_line_utils.c:64)
==359904==    by 0x40738B: get_next_line (get_next_line.c:48)
==359904==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359904==    by 0x407172: main (mandatory.cpp:141)
==359904== 
==359904== Invalid read of size 1
==359904==    at 0x407593: ft_strjoin (get_next_line_utils.c:70)
==359904==    by 0x40738B: get_next_line (get_next_line.c:48)
==359904==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359904==    by 0x407183: main (mandatory.cpp:141)
==359904==  Address 0x4de743c is 44 bytes inside a block of size 132 free'd
==359904==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359904==    by 0x407708: f_search_bn (get_next_line_utils.c:118)
==359904==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359904==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359904==    by 0x407172: main (mandatory.cpp:141)
==359904==  Block was alloc'd at
==359904==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359904==    by 0x40755A: ft_strjoin (get_next_line_utils.c:64)
==359904==    by 0x40738B: get_next_line (get_next_line.c:48)
==359904==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359904==    by 0x407172: main (mandatory.cpp:141)
==359904== 
==359904== Invalid read of size 1
==359904==    at 0x40772A: f_del_front_bn (get_next_line_utils.c:162)
==359904==    by 0x4073CD: get_next_line (get_next_line.c:52)
==359904==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359904==    by 0x407183: main (mandatory.cpp:141)
==359904==  Address 0x4de7550 is 0 bytes inside a block of size 88 free'd
==359904==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359904==    by 0x407708: f_search_bn (get_next_line_utils.c:118)
==359904==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359904==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359904==    by 0x407183: main (mandatory.cpp:141)
==359904==  Block was alloc'd at
==359904==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359904==    by 0x40755A: ft_strjoin (get_next_line_utils.c:64)
==359904==    by 0x40738B: get_next_line (get_next_line.c:48)
==359904==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359904==    by 0x407183: main (mandatory.cpp:141)
==359904== 
==359904== Invalid read of size 1
==359904==    at 0x4075B0: ft_strjoin (get_next_line_utils.c:68)
==359904==    by 0x40738B: get_next_line (get_next_line.c:48)
==359904==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359904==    by 0x407194: main (mandatory.cpp:141)
==359904==  Address 0x4de7551 is 1 bytes inside a block of size 88 free'd
==359904==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359904==    by 0x407708: f_search_bn (get_next_line_utils.c:118)
==359904==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359904==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359904==    by 0x407183: main (mandatory.cpp:141)
==359904==  Block was alloc'd at
==359904==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359904==    by 0x40755A: ft_strjoin (get_next_line_utils.c:64)
==359904==    by 0x40738B: get_next_line (get_next_line.c:48)
==359904==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359904==    by 0x407183: main (mandatory.cpp:141)
==359904== 
==359904== Invalid read of size 1
==359904==    at 0x407593: ft_strjoin (get_next_line_utils.c:70)
==359904==    by 0x40738B: get_next_line (get_next_line.c:48)
==359904==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359904==    by 0x407194: main (mandatory.cpp:141)
==359904==  Address 0x4de7551 is 1 bytes inside a block of size 88 free'd
==359904==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359904==    by 0x407708: f_search_bn (get_next_line_utils.c:118)
==359904==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359904==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359904==    by 0x407183: main (mandatory.cpp:141)
==359904==  Block was alloc'd at
==359904==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359904==    by 0x40755A: ft_strjoin (get_next_line_utils.c:64)
==359904==    by 0x40738B: get_next_line (get_next_line.c:48)
==359904==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359904==    by 0x407183: main (mandatory.cpp:141)
==359904== 
==359904== Invalid read of size 1
==359904==    at 0x40772A: f_del_front_bn (get_next_line_utils.c:162)
==359904==    by 0x4073CD: get_next_line (get_next_line.c:52)
==359904==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359904==    by 0x407194: main (mandatory.cpp:141)
==359904==  Address 0x4de7640 is 0 bytes inside a block of size 87 free'd
==359904==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359904==    by 0x407708: f_search_bn (get_next_line_utils.c:118)
==359904==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359904==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359904==    by 0x407194: main (mandatory.cpp:141)
==359904==  Block was alloc'd at
==359904==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359904==    by 0x40755A: ft_strjoin (get_next_line_utils.c:64)
==359904==    by 0x40738B: get_next_line (get_next_line.c:48)
==359904==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359904==    by 0x407194: main (mandatory.cpp:141)
==359904== 
==359904== Invalid read of size 1
==359904==    at 0x4075B0: ft_strjoin (get_next_line_utils.c:68)
==359904==    by 0x40738B: get_next_line (get_next_line.c:48)
==359904==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359904==    by 0x4071A5: main (mandatory.cpp:141)
==359904==  Address 0x4de766b is 43 bytes inside a block of size 87 free'd
==359904==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359904==    by 0x407708: f_search_bn (get_next_line_utils.c:118)
==359904==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359904==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359904==    by 0x407194: main (mandatory.cpp:141)
==359904==  Block was alloc'd at
==359904==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359904==    by 0x40755A: ft_strjoin (get_next_line_utils.c:64)
==359904==    by 0x40738B: get_next_line (get_next_line.c:48)
==359904==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359904==    by 0x407194: main (mandatory.cpp:141)
==359904== 
==359904== Invalid read of size 1
==359904==    at 0x407593: ft_strjoin (get_next_line_utils.c:70)
==359904==    by 0x40738B: get_next_line (get_next_line.c:48)
==359904==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359904==    by 0x4071A5: main (mandatory.cpp:141)
==359904==  Address 0x4de766b is 43 bytes inside a block of size 87 free'd
==359904==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359904==    by 0x407708: f_search_bn (get_next_line_utils.c:118)
==359904==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359904==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359904==    by 0x407194: main (mandatory.cpp:141)
==359904==  Block was alloc'd at
==359904==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359904==    by 0x40755A: ft_strjoin (get_next_line_utils.c:64)
==359904==    by 0x40738B: get_next_line (get_next_line.c:48)
==359904==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359904==    by 0x407194: main (mandatory.cpp:141)
==359904== 
==359904== Invalid read of size 1
==359904==    at 0x40772A: f_del_front_bn (get_next_line_utils.c:162)
==359904==    by 0x4073CD: get_next_line (get_next_line.c:52)
==359904==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359904==    by 0x4071A5: main (mandatory.cpp:141)
==359904==  Address 0x4de7750 is 0 bytes inside a block of size 44 free'd
==359904==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359904==    by 0x407708: f_search_bn (get_next_line_utils.c:118)
==359904==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359904==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359904==    by 0x4071A5: main (mandatory.cpp:141)
==359904==  Block was alloc'd at
==359904==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359904==    by 0x40755A: ft_strjoin (get_next_line_utils.c:64)
==359904==    by 0x40738B: get_next_line (get_next_line.c:48)
==359904==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359904==    by 0x4071A5: main (mandatory.cpp:141)
==359904== 
==359904== Invalid read of size 1
==359904==    at 0x4075B0: ft_strjoin (get_next_line_utils.c:68)
==359904==    by 0x40738B: get_next_line (get_next_line.c:48)
==359904==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359904==    by 0x4071B6: main (mandatory.cpp:141)
==359904==  Address 0x4de7751 is 1 bytes inside a block of size 44 free'd
==359904==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359904==    by 0x407708: f_search_bn (get_next_line_utils.c:118)
==359904==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359904==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359904==    by 0x4071A5: main (mandatory.cpp:141)
==359904==  Block was alloc'd at
==359904==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359904==    by 0x40755A: ft_strjoin (get_next_line_utils.c:64)
==359904==    by 0x40738B: get_next_line (get_next_line.c:48)
==359904==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359904==    by 0x4071A5: main (mandatory.cpp:141)
==359904== 
==359904== Invalid read of size 1
==359904==    at 0x407593: ft_strjoin (get_next_line_utils.c:70)
==359904==    by 0x40738B: get_next_line (get_next_line.c:48)
==359904==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359904==    by 0x4071B6: main (mandatory.cpp:141)
==359904==  Address 0x4de7751 is 1 bytes inside a block of size 44 free'd
==359904==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359904==    by 0x407708: f_search_bn (get_next_line_utils.c:118)
==359904==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359904==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359904==    by 0x4071A5: main (mandatory.cpp:141)
==359904==  Block was alloc'd at
==359904==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359904==    by 0x40755A: ft_strjoin (get_next_line_utils.c:64)
==359904==    by 0x40738B: get_next_line (get_next_line.c:48)
==359904==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359904==    by 0x4071A5: main (mandatory.cpp:141)
==359904== 
==359904== Invalid read of size 1
==359904==    at 0x40772A: f_del_front_bn (get_next_line_utils.c:162)
==359904==    by 0x4073CD: get_next_line (get_next_line.c:52)
==359904==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359904==    by 0x4071B6: main (mandatory.cpp:141)
==359904==  Address 0x4de7810 is 0 bytes inside a block of size 43 free'd
==359904==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359904==    by 0x407708: f_search_bn (get_next_line_utils.c:118)
==359904==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359904==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359904==    by 0x4071B6: main (mandatory.cpp:141)
==359904==  Block was alloc'd at
==359904==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359904==    by 0x40755A: ft_strjoin (get_next_line_utils.c:64)
==359904==    by 0x40738B: get_next_line (get_next_line.c:48)
==359904==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359904==    by 0x4071B6: main (mandatory.cpp:141)
==359904== 
==359904== Invalid read of size 1
==359904==    at 0x4075B0: ft_strjoin (get_next_line_utils.c:68)
==359904==    by 0x40738B: get_next_line (get_next_line.c:48)
==359904==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359904==    by 0x4071C1: main (mandatory.cpp:141)
==359904==  Address 0x4de783a is 42 bytes inside a block of size 43 free'd
==359904==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359904==    by 0x407708: f_search_bn (get_next_line_utils.c:118)
==359904==    by 0x4073BA: get_next_line (get_next_line.c:51)
==359904==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359904==    by 0x4071B6: main (mandatory.cpp:141)
==359904==  Block was alloc'd at
==359904==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359904==    by 0x40755A: ft_strjoin (get_next_line_utils.c:64)
==359904==    by 0x40738B: get_next_line (get_next_line.c:48)
==359904==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359904==    by 0x4071B6: main (mandatory.cpp:141)
==359904== 
==359904== 1 bytes in 1 blocks are definitely lost in loss record 1 of 1
==359904==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==359904==    by 0x407364: get_next_line (get_next_line.c:43)
==359904==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==359904==    by 0x40712E: main (mandatory.cpp:141)
==359904== 
