==383991== Invalid write of size 1
==383991==    at 0x40734C: get_next_line (get_next_line.c:38)
==383991==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==383991==    by 0x404BC6: main (mandatory.cpp:25)
==383991==  Address 0x4de329f is 1 bytes before a block of size 2 alloc'd
==383991==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==383991==    by 0x4072FC: get_next_line (get_next_line.c:27)
==383991==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==383991==    by 0x404BC6: main (mandatory.cpp:25)
==383991== 
==383991== Conditional jump or move depends on uninitialised value(s)
==383991==    at 0x4074ED: ft_strlen (get_next_line_utils.c:43)
==383991==    by 0x407523: ft_strjoin (get_next_line_utils.c:59)
==383991==    by 0x40738B: get_next_line (get_next_line.c:48)
==383991==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==383991==    by 0x404BC6: main (mandatory.cpp:25)
==383991== 
==383991== Conditional jump or move depends on uninitialised value(s)
==383991==    at 0x4075E0: ft_strjoin (get_next_line_utils.c:75)
==383991==    by 0x40738B: get_next_line (get_next_line.c:48)
==383991==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==383991==    by 0x404BC6: main (mandatory.cpp:25)
==383991== 
==383991== Invalid write of size 1
==383991==    at 0x40734C: get_next_line (get_next_line.c:38)
==383991==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==383991==    by 0x404BE8: main (mandatory.cpp:25)
==383991==  Address 0x4de43cf is 1 bytes before a block of size 2 alloc'd
==383991==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==383991==    by 0x4072FC: get_next_line (get_next_line.c:27)
==383991==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==383991==    by 0x404BE8: main (mandatory.cpp:25)
==383991== 
==383991== Conditional jump or move depends on uninitialised value(s)
==383991==    at 0x4075E0: ft_strjoin (get_next_line_utils.c:75)
==383991==    by 0x40738B: get_next_line (get_next_line.c:48)
==383991==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==383991==    by 0x404BE8: main (mandatory.cpp:25)
==383991== 
==384009== Invalid read of size 1
==384009==    at 0x4074E8: ft_strlen (get_next_line_utils.c:43)
==384009==    by 0x407515: ft_strjoin (get_next_line_utils.c:59)
==384009==    by 0x40738B: get_next_line (get_next_line.c:48)
==384009==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384009==    by 0x404E6F: main (mandatory.cpp:31)
==384009==  Address 0x4de4690 is 0 bytes inside a block of size 1 free'd
==384009==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384009==    by 0x407430: get_next_line (get_next_line.c:67)
==384009==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384009==    by 0x404E63: main (mandatory.cpp:31)
==384009==  Block was alloc'd at
==384009==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384009==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==384009==    by 0x40738B: get_next_line (get_next_line.c:48)
==384009==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384009==    by 0x404E63: main (mandatory.cpp:31)
==384009== 
==384009== Invalid read of size 1
==384009==    at 0x40758F: ft_strjoin (get_next_line_utils.c:68)
==384009==    by 0x40738B: get_next_line (get_next_line.c:48)
==384009==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384009==    by 0x404E6F: main (mandatory.cpp:31)
==384009==  Address 0x4de4690 is 0 bytes inside a block of size 1 free'd
==384009==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384009==    by 0x407430: get_next_line (get_next_line.c:67)
==384009==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384009==    by 0x404E63: main (mandatory.cpp:31)
==384009==  Block was alloc'd at
==384009==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384009==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==384009==    by 0x40738B: get_next_line (get_next_line.c:48)
==384009==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384009==    by 0x404E63: main (mandatory.cpp:31)
==384009== 
==384009== Invalid free() / delete / delete[] / realloc()
==384009==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384009==    by 0x407602: ft_strjoin (get_next_line_utils.c:81)
==384009==    by 0x40738B: get_next_line (get_next_line.c:48)
==384009==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384009==    by 0x404E6F: main (mandatory.cpp:31)
==384009==  Address 0x4de4690 is 0 bytes inside a block of size 1 free'd
==384009==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384009==    by 0x407430: get_next_line (get_next_line.c:67)
==384009==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384009==    by 0x404E63: main (mandatory.cpp:31)
==384009==  Block was alloc'd at
==384009==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384009==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==384009==    by 0x40738B: get_next_line (get_next_line.c:48)
==384009==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384009==    by 0x404E63: main (mandatory.cpp:31)
==384009== 
==384014== Invalid read of size 1
==384014==    at 0x407721: f_del_front_bn (get_next_line_utils.c:163)
==384014==    by 0x4073CD: get_next_line (get_next_line.c:52)
==384014==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384014==    by 0x40508F: main (mandatory.cpp:36)
==384014==  Address 0x4de4690 is 0 bytes inside a block of size 2 free'd
==384014==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384014==    by 0x4076FF: f_search_bn (get_next_line_utils.c:119)
==384014==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384014==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384014==    by 0x40508F: main (mandatory.cpp:36)
==384014==  Block was alloc'd at
==384014==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384014==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==384014==    by 0x40738B: get_next_line (get_next_line.c:48)
==384014==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384014==    by 0x40508F: main (mandatory.cpp:36)
==384014== 
==384014== Invalid free() / delete / delete[] / realloc()
==384014==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384014==    by 0x4073E0: get_next_line (get_next_line.c:53)
==384014==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384014==    by 0x40508F: main (mandatory.cpp:36)
==384014==  Address 0x4de45f0 is 0 bytes inside a block of size 2 free'd
==384014==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384014==    by 0x40760E: ft_strjoin (get_next_line_utils.c:82)
==384014==    by 0x40738B: get_next_line (get_next_line.c:48)
==384014==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384014==    by 0x40508F: main (mandatory.cpp:36)
==384014==  Block was alloc'd at
==384014==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384014==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384014==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384014==    by 0x40508F: main (mandatory.cpp:36)
==384014== 
==384014== Invalid read of size 1
==384014==    at 0x4074E8: ft_strlen (get_next_line_utils.c:43)
==384014==    by 0x407515: ft_strjoin (get_next_line_utils.c:59)
==384014==    by 0x40738B: get_next_line (get_next_line.c:48)
==384014==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384014==    by 0x40509B: main (mandatory.cpp:36)
==384014==  Address 0x4de4691 is 1 bytes inside a block of size 2 free'd
==384014==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384014==    by 0x4076FF: f_search_bn (get_next_line_utils.c:119)
==384014==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384014==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384014==    by 0x40508F: main (mandatory.cpp:36)
==384014==  Block was alloc'd at
==384014==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384014==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==384014==    by 0x40738B: get_next_line (get_next_line.c:48)
==384014==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384014==    by 0x40508F: main (mandatory.cpp:36)
==384014== 
==384014== Invalid read of size 1
==384014==    at 0x40758F: ft_strjoin (get_next_line_utils.c:68)
==384014==    by 0x40738B: get_next_line (get_next_line.c:48)
==384014==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384014==    by 0x40509B: main (mandatory.cpp:36)
==384014==  Address 0x4de4691 is 1 bytes inside a block of size 2 free'd
==384014==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384014==    by 0x4076FF: f_search_bn (get_next_line_utils.c:119)
==384014==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384014==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384014==    by 0x40508F: main (mandatory.cpp:36)
==384014==  Block was alloc'd at
==384014==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384014==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==384014==    by 0x40738B: get_next_line (get_next_line.c:48)
==384014==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384014==    by 0x40508F: main (mandatory.cpp:36)
==384014== 
==384014== Invalid free() / delete / delete[] / realloc()
==384014==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384014==    by 0x407602: ft_strjoin (get_next_line_utils.c:81)
==384014==    by 0x40738B: get_next_line (get_next_line.c:48)
==384014==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384014==    by 0x40509B: main (mandatory.cpp:36)
==384014==  Address 0x4de4691 is 1 bytes inside a block of size 2 free'd
==384014==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384014==    by 0x4076FF: f_search_bn (get_next_line_utils.c:119)
==384014==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384014==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384014==    by 0x40508F: main (mandatory.cpp:36)
==384014==  Block was alloc'd at
==384014==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384014==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==384014==    by 0x40738B: get_next_line (get_next_line.c:48)
==384014==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384014==    by 0x40508F: main (mandatory.cpp:36)
==384014== 
==384018== Syscall param read(buf) points to unaddressable byte(s)
==384018==    at 0x4CB8992: read (read.c:26)
==384018==    by 0x40733B: get_next_line (get_next_line.c:37)
==384018==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384018==    by 0x4052BB: main (mandatory.cpp:41)
==384018==  Address 0x4de4900 is 0 bytes inside a block of size 2 free'd
==384018==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384018==    by 0x40760E: ft_strjoin (get_next_line_utils.c:82)
==384018==    by 0x40738B: get_next_line (get_next_line.c:48)
==384018==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384018==    by 0x4052BB: main (mandatory.cpp:41)
==384018==  Block was alloc'd at
==384018==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384018==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384018==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384018==    by 0x4052BB: main (mandatory.cpp:41)
==384018== 
==384018== Invalid write of size 1
==384018==    at 0x40734C: get_next_line (get_next_line.c:38)
==384018==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384018==    by 0x4052BB: main (mandatory.cpp:41)
==384018==  Address 0x4de4901 is 1 bytes inside a block of size 2 free'd
==384018==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384018==    by 0x40760E: ft_strjoin (get_next_line_utils.c:82)
==384018==    by 0x40738B: get_next_line (get_next_line.c:48)
==384018==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384018==    by 0x4052BB: main (mandatory.cpp:41)
==384018==  Block was alloc'd at
==384018==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384018==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384018==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384018==    by 0x4052BB: main (mandatory.cpp:41)
==384018== 
==384018== Invalid read of size 1
==384018==    at 0x4074E8: ft_strlen (get_next_line_utils.c:43)
==384018==    by 0x407523: ft_strjoin (get_next_line_utils.c:59)
==384018==    by 0x40738B: get_next_line (get_next_line.c:48)
==384018==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384018==    by 0x4052BB: main (mandatory.cpp:41)
==384018==  Address 0x4de4901 is 1 bytes inside a block of size 2 free'd
==384018==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384018==    by 0x40760E: ft_strjoin (get_next_line_utils.c:82)
==384018==    by 0x40738B: get_next_line (get_next_line.c:48)
==384018==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384018==    by 0x4052BB: main (mandatory.cpp:41)
==384018==  Block was alloc'd at
==384018==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384018==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384018==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384018==    by 0x4052BB: main (mandatory.cpp:41)
==384018== 
==384018== Invalid read of size 1
==384018==    at 0x4075DB: ft_strjoin (get_next_line_utils.c:75)
==384018==    by 0x40738B: get_next_line (get_next_line.c:48)
==384018==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384018==    by 0x4052BB: main (mandatory.cpp:41)
==384018==  Address 0x4de4901 is 1 bytes inside a block of size 2 free'd
==384018==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384018==    by 0x40760E: ft_strjoin (get_next_line_utils.c:82)
==384018==    by 0x40738B: get_next_line (get_next_line.c:48)
==384018==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384018==    by 0x4052BB: main (mandatory.cpp:41)
==384018==  Block was alloc'd at
==384018==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384018==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384018==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384018==    by 0x4052BB: main (mandatory.cpp:41)
==384018== 
==384018== Invalid free() / delete / delete[] / realloc()
==384018==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384018==    by 0x40760E: ft_strjoin (get_next_line_utils.c:82)
==384018==    by 0x40738B: get_next_line (get_next_line.c:48)
==384018==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384018==    by 0x4052BB: main (mandatory.cpp:41)
==384018==  Address 0x4de4900 is 0 bytes inside a block of size 2 free'd
==384018==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384018==    by 0x40760E: ft_strjoin (get_next_line_utils.c:82)
==384018==    by 0x40738B: get_next_line (get_next_line.c:48)
==384018==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384018==    by 0x4052BB: main (mandatory.cpp:41)
==384018==  Block was alloc'd at
==384018==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384018==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384018==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384018==    by 0x4052BB: main (mandatory.cpp:41)
==384018== 
==384018== Invalid read of size 1
==384018==    at 0x484FBD4: strcmp (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384018==    by 0x402D0A: gnl(int, char const*) (gnl.cpp:24)
==384018==    by 0x4052BB: main (mandatory.cpp:41)
==384018==  Address 0x0 is not stack'd, malloc'd or (recently) free'd
==384018== 
==384019== Syscall param read(buf) points to unaddressable byte(s)
==384019==    at 0x4CB8992: read (read.c:26)
==384019==    by 0x40733B: get_next_line (get_next_line.c:37)
==384019==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384019==    by 0x4054E7: main (mandatory.cpp:46)
==384019==  Address 0x4de4c10 is 0 bytes inside a block of size 2 free'd
==384019==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384019==    by 0x40760E: ft_strjoin (get_next_line_utils.c:82)
==384019==    by 0x40738B: get_next_line (get_next_line.c:48)
==384019==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384019==    by 0x4054E7: main (mandatory.cpp:46)
==384019==  Block was alloc'd at
==384019==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384019==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384019==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384019==    by 0x4054E7: main (mandatory.cpp:46)
==384019== 
==384019== Invalid write of size 1
==384019==    at 0x40734C: get_next_line (get_next_line.c:38)
==384019==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384019==    by 0x4054E7: main (mandatory.cpp:46)
==384019==  Address 0x4de4c11 is 1 bytes inside a block of size 2 free'd
==384019==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384019==    by 0x40760E: ft_strjoin (get_next_line_utils.c:82)
==384019==    by 0x40738B: get_next_line (get_next_line.c:48)
==384019==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384019==    by 0x4054E7: main (mandatory.cpp:46)
==384019==  Block was alloc'd at
==384019==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384019==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384019==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384019==    by 0x4054E7: main (mandatory.cpp:46)
==384019== 
==384019== Invalid read of size 1
==384019==    at 0x4074E8: ft_strlen (get_next_line_utils.c:43)
==384019==    by 0x407523: ft_strjoin (get_next_line_utils.c:59)
==384019==    by 0x40738B: get_next_line (get_next_line.c:48)
==384019==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384019==    by 0x4054E7: main (mandatory.cpp:46)
==384019==  Address 0x4de4c11 is 1 bytes inside a block of size 2 free'd
==384019==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384019==    by 0x40760E: ft_strjoin (get_next_line_utils.c:82)
==384019==    by 0x40738B: get_next_line (get_next_line.c:48)
==384019==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384019==    by 0x4054E7: main (mandatory.cpp:46)
==384019==  Block was alloc'd at
==384019==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384019==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384019==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384019==    by 0x4054E7: main (mandatory.cpp:46)
==384019== 
==384019== Invalid read of size 1
==384019==    at 0x4075DB: ft_strjoin (get_next_line_utils.c:75)
==384019==    by 0x40738B: get_next_line (get_next_line.c:48)
==384019==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384019==    by 0x4054E7: main (mandatory.cpp:46)
==384019==  Address 0x4de4c11 is 1 bytes inside a block of size 2 free'd
==384019==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384019==    by 0x40760E: ft_strjoin (get_next_line_utils.c:82)
==384019==    by 0x40738B: get_next_line (get_next_line.c:48)
==384019==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384019==    by 0x4054E7: main (mandatory.cpp:46)
==384019==  Block was alloc'd at
==384019==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384019==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384019==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384019==    by 0x4054E7: main (mandatory.cpp:46)
==384019== 
==384019== Invalid free() / delete / delete[] / realloc()
==384019==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384019==    by 0x40760E: ft_strjoin (get_next_line_utils.c:82)
==384019==    by 0x40738B: get_next_line (get_next_line.c:48)
==384019==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384019==    by 0x4054E7: main (mandatory.cpp:46)
==384019==  Address 0x4de4c10 is 0 bytes inside a block of size 2 free'd
==384019==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384019==    by 0x40760E: ft_strjoin (get_next_line_utils.c:82)
==384019==    by 0x40738B: get_next_line (get_next_line.c:48)
==384019==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384019==    by 0x4054E7: main (mandatory.cpp:46)
==384019==  Block was alloc'd at
==384019==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384019==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384019==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384019==    by 0x4054E7: main (mandatory.cpp:46)
==384019== 
==384019== Invalid read of size 1
==384019==    at 0x407721: f_del_front_bn (get_next_line_utils.c:163)
==384019==    by 0x4073CD: get_next_line (get_next_line.c:52)
==384019==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384019==    by 0x4054E7: main (mandatory.cpp:46)
==384019==  Address 0x4de5b50 is 0 bytes inside a block of size 42 free'd
==384019==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384019==    by 0x4076FF: f_search_bn (get_next_line_utils.c:119)
==384019==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384019==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384019==    by 0x4054E7: main (mandatory.cpp:46)
==384019==  Block was alloc'd at
==384019==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384019==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==384019==    by 0x40738B: get_next_line (get_next_line.c:48)
==384019==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384019==    by 0x4054E7: main (mandatory.cpp:46)
==384019== 
==384019== Invalid free() / delete / delete[] / realloc()
==384019==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384019==    by 0x4073E0: get_next_line (get_next_line.c:53)
==384019==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384019==    by 0x4054E7: main (mandatory.cpp:46)
==384019==  Address 0x4de4c10 is 0 bytes inside a block of size 2 free'd
==384019==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384019==    by 0x40760E: ft_strjoin (get_next_line_utils.c:82)
==384019==    by 0x40738B: get_next_line (get_next_line.c:48)
==384019==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384019==    by 0x4054E7: main (mandatory.cpp:46)
==384019==  Block was alloc'd at
==384019==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384019==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384019==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384019==    by 0x4054E7: main (mandatory.cpp:46)
==384019== 
==384019== Invalid read of size 1
==384019==    at 0x4074E8: ft_strlen (get_next_line_utils.c:43)
==384019==    by 0x407515: ft_strjoin (get_next_line_utils.c:59)
==384019==    by 0x40738B: get_next_line (get_next_line.c:48)
==384019==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384019==    by 0x4054F9: main (mandatory.cpp:46)
==384019==  Address 0x4de5b79 is 41 bytes inside a block of size 42 free'd
==384019==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384019==    by 0x4076FF: f_search_bn (get_next_line_utils.c:119)
==384019==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384019==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384019==    by 0x4054E7: main (mandatory.cpp:46)
==384019==  Block was alloc'd at
==384019==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384019==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==384019==    by 0x40738B: get_next_line (get_next_line.c:48)
==384019==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384019==    by 0x4054E7: main (mandatory.cpp:46)
==384019== 
==384019== Invalid read of size 1
==384019==    at 0x40758F: ft_strjoin (get_next_line_utils.c:68)
==384019==    by 0x40738B: get_next_line (get_next_line.c:48)
==384019==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384019==    by 0x4054F9: main (mandatory.cpp:46)
==384019==  Address 0x4de5b79 is 41 bytes inside a block of size 42 free'd
==384019==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384019==    by 0x4076FF: f_search_bn (get_next_line_utils.c:119)
==384019==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384019==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384019==    by 0x4054E7: main (mandatory.cpp:46)
==384019==  Block was alloc'd at
==384019==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384019==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==384019==    by 0x40738B: get_next_line (get_next_line.c:48)
==384019==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384019==    by 0x4054E7: main (mandatory.cpp:46)
==384019== 
==384019== Invalid free() / delete / delete[] / realloc()
==384019==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384019==    by 0x407602: ft_strjoin (get_next_line_utils.c:81)
==384019==    by 0x40738B: get_next_line (get_next_line.c:48)
==384019==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384019==    by 0x4054F9: main (mandatory.cpp:46)
==384019==  Address 0x4de5b79 is 41 bytes inside a block of size 42 free'd
==384019==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384019==    by 0x4076FF: f_search_bn (get_next_line_utils.c:119)
==384019==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384019==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384019==    by 0x4054E7: main (mandatory.cpp:46)
==384019==  Block was alloc'd at
==384019==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384019==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==384019==    by 0x40738B: get_next_line (get_next_line.c:48)
==384019==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384019==    by 0x4054E7: main (mandatory.cpp:46)
==384019== 
==384019== Syscall param read(buf) points to unaddressable byte(s)
==384019==    at 0x4CB8992: read (read.c:26)
==384019==    by 0x40733B: get_next_line (get_next_line.c:37)
==384019==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384019==    by 0x4054F9: main (mandatory.cpp:46)
==384019==  Address 0x4de5c30 is 0 bytes inside a block of size 2 free'd
==384019==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384019==    by 0x40760E: ft_strjoin (get_next_line_utils.c:82)
==384019==    by 0x40738B: get_next_line (get_next_line.c:48)
==384019==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384019==    by 0x4054F9: main (mandatory.cpp:46)
==384019==  Block was alloc'd at
==384019==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384019==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384019==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384019==    by 0x4054F9: main (mandatory.cpp:46)
==384019== 
==384019== Invalid write of size 1
==384019==    at 0x40734C: get_next_line (get_next_line.c:38)
==384019==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384019==    by 0x4054F9: main (mandatory.cpp:46)
==384019==  Address 0x4de5c30 is 0 bytes inside a block of size 2 free'd
==384019==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384019==    by 0x40760E: ft_strjoin (get_next_line_utils.c:82)
==384019==    by 0x40738B: get_next_line (get_next_line.c:48)
==384019==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384019==    by 0x4054F9: main (mandatory.cpp:46)
==384019==  Block was alloc'd at
==384019==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384019==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384019==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384019==    by 0x4054F9: main (mandatory.cpp:46)
==384019== 
==384019== Invalid read of size 1
==384019==    at 0x4075DB: ft_strjoin (get_next_line_utils.c:75)
==384019==    by 0x40738B: get_next_line (get_next_line.c:48)
==384019==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384019==    by 0x4054F9: main (mandatory.cpp:46)
==384019==  Address 0x4de5c30 is 0 bytes inside a block of size 2 free'd
==384019==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384019==    by 0x40760E: ft_strjoin (get_next_line_utils.c:82)
==384019==    by 0x40738B: get_next_line (get_next_line.c:48)
==384019==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384019==    by 0x4054F9: main (mandatory.cpp:46)
==384019==  Block was alloc'd at
==384019==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384019==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384019==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384019==    by 0x4054F9: main (mandatory.cpp:46)
==384019== 
==384019== Invalid read of size 1
==384019==    at 0x484FBD4: strcmp (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384019==    by 0x402D0A: gnl(int, char const*) (gnl.cpp:24)
==384019==    by 0x4054F9: main (mandatory.cpp:46)
==384019==  Address 0x0 is not stack'd, malloc'd or (recently) free'd
==384019== 
==384025== Syscall param read(buf) points to unaddressable byte(s)
==384025==    at 0x4CB8992: read (read.c:26)
==384025==    by 0x40733B: get_next_line (get_next_line.c:37)
==384025==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384025==    by 0x405725: main (mandatory.cpp:52)
==384025==  Address 0x4de4f20 is 0 bytes inside a block of size 2 free'd
==384025==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384025==    by 0x40760E: ft_strjoin (get_next_line_utils.c:82)
==384025==    by 0x40738B: get_next_line (get_next_line.c:48)
==384025==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384025==    by 0x405725: main (mandatory.cpp:52)
==384025==  Block was alloc'd at
==384025==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384025==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384025==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384025==    by 0x405725: main (mandatory.cpp:52)
==384025== 
==384025== Invalid write of size 1
==384025==    at 0x40734C: get_next_line (get_next_line.c:38)
==384025==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384025==    by 0x405725: main (mandatory.cpp:52)
==384025==  Address 0x4de4f21 is 1 bytes inside a block of size 2 free'd
==384025==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384025==    by 0x40760E: ft_strjoin (get_next_line_utils.c:82)
==384025==    by 0x40738B: get_next_line (get_next_line.c:48)
==384025==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384025==    by 0x405725: main (mandatory.cpp:52)
==384025==  Block was alloc'd at
==384025==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384025==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384025==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384025==    by 0x405725: main (mandatory.cpp:52)
==384025== 
==384025== Invalid read of size 1
==384025==    at 0x4074E8: ft_strlen (get_next_line_utils.c:43)
==384025==    by 0x407523: ft_strjoin (get_next_line_utils.c:59)
==384025==    by 0x40738B: get_next_line (get_next_line.c:48)
==384025==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384025==    by 0x405725: main (mandatory.cpp:52)
==384025==  Address 0x4de4f21 is 1 bytes inside a block of size 2 free'd
==384025==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384025==    by 0x40760E: ft_strjoin (get_next_line_utils.c:82)
==384025==    by 0x40738B: get_next_line (get_next_line.c:48)
==384025==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384025==    by 0x405725: main (mandatory.cpp:52)
==384025==  Block was alloc'd at
==384025==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384025==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384025==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384025==    by 0x405725: main (mandatory.cpp:52)
==384025== 
==384025== Invalid read of size 1
==384025==    at 0x4075DB: ft_strjoin (get_next_line_utils.c:75)
==384025==    by 0x40738B: get_next_line (get_next_line.c:48)
==384025==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384025==    by 0x405725: main (mandatory.cpp:52)
==384025==  Address 0x4de4f21 is 1 bytes inside a block of size 2 free'd
==384025==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384025==    by 0x40760E: ft_strjoin (get_next_line_utils.c:82)
==384025==    by 0x40738B: get_next_line (get_next_line.c:48)
==384025==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384025==    by 0x405725: main (mandatory.cpp:52)
==384025==  Block was alloc'd at
==384025==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384025==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384025==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384025==    by 0x405725: main (mandatory.cpp:52)
==384025== 
==384025== Invalid free() / delete / delete[] / realloc()
==384025==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384025==    by 0x40760E: ft_strjoin (get_next_line_utils.c:82)
==384025==    by 0x40738B: get_next_line (get_next_line.c:48)
==384025==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384025==    by 0x405725: main (mandatory.cpp:52)
==384025==  Address 0x4de4f20 is 0 bytes inside a block of size 2 free'd
==384025==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384025==    by 0x40760E: ft_strjoin (get_next_line_utils.c:82)
==384025==    by 0x40738B: get_next_line (get_next_line.c:48)
==384025==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384025==    by 0x405725: main (mandatory.cpp:52)
==384025==  Block was alloc'd at
==384025==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384025==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384025==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384025==    by 0x405725: main (mandatory.cpp:52)
==384025== 
==384025== Invalid read of size 1
==384025==    at 0x484FBD4: strcmp (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384025==    by 0x402D0A: gnl(int, char const*) (gnl.cpp:24)
==384025==    by 0x405725: main (mandatory.cpp:52)
==384025==  Address 0x0 is not stack'd, malloc'd or (recently) free'd
==384025== 
==384028== Syscall param read(buf) points to unaddressable byte(s)
==384028==    at 0x4CB8992: read (read.c:26)
==384028==    by 0x40733B: get_next_line (get_next_line.c:37)
==384028==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384028==    by 0x405951: main (mandatory.cpp:57)
==384028==  Address 0x4de5230 is 0 bytes inside a block of size 2 free'd
==384028==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384028==    by 0x40760E: ft_strjoin (get_next_line_utils.c:82)
==384028==    by 0x40738B: get_next_line (get_next_line.c:48)
==384028==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384028==    by 0x405951: main (mandatory.cpp:57)
==384028==  Block was alloc'd at
==384028==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384028==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384028==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384028==    by 0x405951: main (mandatory.cpp:57)
==384028== 
==384028== Invalid write of size 1
==384028==    at 0x40734C: get_next_line (get_next_line.c:38)
==384028==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384028==    by 0x405951: main (mandatory.cpp:57)
==384028==  Address 0x4de5231 is 1 bytes inside a block of size 2 free'd
==384028==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384028==    by 0x40760E: ft_strjoin (get_next_line_utils.c:82)
==384028==    by 0x40738B: get_next_line (get_next_line.c:48)
==384028==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384028==    by 0x405951: main (mandatory.cpp:57)
==384028==  Block was alloc'd at
==384028==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384028==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384028==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384028==    by 0x405951: main (mandatory.cpp:57)
==384028== 
==384028== Invalid read of size 1
==384028==    at 0x4074E8: ft_strlen (get_next_line_utils.c:43)
==384028==    by 0x407523: ft_strjoin (get_next_line_utils.c:59)
==384028==    by 0x40738B: get_next_line (get_next_line.c:48)
==384028==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384028==    by 0x405951: main (mandatory.cpp:57)
==384028==  Address 0x4de5231 is 1 bytes inside a block of size 2 free'd
==384028==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384028==    by 0x40760E: ft_strjoin (get_next_line_utils.c:82)
==384028==    by 0x40738B: get_next_line (get_next_line.c:48)
==384028==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384028==    by 0x405951: main (mandatory.cpp:57)
==384028==  Block was alloc'd at
==384028==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384028==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384028==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384028==    by 0x405951: main (mandatory.cpp:57)
==384028== 
==384028== Invalid read of size 1
==384028==    at 0x4075DB: ft_strjoin (get_next_line_utils.c:75)
==384028==    by 0x40738B: get_next_line (get_next_line.c:48)
==384028==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384028==    by 0x405951: main (mandatory.cpp:57)
==384028==  Address 0x4de5231 is 1 bytes inside a block of size 2 free'd
==384028==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384028==    by 0x40760E: ft_strjoin (get_next_line_utils.c:82)
==384028==    by 0x40738B: get_next_line (get_next_line.c:48)
==384028==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384028==    by 0x405951: main (mandatory.cpp:57)
==384028==  Block was alloc'd at
==384028==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384028==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384028==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384028==    by 0x405951: main (mandatory.cpp:57)
==384028== 
==384028== Invalid free() / delete / delete[] / realloc()
==384028==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384028==    by 0x40760E: ft_strjoin (get_next_line_utils.c:82)
==384028==    by 0x40738B: get_next_line (get_next_line.c:48)
==384028==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384028==    by 0x405951: main (mandatory.cpp:57)
==384028==  Address 0x4de5230 is 0 bytes inside a block of size 2 free'd
==384028==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384028==    by 0x40760E: ft_strjoin (get_next_line_utils.c:82)
==384028==    by 0x40738B: get_next_line (get_next_line.c:48)
==384028==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384028==    by 0x405951: main (mandatory.cpp:57)
==384028==  Block was alloc'd at
==384028==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384028==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384028==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384028==    by 0x405951: main (mandatory.cpp:57)
==384028== 
==384028== Invalid read of size 1
==384028==    at 0x407721: f_del_front_bn (get_next_line_utils.c:163)
==384028==    by 0x4073CD: get_next_line (get_next_line.c:52)
==384028==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384028==    by 0x405951: main (mandatory.cpp:57)
==384028==  Address 0x4de61e0 is 0 bytes inside a block of size 43 free'd
==384028==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384028==    by 0x4076FF: f_search_bn (get_next_line_utils.c:119)
==384028==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384028==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384028==    by 0x405951: main (mandatory.cpp:57)
==384028==  Block was alloc'd at
==384028==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384028==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==384028==    by 0x40738B: get_next_line (get_next_line.c:48)
==384028==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384028==    by 0x405951: main (mandatory.cpp:57)
==384028== 
==384028== Invalid free() / delete / delete[] / realloc()
==384028==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384028==    by 0x4073E0: get_next_line (get_next_line.c:53)
==384028==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384028==    by 0x405951: main (mandatory.cpp:57)
==384028==  Address 0x4de5230 is 0 bytes inside a block of size 2 free'd
==384028==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384028==    by 0x40760E: ft_strjoin (get_next_line_utils.c:82)
==384028==    by 0x40738B: get_next_line (get_next_line.c:48)
==384028==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384028==    by 0x405951: main (mandatory.cpp:57)
==384028==  Block was alloc'd at
==384028==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384028==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384028==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384028==    by 0x405951: main (mandatory.cpp:57)
==384028== 
==384028== Invalid read of size 1
==384028==    at 0x4074E8: ft_strlen (get_next_line_utils.c:43)
==384028==    by 0x407515: ft_strjoin (get_next_line_utils.c:59)
==384028==    by 0x40738B: get_next_line (get_next_line.c:48)
==384028==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384028==    by 0x405963: main (mandatory.cpp:57)
==384028==  Address 0x4de620a is 42 bytes inside a block of size 43 free'd
==384028==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384028==    by 0x4076FF: f_search_bn (get_next_line_utils.c:119)
==384028==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384028==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384028==    by 0x405951: main (mandatory.cpp:57)
==384028==  Block was alloc'd at
==384028==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384028==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==384028==    by 0x40738B: get_next_line (get_next_line.c:48)
==384028==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384028==    by 0x405951: main (mandatory.cpp:57)
==384028== 
==384028== Invalid read of size 1
==384028==    at 0x40758F: ft_strjoin (get_next_line_utils.c:68)
==384028==    by 0x40738B: get_next_line (get_next_line.c:48)
==384028==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384028==    by 0x405963: main (mandatory.cpp:57)
==384028==  Address 0x4de620a is 42 bytes inside a block of size 43 free'd
==384028==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384028==    by 0x4076FF: f_search_bn (get_next_line_utils.c:119)
==384028==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384028==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384028==    by 0x405951: main (mandatory.cpp:57)
==384028==  Block was alloc'd at
==384028==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384028==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==384028==    by 0x40738B: get_next_line (get_next_line.c:48)
==384028==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384028==    by 0x405951: main (mandatory.cpp:57)
==384028== 
==384028== Invalid free() / delete / delete[] / realloc()
==384028==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384028==    by 0x407602: ft_strjoin (get_next_line_utils.c:81)
==384028==    by 0x40738B: get_next_line (get_next_line.c:48)
==384028==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384028==    by 0x405963: main (mandatory.cpp:57)
==384028==  Address 0x4de620a is 42 bytes inside a block of size 43 free'd
==384028==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384028==    by 0x4076FF: f_search_bn (get_next_line_utils.c:119)
==384028==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384028==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384028==    by 0x405951: main (mandatory.cpp:57)
==384028==  Block was alloc'd at
==384028==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384028==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==384028==    by 0x40738B: get_next_line (get_next_line.c:48)
==384028==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384028==    by 0x405951: main (mandatory.cpp:57)
==384028== 
==384028== Syscall param read(buf) points to unaddressable byte(s)
==384028==    at 0x4CB8992: read (read.c:26)
==384028==    by 0x40733B: get_next_line (get_next_line.c:37)
==384028==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384028==    by 0x405963: main (mandatory.cpp:57)
==384028==  Address 0x4de62c0 is 0 bytes inside a block of size 2 free'd
==384028==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384028==    by 0x40760E: ft_strjoin (get_next_line_utils.c:82)
==384028==    by 0x40738B: get_next_line (get_next_line.c:48)
==384028==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384028==    by 0x405963: main (mandatory.cpp:57)
==384028==  Block was alloc'd at
==384028==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384028==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384028==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384028==    by 0x405963: main (mandatory.cpp:57)
==384028== 
==384028== Invalid write of size 1
==384028==    at 0x40734C: get_next_line (get_next_line.c:38)
==384028==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384028==    by 0x405963: main (mandatory.cpp:57)
==384028==  Address 0x4de62c0 is 0 bytes inside a block of size 2 free'd
==384028==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384028==    by 0x40760E: ft_strjoin (get_next_line_utils.c:82)
==384028==    by 0x40738B: get_next_line (get_next_line.c:48)
==384028==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384028==    by 0x405963: main (mandatory.cpp:57)
==384028==  Block was alloc'd at
==384028==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384028==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384028==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384028==    by 0x405963: main (mandatory.cpp:57)
==384028== 
==384028== Invalid read of size 1
==384028==    at 0x4075DB: ft_strjoin (get_next_line_utils.c:75)
==384028==    by 0x40738B: get_next_line (get_next_line.c:48)
==384028==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384028==    by 0x405963: main (mandatory.cpp:57)
==384028==  Address 0x4de62c0 is 0 bytes inside a block of size 2 free'd
==384028==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384028==    by 0x40760E: ft_strjoin (get_next_line_utils.c:82)
==384028==    by 0x40738B: get_next_line (get_next_line.c:48)
==384028==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384028==    by 0x405963: main (mandatory.cpp:57)
==384028==  Block was alloc'd at
==384028==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384028==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384028==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384028==    by 0x405963: main (mandatory.cpp:57)
==384028== 
==384028== Invalid read of size 1
==384028==    at 0x484FBD4: strcmp (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384028==    by 0x402D0A: gnl(int, char const*) (gnl.cpp:24)
==384028==    by 0x405963: main (mandatory.cpp:57)
==384028==  Address 0x0 is not stack'd, malloc'd or (recently) free'd
==384028== 
==384029== Syscall param read(buf) points to unaddressable byte(s)
==384029==    at 0x4CB8992: read (read.c:26)
==384029==    by 0x40733B: get_next_line (get_next_line.c:37)
==384029==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384029==    by 0x405B99: main (mandatory.cpp:68)
==384029==  Address 0x4de5540 is 0 bytes inside a block of size 2 free'd
==384029==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384029==    by 0x40760E: ft_strjoin (get_next_line_utils.c:82)
==384029==    by 0x40738B: get_next_line (get_next_line.c:48)
==384029==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384029==    by 0x405B99: main (mandatory.cpp:68)
==384029==  Block was alloc'd at
==384029==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384029==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384029==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384029==    by 0x405B99: main (mandatory.cpp:68)
==384029== 
==384029== Invalid write of size 1
==384029==    at 0x40734C: get_next_line (get_next_line.c:38)
==384029==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384029==    by 0x405B99: main (mandatory.cpp:68)
==384029==  Address 0x4de5541 is 1 bytes inside a block of size 2 free'd
==384029==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384029==    by 0x40760E: ft_strjoin (get_next_line_utils.c:82)
==384029==    by 0x40738B: get_next_line (get_next_line.c:48)
==384029==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384029==    by 0x405B99: main (mandatory.cpp:68)
==384029==  Block was alloc'd at
==384029==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384029==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384029==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384029==    by 0x405B99: main (mandatory.cpp:68)
==384029== 
==384029== Invalid read of size 1
==384029==    at 0x4074E8: ft_strlen (get_next_line_utils.c:43)
==384029==    by 0x407523: ft_strjoin (get_next_line_utils.c:59)
==384029==    by 0x40738B: get_next_line (get_next_line.c:48)
==384029==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384029==    by 0x405B99: main (mandatory.cpp:68)
==384029==  Address 0x4de5541 is 1 bytes inside a block of size 2 free'd
==384029==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384029==    by 0x40760E: ft_strjoin (get_next_line_utils.c:82)
==384029==    by 0x40738B: get_next_line (get_next_line.c:48)
==384029==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384029==    by 0x405B99: main (mandatory.cpp:68)
==384029==  Block was alloc'd at
==384029==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384029==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384029==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384029==    by 0x405B99: main (mandatory.cpp:68)
==384029== 
==384029== Invalid read of size 1
==384029==    at 0x4075DB: ft_strjoin (get_next_line_utils.c:75)
==384029==    by 0x40738B: get_next_line (get_next_line.c:48)
==384029==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384029==    by 0x405B99: main (mandatory.cpp:68)
==384029==  Address 0x4de5541 is 1 bytes inside a block of size 2 free'd
==384029==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384029==    by 0x40760E: ft_strjoin (get_next_line_utils.c:82)
==384029==    by 0x40738B: get_next_line (get_next_line.c:48)
==384029==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384029==    by 0x405B99: main (mandatory.cpp:68)
==384029==  Block was alloc'd at
==384029==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384029==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384029==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384029==    by 0x405B99: main (mandatory.cpp:68)
==384029== 
==384029== Invalid free() / delete / delete[] / realloc()
==384029==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384029==    by 0x40760E: ft_strjoin (get_next_line_utils.c:82)
==384029==    by 0x40738B: get_next_line (get_next_line.c:48)
==384029==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384029==    by 0x405B99: main (mandatory.cpp:68)
==384029==  Address 0x4de5540 is 0 bytes inside a block of size 2 free'd
==384029==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384029==    by 0x40760E: ft_strjoin (get_next_line_utils.c:82)
==384029==    by 0x40738B: get_next_line (get_next_line.c:48)
==384029==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384029==    by 0x405B99: main (mandatory.cpp:68)
==384029==  Block was alloc'd at
==384029==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384029==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384029==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384029==    by 0x405B99: main (mandatory.cpp:68)
==384029== 
==384029== Invalid read of size 1
==384029==    at 0x484FBD4: strcmp (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384029==    by 0x402D0A: gnl(int, char const*) (gnl.cpp:24)
==384029==    by 0x405B99: main (mandatory.cpp:68)
==384029==  Address 0x0 is not stack'd, malloc'd or (recently) free'd
==384029== 
==384032== Syscall param read(buf) points to unaddressable byte(s)
==384032==    at 0x4CB8992: read (read.c:26)
==384032==    by 0x40733B: get_next_line (get_next_line.c:37)
==384032==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384032==    by 0x405DC5: main (mandatory.cpp:73)
==384032==  Address 0x4de5850 is 0 bytes inside a block of size 2 free'd
==384032==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384032==    by 0x40760E: ft_strjoin (get_next_line_utils.c:82)
==384032==    by 0x40738B: get_next_line (get_next_line.c:48)
==384032==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384032==    by 0x405DC5: main (mandatory.cpp:73)
==384032==  Block was alloc'd at
==384032==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384032==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384032==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384032==    by 0x405DC5: main (mandatory.cpp:73)
==384032== 
==384032== Invalid write of size 1
==384032==    at 0x40734C: get_next_line (get_next_line.c:38)
==384032==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384032==    by 0x405DC5: main (mandatory.cpp:73)
==384032==  Address 0x4de5851 is 1 bytes inside a block of size 2 free'd
==384032==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384032==    by 0x40760E: ft_strjoin (get_next_line_utils.c:82)
==384032==    by 0x40738B: get_next_line (get_next_line.c:48)
==384032==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384032==    by 0x405DC5: main (mandatory.cpp:73)
==384032==  Block was alloc'd at
==384032==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384032==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384032==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384032==    by 0x405DC5: main (mandatory.cpp:73)
==384032== 
==384032== Invalid read of size 1
==384032==    at 0x4074E8: ft_strlen (get_next_line_utils.c:43)
==384032==    by 0x407523: ft_strjoin (get_next_line_utils.c:59)
==384032==    by 0x40738B: get_next_line (get_next_line.c:48)
==384032==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384032==    by 0x405DC5: main (mandatory.cpp:73)
==384032==  Address 0x4de5851 is 1 bytes inside a block of size 2 free'd
==384032==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384032==    by 0x40760E: ft_strjoin (get_next_line_utils.c:82)
==384032==    by 0x40738B: get_next_line (get_next_line.c:48)
==384032==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384032==    by 0x405DC5: main (mandatory.cpp:73)
==384032==  Block was alloc'd at
==384032==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384032==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384032==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384032==    by 0x405DC5: main (mandatory.cpp:73)
==384032== 
==384032== Invalid read of size 1
==384032==    at 0x4075DB: ft_strjoin (get_next_line_utils.c:75)
==384032==    by 0x40738B: get_next_line (get_next_line.c:48)
==384032==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384032==    by 0x405DC5: main (mandatory.cpp:73)
==384032==  Address 0x4de5851 is 1 bytes inside a block of size 2 free'd
==384032==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384032==    by 0x40760E: ft_strjoin (get_next_line_utils.c:82)
==384032==    by 0x40738B: get_next_line (get_next_line.c:48)
==384032==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384032==    by 0x405DC5: main (mandatory.cpp:73)
==384032==  Block was alloc'd at
==384032==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384032==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384032==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384032==    by 0x405DC5: main (mandatory.cpp:73)
==384032== 
==384032== Invalid free() / delete / delete[] / realloc()
==384032==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384032==    by 0x40760E: ft_strjoin (get_next_line_utils.c:82)
==384032==    by 0x40738B: get_next_line (get_next_line.c:48)
==384032==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384032==    by 0x405DC5: main (mandatory.cpp:73)
==384032==  Address 0x4de5850 is 0 bytes inside a block of size 2 free'd
==384032==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384032==    by 0x40760E: ft_strjoin (get_next_line_utils.c:82)
==384032==    by 0x40738B: get_next_line (get_next_line.c:48)
==384032==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384032==    by 0x405DC5: main (mandatory.cpp:73)
==384032==  Block was alloc'd at
==384032==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384032==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384032==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384032==    by 0x405DC5: main (mandatory.cpp:73)
==384032== 
==384032== Invalid read of size 1
==384032==    at 0x407721: f_del_front_bn (get_next_line_utils.c:163)
==384032==    by 0x4073CD: get_next_line (get_next_line.c:52)
==384032==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384032==    by 0x405DC5: main (mandatory.cpp:73)
==384032==  Address 0x4de6870 is 0 bytes inside a block of size 44 free'd
==384032==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384032==    by 0x4076FF: f_search_bn (get_next_line_utils.c:119)
==384032==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384032==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384032==    by 0x405DC5: main (mandatory.cpp:73)
==384032==  Block was alloc'd at
==384032==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384032==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==384032==    by 0x40738B: get_next_line (get_next_line.c:48)
==384032==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384032==    by 0x405DC5: main (mandatory.cpp:73)
==384032== 
==384032== Invalid free() / delete / delete[] / realloc()
==384032==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384032==    by 0x4073E0: get_next_line (get_next_line.c:53)
==384032==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384032==    by 0x405DC5: main (mandatory.cpp:73)
==384032==  Address 0x4de5850 is 0 bytes inside a block of size 2 free'd
==384032==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384032==    by 0x40760E: ft_strjoin (get_next_line_utils.c:82)
==384032==    by 0x40738B: get_next_line (get_next_line.c:48)
==384032==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384032==    by 0x405DC5: main (mandatory.cpp:73)
==384032==  Block was alloc'd at
==384032==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384032==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384032==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384032==    by 0x405DC5: main (mandatory.cpp:73)
==384032== 
==384032== Invalid read of size 1
==384032==    at 0x4074E8: ft_strlen (get_next_line_utils.c:43)
==384032==    by 0x407515: ft_strjoin (get_next_line_utils.c:59)
==384032==    by 0x40738B: get_next_line (get_next_line.c:48)
==384032==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384032==    by 0x405DD7: main (mandatory.cpp:73)
==384032==  Address 0x4de689b is 43 bytes inside a block of size 44 free'd
==384032==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384032==    by 0x4076FF: f_search_bn (get_next_line_utils.c:119)
==384032==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384032==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384032==    by 0x405DC5: main (mandatory.cpp:73)
==384032==  Block was alloc'd at
==384032==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384032==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==384032==    by 0x40738B: get_next_line (get_next_line.c:48)
==384032==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384032==    by 0x405DC5: main (mandatory.cpp:73)
==384032== 
==384032== Invalid read of size 1
==384032==    at 0x40758F: ft_strjoin (get_next_line_utils.c:68)
==384032==    by 0x40738B: get_next_line (get_next_line.c:48)
==384032==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384032==    by 0x405DD7: main (mandatory.cpp:73)
==384032==  Address 0x4de689b is 43 bytes inside a block of size 44 free'd
==384032==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384032==    by 0x4076FF: f_search_bn (get_next_line_utils.c:119)
==384032==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384032==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384032==    by 0x405DC5: main (mandatory.cpp:73)
==384032==  Block was alloc'd at
==384032==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384032==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==384032==    by 0x40738B: get_next_line (get_next_line.c:48)
==384032==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384032==    by 0x405DC5: main (mandatory.cpp:73)
==384032== 
==384032== Invalid free() / delete / delete[] / realloc()
==384032==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384032==    by 0x407602: ft_strjoin (get_next_line_utils.c:81)
==384032==    by 0x40738B: get_next_line (get_next_line.c:48)
==384032==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384032==    by 0x405DD7: main (mandatory.cpp:73)
==384032==  Address 0x4de689b is 43 bytes inside a block of size 44 free'd
==384032==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384032==    by 0x4076FF: f_search_bn (get_next_line_utils.c:119)
==384032==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384032==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384032==    by 0x405DC5: main (mandatory.cpp:73)
==384032==  Block was alloc'd at
==384032==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384032==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==384032==    by 0x40738B: get_next_line (get_next_line.c:48)
==384032==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384032==    by 0x405DC5: main (mandatory.cpp:73)
==384032== 
==384032== Syscall param read(buf) points to unaddressable byte(s)
==384032==    at 0x4CB8992: read (read.c:26)
==384032==    by 0x40733B: get_next_line (get_next_line.c:37)
==384032==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384032==    by 0x405DD7: main (mandatory.cpp:73)
==384032==  Address 0x4de6950 is 0 bytes inside a block of size 2 free'd
==384032==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384032==    by 0x40760E: ft_strjoin (get_next_line_utils.c:82)
==384032==    by 0x40738B: get_next_line (get_next_line.c:48)
==384032==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384032==    by 0x405DD7: main (mandatory.cpp:73)
==384032==  Block was alloc'd at
==384032==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384032==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384032==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384032==    by 0x405DD7: main (mandatory.cpp:73)
==384032== 
==384032== Invalid write of size 1
==384032==    at 0x40734C: get_next_line (get_next_line.c:38)
==384032==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384032==    by 0x405DD7: main (mandatory.cpp:73)
==384032==  Address 0x4de6950 is 0 bytes inside a block of size 2 free'd
==384032==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384032==    by 0x40760E: ft_strjoin (get_next_line_utils.c:82)
==384032==    by 0x40738B: get_next_line (get_next_line.c:48)
==384032==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384032==    by 0x405DD7: main (mandatory.cpp:73)
==384032==  Block was alloc'd at
==384032==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384032==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384032==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384032==    by 0x405DD7: main (mandatory.cpp:73)
==384032== 
==384032== Invalid read of size 1
==384032==    at 0x4075DB: ft_strjoin (get_next_line_utils.c:75)
==384032==    by 0x40738B: get_next_line (get_next_line.c:48)
==384032==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384032==    by 0x405DD7: main (mandatory.cpp:73)
==384032==  Address 0x4de6950 is 0 bytes inside a block of size 2 free'd
==384032==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384032==    by 0x40760E: ft_strjoin (get_next_line_utils.c:82)
==384032==    by 0x40738B: get_next_line (get_next_line.c:48)
==384032==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384032==    by 0x405DD7: main (mandatory.cpp:73)
==384032==  Block was alloc'd at
==384032==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384032==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384032==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384032==    by 0x405DD7: main (mandatory.cpp:73)
==384032== 
==384032== Invalid read of size 1
==384032==    at 0x484FBD4: strcmp (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384032==    by 0x402D0A: gnl(int, char const*) (gnl.cpp:24)
==384032==    by 0x405DD7: main (mandatory.cpp:73)
==384032==  Address 0x0 is not stack'd, malloc'd or (recently) free'd
==384032== 
==384034== Invalid read of size 1
==384034==    at 0x407721: f_del_front_bn (get_next_line_utils.c:163)
==384034==    by 0x4073CD: get_next_line (get_next_line.c:52)
==384034==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384034==    by 0x406003: main (mandatory.cpp:79)
==384034==  Address 0x4de5c00 is 0 bytes inside a block of size 2 free'd
==384034==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384034==    by 0x4076FF: f_search_bn (get_next_line_utils.c:119)
==384034==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384034==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384034==    by 0x406003: main (mandatory.cpp:79)
==384034==  Block was alloc'd at
==384034==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384034==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==384034==    by 0x40738B: get_next_line (get_next_line.c:48)
==384034==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384034==    by 0x406003: main (mandatory.cpp:79)
==384034== 
==384034== Invalid free() / delete / delete[] / realloc()
==384034==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384034==    by 0x4073E0: get_next_line (get_next_line.c:53)
==384034==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384034==    by 0x406003: main (mandatory.cpp:79)
==384034==  Address 0x4de5b60 is 0 bytes inside a block of size 2 free'd
==384034==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384034==    by 0x40760E: ft_strjoin (get_next_line_utils.c:82)
==384034==    by 0x40738B: get_next_line (get_next_line.c:48)
==384034==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384034==    by 0x406003: main (mandatory.cpp:79)
==384034==  Block was alloc'd at
==384034==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384034==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384034==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384034==    by 0x406003: main (mandatory.cpp:79)
==384034== 
==384034== Invalid read of size 1
==384034==    at 0x4074E8: ft_strlen (get_next_line_utils.c:43)
==384034==    by 0x407515: ft_strjoin (get_next_line_utils.c:59)
==384034==    by 0x40738B: get_next_line (get_next_line.c:48)
==384034==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384034==    by 0x406015: main (mandatory.cpp:79)
==384034==  Address 0x4de5c01 is 1 bytes inside a block of size 2 free'd
==384034==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384034==    by 0x4076FF: f_search_bn (get_next_line_utils.c:119)
==384034==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384034==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384034==    by 0x406003: main (mandatory.cpp:79)
==384034==  Block was alloc'd at
==384034==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384034==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==384034==    by 0x40738B: get_next_line (get_next_line.c:48)
==384034==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384034==    by 0x406003: main (mandatory.cpp:79)
==384034== 
==384034== Invalid read of size 1
==384034==    at 0x40758F: ft_strjoin (get_next_line_utils.c:68)
==384034==    by 0x40738B: get_next_line (get_next_line.c:48)
==384034==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384034==    by 0x406015: main (mandatory.cpp:79)
==384034==  Address 0x4de5c01 is 1 bytes inside a block of size 2 free'd
==384034==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384034==    by 0x4076FF: f_search_bn (get_next_line_utils.c:119)
==384034==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384034==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384034==    by 0x406003: main (mandatory.cpp:79)
==384034==  Block was alloc'd at
==384034==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384034==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==384034==    by 0x40738B: get_next_line (get_next_line.c:48)
==384034==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384034==    by 0x406003: main (mandatory.cpp:79)
==384034== 
==384034== Invalid free() / delete / delete[] / realloc()
==384034==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384034==    by 0x407602: ft_strjoin (get_next_line_utils.c:81)
==384034==    by 0x40738B: get_next_line (get_next_line.c:48)
==384034==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384034==    by 0x406015: main (mandatory.cpp:79)
==384034==  Address 0x4de5c01 is 1 bytes inside a block of size 2 free'd
==384034==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384034==    by 0x4076FF: f_search_bn (get_next_line_utils.c:119)
==384034==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384034==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384034==    by 0x406003: main (mandatory.cpp:79)
==384034==  Block was alloc'd at
==384034==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384034==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==384034==    by 0x40738B: get_next_line (get_next_line.c:48)
==384034==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384034==    by 0x406003: main (mandatory.cpp:79)
==384034== 
==384034== Invalid read of size 1
==384034==    at 0x407721: f_del_front_bn (get_next_line_utils.c:163)
==384034==    by 0x4073CD: get_next_line (get_next_line.c:52)
==384034==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384034==    by 0x406015: main (mandatory.cpp:79)
==384034==  Address 0x4de5cf0 is 0 bytes inside a block of size 2 free'd
==384034==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384034==    by 0x4076FF: f_search_bn (get_next_line_utils.c:119)
==384034==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384034==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384034==    by 0x406015: main (mandatory.cpp:79)
==384034==  Block was alloc'd at
==384034==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384034==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==384034==    by 0x40738B: get_next_line (get_next_line.c:48)
==384034==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384034==    by 0x406015: main (mandatory.cpp:79)
==384034== 
==384034== Invalid free() / delete / delete[] / realloc()
==384034==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384034==    by 0x4073E0: get_next_line (get_next_line.c:53)
==384034==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384034==    by 0x406015: main (mandatory.cpp:79)
==384034==  Address 0x4de5ca0 is 0 bytes inside a block of size 2 free'd
==384034==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384034==    by 0x40760E: ft_strjoin (get_next_line_utils.c:82)
==384034==    by 0x40738B: get_next_line (get_next_line.c:48)
==384034==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384034==    by 0x406015: main (mandatory.cpp:79)
==384034==  Block was alloc'd at
==384034==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384034==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384034==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384034==    by 0x406015: main (mandatory.cpp:79)
==384034== 
==384034== Invalid read of size 1
==384034==    at 0x40758F: ft_strjoin (get_next_line_utils.c:68)
==384034==    by 0x40738B: get_next_line (get_next_line.c:48)
==384034==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384034==    by 0x406027: main (mandatory.cpp:79)
==384034==  Address 0x4de5cf1 is 1 bytes inside a block of size 2 free'd
==384034==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384034==    by 0x4076FF: f_search_bn (get_next_line_utils.c:119)
==384034==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384034==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384034==    by 0x406015: main (mandatory.cpp:79)
==384034==  Block was alloc'd at
==384034==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384034==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==384034==    by 0x40738B: get_next_line (get_next_line.c:48)
==384034==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384034==    by 0x406015: main (mandatory.cpp:79)
==384034== 
==384034== Invalid read of size 1
==384034==    at 0x407721: f_del_front_bn (get_next_line_utils.c:163)
==384034==    by 0x4073CD: get_next_line (get_next_line.c:52)
==384034==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384034==    by 0x406027: main (mandatory.cpp:79)
==384034==  Address 0x4de5de0 is 0 bytes inside a block of size 2 free'd
==384034==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384034==    by 0x4076FF: f_search_bn (get_next_line_utils.c:119)
==384034==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384034==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384034==    by 0x406027: main (mandatory.cpp:79)
==384034==  Block was alloc'd at
==384034==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384034==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==384034==    by 0x40738B: get_next_line (get_next_line.c:48)
==384034==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384034==    by 0x406027: main (mandatory.cpp:79)
==384034== 
==384034== Invalid free() / delete / delete[] / realloc()
==384034==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384034==    by 0x4073E0: get_next_line (get_next_line.c:53)
==384034==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384034==    by 0x406027: main (mandatory.cpp:79)
==384034==  Address 0x4de5d90 is 0 bytes inside a block of size 2 free'd
==384034==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384034==    by 0x40760E: ft_strjoin (get_next_line_utils.c:82)
==384034==    by 0x40738B: get_next_line (get_next_line.c:48)
==384034==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384034==    by 0x406027: main (mandatory.cpp:79)
==384034==  Block was alloc'd at
==384034==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384034==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384034==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384034==    by 0x406027: main (mandatory.cpp:79)
==384034== 
==384034== Invalid read of size 1
==384034==    at 0x40758F: ft_strjoin (get_next_line_utils.c:68)
==384034==    by 0x40738B: get_next_line (get_next_line.c:48)
==384034==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384034==    by 0x406039: main (mandatory.cpp:79)
==384034==  Address 0x4de5de1 is 1 bytes inside a block of size 2 free'd
==384034==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384034==    by 0x4076FF: f_search_bn (get_next_line_utils.c:119)
==384034==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384034==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384034==    by 0x406027: main (mandatory.cpp:79)
==384034==  Block was alloc'd at
==384034==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384034==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==384034==    by 0x40738B: get_next_line (get_next_line.c:48)
==384034==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384034==    by 0x406027: main (mandatory.cpp:79)
==384034== 
==384034== Invalid read of size 1
==384034==    at 0x407721: f_del_front_bn (get_next_line_utils.c:163)
==384034==    by 0x4073CD: get_next_line (get_next_line.c:52)
==384034==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384034==    by 0x406039: main (mandatory.cpp:79)
==384034==  Address 0x4de5ed0 is 0 bytes inside a block of size 2 free'd
==384034==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384034==    by 0x4076FF: f_search_bn (get_next_line_utils.c:119)
==384034==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384034==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384034==    by 0x406039: main (mandatory.cpp:79)
==384034==  Block was alloc'd at
==384034==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384034==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==384034==    by 0x40738B: get_next_line (get_next_line.c:48)
==384034==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384034==    by 0x406039: main (mandatory.cpp:79)
==384034== 
==384034== Invalid free() / delete / delete[] / realloc()
==384034==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384034==    by 0x4073E0: get_next_line (get_next_line.c:53)
==384034==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384034==    by 0x406039: main (mandatory.cpp:79)
==384034==  Address 0x4de5e80 is 0 bytes inside a block of size 2 free'd
==384034==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384034==    by 0x40760E: ft_strjoin (get_next_line_utils.c:82)
==384034==    by 0x40738B: get_next_line (get_next_line.c:48)
==384034==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384034==    by 0x406039: main (mandatory.cpp:79)
==384034==  Block was alloc'd at
==384034==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384034==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384034==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384034==    by 0x406039: main (mandatory.cpp:79)
==384034== 
==384034== Invalid read of size 1
==384034==    at 0x40758F: ft_strjoin (get_next_line_utils.c:68)
==384034==    by 0x40738B: get_next_line (get_next_line.c:48)
==384034==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384034==    by 0x40604B: main (mandatory.cpp:79)
==384034==  Address 0x4de5ed1 is 1 bytes inside a block of size 2 free'd
==384034==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384034==    by 0x4076FF: f_search_bn (get_next_line_utils.c:119)
==384034==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384034==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384034==    by 0x406039: main (mandatory.cpp:79)
==384034==  Block was alloc'd at
==384034==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384034==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==384034==    by 0x40738B: get_next_line (get_next_line.c:48)
==384034==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384034==    by 0x406039: main (mandatory.cpp:79)
==384034== 
==384034== Invalid read of size 1
==384034==    at 0x407721: f_del_front_bn (get_next_line_utils.c:163)
==384034==    by 0x4073CD: get_next_line (get_next_line.c:52)
==384034==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384034==    by 0x40604B: main (mandatory.cpp:79)
==384034==  Address 0x4de5fc0 is 0 bytes inside a block of size 2 free'd
==384034==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384034==    by 0x4076FF: f_search_bn (get_next_line_utils.c:119)
==384034==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384034==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384034==    by 0x40604B: main (mandatory.cpp:79)
==384034==  Block was alloc'd at
==384034==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384034==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==384034==    by 0x40738B: get_next_line (get_next_line.c:48)
==384034==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384034==    by 0x40604B: main (mandatory.cpp:79)
==384034== 
==384034== Invalid free() / delete / delete[] / realloc()
==384034==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384034==    by 0x4073E0: get_next_line (get_next_line.c:53)
==384034==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384034==    by 0x40604B: main (mandatory.cpp:79)
==384034==  Address 0x4de5f70 is 0 bytes inside a block of size 2 free'd
==384034==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384034==    by 0x40760E: ft_strjoin (get_next_line_utils.c:82)
==384034==    by 0x40738B: get_next_line (get_next_line.c:48)
==384034==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384034==    by 0x40604B: main (mandatory.cpp:79)
==384034==  Block was alloc'd at
==384034==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384034==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384034==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384034==    by 0x40604B: main (mandatory.cpp:79)
==384034== 
==384034== Invalid read of size 1
==384034==    at 0x40758F: ft_strjoin (get_next_line_utils.c:68)
==384034==    by 0x40738B: get_next_line (get_next_line.c:48)
==384034==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384034==    by 0x406057: main (mandatory.cpp:79)
==384034==  Address 0x4de5fc1 is 1 bytes inside a block of size 2 free'd
==384034==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384034==    by 0x4076FF: f_search_bn (get_next_line_utils.c:119)
==384034==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384034==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384034==    by 0x40604B: main (mandatory.cpp:79)
==384034==  Block was alloc'd at
==384034==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384034==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==384034==    by 0x40738B: get_next_line (get_next_line.c:48)
==384034==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384034==    by 0x40604B: main (mandatory.cpp:79)
==384034== 
==384039== Syscall param read(buf) points to unaddressable byte(s)
==384039==    at 0x4CB8992: read (read.c:26)
==384039==    by 0x40733B: get_next_line (get_next_line.c:37)
==384039==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384039==    by 0x406277: main (mandatory.cpp:88)
==384039==  Address 0x4de5e90 is 0 bytes inside a block of size 2 free'd
==384039==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384039==    by 0x40760E: ft_strjoin (get_next_line_utils.c:82)
==384039==    by 0x40738B: get_next_line (get_next_line.c:48)
==384039==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384039==    by 0x406277: main (mandatory.cpp:88)
==384039==  Block was alloc'd at
==384039==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384039==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384039==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384039==    by 0x406277: main (mandatory.cpp:88)
==384039== 
==384039== Invalid write of size 1
==384039==    at 0x40734C: get_next_line (get_next_line.c:38)
==384039==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384039==    by 0x406277: main (mandatory.cpp:88)
==384039==  Address 0x4de5e91 is 1 bytes inside a block of size 2 free'd
==384039==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384039==    by 0x40760E: ft_strjoin (get_next_line_utils.c:82)
==384039==    by 0x40738B: get_next_line (get_next_line.c:48)
==384039==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384039==    by 0x406277: main (mandatory.cpp:88)
==384039==  Block was alloc'd at
==384039==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384039==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384039==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384039==    by 0x406277: main (mandatory.cpp:88)
==384039== 
==384039== Invalid read of size 1
==384039==    at 0x4074E8: ft_strlen (get_next_line_utils.c:43)
==384039==    by 0x407523: ft_strjoin (get_next_line_utils.c:59)
==384039==    by 0x40738B: get_next_line (get_next_line.c:48)
==384039==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384039==    by 0x406277: main (mandatory.cpp:88)
==384039==  Address 0x4de5e91 is 1 bytes inside a block of size 2 free'd
==384039==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384039==    by 0x40760E: ft_strjoin (get_next_line_utils.c:82)
==384039==    by 0x40738B: get_next_line (get_next_line.c:48)
==384039==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384039==    by 0x406277: main (mandatory.cpp:88)
==384039==  Block was alloc'd at
==384039==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384039==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384039==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384039==    by 0x406277: main (mandatory.cpp:88)
==384039== 
==384039== Invalid read of size 1
==384039==    at 0x4075DB: ft_strjoin (get_next_line_utils.c:75)
==384039==    by 0x40738B: get_next_line (get_next_line.c:48)
==384039==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384039==    by 0x406277: main (mandatory.cpp:88)
==384039==  Address 0x4de5e91 is 1 bytes inside a block of size 2 free'd
==384039==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384039==    by 0x40760E: ft_strjoin (get_next_line_utils.c:82)
==384039==    by 0x40738B: get_next_line (get_next_line.c:48)
==384039==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384039==    by 0x406277: main (mandatory.cpp:88)
==384039==  Block was alloc'd at
==384039==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384039==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384039==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384039==    by 0x406277: main (mandatory.cpp:88)
==384039== 
==384039== Invalid free() / delete / delete[] / realloc()
==384039==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384039==    by 0x40760E: ft_strjoin (get_next_line_utils.c:82)
==384039==    by 0x40738B: get_next_line (get_next_line.c:48)
==384039==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384039==    by 0x406277: main (mandatory.cpp:88)
==384039==  Address 0x4de5e90 is 0 bytes inside a block of size 2 free'd
==384039==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384039==    by 0x40760E: ft_strjoin (get_next_line_utils.c:82)
==384039==    by 0x40738B: get_next_line (get_next_line.c:48)
==384039==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384039==    by 0x406277: main (mandatory.cpp:88)
==384039==  Block was alloc'd at
==384039==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384039==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384039==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384039==    by 0x406277: main (mandatory.cpp:88)
==384039== 
==384039== Invalid read of size 1
==384039==    at 0x407721: f_del_front_bn (get_next_line_utils.c:163)
==384039==    by 0x4073CD: get_next_line (get_next_line.c:52)
==384039==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384039==    by 0x406277: main (mandatory.cpp:88)
==384039==  Address 0x4de6e40 is 0 bytes inside a block of size 43 free'd
==384039==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384039==    by 0x4076FF: f_search_bn (get_next_line_utils.c:119)
==384039==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384039==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384039==    by 0x406277: main (mandatory.cpp:88)
==384039==  Block was alloc'd at
==384039==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384039==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==384039==    by 0x40738B: get_next_line (get_next_line.c:48)
==384039==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384039==    by 0x406277: main (mandatory.cpp:88)
==384039== 
==384039== Invalid free() / delete / delete[] / realloc()
==384039==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384039==    by 0x4073E0: get_next_line (get_next_line.c:53)
==384039==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384039==    by 0x406277: main (mandatory.cpp:88)
==384039==  Address 0x4de5e90 is 0 bytes inside a block of size 2 free'd
==384039==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384039==    by 0x40760E: ft_strjoin (get_next_line_utils.c:82)
==384039==    by 0x40738B: get_next_line (get_next_line.c:48)
==384039==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384039==    by 0x406277: main (mandatory.cpp:88)
==384039==  Block was alloc'd at
==384039==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384039==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384039==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384039==    by 0x406277: main (mandatory.cpp:88)
==384039== 
==384039== Invalid read of size 1
==384039==    at 0x4074E8: ft_strlen (get_next_line_utils.c:43)
==384039==    by 0x407515: ft_strjoin (get_next_line_utils.c:59)
==384039==    by 0x40738B: get_next_line (get_next_line.c:48)
==384039==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384039==    by 0x406289: main (mandatory.cpp:88)
==384039==  Address 0x4de6e6a is 42 bytes inside a block of size 43 free'd
==384039==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384039==    by 0x4076FF: f_search_bn (get_next_line_utils.c:119)
==384039==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384039==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384039==    by 0x406277: main (mandatory.cpp:88)
==384039==  Block was alloc'd at
==384039==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384039==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==384039==    by 0x40738B: get_next_line (get_next_line.c:48)
==384039==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384039==    by 0x406277: main (mandatory.cpp:88)
==384039== 
==384039== Invalid read of size 1
==384039==    at 0x40758F: ft_strjoin (get_next_line_utils.c:68)
==384039==    by 0x40738B: get_next_line (get_next_line.c:48)
==384039==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384039==    by 0x406289: main (mandatory.cpp:88)
==384039==  Address 0x4de6e6a is 42 bytes inside a block of size 43 free'd
==384039==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384039==    by 0x4076FF: f_search_bn (get_next_line_utils.c:119)
==384039==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384039==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384039==    by 0x406277: main (mandatory.cpp:88)
==384039==  Block was alloc'd at
==384039==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384039==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==384039==    by 0x40738B: get_next_line (get_next_line.c:48)
==384039==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384039==    by 0x406277: main (mandatory.cpp:88)
==384039== 
==384039== Invalid free() / delete / delete[] / realloc()
==384039==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384039==    by 0x407602: ft_strjoin (get_next_line_utils.c:81)
==384039==    by 0x40738B: get_next_line (get_next_line.c:48)
==384039==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384039==    by 0x406289: main (mandatory.cpp:88)
==384039==  Address 0x4de6e6a is 42 bytes inside a block of size 43 free'd
==384039==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384039==    by 0x4076FF: f_search_bn (get_next_line_utils.c:119)
==384039==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384039==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384039==    by 0x406277: main (mandatory.cpp:88)
==384039==  Block was alloc'd at
==384039==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384039==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==384039==    by 0x40738B: get_next_line (get_next_line.c:48)
==384039==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384039==    by 0x406277: main (mandatory.cpp:88)
==384039== 
==384039== Syscall param read(buf) points to unaddressable byte(s)
==384039==    at 0x4CB8992: read (read.c:26)
==384039==    by 0x40733B: get_next_line (get_next_line.c:37)
==384039==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384039==    by 0x406289: main (mandatory.cpp:88)
==384039==  Address 0x4de6f20 is 0 bytes inside a block of size 2 free'd
==384039==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384039==    by 0x40760E: ft_strjoin (get_next_line_utils.c:82)
==384039==    by 0x40738B: get_next_line (get_next_line.c:48)
==384039==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384039==    by 0x406289: main (mandatory.cpp:88)
==384039==  Block was alloc'd at
==384039==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384039==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384039==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384039==    by 0x406289: main (mandatory.cpp:88)
==384039== 
==384039== Invalid write of size 1
==384039==    at 0x40734C: get_next_line (get_next_line.c:38)
==384039==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384039==    by 0x406289: main (mandatory.cpp:88)
==384039==  Address 0x4de6f21 is 1 bytes inside a block of size 2 free'd
==384039==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384039==    by 0x40760E: ft_strjoin (get_next_line_utils.c:82)
==384039==    by 0x40738B: get_next_line (get_next_line.c:48)
==384039==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384039==    by 0x406289: main (mandatory.cpp:88)
==384039==  Block was alloc'd at
==384039==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384039==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384039==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384039==    by 0x406289: main (mandatory.cpp:88)
==384039== 
==384039== Invalid read of size 1
==384039==    at 0x4075DB: ft_strjoin (get_next_line_utils.c:75)
==384039==    by 0x40738B: get_next_line (get_next_line.c:48)
==384039==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384039==    by 0x406289: main (mandatory.cpp:88)
==384039==  Address 0x4de6f21 is 1 bytes inside a block of size 2 free'd
==384039==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384039==    by 0x40760E: ft_strjoin (get_next_line_utils.c:82)
==384039==    by 0x40738B: get_next_line (get_next_line.c:48)
==384039==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384039==    by 0x406289: main (mandatory.cpp:88)
==384039==  Block was alloc'd at
==384039==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384039==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384039==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384039==    by 0x406289: main (mandatory.cpp:88)
==384039== 
==384039== Invalid read of size 1
==384039==    at 0x407721: f_del_front_bn (get_next_line_utils.c:163)
==384039==    by 0x4073CD: get_next_line (get_next_line.c:52)
==384039==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384039==    by 0x406289: main (mandatory.cpp:88)
==384039==  Address 0x4de7ef0 is 0 bytes inside a block of size 44 free'd
==384039==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384039==    by 0x4076FF: f_search_bn (get_next_line_utils.c:119)
==384039==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384039==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384039==    by 0x406289: main (mandatory.cpp:88)
==384039==  Block was alloc'd at
==384039==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384039==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==384039==    by 0x40738B: get_next_line (get_next_line.c:48)
==384039==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384039==    by 0x406289: main (mandatory.cpp:88)
==384039== 
==384039== Invalid free() / delete / delete[] / realloc()
==384039==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384039==    by 0x4073E0: get_next_line (get_next_line.c:53)
==384039==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384039==    by 0x406289: main (mandatory.cpp:88)
==384039==  Address 0x4de6f20 is 0 bytes inside a block of size 2 free'd
==384039==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384039==    by 0x40760E: ft_strjoin (get_next_line_utils.c:82)
==384039==    by 0x40738B: get_next_line (get_next_line.c:48)
==384039==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384039==    by 0x406289: main (mandatory.cpp:88)
==384039==  Block was alloc'd at
==384039==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384039==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384039==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384039==    by 0x406289: main (mandatory.cpp:88)
==384039== 
==384039== Invalid read of size 1
==384039==    at 0x40758F: ft_strjoin (get_next_line_utils.c:68)
==384039==    by 0x40738B: get_next_line (get_next_line.c:48)
==384039==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384039==    by 0x40629B: main (mandatory.cpp:88)
==384039==  Address 0x4de7f1b is 43 bytes inside a block of size 44 free'd
==384039==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384039==    by 0x4076FF: f_search_bn (get_next_line_utils.c:119)
==384039==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384039==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384039==    by 0x406289: main (mandatory.cpp:88)
==384039==  Block was alloc'd at
==384039==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384039==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==384039==    by 0x40738B: get_next_line (get_next_line.c:48)
==384039==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384039==    by 0x406289: main (mandatory.cpp:88)
==384039== 
==384039== Syscall param read(buf) points to unaddressable byte(s)
==384039==    at 0x4CB8992: read (read.c:26)
==384039==    by 0x40733B: get_next_line (get_next_line.c:37)
==384039==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384039==    by 0x40629B: main (mandatory.cpp:88)
==384039==  Address 0x4de7fd0 is 0 bytes inside a block of size 2 free'd
==384039==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384039==    by 0x40760E: ft_strjoin (get_next_line_utils.c:82)
==384039==    by 0x40738B: get_next_line (get_next_line.c:48)
==384039==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384039==    by 0x40629B: main (mandatory.cpp:88)
==384039==  Block was alloc'd at
==384039==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384039==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384039==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384039==    by 0x40629B: main (mandatory.cpp:88)
==384039== 
==384039== Invalid write of size 1
==384039==    at 0x40734C: get_next_line (get_next_line.c:38)
==384039==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384039==    by 0x40629B: main (mandatory.cpp:88)
==384039==  Address 0x4de7fd1 is 1 bytes inside a block of size 2 free'd
==384039==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384039==    by 0x40760E: ft_strjoin (get_next_line_utils.c:82)
==384039==    by 0x40738B: get_next_line (get_next_line.c:48)
==384039==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384039==    by 0x40629B: main (mandatory.cpp:88)
==384039==  Block was alloc'd at
==384039==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384039==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384039==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384039==    by 0x40629B: main (mandatory.cpp:88)
==384039== 
==384039== Invalid read of size 1
==384039==    at 0x4075DB: ft_strjoin (get_next_line_utils.c:75)
==384039==    by 0x40738B: get_next_line (get_next_line.c:48)
==384039==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384039==    by 0x40629B: main (mandatory.cpp:88)
==384039==  Address 0x4de7fd1 is 1 bytes inside a block of size 2 free'd
==384039==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384039==    by 0x40760E: ft_strjoin (get_next_line_utils.c:82)
==384039==    by 0x40738B: get_next_line (get_next_line.c:48)
==384039==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384039==    by 0x40629B: main (mandatory.cpp:88)
==384039==  Block was alloc'd at
==384039==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384039==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384039==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384039==    by 0x40629B: main (mandatory.cpp:88)
==384039== 
==384039== Invalid read of size 1
==384039==    at 0x407721: f_del_front_bn (get_next_line_utils.c:163)
==384039==    by 0x4073CD: get_next_line (get_next_line.c:52)
==384039==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384039==    by 0x40629B: main (mandatory.cpp:88)
==384039==  Address 0x4de9010 is 0 bytes inside a block of size 45 free'd
==384039==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384039==    by 0x4076FF: f_search_bn (get_next_line_utils.c:119)
==384039==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384039==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384039==    by 0x40629B: main (mandatory.cpp:88)
==384039==  Block was alloc'd at
==384039==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384039==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==384039==    by 0x40738B: get_next_line (get_next_line.c:48)
==384039==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384039==    by 0x40629B: main (mandatory.cpp:88)
==384039== 
==384039== Invalid free() / delete / delete[] / realloc()
==384039==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384039==    by 0x4073E0: get_next_line (get_next_line.c:53)
==384039==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384039==    by 0x40629B: main (mandatory.cpp:88)
==384039==  Address 0x4de7fd0 is 0 bytes inside a block of size 2 free'd
==384039==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384039==    by 0x40760E: ft_strjoin (get_next_line_utils.c:82)
==384039==    by 0x40738B: get_next_line (get_next_line.c:48)
==384039==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384039==    by 0x40629B: main (mandatory.cpp:88)
==384039==  Block was alloc'd at
==384039==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384039==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384039==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384039==    by 0x40629B: main (mandatory.cpp:88)
==384039== 
==384039== Invalid read of size 1
==384039==    at 0x40758F: ft_strjoin (get_next_line_utils.c:68)
==384039==    by 0x40738B: get_next_line (get_next_line.c:48)
==384039==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384039==    by 0x4062AD: main (mandatory.cpp:88)
==384039==  Address 0x4de903c is 44 bytes inside a block of size 45 free'd
==384039==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384039==    by 0x4076FF: f_search_bn (get_next_line_utils.c:119)
==384039==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384039==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384039==    by 0x40629B: main (mandatory.cpp:88)
==384039==  Block was alloc'd at
==384039==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384039==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==384039==    by 0x40738B: get_next_line (get_next_line.c:48)
==384039==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384039==    by 0x40629B: main (mandatory.cpp:88)
==384039== 
==384039== Syscall param read(buf) points to unaddressable byte(s)
==384039==    at 0x4CB8992: read (read.c:26)
==384039==    by 0x40733B: get_next_line (get_next_line.c:37)
==384039==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384039==    by 0x4062AD: main (mandatory.cpp:88)
==384039==  Address 0x4de90f0 is 0 bytes inside a block of size 2 free'd
==384039==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384039==    by 0x40760E: ft_strjoin (get_next_line_utils.c:82)
==384039==    by 0x40738B: get_next_line (get_next_line.c:48)
==384039==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384039==    by 0x4062AD: main (mandatory.cpp:88)
==384039==  Block was alloc'd at
==384039==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384039==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384039==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384039==    by 0x4062AD: main (mandatory.cpp:88)
==384039== 
==384039== Invalid write of size 1
==384039==    at 0x40734C: get_next_line (get_next_line.c:38)
==384039==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384039==    by 0x4062AD: main (mandatory.cpp:88)
==384039==  Address 0x4de90f1 is 1 bytes inside a block of size 2 free'd
==384039==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384039==    by 0x40760E: ft_strjoin (get_next_line_utils.c:82)
==384039==    by 0x40738B: get_next_line (get_next_line.c:48)
==384039==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384039==    by 0x4062AD: main (mandatory.cpp:88)
==384039==  Block was alloc'd at
==384039==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384039==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384039==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384039==    by 0x4062AD: main (mandatory.cpp:88)
==384039== 
==384039== Invalid read of size 1
==384039==    at 0x4075DB: ft_strjoin (get_next_line_utils.c:75)
==384039==    by 0x40738B: get_next_line (get_next_line.c:48)
==384039==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384039==    by 0x4062AD: main (mandatory.cpp:88)
==384039==  Address 0x4de90f1 is 1 bytes inside a block of size 2 free'd
==384039==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384039==    by 0x40760E: ft_strjoin (get_next_line_utils.c:82)
==384039==    by 0x40738B: get_next_line (get_next_line.c:48)
==384039==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384039==    by 0x4062AD: main (mandatory.cpp:88)
==384039==  Block was alloc'd at
==384039==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384039==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384039==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384039==    by 0x4062AD: main (mandatory.cpp:88)
==384039== 
==384039== Invalid read of size 1
==384039==    at 0x407721: f_del_front_bn (get_next_line_utils.c:163)
==384039==    by 0x4073CD: get_next_line (get_next_line.c:52)
==384039==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384039==    by 0x4062AD: main (mandatory.cpp:88)
==384039==  Address 0x4dea0c0 is 0 bytes inside a block of size 44 free'd
==384039==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384039==    by 0x4076FF: f_search_bn (get_next_line_utils.c:119)
==384039==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384039==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384039==    by 0x4062AD: main (mandatory.cpp:88)
==384039==  Block was alloc'd at
==384039==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384039==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==384039==    by 0x40738B: get_next_line (get_next_line.c:48)
==384039==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384039==    by 0x4062AD: main (mandatory.cpp:88)
==384039== 
==384039== Invalid free() / delete / delete[] / realloc()
==384039==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384039==    by 0x4073E0: get_next_line (get_next_line.c:53)
==384039==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384039==    by 0x4062AD: main (mandatory.cpp:88)
==384039==  Address 0x4de90f0 is 0 bytes inside a block of size 2 free'd
==384039==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384039==    by 0x40760E: ft_strjoin (get_next_line_utils.c:82)
==384039==    by 0x40738B: get_next_line (get_next_line.c:48)
==384039==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384039==    by 0x4062AD: main (mandatory.cpp:88)
==384039==  Block was alloc'd at
==384039==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384039==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384039==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384039==    by 0x4062AD: main (mandatory.cpp:88)
==384039== 
==384039== Invalid read of size 1
==384039==    at 0x40758F: ft_strjoin (get_next_line_utils.c:68)
==384039==    by 0x40738B: get_next_line (get_next_line.c:48)
==384039==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384039==    by 0x4062BF: main (mandatory.cpp:88)
==384039==  Address 0x4dea0eb is 43 bytes inside a block of size 44 free'd
==384039==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384039==    by 0x4076FF: f_search_bn (get_next_line_utils.c:119)
==384039==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384039==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384039==    by 0x4062AD: main (mandatory.cpp:88)
==384039==  Block was alloc'd at
==384039==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384039==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==384039==    by 0x40738B: get_next_line (get_next_line.c:48)
==384039==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384039==    by 0x4062AD: main (mandatory.cpp:88)
==384039== 
==384039== Syscall param read(buf) points to unaddressable byte(s)
==384039==    at 0x4CB8992: read (read.c:26)
==384039==    by 0x40733B: get_next_line (get_next_line.c:37)
==384039==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384039==    by 0x4062BF: main (mandatory.cpp:88)
==384039==  Address 0x4dea1a0 is 0 bytes inside a block of size 2 free'd
==384039==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384039==    by 0x40760E: ft_strjoin (get_next_line_utils.c:82)
==384039==    by 0x40738B: get_next_line (get_next_line.c:48)
==384039==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384039==    by 0x4062BF: main (mandatory.cpp:88)
==384039==  Block was alloc'd at
==384039==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384039==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384039==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384039==    by 0x4062BF: main (mandatory.cpp:88)
==384039== 
==384039== Invalid write of size 1
==384039==    at 0x40734C: get_next_line (get_next_line.c:38)
==384039==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384039==    by 0x4062BF: main (mandatory.cpp:88)
==384039==  Address 0x4dea1a1 is 1 bytes inside a block of size 2 free'd
==384039==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384039==    by 0x40760E: ft_strjoin (get_next_line_utils.c:82)
==384039==    by 0x40738B: get_next_line (get_next_line.c:48)
==384039==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384039==    by 0x4062BF: main (mandatory.cpp:88)
==384039==  Block was alloc'd at
==384039==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384039==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384039==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384039==    by 0x4062BF: main (mandatory.cpp:88)
==384039== 
==384039== Invalid read of size 1
==384039==    at 0x4075DB: ft_strjoin (get_next_line_utils.c:75)
==384039==    by 0x40738B: get_next_line (get_next_line.c:48)
==384039==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384039==    by 0x4062BF: main (mandatory.cpp:88)
==384039==  Address 0x4dea1a1 is 1 bytes inside a block of size 2 free'd
==384039==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384039==    by 0x40760E: ft_strjoin (get_next_line_utils.c:82)
==384039==    by 0x40738B: get_next_line (get_next_line.c:48)
==384039==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384039==    by 0x4062BF: main (mandatory.cpp:88)
==384039==  Block was alloc'd at
==384039==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384039==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384039==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384039==    by 0x4062BF: main (mandatory.cpp:88)
==384039== 
==384039== Invalid read of size 1
==384039==    at 0x484FBD4: strcmp (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384039==    by 0x402D0A: gnl(int, char const*) (gnl.cpp:24)
==384039==    by 0x4062BF: main (mandatory.cpp:88)
==384039==  Address 0x0 is not stack'd, malloc'd or (recently) free'd
==384039== 
==384042== Syscall param read(buf) points to unaddressable byte(s)
==384042==    at 0x4CB8992: read (read.c:26)
==384042==    by 0x40733B: get_next_line (get_next_line.c:37)
==384042==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384042==    by 0x4064EB: main (mandatory.cpp:97)
==384042==  Address 0x4de61c0 is 0 bytes inside a block of size 2 free'd
==384042==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384042==    by 0x40760E: ft_strjoin (get_next_line_utils.c:82)
==384042==    by 0x40738B: get_next_line (get_next_line.c:48)
==384042==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384042==    by 0x4064EB: main (mandatory.cpp:97)
==384042==  Block was alloc'd at
==384042==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384042==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384042==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384042==    by 0x4064EB: main (mandatory.cpp:97)
==384042== 
==384042== Invalid write of size 1
==384042==    at 0x40734C: get_next_line (get_next_line.c:38)
==384042==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384042==    by 0x4064EB: main (mandatory.cpp:97)
==384042==  Address 0x4de61c1 is 1 bytes inside a block of size 2 free'd
==384042==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384042==    by 0x40760E: ft_strjoin (get_next_line_utils.c:82)
==384042==    by 0x40738B: get_next_line (get_next_line.c:48)
==384042==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384042==    by 0x4064EB: main (mandatory.cpp:97)
==384042==  Block was alloc'd at
==384042==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384042==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384042==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384042==    by 0x4064EB: main (mandatory.cpp:97)
==384042== 
==384042== Invalid read of size 1
==384042==    at 0x4074E8: ft_strlen (get_next_line_utils.c:43)
==384042==    by 0x407523: ft_strjoin (get_next_line_utils.c:59)
==384042==    by 0x40738B: get_next_line (get_next_line.c:48)
==384042==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384042==    by 0x4064EB: main (mandatory.cpp:97)
==384042==  Address 0x4de61c1 is 1 bytes inside a block of size 2 free'd
==384042==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384042==    by 0x40760E: ft_strjoin (get_next_line_utils.c:82)
==384042==    by 0x40738B: get_next_line (get_next_line.c:48)
==384042==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384042==    by 0x4064EB: main (mandatory.cpp:97)
==384042==  Block was alloc'd at
==384042==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384042==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384042==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384042==    by 0x4064EB: main (mandatory.cpp:97)
==384042== 
==384042== Invalid read of size 1
==384042==    at 0x4075DB: ft_strjoin (get_next_line_utils.c:75)
==384042==    by 0x40738B: get_next_line (get_next_line.c:48)
==384042==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384042==    by 0x4064EB: main (mandatory.cpp:97)
==384042==  Address 0x4de61c1 is 1 bytes inside a block of size 2 free'd
==384042==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384042==    by 0x40760E: ft_strjoin (get_next_line_utils.c:82)
==384042==    by 0x40738B: get_next_line (get_next_line.c:48)
==384042==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384042==    by 0x4064EB: main (mandatory.cpp:97)
==384042==  Block was alloc'd at
==384042==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384042==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384042==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384042==    by 0x4064EB: main (mandatory.cpp:97)
==384042== 
==384042== Invalid free() / delete / delete[] / realloc()
==384042==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384042==    by 0x40760E: ft_strjoin (get_next_line_utils.c:82)
==384042==    by 0x40738B: get_next_line (get_next_line.c:48)
==384042==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384042==    by 0x4064EB: main (mandatory.cpp:97)
==384042==  Address 0x4de61c0 is 0 bytes inside a block of size 2 free'd
==384042==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384042==    by 0x40760E: ft_strjoin (get_next_line_utils.c:82)
==384042==    by 0x40738B: get_next_line (get_next_line.c:48)
==384042==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384042==    by 0x4064EB: main (mandatory.cpp:97)
==384042==  Block was alloc'd at
==384042==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384042==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384042==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384042==    by 0x4064EB: main (mandatory.cpp:97)
==384042== 
==384042== Invalid read of size 1
==384042==    at 0x407721: f_del_front_bn (get_next_line_utils.c:163)
==384042==    by 0x4073CD: get_next_line (get_next_line.c:52)
==384042==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384042==    by 0x4064EB: main (mandatory.cpp:97)
==384042==  Address 0x4de7100 is 0 bytes inside a block of size 42 free'd
==384042==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384042==    by 0x4076FF: f_search_bn (get_next_line_utils.c:119)
==384042==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384042==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384042==    by 0x4064EB: main (mandatory.cpp:97)
==384042==  Block was alloc'd at
==384042==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384042==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==384042==    by 0x40738B: get_next_line (get_next_line.c:48)
==384042==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384042==    by 0x4064EB: main (mandatory.cpp:97)
==384042== 
==384042== Invalid free() / delete / delete[] / realloc()
==384042==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384042==    by 0x4073E0: get_next_line (get_next_line.c:53)
==384042==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384042==    by 0x4064EB: main (mandatory.cpp:97)
==384042==  Address 0x4de61c0 is 0 bytes inside a block of size 2 free'd
==384042==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384042==    by 0x40760E: ft_strjoin (get_next_line_utils.c:82)
==384042==    by 0x40738B: get_next_line (get_next_line.c:48)
==384042==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384042==    by 0x4064EB: main (mandatory.cpp:97)
==384042==  Block was alloc'd at
==384042==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384042==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384042==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384042==    by 0x4064EB: main (mandatory.cpp:97)
==384042== 
==384042== Invalid read of size 1
==384042==    at 0x4074E8: ft_strlen (get_next_line_utils.c:43)
==384042==    by 0x407515: ft_strjoin (get_next_line_utils.c:59)
==384042==    by 0x40738B: get_next_line (get_next_line.c:48)
==384042==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384042==    by 0x4064FD: main (mandatory.cpp:97)
==384042==  Address 0x4de7129 is 41 bytes inside a block of size 42 free'd
==384042==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384042==    by 0x4076FF: f_search_bn (get_next_line_utils.c:119)
==384042==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384042==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384042==    by 0x4064EB: main (mandatory.cpp:97)
==384042==  Block was alloc'd at
==384042==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384042==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==384042==    by 0x40738B: get_next_line (get_next_line.c:48)
==384042==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384042==    by 0x4064EB: main (mandatory.cpp:97)
==384042== 
==384042== Invalid read of size 1
==384042==    at 0x40758F: ft_strjoin (get_next_line_utils.c:68)
==384042==    by 0x40738B: get_next_line (get_next_line.c:48)
==384042==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384042==    by 0x4064FD: main (mandatory.cpp:97)
==384042==  Address 0x4de7129 is 41 bytes inside a block of size 42 free'd
==384042==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384042==    by 0x4076FF: f_search_bn (get_next_line_utils.c:119)
==384042==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384042==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384042==    by 0x4064EB: main (mandatory.cpp:97)
==384042==  Block was alloc'd at
==384042==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384042==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==384042==    by 0x40738B: get_next_line (get_next_line.c:48)
==384042==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384042==    by 0x4064EB: main (mandatory.cpp:97)
==384042== 
==384042== Invalid free() / delete / delete[] / realloc()
==384042==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384042==    by 0x407602: ft_strjoin (get_next_line_utils.c:81)
==384042==    by 0x40738B: get_next_line (get_next_line.c:48)
==384042==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384042==    by 0x4064FD: main (mandatory.cpp:97)
==384042==  Address 0x4de7129 is 41 bytes inside a block of size 42 free'd
==384042==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384042==    by 0x4076FF: f_search_bn (get_next_line_utils.c:119)
==384042==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384042==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384042==    by 0x4064EB: main (mandatory.cpp:97)
==384042==  Block was alloc'd at
==384042==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384042==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==384042==    by 0x40738B: get_next_line (get_next_line.c:48)
==384042==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384042==    by 0x4064EB: main (mandatory.cpp:97)
==384042== 
==384042== Syscall param read(buf) points to unaddressable byte(s)
==384042==    at 0x4CB8992: read (read.c:26)
==384042==    by 0x40733B: get_next_line (get_next_line.c:37)
==384042==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384042==    by 0x4064FD: main (mandatory.cpp:97)
==384042==  Address 0x4de71e0 is 0 bytes inside a block of size 2 free'd
==384042==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384042==    by 0x40760E: ft_strjoin (get_next_line_utils.c:82)
==384042==    by 0x40738B: get_next_line (get_next_line.c:48)
==384042==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384042==    by 0x4064FD: main (mandatory.cpp:97)
==384042==  Block was alloc'd at
==384042==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384042==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384042==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384042==    by 0x4064FD: main (mandatory.cpp:97)
==384042== 
==384042== Invalid write of size 1
==384042==    at 0x40734C: get_next_line (get_next_line.c:38)
==384042==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384042==    by 0x4064FD: main (mandatory.cpp:97)
==384042==  Address 0x4de71e1 is 1 bytes inside a block of size 2 free'd
==384042==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384042==    by 0x40760E: ft_strjoin (get_next_line_utils.c:82)
==384042==    by 0x40738B: get_next_line (get_next_line.c:48)
==384042==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384042==    by 0x4064FD: main (mandatory.cpp:97)
==384042==  Block was alloc'd at
==384042==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384042==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384042==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384042==    by 0x4064FD: main (mandatory.cpp:97)
==384042== 
==384042== Invalid read of size 1
==384042==    at 0x4075DB: ft_strjoin (get_next_line_utils.c:75)
==384042==    by 0x40738B: get_next_line (get_next_line.c:48)
==384042==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384042==    by 0x4064FD: main (mandatory.cpp:97)
==384042==  Address 0x4de71e1 is 1 bytes inside a block of size 2 free'd
==384042==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384042==    by 0x40760E: ft_strjoin (get_next_line_utils.c:82)
==384042==    by 0x40738B: get_next_line (get_next_line.c:48)
==384042==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384042==    by 0x4064FD: main (mandatory.cpp:97)
==384042==  Block was alloc'd at
==384042==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384042==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384042==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384042==    by 0x4064FD: main (mandatory.cpp:97)
==384042== 
==384042== Invalid read of size 1
==384042==    at 0x407721: f_del_front_bn (get_next_line_utils.c:163)
==384042==    by 0x4073CD: get_next_line (get_next_line.c:52)
==384042==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384042==    by 0x4064FD: main (mandatory.cpp:97)
==384042==  Address 0x4de8140 is 0 bytes inside a block of size 43 free'd
==384042==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384042==    by 0x4076FF: f_search_bn (get_next_line_utils.c:119)
==384042==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384042==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384042==    by 0x4064FD: main (mandatory.cpp:97)
==384042==  Block was alloc'd at
==384042==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384042==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==384042==    by 0x40738B: get_next_line (get_next_line.c:48)
==384042==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384042==    by 0x4064FD: main (mandatory.cpp:97)
==384042== 
==384042== Invalid free() / delete / delete[] / realloc()
==384042==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384042==    by 0x4073E0: get_next_line (get_next_line.c:53)
==384042==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384042==    by 0x4064FD: main (mandatory.cpp:97)
==384042==  Address 0x4de71e0 is 0 bytes inside a block of size 2 free'd
==384042==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384042==    by 0x40760E: ft_strjoin (get_next_line_utils.c:82)
==384042==    by 0x40738B: get_next_line (get_next_line.c:48)
==384042==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384042==    by 0x4064FD: main (mandatory.cpp:97)
==384042==  Block was alloc'd at
==384042==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384042==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384042==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384042==    by 0x4064FD: main (mandatory.cpp:97)
==384042== 
==384042== Invalid read of size 1
==384042==    at 0x40758F: ft_strjoin (get_next_line_utils.c:68)
==384042==    by 0x40738B: get_next_line (get_next_line.c:48)
==384042==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384042==    by 0x40650F: main (mandatory.cpp:97)
==384042==  Address 0x4de816a is 42 bytes inside a block of size 43 free'd
==384042==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384042==    by 0x4076FF: f_search_bn (get_next_line_utils.c:119)
==384042==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384042==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384042==    by 0x4064FD: main (mandatory.cpp:97)
==384042==  Block was alloc'd at
==384042==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384042==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==384042==    by 0x40738B: get_next_line (get_next_line.c:48)
==384042==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384042==    by 0x4064FD: main (mandatory.cpp:97)
==384042== 
==384042== Syscall param read(buf) points to unaddressable byte(s)
==384042==    at 0x4CB8992: read (read.c:26)
==384042==    by 0x40733B: get_next_line (get_next_line.c:37)
==384042==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384042==    by 0x40650F: main (mandatory.cpp:97)
==384042==  Address 0x4de8220 is 0 bytes inside a block of size 2 free'd
==384042==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384042==    by 0x40760E: ft_strjoin (get_next_line_utils.c:82)
==384042==    by 0x40738B: get_next_line (get_next_line.c:48)
==384042==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384042==    by 0x40650F: main (mandatory.cpp:97)
==384042==  Block was alloc'd at
==384042==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384042==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384042==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384042==    by 0x40650F: main (mandatory.cpp:97)
==384042== 
==384042== Invalid write of size 1
==384042==    at 0x40734C: get_next_line (get_next_line.c:38)
==384042==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384042==    by 0x40650F: main (mandatory.cpp:97)
==384042==  Address 0x4de8221 is 1 bytes inside a block of size 2 free'd
==384042==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384042==    by 0x40760E: ft_strjoin (get_next_line_utils.c:82)
==384042==    by 0x40738B: get_next_line (get_next_line.c:48)
==384042==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384042==    by 0x40650F: main (mandatory.cpp:97)
==384042==  Block was alloc'd at
==384042==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384042==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384042==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384042==    by 0x40650F: main (mandatory.cpp:97)
==384042== 
==384042== Invalid read of size 1
==384042==    at 0x4075DB: ft_strjoin (get_next_line_utils.c:75)
==384042==    by 0x40738B: get_next_line (get_next_line.c:48)
==384042==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384042==    by 0x40650F: main (mandatory.cpp:97)
==384042==  Address 0x4de8221 is 1 bytes inside a block of size 2 free'd
==384042==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384042==    by 0x40760E: ft_strjoin (get_next_line_utils.c:82)
==384042==    by 0x40738B: get_next_line (get_next_line.c:48)
==384042==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384042==    by 0x40650F: main (mandatory.cpp:97)
==384042==  Block was alloc'd at
==384042==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384042==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384042==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384042==    by 0x40650F: main (mandatory.cpp:97)
==384042== 
==384042== Invalid read of size 1
==384042==    at 0x407721: f_del_front_bn (get_next_line_utils.c:163)
==384042==    by 0x4073CD: get_next_line (get_next_line.c:52)
==384042==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384042==    by 0x40650F: main (mandatory.cpp:97)
==384042==  Address 0x4de91f0 is 0 bytes inside a block of size 44 free'd
==384042==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384042==    by 0x4076FF: f_search_bn (get_next_line_utils.c:119)
==384042==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384042==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384042==    by 0x40650F: main (mandatory.cpp:97)
==384042==  Block was alloc'd at
==384042==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384042==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==384042==    by 0x40738B: get_next_line (get_next_line.c:48)
==384042==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384042==    by 0x40650F: main (mandatory.cpp:97)
==384042== 
==384042== Invalid free() / delete / delete[] / realloc()
==384042==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384042==    by 0x4073E0: get_next_line (get_next_line.c:53)
==384042==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384042==    by 0x40650F: main (mandatory.cpp:97)
==384042==  Address 0x4de8220 is 0 bytes inside a block of size 2 free'd
==384042==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384042==    by 0x40760E: ft_strjoin (get_next_line_utils.c:82)
==384042==    by 0x40738B: get_next_line (get_next_line.c:48)
==384042==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384042==    by 0x40650F: main (mandatory.cpp:97)
==384042==  Block was alloc'd at
==384042==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384042==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384042==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384042==    by 0x40650F: main (mandatory.cpp:97)
==384042== 
==384042== Invalid read of size 1
==384042==    at 0x40758F: ft_strjoin (get_next_line_utils.c:68)
==384042==    by 0x40738B: get_next_line (get_next_line.c:48)
==384042==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384042==    by 0x406521: main (mandatory.cpp:97)
==384042==  Address 0x4de921b is 43 bytes inside a block of size 44 free'd
==384042==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384042==    by 0x4076FF: f_search_bn (get_next_line_utils.c:119)
==384042==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384042==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384042==    by 0x40650F: main (mandatory.cpp:97)
==384042==  Block was alloc'd at
==384042==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384042==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==384042==    by 0x40738B: get_next_line (get_next_line.c:48)
==384042==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384042==    by 0x40650F: main (mandatory.cpp:97)
==384042== 
==384042== Syscall param read(buf) points to unaddressable byte(s)
==384042==    at 0x4CB8992: read (read.c:26)
==384042==    by 0x40733B: get_next_line (get_next_line.c:37)
==384042==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384042==    by 0x406521: main (mandatory.cpp:97)
==384042==  Address 0x4de92d0 is 0 bytes inside a block of size 2 free'd
==384042==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384042==    by 0x40760E: ft_strjoin (get_next_line_utils.c:82)
==384042==    by 0x40738B: get_next_line (get_next_line.c:48)
==384042==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384042==    by 0x406521: main (mandatory.cpp:97)
==384042==  Block was alloc'd at
==384042==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384042==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384042==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384042==    by 0x406521: main (mandatory.cpp:97)
==384042== 
==384042== Invalid write of size 1
==384042==    at 0x40734C: get_next_line (get_next_line.c:38)
==384042==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384042==    by 0x406521: main (mandatory.cpp:97)
==384042==  Address 0x4de92d1 is 1 bytes inside a block of size 2 free'd
==384042==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384042==    by 0x40760E: ft_strjoin (get_next_line_utils.c:82)
==384042==    by 0x40738B: get_next_line (get_next_line.c:48)
==384042==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384042==    by 0x406521: main (mandatory.cpp:97)
==384042==  Block was alloc'd at
==384042==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384042==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384042==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384042==    by 0x406521: main (mandatory.cpp:97)
==384042== 
==384042== Invalid read of size 1
==384042==    at 0x4075DB: ft_strjoin (get_next_line_utils.c:75)
==384042==    by 0x40738B: get_next_line (get_next_line.c:48)
==384042==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384042==    by 0x406521: main (mandatory.cpp:97)
==384042==  Address 0x4de92d1 is 1 bytes inside a block of size 2 free'd
==384042==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384042==    by 0x40760E: ft_strjoin (get_next_line_utils.c:82)
==384042==    by 0x40738B: get_next_line (get_next_line.c:48)
==384042==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384042==    by 0x406521: main (mandatory.cpp:97)
==384042==  Block was alloc'd at
==384042==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384042==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384042==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384042==    by 0x406521: main (mandatory.cpp:97)
==384042== 
==384042== Invalid read of size 1
==384042==    at 0x407721: f_del_front_bn (get_next_line_utils.c:163)
==384042==    by 0x4073CD: get_next_line (get_next_line.c:52)
==384042==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384042==    by 0x406521: main (mandatory.cpp:97)
==384042==  Address 0x4dea230 is 0 bytes inside a block of size 43 free'd
==384042==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384042==    by 0x4076FF: f_search_bn (get_next_line_utils.c:119)
==384042==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384042==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384042==    by 0x406521: main (mandatory.cpp:97)
==384042==  Block was alloc'd at
==384042==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384042==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==384042==    by 0x40738B: get_next_line (get_next_line.c:48)
==384042==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384042==    by 0x406521: main (mandatory.cpp:97)
==384042== 
==384042== Invalid free() / delete / delete[] / realloc()
==384042==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384042==    by 0x4073E0: get_next_line (get_next_line.c:53)
==384042==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384042==    by 0x406521: main (mandatory.cpp:97)
==384042==  Address 0x4de92d0 is 0 bytes inside a block of size 2 free'd
==384042==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384042==    by 0x40760E: ft_strjoin (get_next_line_utils.c:82)
==384042==    by 0x40738B: get_next_line (get_next_line.c:48)
==384042==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384042==    by 0x406521: main (mandatory.cpp:97)
==384042==  Block was alloc'd at
==384042==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384042==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384042==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384042==    by 0x406521: main (mandatory.cpp:97)
==384042== 
==384042== Invalid read of size 1
==384042==    at 0x40758F: ft_strjoin (get_next_line_utils.c:68)
==384042==    by 0x40738B: get_next_line (get_next_line.c:48)
==384042==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384042==    by 0x406533: main (mandatory.cpp:97)
==384042==  Address 0x4dea25a is 42 bytes inside a block of size 43 free'd
==384042==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384042==    by 0x4076FF: f_search_bn (get_next_line_utils.c:119)
==384042==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384042==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384042==    by 0x406521: main (mandatory.cpp:97)
==384042==  Block was alloc'd at
==384042==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384042==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==384042==    by 0x40738B: get_next_line (get_next_line.c:48)
==384042==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384042==    by 0x406521: main (mandatory.cpp:97)
==384042== 
==384042== Syscall param read(buf) points to unaddressable byte(s)
==384042==    at 0x4CB8992: read (read.c:26)
==384042==    by 0x40733B: get_next_line (get_next_line.c:37)
==384042==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384042==    by 0x406533: main (mandatory.cpp:97)
==384042==  Address 0x4dea310 is 0 bytes inside a block of size 2 free'd
==384042==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384042==    by 0x40760E: ft_strjoin (get_next_line_utils.c:82)
==384042==    by 0x40738B: get_next_line (get_next_line.c:48)
==384042==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384042==    by 0x406533: main (mandatory.cpp:97)
==384042==  Block was alloc'd at
==384042==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384042==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384042==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384042==    by 0x406533: main (mandatory.cpp:97)
==384042== 
==384042== Invalid write of size 1
==384042==    at 0x40734C: get_next_line (get_next_line.c:38)
==384042==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384042==    by 0x406533: main (mandatory.cpp:97)
==384042==  Address 0x4dea311 is 1 bytes inside a block of size 2 free'd
==384042==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384042==    by 0x40760E: ft_strjoin (get_next_line_utils.c:82)
==384042==    by 0x40738B: get_next_line (get_next_line.c:48)
==384042==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384042==    by 0x406533: main (mandatory.cpp:97)
==384042==  Block was alloc'd at
==384042==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384042==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384042==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384042==    by 0x406533: main (mandatory.cpp:97)
==384042== 
==384042== Invalid read of size 1
==384042==    at 0x4075DB: ft_strjoin (get_next_line_utils.c:75)
==384042==    by 0x40738B: get_next_line (get_next_line.c:48)
==384042==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384042==    by 0x406533: main (mandatory.cpp:97)
==384042==  Address 0x4dea311 is 1 bytes inside a block of size 2 free'd
==384042==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384042==    by 0x40760E: ft_strjoin (get_next_line_utils.c:82)
==384042==    by 0x40738B: get_next_line (get_next_line.c:48)
==384042==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384042==    by 0x406533: main (mandatory.cpp:97)
==384042==  Block was alloc'd at
==384042==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384042==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384042==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384042==    by 0x406533: main (mandatory.cpp:97)
==384042== 
==384042== Invalid read of size 1
==384042==    at 0x407721: f_del_front_bn (get_next_line_utils.c:163)
==384042==    by 0x4073CD: get_next_line (get_next_line.c:52)
==384042==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384042==    by 0x406533: main (mandatory.cpp:97)
==384042==  Address 0x4deb200 is 0 bytes inside a block of size 42 free'd
==384042==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384042==    by 0x4076FF: f_search_bn (get_next_line_utils.c:119)
==384042==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384042==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384042==    by 0x406533: main (mandatory.cpp:97)
==384042==  Block was alloc'd at
==384042==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384042==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==384042==    by 0x40738B: get_next_line (get_next_line.c:48)
==384042==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384042==    by 0x406533: main (mandatory.cpp:97)
==384042== 
==384042== Invalid free() / delete / delete[] / realloc()
==384042==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384042==    by 0x4073E0: get_next_line (get_next_line.c:53)
==384042==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384042==    by 0x406533: main (mandatory.cpp:97)
==384042==  Address 0x4dea310 is 0 bytes inside a block of size 2 free'd
==384042==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384042==    by 0x40760E: ft_strjoin (get_next_line_utils.c:82)
==384042==    by 0x40738B: get_next_line (get_next_line.c:48)
==384042==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384042==    by 0x406533: main (mandatory.cpp:97)
==384042==  Block was alloc'd at
==384042==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384042==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384042==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384042==    by 0x406533: main (mandatory.cpp:97)
==384042== 
==384042== Invalid read of size 1
==384042==    at 0x40758F: ft_strjoin (get_next_line_utils.c:68)
==384042==    by 0x40738B: get_next_line (get_next_line.c:48)
==384042==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384042==    by 0x40653F: main (mandatory.cpp:97)
==384042==  Address 0x4deb229 is 41 bytes inside a block of size 42 free'd
==384042==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384042==    by 0x4076FF: f_search_bn (get_next_line_utils.c:119)
==384042==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384042==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384042==    by 0x406533: main (mandatory.cpp:97)
==384042==  Block was alloc'd at
==384042==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384042==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==384042==    by 0x40738B: get_next_line (get_next_line.c:48)
==384042==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384042==    by 0x406533: main (mandatory.cpp:97)
==384042== 
==384043== Syscall param read(buf) points to unaddressable byte(s)
==384043==    at 0x4CB8992: read (read.c:26)
==384043==    by 0x40733B: get_next_line (get_next_line.c:37)
==384043==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384043==    by 0x40675F: main (mandatory.cpp:106)
==384043==  Address 0x4de64f0 is 0 bytes inside a block of size 2 free'd
==384043==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384043==    by 0x40760E: ft_strjoin (get_next_line_utils.c:82)
==384043==    by 0x40738B: get_next_line (get_next_line.c:48)
==384043==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384043==    by 0x40675F: main (mandatory.cpp:106)
==384043==  Block was alloc'd at
==384043==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384043==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384043==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384043==    by 0x40675F: main (mandatory.cpp:106)
==384043== 
==384043== Invalid write of size 1
==384043==    at 0x40734C: get_next_line (get_next_line.c:38)
==384043==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384043==    by 0x40675F: main (mandatory.cpp:106)
==384043==  Address 0x4de64f1 is 1 bytes inside a block of size 2 free'd
==384043==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384043==    by 0x40760E: ft_strjoin (get_next_line_utils.c:82)
==384043==    by 0x40738B: get_next_line (get_next_line.c:48)
==384043==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384043==    by 0x40675F: main (mandatory.cpp:106)
==384043==  Block was alloc'd at
==384043==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384043==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384043==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384043==    by 0x40675F: main (mandatory.cpp:106)
==384043== 
==384043== Invalid read of size 1
==384043==    at 0x4074E8: ft_strlen (get_next_line_utils.c:43)
==384043==    by 0x407523: ft_strjoin (get_next_line_utils.c:59)
==384043==    by 0x40738B: get_next_line (get_next_line.c:48)
==384043==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384043==    by 0x40675F: main (mandatory.cpp:106)
==384043==  Address 0x4de64f1 is 1 bytes inside a block of size 2 free'd
==384043==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384043==    by 0x40760E: ft_strjoin (get_next_line_utils.c:82)
==384043==    by 0x40738B: get_next_line (get_next_line.c:48)
==384043==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384043==    by 0x40675F: main (mandatory.cpp:106)
==384043==  Block was alloc'd at
==384043==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384043==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384043==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384043==    by 0x40675F: main (mandatory.cpp:106)
==384043== 
==384043== Invalid read of size 1
==384043==    at 0x4075DB: ft_strjoin (get_next_line_utils.c:75)
==384043==    by 0x40738B: get_next_line (get_next_line.c:48)
==384043==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384043==    by 0x40675F: main (mandatory.cpp:106)
==384043==  Address 0x4de64f1 is 1 bytes inside a block of size 2 free'd
==384043==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384043==    by 0x40760E: ft_strjoin (get_next_line_utils.c:82)
==384043==    by 0x40738B: get_next_line (get_next_line.c:48)
==384043==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384043==    by 0x40675F: main (mandatory.cpp:106)
==384043==  Block was alloc'd at
==384043==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384043==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384043==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384043==    by 0x40675F: main (mandatory.cpp:106)
==384043== 
==384043== Invalid free() / delete / delete[] / realloc()
==384043==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384043==    by 0x40760E: ft_strjoin (get_next_line_utils.c:82)
==384043==    by 0x40738B: get_next_line (get_next_line.c:48)
==384043==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384043==    by 0x40675F: main (mandatory.cpp:106)
==384043==  Address 0x4de64f0 is 0 bytes inside a block of size 2 free'd
==384043==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384043==    by 0x40760E: ft_strjoin (get_next_line_utils.c:82)
==384043==    by 0x40738B: get_next_line (get_next_line.c:48)
==384043==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384043==    by 0x40675F: main (mandatory.cpp:106)
==384043==  Block was alloc'd at
==384043==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384043==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384043==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384043==    by 0x40675F: main (mandatory.cpp:106)
==384043== 
==384043== Invalid read of size 1
==384043==    at 0x407721: f_del_front_bn (get_next_line_utils.c:163)
==384043==    by 0x4073CD: get_next_line (get_next_line.c:52)
==384043==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384043==    by 0x40675F: main (mandatory.cpp:106)
==384043==  Address 0x4de74a0 is 0 bytes inside a block of size 43 free'd
==384043==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384043==    by 0x4076FF: f_search_bn (get_next_line_utils.c:119)
==384043==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384043==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384043==    by 0x40675F: main (mandatory.cpp:106)
==384043==  Block was alloc'd at
==384043==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384043==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==384043==    by 0x40738B: get_next_line (get_next_line.c:48)
==384043==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384043==    by 0x40675F: main (mandatory.cpp:106)
==384043== 
==384043== Invalid free() / delete / delete[] / realloc()
==384043==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384043==    by 0x4073E0: get_next_line (get_next_line.c:53)
==384043==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384043==    by 0x40675F: main (mandatory.cpp:106)
==384043==  Address 0x4de64f0 is 0 bytes inside a block of size 2 free'd
==384043==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384043==    by 0x40760E: ft_strjoin (get_next_line_utils.c:82)
==384043==    by 0x40738B: get_next_line (get_next_line.c:48)
==384043==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384043==    by 0x40675F: main (mandatory.cpp:106)
==384043==  Block was alloc'd at
==384043==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384043==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384043==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384043==    by 0x40675F: main (mandatory.cpp:106)
==384043== 
==384043== Invalid read of size 1
==384043==    at 0x4074E8: ft_strlen (get_next_line_utils.c:43)
==384043==    by 0x407515: ft_strjoin (get_next_line_utils.c:59)
==384043==    by 0x40738B: get_next_line (get_next_line.c:48)
==384043==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384043==    by 0x406771: main (mandatory.cpp:106)
==384043==  Address 0x4de74ca is 42 bytes inside a block of size 43 free'd
==384043==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384043==    by 0x4076FF: f_search_bn (get_next_line_utils.c:119)
==384043==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384043==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384043==    by 0x40675F: main (mandatory.cpp:106)
==384043==  Block was alloc'd at
==384043==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384043==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==384043==    by 0x40738B: get_next_line (get_next_line.c:48)
==384043==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384043==    by 0x40675F: main (mandatory.cpp:106)
==384043== 
==384043== Invalid read of size 1
==384043==    at 0x40758F: ft_strjoin (get_next_line_utils.c:68)
==384043==    by 0x40738B: get_next_line (get_next_line.c:48)
==384043==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384043==    by 0x406771: main (mandatory.cpp:106)
==384043==  Address 0x4de74ca is 42 bytes inside a block of size 43 free'd
==384043==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384043==    by 0x4076FF: f_search_bn (get_next_line_utils.c:119)
==384043==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384043==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384043==    by 0x40675F: main (mandatory.cpp:106)
==384043==  Block was alloc'd at
==384043==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384043==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==384043==    by 0x40738B: get_next_line (get_next_line.c:48)
==384043==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384043==    by 0x40675F: main (mandatory.cpp:106)
==384043== 
==384043== Invalid free() / delete / delete[] / realloc()
==384043==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384043==    by 0x407602: ft_strjoin (get_next_line_utils.c:81)
==384043==    by 0x40738B: get_next_line (get_next_line.c:48)
==384043==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384043==    by 0x406771: main (mandatory.cpp:106)
==384043==  Address 0x4de74ca is 42 bytes inside a block of size 43 free'd
==384043==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384043==    by 0x4076FF: f_search_bn (get_next_line_utils.c:119)
==384043==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384043==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384043==    by 0x40675F: main (mandatory.cpp:106)
==384043==  Block was alloc'd at
==384043==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384043==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==384043==    by 0x40738B: get_next_line (get_next_line.c:48)
==384043==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384043==    by 0x40675F: main (mandatory.cpp:106)
==384043== 
==384043== Invalid read of size 1
==384043==    at 0x407721: f_del_front_bn (get_next_line_utils.c:163)
==384043==    by 0x4073CD: get_next_line (get_next_line.c:52)
==384043==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384043==    by 0x406771: main (mandatory.cpp:106)
==384043==  Address 0x4de75d0 is 0 bytes inside a block of size 2 free'd
==384043==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384043==    by 0x4076FF: f_search_bn (get_next_line_utils.c:119)
==384043==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384043==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384043==    by 0x406771: main (mandatory.cpp:106)
==384043==  Block was alloc'd at
==384043==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384043==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==384043==    by 0x40738B: get_next_line (get_next_line.c:48)
==384043==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384043==    by 0x406771: main (mandatory.cpp:106)
==384043== 
==384043== Invalid free() / delete / delete[] / realloc()
==384043==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384043==    by 0x4073E0: get_next_line (get_next_line.c:53)
==384043==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384043==    by 0x406771: main (mandatory.cpp:106)
==384043==  Address 0x4de7580 is 0 bytes inside a block of size 2 free'd
==384043==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384043==    by 0x40760E: ft_strjoin (get_next_line_utils.c:82)
==384043==    by 0x40738B: get_next_line (get_next_line.c:48)
==384043==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384043==    by 0x406771: main (mandatory.cpp:106)
==384043==  Block was alloc'd at
==384043==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384043==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384043==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384043==    by 0x406771: main (mandatory.cpp:106)
==384043== 
==384043== Invalid read of size 1
==384043==    at 0x40758F: ft_strjoin (get_next_line_utils.c:68)
==384043==    by 0x40738B: get_next_line (get_next_line.c:48)
==384043==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384043==    by 0x406783: main (mandatory.cpp:106)
==384043==  Address 0x4de75d1 is 1 bytes inside a block of size 2 free'd
==384043==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384043==    by 0x4076FF: f_search_bn (get_next_line_utils.c:119)
==384043==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384043==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384043==    by 0x406771: main (mandatory.cpp:106)
==384043==  Block was alloc'd at
==384043==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384043==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==384043==    by 0x40738B: get_next_line (get_next_line.c:48)
==384043==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384043==    by 0x406771: main (mandatory.cpp:106)
==384043== 
==384043== Syscall param read(buf) points to unaddressable byte(s)
==384043==    at 0x4CB8992: read (read.c:26)
==384043==    by 0x40733B: get_next_line (get_next_line.c:37)
==384043==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384043==    by 0x406783: main (mandatory.cpp:106)
==384043==  Address 0x4de7670 is 0 bytes inside a block of size 2 free'd
==384043==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384043==    by 0x40760E: ft_strjoin (get_next_line_utils.c:82)
==384043==    by 0x40738B: get_next_line (get_next_line.c:48)
==384043==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384043==    by 0x406783: main (mandatory.cpp:106)
==384043==  Block was alloc'd at
==384043==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384043==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384043==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384043==    by 0x406783: main (mandatory.cpp:106)
==384043== 
==384043== Invalid write of size 1
==384043==    at 0x40734C: get_next_line (get_next_line.c:38)
==384043==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384043==    by 0x406783: main (mandatory.cpp:106)
==384043==  Address 0x4de7671 is 1 bytes inside a block of size 2 free'd
==384043==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384043==    by 0x40760E: ft_strjoin (get_next_line_utils.c:82)
==384043==    by 0x40738B: get_next_line (get_next_line.c:48)
==384043==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384043==    by 0x406783: main (mandatory.cpp:106)
==384043==  Block was alloc'd at
==384043==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384043==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384043==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384043==    by 0x406783: main (mandatory.cpp:106)
==384043== 
==384043== Invalid read of size 1
==384043==    at 0x4075DB: ft_strjoin (get_next_line_utils.c:75)
==384043==    by 0x40738B: get_next_line (get_next_line.c:48)
==384043==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384043==    by 0x406783: main (mandatory.cpp:106)
==384043==  Address 0x4de7671 is 1 bytes inside a block of size 2 free'd
==384043==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384043==    by 0x40760E: ft_strjoin (get_next_line_utils.c:82)
==384043==    by 0x40738B: get_next_line (get_next_line.c:48)
==384043==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384043==    by 0x406783: main (mandatory.cpp:106)
==384043==  Block was alloc'd at
==384043==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384043==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384043==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384043==    by 0x406783: main (mandatory.cpp:106)
==384043== 
==384043== Invalid read of size 1
==384043==    at 0x407721: f_del_front_bn (get_next_line_utils.c:163)
==384043==    by 0x4073CD: get_next_line (get_next_line.c:52)
==384043==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384043==    by 0x406783: main (mandatory.cpp:106)
==384043==  Address 0x4de8640 is 0 bytes inside a block of size 44 free'd
==384043==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384043==    by 0x4076FF: f_search_bn (get_next_line_utils.c:119)
==384043==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384043==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384043==    by 0x406783: main (mandatory.cpp:106)
==384043==  Block was alloc'd at
==384043==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384043==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==384043==    by 0x40738B: get_next_line (get_next_line.c:48)
==384043==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384043==    by 0x406783: main (mandatory.cpp:106)
==384043== 
==384043== Invalid free() / delete / delete[] / realloc()
==384043==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384043==    by 0x4073E0: get_next_line (get_next_line.c:53)
==384043==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384043==    by 0x406783: main (mandatory.cpp:106)
==384043==  Address 0x4de7670 is 0 bytes inside a block of size 2 free'd
==384043==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384043==    by 0x40760E: ft_strjoin (get_next_line_utils.c:82)
==384043==    by 0x40738B: get_next_line (get_next_line.c:48)
==384043==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384043==    by 0x406783: main (mandatory.cpp:106)
==384043==  Block was alloc'd at
==384043==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384043==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384043==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384043==    by 0x406783: main (mandatory.cpp:106)
==384043== 
==384043== Invalid read of size 1
==384043==    at 0x40758F: ft_strjoin (get_next_line_utils.c:68)
==384043==    by 0x40738B: get_next_line (get_next_line.c:48)
==384043==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384043==    by 0x406795: main (mandatory.cpp:106)
==384043==  Address 0x4de866b is 43 bytes inside a block of size 44 free'd
==384043==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384043==    by 0x4076FF: f_search_bn (get_next_line_utils.c:119)
==384043==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384043==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384043==    by 0x406783: main (mandatory.cpp:106)
==384043==  Block was alloc'd at
==384043==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384043==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==384043==    by 0x40738B: get_next_line (get_next_line.c:48)
==384043==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384043==    by 0x406783: main (mandatory.cpp:106)
==384043== 
==384043== Invalid read of size 1
==384043==    at 0x407721: f_del_front_bn (get_next_line_utils.c:163)
==384043==    by 0x4073CD: get_next_line (get_next_line.c:52)
==384043==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384043==    by 0x406795: main (mandatory.cpp:106)
==384043==  Address 0x4de8770 is 0 bytes inside a block of size 2 free'd
==384043==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384043==    by 0x4076FF: f_search_bn (get_next_line_utils.c:119)
==384043==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384043==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384043==    by 0x406795: main (mandatory.cpp:106)
==384043==  Block was alloc'd at
==384043==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384043==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==384043==    by 0x40738B: get_next_line (get_next_line.c:48)
==384043==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384043==    by 0x406795: main (mandatory.cpp:106)
==384043== 
==384043== Invalid free() / delete / delete[] / realloc()
==384043==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384043==    by 0x4073E0: get_next_line (get_next_line.c:53)
==384043==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384043==    by 0x406795: main (mandatory.cpp:106)
==384043==  Address 0x4de8720 is 0 bytes inside a block of size 2 free'd
==384043==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384043==    by 0x40760E: ft_strjoin (get_next_line_utils.c:82)
==384043==    by 0x40738B: get_next_line (get_next_line.c:48)
==384043==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384043==    by 0x406795: main (mandatory.cpp:106)
==384043==  Block was alloc'd at
==384043==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384043==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384043==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384043==    by 0x406795: main (mandatory.cpp:106)
==384043== 
==384043== Invalid read of size 1
==384043==    at 0x40758F: ft_strjoin (get_next_line_utils.c:68)
==384043==    by 0x40738B: get_next_line (get_next_line.c:48)
==384043==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384043==    by 0x4067A7: main (mandatory.cpp:106)
==384043==  Address 0x4de8771 is 1 bytes inside a block of size 2 free'd
==384043==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384043==    by 0x4076FF: f_search_bn (get_next_line_utils.c:119)
==384043==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384043==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384043==    by 0x406795: main (mandatory.cpp:106)
==384043==  Block was alloc'd at
==384043==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384043==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==384043==    by 0x40738B: get_next_line (get_next_line.c:48)
==384043==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384043==    by 0x406795: main (mandatory.cpp:106)
==384043== 
==384043== Syscall param read(buf) points to unaddressable byte(s)
==384043==    at 0x4CB8992: read (read.c:26)
==384043==    by 0x40733B: get_next_line (get_next_line.c:37)
==384043==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384043==    by 0x4067A7: main (mandatory.cpp:106)
==384043==  Address 0x4de8810 is 0 bytes inside a block of size 2 free'd
==384043==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384043==    by 0x40760E: ft_strjoin (get_next_line_utils.c:82)
==384043==    by 0x40738B: get_next_line (get_next_line.c:48)
==384043==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384043==    by 0x4067A7: main (mandatory.cpp:106)
==384043==  Block was alloc'd at
==384043==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384043==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384043==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384043==    by 0x4067A7: main (mandatory.cpp:106)
==384043== 
==384043== Invalid write of size 1
==384043==    at 0x40734C: get_next_line (get_next_line.c:38)
==384043==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384043==    by 0x4067A7: main (mandatory.cpp:106)
==384043==  Address 0x4de8811 is 1 bytes inside a block of size 2 free'd
==384043==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384043==    by 0x40760E: ft_strjoin (get_next_line_utils.c:82)
==384043==    by 0x40738B: get_next_line (get_next_line.c:48)
==384043==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384043==    by 0x4067A7: main (mandatory.cpp:106)
==384043==  Block was alloc'd at
==384043==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384043==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384043==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384043==    by 0x4067A7: main (mandatory.cpp:106)
==384043== 
==384043== Invalid read of size 1
==384043==    at 0x4075DB: ft_strjoin (get_next_line_utils.c:75)
==384043==    by 0x40738B: get_next_line (get_next_line.c:48)
==384043==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384043==    by 0x4067A7: main (mandatory.cpp:106)
==384043==  Address 0x4de8811 is 1 bytes inside a block of size 2 free'd
==384043==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384043==    by 0x40760E: ft_strjoin (get_next_line_utils.c:82)
==384043==    by 0x40738B: get_next_line (get_next_line.c:48)
==384043==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384043==    by 0x4067A7: main (mandatory.cpp:106)
==384043==  Block was alloc'd at
==384043==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384043==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384043==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384043==    by 0x4067A7: main (mandatory.cpp:106)
==384043== 
==384043== Invalid read of size 1
==384043==    at 0x407721: f_del_front_bn (get_next_line_utils.c:163)
==384043==    by 0x4073CD: get_next_line (get_next_line.c:52)
==384043==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384043==    by 0x4067A7: main (mandatory.cpp:106)
==384043==  Address 0x4de9850 is 0 bytes inside a block of size 45 free'd
==384043==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384043==    by 0x4076FF: f_search_bn (get_next_line_utils.c:119)
==384043==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384043==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384043==    by 0x4067A7: main (mandatory.cpp:106)
==384043==  Block was alloc'd at
==384043==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384043==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==384043==    by 0x40738B: get_next_line (get_next_line.c:48)
==384043==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384043==    by 0x4067A7: main (mandatory.cpp:106)
==384043== 
==384043== Invalid free() / delete / delete[] / realloc()
==384043==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384043==    by 0x4073E0: get_next_line (get_next_line.c:53)
==384043==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384043==    by 0x4067A7: main (mandatory.cpp:106)
==384043==  Address 0x4de8810 is 0 bytes inside a block of size 2 free'd
==384043==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384043==    by 0x40760E: ft_strjoin (get_next_line_utils.c:82)
==384043==    by 0x40738B: get_next_line (get_next_line.c:48)
==384043==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384043==    by 0x4067A7: main (mandatory.cpp:106)
==384043==  Block was alloc'd at
==384043==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384043==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384043==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384043==    by 0x4067A7: main (mandatory.cpp:106)
==384043== 
==384043== Invalid read of size 1
==384043==    at 0x40758F: ft_strjoin (get_next_line_utils.c:68)
==384043==    by 0x40738B: get_next_line (get_next_line.c:48)
==384043==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384043==    by 0x4067B9: main (mandatory.cpp:106)
==384043==  Address 0x4de987c is 44 bytes inside a block of size 45 free'd
==384043==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384043==    by 0x4076FF: f_search_bn (get_next_line_utils.c:119)
==384043==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384043==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384043==    by 0x4067A7: main (mandatory.cpp:106)
==384043==  Block was alloc'd at
==384043==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384043==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==384043==    by 0x40738B: get_next_line (get_next_line.c:48)
==384043==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384043==    by 0x4067A7: main (mandatory.cpp:106)
==384043== 
==384043== Invalid read of size 1
==384043==    at 0x407721: f_del_front_bn (get_next_line_utils.c:163)
==384043==    by 0x4073CD: get_next_line (get_next_line.c:52)
==384043==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384043==    by 0x4067B9: main (mandatory.cpp:106)
==384043==  Address 0x4de9980 is 0 bytes inside a block of size 2 free'd
==384043==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384043==    by 0x4076FF: f_search_bn (get_next_line_utils.c:119)
==384043==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384043==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384043==    by 0x4067B9: main (mandatory.cpp:106)
==384043==  Block was alloc'd at
==384043==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384043==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==384043==    by 0x40738B: get_next_line (get_next_line.c:48)
==384043==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384043==    by 0x4067B9: main (mandatory.cpp:106)
==384043== 
==384043== Invalid free() / delete / delete[] / realloc()
==384043==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384043==    by 0x4073E0: get_next_line (get_next_line.c:53)
==384043==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384043==    by 0x4067B9: main (mandatory.cpp:106)
==384043==  Address 0x4de9930 is 0 bytes inside a block of size 2 free'd
==384043==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384043==    by 0x40760E: ft_strjoin (get_next_line_utils.c:82)
==384043==    by 0x40738B: get_next_line (get_next_line.c:48)
==384043==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384043==    by 0x4067B9: main (mandatory.cpp:106)
==384043==  Block was alloc'd at
==384043==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384043==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384043==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384043==    by 0x4067B9: main (mandatory.cpp:106)
==384043== 
==384043== Invalid read of size 1
==384043==    at 0x40758F: ft_strjoin (get_next_line_utils.c:68)
==384043==    by 0x40738B: get_next_line (get_next_line.c:48)
==384043==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384043==    by 0x4067CB: main (mandatory.cpp:106)
==384043==  Address 0x4de9981 is 1 bytes inside a block of size 2 free'd
==384043==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384043==    by 0x4076FF: f_search_bn (get_next_line_utils.c:119)
==384043==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384043==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384043==    by 0x4067B9: main (mandatory.cpp:106)
==384043==  Block was alloc'd at
==384043==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384043==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==384043==    by 0x40738B: get_next_line (get_next_line.c:48)
==384043==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384043==    by 0x4067B9: main (mandatory.cpp:106)
==384043== 
==384043== Syscall param read(buf) points to unaddressable byte(s)
==384043==    at 0x4CB8992: read (read.c:26)
==384043==    by 0x40733B: get_next_line (get_next_line.c:37)
==384043==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384043==    by 0x4067CB: main (mandatory.cpp:106)
==384043==  Address 0x4de9a20 is 0 bytes inside a block of size 2 free'd
==384043==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384043==    by 0x40760E: ft_strjoin (get_next_line_utils.c:82)
==384043==    by 0x40738B: get_next_line (get_next_line.c:48)
==384043==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384043==    by 0x4067CB: main (mandatory.cpp:106)
==384043==  Block was alloc'd at
==384043==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384043==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384043==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384043==    by 0x4067CB: main (mandatory.cpp:106)
==384043== 
==384043== Invalid write of size 1
==384043==    at 0x40734C: get_next_line (get_next_line.c:38)
==384043==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384043==    by 0x4067CB: main (mandatory.cpp:106)
==384043==  Address 0x4de9a21 is 1 bytes inside a block of size 2 free'd
==384043==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384043==    by 0x40760E: ft_strjoin (get_next_line_utils.c:82)
==384043==    by 0x40738B: get_next_line (get_next_line.c:48)
==384043==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384043==    by 0x4067CB: main (mandatory.cpp:106)
==384043==  Block was alloc'd at
==384043==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384043==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384043==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384043==    by 0x4067CB: main (mandatory.cpp:106)
==384043== 
==384043== Invalid read of size 1
==384043==    at 0x4075DB: ft_strjoin (get_next_line_utils.c:75)
==384043==    by 0x40738B: get_next_line (get_next_line.c:48)
==384043==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384043==    by 0x4067CB: main (mandatory.cpp:106)
==384043==  Address 0x4de9a21 is 1 bytes inside a block of size 2 free'd
==384043==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384043==    by 0x40760E: ft_strjoin (get_next_line_utils.c:82)
==384043==    by 0x40738B: get_next_line (get_next_line.c:48)
==384043==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384043==    by 0x4067CB: main (mandatory.cpp:106)
==384043==  Block was alloc'd at
==384043==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384043==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384043==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384043==    by 0x4067CB: main (mandatory.cpp:106)
==384043== 
==384043== Invalid read of size 1
==384043==    at 0x407721: f_del_front_bn (get_next_line_utils.c:163)
==384043==    by 0x4073CD: get_next_line (get_next_line.c:52)
==384043==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384043==    by 0x4067CB: main (mandatory.cpp:106)
==384043==  Address 0x4dea9f0 is 0 bytes inside a block of size 44 free'd
==384043==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384043==    by 0x4076FF: f_search_bn (get_next_line_utils.c:119)
==384043==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384043==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384043==    by 0x4067CB: main (mandatory.cpp:106)
==384043==  Block was alloc'd at
==384043==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384043==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==384043==    by 0x40738B: get_next_line (get_next_line.c:48)
==384043==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384043==    by 0x4067CB: main (mandatory.cpp:106)
==384043== 
==384043== Invalid free() / delete / delete[] / realloc()
==384043==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384043==    by 0x4073E0: get_next_line (get_next_line.c:53)
==384043==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384043==    by 0x4067CB: main (mandatory.cpp:106)
==384043==  Address 0x4de9a20 is 0 bytes inside a block of size 2 free'd
==384043==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384043==    by 0x40760E: ft_strjoin (get_next_line_utils.c:82)
==384043==    by 0x40738B: get_next_line (get_next_line.c:48)
==384043==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384043==    by 0x4067CB: main (mandatory.cpp:106)
==384043==  Block was alloc'd at
==384043==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384043==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384043==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384043==    by 0x4067CB: main (mandatory.cpp:106)
==384043== 
==384043== Invalid read of size 1
==384043==    at 0x40758F: ft_strjoin (get_next_line_utils.c:68)
==384043==    by 0x40738B: get_next_line (get_next_line.c:48)
==384043==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384043==    by 0x4067DD: main (mandatory.cpp:106)
==384043==  Address 0x4deaa1b is 43 bytes inside a block of size 44 free'd
==384043==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384043==    by 0x4076FF: f_search_bn (get_next_line_utils.c:119)
==384043==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384043==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384043==    by 0x4067CB: main (mandatory.cpp:106)
==384043==  Block was alloc'd at
==384043==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384043==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==384043==    by 0x40738B: get_next_line (get_next_line.c:48)
==384043==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384043==    by 0x4067CB: main (mandatory.cpp:106)
==384043== 
==384043== Invalid read of size 1
==384043==    at 0x407721: f_del_front_bn (get_next_line_utils.c:163)
==384043==    by 0x4073CD: get_next_line (get_next_line.c:52)
==384043==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384043==    by 0x4067DD: main (mandatory.cpp:106)
==384043==  Address 0x4deab20 is 0 bytes inside a block of size 2 free'd
==384043==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384043==    by 0x4076FF: f_search_bn (get_next_line_utils.c:119)
==384043==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384043==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384043==    by 0x4067DD: main (mandatory.cpp:106)
==384043==  Block was alloc'd at
==384043==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384043==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==384043==    by 0x40738B: get_next_line (get_next_line.c:48)
==384043==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384043==    by 0x4067DD: main (mandatory.cpp:106)
==384043== 
==384043== Invalid free() / delete / delete[] / realloc()
==384043==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384043==    by 0x4073E0: get_next_line (get_next_line.c:53)
==384043==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384043==    by 0x4067DD: main (mandatory.cpp:106)
==384043==  Address 0x4deaad0 is 0 bytes inside a block of size 2 free'd
==384043==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384043==    by 0x40760E: ft_strjoin (get_next_line_utils.c:82)
==384043==    by 0x40738B: get_next_line (get_next_line.c:48)
==384043==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384043==    by 0x4067DD: main (mandatory.cpp:106)
==384043==  Block was alloc'd at
==384043==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384043==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384043==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384043==    by 0x4067DD: main (mandatory.cpp:106)
==384043== 
==384043== Invalid read of size 1
==384043==    at 0x40758F: ft_strjoin (get_next_line_utils.c:68)
==384043==    by 0x40738B: get_next_line (get_next_line.c:48)
==384043==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384043==    by 0x4067EF: main (mandatory.cpp:106)
==384043==  Address 0x4deab21 is 1 bytes inside a block of size 2 free'd
==384043==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384043==    by 0x4076FF: f_search_bn (get_next_line_utils.c:119)
==384043==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384043==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384043==    by 0x4067DD: main (mandatory.cpp:106)
==384043==  Block was alloc'd at
==384043==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384043==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==384043==    by 0x40738B: get_next_line (get_next_line.c:48)
==384043==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384043==    by 0x4067DD: main (mandatory.cpp:106)
==384043== 
==384043== Syscall param read(buf) points to unaddressable byte(s)
==384043==    at 0x4CB8992: read (read.c:26)
==384043==    by 0x40733B: get_next_line (get_next_line.c:37)
==384043==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384043==    by 0x4067EF: main (mandatory.cpp:106)
==384043==  Address 0x4deabc0 is 0 bytes inside a block of size 2 free'd
==384043==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384043==    by 0x40760E: ft_strjoin (get_next_line_utils.c:82)
==384043==    by 0x40738B: get_next_line (get_next_line.c:48)
==384043==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384043==    by 0x4067EF: main (mandatory.cpp:106)
==384043==  Block was alloc'd at
==384043==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384043==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384043==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384043==    by 0x4067EF: main (mandatory.cpp:106)
==384043== 
==384043== Invalid write of size 1
==384043==    at 0x40734C: get_next_line (get_next_line.c:38)
==384043==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384043==    by 0x4067EF: main (mandatory.cpp:106)
==384043==  Address 0x4deabc1 is 1 bytes inside a block of size 2 free'd
==384043==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384043==    by 0x40760E: ft_strjoin (get_next_line_utils.c:82)
==384043==    by 0x40738B: get_next_line (get_next_line.c:48)
==384043==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384043==    by 0x4067EF: main (mandatory.cpp:106)
==384043==  Block was alloc'd at
==384043==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384043==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384043==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384043==    by 0x4067EF: main (mandatory.cpp:106)
==384043== 
==384043== Invalid read of size 1
==384043==    at 0x4075DB: ft_strjoin (get_next_line_utils.c:75)
==384043==    by 0x40738B: get_next_line (get_next_line.c:48)
==384043==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384043==    by 0x4067EF: main (mandatory.cpp:106)
==384043==  Address 0x4deabc1 is 1 bytes inside a block of size 2 free'd
==384043==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384043==    by 0x40760E: ft_strjoin (get_next_line_utils.c:82)
==384043==    by 0x40738B: get_next_line (get_next_line.c:48)
==384043==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384043==    by 0x4067EF: main (mandatory.cpp:106)
==384043==  Block was alloc'd at
==384043==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384043==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384043==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384043==    by 0x4067EF: main (mandatory.cpp:106)
==384043== 
==384043== Invalid read of size 1
==384043==    at 0x484FBD4: strcmp (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384043==    by 0x402D0A: gnl(int, char const*) (gnl.cpp:24)
==384043==    by 0x4067EF: main (mandatory.cpp:106)
==384043==  Address 0x0 is not stack'd, malloc'd or (recently) free'd
==384043== 
==384063== Syscall param read(buf) points to unaddressable byte(s)
==384063==    at 0x4CB8992: read (read.c:26)
==384063==    by 0x40733B: get_next_line (get_next_line.c:37)
==384063==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384063==    by 0x406A1B: main (mandatory.cpp:119)
==384063==  Address 0x4de6820 is 0 bytes inside a block of size 2 free'd
==384063==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384063==    by 0x40760E: ft_strjoin (get_next_line_utils.c:82)
==384063==    by 0x40738B: get_next_line (get_next_line.c:48)
==384063==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384063==    by 0x406A1B: main (mandatory.cpp:119)
==384063==  Block was alloc'd at
==384063==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384063==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384063==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384063==    by 0x406A1B: main (mandatory.cpp:119)
==384063== 
==384063== Invalid write of size 1
==384063==    at 0x40734C: get_next_line (get_next_line.c:38)
==384063==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384063==    by 0x406A1B: main (mandatory.cpp:119)
==384063==  Address 0x4de6821 is 1 bytes inside a block of size 2 free'd
==384063==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384063==    by 0x40760E: ft_strjoin (get_next_line_utils.c:82)
==384063==    by 0x40738B: get_next_line (get_next_line.c:48)
==384063==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384063==    by 0x406A1B: main (mandatory.cpp:119)
==384063==  Block was alloc'd at
==384063==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384063==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384063==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384063==    by 0x406A1B: main (mandatory.cpp:119)
==384063== 
==384063== Invalid read of size 1
==384063==    at 0x4074E8: ft_strlen (get_next_line_utils.c:43)
==384063==    by 0x407523: ft_strjoin (get_next_line_utils.c:59)
==384063==    by 0x40738B: get_next_line (get_next_line.c:48)
==384063==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384063==    by 0x406A1B: main (mandatory.cpp:119)
==384063==  Address 0x4de6821 is 1 bytes inside a block of size 2 free'd
==384063==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384063==    by 0x40760E: ft_strjoin (get_next_line_utils.c:82)
==384063==    by 0x40738B: get_next_line (get_next_line.c:48)
==384063==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384063==    by 0x406A1B: main (mandatory.cpp:119)
==384063==  Block was alloc'd at
==384063==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384063==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384063==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384063==    by 0x406A1B: main (mandatory.cpp:119)
==384063== 
==384063== Invalid read of size 1
==384063==    at 0x4075DB: ft_strjoin (get_next_line_utils.c:75)
==384063==    by 0x40738B: get_next_line (get_next_line.c:48)
==384063==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384063==    by 0x406A1B: main (mandatory.cpp:119)
==384063==  Address 0x4de6821 is 1 bytes inside a block of size 2 free'd
==384063==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384063==    by 0x40760E: ft_strjoin (get_next_line_utils.c:82)
==384063==    by 0x40738B: get_next_line (get_next_line.c:48)
==384063==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384063==    by 0x406A1B: main (mandatory.cpp:119)
==384063==  Block was alloc'd at
==384063==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384063==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384063==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384063==    by 0x406A1B: main (mandatory.cpp:119)
==384063== 
==384063== Invalid free() / delete / delete[] / realloc()
==384063==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384063==    by 0x40760E: ft_strjoin (get_next_line_utils.c:82)
==384063==    by 0x40738B: get_next_line (get_next_line.c:48)
==384063==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384063==    by 0x406A1B: main (mandatory.cpp:119)
==384063==  Address 0x4de6820 is 0 bytes inside a block of size 2 free'd
==384063==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384063==    by 0x40760E: ft_strjoin (get_next_line_utils.c:82)
==384063==    by 0x40738B: get_next_line (get_next_line.c:48)
==384063==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384063==    by 0x406A1B: main (mandatory.cpp:119)
==384063==  Block was alloc'd at
==384063==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384063==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384063==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384063==    by 0x406A1B: main (mandatory.cpp:119)
==384063== 
==384063== Invalid read of size 1
==384063==    at 0x407721: f_del_front_bn (get_next_line_utils.c:163)
==384063==    by 0x4073CD: get_next_line (get_next_line.c:52)
==384063==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384063==    by 0x406A1B: main (mandatory.cpp:119)
==384063==  Address 0x4de77d0 is 0 bytes inside a block of size 43 free'd
==384063==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384063==    by 0x4076FF: f_search_bn (get_next_line_utils.c:119)
==384063==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384063==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384063==    by 0x406A1B: main (mandatory.cpp:119)
==384063==  Block was alloc'd at
==384063==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384063==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==384063==    by 0x40738B: get_next_line (get_next_line.c:48)
==384063==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384063==    by 0x406A1B: main (mandatory.cpp:119)
==384063== 
==384063== Invalid free() / delete / delete[] / realloc()
==384063==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384063==    by 0x4073E0: get_next_line (get_next_line.c:53)
==384063==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384063==    by 0x406A1B: main (mandatory.cpp:119)
==384063==  Address 0x4de6820 is 0 bytes inside a block of size 2 free'd
==384063==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384063==    by 0x40760E: ft_strjoin (get_next_line_utils.c:82)
==384063==    by 0x40738B: get_next_line (get_next_line.c:48)
==384063==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384063==    by 0x406A1B: main (mandatory.cpp:119)
==384063==  Block was alloc'd at
==384063==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384063==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384063==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384063==    by 0x406A1B: main (mandatory.cpp:119)
==384063== 
==384063== Invalid read of size 1
==384063==    at 0x4074E8: ft_strlen (get_next_line_utils.c:43)
==384063==    by 0x407515: ft_strjoin (get_next_line_utils.c:59)
==384063==    by 0x40738B: get_next_line (get_next_line.c:48)
==384063==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384063==    by 0x406A2D: main (mandatory.cpp:119)
==384063==  Address 0x4de77fa is 42 bytes inside a block of size 43 free'd
==384063==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384063==    by 0x4076FF: f_search_bn (get_next_line_utils.c:119)
==384063==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384063==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384063==    by 0x406A1B: main (mandatory.cpp:119)
==384063==  Block was alloc'd at
==384063==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384063==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==384063==    by 0x40738B: get_next_line (get_next_line.c:48)
==384063==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384063==    by 0x406A1B: main (mandatory.cpp:119)
==384063== 
==384063== Invalid read of size 1
==384063==    at 0x40758F: ft_strjoin (get_next_line_utils.c:68)
==384063==    by 0x40738B: get_next_line (get_next_line.c:48)
==384063==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384063==    by 0x406A2D: main (mandatory.cpp:119)
==384063==  Address 0x4de77fa is 42 bytes inside a block of size 43 free'd
==384063==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384063==    by 0x4076FF: f_search_bn (get_next_line_utils.c:119)
==384063==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384063==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384063==    by 0x406A1B: main (mandatory.cpp:119)
==384063==  Block was alloc'd at
==384063==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384063==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==384063==    by 0x40738B: get_next_line (get_next_line.c:48)
==384063==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384063==    by 0x406A1B: main (mandatory.cpp:119)
==384063== 
==384063== Invalid free() / delete / delete[] / realloc()
==384063==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384063==    by 0x407602: ft_strjoin (get_next_line_utils.c:81)
==384063==    by 0x40738B: get_next_line (get_next_line.c:48)
==384063==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384063==    by 0x406A2D: main (mandatory.cpp:119)
==384063==  Address 0x4de77fa is 42 bytes inside a block of size 43 free'd
==384063==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384063==    by 0x4076FF: f_search_bn (get_next_line_utils.c:119)
==384063==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384063==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384063==    by 0x406A1B: main (mandatory.cpp:119)
==384063==  Block was alloc'd at
==384063==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384063==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==384063==    by 0x40738B: get_next_line (get_next_line.c:48)
==384063==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384063==    by 0x406A1B: main (mandatory.cpp:119)
==384063== 
==384063== Invalid read of size 1
==384063==    at 0x407721: f_del_front_bn (get_next_line_utils.c:163)
==384063==    by 0x4073CD: get_next_line (get_next_line.c:52)
==384063==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384063==    by 0x406A2D: main (mandatory.cpp:119)
==384063==  Address 0x4de7900 is 0 bytes inside a block of size 2 free'd
==384063==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384063==    by 0x4076FF: f_search_bn (get_next_line_utils.c:119)
==384063==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384063==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384063==    by 0x406A2D: main (mandatory.cpp:119)
==384063==  Block was alloc'd at
==384063==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384063==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==384063==    by 0x40738B: get_next_line (get_next_line.c:48)
==384063==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384063==    by 0x406A2D: main (mandatory.cpp:119)
==384063== 
==384063== Invalid free() / delete / delete[] / realloc()
==384063==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384063==    by 0x4073E0: get_next_line (get_next_line.c:53)
==384063==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384063==    by 0x406A2D: main (mandatory.cpp:119)
==384063==  Address 0x4de78b0 is 0 bytes inside a block of size 2 free'd
==384063==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384063==    by 0x40760E: ft_strjoin (get_next_line_utils.c:82)
==384063==    by 0x40738B: get_next_line (get_next_line.c:48)
==384063==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384063==    by 0x406A2D: main (mandatory.cpp:119)
==384063==  Block was alloc'd at
==384063==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384063==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384063==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384063==    by 0x406A2D: main (mandatory.cpp:119)
==384063== 
==384063== Invalid read of size 1
==384063==    at 0x40758F: ft_strjoin (get_next_line_utils.c:68)
==384063==    by 0x40738B: get_next_line (get_next_line.c:48)
==384063==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384063==    by 0x406A3F: main (mandatory.cpp:119)
==384063==  Address 0x4de7901 is 1 bytes inside a block of size 2 free'd
==384063==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384063==    by 0x4076FF: f_search_bn (get_next_line_utils.c:119)
==384063==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384063==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384063==    by 0x406A2D: main (mandatory.cpp:119)
==384063==  Block was alloc'd at
==384063==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384063==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==384063==    by 0x40738B: get_next_line (get_next_line.c:48)
==384063==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384063==    by 0x406A2D: main (mandatory.cpp:119)
==384063== 
==384063== Syscall param read(buf) points to unaddressable byte(s)
==384063==    at 0x4CB8992: read (read.c:26)
==384063==    by 0x40733B: get_next_line (get_next_line.c:37)
==384063==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384063==    by 0x406A3F: main (mandatory.cpp:119)
==384063==  Address 0x4de79a0 is 0 bytes inside a block of size 2 free'd
==384063==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384063==    by 0x40760E: ft_strjoin (get_next_line_utils.c:82)
==384063==    by 0x40738B: get_next_line (get_next_line.c:48)
==384063==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384063==    by 0x406A3F: main (mandatory.cpp:119)
==384063==  Block was alloc'd at
==384063==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384063==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384063==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384063==    by 0x406A3F: main (mandatory.cpp:119)
==384063== 
==384063== Invalid write of size 1
==384063==    at 0x40734C: get_next_line (get_next_line.c:38)
==384063==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384063==    by 0x406A3F: main (mandatory.cpp:119)
==384063==  Address 0x4de79a1 is 1 bytes inside a block of size 2 free'd
==384063==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384063==    by 0x40760E: ft_strjoin (get_next_line_utils.c:82)
==384063==    by 0x40738B: get_next_line (get_next_line.c:48)
==384063==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384063==    by 0x406A3F: main (mandatory.cpp:119)
==384063==  Block was alloc'd at
==384063==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384063==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384063==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384063==    by 0x406A3F: main (mandatory.cpp:119)
==384063== 
==384063== Invalid read of size 1
==384063==    at 0x4075DB: ft_strjoin (get_next_line_utils.c:75)
==384063==    by 0x40738B: get_next_line (get_next_line.c:48)
==384063==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384063==    by 0x406A3F: main (mandatory.cpp:119)
==384063==  Address 0x4de79a1 is 1 bytes inside a block of size 2 free'd
==384063==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384063==    by 0x40760E: ft_strjoin (get_next_line_utils.c:82)
==384063==    by 0x40738B: get_next_line (get_next_line.c:48)
==384063==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384063==    by 0x406A3F: main (mandatory.cpp:119)
==384063==  Block was alloc'd at
==384063==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384063==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384063==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384063==    by 0x406A3F: main (mandatory.cpp:119)
==384063== 
==384063== Invalid read of size 1
==384063==    at 0x407721: f_del_front_bn (get_next_line_utils.c:163)
==384063==    by 0x4073CD: get_next_line (get_next_line.c:52)
==384063==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384063==    by 0x406A3F: main (mandatory.cpp:119)
==384063==  Address 0x4de8970 is 0 bytes inside a block of size 44 free'd
==384063==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384063==    by 0x4076FF: f_search_bn (get_next_line_utils.c:119)
==384063==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384063==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384063==    by 0x406A3F: main (mandatory.cpp:119)
==384063==  Block was alloc'd at
==384063==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384063==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==384063==    by 0x40738B: get_next_line (get_next_line.c:48)
==384063==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384063==    by 0x406A3F: main (mandatory.cpp:119)
==384063== 
==384063== Invalid free() / delete / delete[] / realloc()
==384063==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384063==    by 0x4073E0: get_next_line (get_next_line.c:53)
==384063==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384063==    by 0x406A3F: main (mandatory.cpp:119)
==384063==  Address 0x4de79a0 is 0 bytes inside a block of size 2 free'd
==384063==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384063==    by 0x40760E: ft_strjoin (get_next_line_utils.c:82)
==384063==    by 0x40738B: get_next_line (get_next_line.c:48)
==384063==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384063==    by 0x406A3F: main (mandatory.cpp:119)
==384063==  Block was alloc'd at
==384063==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384063==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384063==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384063==    by 0x406A3F: main (mandatory.cpp:119)
==384063== 
==384063== Invalid read of size 1
==384063==    at 0x40758F: ft_strjoin (get_next_line_utils.c:68)
==384063==    by 0x40738B: get_next_line (get_next_line.c:48)
==384063==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384063==    by 0x406A51: main (mandatory.cpp:119)
==384063==  Address 0x4de899b is 43 bytes inside a block of size 44 free'd
==384063==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384063==    by 0x4076FF: f_search_bn (get_next_line_utils.c:119)
==384063==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384063==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384063==    by 0x406A3F: main (mandatory.cpp:119)
==384063==  Block was alloc'd at
==384063==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384063==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==384063==    by 0x40738B: get_next_line (get_next_line.c:48)
==384063==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384063==    by 0x406A3F: main (mandatory.cpp:119)
==384063== 
==384063== Invalid read of size 1
==384063==    at 0x407721: f_del_front_bn (get_next_line_utils.c:163)
==384063==    by 0x4073CD: get_next_line (get_next_line.c:52)
==384063==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384063==    by 0x406A51: main (mandatory.cpp:119)
==384063==  Address 0x4de8aa0 is 0 bytes inside a block of size 2 free'd
==384063==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384063==    by 0x4076FF: f_search_bn (get_next_line_utils.c:119)
==384063==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384063==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384063==    by 0x406A51: main (mandatory.cpp:119)
==384063==  Block was alloc'd at
==384063==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384063==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==384063==    by 0x40738B: get_next_line (get_next_line.c:48)
==384063==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384063==    by 0x406A51: main (mandatory.cpp:119)
==384063== 
==384063== Invalid free() / delete / delete[] / realloc()
==384063==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384063==    by 0x4073E0: get_next_line (get_next_line.c:53)
==384063==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384063==    by 0x406A51: main (mandatory.cpp:119)
==384063==  Address 0x4de8a50 is 0 bytes inside a block of size 2 free'd
==384063==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384063==    by 0x40760E: ft_strjoin (get_next_line_utils.c:82)
==384063==    by 0x40738B: get_next_line (get_next_line.c:48)
==384063==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384063==    by 0x406A51: main (mandatory.cpp:119)
==384063==  Block was alloc'd at
==384063==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384063==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384063==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384063==    by 0x406A51: main (mandatory.cpp:119)
==384063== 
==384063== Invalid read of size 1
==384063==    at 0x40758F: ft_strjoin (get_next_line_utils.c:68)
==384063==    by 0x40738B: get_next_line (get_next_line.c:48)
==384063==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384063==    by 0x406A63: main (mandatory.cpp:119)
==384063==  Address 0x4de8aa1 is 1 bytes inside a block of size 2 free'd
==384063==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384063==    by 0x4076FF: f_search_bn (get_next_line_utils.c:119)
==384063==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384063==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384063==    by 0x406A51: main (mandatory.cpp:119)
==384063==  Block was alloc'd at
==384063==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384063==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==384063==    by 0x40738B: get_next_line (get_next_line.c:48)
==384063==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384063==    by 0x406A51: main (mandatory.cpp:119)
==384063== 
==384063== Syscall param read(buf) points to unaddressable byte(s)
==384063==    at 0x4CB8992: read (read.c:26)
==384063==    by 0x40733B: get_next_line (get_next_line.c:37)
==384063==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384063==    by 0x406A63: main (mandatory.cpp:119)
==384063==  Address 0x4de8b40 is 0 bytes inside a block of size 2 free'd
==384063==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384063==    by 0x40760E: ft_strjoin (get_next_line_utils.c:82)
==384063==    by 0x40738B: get_next_line (get_next_line.c:48)
==384063==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384063==    by 0x406A63: main (mandatory.cpp:119)
==384063==  Block was alloc'd at
==384063==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384063==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384063==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384063==    by 0x406A63: main (mandatory.cpp:119)
==384063== 
==384063== Invalid write of size 1
==384063==    at 0x40734C: get_next_line (get_next_line.c:38)
==384063==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384063==    by 0x406A63: main (mandatory.cpp:119)
==384063==  Address 0x4de8b41 is 1 bytes inside a block of size 2 free'd
==384063==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384063==    by 0x40760E: ft_strjoin (get_next_line_utils.c:82)
==384063==    by 0x40738B: get_next_line (get_next_line.c:48)
==384063==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384063==    by 0x406A63: main (mandatory.cpp:119)
==384063==  Block was alloc'd at
==384063==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384063==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384063==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384063==    by 0x406A63: main (mandatory.cpp:119)
==384063== 
==384063== Invalid read of size 1
==384063==    at 0x4075DB: ft_strjoin (get_next_line_utils.c:75)
==384063==    by 0x40738B: get_next_line (get_next_line.c:48)
==384063==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384063==    by 0x406A63: main (mandatory.cpp:119)
==384063==  Address 0x4de8b41 is 1 bytes inside a block of size 2 free'd
==384063==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384063==    by 0x40760E: ft_strjoin (get_next_line_utils.c:82)
==384063==    by 0x40738B: get_next_line (get_next_line.c:48)
==384063==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384063==    by 0x406A63: main (mandatory.cpp:119)
==384063==  Block was alloc'd at
==384063==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384063==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384063==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384063==    by 0x406A63: main (mandatory.cpp:119)
==384063== 
==384063== Invalid read of size 1
==384063==    at 0x407721: f_del_front_bn (get_next_line_utils.c:163)
==384063==    by 0x4073CD: get_next_line (get_next_line.c:52)
==384063==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384063==    by 0x406A63: main (mandatory.cpp:119)
==384063==  Address 0x4de9b80 is 0 bytes inside a block of size 45 free'd
==384063==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384063==    by 0x4076FF: f_search_bn (get_next_line_utils.c:119)
==384063==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384063==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384063==    by 0x406A63: main (mandatory.cpp:119)
==384063==  Block was alloc'd at
==384063==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384063==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==384063==    by 0x40738B: get_next_line (get_next_line.c:48)
==384063==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384063==    by 0x406A63: main (mandatory.cpp:119)
==384063== 
==384063== Invalid free() / delete / delete[] / realloc()
==384063==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384063==    by 0x4073E0: get_next_line (get_next_line.c:53)
==384063==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384063==    by 0x406A63: main (mandatory.cpp:119)
==384063==  Address 0x4de8b40 is 0 bytes inside a block of size 2 free'd
==384063==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384063==    by 0x40760E: ft_strjoin (get_next_line_utils.c:82)
==384063==    by 0x40738B: get_next_line (get_next_line.c:48)
==384063==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384063==    by 0x406A63: main (mandatory.cpp:119)
==384063==  Block was alloc'd at
==384063==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384063==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384063==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384063==    by 0x406A63: main (mandatory.cpp:119)
==384063== 
==384063== Invalid read of size 1
==384063==    at 0x40758F: ft_strjoin (get_next_line_utils.c:68)
==384063==    by 0x40738B: get_next_line (get_next_line.c:48)
==384063==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384063==    by 0x406A75: main (mandatory.cpp:119)
==384063==  Address 0x4de9bac is 44 bytes inside a block of size 45 free'd
==384063==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384063==    by 0x4076FF: f_search_bn (get_next_line_utils.c:119)
==384063==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384063==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384063==    by 0x406A63: main (mandatory.cpp:119)
==384063==  Block was alloc'd at
==384063==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384063==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==384063==    by 0x40738B: get_next_line (get_next_line.c:48)
==384063==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384063==    by 0x406A63: main (mandatory.cpp:119)
==384063== 
==384063== Invalid read of size 1
==384063==    at 0x407721: f_del_front_bn (get_next_line_utils.c:163)
==384063==    by 0x4073CD: get_next_line (get_next_line.c:52)
==384063==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384063==    by 0x406A75: main (mandatory.cpp:119)
==384063==  Address 0x4de9cb0 is 0 bytes inside a block of size 2 free'd
==384063==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384063==    by 0x4076FF: f_search_bn (get_next_line_utils.c:119)
==384063==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384063==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384063==    by 0x406A75: main (mandatory.cpp:119)
==384063==  Block was alloc'd at
==384063==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384063==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==384063==    by 0x40738B: get_next_line (get_next_line.c:48)
==384063==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384063==    by 0x406A75: main (mandatory.cpp:119)
==384063== 
==384063== Invalid free() / delete / delete[] / realloc()
==384063==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384063==    by 0x4073E0: get_next_line (get_next_line.c:53)
==384063==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384063==    by 0x406A75: main (mandatory.cpp:119)
==384063==  Address 0x4de9c60 is 0 bytes inside a block of size 2 free'd
==384063==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384063==    by 0x40760E: ft_strjoin (get_next_line_utils.c:82)
==384063==    by 0x40738B: get_next_line (get_next_line.c:48)
==384063==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384063==    by 0x406A75: main (mandatory.cpp:119)
==384063==  Block was alloc'd at
==384063==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384063==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384063==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384063==    by 0x406A75: main (mandatory.cpp:119)
==384063== 
==384063== Invalid read of size 1
==384063==    at 0x40758F: ft_strjoin (get_next_line_utils.c:68)
==384063==    by 0x40738B: get_next_line (get_next_line.c:48)
==384063==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384063==    by 0x406A87: main (mandatory.cpp:119)
==384063==  Address 0x4de9cb1 is 1 bytes inside a block of size 2 free'd
==384063==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384063==    by 0x4076FF: f_search_bn (get_next_line_utils.c:119)
==384063==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384063==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384063==    by 0x406A75: main (mandatory.cpp:119)
==384063==  Block was alloc'd at
==384063==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384063==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==384063==    by 0x40738B: get_next_line (get_next_line.c:48)
==384063==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384063==    by 0x406A75: main (mandatory.cpp:119)
==384063== 
==384063== Syscall param read(buf) points to unaddressable byte(s)
==384063==    at 0x4CB8992: read (read.c:26)
==384063==    by 0x40733B: get_next_line (get_next_line.c:37)
==384063==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384063==    by 0x406A87: main (mandatory.cpp:119)
==384063==  Address 0x4de9d50 is 0 bytes inside a block of size 2 free'd
==384063==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384063==    by 0x40760E: ft_strjoin (get_next_line_utils.c:82)
==384063==    by 0x40738B: get_next_line (get_next_line.c:48)
==384063==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384063==    by 0x406A87: main (mandatory.cpp:119)
==384063==  Block was alloc'd at
==384063==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384063==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384063==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384063==    by 0x406A87: main (mandatory.cpp:119)
==384063== 
==384063== Invalid write of size 1
==384063==    at 0x40734C: get_next_line (get_next_line.c:38)
==384063==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384063==    by 0x406A87: main (mandatory.cpp:119)
==384063==  Address 0x4de9d51 is 1 bytes inside a block of size 2 free'd
==384063==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384063==    by 0x40760E: ft_strjoin (get_next_line_utils.c:82)
==384063==    by 0x40738B: get_next_line (get_next_line.c:48)
==384063==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384063==    by 0x406A87: main (mandatory.cpp:119)
==384063==  Block was alloc'd at
==384063==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384063==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384063==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384063==    by 0x406A87: main (mandatory.cpp:119)
==384063== 
==384063== Invalid read of size 1
==384063==    at 0x4075DB: ft_strjoin (get_next_line_utils.c:75)
==384063==    by 0x40738B: get_next_line (get_next_line.c:48)
==384063==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384063==    by 0x406A87: main (mandatory.cpp:119)
==384063==  Address 0x4de9d51 is 1 bytes inside a block of size 2 free'd
==384063==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384063==    by 0x40760E: ft_strjoin (get_next_line_utils.c:82)
==384063==    by 0x40738B: get_next_line (get_next_line.c:48)
==384063==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384063==    by 0x406A87: main (mandatory.cpp:119)
==384063==  Block was alloc'd at
==384063==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384063==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384063==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384063==    by 0x406A87: main (mandatory.cpp:119)
==384063== 
==384063== Invalid read of size 1
==384063==    at 0x407721: f_del_front_bn (get_next_line_utils.c:163)
==384063==    by 0x4073CD: get_next_line (get_next_line.c:52)
==384063==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384063==    by 0x406A87: main (mandatory.cpp:119)
==384063==  Address 0x4dead20 is 0 bytes inside a block of size 44 free'd
==384063==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384063==    by 0x4076FF: f_search_bn (get_next_line_utils.c:119)
==384063==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384063==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384063==    by 0x406A87: main (mandatory.cpp:119)
==384063==  Block was alloc'd at
==384063==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384063==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==384063==    by 0x40738B: get_next_line (get_next_line.c:48)
==384063==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384063==    by 0x406A87: main (mandatory.cpp:119)
==384063== 
==384063== Invalid free() / delete / delete[] / realloc()
==384063==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384063==    by 0x4073E0: get_next_line (get_next_line.c:53)
==384063==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384063==    by 0x406A87: main (mandatory.cpp:119)
==384063==  Address 0x4de9d50 is 0 bytes inside a block of size 2 free'd
==384063==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384063==    by 0x40760E: ft_strjoin (get_next_line_utils.c:82)
==384063==    by 0x40738B: get_next_line (get_next_line.c:48)
==384063==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384063==    by 0x406A87: main (mandatory.cpp:119)
==384063==  Block was alloc'd at
==384063==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384063==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384063==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384063==    by 0x406A87: main (mandatory.cpp:119)
==384063== 
==384063== Invalid read of size 1
==384063==    at 0x40758F: ft_strjoin (get_next_line_utils.c:68)
==384063==    by 0x40738B: get_next_line (get_next_line.c:48)
==384063==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384063==    by 0x406A99: main (mandatory.cpp:119)
==384063==  Address 0x4dead4b is 43 bytes inside a block of size 44 free'd
==384063==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384063==    by 0x4076FF: f_search_bn (get_next_line_utils.c:119)
==384063==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384063==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384063==    by 0x406A87: main (mandatory.cpp:119)
==384063==  Block was alloc'd at
==384063==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384063==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==384063==    by 0x40738B: get_next_line (get_next_line.c:48)
==384063==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384063==    by 0x406A87: main (mandatory.cpp:119)
==384063== 
==384063== Invalid read of size 1
==384063==    at 0x407721: f_del_front_bn (get_next_line_utils.c:163)
==384063==    by 0x4073CD: get_next_line (get_next_line.c:52)
==384063==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384063==    by 0x406A99: main (mandatory.cpp:119)
==384063==  Address 0x4deae50 is 0 bytes inside a block of size 2 free'd
==384063==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384063==    by 0x4076FF: f_search_bn (get_next_line_utils.c:119)
==384063==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384063==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384063==    by 0x406A99: main (mandatory.cpp:119)
==384063==  Block was alloc'd at
==384063==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384063==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==384063==    by 0x40738B: get_next_line (get_next_line.c:48)
==384063==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384063==    by 0x406A99: main (mandatory.cpp:119)
==384063== 
==384063== Invalid free() / delete / delete[] / realloc()
==384063==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384063==    by 0x4073E0: get_next_line (get_next_line.c:53)
==384063==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384063==    by 0x406A99: main (mandatory.cpp:119)
==384063==  Address 0x4deae00 is 0 bytes inside a block of size 2 free'd
==384063==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384063==    by 0x40760E: ft_strjoin (get_next_line_utils.c:82)
==384063==    by 0x40738B: get_next_line (get_next_line.c:48)
==384063==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384063==    by 0x406A99: main (mandatory.cpp:119)
==384063==  Block was alloc'd at
==384063==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384063==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384063==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384063==    by 0x406A99: main (mandatory.cpp:119)
==384063== 
==384063== Invalid read of size 1
==384063==    at 0x40758F: ft_strjoin (get_next_line_utils.c:68)
==384063==    by 0x40738B: get_next_line (get_next_line.c:48)
==384063==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384063==    by 0x406AAB: main (mandatory.cpp:119)
==384063==  Address 0x4deae51 is 1 bytes inside a block of size 2 free'd
==384063==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384063==    by 0x4076FF: f_search_bn (get_next_line_utils.c:119)
==384063==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384063==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384063==    by 0x406A99: main (mandatory.cpp:119)
==384063==  Block was alloc'd at
==384063==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384063==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==384063==    by 0x40738B: get_next_line (get_next_line.c:48)
==384063==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384063==    by 0x406A99: main (mandatory.cpp:119)
==384063== 
==384063== Syscall param read(buf) points to unaddressable byte(s)
==384063==    at 0x4CB8992: read (read.c:26)
==384063==    by 0x40733B: get_next_line (get_next_line.c:37)
==384063==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384063==    by 0x406AAB: main (mandatory.cpp:119)
==384063==  Address 0x4deaef0 is 0 bytes inside a block of size 2 free'd
==384063==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384063==    by 0x40760E: ft_strjoin (get_next_line_utils.c:82)
==384063==    by 0x40738B: get_next_line (get_next_line.c:48)
==384063==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384063==    by 0x406AAB: main (mandatory.cpp:119)
==384063==  Block was alloc'd at
==384063==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384063==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384063==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384063==    by 0x406AAB: main (mandatory.cpp:119)
==384063== 
==384063== Invalid write of size 1
==384063==    at 0x40734C: get_next_line (get_next_line.c:38)
==384063==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384063==    by 0x406AAB: main (mandatory.cpp:119)
==384063==  Address 0x4deaef1 is 1 bytes inside a block of size 2 free'd
==384063==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384063==    by 0x40760E: ft_strjoin (get_next_line_utils.c:82)
==384063==    by 0x40738B: get_next_line (get_next_line.c:48)
==384063==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384063==    by 0x406AAB: main (mandatory.cpp:119)
==384063==  Block was alloc'd at
==384063==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384063==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384063==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384063==    by 0x406AAB: main (mandatory.cpp:119)
==384063== 
==384063== Invalid read of size 1
==384063==    at 0x4075DB: ft_strjoin (get_next_line_utils.c:75)
==384063==    by 0x40738B: get_next_line (get_next_line.c:48)
==384063==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384063==    by 0x406AAB: main (mandatory.cpp:119)
==384063==  Address 0x4deaef1 is 1 bytes inside a block of size 2 free'd
==384063==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384063==    by 0x40760E: ft_strjoin (get_next_line_utils.c:82)
==384063==    by 0x40738B: get_next_line (get_next_line.c:48)
==384063==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384063==    by 0x406AAB: main (mandatory.cpp:119)
==384063==  Block was alloc'd at
==384063==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384063==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384063==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384063==    by 0x406AAB: main (mandatory.cpp:119)
==384063== 
==384063== Invalid read of size 1
==384063==    at 0x407721: f_del_front_bn (get_next_line_utils.c:163)
==384063==    by 0x4073CD: get_next_line (get_next_line.c:52)
==384063==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384063==    by 0x406AAB: main (mandatory.cpp:119)
==384063==  Address 0x4debe50 is 0 bytes inside a block of size 43 free'd
==384063==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384063==    by 0x4076FF: f_search_bn (get_next_line_utils.c:119)
==384063==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384063==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384063==    by 0x406AAB: main (mandatory.cpp:119)
==384063==  Block was alloc'd at
==384063==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384063==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==384063==    by 0x40738B: get_next_line (get_next_line.c:48)
==384063==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384063==    by 0x406AAB: main (mandatory.cpp:119)
==384063== 
==384063== Invalid free() / delete / delete[] / realloc()
==384063==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384063==    by 0x4073E0: get_next_line (get_next_line.c:53)
==384063==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384063==    by 0x406AAB: main (mandatory.cpp:119)
==384063==  Address 0x4deaef0 is 0 bytes inside a block of size 2 free'd
==384063==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384063==    by 0x40760E: ft_strjoin (get_next_line_utils.c:82)
==384063==    by 0x40738B: get_next_line (get_next_line.c:48)
==384063==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384063==    by 0x406AAB: main (mandatory.cpp:119)
==384063==  Block was alloc'd at
==384063==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384063==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384063==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384063==    by 0x406AAB: main (mandatory.cpp:119)
==384063== 
==384063== Invalid read of size 1
==384063==    at 0x40758F: ft_strjoin (get_next_line_utils.c:68)
==384063==    by 0x40738B: get_next_line (get_next_line.c:48)
==384063==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384063==    by 0x406AB7: main (mandatory.cpp:119)
==384063==  Address 0x4debe7a is 42 bytes inside a block of size 43 free'd
==384063==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384063==    by 0x4076FF: f_search_bn (get_next_line_utils.c:119)
==384063==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384063==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384063==    by 0x406AAB: main (mandatory.cpp:119)
==384063==  Block was alloc'd at
==384063==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384063==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==384063==    by 0x40738B: get_next_line (get_next_line.c:48)
==384063==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384063==    by 0x406AAB: main (mandatory.cpp:119)
==384063== 
==384065== Syscall param read(buf) points to unaddressable byte(s)
==384065==    at 0x4CB8992: read (read.c:26)
==384065==    by 0x40733B: get_next_line (get_next_line.c:37)
==384065==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384065==    by 0x406CD7: main (mandatory.cpp:132)
==384065==  Address 0x4de6b30 is 0 bytes inside a block of size 2 free'd
==384065==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384065==    by 0x40760E: ft_strjoin (get_next_line_utils.c:82)
==384065==    by 0x40738B: get_next_line (get_next_line.c:48)
==384065==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384065==    by 0x406CD7: main (mandatory.cpp:132)
==384065==  Block was alloc'd at
==384065==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384065==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384065==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384065==    by 0x406CD7: main (mandatory.cpp:132)
==384065== 
==384065== Invalid write of size 1
==384065==    at 0x40734C: get_next_line (get_next_line.c:38)
==384065==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384065==    by 0x406CD7: main (mandatory.cpp:132)
==384065==  Address 0x4de6b31 is 1 bytes inside a block of size 2 free'd
==384065==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384065==    by 0x40760E: ft_strjoin (get_next_line_utils.c:82)
==384065==    by 0x40738B: get_next_line (get_next_line.c:48)
==384065==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384065==    by 0x406CD7: main (mandatory.cpp:132)
==384065==  Block was alloc'd at
==384065==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384065==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384065==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384065==    by 0x406CD7: main (mandatory.cpp:132)
==384065== 
==384065== Invalid read of size 1
==384065==    at 0x4074E8: ft_strlen (get_next_line_utils.c:43)
==384065==    by 0x407523: ft_strjoin (get_next_line_utils.c:59)
==384065==    by 0x40738B: get_next_line (get_next_line.c:48)
==384065==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384065==    by 0x406CD7: main (mandatory.cpp:132)
==384065==  Address 0x4de6b31 is 1 bytes inside a block of size 2 free'd
==384065==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384065==    by 0x40760E: ft_strjoin (get_next_line_utils.c:82)
==384065==    by 0x40738B: get_next_line (get_next_line.c:48)
==384065==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384065==    by 0x406CD7: main (mandatory.cpp:132)
==384065==  Block was alloc'd at
==384065==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384065==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384065==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384065==    by 0x406CD7: main (mandatory.cpp:132)
==384065== 
==384065== Invalid read of size 1
==384065==    at 0x4075DB: ft_strjoin (get_next_line_utils.c:75)
==384065==    by 0x40738B: get_next_line (get_next_line.c:48)
==384065==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384065==    by 0x406CD7: main (mandatory.cpp:132)
==384065==  Address 0x4de6b31 is 1 bytes inside a block of size 2 free'd
==384065==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384065==    by 0x40760E: ft_strjoin (get_next_line_utils.c:82)
==384065==    by 0x40738B: get_next_line (get_next_line.c:48)
==384065==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384065==    by 0x406CD7: main (mandatory.cpp:132)
==384065==  Block was alloc'd at
==384065==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384065==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384065==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384065==    by 0x406CD7: main (mandatory.cpp:132)
==384065== 
==384065== Invalid free() / delete / delete[] / realloc()
==384065==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384065==    by 0x40760E: ft_strjoin (get_next_line_utils.c:82)
==384065==    by 0x40738B: get_next_line (get_next_line.c:48)
==384065==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384065==    by 0x406CD7: main (mandatory.cpp:132)
==384065==  Address 0x4de6b30 is 0 bytes inside a block of size 2 free'd
==384065==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384065==    by 0x40760E: ft_strjoin (get_next_line_utils.c:82)
==384065==    by 0x40738B: get_next_line (get_next_line.c:48)
==384065==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384065==    by 0x406CD7: main (mandatory.cpp:132)
==384065==  Block was alloc'd at
==384065==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384065==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384065==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384065==    by 0x406CD7: main (mandatory.cpp:132)
==384065== 
==384072== Syscall param read(buf) points to unaddressable byte(s)
==384072==    at 0x4CB8992: read (read.c:26)
==384072==    by 0x40733B: get_next_line (get_next_line.c:37)
==384072==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384072==    by 0x406F03: main (mandatory.cpp:136)
==384072==  Address 0x4de6e40 is 0 bytes inside a block of size 2 free'd
==384072==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384072==    by 0x40760E: ft_strjoin (get_next_line_utils.c:82)
==384072==    by 0x40738B: get_next_line (get_next_line.c:48)
==384072==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384072==    by 0x406F03: main (mandatory.cpp:136)
==384072==  Block was alloc'd at
==384072==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384072==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384072==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384072==    by 0x406F03: main (mandatory.cpp:136)
==384072== 
==384072== Invalid write of size 1
==384072==    at 0x40734C: get_next_line (get_next_line.c:38)
==384072==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384072==    by 0x406F03: main (mandatory.cpp:136)
==384072==  Address 0x4de6e41 is 1 bytes inside a block of size 2 free'd
==384072==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384072==    by 0x40760E: ft_strjoin (get_next_line_utils.c:82)
==384072==    by 0x40738B: get_next_line (get_next_line.c:48)
==384072==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384072==    by 0x406F03: main (mandatory.cpp:136)
==384072==  Block was alloc'd at
==384072==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384072==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384072==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384072==    by 0x406F03: main (mandatory.cpp:136)
==384072== 
==384072== Invalid read of size 1
==384072==    at 0x4074E8: ft_strlen (get_next_line_utils.c:43)
==384072==    by 0x407523: ft_strjoin (get_next_line_utils.c:59)
==384072==    by 0x40738B: get_next_line (get_next_line.c:48)
==384072==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384072==    by 0x406F03: main (mandatory.cpp:136)
==384072==  Address 0x4de6e41 is 1 bytes inside a block of size 2 free'd
==384072==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384072==    by 0x40760E: ft_strjoin (get_next_line_utils.c:82)
==384072==    by 0x40738B: get_next_line (get_next_line.c:48)
==384072==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384072==    by 0x406F03: main (mandatory.cpp:136)
==384072==  Block was alloc'd at
==384072==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384072==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384072==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384072==    by 0x406F03: main (mandatory.cpp:136)
==384072== 
==384072== Invalid read of size 1
==384072==    at 0x4075DB: ft_strjoin (get_next_line_utils.c:75)
==384072==    by 0x40738B: get_next_line (get_next_line.c:48)
==384072==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384072==    by 0x406F03: main (mandatory.cpp:136)
==384072==  Address 0x4de6e41 is 1 bytes inside a block of size 2 free'd
==384072==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384072==    by 0x40760E: ft_strjoin (get_next_line_utils.c:82)
==384072==    by 0x40738B: get_next_line (get_next_line.c:48)
==384072==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384072==    by 0x406F03: main (mandatory.cpp:136)
==384072==  Block was alloc'd at
==384072==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384072==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384072==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384072==    by 0x406F03: main (mandatory.cpp:136)
==384072== 
==384072== Invalid free() / delete / delete[] / realloc()
==384072==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384072==    by 0x40760E: ft_strjoin (get_next_line_utils.c:82)
==384072==    by 0x40738B: get_next_line (get_next_line.c:48)
==384072==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384072==    by 0x406F03: main (mandatory.cpp:136)
==384072==  Address 0x4de6e40 is 0 bytes inside a block of size 2 free'd
==384072==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384072==    by 0x40760E: ft_strjoin (get_next_line_utils.c:82)
==384072==    by 0x40738B: get_next_line (get_next_line.c:48)
==384072==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384072==    by 0x406F03: main (mandatory.cpp:136)
==384072==  Block was alloc'd at
==384072==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384072==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384072==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384072==    by 0x406F03: main (mandatory.cpp:136)
==384072== 
==384075== Syscall param read(buf) points to unaddressable byte(s)
==384075==    at 0x4CB8992: read (read.c:26)
==384075==    by 0x40733B: get_next_line (get_next_line.c:37)
==384075==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384075==    by 0x40712E: main (mandatory.cpp:141)
==384075==  Address 0x4de6e40 is 0 bytes inside a block of size 2 free'd
==384075==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384075==    by 0x40760E: ft_strjoin (get_next_line_utils.c:82)
==384075==    by 0x40738B: get_next_line (get_next_line.c:48)
==384075==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384075==    by 0x40712E: main (mandatory.cpp:141)
==384075==  Block was alloc'd at
==384075==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384075==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384075==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384075==    by 0x40712E: main (mandatory.cpp:141)
==384075== 
==384075== Invalid write of size 1
==384075==    at 0x40734C: get_next_line (get_next_line.c:38)
==384075==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384075==    by 0x40712E: main (mandatory.cpp:141)
==384075==  Address 0x4de6e41 is 1 bytes inside a block of size 2 free'd
==384075==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384075==    by 0x40760E: ft_strjoin (get_next_line_utils.c:82)
==384075==    by 0x40738B: get_next_line (get_next_line.c:48)
==384075==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384075==    by 0x40712E: main (mandatory.cpp:141)
==384075==  Block was alloc'd at
==384075==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384075==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384075==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384075==    by 0x40712E: main (mandatory.cpp:141)
==384075== 
==384075== Invalid read of size 1
==384075==    at 0x4074E8: ft_strlen (get_next_line_utils.c:43)
==384075==    by 0x407523: ft_strjoin (get_next_line_utils.c:59)
==384075==    by 0x40738B: get_next_line (get_next_line.c:48)
==384075==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384075==    by 0x40712E: main (mandatory.cpp:141)
==384075==  Address 0x4de6e41 is 1 bytes inside a block of size 2 free'd
==384075==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384075==    by 0x40760E: ft_strjoin (get_next_line_utils.c:82)
==384075==    by 0x40738B: get_next_line (get_next_line.c:48)
==384075==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384075==    by 0x40712E: main (mandatory.cpp:141)
==384075==  Block was alloc'd at
==384075==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384075==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384075==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384075==    by 0x40712E: main (mandatory.cpp:141)
==384075== 
==384075== Invalid read of size 1
==384075==    at 0x4075DB: ft_strjoin (get_next_line_utils.c:75)
==384075==    by 0x40738B: get_next_line (get_next_line.c:48)
==384075==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384075==    by 0x40712E: main (mandatory.cpp:141)
==384075==  Address 0x4de6e41 is 1 bytes inside a block of size 2 free'd
==384075==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384075==    by 0x40760E: ft_strjoin (get_next_line_utils.c:82)
==384075==    by 0x40738B: get_next_line (get_next_line.c:48)
==384075==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384075==    by 0x40712E: main (mandatory.cpp:141)
==384075==  Block was alloc'd at
==384075==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384075==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384075==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384075==    by 0x40712E: main (mandatory.cpp:141)
==384075== 
==384075== Invalid free() / delete / delete[] / realloc()
==384075==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384075==    by 0x40760E: ft_strjoin (get_next_line_utils.c:82)
==384075==    by 0x40738B: get_next_line (get_next_line.c:48)
==384075==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384075==    by 0x40712E: main (mandatory.cpp:141)
==384075==  Address 0x4de6e40 is 0 bytes inside a block of size 2 free'd
==384075==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384075==    by 0x40760E: ft_strjoin (get_next_line_utils.c:82)
==384075==    by 0x40738B: get_next_line (get_next_line.c:48)
==384075==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384075==    by 0x40712E: main (mandatory.cpp:141)
==384075==  Block was alloc'd at
==384075==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384075==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384075==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384075==    by 0x40712E: main (mandatory.cpp:141)
==384075== 
==384075== Invalid read of size 1
==384075==    at 0x407721: f_del_front_bn (get_next_line_utils.c:163)
==384075==    by 0x4073CD: get_next_line (get_next_line.c:52)
==384075==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384075==    by 0x40712E: main (mandatory.cpp:141)
==384075==  Address 0x4de7df0 is 0 bytes inside a block of size 43 free'd
==384075==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384075==    by 0x4076FF: f_search_bn (get_next_line_utils.c:119)
==384075==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384075==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384075==    by 0x40712E: main (mandatory.cpp:141)
==384075==  Block was alloc'd at
==384075==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384075==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==384075==    by 0x40738B: get_next_line (get_next_line.c:48)
==384075==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384075==    by 0x40712E: main (mandatory.cpp:141)
==384075== 
==384075== Invalid free() / delete / delete[] / realloc()
==384075==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384075==    by 0x4073E0: get_next_line (get_next_line.c:53)
==384075==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384075==    by 0x40712E: main (mandatory.cpp:141)
==384075==  Address 0x4de6e40 is 0 bytes inside a block of size 2 free'd
==384075==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384075==    by 0x40760E: ft_strjoin (get_next_line_utils.c:82)
==384075==    by 0x40738B: get_next_line (get_next_line.c:48)
==384075==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384075==    by 0x40712E: main (mandatory.cpp:141)
==384075==  Block was alloc'd at
==384075==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384075==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384075==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384075==    by 0x40712E: main (mandatory.cpp:141)
==384075== 
==384075== Invalid read of size 1
==384075==    at 0x4074E8: ft_strlen (get_next_line_utils.c:43)
==384075==    by 0x407515: ft_strjoin (get_next_line_utils.c:59)
==384075==    by 0x40738B: get_next_line (get_next_line.c:48)
==384075==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384075==    by 0x40713F: main (mandatory.cpp:141)
==384075==  Address 0x4de7e1a is 42 bytes inside a block of size 43 free'd
==384075==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384075==    by 0x4076FF: f_search_bn (get_next_line_utils.c:119)
==384075==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384075==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384075==    by 0x40712E: main (mandatory.cpp:141)
==384075==  Block was alloc'd at
==384075==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384075==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==384075==    by 0x40738B: get_next_line (get_next_line.c:48)
==384075==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384075==    by 0x40712E: main (mandatory.cpp:141)
==384075== 
==384075== Invalid read of size 1
==384075==    at 0x40758F: ft_strjoin (get_next_line_utils.c:68)
==384075==    by 0x40738B: get_next_line (get_next_line.c:48)
==384075==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384075==    by 0x40713F: main (mandatory.cpp:141)
==384075==  Address 0x4de7e1a is 42 bytes inside a block of size 43 free'd
==384075==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384075==    by 0x4076FF: f_search_bn (get_next_line_utils.c:119)
==384075==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384075==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384075==    by 0x40712E: main (mandatory.cpp:141)
==384075==  Block was alloc'd at
==384075==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384075==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==384075==    by 0x40738B: get_next_line (get_next_line.c:48)
==384075==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384075==    by 0x40712E: main (mandatory.cpp:141)
==384075== 
==384075== Invalid free() / delete / delete[] / realloc()
==384075==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384075==    by 0x407602: ft_strjoin (get_next_line_utils.c:81)
==384075==    by 0x40738B: get_next_line (get_next_line.c:48)
==384075==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384075==    by 0x40713F: main (mandatory.cpp:141)
==384075==  Address 0x4de7e1a is 42 bytes inside a block of size 43 free'd
==384075==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384075==    by 0x4076FF: f_search_bn (get_next_line_utils.c:119)
==384075==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384075==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384075==    by 0x40712E: main (mandatory.cpp:141)
==384075==  Block was alloc'd at
==384075==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384075==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==384075==    by 0x40738B: get_next_line (get_next_line.c:48)
==384075==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384075==    by 0x40712E: main (mandatory.cpp:141)
==384075== 
==384075== Invalid read of size 1
==384075==    at 0x407721: f_del_front_bn (get_next_line_utils.c:163)
==384075==    by 0x4073CD: get_next_line (get_next_line.c:52)
==384075==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384075==    by 0x40713F: main (mandatory.cpp:141)
==384075==  Address 0x4de7f20 is 0 bytes inside a block of size 2 free'd
==384075==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384075==    by 0x4076FF: f_search_bn (get_next_line_utils.c:119)
==384075==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384075==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384075==    by 0x40713F: main (mandatory.cpp:141)
==384075==  Block was alloc'd at
==384075==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384075==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==384075==    by 0x40738B: get_next_line (get_next_line.c:48)
==384075==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384075==    by 0x40713F: main (mandatory.cpp:141)
==384075== 
==384075== Invalid free() / delete / delete[] / realloc()
==384075==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384075==    by 0x4073E0: get_next_line (get_next_line.c:53)
==384075==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384075==    by 0x40713F: main (mandatory.cpp:141)
==384075==  Address 0x4de7ed0 is 0 bytes inside a block of size 2 free'd
==384075==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384075==    by 0x40760E: ft_strjoin (get_next_line_utils.c:82)
==384075==    by 0x40738B: get_next_line (get_next_line.c:48)
==384075==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384075==    by 0x40713F: main (mandatory.cpp:141)
==384075==  Block was alloc'd at
==384075==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384075==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384075==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384075==    by 0x40713F: main (mandatory.cpp:141)
==384075== 
==384075== Invalid read of size 1
==384075==    at 0x40758F: ft_strjoin (get_next_line_utils.c:68)
==384075==    by 0x40738B: get_next_line (get_next_line.c:48)
==384075==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384075==    by 0x407150: main (mandatory.cpp:141)
==384075==  Address 0x4de7f21 is 1 bytes inside a block of size 2 free'd
==384075==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384075==    by 0x4076FF: f_search_bn (get_next_line_utils.c:119)
==384075==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384075==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384075==    by 0x40713F: main (mandatory.cpp:141)
==384075==  Block was alloc'd at
==384075==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384075==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==384075==    by 0x40738B: get_next_line (get_next_line.c:48)
==384075==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384075==    by 0x40713F: main (mandatory.cpp:141)
==384075== 
==384075== Syscall param read(buf) points to unaddressable byte(s)
==384075==    at 0x4CB8992: read (read.c:26)
==384075==    by 0x40733B: get_next_line (get_next_line.c:37)
==384075==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384075==    by 0x407150: main (mandatory.cpp:141)
==384075==  Address 0x4de7fc0 is 0 bytes inside a block of size 2 free'd
==384075==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384075==    by 0x40760E: ft_strjoin (get_next_line_utils.c:82)
==384075==    by 0x40738B: get_next_line (get_next_line.c:48)
==384075==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384075==    by 0x407150: main (mandatory.cpp:141)
==384075==  Block was alloc'd at
==384075==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384075==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384075==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384075==    by 0x407150: main (mandatory.cpp:141)
==384075== 
==384075== Invalid write of size 1
==384075==    at 0x40734C: get_next_line (get_next_line.c:38)
==384075==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384075==    by 0x407150: main (mandatory.cpp:141)
==384075==  Address 0x4de7fc1 is 1 bytes inside a block of size 2 free'd
==384075==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384075==    by 0x40760E: ft_strjoin (get_next_line_utils.c:82)
==384075==    by 0x40738B: get_next_line (get_next_line.c:48)
==384075==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384075==    by 0x407150: main (mandatory.cpp:141)
==384075==  Block was alloc'd at
==384075==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384075==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384075==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384075==    by 0x407150: main (mandatory.cpp:141)
==384075== 
==384075== Invalid read of size 1
==384075==    at 0x4075DB: ft_strjoin (get_next_line_utils.c:75)
==384075==    by 0x40738B: get_next_line (get_next_line.c:48)
==384075==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384075==    by 0x407150: main (mandatory.cpp:141)
==384075==  Address 0x4de7fc1 is 1 bytes inside a block of size 2 free'd
==384075==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384075==    by 0x40760E: ft_strjoin (get_next_line_utils.c:82)
==384075==    by 0x40738B: get_next_line (get_next_line.c:48)
==384075==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384075==    by 0x407150: main (mandatory.cpp:141)
==384075==  Block was alloc'd at
==384075==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384075==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384075==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384075==    by 0x407150: main (mandatory.cpp:141)
==384075== 
==384075== Invalid read of size 1
==384075==    at 0x407721: f_del_front_bn (get_next_line_utils.c:163)
==384075==    by 0x4073CD: get_next_line (get_next_line.c:52)
==384075==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384075==    by 0x407150: main (mandatory.cpp:141)
==384075==  Address 0x4de8f90 is 0 bytes inside a block of size 44 free'd
==384075==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384075==    by 0x4076FF: f_search_bn (get_next_line_utils.c:119)
==384075==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384075==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384075==    by 0x407150: main (mandatory.cpp:141)
==384075==  Block was alloc'd at
==384075==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384075==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==384075==    by 0x40738B: get_next_line (get_next_line.c:48)
==384075==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384075==    by 0x407150: main (mandatory.cpp:141)
==384075== 
==384075== Invalid free() / delete / delete[] / realloc()
==384075==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384075==    by 0x4073E0: get_next_line (get_next_line.c:53)
==384075==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384075==    by 0x407150: main (mandatory.cpp:141)
==384075==  Address 0x4de7fc0 is 0 bytes inside a block of size 2 free'd
==384075==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384075==    by 0x40760E: ft_strjoin (get_next_line_utils.c:82)
==384075==    by 0x40738B: get_next_line (get_next_line.c:48)
==384075==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384075==    by 0x407150: main (mandatory.cpp:141)
==384075==  Block was alloc'd at
==384075==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384075==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384075==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384075==    by 0x407150: main (mandatory.cpp:141)
==384075== 
==384075== Invalid read of size 1
==384075==    at 0x40758F: ft_strjoin (get_next_line_utils.c:68)
==384075==    by 0x40738B: get_next_line (get_next_line.c:48)
==384075==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384075==    by 0x407161: main (mandatory.cpp:141)
==384075==  Address 0x4de8fbb is 43 bytes inside a block of size 44 free'd
==384075==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384075==    by 0x4076FF: f_search_bn (get_next_line_utils.c:119)
==384075==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384075==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384075==    by 0x407150: main (mandatory.cpp:141)
==384075==  Block was alloc'd at
==384075==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384075==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==384075==    by 0x40738B: get_next_line (get_next_line.c:48)
==384075==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384075==    by 0x407150: main (mandatory.cpp:141)
==384075== 
==384075== Invalid read of size 1
==384075==    at 0x407721: f_del_front_bn (get_next_line_utils.c:163)
==384075==    by 0x4073CD: get_next_line (get_next_line.c:52)
==384075==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384075==    by 0x407161: main (mandatory.cpp:141)
==384075==  Address 0x4de90c0 is 0 bytes inside a block of size 2 free'd
==384075==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384075==    by 0x4076FF: f_search_bn (get_next_line_utils.c:119)
==384075==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384075==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384075==    by 0x407161: main (mandatory.cpp:141)
==384075==  Block was alloc'd at
==384075==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384075==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==384075==    by 0x40738B: get_next_line (get_next_line.c:48)
==384075==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384075==    by 0x407161: main (mandatory.cpp:141)
==384075== 
==384075== Invalid free() / delete / delete[] / realloc()
==384075==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384075==    by 0x4073E0: get_next_line (get_next_line.c:53)
==384075==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384075==    by 0x407161: main (mandatory.cpp:141)
==384075==  Address 0x4de9070 is 0 bytes inside a block of size 2 free'd
==384075==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384075==    by 0x40760E: ft_strjoin (get_next_line_utils.c:82)
==384075==    by 0x40738B: get_next_line (get_next_line.c:48)
==384075==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384075==    by 0x407161: main (mandatory.cpp:141)
==384075==  Block was alloc'd at
==384075==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384075==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384075==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384075==    by 0x407161: main (mandatory.cpp:141)
==384075== 
==384075== Invalid read of size 1
==384075==    at 0x40758F: ft_strjoin (get_next_line_utils.c:68)
==384075==    by 0x40738B: get_next_line (get_next_line.c:48)
==384075==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384075==    by 0x407172: main (mandatory.cpp:141)
==384075==  Address 0x4de90c1 is 1 bytes inside a block of size 2 free'd
==384075==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384075==    by 0x4076FF: f_search_bn (get_next_line_utils.c:119)
==384075==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384075==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384075==    by 0x407161: main (mandatory.cpp:141)
==384075==  Block was alloc'd at
==384075==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384075==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==384075==    by 0x40738B: get_next_line (get_next_line.c:48)
==384075==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384075==    by 0x407161: main (mandatory.cpp:141)
==384075== 
==384075== Syscall param read(buf) points to unaddressable byte(s)
==384075==    at 0x4CB8992: read (read.c:26)
==384075==    by 0x40733B: get_next_line (get_next_line.c:37)
==384075==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384075==    by 0x407172: main (mandatory.cpp:141)
==384075==  Address 0x4de9160 is 0 bytes inside a block of size 2 free'd
==384075==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384075==    by 0x40760E: ft_strjoin (get_next_line_utils.c:82)
==384075==    by 0x40738B: get_next_line (get_next_line.c:48)
==384075==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384075==    by 0x407172: main (mandatory.cpp:141)
==384075==  Block was alloc'd at
==384075==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384075==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384075==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384075==    by 0x407172: main (mandatory.cpp:141)
==384075== 
==384075== Invalid write of size 1
==384075==    at 0x40734C: get_next_line (get_next_line.c:38)
==384075==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384075==    by 0x407172: main (mandatory.cpp:141)
==384075==  Address 0x4de9161 is 1 bytes inside a block of size 2 free'd
==384075==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384075==    by 0x40760E: ft_strjoin (get_next_line_utils.c:82)
==384075==    by 0x40738B: get_next_line (get_next_line.c:48)
==384075==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384075==    by 0x407172: main (mandatory.cpp:141)
==384075==  Block was alloc'd at
==384075==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384075==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384075==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384075==    by 0x407172: main (mandatory.cpp:141)
==384075== 
==384075== Invalid read of size 1
==384075==    at 0x4075DB: ft_strjoin (get_next_line_utils.c:75)
==384075==    by 0x40738B: get_next_line (get_next_line.c:48)
==384075==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384075==    by 0x407172: main (mandatory.cpp:141)
==384075==  Address 0x4de9161 is 1 bytes inside a block of size 2 free'd
==384075==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384075==    by 0x40760E: ft_strjoin (get_next_line_utils.c:82)
==384075==    by 0x40738B: get_next_line (get_next_line.c:48)
==384075==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384075==    by 0x407172: main (mandatory.cpp:141)
==384075==  Block was alloc'd at
==384075==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384075==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384075==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384075==    by 0x407172: main (mandatory.cpp:141)
==384075== 
==384075== Invalid read of size 1
==384075==    at 0x407721: f_del_front_bn (get_next_line_utils.c:163)
==384075==    by 0x4073CD: get_next_line (get_next_line.c:52)
==384075==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384075==    by 0x407172: main (mandatory.cpp:141)
==384075==  Address 0x4dea1a0 is 0 bytes inside a block of size 45 free'd
==384075==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384075==    by 0x4076FF: f_search_bn (get_next_line_utils.c:119)
==384075==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384075==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384075==    by 0x407172: main (mandatory.cpp:141)
==384075==  Block was alloc'd at
==384075==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384075==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==384075==    by 0x40738B: get_next_line (get_next_line.c:48)
==384075==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384075==    by 0x407172: main (mandatory.cpp:141)
==384075== 
==384075== Invalid free() / delete / delete[] / realloc()
==384075==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384075==    by 0x4073E0: get_next_line (get_next_line.c:53)
==384075==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384075==    by 0x407172: main (mandatory.cpp:141)
==384075==  Address 0x4de9160 is 0 bytes inside a block of size 2 free'd
==384075==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384075==    by 0x40760E: ft_strjoin (get_next_line_utils.c:82)
==384075==    by 0x40738B: get_next_line (get_next_line.c:48)
==384075==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384075==    by 0x407172: main (mandatory.cpp:141)
==384075==  Block was alloc'd at
==384075==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384075==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384075==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384075==    by 0x407172: main (mandatory.cpp:141)
==384075== 
==384075== Invalid read of size 1
==384075==    at 0x40758F: ft_strjoin (get_next_line_utils.c:68)
==384075==    by 0x40738B: get_next_line (get_next_line.c:48)
==384075==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384075==    by 0x407183: main (mandatory.cpp:141)
==384075==  Address 0x4dea1cc is 44 bytes inside a block of size 45 free'd
==384075==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384075==    by 0x4076FF: f_search_bn (get_next_line_utils.c:119)
==384075==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384075==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384075==    by 0x407172: main (mandatory.cpp:141)
==384075==  Block was alloc'd at
==384075==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384075==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==384075==    by 0x40738B: get_next_line (get_next_line.c:48)
==384075==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384075==    by 0x407172: main (mandatory.cpp:141)
==384075== 
==384075== Invalid read of size 1
==384075==    at 0x407721: f_del_front_bn (get_next_line_utils.c:163)
==384075==    by 0x4073CD: get_next_line (get_next_line.c:52)
==384075==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384075==    by 0x407183: main (mandatory.cpp:141)
==384075==  Address 0x4dea2d0 is 0 bytes inside a block of size 2 free'd
==384075==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384075==    by 0x4076FF: f_search_bn (get_next_line_utils.c:119)
==384075==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384075==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384075==    by 0x407183: main (mandatory.cpp:141)
==384075==  Block was alloc'd at
==384075==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384075==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==384075==    by 0x40738B: get_next_line (get_next_line.c:48)
==384075==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384075==    by 0x407183: main (mandatory.cpp:141)
==384075== 
==384075== Invalid free() / delete / delete[] / realloc()
==384075==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384075==    by 0x4073E0: get_next_line (get_next_line.c:53)
==384075==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384075==    by 0x407183: main (mandatory.cpp:141)
==384075==  Address 0x4dea280 is 0 bytes inside a block of size 2 free'd
==384075==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384075==    by 0x40760E: ft_strjoin (get_next_line_utils.c:82)
==384075==    by 0x40738B: get_next_line (get_next_line.c:48)
==384075==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384075==    by 0x407183: main (mandatory.cpp:141)
==384075==  Block was alloc'd at
==384075==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384075==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384075==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384075==    by 0x407183: main (mandatory.cpp:141)
==384075== 
==384075== Invalid read of size 1
==384075==    at 0x40758F: ft_strjoin (get_next_line_utils.c:68)
==384075==    by 0x40738B: get_next_line (get_next_line.c:48)
==384075==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384075==    by 0x407194: main (mandatory.cpp:141)
==384075==  Address 0x4dea2d1 is 1 bytes inside a block of size 2 free'd
==384075==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384075==    by 0x4076FF: f_search_bn (get_next_line_utils.c:119)
==384075==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384075==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384075==    by 0x407183: main (mandatory.cpp:141)
==384075==  Block was alloc'd at
==384075==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384075==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==384075==    by 0x40738B: get_next_line (get_next_line.c:48)
==384075==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384075==    by 0x407183: main (mandatory.cpp:141)
==384075== 
==384075== Syscall param read(buf) points to unaddressable byte(s)
==384075==    at 0x4CB8992: read (read.c:26)
==384075==    by 0x40733B: get_next_line (get_next_line.c:37)
==384075==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384075==    by 0x407194: main (mandatory.cpp:141)
==384075==  Address 0x4dea370 is 0 bytes inside a block of size 2 free'd
==384075==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384075==    by 0x40760E: ft_strjoin (get_next_line_utils.c:82)
==384075==    by 0x40738B: get_next_line (get_next_line.c:48)
==384075==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384075==    by 0x407194: main (mandatory.cpp:141)
==384075==  Block was alloc'd at
==384075==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384075==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384075==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384075==    by 0x407194: main (mandatory.cpp:141)
==384075== 
==384075== Invalid write of size 1
==384075==    at 0x40734C: get_next_line (get_next_line.c:38)
==384075==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384075==    by 0x407194: main (mandatory.cpp:141)
==384075==  Address 0x4dea371 is 1 bytes inside a block of size 2 free'd
==384075==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384075==    by 0x40760E: ft_strjoin (get_next_line_utils.c:82)
==384075==    by 0x40738B: get_next_line (get_next_line.c:48)
==384075==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384075==    by 0x407194: main (mandatory.cpp:141)
==384075==  Block was alloc'd at
==384075==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384075==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384075==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384075==    by 0x407194: main (mandatory.cpp:141)
==384075== 
==384075== Invalid read of size 1
==384075==    at 0x4075DB: ft_strjoin (get_next_line_utils.c:75)
==384075==    by 0x40738B: get_next_line (get_next_line.c:48)
==384075==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384075==    by 0x407194: main (mandatory.cpp:141)
==384075==  Address 0x4dea371 is 1 bytes inside a block of size 2 free'd
==384075==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384075==    by 0x40760E: ft_strjoin (get_next_line_utils.c:82)
==384075==    by 0x40738B: get_next_line (get_next_line.c:48)
==384075==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384075==    by 0x407194: main (mandatory.cpp:141)
==384075==  Block was alloc'd at
==384075==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384075==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384075==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384075==    by 0x407194: main (mandatory.cpp:141)
==384075== 
==384075== Invalid read of size 1
==384075==    at 0x407721: f_del_front_bn (get_next_line_utils.c:163)
==384075==    by 0x4073CD: get_next_line (get_next_line.c:52)
==384075==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384075==    by 0x407194: main (mandatory.cpp:141)
==384075==  Address 0x4deb340 is 0 bytes inside a block of size 44 free'd
==384075==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384075==    by 0x4076FF: f_search_bn (get_next_line_utils.c:119)
==384075==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384075==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384075==    by 0x407194: main (mandatory.cpp:141)
==384075==  Block was alloc'd at
==384075==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384075==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==384075==    by 0x40738B: get_next_line (get_next_line.c:48)
==384075==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384075==    by 0x407194: main (mandatory.cpp:141)
==384075== 
==384075== Invalid free() / delete / delete[] / realloc()
==384075==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384075==    by 0x4073E0: get_next_line (get_next_line.c:53)
==384075==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384075==    by 0x407194: main (mandatory.cpp:141)
==384075==  Address 0x4dea370 is 0 bytes inside a block of size 2 free'd
==384075==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384075==    by 0x40760E: ft_strjoin (get_next_line_utils.c:82)
==384075==    by 0x40738B: get_next_line (get_next_line.c:48)
==384075==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384075==    by 0x407194: main (mandatory.cpp:141)
==384075==  Block was alloc'd at
==384075==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384075==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384075==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384075==    by 0x407194: main (mandatory.cpp:141)
==384075== 
==384075== Invalid read of size 1
==384075==    at 0x40758F: ft_strjoin (get_next_line_utils.c:68)
==384075==    by 0x40738B: get_next_line (get_next_line.c:48)
==384075==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384075==    by 0x4071A5: main (mandatory.cpp:141)
==384075==  Address 0x4deb36b is 43 bytes inside a block of size 44 free'd
==384075==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384075==    by 0x4076FF: f_search_bn (get_next_line_utils.c:119)
==384075==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384075==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384075==    by 0x407194: main (mandatory.cpp:141)
==384075==  Block was alloc'd at
==384075==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384075==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==384075==    by 0x40738B: get_next_line (get_next_line.c:48)
==384075==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384075==    by 0x407194: main (mandatory.cpp:141)
==384075== 
==384075== Invalid read of size 1
==384075==    at 0x407721: f_del_front_bn (get_next_line_utils.c:163)
==384075==    by 0x4073CD: get_next_line (get_next_line.c:52)
==384075==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384075==    by 0x4071A5: main (mandatory.cpp:141)
==384075==  Address 0x4deb470 is 0 bytes inside a block of size 2 free'd
==384075==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384075==    by 0x4076FF: f_search_bn (get_next_line_utils.c:119)
==384075==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384075==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384075==    by 0x4071A5: main (mandatory.cpp:141)
==384075==  Block was alloc'd at
==384075==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384075==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==384075==    by 0x40738B: get_next_line (get_next_line.c:48)
==384075==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384075==    by 0x4071A5: main (mandatory.cpp:141)
==384075== 
==384075== Invalid free() / delete / delete[] / realloc()
==384075==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384075==    by 0x4073E0: get_next_line (get_next_line.c:53)
==384075==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384075==    by 0x4071A5: main (mandatory.cpp:141)
==384075==  Address 0x4deb420 is 0 bytes inside a block of size 2 free'd
==384075==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384075==    by 0x40760E: ft_strjoin (get_next_line_utils.c:82)
==384075==    by 0x40738B: get_next_line (get_next_line.c:48)
==384075==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384075==    by 0x4071A5: main (mandatory.cpp:141)
==384075==  Block was alloc'd at
==384075==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384075==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384075==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384075==    by 0x4071A5: main (mandatory.cpp:141)
==384075== 
==384075== Invalid read of size 1
==384075==    at 0x40758F: ft_strjoin (get_next_line_utils.c:68)
==384075==    by 0x40738B: get_next_line (get_next_line.c:48)
==384075==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384075==    by 0x4071B6: main (mandatory.cpp:141)
==384075==  Address 0x4deb471 is 1 bytes inside a block of size 2 free'd
==384075==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384075==    by 0x4076FF: f_search_bn (get_next_line_utils.c:119)
==384075==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384075==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384075==    by 0x4071A5: main (mandatory.cpp:141)
==384075==  Block was alloc'd at
==384075==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384075==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==384075==    by 0x40738B: get_next_line (get_next_line.c:48)
==384075==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384075==    by 0x4071A5: main (mandatory.cpp:141)
==384075== 
==384075== Syscall param read(buf) points to unaddressable byte(s)
==384075==    at 0x4CB8992: read (read.c:26)
==384075==    by 0x40733B: get_next_line (get_next_line.c:37)
==384075==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384075==    by 0x4071B6: main (mandatory.cpp:141)
==384075==  Address 0x4deb510 is 0 bytes inside a block of size 2 free'd
==384075==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384075==    by 0x40760E: ft_strjoin (get_next_line_utils.c:82)
==384075==    by 0x40738B: get_next_line (get_next_line.c:48)
==384075==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384075==    by 0x4071B6: main (mandatory.cpp:141)
==384075==  Block was alloc'd at
==384075==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384075==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384075==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384075==    by 0x4071B6: main (mandatory.cpp:141)
==384075== 
==384075== Invalid write of size 1
==384075==    at 0x40734C: get_next_line (get_next_line.c:38)
==384075==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384075==    by 0x4071B6: main (mandatory.cpp:141)
==384075==  Address 0x4deb511 is 1 bytes inside a block of size 2 free'd
==384075==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384075==    by 0x40760E: ft_strjoin (get_next_line_utils.c:82)
==384075==    by 0x40738B: get_next_line (get_next_line.c:48)
==384075==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384075==    by 0x4071B6: main (mandatory.cpp:141)
==384075==  Block was alloc'd at
==384075==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384075==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384075==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384075==    by 0x4071B6: main (mandatory.cpp:141)
==384075== 
==384075== Invalid read of size 1
==384075==    at 0x4075DB: ft_strjoin (get_next_line_utils.c:75)
==384075==    by 0x40738B: get_next_line (get_next_line.c:48)
==384075==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384075==    by 0x4071B6: main (mandatory.cpp:141)
==384075==  Address 0x4deb511 is 1 bytes inside a block of size 2 free'd
==384075==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384075==    by 0x40760E: ft_strjoin (get_next_line_utils.c:82)
==384075==    by 0x40738B: get_next_line (get_next_line.c:48)
==384075==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384075==    by 0x4071B6: main (mandatory.cpp:141)
==384075==  Block was alloc'd at
==384075==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384075==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384075==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384075==    by 0x4071B6: main (mandatory.cpp:141)
==384075== 
==384075== Invalid read of size 1
==384075==    at 0x407721: f_del_front_bn (get_next_line_utils.c:163)
==384075==    by 0x4073CD: get_next_line (get_next_line.c:52)
==384075==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384075==    by 0x4071B6: main (mandatory.cpp:141)
==384075==  Address 0x4dec470 is 0 bytes inside a block of size 43 free'd
==384075==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384075==    by 0x4076FF: f_search_bn (get_next_line_utils.c:119)
==384075==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384075==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384075==    by 0x4071B6: main (mandatory.cpp:141)
==384075==  Block was alloc'd at
==384075==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384075==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==384075==    by 0x40738B: get_next_line (get_next_line.c:48)
==384075==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384075==    by 0x4071B6: main (mandatory.cpp:141)
==384075== 
==384075== Invalid free() / delete / delete[] / realloc()
==384075==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384075==    by 0x4073E0: get_next_line (get_next_line.c:53)
==384075==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384075==    by 0x4071B6: main (mandatory.cpp:141)
==384075==  Address 0x4deb510 is 0 bytes inside a block of size 2 free'd
==384075==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384075==    by 0x40760E: ft_strjoin (get_next_line_utils.c:82)
==384075==    by 0x40738B: get_next_line (get_next_line.c:48)
==384075==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384075==    by 0x4071B6: main (mandatory.cpp:141)
==384075==  Block was alloc'd at
==384075==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384075==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384075==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384075==    by 0x4071B6: main (mandatory.cpp:141)
==384075== 
==384075== Invalid read of size 1
==384075==    at 0x40758F: ft_strjoin (get_next_line_utils.c:68)
==384075==    by 0x40738B: get_next_line (get_next_line.c:48)
==384075==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384075==    by 0x4071C1: main (mandatory.cpp:141)
==384075==  Address 0x4dec49a is 42 bytes inside a block of size 43 free'd
==384075==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384075==    by 0x4076FF: f_search_bn (get_next_line_utils.c:119)
==384075==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384075==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384075==    by 0x4071B6: main (mandatory.cpp:141)
==384075==  Block was alloc'd at
==384075==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384075==    by 0x407539: ft_strjoin (get_next_line_utils.c:64)
==384075==    by 0x40738B: get_next_line (get_next_line.c:48)
==384075==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384075==    by 0x4071B6: main (mandatory.cpp:141)
==384075== 
==384103== Invalid write of size 1
==384103==    at 0x40737E: get_next_line (get_next_line.c:38)
==384103==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384103==    by 0x404BC6: main (mandatory.cpp:25)
==384103==  Address 0x4de329f is 1 bytes before a block of size 43 alloc'd
==384103==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384103==    by 0x40732E: get_next_line (get_next_line.c:27)
==384103==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384103==    by 0x404BC6: main (mandatory.cpp:25)
==384103== 
==384103== Conditional jump or move depends on uninitialised value(s)
==384103==    at 0x40751F: ft_strlen (get_next_line_utils.c:43)
==384103==    by 0x407555: ft_strjoin (get_next_line_utils.c:59)
==384103==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384103==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384103==    by 0x404BC6: main (mandatory.cpp:25)
==384103== 
==384103== Conditional jump or move depends on uninitialised value(s)
==384103==    at 0x407612: ft_strjoin (get_next_line_utils.c:75)
==384103==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384103==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384103==    by 0x404BC6: main (mandatory.cpp:25)
==384103== 
==384103== Invalid write of size 1
==384103==    at 0x40737E: get_next_line (get_next_line.c:38)
==384103==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384103==    by 0x404BE8: main (mandatory.cpp:25)
==384103==  Address 0x4de43ef is 1 bytes before a block of size 43 alloc'd
==384103==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384103==    by 0x40732E: get_next_line (get_next_line.c:27)
==384103==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384103==    by 0x404BE8: main (mandatory.cpp:25)
==384103== 
==384103== Conditional jump or move depends on uninitialised value(s)
==384103==    at 0x407612: ft_strjoin (get_next_line_utils.c:75)
==384103==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384103==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384103==    by 0x404BE8: main (mandatory.cpp:25)
==384103== 
==384106== Invalid read of size 1
==384106==    at 0x40751A: ft_strlen (get_next_line_utils.c:43)
==384106==    by 0x407547: ft_strjoin (get_next_line_utils.c:59)
==384106==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384106==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384106==    by 0x404E6F: main (mandatory.cpp:31)
==384106==  Address 0x4de46b0 is 0 bytes inside a block of size 1 free'd
==384106==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384106==    by 0x407462: get_next_line (get_next_line.c:67)
==384106==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384106==    by 0x404E63: main (mandatory.cpp:31)
==384106==  Block was alloc'd at
==384106==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384106==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==384106==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384106==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384106==    by 0x404E63: main (mandatory.cpp:31)
==384106== 
==384106== Invalid read of size 1
==384106==    at 0x4075C1: ft_strjoin (get_next_line_utils.c:68)
==384106==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384106==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384106==    by 0x404E6F: main (mandatory.cpp:31)
==384106==  Address 0x4de46b0 is 0 bytes inside a block of size 1 free'd
==384106==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384106==    by 0x407462: get_next_line (get_next_line.c:67)
==384106==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384106==    by 0x404E63: main (mandatory.cpp:31)
==384106==  Block was alloc'd at
==384106==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384106==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==384106==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384106==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384106==    by 0x404E63: main (mandatory.cpp:31)
==384106== 
==384106== Invalid free() / delete / delete[] / realloc()
==384106==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384106==    by 0x407634: ft_strjoin (get_next_line_utils.c:81)
==384106==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384106==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384106==    by 0x404E6F: main (mandatory.cpp:31)
==384106==  Address 0x4de46b0 is 0 bytes inside a block of size 1 free'd
==384106==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384106==    by 0x407462: get_next_line (get_next_line.c:67)
==384106==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384106==    by 0x404E63: main (mandatory.cpp:31)
==384106==  Block was alloc'd at
==384106==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384106==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==384106==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384106==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384106==    by 0x404E63: main (mandatory.cpp:31)
==384106== 
==384107== Invalid read of size 1
==384107==    at 0x407753: f_del_front_bn (get_next_line_utils.c:163)
==384107==    by 0x4073FF: get_next_line (get_next_line.c:52)
==384107==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384107==    by 0x40508F: main (mandatory.cpp:36)
==384107==  Address 0x4de46b0 is 0 bytes inside a block of size 2 free'd
==384107==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384107==    by 0x407731: f_search_bn (get_next_line_utils.c:119)
==384107==    by 0x4073EC: get_next_line (get_next_line.c:51)
==384107==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384107==    by 0x40508F: main (mandatory.cpp:36)
==384107==  Block was alloc'd at
==384107==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384107==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==384107==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384107==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384107==    by 0x40508F: main (mandatory.cpp:36)
==384107== 
==384107== Invalid free() / delete / delete[] / realloc()
==384107==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384107==    by 0x407412: get_next_line (get_next_line.c:53)
==384107==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384107==    by 0x40508F: main (mandatory.cpp:36)
==384107==  Address 0x4de45f0 is 0 bytes inside a block of size 43 free'd
==384107==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384107==    by 0x407640: ft_strjoin (get_next_line_utils.c:82)
==384107==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384107==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384107==    by 0x40508F: main (mandatory.cpp:36)
==384107==  Block was alloc'd at
==384107==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384107==    by 0x40732E: get_next_line (get_next_line.c:27)
==384107==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384107==    by 0x40508F: main (mandatory.cpp:36)
==384107== 
==384107== Invalid read of size 1
==384107==    at 0x40751A: ft_strlen (get_next_line_utils.c:43)
==384107==    by 0x407547: ft_strjoin (get_next_line_utils.c:59)
==384107==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384107==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384107==    by 0x40509B: main (mandatory.cpp:36)
==384107==  Address 0x4de46b1 is 1 bytes inside a block of size 2 free'd
==384107==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384107==    by 0x407731: f_search_bn (get_next_line_utils.c:119)
==384107==    by 0x4073EC: get_next_line (get_next_line.c:51)
==384107==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384107==    by 0x40508F: main (mandatory.cpp:36)
==384107==  Block was alloc'd at
==384107==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384107==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==384107==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384107==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384107==    by 0x40508F: main (mandatory.cpp:36)
==384107== 
==384107== Invalid read of size 1
==384107==    at 0x4075C1: ft_strjoin (get_next_line_utils.c:68)
==384107==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384107==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384107==    by 0x40509B: main (mandatory.cpp:36)
==384107==  Address 0x4de46b1 is 1 bytes inside a block of size 2 free'd
==384107==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384107==    by 0x407731: f_search_bn (get_next_line_utils.c:119)
==384107==    by 0x4073EC: get_next_line (get_next_line.c:51)
==384107==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384107==    by 0x40508F: main (mandatory.cpp:36)
==384107==  Block was alloc'd at
==384107==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384107==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==384107==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384107==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384107==    by 0x40508F: main (mandatory.cpp:36)
==384107== 
==384107== Invalid free() / delete / delete[] / realloc()
==384107==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384107==    by 0x407634: ft_strjoin (get_next_line_utils.c:81)
==384107==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384107==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384107==    by 0x40509B: main (mandatory.cpp:36)
==384107==  Address 0x4de46b1 is 1 bytes inside a block of size 2 free'd
==384107==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384107==    by 0x407731: f_search_bn (get_next_line_utils.c:119)
==384107==    by 0x4073EC: get_next_line (get_next_line.c:51)
==384107==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384107==    by 0x40508F: main (mandatory.cpp:36)
==384107==  Block was alloc'd at
==384107==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384107==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==384107==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384107==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384107==    by 0x40508F: main (mandatory.cpp:36)
==384107== 
==384116== Invalid read of size 1
==384116==    at 0x407753: f_del_front_bn (get_next_line_utils.c:163)
==384116==    by 0x4073FF: get_next_line (get_next_line.c:52)
==384116==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384116==    by 0x4054E7: main (mandatory.cpp:46)
==384116==  Address 0x4de4cd0 is 0 bytes inside a block of size 43 free'd
==384116==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384116==    by 0x407731: f_search_bn (get_next_line_utils.c:119)
==384116==    by 0x4073EC: get_next_line (get_next_line.c:51)
==384116==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384116==    by 0x4054E7: main (mandatory.cpp:46)
==384116==  Block was alloc'd at
==384116==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384116==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==384116==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384116==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384116==    by 0x4054E7: main (mandatory.cpp:46)
==384116== 
==384116== Invalid free() / delete / delete[] / realloc()
==384116==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384116==    by 0x407412: get_next_line (get_next_line.c:53)
==384116==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384116==    by 0x4054E7: main (mandatory.cpp:46)
==384116==  Address 0x4de4c10 is 0 bytes inside a block of size 43 free'd
==384116==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384116==    by 0x407640: ft_strjoin (get_next_line_utils.c:82)
==384116==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384116==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384116==    by 0x4054E7: main (mandatory.cpp:46)
==384116==  Block was alloc'd at
==384116==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384116==    by 0x40732E: get_next_line (get_next_line.c:27)
==384116==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384116==    by 0x4054E7: main (mandatory.cpp:46)
==384116== 
==384116== Invalid read of size 1
==384116==    at 0x40751A: ft_strlen (get_next_line_utils.c:43)
==384116==    by 0x407547: ft_strjoin (get_next_line_utils.c:59)
==384116==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384116==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384116==    by 0x4054F9: main (mandatory.cpp:46)
==384116==  Address 0x4de4cf9 is 41 bytes inside a block of size 43 free'd
==384116==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384116==    by 0x407731: f_search_bn (get_next_line_utils.c:119)
==384116==    by 0x4073EC: get_next_line (get_next_line.c:51)
==384116==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384116==    by 0x4054E7: main (mandatory.cpp:46)
==384116==  Block was alloc'd at
==384116==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384116==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==384116==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384116==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384116==    by 0x4054E7: main (mandatory.cpp:46)
==384116== 
==384116== Invalid read of size 1
==384116==    at 0x4075C1: ft_strjoin (get_next_line_utils.c:68)
==384116==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384116==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384116==    by 0x4054F9: main (mandatory.cpp:46)
==384116==  Address 0x4de4cf9 is 41 bytes inside a block of size 43 free'd
==384116==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384116==    by 0x407731: f_search_bn (get_next_line_utils.c:119)
==384116==    by 0x4073EC: get_next_line (get_next_line.c:51)
==384116==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384116==    by 0x4054E7: main (mandatory.cpp:46)
==384116==  Block was alloc'd at
==384116==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384116==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==384116==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384116==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384116==    by 0x4054E7: main (mandatory.cpp:46)
==384116== 
==384116== Invalid read of size 1
==384116==    at 0x4075A4: ft_strjoin (get_next_line_utils.c:70)
==384116==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384116==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384116==    by 0x4054F9: main (mandatory.cpp:46)
==384116==  Address 0x4de4cf9 is 41 bytes inside a block of size 43 free'd
==384116==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384116==    by 0x407731: f_search_bn (get_next_line_utils.c:119)
==384116==    by 0x4073EC: get_next_line (get_next_line.c:51)
==384116==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384116==    by 0x4054E7: main (mandatory.cpp:46)
==384116==  Block was alloc'd at
==384116==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384116==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==384116==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384116==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384116==    by 0x4054E7: main (mandatory.cpp:46)
==384116== 
==384116== Invalid free() / delete / delete[] / realloc()
==384116==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384116==    by 0x407634: ft_strjoin (get_next_line_utils.c:81)
==384116==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384116==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384116==    by 0x4054F9: main (mandatory.cpp:46)
==384116==  Address 0x4de4cf9 is 41 bytes inside a block of size 43 free'd
==384116==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384116==    by 0x407731: f_search_bn (get_next_line_utils.c:119)
==384116==    by 0x4073EC: get_next_line (get_next_line.c:51)
==384116==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384116==    by 0x4054E7: main (mandatory.cpp:46)
==384116==  Block was alloc'd at
==384116==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384116==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==384116==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384116==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384116==    by 0x4054E7: main (mandatory.cpp:46)
==384116== 
==384116== Invalid read of size 1
==384116==    at 0x484FBD4: strcmp (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384116==    by 0x402D0A: gnl(int, char const*) (gnl.cpp:24)
==384116==    by 0x4054F9: main (mandatory.cpp:46)
==384116==  Address 0x0 is not stack'd, malloc'd or (recently) free'd
==384116== 
==384122== Syscall param read(buf) points to unaddressable byte(s)
==384122==    at 0x4CB8992: read (read.c:26)
==384122==    by 0x40736D: get_next_line (get_next_line.c:37)
==384122==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384122==    by 0x405725: main (mandatory.cpp:52)
==384122==  Address 0x4de4f20 is 0 bytes inside a block of size 43 free'd
==384122==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384122==    by 0x407640: ft_strjoin (get_next_line_utils.c:82)
==384122==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384122==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384122==    by 0x405725: main (mandatory.cpp:52)
==384122==  Block was alloc'd at
==384122==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384122==    by 0x40732E: get_next_line (get_next_line.c:27)
==384122==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384122==    by 0x405725: main (mandatory.cpp:52)
==384122== 
==384122== Invalid write of size 1
==384122==    at 0x40737E: get_next_line (get_next_line.c:38)
==384122==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384122==    by 0x405725: main (mandatory.cpp:52)
==384122==  Address 0x4de4f20 is 0 bytes inside a block of size 43 free'd
==384122==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384122==    by 0x407640: ft_strjoin (get_next_line_utils.c:82)
==384122==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384122==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384122==    by 0x405725: main (mandatory.cpp:52)
==384122==  Block was alloc'd at
==384122==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384122==    by 0x40732E: get_next_line (get_next_line.c:27)
==384122==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384122==    by 0x405725: main (mandatory.cpp:52)
==384122== 
==384122== Invalid read of size 1
==384122==    at 0x40751A: ft_strlen (get_next_line_utils.c:43)
==384122==    by 0x407555: ft_strjoin (get_next_line_utils.c:59)
==384122==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384122==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384122==    by 0x405725: main (mandatory.cpp:52)
==384122==  Address 0x4de4f20 is 0 bytes inside a block of size 43 free'd
==384122==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384122==    by 0x407640: ft_strjoin (get_next_line_utils.c:82)
==384122==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384122==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384122==    by 0x405725: main (mandatory.cpp:52)
==384122==  Block was alloc'd at
==384122==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384122==    by 0x40732E: get_next_line (get_next_line.c:27)
==384122==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384122==    by 0x405725: main (mandatory.cpp:52)
==384122== 
==384122== Invalid read of size 1
==384122==    at 0x40760D: ft_strjoin (get_next_line_utils.c:75)
==384122==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384122==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384122==    by 0x405725: main (mandatory.cpp:52)
==384122==  Address 0x4de4f20 is 0 bytes inside a block of size 43 free'd
==384122==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384122==    by 0x407640: ft_strjoin (get_next_line_utils.c:82)
==384122==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384122==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384122==    by 0x405725: main (mandatory.cpp:52)
==384122==  Block was alloc'd at
==384122==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384122==    by 0x40732E: get_next_line (get_next_line.c:27)
==384122==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384122==    by 0x405725: main (mandatory.cpp:52)
==384122== 
==384122== Invalid free() / delete / delete[] / realloc()
==384122==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384122==    by 0x407640: ft_strjoin (get_next_line_utils.c:82)
==384122==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384122==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384122==    by 0x405725: main (mandatory.cpp:52)
==384122==  Address 0x4de4f20 is 0 bytes inside a block of size 43 free'd
==384122==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384122==    by 0x407640: ft_strjoin (get_next_line_utils.c:82)
==384122==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384122==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384122==    by 0x405725: main (mandatory.cpp:52)
==384122==  Block was alloc'd at
==384122==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384122==    by 0x40732E: get_next_line (get_next_line.c:27)
==384122==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384122==    by 0x405725: main (mandatory.cpp:52)
==384122== 
==384122== Invalid read of size 1
==384122==    at 0x484FBD4: strcmp (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384122==    by 0x402D0A: gnl(int, char const*) (gnl.cpp:24)
==384122==    by 0x405725: main (mandatory.cpp:52)
==384122==  Address 0x0 is not stack'd, malloc'd or (recently) free'd
==384122== 
==384125== Invalid read of size 1
==384125==    at 0x407753: f_del_front_bn (get_next_line_utils.c:163)
==384125==    by 0x4073FF: get_next_line (get_next_line.c:52)
==384125==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384125==    by 0x405951: main (mandatory.cpp:57)
==384125==  Address 0x4de52f0 is 0 bytes inside a block of size 43 free'd
==384125==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384125==    by 0x407731: f_search_bn (get_next_line_utils.c:119)
==384125==    by 0x4073EC: get_next_line (get_next_line.c:51)
==384125==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384125==    by 0x405951: main (mandatory.cpp:57)
==384125==  Block was alloc'd at
==384125==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384125==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==384125==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384125==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384125==    by 0x405951: main (mandatory.cpp:57)
==384125== 
==384125== Invalid free() / delete / delete[] / realloc()
==384125==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384125==    by 0x407412: get_next_line (get_next_line.c:53)
==384125==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384125==    by 0x405951: main (mandatory.cpp:57)
==384125==  Address 0x4de5230 is 0 bytes inside a block of size 43 free'd
==384125==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384125==    by 0x407640: ft_strjoin (get_next_line_utils.c:82)
==384125==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384125==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384125==    by 0x405951: main (mandatory.cpp:57)
==384125==  Block was alloc'd at
==384125==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384125==    by 0x40732E: get_next_line (get_next_line.c:27)
==384125==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384125==    by 0x405951: main (mandatory.cpp:57)
==384125== 
==384125== Invalid read of size 1
==384125==    at 0x40751A: ft_strlen (get_next_line_utils.c:43)
==384125==    by 0x407547: ft_strjoin (get_next_line_utils.c:59)
==384125==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384125==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384125==    by 0x4059A1: main (mandatory.cpp:57)
==384125==  Address 0x4de531a is 42 bytes inside a block of size 43 free'd
==384125==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384125==    by 0x407731: f_search_bn (get_next_line_utils.c:119)
==384125==    by 0x4073EC: get_next_line (get_next_line.c:51)
==384125==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384125==    by 0x405951: main (mandatory.cpp:57)
==384125==  Block was alloc'd at
==384125==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384125==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==384125==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384125==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384125==    by 0x405951: main (mandatory.cpp:57)
==384125== 
==384125== Invalid read of size 1
==384125==    at 0x4075C1: ft_strjoin (get_next_line_utils.c:68)
==384125==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384125==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384125==    by 0x4059A1: main (mandatory.cpp:57)
==384125==  Address 0x4de531a is 42 bytes inside a block of size 43 free'd
==384125==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384125==    by 0x407731: f_search_bn (get_next_line_utils.c:119)
==384125==    by 0x4073EC: get_next_line (get_next_line.c:51)
==384125==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384125==    by 0x405951: main (mandatory.cpp:57)
==384125==  Block was alloc'd at
==384125==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384125==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==384125==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384125==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384125==    by 0x405951: main (mandatory.cpp:57)
==384125== 
==384125== Invalid free() / delete / delete[] / realloc()
==384125==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384125==    by 0x407634: ft_strjoin (get_next_line_utils.c:81)
==384125==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384125==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384125==    by 0x4059A1: main (mandatory.cpp:57)
==384125==  Address 0x4de531a is 42 bytes inside a block of size 43 free'd
==384125==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384125==    by 0x407731: f_search_bn (get_next_line_utils.c:119)
==384125==    by 0x4073EC: get_next_line (get_next_line.c:51)
==384125==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384125==    by 0x405951: main (mandatory.cpp:57)
==384125==  Block was alloc'd at
==384125==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384125==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==384125==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384125==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384125==    by 0x405951: main (mandatory.cpp:57)
==384125== 
==384126== Syscall param read(buf) points to unaddressable byte(s)
==384126==    at 0x4CB8992: read (read.c:26)
==384126==    by 0x40736D: get_next_line (get_next_line.c:37)
==384126==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384126==    by 0x405BCB: main (mandatory.cpp:68)
==384126==  Address 0x4de5540 is 0 bytes inside a block of size 43 free'd
==384126==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384126==    by 0x407640: ft_strjoin (get_next_line_utils.c:82)
==384126==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384126==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384126==    by 0x405BCB: main (mandatory.cpp:68)
==384126==  Block was alloc'd at
==384126==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384126==    by 0x40732E: get_next_line (get_next_line.c:27)
==384126==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384126==    by 0x405BCB: main (mandatory.cpp:68)
==384126== 
==384126== Invalid write of size 1
==384126==    at 0x40737E: get_next_line (get_next_line.c:38)
==384126==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384126==    by 0x405BCB: main (mandatory.cpp:68)
==384126==  Address 0x4de5541 is 1 bytes inside a block of size 43 free'd
==384126==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384126==    by 0x407640: ft_strjoin (get_next_line_utils.c:82)
==384126==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384126==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384126==    by 0x405BCB: main (mandatory.cpp:68)
==384126==  Block was alloc'd at
==384126==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384126==    by 0x40732E: get_next_line (get_next_line.c:27)
==384126==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384126==    by 0x405BCB: main (mandatory.cpp:68)
==384126== 
==384126== Invalid read of size 1
==384126==    at 0x40751A: ft_strlen (get_next_line_utils.c:43)
==384126==    by 0x407555: ft_strjoin (get_next_line_utils.c:59)
==384126==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384126==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384126==    by 0x405BCB: main (mandatory.cpp:68)
==384126==  Address 0x4de5541 is 1 bytes inside a block of size 43 free'd
==384126==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384126==    by 0x407640: ft_strjoin (get_next_line_utils.c:82)
==384126==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384126==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384126==    by 0x405BCB: main (mandatory.cpp:68)
==384126==  Block was alloc'd at
==384126==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384126==    by 0x40732E: get_next_line (get_next_line.c:27)
==384126==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384126==    by 0x405BCB: main (mandatory.cpp:68)
==384126== 
==384126== Invalid read of size 1
==384126==    at 0x40760D: ft_strjoin (get_next_line_utils.c:75)
==384126==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384126==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384126==    by 0x405BCB: main (mandatory.cpp:68)
==384126==  Address 0x4de5541 is 1 bytes inside a block of size 43 free'd
==384126==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384126==    by 0x407640: ft_strjoin (get_next_line_utils.c:82)
==384126==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384126==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384126==    by 0x405BCB: main (mandatory.cpp:68)
==384126==  Block was alloc'd at
==384126==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384126==    by 0x40732E: get_next_line (get_next_line.c:27)
==384126==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384126==    by 0x405BCB: main (mandatory.cpp:68)
==384126== 
==384126== Invalid free() / delete / delete[] / realloc()
==384126==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384126==    by 0x407640: ft_strjoin (get_next_line_utils.c:82)
==384126==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384126==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384126==    by 0x405BCB: main (mandatory.cpp:68)
==384126==  Address 0x4de5540 is 0 bytes inside a block of size 43 free'd
==384126==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384126==    by 0x407640: ft_strjoin (get_next_line_utils.c:82)
==384126==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384126==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384126==    by 0x405BCB: main (mandatory.cpp:68)
==384126==  Block was alloc'd at
==384126==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384126==    by 0x40732E: get_next_line (get_next_line.c:27)
==384126==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384126==    by 0x405BCB: main (mandatory.cpp:68)
==384126== 
==384129== Syscall param read(buf) points to unaddressable byte(s)
==384129==    at 0x4CB8992: read (read.c:26)
==384129==    by 0x40736D: get_next_line (get_next_line.c:37)
==384129==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384129==    by 0x405DF7: main (mandatory.cpp:73)
==384129==  Address 0x4de5850 is 0 bytes inside a block of size 43 free'd
==384129==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384129==    by 0x407640: ft_strjoin (get_next_line_utils.c:82)
==384129==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384129==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384129==    by 0x405DF7: main (mandatory.cpp:73)
==384129==  Block was alloc'd at
==384129==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384129==    by 0x40732E: get_next_line (get_next_line.c:27)
==384129==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384129==    by 0x405DF7: main (mandatory.cpp:73)
==384129== 
==384129== Invalid write of size 1
==384129==    at 0x40737E: get_next_line (get_next_line.c:38)
==384129==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384129==    by 0x405DF7: main (mandatory.cpp:73)
==384129==  Address 0x4de5852 is 2 bytes inside a block of size 43 free'd
==384129==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384129==    by 0x407640: ft_strjoin (get_next_line_utils.c:82)
==384129==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384129==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384129==    by 0x405DF7: main (mandatory.cpp:73)
==384129==  Block was alloc'd at
==384129==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384129==    by 0x40732E: get_next_line (get_next_line.c:27)
==384129==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384129==    by 0x405DF7: main (mandatory.cpp:73)
==384129== 
==384129== Invalid read of size 1
==384129==    at 0x40751A: ft_strlen (get_next_line_utils.c:43)
==384129==    by 0x407555: ft_strjoin (get_next_line_utils.c:59)
==384129==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384129==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384129==    by 0x405DF7: main (mandatory.cpp:73)
==384129==  Address 0x4de5852 is 2 bytes inside a block of size 43 free'd
==384129==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384129==    by 0x407640: ft_strjoin (get_next_line_utils.c:82)
==384129==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384129==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384129==    by 0x405DF7: main (mandatory.cpp:73)
==384129==  Block was alloc'd at
==384129==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384129==    by 0x40732E: get_next_line (get_next_line.c:27)
==384129==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384129==    by 0x405DF7: main (mandatory.cpp:73)
==384129== 
==384129== Invalid read of size 1
==384129==    at 0x40760D: ft_strjoin (get_next_line_utils.c:75)
==384129==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384129==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384129==    by 0x405DF7: main (mandatory.cpp:73)
==384129==  Address 0x4de5852 is 2 bytes inside a block of size 43 free'd
==384129==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384129==    by 0x407640: ft_strjoin (get_next_line_utils.c:82)
==384129==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384129==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384129==    by 0x405DF7: main (mandatory.cpp:73)
==384129==  Block was alloc'd at
==384129==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384129==    by 0x40732E: get_next_line (get_next_line.c:27)
==384129==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384129==    by 0x405DF7: main (mandatory.cpp:73)
==384129== 
==384129== Invalid free() / delete / delete[] / realloc()
==384129==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384129==    by 0x407640: ft_strjoin (get_next_line_utils.c:82)
==384129==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384129==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384129==    by 0x405DF7: main (mandatory.cpp:73)
==384129==  Address 0x4de5850 is 0 bytes inside a block of size 43 free'd
==384129==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384129==    by 0x407640: ft_strjoin (get_next_line_utils.c:82)
==384129==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384129==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384129==    by 0x405DF7: main (mandatory.cpp:73)
==384129==  Block was alloc'd at
==384129==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384129==    by 0x40732E: get_next_line (get_next_line.c:27)
==384129==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384129==    by 0x405DF7: main (mandatory.cpp:73)
==384129== 
==384129== Invalid read of size 1
==384129==    at 0x407753: f_del_front_bn (get_next_line_utils.c:163)
==384129==    by 0x4073FF: get_next_line (get_next_line.c:52)
==384129==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384129==    by 0x405DF7: main (mandatory.cpp:73)
==384129==  Address 0x4de5980 is 0 bytes inside a block of size 45 free'd
==384129==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384129==    by 0x407731: f_search_bn (get_next_line_utils.c:119)
==384129==    by 0x4073EC: get_next_line (get_next_line.c:51)
==384129==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384129==    by 0x405DF7: main (mandatory.cpp:73)
==384129==  Block was alloc'd at
==384129==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384129==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==384129==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384129==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384129==    by 0x405DF7: main (mandatory.cpp:73)
==384129== 
==384129== Invalid free() / delete / delete[] / realloc()
==384129==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384129==    by 0x407412: get_next_line (get_next_line.c:53)
==384129==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384129==    by 0x405DF7: main (mandatory.cpp:73)
==384129==  Address 0x4de5850 is 0 bytes inside a block of size 43 free'd
==384129==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384129==    by 0x407640: ft_strjoin (get_next_line_utils.c:82)
==384129==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384129==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384129==    by 0x405DF7: main (mandatory.cpp:73)
==384129==  Block was alloc'd at
==384129==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384129==    by 0x40732E: get_next_line (get_next_line.c:27)
==384129==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384129==    by 0x405DF7: main (mandatory.cpp:73)
==384129== 
==384129== Invalid read of size 1
==384129==    at 0x40751A: ft_strlen (get_next_line_utils.c:43)
==384129==    by 0x407547: ft_strjoin (get_next_line_utils.c:59)
==384129==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384129==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384129==    by 0x405E09: main (mandatory.cpp:73)
==384129==  Address 0x4de59ab is 43 bytes inside a block of size 45 free'd
==384129==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384129==    by 0x407731: f_search_bn (get_next_line_utils.c:119)
==384129==    by 0x4073EC: get_next_line (get_next_line.c:51)
==384129==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384129==    by 0x405DF7: main (mandatory.cpp:73)
==384129==  Block was alloc'd at
==384129==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384129==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==384129==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384129==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384129==    by 0x405DF7: main (mandatory.cpp:73)
==384129== 
==384129== Invalid read of size 1
==384129==    at 0x4075C1: ft_strjoin (get_next_line_utils.c:68)
==384129==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384129==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384129==    by 0x405E09: main (mandatory.cpp:73)
==384129==  Address 0x4de59ab is 43 bytes inside a block of size 45 free'd
==384129==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384129==    by 0x407731: f_search_bn (get_next_line_utils.c:119)
==384129==    by 0x4073EC: get_next_line (get_next_line.c:51)
==384129==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384129==    by 0x405DF7: main (mandatory.cpp:73)
==384129==  Block was alloc'd at
==384129==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384129==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==384129==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384129==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384129==    by 0x405DF7: main (mandatory.cpp:73)
==384129== 
==384129== Invalid read of size 1
==384129==    at 0x4075A4: ft_strjoin (get_next_line_utils.c:70)
==384129==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384129==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384129==    by 0x405E09: main (mandatory.cpp:73)
==384129==  Address 0x4de59ab is 43 bytes inside a block of size 45 free'd
==384129==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384129==    by 0x407731: f_search_bn (get_next_line_utils.c:119)
==384129==    by 0x4073EC: get_next_line (get_next_line.c:51)
==384129==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384129==    by 0x405DF7: main (mandatory.cpp:73)
==384129==  Block was alloc'd at
==384129==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384129==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==384129==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384129==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384129==    by 0x405DF7: main (mandatory.cpp:73)
==384129== 
==384129== Invalid free() / delete / delete[] / realloc()
==384129==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384129==    by 0x407634: ft_strjoin (get_next_line_utils.c:81)
==384129==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384129==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384129==    by 0x405E09: main (mandatory.cpp:73)
==384129==  Address 0x4de59ab is 43 bytes inside a block of size 45 free'd
==384129==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384129==    by 0x407731: f_search_bn (get_next_line_utils.c:119)
==384129==    by 0x4073EC: get_next_line (get_next_line.c:51)
==384129==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384129==    by 0x405DF7: main (mandatory.cpp:73)
==384129==  Block was alloc'd at
==384129==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384129==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==384129==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384129==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384129==    by 0x405DF7: main (mandatory.cpp:73)
==384129== 
==384129== Invalid read of size 1
==384129==    at 0x484FBD4: strcmp (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384129==    by 0x402D0A: gnl(int, char const*) (gnl.cpp:24)
==384129==    by 0x405E09: main (mandatory.cpp:73)
==384129==  Address 0x0 is not stack'd, malloc'd or (recently) free'd
==384129== 
==384131== Invalid read of size 1
==384131==    at 0x407753: f_del_front_bn (get_next_line_utils.c:163)
==384131==    by 0x4073FF: get_next_line (get_next_line.c:52)
==384131==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384131==    by 0x406035: main (mandatory.cpp:79)
==384131==  Address 0x4de5c20 is 0 bytes inside a block of size 6 free'd
==384131==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384131==    by 0x407731: f_search_bn (get_next_line_utils.c:119)
==384131==    by 0x4073EC: get_next_line (get_next_line.c:51)
==384131==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384131==    by 0x406035: main (mandatory.cpp:79)
==384131==  Block was alloc'd at
==384131==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384131==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==384131==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384131==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384131==    by 0x406035: main (mandatory.cpp:79)
==384131== 
==384131== Invalid free() / delete / delete[] / realloc()
==384131==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384131==    by 0x407412: get_next_line (get_next_line.c:53)
==384131==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384131==    by 0x406035: main (mandatory.cpp:79)
==384131==  Address 0x4de5b60 is 0 bytes inside a block of size 43 free'd
==384131==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384131==    by 0x407640: ft_strjoin (get_next_line_utils.c:82)
==384131==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384131==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384131==    by 0x406035: main (mandatory.cpp:79)
==384131==  Block was alloc'd at
==384131==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384131==    by 0x40732E: get_next_line (get_next_line.c:27)
==384131==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384131==    by 0x406035: main (mandatory.cpp:79)
==384131== 
==384131== Invalid read of size 1
==384131==    at 0x40751A: ft_strlen (get_next_line_utils.c:43)
==384131==    by 0x407547: ft_strjoin (get_next_line_utils.c:59)
==384131==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384131==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384131==    by 0x406047: main (mandatory.cpp:79)
==384131==  Address 0x4de5c21 is 1 bytes inside a block of size 6 free'd
==384131==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384131==    by 0x407731: f_search_bn (get_next_line_utils.c:119)
==384131==    by 0x4073EC: get_next_line (get_next_line.c:51)
==384131==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384131==    by 0x406035: main (mandatory.cpp:79)
==384131==  Block was alloc'd at
==384131==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384131==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==384131==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384131==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384131==    by 0x406035: main (mandatory.cpp:79)
==384131== 
==384131== Invalid read of size 1
==384131==    at 0x4075C1: ft_strjoin (get_next_line_utils.c:68)
==384131==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384131==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384131==    by 0x406047: main (mandatory.cpp:79)
==384131==  Address 0x4de5c21 is 1 bytes inside a block of size 6 free'd
==384131==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384131==    by 0x407731: f_search_bn (get_next_line_utils.c:119)
==384131==    by 0x4073EC: get_next_line (get_next_line.c:51)
==384131==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384131==    by 0x406035: main (mandatory.cpp:79)
==384131==  Block was alloc'd at
==384131==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384131==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==384131==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384131==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384131==    by 0x406035: main (mandatory.cpp:79)
==384131== 
==384131== Invalid read of size 1
==384131==    at 0x4075A4: ft_strjoin (get_next_line_utils.c:70)
==384131==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384131==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384131==    by 0x406047: main (mandatory.cpp:79)
==384131==  Address 0x4de5c21 is 1 bytes inside a block of size 6 free'd
==384131==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384131==    by 0x407731: f_search_bn (get_next_line_utils.c:119)
==384131==    by 0x4073EC: get_next_line (get_next_line.c:51)
==384131==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384131==    by 0x406035: main (mandatory.cpp:79)
==384131==  Block was alloc'd at
==384131==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384131==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==384131==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384131==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384131==    by 0x406035: main (mandatory.cpp:79)
==384131== 
==384131== Invalid free() / delete / delete[] / realloc()
==384131==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384131==    by 0x407634: ft_strjoin (get_next_line_utils.c:81)
==384131==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384131==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384131==    by 0x406047: main (mandatory.cpp:79)
==384131==  Address 0x4de5c21 is 1 bytes inside a block of size 6 free'd
==384131==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384131==    by 0x407731: f_search_bn (get_next_line_utils.c:119)
==384131==    by 0x4073EC: get_next_line (get_next_line.c:51)
==384131==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384131==    by 0x406035: main (mandatory.cpp:79)
==384131==  Block was alloc'd at
==384131==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384131==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==384131==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384131==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384131==    by 0x406035: main (mandatory.cpp:79)
==384131== 
==384131== Invalid read of size 1
==384131==    at 0x407753: f_del_front_bn (get_next_line_utils.c:163)
==384131==    by 0x4073FF: get_next_line (get_next_line.c:52)
==384131==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384131==    by 0x406047: main (mandatory.cpp:79)
==384131==  Address 0x4de5d30 is 0 bytes inside a block of size 5 free'd
==384131==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384131==    by 0x407731: f_search_bn (get_next_line_utils.c:119)
==384131==    by 0x4073EC: get_next_line (get_next_line.c:51)
==384131==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384131==    by 0x406047: main (mandatory.cpp:79)
==384131==  Block was alloc'd at
==384131==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384131==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==384131==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384131==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384131==    by 0x406047: main (mandatory.cpp:79)
==384131== 
==384131== Invalid free() / delete / delete[] / realloc()
==384131==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384131==    by 0x407412: get_next_line (get_next_line.c:53)
==384131==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384131==    by 0x406047: main (mandatory.cpp:79)
==384131==  Address 0x4de5cc0 is 0 bytes inside a block of size 43 free'd
==384131==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384131==    by 0x407640: ft_strjoin (get_next_line_utils.c:82)
==384131==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384131==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384131==    by 0x406047: main (mandatory.cpp:79)
==384131==  Block was alloc'd at
==384131==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384131==    by 0x40732E: get_next_line (get_next_line.c:27)
==384131==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384131==    by 0x406047: main (mandatory.cpp:79)
==384131== 
==384131== Invalid read of size 1
==384131==    at 0x4075C1: ft_strjoin (get_next_line_utils.c:68)
==384131==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384131==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384131==    by 0x406059: main (mandatory.cpp:79)
==384131==  Address 0x4de5d31 is 1 bytes inside a block of size 5 free'd
==384131==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384131==    by 0x407731: f_search_bn (get_next_line_utils.c:119)
==384131==    by 0x4073EC: get_next_line (get_next_line.c:51)
==384131==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384131==    by 0x406047: main (mandatory.cpp:79)
==384131==  Block was alloc'd at
==384131==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384131==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==384131==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384131==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384131==    by 0x406047: main (mandatory.cpp:79)
==384131== 
==384131== Invalid read of size 1
==384131==    at 0x4075A4: ft_strjoin (get_next_line_utils.c:70)
==384131==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384131==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384131==    by 0x406059: main (mandatory.cpp:79)
==384131==  Address 0x4de5d31 is 1 bytes inside a block of size 5 free'd
==384131==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384131==    by 0x407731: f_search_bn (get_next_line_utils.c:119)
==384131==    by 0x4073EC: get_next_line (get_next_line.c:51)
==384131==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384131==    by 0x406047: main (mandatory.cpp:79)
==384131==  Block was alloc'd at
==384131==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384131==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==384131==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384131==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384131==    by 0x406047: main (mandatory.cpp:79)
==384131== 
==384131== Invalid read of size 1
==384131==    at 0x407753: f_del_front_bn (get_next_line_utils.c:163)
==384131==    by 0x4073FF: get_next_line (get_next_line.c:52)
==384131==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384131==    by 0x406059: main (mandatory.cpp:79)
==384131==  Address 0x4de5e40 is 0 bytes inside a block of size 4 free'd
==384131==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384131==    by 0x407731: f_search_bn (get_next_line_utils.c:119)
==384131==    by 0x4073EC: get_next_line (get_next_line.c:51)
==384131==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384131==    by 0x406059: main (mandatory.cpp:79)
==384131==  Block was alloc'd at
==384131==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384131==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==384131==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384131==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384131==    by 0x406059: main (mandatory.cpp:79)
==384131== 
==384131== Invalid free() / delete / delete[] / realloc()
==384131==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384131==    by 0x407412: get_next_line (get_next_line.c:53)
==384131==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384131==    by 0x406059: main (mandatory.cpp:79)
==384131==  Address 0x4de5dd0 is 0 bytes inside a block of size 43 free'd
==384131==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384131==    by 0x407640: ft_strjoin (get_next_line_utils.c:82)
==384131==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384131==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384131==    by 0x406059: main (mandatory.cpp:79)
==384131==  Block was alloc'd at
==384131==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384131==    by 0x40732E: get_next_line (get_next_line.c:27)
==384131==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384131==    by 0x406059: main (mandatory.cpp:79)
==384131== 
==384131== Invalid read of size 1
==384131==    at 0x4075C1: ft_strjoin (get_next_line_utils.c:68)
==384131==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384131==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384131==    by 0x40606B: main (mandatory.cpp:79)
==384131==  Address 0x4de5e41 is 1 bytes inside a block of size 4 free'd
==384131==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384131==    by 0x407731: f_search_bn (get_next_line_utils.c:119)
==384131==    by 0x4073EC: get_next_line (get_next_line.c:51)
==384131==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384131==    by 0x406059: main (mandatory.cpp:79)
==384131==  Block was alloc'd at
==384131==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384131==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==384131==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384131==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384131==    by 0x406059: main (mandatory.cpp:79)
==384131== 
==384131== Invalid read of size 1
==384131==    at 0x4075A4: ft_strjoin (get_next_line_utils.c:70)
==384131==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384131==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384131==    by 0x40606B: main (mandatory.cpp:79)
==384131==  Address 0x4de5e41 is 1 bytes inside a block of size 4 free'd
==384131==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384131==    by 0x407731: f_search_bn (get_next_line_utils.c:119)
==384131==    by 0x4073EC: get_next_line (get_next_line.c:51)
==384131==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384131==    by 0x406059: main (mandatory.cpp:79)
==384131==  Block was alloc'd at
==384131==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384131==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==384131==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384131==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384131==    by 0x406059: main (mandatory.cpp:79)
==384131== 
==384131== Invalid read of size 1
==384131==    at 0x407753: f_del_front_bn (get_next_line_utils.c:163)
==384131==    by 0x4073FF: get_next_line (get_next_line.c:52)
==384131==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384131==    by 0x40606B: main (mandatory.cpp:79)
==384131==  Address 0x4de5f50 is 0 bytes inside a block of size 3 free'd
==384131==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384131==    by 0x407731: f_search_bn (get_next_line_utils.c:119)
==384131==    by 0x4073EC: get_next_line (get_next_line.c:51)
==384131==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384131==    by 0x40606B: main (mandatory.cpp:79)
==384131==  Block was alloc'd at
==384131==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384131==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==384131==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384131==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384131==    by 0x40606B: main (mandatory.cpp:79)
==384131== 
==384131== Invalid free() / delete / delete[] / realloc()
==384131==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384131==    by 0x407412: get_next_line (get_next_line.c:53)
==384131==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384131==    by 0x40606B: main (mandatory.cpp:79)
==384131==  Address 0x4de5ee0 is 0 bytes inside a block of size 43 free'd
==384131==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384131==    by 0x407640: ft_strjoin (get_next_line_utils.c:82)
==384131==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384131==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384131==    by 0x40606B: main (mandatory.cpp:79)
==384131==  Block was alloc'd at
==384131==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384131==    by 0x40732E: get_next_line (get_next_line.c:27)
==384131==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384131==    by 0x40606B: main (mandatory.cpp:79)
==384131== 
==384131== Invalid read of size 1
==384131==    at 0x4075C1: ft_strjoin (get_next_line_utils.c:68)
==384131==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384131==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384131==    by 0x40607D: main (mandatory.cpp:79)
==384131==  Address 0x4de5f51 is 1 bytes inside a block of size 3 free'd
==384131==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384131==    by 0x407731: f_search_bn (get_next_line_utils.c:119)
==384131==    by 0x4073EC: get_next_line (get_next_line.c:51)
==384131==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384131==    by 0x40606B: main (mandatory.cpp:79)
==384131==  Block was alloc'd at
==384131==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384131==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==384131==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384131==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384131==    by 0x40606B: main (mandatory.cpp:79)
==384131== 
==384131== Invalid read of size 1
==384131==    at 0x4075A4: ft_strjoin (get_next_line_utils.c:70)
==384131==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384131==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384131==    by 0x40607D: main (mandatory.cpp:79)
==384131==  Address 0x4de5f51 is 1 bytes inside a block of size 3 free'd
==384131==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384131==    by 0x407731: f_search_bn (get_next_line_utils.c:119)
==384131==    by 0x4073EC: get_next_line (get_next_line.c:51)
==384131==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384131==    by 0x40606B: main (mandatory.cpp:79)
==384131==  Block was alloc'd at
==384131==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384131==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==384131==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384131==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384131==    by 0x40606B: main (mandatory.cpp:79)
==384131== 
==384131== Invalid read of size 1
==384131==    at 0x407753: f_del_front_bn (get_next_line_utils.c:163)
==384131==    by 0x4073FF: get_next_line (get_next_line.c:52)
==384131==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384131==    by 0x40607D: main (mandatory.cpp:79)
==384131==  Address 0x4de6060 is 0 bytes inside a block of size 2 free'd
==384131==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384131==    by 0x407731: f_search_bn (get_next_line_utils.c:119)
==384131==    by 0x4073EC: get_next_line (get_next_line.c:51)
==384131==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384131==    by 0x40607D: main (mandatory.cpp:79)
==384131==  Block was alloc'd at
==384131==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384131==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==384131==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384131==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384131==    by 0x40607D: main (mandatory.cpp:79)
==384131== 
==384131== Invalid free() / delete / delete[] / realloc()
==384131==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384131==    by 0x407412: get_next_line (get_next_line.c:53)
==384131==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384131==    by 0x40607D: main (mandatory.cpp:79)
==384131==  Address 0x4de5ff0 is 0 bytes inside a block of size 43 free'd
==384131==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384131==    by 0x407640: ft_strjoin (get_next_line_utils.c:82)
==384131==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384131==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384131==    by 0x40607D: main (mandatory.cpp:79)
==384131==  Block was alloc'd at
==384131==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384131==    by 0x40732E: get_next_line (get_next_line.c:27)
==384131==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384131==    by 0x40607D: main (mandatory.cpp:79)
==384131== 
==384131== Invalid read of size 1
==384131==    at 0x4075C1: ft_strjoin (get_next_line_utils.c:68)
==384131==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384131==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384131==    by 0x406089: main (mandatory.cpp:79)
==384131==  Address 0x4de6061 is 1 bytes inside a block of size 2 free'd
==384131==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384131==    by 0x407731: f_search_bn (get_next_line_utils.c:119)
==384131==    by 0x4073EC: get_next_line (get_next_line.c:51)
==384131==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384131==    by 0x40607D: main (mandatory.cpp:79)
==384131==  Block was alloc'd at
==384131==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384131==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==384131==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384131==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384131==    by 0x40607D: main (mandatory.cpp:79)
==384131== 
==384138== Invalid read of size 1
==384138==    at 0x407753: f_del_front_bn (get_next_line_utils.c:163)
==384138==    by 0x4073FF: get_next_line (get_next_line.c:52)
==384138==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384138==    by 0x4062A9: main (mandatory.cpp:88)
==384138==  Address 0x4de5f50 is 0 bytes inside a block of size 43 free'd
==384138==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384138==    by 0x407731: f_search_bn (get_next_line_utils.c:119)
==384138==    by 0x4073EC: get_next_line (get_next_line.c:51)
==384138==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384138==    by 0x4062A9: main (mandatory.cpp:88)
==384138==  Block was alloc'd at
==384138==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384138==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==384138==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384138==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384138==    by 0x4062A9: main (mandatory.cpp:88)
==384138== 
==384138== Invalid free() / delete / delete[] / realloc()
==384138==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384138==    by 0x407412: get_next_line (get_next_line.c:53)
==384138==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384138==    by 0x4062A9: main (mandatory.cpp:88)
==384138==  Address 0x4de5e90 is 0 bytes inside a block of size 43 free'd
==384138==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384138==    by 0x407640: ft_strjoin (get_next_line_utils.c:82)
==384138==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384138==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384138==    by 0x4062A9: main (mandatory.cpp:88)
==384138==  Block was alloc'd at
==384138==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384138==    by 0x40732E: get_next_line (get_next_line.c:27)
==384138==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384138==    by 0x4062A9: main (mandatory.cpp:88)
==384138== 
==384138== Invalid read of size 1
==384138==    at 0x40751A: ft_strlen (get_next_line_utils.c:43)
==384138==    by 0x407547: ft_strjoin (get_next_line_utils.c:59)
==384138==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384138==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384138==    by 0x4062BB: main (mandatory.cpp:88)
==384138==  Address 0x4de5f7a is 42 bytes inside a block of size 43 free'd
==384138==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384138==    by 0x407731: f_search_bn (get_next_line_utils.c:119)
==384138==    by 0x4073EC: get_next_line (get_next_line.c:51)
==384138==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384138==    by 0x4062A9: main (mandatory.cpp:88)
==384138==  Block was alloc'd at
==384138==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384138==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==384138==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384138==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384138==    by 0x4062A9: main (mandatory.cpp:88)
==384138== 
==384138== Invalid read of size 1
==384138==    at 0x4075C1: ft_strjoin (get_next_line_utils.c:68)
==384138==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384138==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384138==    by 0x4062BB: main (mandatory.cpp:88)
==384138==  Address 0x4de5f7a is 42 bytes inside a block of size 43 free'd
==384138==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384138==    by 0x407731: f_search_bn (get_next_line_utils.c:119)
==384138==    by 0x4073EC: get_next_line (get_next_line.c:51)
==384138==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384138==    by 0x4062A9: main (mandatory.cpp:88)
==384138==  Block was alloc'd at
==384138==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384138==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==384138==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384138==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384138==    by 0x4062A9: main (mandatory.cpp:88)
==384138== 
==384138== Invalid free() / delete / delete[] / realloc()
==384138==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384138==    by 0x407634: ft_strjoin (get_next_line_utils.c:81)
==384138==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384138==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384138==    by 0x4062BB: main (mandatory.cpp:88)
==384138==  Address 0x4de5f7a is 42 bytes inside a block of size 43 free'd
==384138==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384138==    by 0x407731: f_search_bn (get_next_line_utils.c:119)
==384138==    by 0x4073EC: get_next_line (get_next_line.c:51)
==384138==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384138==    by 0x4062A9: main (mandatory.cpp:88)
==384138==  Block was alloc'd at
==384138==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384138==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==384138==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384138==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384138==    by 0x4062A9: main (mandatory.cpp:88)
==384138== 
==384138== Syscall param read(buf) points to unaddressable byte(s)
==384138==    at 0x4CB8992: read (read.c:26)
==384138==    by 0x40736D: get_next_line (get_next_line.c:37)
==384138==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384138==    by 0x4062BB: main (mandatory.cpp:88)
==384138==  Address 0x4de6030 is 0 bytes inside a block of size 43 free'd
==384138==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384138==    by 0x407640: ft_strjoin (get_next_line_utils.c:82)
==384138==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384138==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384138==    by 0x4062BB: main (mandatory.cpp:88)
==384138==  Block was alloc'd at
==384138==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384138==    by 0x40732E: get_next_line (get_next_line.c:27)
==384138==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384138==    by 0x4062BB: main (mandatory.cpp:88)
==384138== 
==384138== Invalid write of size 1
==384138==    at 0x40737E: get_next_line (get_next_line.c:38)
==384138==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384138==    by 0x4062BB: main (mandatory.cpp:88)
==384138==  Address 0x4de605a is 42 bytes inside a block of size 43 free'd
==384138==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384138==    by 0x407640: ft_strjoin (get_next_line_utils.c:82)
==384138==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384138==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384138==    by 0x4062BB: main (mandatory.cpp:88)
==384138==  Block was alloc'd at
==384138==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384138==    by 0x40732E: get_next_line (get_next_line.c:27)
==384138==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384138==    by 0x4062BB: main (mandatory.cpp:88)
==384138== 
==384138== Invalid read of size 1
==384138==    at 0x40751A: ft_strlen (get_next_line_utils.c:43)
==384138==    by 0x407555: ft_strjoin (get_next_line_utils.c:59)
==384138==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384138==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384138==    by 0x4062BB: main (mandatory.cpp:88)
==384138==  Address 0x4de605a is 42 bytes inside a block of size 43 free'd
==384138==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384138==    by 0x407640: ft_strjoin (get_next_line_utils.c:82)
==384138==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384138==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384138==    by 0x4062BB: main (mandatory.cpp:88)
==384138==  Block was alloc'd at
==384138==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384138==    by 0x40732E: get_next_line (get_next_line.c:27)
==384138==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384138==    by 0x4062BB: main (mandatory.cpp:88)
==384138== 
==384138== Invalid read of size 1
==384138==    at 0x40760D: ft_strjoin (get_next_line_utils.c:75)
==384138==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384138==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384138==    by 0x4062BB: main (mandatory.cpp:88)
==384138==  Address 0x4de605a is 42 bytes inside a block of size 43 free'd
==384138==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384138==    by 0x407640: ft_strjoin (get_next_line_utils.c:82)
==384138==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384138==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384138==    by 0x4062BB: main (mandatory.cpp:88)
==384138==  Block was alloc'd at
==384138==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384138==    by 0x40732E: get_next_line (get_next_line.c:27)
==384138==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384138==    by 0x4062BB: main (mandatory.cpp:88)
==384138== 
==384138== Invalid free() / delete / delete[] / realloc()
==384138==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384138==    by 0x407640: ft_strjoin (get_next_line_utils.c:82)
==384138==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384138==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384138==    by 0x4062BB: main (mandatory.cpp:88)
==384138==  Address 0x4de6030 is 0 bytes inside a block of size 43 free'd
==384138==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384138==    by 0x407640: ft_strjoin (get_next_line_utils.c:82)
==384138==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384138==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384138==    by 0x4062BB: main (mandatory.cpp:88)
==384138==  Block was alloc'd at
==384138==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384138==    by 0x40732E: get_next_line (get_next_line.c:27)
==384138==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384138==    by 0x4062BB: main (mandatory.cpp:88)
==384138== 
==384138== Invalid read of size 1
==384138==    at 0x407753: f_del_front_bn (get_next_line_utils.c:163)
==384138==    by 0x4073FF: get_next_line (get_next_line.c:52)
==384138==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384138==    by 0x4062BB: main (mandatory.cpp:88)
==384138==  Address 0x4de6110 is 0 bytes inside a block of size 85 free'd
==384138==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384138==    by 0x407731: f_search_bn (get_next_line_utils.c:119)
==384138==    by 0x4073EC: get_next_line (get_next_line.c:51)
==384138==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384138==    by 0x4062BB: main (mandatory.cpp:88)
==384138==  Block was alloc'd at
==384138==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384138==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==384138==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384138==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384138==    by 0x4062BB: main (mandatory.cpp:88)
==384138== 
==384138== Invalid free() / delete / delete[] / realloc()
==384138==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384138==    by 0x407412: get_next_line (get_next_line.c:53)
==384138==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384138==    by 0x4062BB: main (mandatory.cpp:88)
==384138==  Address 0x4de6030 is 0 bytes inside a block of size 43 free'd
==384138==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384138==    by 0x407640: ft_strjoin (get_next_line_utils.c:82)
==384138==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384138==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384138==    by 0x4062BB: main (mandatory.cpp:88)
==384138==  Block was alloc'd at
==384138==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384138==    by 0x40732E: get_next_line (get_next_line.c:27)
==384138==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384138==    by 0x4062BB: main (mandatory.cpp:88)
==384138== 
==384138== Invalid read of size 1
==384138==    at 0x4075C1: ft_strjoin (get_next_line_utils.c:68)
==384138==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384138==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384138==    by 0x4062CD: main (mandatory.cpp:88)
==384138==  Address 0x4de613b is 43 bytes inside a block of size 85 free'd
==384138==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384138==    by 0x407731: f_search_bn (get_next_line_utils.c:119)
==384138==    by 0x4073EC: get_next_line (get_next_line.c:51)
==384138==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384138==    by 0x4062BB: main (mandatory.cpp:88)
==384138==  Block was alloc'd at
==384138==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384138==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==384138==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384138==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384138==    by 0x4062BB: main (mandatory.cpp:88)
==384138== 
==384138== Invalid read of size 1
==384138==    at 0x4075A4: ft_strjoin (get_next_line_utils.c:70)
==384138==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384138==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384138==    by 0x4062CD: main (mandatory.cpp:88)
==384138==  Address 0x4de613b is 43 bytes inside a block of size 85 free'd
==384138==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384138==    by 0x407731: f_search_bn (get_next_line_utils.c:119)
==384138==    by 0x4073EC: get_next_line (get_next_line.c:51)
==384138==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384138==    by 0x4062BB: main (mandatory.cpp:88)
==384138==  Block was alloc'd at
==384138==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384138==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==384138==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384138==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384138==    by 0x4062BB: main (mandatory.cpp:88)
==384138== 
==384138== Invalid read of size 1
==384138==    at 0x407753: f_del_front_bn (get_next_line_utils.c:163)
==384138==    by 0x4073FF: get_next_line (get_next_line.c:52)
==384138==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384138==    by 0x4062CD: main (mandatory.cpp:88)
==384138==  Address 0x4de6290 is 0 bytes inside a block of size 84 free'd
==384138==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384138==    by 0x407731: f_search_bn (get_next_line_utils.c:119)
==384138==    by 0x4073EC: get_next_line (get_next_line.c:51)
==384138==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384138==    by 0x4062CD: main (mandatory.cpp:88)
==384138==  Block was alloc'd at
==384138==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384138==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==384138==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384138==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384138==    by 0x4062CD: main (mandatory.cpp:88)
==384138== 
==384138== Invalid free() / delete / delete[] / realloc()
==384138==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384138==    by 0x407412: get_next_line (get_next_line.c:53)
==384138==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384138==    by 0x4062CD: main (mandatory.cpp:88)
==384138==  Address 0x4de6220 is 0 bytes inside a block of size 43 free'd
==384138==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384138==    by 0x407640: ft_strjoin (get_next_line_utils.c:82)
==384138==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384138==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384138==    by 0x4062CD: main (mandatory.cpp:88)
==384138==  Block was alloc'd at
==384138==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384138==    by 0x40732E: get_next_line (get_next_line.c:27)
==384138==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384138==    by 0x4062CD: main (mandatory.cpp:88)
==384138== 
==384138== Invalid read of size 1
==384138==    at 0x4075C1: ft_strjoin (get_next_line_utils.c:68)
==384138==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384138==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384138==    by 0x4062DF: main (mandatory.cpp:88)
==384138==  Address 0x4de62bc is 44 bytes inside a block of size 84 free'd
==384138==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384138==    by 0x407731: f_search_bn (get_next_line_utils.c:119)
==384138==    by 0x4073EC: get_next_line (get_next_line.c:51)
==384138==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384138==    by 0x4062CD: main (mandatory.cpp:88)
==384138==  Block was alloc'd at
==384138==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384138==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==384138==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384138==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384138==    by 0x4062CD: main (mandatory.cpp:88)
==384138== 
==384138== Invalid read of size 1
==384138==    at 0x4075A4: ft_strjoin (get_next_line_utils.c:70)
==384138==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384138==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384138==    by 0x4062DF: main (mandatory.cpp:88)
==384138==  Address 0x4de62bc is 44 bytes inside a block of size 84 free'd
==384138==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384138==    by 0x407731: f_search_bn (get_next_line_utils.c:119)
==384138==    by 0x4073EC: get_next_line (get_next_line.c:51)
==384138==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384138==    by 0x4062CD: main (mandatory.cpp:88)
==384138==  Block was alloc'd at
==384138==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384138==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==384138==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384138==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384138==    by 0x4062CD: main (mandatory.cpp:88)
==384138== 
==384138== Invalid read of size 1
==384138==    at 0x407753: f_del_front_bn (get_next_line_utils.c:163)
==384138==    by 0x4073FF: get_next_line (get_next_line.c:52)
==384138==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384138==    by 0x4062DF: main (mandatory.cpp:88)
==384138==  Address 0x4de6410 is 0 bytes inside a block of size 82 free'd
==384138==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384138==    by 0x407731: f_search_bn (get_next_line_utils.c:119)
==384138==    by 0x4073EC: get_next_line (get_next_line.c:51)
==384138==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384138==    by 0x4062DF: main (mandatory.cpp:88)
==384138==  Block was alloc'd at
==384138==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384138==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==384138==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384138==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384138==    by 0x4062DF: main (mandatory.cpp:88)
==384138== 
==384138== Invalid free() / delete / delete[] / realloc()
==384138==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384138==    by 0x407412: get_next_line (get_next_line.c:53)
==384138==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384138==    by 0x4062DF: main (mandatory.cpp:88)
==384138==  Address 0x4de63a0 is 0 bytes inside a block of size 43 free'd
==384138==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384138==    by 0x407640: ft_strjoin (get_next_line_utils.c:82)
==384138==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384138==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384138==    by 0x4062DF: main (mandatory.cpp:88)
==384138==  Block was alloc'd at
==384138==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384138==    by 0x40732E: get_next_line (get_next_line.c:27)
==384138==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384138==    by 0x4062DF: main (mandatory.cpp:88)
==384138== 
==384138== Invalid read of size 1
==384138==    at 0x4075C1: ft_strjoin (get_next_line_utils.c:68)
==384138==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384138==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384138==    by 0x4062F1: main (mandatory.cpp:88)
==384138==  Address 0x4de643b is 43 bytes inside a block of size 82 free'd
==384138==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384138==    by 0x407731: f_search_bn (get_next_line_utils.c:119)
==384138==    by 0x4073EC: get_next_line (get_next_line.c:51)
==384138==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384138==    by 0x4062DF: main (mandatory.cpp:88)
==384138==  Block was alloc'd at
==384138==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384138==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==384138==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384138==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384138==    by 0x4062DF: main (mandatory.cpp:88)
==384138== 
==384138== Invalid read of size 1
==384138==    at 0x4075A4: ft_strjoin (get_next_line_utils.c:70)
==384138==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384138==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384138==    by 0x4062F1: main (mandatory.cpp:88)
==384138==  Address 0x4de643b is 43 bytes inside a block of size 82 free'd
==384138==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384138==    by 0x407731: f_search_bn (get_next_line_utils.c:119)
==384138==    by 0x4073EC: get_next_line (get_next_line.c:51)
==384138==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384138==    by 0x4062DF: main (mandatory.cpp:88)
==384138==  Block was alloc'd at
==384138==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384138==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==384138==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384138==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384138==    by 0x4062DF: main (mandatory.cpp:88)
==384138== 
==384141== Invalid read of size 1
==384141==    at 0x407753: f_del_front_bn (get_next_line_utils.c:163)
==384141==    by 0x4073FF: get_next_line (get_next_line.c:52)
==384141==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384141==    by 0x40651D: main (mandatory.cpp:97)
==384141==  Address 0x4de6280 is 0 bytes inside a block of size 43 free'd
==384141==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384141==    by 0x407731: f_search_bn (get_next_line_utils.c:119)
==384141==    by 0x4073EC: get_next_line (get_next_line.c:51)
==384141==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384141==    by 0x40651D: main (mandatory.cpp:97)
==384141==  Block was alloc'd at
==384141==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384141==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==384141==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384141==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384141==    by 0x40651D: main (mandatory.cpp:97)
==384141== 
==384141== Invalid free() / delete / delete[] / realloc()
==384141==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384141==    by 0x407412: get_next_line (get_next_line.c:53)
==384141==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384141==    by 0x40651D: main (mandatory.cpp:97)
==384141==  Address 0x4de61c0 is 0 bytes inside a block of size 43 free'd
==384141==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384141==    by 0x407640: ft_strjoin (get_next_line_utils.c:82)
==384141==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384141==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384141==    by 0x40651D: main (mandatory.cpp:97)
==384141==  Block was alloc'd at
==384141==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384141==    by 0x40732E: get_next_line (get_next_line.c:27)
==384141==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384141==    by 0x40651D: main (mandatory.cpp:97)
==384141== 
==384141== Invalid read of size 1
==384141==    at 0x40751A: ft_strlen (get_next_line_utils.c:43)
==384141==    by 0x407547: ft_strjoin (get_next_line_utils.c:59)
==384141==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384141==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384141==    by 0x40652F: main (mandatory.cpp:97)
==384141==  Address 0x4de62a9 is 41 bytes inside a block of size 43 free'd
==384141==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384141==    by 0x407731: f_search_bn (get_next_line_utils.c:119)
==384141==    by 0x4073EC: get_next_line (get_next_line.c:51)
==384141==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384141==    by 0x40651D: main (mandatory.cpp:97)
==384141==  Block was alloc'd at
==384141==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384141==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==384141==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384141==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384141==    by 0x40651D: main (mandatory.cpp:97)
==384141== 
==384141== Invalid read of size 1
==384141==    at 0x4075C1: ft_strjoin (get_next_line_utils.c:68)
==384141==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384141==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384141==    by 0x40652F: main (mandatory.cpp:97)
==384141==  Address 0x4de62a9 is 41 bytes inside a block of size 43 free'd
==384141==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384141==    by 0x407731: f_search_bn (get_next_line_utils.c:119)
==384141==    by 0x4073EC: get_next_line (get_next_line.c:51)
==384141==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384141==    by 0x40651D: main (mandatory.cpp:97)
==384141==  Block was alloc'd at
==384141==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384141==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==384141==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384141==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384141==    by 0x40651D: main (mandatory.cpp:97)
==384141== 
==384141== Invalid read of size 1
==384141==    at 0x4075A4: ft_strjoin (get_next_line_utils.c:70)
==384141==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384141==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384141==    by 0x40652F: main (mandatory.cpp:97)
==384141==  Address 0x4de62a9 is 41 bytes inside a block of size 43 free'd
==384141==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384141==    by 0x407731: f_search_bn (get_next_line_utils.c:119)
==384141==    by 0x4073EC: get_next_line (get_next_line.c:51)
==384141==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384141==    by 0x40651D: main (mandatory.cpp:97)
==384141==  Block was alloc'd at
==384141==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384141==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==384141==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384141==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384141==    by 0x40651D: main (mandatory.cpp:97)
==384141== 
==384141== Invalid free() / delete / delete[] / realloc()
==384141==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384141==    by 0x407634: ft_strjoin (get_next_line_utils.c:81)
==384141==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384141==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384141==    by 0x40652F: main (mandatory.cpp:97)
==384141==  Address 0x4de62a9 is 41 bytes inside a block of size 43 free'd
==384141==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384141==    by 0x407731: f_search_bn (get_next_line_utils.c:119)
==384141==    by 0x4073EC: get_next_line (get_next_line.c:51)
==384141==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384141==    by 0x40651D: main (mandatory.cpp:97)
==384141==  Block was alloc'd at
==384141==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384141==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==384141==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384141==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384141==    by 0x40651D: main (mandatory.cpp:97)
==384141== 
==384141== Invalid read of size 1
==384141==    at 0x407753: f_del_front_bn (get_next_line_utils.c:163)
==384141==    by 0x4073FF: get_next_line (get_next_line.c:52)
==384141==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384141==    by 0x40652F: main (mandatory.cpp:97)
==384141==  Address 0x4de63d0 is 0 bytes inside a block of size 44 free'd
==384141==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384141==    by 0x407731: f_search_bn (get_next_line_utils.c:119)
==384141==    by 0x4073EC: get_next_line (get_next_line.c:51)
==384141==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384141==    by 0x40652F: main (mandatory.cpp:97)
==384141==  Block was alloc'd at
==384141==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384141==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==384141==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384141==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384141==    by 0x40652F: main (mandatory.cpp:97)
==384141== 
==384141== Invalid free() / delete / delete[] / realloc()
==384141==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384141==    by 0x407412: get_next_line (get_next_line.c:53)
==384141==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384141==    by 0x40652F: main (mandatory.cpp:97)
==384141==  Address 0x4de6360 is 0 bytes inside a block of size 43 free'd
==384141==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384141==    by 0x407640: ft_strjoin (get_next_line_utils.c:82)
==384141==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384141==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384141==    by 0x40652F: main (mandatory.cpp:97)
==384141==  Block was alloc'd at
==384141==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384141==    by 0x40732E: get_next_line (get_next_line.c:27)
==384141==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384141==    by 0x40652F: main (mandatory.cpp:97)
==384141== 
==384141== Invalid read of size 1
==384141==    at 0x4075C1: ft_strjoin (get_next_line_utils.c:68)
==384141==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384141==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384141==    by 0x406541: main (mandatory.cpp:97)
==384141==  Address 0x4de63fa is 42 bytes inside a block of size 44 free'd
==384141==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384141==    by 0x407731: f_search_bn (get_next_line_utils.c:119)
==384141==    by 0x4073EC: get_next_line (get_next_line.c:51)
==384141==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384141==    by 0x40652F: main (mandatory.cpp:97)
==384141==  Block was alloc'd at
==384141==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384141==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==384141==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384141==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384141==    by 0x40652F: main (mandatory.cpp:97)
==384141== 
==384141== Invalid read of size 1
==384141==    at 0x4075A4: ft_strjoin (get_next_line_utils.c:70)
==384141==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384141==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384141==    by 0x406541: main (mandatory.cpp:97)
==384141==  Address 0x4de63fa is 42 bytes inside a block of size 44 free'd
==384141==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384141==    by 0x407731: f_search_bn (get_next_line_utils.c:119)
==384141==    by 0x4073EC: get_next_line (get_next_line.c:51)
==384141==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384141==    by 0x40652F: main (mandatory.cpp:97)
==384141==  Block was alloc'd at
==384141==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384141==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==384141==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384141==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384141==    by 0x40652F: main (mandatory.cpp:97)
==384141== 
==384141== Invalid read of size 1
==384141==    at 0x407753: f_del_front_bn (get_next_line_utils.c:163)
==384141==    by 0x4073FF: get_next_line (get_next_line.c:52)
==384141==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384141==    by 0x406541: main (mandatory.cpp:97)
==384141==  Address 0x4de6520 is 0 bytes inside a block of size 44 free'd
==384141==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384141==    by 0x407731: f_search_bn (get_next_line_utils.c:119)
==384141==    by 0x4073EC: get_next_line (get_next_line.c:51)
==384141==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384141==    by 0x406541: main (mandatory.cpp:97)
==384141==  Block was alloc'd at
==384141==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384141==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==384141==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384141==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384141==    by 0x406541: main (mandatory.cpp:97)
==384141== 
==384141== Invalid free() / delete / delete[] / realloc()
==384141==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384141==    by 0x407412: get_next_line (get_next_line.c:53)
==384141==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384141==    by 0x406541: main (mandatory.cpp:97)
==384141==  Address 0x4de64b0 is 0 bytes inside a block of size 43 free'd
==384141==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384141==    by 0x407640: ft_strjoin (get_next_line_utils.c:82)
==384141==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384141==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384141==    by 0x406541: main (mandatory.cpp:97)
==384141==  Block was alloc'd at
==384141==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384141==    by 0x40732E: get_next_line (get_next_line.c:27)
==384141==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384141==    by 0x406541: main (mandatory.cpp:97)
==384141== 
==384141== Invalid read of size 1
==384141==    at 0x4075C1: ft_strjoin (get_next_line_utils.c:68)
==384141==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384141==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384141==    by 0x406553: main (mandatory.cpp:97)
==384141==  Address 0x4de654b is 43 bytes inside a block of size 44 free'd
==384141==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384141==    by 0x407731: f_search_bn (get_next_line_utils.c:119)
==384141==    by 0x4073EC: get_next_line (get_next_line.c:51)
==384141==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384141==    by 0x406541: main (mandatory.cpp:97)
==384141==  Block was alloc'd at
==384141==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384141==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==384141==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384141==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384141==    by 0x406541: main (mandatory.cpp:97)
==384141== 
==384141== Invalid read of size 1
==384141==    at 0x407753: f_del_front_bn (get_next_line_utils.c:163)
==384141==    by 0x4073FF: get_next_line (get_next_line.c:52)
==384141==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384141==    by 0x406553: main (mandatory.cpp:97)
==384141==  Address 0x4de6670 is 0 bytes inside a block of size 43 free'd
==384141==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384141==    by 0x407731: f_search_bn (get_next_line_utils.c:119)
==384141==    by 0x4073EC: get_next_line (get_next_line.c:51)
==384141==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384141==    by 0x406553: main (mandatory.cpp:97)
==384141==  Block was alloc'd at
==384141==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384141==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==384141==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384141==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384141==    by 0x406553: main (mandatory.cpp:97)
==384141== 
==384141== Invalid free() / delete / delete[] / realloc()
==384141==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384141==    by 0x407412: get_next_line (get_next_line.c:53)
==384141==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384141==    by 0x406553: main (mandatory.cpp:97)
==384141==  Address 0x4de6600 is 0 bytes inside a block of size 43 free'd
==384141==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384141==    by 0x407640: ft_strjoin (get_next_line_utils.c:82)
==384141==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384141==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384141==    by 0x406553: main (mandatory.cpp:97)
==384141==  Block was alloc'd at
==384141==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384141==    by 0x40732E: get_next_line (get_next_line.c:27)
==384141==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384141==    by 0x406553: main (mandatory.cpp:97)
==384141== 
==384141== Invalid read of size 1
==384141==    at 0x4075C1: ft_strjoin (get_next_line_utils.c:68)
==384141==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384141==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384141==    by 0x406565: main (mandatory.cpp:97)
==384141==  Address 0x4de669a is 42 bytes inside a block of size 43 free'd
==384141==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384141==    by 0x407731: f_search_bn (get_next_line_utils.c:119)
==384141==    by 0x4073EC: get_next_line (get_next_line.c:51)
==384141==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384141==    by 0x406553: main (mandatory.cpp:97)
==384141==  Block was alloc'd at
==384141==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384141==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==384141==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384141==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384141==    by 0x406553: main (mandatory.cpp:97)
==384141== 
==384141== Invalid read of size 1
==384141==    at 0x407753: f_del_front_bn (get_next_line_utils.c:163)
==384141==    by 0x4073FF: get_next_line (get_next_line.c:52)
==384141==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384141==    by 0x406565: main (mandatory.cpp:97)
==384141==  Address 0x4de67c0 is 0 bytes inside a block of size 42 free'd
==384141==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384141==    by 0x407731: f_search_bn (get_next_line_utils.c:119)
==384141==    by 0x4073EC: get_next_line (get_next_line.c:51)
==384141==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384141==    by 0x406565: main (mandatory.cpp:97)
==384141==  Block was alloc'd at
==384141==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384141==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==384141==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384141==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384141==    by 0x406565: main (mandatory.cpp:97)
==384141== 
==384141== Invalid free() / delete / delete[] / realloc()
==384141==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384141==    by 0x407412: get_next_line (get_next_line.c:53)
==384141==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384141==    by 0x406565: main (mandatory.cpp:97)
==384141==  Address 0x4de6750 is 0 bytes inside a block of size 43 free'd
==384141==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384141==    by 0x407640: ft_strjoin (get_next_line_utils.c:82)
==384141==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384141==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384141==    by 0x406565: main (mandatory.cpp:97)
==384141==  Block was alloc'd at
==384141==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384141==    by 0x40732E: get_next_line (get_next_line.c:27)
==384141==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384141==    by 0x406565: main (mandatory.cpp:97)
==384141== 
==384141== Invalid read of size 1
==384141==    at 0x4075C1: ft_strjoin (get_next_line_utils.c:68)
==384141==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384141==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384141==    by 0x406571: main (mandatory.cpp:97)
==384141==  Address 0x4de67e9 is 41 bytes inside a block of size 42 free'd
==384141==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384141==    by 0x407731: f_search_bn (get_next_line_utils.c:119)
==384141==    by 0x4073EC: get_next_line (get_next_line.c:51)
==384141==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384141==    by 0x406565: main (mandatory.cpp:97)
==384141==  Block was alloc'd at
==384141==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384141==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==384141==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384141==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384141==    by 0x406565: main (mandatory.cpp:97)
==384141== 
==384142== Invalid read of size 1
==384142==    at 0x407753: f_del_front_bn (get_next_line_utils.c:163)
==384142==    by 0x4073FF: get_next_line (get_next_line.c:52)
==384142==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384142==    by 0x406791: main (mandatory.cpp:106)
==384142==  Address 0x4de65b0 is 0 bytes inside a block of size 43 free'd
==384142==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384142==    by 0x407731: f_search_bn (get_next_line_utils.c:119)
==384142==    by 0x4073EC: get_next_line (get_next_line.c:51)
==384142==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384142==    by 0x406791: main (mandatory.cpp:106)
==384142==  Block was alloc'd at
==384142==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384142==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==384142==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384142==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384142==    by 0x406791: main (mandatory.cpp:106)
==384142== 
==384142== Invalid free() / delete / delete[] / realloc()
==384142==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384142==    by 0x407412: get_next_line (get_next_line.c:53)
==384142==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384142==    by 0x406791: main (mandatory.cpp:106)
==384142==  Address 0x4de64f0 is 0 bytes inside a block of size 43 free'd
==384142==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384142==    by 0x407640: ft_strjoin (get_next_line_utils.c:82)
==384142==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384142==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384142==    by 0x406791: main (mandatory.cpp:106)
==384142==  Block was alloc'd at
==384142==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384142==    by 0x40732E: get_next_line (get_next_line.c:27)
==384142==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384142==    by 0x406791: main (mandatory.cpp:106)
==384142== 
==384142== Invalid read of size 1
==384142==    at 0x40751A: ft_strlen (get_next_line_utils.c:43)
==384142==    by 0x407547: ft_strjoin (get_next_line_utils.c:59)
==384142==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384142==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384142==    by 0x4067A3: main (mandatory.cpp:106)
==384142==  Address 0x4de65da is 42 bytes inside a block of size 43 free'd
==384142==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384142==    by 0x407731: f_search_bn (get_next_line_utils.c:119)
==384142==    by 0x4073EC: get_next_line (get_next_line.c:51)
==384142==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384142==    by 0x406791: main (mandatory.cpp:106)
==384142==  Block was alloc'd at
==384142==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384142==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==384142==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384142==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384142==    by 0x406791: main (mandatory.cpp:106)
==384142== 
==384142== Invalid read of size 1
==384142==    at 0x4075C1: ft_strjoin (get_next_line_utils.c:68)
==384142==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384142==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384142==    by 0x4067A3: main (mandatory.cpp:106)
==384142==  Address 0x4de65da is 42 bytes inside a block of size 43 free'd
==384142==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384142==    by 0x407731: f_search_bn (get_next_line_utils.c:119)
==384142==    by 0x4073EC: get_next_line (get_next_line.c:51)
==384142==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384142==    by 0x406791: main (mandatory.cpp:106)
==384142==  Block was alloc'd at
==384142==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384142==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==384142==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384142==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384142==    by 0x406791: main (mandatory.cpp:106)
==384142== 
==384142== Invalid free() / delete / delete[] / realloc()
==384142==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384142==    by 0x407634: ft_strjoin (get_next_line_utils.c:81)
==384142==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384142==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384142==    by 0x4067A3: main (mandatory.cpp:106)
==384142==  Address 0x4de65da is 42 bytes inside a block of size 43 free'd
==384142==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384142==    by 0x407731: f_search_bn (get_next_line_utils.c:119)
==384142==    by 0x4073EC: get_next_line (get_next_line.c:51)
==384142==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384142==    by 0x406791: main (mandatory.cpp:106)
==384142==  Block was alloc'd at
==384142==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384142==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==384142==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384142==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384142==    by 0x406791: main (mandatory.cpp:106)
==384142== 
==384142== Invalid read of size 1
==384142==    at 0x407753: f_del_front_bn (get_next_line_utils.c:163)
==384142==    by 0x4073FF: get_next_line (get_next_line.c:52)
==384142==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384142==    by 0x4067A3: main (mandatory.cpp:106)
==384142==  Address 0x4de6700 is 0 bytes inside a block of size 43 free'd
==384142==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384142==    by 0x407731: f_search_bn (get_next_line_utils.c:119)
==384142==    by 0x4073EC: get_next_line (get_next_line.c:51)
==384142==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384142==    by 0x4067A3: main (mandatory.cpp:106)
==384142==  Block was alloc'd at
==384142==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384142==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==384142==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384142==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384142==    by 0x4067A3: main (mandatory.cpp:106)
==384142== 
==384142== Invalid free() / delete / delete[] / realloc()
==384142==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384142==    by 0x407412: get_next_line (get_next_line.c:53)
==384142==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384142==    by 0x4067A3: main (mandatory.cpp:106)
==384142==  Address 0x4de6690 is 0 bytes inside a block of size 43 free'd
==384142==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384142==    by 0x407640: ft_strjoin (get_next_line_utils.c:82)
==384142==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384142==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384142==    by 0x4067A3: main (mandatory.cpp:106)
==384142==  Block was alloc'd at
==384142==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384142==    by 0x40732E: get_next_line (get_next_line.c:27)
==384142==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384142==    by 0x4067A3: main (mandatory.cpp:106)
==384142== 
==384142== Invalid read of size 1
==384142==    at 0x4075C1: ft_strjoin (get_next_line_utils.c:68)
==384142==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384142==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384142==    by 0x4067B5: main (mandatory.cpp:106)
==384142==  Address 0x4de6701 is 1 bytes inside a block of size 43 free'd
==384142==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384142==    by 0x407731: f_search_bn (get_next_line_utils.c:119)
==384142==    by 0x4073EC: get_next_line (get_next_line.c:51)
==384142==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384142==    by 0x4067A3: main (mandatory.cpp:106)
==384142==  Block was alloc'd at
==384142==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384142==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==384142==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384142==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384142==    by 0x4067A3: main (mandatory.cpp:106)
==384142== 
==384142== Invalid read of size 1
==384142==    at 0x4075A4: ft_strjoin (get_next_line_utils.c:70)
==384142==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384142==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384142==    by 0x4067B5: main (mandatory.cpp:106)
==384142==  Address 0x4de6701 is 1 bytes inside a block of size 43 free'd
==384142==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384142==    by 0x407731: f_search_bn (get_next_line_utils.c:119)
==384142==    by 0x4073EC: get_next_line (get_next_line.c:51)
==384142==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384142==    by 0x4067A3: main (mandatory.cpp:106)
==384142==  Block was alloc'd at
==384142==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384142==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==384142==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384142==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384142==    by 0x4067A3: main (mandatory.cpp:106)
==384142== 
==384142== Invalid read of size 1
==384142==    at 0x407753: f_del_front_bn (get_next_line_utils.c:163)
==384142==    by 0x4073FF: get_next_line (get_next_line.c:52)
==384142==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384142==    by 0x4067B5: main (mandatory.cpp:106)
==384142==  Address 0x4de6830 is 0 bytes inside a block of size 84 free'd
==384142==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384142==    by 0x407731: f_search_bn (get_next_line_utils.c:119)
==384142==    by 0x4073EC: get_next_line (get_next_line.c:51)
==384142==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384142==    by 0x4067B5: main (mandatory.cpp:106)
==384142==  Block was alloc'd at
==384142==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384142==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==384142==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384142==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384142==    by 0x4067B5: main (mandatory.cpp:106)
==384142== 
==384142== Invalid free() / delete / delete[] / realloc()
==384142==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384142==    by 0x407412: get_next_line (get_next_line.c:53)
==384142==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384142==    by 0x4067B5: main (mandatory.cpp:106)
==384142==  Address 0x4de67c0 is 0 bytes inside a block of size 43 free'd
==384142==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384142==    by 0x407640: ft_strjoin (get_next_line_utils.c:82)
==384142==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384142==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384142==    by 0x4067B5: main (mandatory.cpp:106)
==384142==  Block was alloc'd at
==384142==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384142==    by 0x40732E: get_next_line (get_next_line.c:27)
==384142==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384142==    by 0x4067B5: main (mandatory.cpp:106)
==384142== 
==384142== Invalid read of size 1
==384142==    at 0x4075C1: ft_strjoin (get_next_line_utils.c:68)
==384142==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384142==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384142==    by 0x4067C7: main (mandatory.cpp:106)
==384142==  Address 0x4de685b is 43 bytes inside a block of size 84 free'd
==384142==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384142==    by 0x407731: f_search_bn (get_next_line_utils.c:119)
==384142==    by 0x4073EC: get_next_line (get_next_line.c:51)
==384142==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384142==    by 0x4067B5: main (mandatory.cpp:106)
==384142==  Block was alloc'd at
==384142==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384142==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==384142==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384142==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384142==    by 0x4067B5: main (mandatory.cpp:106)
==384142== 
==384142== Invalid read of size 1
==384142==    at 0x4075A4: ft_strjoin (get_next_line_utils.c:70)
==384142==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384142==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384142==    by 0x4067C7: main (mandatory.cpp:106)
==384142==  Address 0x4de685b is 43 bytes inside a block of size 84 free'd
==384142==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384142==    by 0x407731: f_search_bn (get_next_line_utils.c:119)
==384142==    by 0x4073EC: get_next_line (get_next_line.c:51)
==384142==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384142==    by 0x4067B5: main (mandatory.cpp:106)
==384142==  Block was alloc'd at
==384142==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384142==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==384142==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384142==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384142==    by 0x4067B5: main (mandatory.cpp:106)
==384142== 
==384142== Invalid read of size 1
==384142==    at 0x407753: f_del_front_bn (get_next_line_utils.c:163)
==384142==    by 0x4073FF: get_next_line (get_next_line.c:52)
==384142==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384142==    by 0x4067C7: main (mandatory.cpp:106)
==384142==  Address 0x4de69b0 is 0 bytes inside a block of size 83 free'd
==384142==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384142==    by 0x407731: f_search_bn (get_next_line_utils.c:119)
==384142==    by 0x4073EC: get_next_line (get_next_line.c:51)
==384142==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384142==    by 0x4067C7: main (mandatory.cpp:106)
==384142==  Block was alloc'd at
==384142==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384142==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==384142==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384142==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384142==    by 0x4067C7: main (mandatory.cpp:106)
==384142== 
==384142== Invalid free() / delete / delete[] / realloc()
==384142==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384142==    by 0x407412: get_next_line (get_next_line.c:53)
==384142==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384142==    by 0x4067C7: main (mandatory.cpp:106)
==384142==  Address 0x4de6940 is 0 bytes inside a block of size 43 free'd
==384142==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384142==    by 0x407640: ft_strjoin (get_next_line_utils.c:82)
==384142==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384142==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384142==    by 0x4067C7: main (mandatory.cpp:106)
==384142==  Block was alloc'd at
==384142==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384142==    by 0x40732E: get_next_line (get_next_line.c:27)
==384142==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384142==    by 0x4067C7: main (mandatory.cpp:106)
==384142== 
==384142== Invalid read of size 1
==384142==    at 0x4075C1: ft_strjoin (get_next_line_utils.c:68)
==384142==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384142==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384142==    by 0x4067D9: main (mandatory.cpp:106)
==384142==  Address 0x4de69b1 is 1 bytes inside a block of size 83 free'd
==384142==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384142==    by 0x407731: f_search_bn (get_next_line_utils.c:119)
==384142==    by 0x4073EC: get_next_line (get_next_line.c:51)
==384142==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384142==    by 0x4067C7: main (mandatory.cpp:106)
==384142==  Block was alloc'd at
==384142==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384142==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==384142==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384142==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384142==    by 0x4067C7: main (mandatory.cpp:106)
==384142== 
==384142== Invalid read of size 1
==384142==    at 0x4075A4: ft_strjoin (get_next_line_utils.c:70)
==384142==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384142==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384142==    by 0x4067D9: main (mandatory.cpp:106)
==384142==  Address 0x4de69b1 is 1 bytes inside a block of size 83 free'd
==384142==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384142==    by 0x407731: f_search_bn (get_next_line_utils.c:119)
==384142==    by 0x4073EC: get_next_line (get_next_line.c:51)
==384142==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384142==    by 0x4067C7: main (mandatory.cpp:106)
==384142==  Block was alloc'd at
==384142==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384142==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==384142==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384142==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384142==    by 0x4067C7: main (mandatory.cpp:106)
==384142== 
==384142== Invalid read of size 1
==384142==    at 0x407753: f_del_front_bn (get_next_line_utils.c:163)
==384142==    by 0x4073FF: get_next_line (get_next_line.c:52)
==384142==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384142==    by 0x4067D9: main (mandatory.cpp:106)
==384142==  Address 0x4de6b10 is 0 bytes inside a block of size 124 free'd
==384142==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384142==    by 0x407731: f_search_bn (get_next_line_utils.c:119)
==384142==    by 0x4073EC: get_next_line (get_next_line.c:51)
==384142==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384142==    by 0x4067D9: main (mandatory.cpp:106)
==384142==  Block was alloc'd at
==384142==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384142==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==384142==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384142==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384142==    by 0x4067D9: main (mandatory.cpp:106)
==384142== 
==384142== Invalid free() / delete / delete[] / realloc()
==384142==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384142==    by 0x407412: get_next_line (get_next_line.c:53)
==384142==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384142==    by 0x4067D9: main (mandatory.cpp:106)
==384142==  Address 0x4de6aa0 is 0 bytes inside a block of size 43 free'd
==384142==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384142==    by 0x407640: ft_strjoin (get_next_line_utils.c:82)
==384142==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384142==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384142==    by 0x4067D9: main (mandatory.cpp:106)
==384142==  Block was alloc'd at
==384142==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384142==    by 0x40732E: get_next_line (get_next_line.c:27)
==384142==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384142==    by 0x4067D9: main (mandatory.cpp:106)
==384142== 
==384142== Invalid read of size 1
==384142==    at 0x4075C1: ft_strjoin (get_next_line_utils.c:68)
==384142==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384142==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384142==    by 0x4067EB: main (mandatory.cpp:106)
==384142==  Address 0x4de6b3c is 44 bytes inside a block of size 124 free'd
==384142==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384142==    by 0x407731: f_search_bn (get_next_line_utils.c:119)
==384142==    by 0x4073EC: get_next_line (get_next_line.c:51)
==384142==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384142==    by 0x4067D9: main (mandatory.cpp:106)
==384142==  Block was alloc'd at
==384142==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384142==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==384142==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384142==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384142==    by 0x4067D9: main (mandatory.cpp:106)
==384142== 
==384142== Invalid read of size 1
==384142==    at 0x4075A4: ft_strjoin (get_next_line_utils.c:70)
==384142==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384142==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384142==    by 0x4067EB: main (mandatory.cpp:106)
==384142==  Address 0x4de6b3c is 44 bytes inside a block of size 124 free'd
==384142==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384142==    by 0x407731: f_search_bn (get_next_line_utils.c:119)
==384142==    by 0x4073EC: get_next_line (get_next_line.c:51)
==384142==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384142==    by 0x4067D9: main (mandatory.cpp:106)
==384142==  Block was alloc'd at
==384142==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384142==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==384142==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384142==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384142==    by 0x4067D9: main (mandatory.cpp:106)
==384142== 
==384142== Invalid read of size 1
==384142==    at 0x407753: f_del_front_bn (get_next_line_utils.c:163)
==384142==    by 0x4073FF: get_next_line (get_next_line.c:52)
==384142==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384142==    by 0x4067EB: main (mandatory.cpp:106)
==384142==  Address 0x4de6cb0 is 0 bytes inside a block of size 87 free'd
==384142==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384142==    by 0x407731: f_search_bn (get_next_line_utils.c:119)
==384142==    by 0x4073EC: get_next_line (get_next_line.c:51)
==384142==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384142==    by 0x4067EB: main (mandatory.cpp:106)
==384142==  Block was alloc'd at
==384142==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384142==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==384142==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384142==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384142==    by 0x4067EB: main (mandatory.cpp:106)
==384142== 
==384142== Invalid free() / delete / delete[] / realloc()
==384142==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384142==    by 0x407412: get_next_line (get_next_line.c:53)
==384142==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384142==    by 0x4067EB: main (mandatory.cpp:106)
==384142==  Address 0x4de6c40 is 0 bytes inside a block of size 43 free'd
==384142==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384142==    by 0x407640: ft_strjoin (get_next_line_utils.c:82)
==384142==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384142==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384142==    by 0x4067EB: main (mandatory.cpp:106)
==384142==  Block was alloc'd at
==384142==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384142==    by 0x40732E: get_next_line (get_next_line.c:27)
==384142==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384142==    by 0x4067EB: main (mandatory.cpp:106)
==384142== 
==384142== Invalid read of size 1
==384142==    at 0x4075C1: ft_strjoin (get_next_line_utils.c:68)
==384142==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384142==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384142==    by 0x4067FD: main (mandatory.cpp:106)
==384142==  Address 0x4de6cb1 is 1 bytes inside a block of size 87 free'd
==384142==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384142==    by 0x407731: f_search_bn (get_next_line_utils.c:119)
==384142==    by 0x4073EC: get_next_line (get_next_line.c:51)
==384142==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384142==    by 0x4067EB: main (mandatory.cpp:106)
==384142==  Block was alloc'd at
==384142==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384142==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==384142==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384142==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384142==    by 0x4067EB: main (mandatory.cpp:106)
==384142== 
==384142== Invalid read of size 1
==384142==    at 0x4075A4: ft_strjoin (get_next_line_utils.c:70)
==384142==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384142==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384142==    by 0x4067FD: main (mandatory.cpp:106)
==384142==  Address 0x4de6cb1 is 1 bytes inside a block of size 87 free'd
==384142==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384142==    by 0x407731: f_search_bn (get_next_line_utils.c:119)
==384142==    by 0x4073EC: get_next_line (get_next_line.c:51)
==384142==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384142==    by 0x4067EB: main (mandatory.cpp:106)
==384142==  Block was alloc'd at
==384142==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384142==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==384142==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384142==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384142==    by 0x4067EB: main (mandatory.cpp:106)
==384142== 
==384142== Invalid read of size 1
==384142==    at 0x407753: f_del_front_bn (get_next_line_utils.c:163)
==384142==    by 0x4073FF: get_next_line (get_next_line.c:52)
==384142==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384142==    by 0x4067FD: main (mandatory.cpp:106)
==384142==  Address 0x4de6e10 is 0 bytes inside a block of size 86 free'd
==384142==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384142==    by 0x407731: f_search_bn (get_next_line_utils.c:119)
==384142==    by 0x4073EC: get_next_line (get_next_line.c:51)
==384142==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384142==    by 0x4067FD: main (mandatory.cpp:106)
==384142==  Block was alloc'd at
==384142==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384142==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==384142==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384142==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384142==    by 0x4067FD: main (mandatory.cpp:106)
==384142== 
==384142== Invalid free() / delete / delete[] / realloc()
==384142==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384142==    by 0x407412: get_next_line (get_next_line.c:53)
==384142==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384142==    by 0x4067FD: main (mandatory.cpp:106)
==384142==  Address 0x4de6da0 is 0 bytes inside a block of size 43 free'd
==384142==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384142==    by 0x407640: ft_strjoin (get_next_line_utils.c:82)
==384142==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384142==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384142==    by 0x4067FD: main (mandatory.cpp:106)
==384142==  Block was alloc'd at
==384142==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384142==    by 0x40732E: get_next_line (get_next_line.c:27)
==384142==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384142==    by 0x4067FD: main (mandatory.cpp:106)
==384142== 
==384142== Invalid read of size 1
==384142==    at 0x4075C1: ft_strjoin (get_next_line_utils.c:68)
==384142==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384142==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384142==    by 0x40680F: main (mandatory.cpp:106)
==384142==  Address 0x4de6e3b is 43 bytes inside a block of size 86 free'd
==384142==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384142==    by 0x407731: f_search_bn (get_next_line_utils.c:119)
==384142==    by 0x4073EC: get_next_line (get_next_line.c:51)
==384142==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384142==    by 0x4067FD: main (mandatory.cpp:106)
==384142==  Block was alloc'd at
==384142==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384142==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==384142==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384142==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384142==    by 0x4067FD: main (mandatory.cpp:106)
==384142== 
==384142== Invalid read of size 1
==384142==    at 0x4075A4: ft_strjoin (get_next_line_utils.c:70)
==384142==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384142==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384142==    by 0x40680F: main (mandatory.cpp:106)
==384142==  Address 0x4de6e3b is 43 bytes inside a block of size 86 free'd
==384142==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384142==    by 0x407731: f_search_bn (get_next_line_utils.c:119)
==384142==    by 0x4073EC: get_next_line (get_next_line.c:51)
==384142==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384142==    by 0x4067FD: main (mandatory.cpp:106)
==384142==  Block was alloc'd at
==384142==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384142==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==384142==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384142==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384142==    by 0x4067FD: main (mandatory.cpp:106)
==384142== 
==384142== Invalid read of size 1
==384142==    at 0x407753: f_del_front_bn (get_next_line_utils.c:163)
==384142==    by 0x4073FF: get_next_line (get_next_line.c:52)
==384142==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384142==    by 0x40680F: main (mandatory.cpp:106)
==384142==  Address 0x4de6f90 is 0 bytes inside a block of size 43 free'd
==384142==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384142==    by 0x407731: f_search_bn (get_next_line_utils.c:119)
==384142==    by 0x4073EC: get_next_line (get_next_line.c:51)
==384142==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384142==    by 0x40680F: main (mandatory.cpp:106)
==384142==  Block was alloc'd at
==384142==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384142==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==384142==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384142==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384142==    by 0x40680F: main (mandatory.cpp:106)
==384142== 
==384142== Invalid free() / delete / delete[] / realloc()
==384142==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384142==    by 0x407412: get_next_line (get_next_line.c:53)
==384142==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384142==    by 0x40680F: main (mandatory.cpp:106)
==384142==  Address 0x4de6f20 is 0 bytes inside a block of size 43 free'd
==384142==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384142==    by 0x407640: ft_strjoin (get_next_line_utils.c:82)
==384142==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384142==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384142==    by 0x40680F: main (mandatory.cpp:106)
==384142==  Block was alloc'd at
==384142==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384142==    by 0x40732E: get_next_line (get_next_line.c:27)
==384142==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384142==    by 0x40680F: main (mandatory.cpp:106)
==384142== 
==384142== Invalid read of size 1
==384142==    at 0x4075C1: ft_strjoin (get_next_line_utils.c:68)
==384142==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384142==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384142==    by 0x406821: main (mandatory.cpp:106)
==384142==  Address 0x4de6f91 is 1 bytes inside a block of size 43 free'd
==384142==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384142==    by 0x407731: f_search_bn (get_next_line_utils.c:119)
==384142==    by 0x4073EC: get_next_line (get_next_line.c:51)
==384142==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384142==    by 0x40680F: main (mandatory.cpp:106)
==384142==  Block was alloc'd at
==384142==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384142==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==384142==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384142==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384142==    by 0x40680F: main (mandatory.cpp:106)
==384142== 
==384142== Invalid read of size 1
==384142==    at 0x4075A4: ft_strjoin (get_next_line_utils.c:70)
==384142==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384142==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384142==    by 0x406821: main (mandatory.cpp:106)
==384142==  Address 0x4de6f91 is 1 bytes inside a block of size 43 free'd
==384142==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384142==    by 0x407731: f_search_bn (get_next_line_utils.c:119)
==384142==    by 0x4073EC: get_next_line (get_next_line.c:51)
==384142==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384142==    by 0x40680F: main (mandatory.cpp:106)
==384142==  Block was alloc'd at
==384142==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384142==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==384142==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384142==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384142==    by 0x40680F: main (mandatory.cpp:106)
==384142== 
==384142== Invalid read of size 1
==384142==    at 0x484FBD4: strcmp (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384142==    by 0x402D0A: gnl(int, char const*) (gnl.cpp:24)
==384142==    by 0x406821: main (mandatory.cpp:106)
==384142==  Address 0x0 is not stack'd, malloc'd or (recently) free'd
==384142== 
==384145== Invalid read of size 1
==384145==    at 0x407753: f_del_front_bn (get_next_line_utils.c:163)
==384145==    by 0x4073FF: get_next_line (get_next_line.c:52)
==384145==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384145==    by 0x406A4D: main (mandatory.cpp:119)
==384145==  Address 0x4de68e0 is 0 bytes inside a block of size 43 free'd
==384145==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384145==    by 0x407731: f_search_bn (get_next_line_utils.c:119)
==384145==    by 0x4073EC: get_next_line (get_next_line.c:51)
==384145==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384145==    by 0x406A4D: main (mandatory.cpp:119)
==384145==  Block was alloc'd at
==384145==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384145==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==384145==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384145==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384145==    by 0x406A4D: main (mandatory.cpp:119)
==384145== 
==384145== Invalid free() / delete / delete[] / realloc()
==384145==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384145==    by 0x407412: get_next_line (get_next_line.c:53)
==384145==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384145==    by 0x406A4D: main (mandatory.cpp:119)
==384145==  Address 0x4de6820 is 0 bytes inside a block of size 43 free'd
==384145==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384145==    by 0x407640: ft_strjoin (get_next_line_utils.c:82)
==384145==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384145==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384145==    by 0x406A4D: main (mandatory.cpp:119)
==384145==  Block was alloc'd at
==384145==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384145==    by 0x40732E: get_next_line (get_next_line.c:27)
==384145==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384145==    by 0x406A4D: main (mandatory.cpp:119)
==384145== 
==384145== Invalid read of size 1
==384145==    at 0x40751A: ft_strlen (get_next_line_utils.c:43)
==384145==    by 0x407547: ft_strjoin (get_next_line_utils.c:59)
==384145==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384145==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384145==    by 0x406A5F: main (mandatory.cpp:119)
==384145==  Address 0x4de690a is 42 bytes inside a block of size 43 free'd
==384145==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384145==    by 0x407731: f_search_bn (get_next_line_utils.c:119)
==384145==    by 0x4073EC: get_next_line (get_next_line.c:51)
==384145==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384145==    by 0x406A4D: main (mandatory.cpp:119)
==384145==  Block was alloc'd at
==384145==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384145==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==384145==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384145==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384145==    by 0x406A4D: main (mandatory.cpp:119)
==384145== 
==384145== Invalid read of size 1
==384145==    at 0x4075C1: ft_strjoin (get_next_line_utils.c:68)
==384145==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384145==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384145==    by 0x406A5F: main (mandatory.cpp:119)
==384145==  Address 0x4de690a is 42 bytes inside a block of size 43 free'd
==384145==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384145==    by 0x407731: f_search_bn (get_next_line_utils.c:119)
==384145==    by 0x4073EC: get_next_line (get_next_line.c:51)
==384145==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384145==    by 0x406A4D: main (mandatory.cpp:119)
==384145==  Block was alloc'd at
==384145==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384145==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==384145==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384145==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384145==    by 0x406A4D: main (mandatory.cpp:119)
==384145== 
==384145== Invalid free() / delete / delete[] / realloc()
==384145==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384145==    by 0x407634: ft_strjoin (get_next_line_utils.c:81)
==384145==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384145==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384145==    by 0x406A5F: main (mandatory.cpp:119)
==384145==  Address 0x4de690a is 42 bytes inside a block of size 43 free'd
==384145==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384145==    by 0x407731: f_search_bn (get_next_line_utils.c:119)
==384145==    by 0x4073EC: get_next_line (get_next_line.c:51)
==384145==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384145==    by 0x406A4D: main (mandatory.cpp:119)
==384145==  Block was alloc'd at
==384145==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384145==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==384145==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384145==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384145==    by 0x406A4D: main (mandatory.cpp:119)
==384145== 
==384145== Invalid read of size 1
==384145==    at 0x407753: f_del_front_bn (get_next_line_utils.c:163)
==384145==    by 0x4073FF: get_next_line (get_next_line.c:52)
==384145==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384145==    by 0x406A5F: main (mandatory.cpp:119)
==384145==  Address 0x4de6a30 is 0 bytes inside a block of size 43 free'd
==384145==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384145==    by 0x407731: f_search_bn (get_next_line_utils.c:119)
==384145==    by 0x4073EC: get_next_line (get_next_line.c:51)
==384145==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384145==    by 0x406A5F: main (mandatory.cpp:119)
==384145==  Block was alloc'd at
==384145==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384145==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==384145==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384145==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384145==    by 0x406A5F: main (mandatory.cpp:119)
==384145== 
==384145== Invalid free() / delete / delete[] / realloc()
==384145==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384145==    by 0x407412: get_next_line (get_next_line.c:53)
==384145==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384145==    by 0x406A5F: main (mandatory.cpp:119)
==384145==  Address 0x4de69c0 is 0 bytes inside a block of size 43 free'd
==384145==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384145==    by 0x407640: ft_strjoin (get_next_line_utils.c:82)
==384145==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384145==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384145==    by 0x406A5F: main (mandatory.cpp:119)
==384145==  Block was alloc'd at
==384145==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384145==    by 0x40732E: get_next_line (get_next_line.c:27)
==384145==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384145==    by 0x406A5F: main (mandatory.cpp:119)
==384145== 
==384145== Invalid read of size 1
==384145==    at 0x4075C1: ft_strjoin (get_next_line_utils.c:68)
==384145==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384145==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384145==    by 0x406A71: main (mandatory.cpp:119)
==384145==  Address 0x4de6a31 is 1 bytes inside a block of size 43 free'd
==384145==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384145==    by 0x407731: f_search_bn (get_next_line_utils.c:119)
==384145==    by 0x4073EC: get_next_line (get_next_line.c:51)
==384145==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384145==    by 0x406A5F: main (mandatory.cpp:119)
==384145==  Block was alloc'd at
==384145==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384145==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==384145==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384145==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384145==    by 0x406A5F: main (mandatory.cpp:119)
==384145== 
==384145== Invalid read of size 1
==384145==    at 0x4075A4: ft_strjoin (get_next_line_utils.c:70)
==384145==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384145==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384145==    by 0x406A71: main (mandatory.cpp:119)
==384145==  Address 0x4de6a31 is 1 bytes inside a block of size 43 free'd
==384145==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384145==    by 0x407731: f_search_bn (get_next_line_utils.c:119)
==384145==    by 0x4073EC: get_next_line (get_next_line.c:51)
==384145==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384145==    by 0x406A5F: main (mandatory.cpp:119)
==384145==  Block was alloc'd at
==384145==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384145==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==384145==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384145==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384145==    by 0x406A5F: main (mandatory.cpp:119)
==384145== 
==384145== Invalid read of size 1
==384145==    at 0x407753: f_del_front_bn (get_next_line_utils.c:163)
==384145==    by 0x4073FF: get_next_line (get_next_line.c:52)
==384145==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384145==    by 0x406A71: main (mandatory.cpp:119)
==384145==  Address 0x4de6b60 is 0 bytes inside a block of size 84 free'd
==384145==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384145==    by 0x407731: f_search_bn (get_next_line_utils.c:119)
==384145==    by 0x4073EC: get_next_line (get_next_line.c:51)
==384145==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384145==    by 0x406A71: main (mandatory.cpp:119)
==384145==  Block was alloc'd at
==384145==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384145==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==384145==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384145==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384145==    by 0x406A71: main (mandatory.cpp:119)
==384145== 
==384145== Invalid free() / delete / delete[] / realloc()
==384145==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384145==    by 0x407412: get_next_line (get_next_line.c:53)
==384145==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384145==    by 0x406A71: main (mandatory.cpp:119)
==384145==  Address 0x4de6af0 is 0 bytes inside a block of size 43 free'd
==384145==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384145==    by 0x407640: ft_strjoin (get_next_line_utils.c:82)
==384145==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384145==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384145==    by 0x406A71: main (mandatory.cpp:119)
==384145==  Block was alloc'd at
==384145==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384145==    by 0x40732E: get_next_line (get_next_line.c:27)
==384145==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384145==    by 0x406A71: main (mandatory.cpp:119)
==384145== 
==384145== Invalid read of size 1
==384145==    at 0x4075C1: ft_strjoin (get_next_line_utils.c:68)
==384145==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384145==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384145==    by 0x406A83: main (mandatory.cpp:119)
==384145==  Address 0x4de6b8b is 43 bytes inside a block of size 84 free'd
==384145==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384145==    by 0x407731: f_search_bn (get_next_line_utils.c:119)
==384145==    by 0x4073EC: get_next_line (get_next_line.c:51)
==384145==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384145==    by 0x406A71: main (mandatory.cpp:119)
==384145==  Block was alloc'd at
==384145==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384145==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==384145==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384145==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384145==    by 0x406A71: main (mandatory.cpp:119)
==384145== 
==384145== Invalid read of size 1
==384145==    at 0x4075A4: ft_strjoin (get_next_line_utils.c:70)
==384145==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384145==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384145==    by 0x406A83: main (mandatory.cpp:119)
==384145==  Address 0x4de6b8b is 43 bytes inside a block of size 84 free'd
==384145==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384145==    by 0x407731: f_search_bn (get_next_line_utils.c:119)
==384145==    by 0x4073EC: get_next_line (get_next_line.c:51)
==384145==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384145==    by 0x406A71: main (mandatory.cpp:119)
==384145==  Block was alloc'd at
==384145==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384145==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==384145==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384145==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384145==    by 0x406A71: main (mandatory.cpp:119)
==384145== 
==384145== Invalid read of size 1
==384145==    at 0x407753: f_del_front_bn (get_next_line_utils.c:163)
==384145==    by 0x4073FF: get_next_line (get_next_line.c:52)
==384145==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384145==    by 0x406A83: main (mandatory.cpp:119)
==384145==  Address 0x4de6ce0 is 0 bytes inside a block of size 83 free'd
==384145==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384145==    by 0x407731: f_search_bn (get_next_line_utils.c:119)
==384145==    by 0x4073EC: get_next_line (get_next_line.c:51)
==384145==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384145==    by 0x406A83: main (mandatory.cpp:119)
==384145==  Block was alloc'd at
==384145==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384145==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==384145==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384145==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384145==    by 0x406A83: main (mandatory.cpp:119)
==384145== 
==384145== Invalid free() / delete / delete[] / realloc()
==384145==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384145==    by 0x407412: get_next_line (get_next_line.c:53)
==384145==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384145==    by 0x406A83: main (mandatory.cpp:119)
==384145==  Address 0x4de6c70 is 0 bytes inside a block of size 43 free'd
==384145==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384145==    by 0x407640: ft_strjoin (get_next_line_utils.c:82)
==384145==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384145==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384145==    by 0x406A83: main (mandatory.cpp:119)
==384145==  Block was alloc'd at
==384145==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384145==    by 0x40732E: get_next_line (get_next_line.c:27)
==384145==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384145==    by 0x406A83: main (mandatory.cpp:119)
==384145== 
==384145== Invalid read of size 1
==384145==    at 0x4075C1: ft_strjoin (get_next_line_utils.c:68)
==384145==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384145==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384145==    by 0x406A95: main (mandatory.cpp:119)
==384145==  Address 0x4de6ce1 is 1 bytes inside a block of size 83 free'd
==384145==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384145==    by 0x407731: f_search_bn (get_next_line_utils.c:119)
==384145==    by 0x4073EC: get_next_line (get_next_line.c:51)
==384145==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384145==    by 0x406A83: main (mandatory.cpp:119)
==384145==  Block was alloc'd at
==384145==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384145==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==384145==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384145==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384145==    by 0x406A83: main (mandatory.cpp:119)
==384145== 
==384145== Invalid read of size 1
==384145==    at 0x4075A4: ft_strjoin (get_next_line_utils.c:70)
==384145==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384145==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384145==    by 0x406A95: main (mandatory.cpp:119)
==384145==  Address 0x4de6ce1 is 1 bytes inside a block of size 83 free'd
==384145==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384145==    by 0x407731: f_search_bn (get_next_line_utils.c:119)
==384145==    by 0x4073EC: get_next_line (get_next_line.c:51)
==384145==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384145==    by 0x406A83: main (mandatory.cpp:119)
==384145==  Block was alloc'd at
==384145==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384145==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==384145==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384145==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384145==    by 0x406A83: main (mandatory.cpp:119)
==384145== 
==384145== Invalid read of size 1
==384145==    at 0x407753: f_del_front_bn (get_next_line_utils.c:163)
==384145==    by 0x4073FF: get_next_line (get_next_line.c:52)
==384145==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384145==    by 0x406A95: main (mandatory.cpp:119)
==384145==  Address 0x4de6e40 is 0 bytes inside a block of size 124 free'd
==384145==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384145==    by 0x407731: f_search_bn (get_next_line_utils.c:119)
==384145==    by 0x4073EC: get_next_line (get_next_line.c:51)
==384145==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384145==    by 0x406A95: main (mandatory.cpp:119)
==384145==  Block was alloc'd at
==384145==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384145==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==384145==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384145==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384145==    by 0x406A95: main (mandatory.cpp:119)
==384145== 
==384145== Invalid free() / delete / delete[] / realloc()
==384145==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384145==    by 0x407412: get_next_line (get_next_line.c:53)
==384145==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384145==    by 0x406A95: main (mandatory.cpp:119)
==384145==  Address 0x4de6dd0 is 0 bytes inside a block of size 43 free'd
==384145==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384145==    by 0x407640: ft_strjoin (get_next_line_utils.c:82)
==384145==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384145==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384145==    by 0x406A95: main (mandatory.cpp:119)
==384145==  Block was alloc'd at
==384145==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384145==    by 0x40732E: get_next_line (get_next_line.c:27)
==384145==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384145==    by 0x406A95: main (mandatory.cpp:119)
==384145== 
==384145== Invalid read of size 1
==384145==    at 0x4075C1: ft_strjoin (get_next_line_utils.c:68)
==384145==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384145==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384145==    by 0x406AA7: main (mandatory.cpp:119)
==384145==  Address 0x4de6e6c is 44 bytes inside a block of size 124 free'd
==384145==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384145==    by 0x407731: f_search_bn (get_next_line_utils.c:119)
==384145==    by 0x4073EC: get_next_line (get_next_line.c:51)
==384145==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384145==    by 0x406A95: main (mandatory.cpp:119)
==384145==  Block was alloc'd at
==384145==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384145==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==384145==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384145==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384145==    by 0x406A95: main (mandatory.cpp:119)
==384145== 
==384145== Invalid read of size 1
==384145==    at 0x4075A4: ft_strjoin (get_next_line_utils.c:70)
==384145==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384145==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384145==    by 0x406AA7: main (mandatory.cpp:119)
==384145==  Address 0x4de6e6c is 44 bytes inside a block of size 124 free'd
==384145==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384145==    by 0x407731: f_search_bn (get_next_line_utils.c:119)
==384145==    by 0x4073EC: get_next_line (get_next_line.c:51)
==384145==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384145==    by 0x406A95: main (mandatory.cpp:119)
==384145==  Block was alloc'd at
==384145==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384145==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==384145==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384145==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384145==    by 0x406A95: main (mandatory.cpp:119)
==384145== 
==384145== Invalid read of size 1
==384145==    at 0x407753: f_del_front_bn (get_next_line_utils.c:163)
==384145==    by 0x4073FF: get_next_line (get_next_line.c:52)
==384145==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384145==    by 0x406AA7: main (mandatory.cpp:119)
==384145==  Address 0x4de6fe0 is 0 bytes inside a block of size 88 free'd
==384145==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384145==    by 0x407731: f_search_bn (get_next_line_utils.c:119)
==384145==    by 0x4073EC: get_next_line (get_next_line.c:51)
==384145==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384145==    by 0x406AA7: main (mandatory.cpp:119)
==384145==  Block was alloc'd at
==384145==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384145==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==384145==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384145==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384145==    by 0x406AA7: main (mandatory.cpp:119)
==384145== 
==384145== Invalid free() / delete / delete[] / realloc()
==384145==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384145==    by 0x407412: get_next_line (get_next_line.c:53)
==384145==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384145==    by 0x406AA7: main (mandatory.cpp:119)
==384145==  Address 0x4de6f70 is 0 bytes inside a block of size 43 free'd
==384145==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384145==    by 0x407640: ft_strjoin (get_next_line_utils.c:82)
==384145==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384145==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384145==    by 0x406AA7: main (mandatory.cpp:119)
==384145==  Block was alloc'd at
==384145==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384145==    by 0x40732E: get_next_line (get_next_line.c:27)
==384145==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384145==    by 0x406AA7: main (mandatory.cpp:119)
==384145== 
==384145== Invalid read of size 1
==384145==    at 0x4075C1: ft_strjoin (get_next_line_utils.c:68)
==384145==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384145==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384145==    by 0x406AB9: main (mandatory.cpp:119)
==384145==  Address 0x4de6fe1 is 1 bytes inside a block of size 88 free'd
==384145==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384145==    by 0x407731: f_search_bn (get_next_line_utils.c:119)
==384145==    by 0x4073EC: get_next_line (get_next_line.c:51)
==384145==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384145==    by 0x406AA7: main (mandatory.cpp:119)
==384145==  Block was alloc'd at
==384145==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384145==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==384145==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384145==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384145==    by 0x406AA7: main (mandatory.cpp:119)
==384145== 
==384145== Invalid read of size 1
==384145==    at 0x4075A4: ft_strjoin (get_next_line_utils.c:70)
==384145==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384145==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384145==    by 0x406AB9: main (mandatory.cpp:119)
==384145==  Address 0x4de6fe1 is 1 bytes inside a block of size 88 free'd
==384145==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384145==    by 0x407731: f_search_bn (get_next_line_utils.c:119)
==384145==    by 0x4073EC: get_next_line (get_next_line.c:51)
==384145==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384145==    by 0x406AA7: main (mandatory.cpp:119)
==384145==  Block was alloc'd at
==384145==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384145==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==384145==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384145==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384145==    by 0x406AA7: main (mandatory.cpp:119)
==384145== 
==384145== Invalid read of size 1
==384145==    at 0x407753: f_del_front_bn (get_next_line_utils.c:163)
==384145==    by 0x4073FF: get_next_line (get_next_line.c:52)
==384145==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384145==    by 0x406AB9: main (mandatory.cpp:119)
==384145==  Address 0x4de7140 is 0 bytes inside a block of size 87 free'd
==384145==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384145==    by 0x407731: f_search_bn (get_next_line_utils.c:119)
==384145==    by 0x4073EC: get_next_line (get_next_line.c:51)
==384145==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384145==    by 0x406AB9: main (mandatory.cpp:119)
==384145==  Block was alloc'd at
==384145==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384145==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==384145==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384145==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384145==    by 0x406AB9: main (mandatory.cpp:119)
==384145== 
==384145== Invalid free() / delete / delete[] / realloc()
==384145==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384145==    by 0x407412: get_next_line (get_next_line.c:53)
==384145==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384145==    by 0x406AB9: main (mandatory.cpp:119)
==384145==  Address 0x4de70d0 is 0 bytes inside a block of size 43 free'd
==384145==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384145==    by 0x407640: ft_strjoin (get_next_line_utils.c:82)
==384145==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384145==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384145==    by 0x406AB9: main (mandatory.cpp:119)
==384145==  Block was alloc'd at
==384145==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384145==    by 0x40732E: get_next_line (get_next_line.c:27)
==384145==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384145==    by 0x406AB9: main (mandatory.cpp:119)
==384145== 
==384145== Invalid read of size 1
==384145==    at 0x4075C1: ft_strjoin (get_next_line_utils.c:68)
==384145==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384145==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384145==    by 0x406ACB: main (mandatory.cpp:119)
==384145==  Address 0x4de716b is 43 bytes inside a block of size 87 free'd
==384145==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384145==    by 0x407731: f_search_bn (get_next_line_utils.c:119)
==384145==    by 0x4073EC: get_next_line (get_next_line.c:51)
==384145==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384145==    by 0x406AB9: main (mandatory.cpp:119)
==384145==  Block was alloc'd at
==384145==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384145==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==384145==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384145==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384145==    by 0x406AB9: main (mandatory.cpp:119)
==384145== 
==384145== Invalid read of size 1
==384145==    at 0x4075A4: ft_strjoin (get_next_line_utils.c:70)
==384145==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384145==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384145==    by 0x406ACB: main (mandatory.cpp:119)
==384145==  Address 0x4de716b is 43 bytes inside a block of size 87 free'd
==384145==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384145==    by 0x407731: f_search_bn (get_next_line_utils.c:119)
==384145==    by 0x4073EC: get_next_line (get_next_line.c:51)
==384145==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384145==    by 0x406AB9: main (mandatory.cpp:119)
==384145==  Block was alloc'd at
==384145==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384145==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==384145==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384145==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384145==    by 0x406AB9: main (mandatory.cpp:119)
==384145== 
==384145== Invalid read of size 1
==384145==    at 0x407753: f_del_front_bn (get_next_line_utils.c:163)
==384145==    by 0x4073FF: get_next_line (get_next_line.c:52)
==384145==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384145==    by 0x406ACB: main (mandatory.cpp:119)
==384145==  Address 0x4de72c0 is 0 bytes inside a block of size 44 free'd
==384145==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384145==    by 0x407731: f_search_bn (get_next_line_utils.c:119)
==384145==    by 0x4073EC: get_next_line (get_next_line.c:51)
==384145==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384145==    by 0x406ACB: main (mandatory.cpp:119)
==384145==  Block was alloc'd at
==384145==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384145==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==384145==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384145==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384145==    by 0x406ACB: main (mandatory.cpp:119)
==384145== 
==384145== Invalid free() / delete / delete[] / realloc()
==384145==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384145==    by 0x407412: get_next_line (get_next_line.c:53)
==384145==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384145==    by 0x406ACB: main (mandatory.cpp:119)
==384145==  Address 0x4de7250 is 0 bytes inside a block of size 43 free'd
==384145==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384145==    by 0x407640: ft_strjoin (get_next_line_utils.c:82)
==384145==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384145==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384145==    by 0x406ACB: main (mandatory.cpp:119)
==384145==  Block was alloc'd at
==384145==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384145==    by 0x40732E: get_next_line (get_next_line.c:27)
==384145==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384145==    by 0x406ACB: main (mandatory.cpp:119)
==384145== 
==384145== Invalid read of size 1
==384145==    at 0x4075C1: ft_strjoin (get_next_line_utils.c:68)
==384145==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384145==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384145==    by 0x406ADD: main (mandatory.cpp:119)
==384145==  Address 0x4de72c1 is 1 bytes inside a block of size 44 free'd
==384145==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384145==    by 0x407731: f_search_bn (get_next_line_utils.c:119)
==384145==    by 0x4073EC: get_next_line (get_next_line.c:51)
==384145==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384145==    by 0x406ACB: main (mandatory.cpp:119)
==384145==  Block was alloc'd at
==384145==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384145==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==384145==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384145==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384145==    by 0x406ACB: main (mandatory.cpp:119)
==384145== 
==384145== Invalid read of size 1
==384145==    at 0x4075A4: ft_strjoin (get_next_line_utils.c:70)
==384145==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384145==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384145==    by 0x406ADD: main (mandatory.cpp:119)
==384145==  Address 0x4de72c1 is 1 bytes inside a block of size 44 free'd
==384145==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384145==    by 0x407731: f_search_bn (get_next_line_utils.c:119)
==384145==    by 0x4073EC: get_next_line (get_next_line.c:51)
==384145==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384145==    by 0x406ACB: main (mandatory.cpp:119)
==384145==  Block was alloc'd at
==384145==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384145==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==384145==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384145==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384145==    by 0x406ACB: main (mandatory.cpp:119)
==384145== 
==384145== Invalid read of size 1
==384145==    at 0x407753: f_del_front_bn (get_next_line_utils.c:163)
==384145==    by 0x4073FF: get_next_line (get_next_line.c:52)
==384145==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384145==    by 0x406ADD: main (mandatory.cpp:119)
==384145==  Address 0x4de73f0 is 0 bytes inside a block of size 43 free'd
==384145==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384145==    by 0x407731: f_search_bn (get_next_line_utils.c:119)
==384145==    by 0x4073EC: get_next_line (get_next_line.c:51)
==384145==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384145==    by 0x406ADD: main (mandatory.cpp:119)
==384145==  Block was alloc'd at
==384145==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384145==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==384145==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384145==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384145==    by 0x406ADD: main (mandatory.cpp:119)
==384145== 
==384145== Invalid free() / delete / delete[] / realloc()
==384145==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384145==    by 0x407412: get_next_line (get_next_line.c:53)
==384145==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384145==    by 0x406ADD: main (mandatory.cpp:119)
==384145==  Address 0x4de7380 is 0 bytes inside a block of size 43 free'd
==384145==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384145==    by 0x407640: ft_strjoin (get_next_line_utils.c:82)
==384145==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384145==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384145==    by 0x406ADD: main (mandatory.cpp:119)
==384145==  Block was alloc'd at
==384145==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384145==    by 0x40732E: get_next_line (get_next_line.c:27)
==384145==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384145==    by 0x406ADD: main (mandatory.cpp:119)
==384145== 
==384145== Invalid read of size 1
==384145==    at 0x4075C1: ft_strjoin (get_next_line_utils.c:68)
==384145==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384145==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384145==    by 0x406AE9: main (mandatory.cpp:119)
==384145==  Address 0x4de741a is 42 bytes inside a block of size 43 free'd
==384145==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384145==    by 0x407731: f_search_bn (get_next_line_utils.c:119)
==384145==    by 0x4073EC: get_next_line (get_next_line.c:51)
==384145==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384145==    by 0x406ADD: main (mandatory.cpp:119)
==384145==  Block was alloc'd at
==384145==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384145==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==384145==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384145==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384145==    by 0x406ADD: main (mandatory.cpp:119)
==384145== 
==384147== Syscall param read(buf) points to unaddressable byte(s)
==384147==    at 0x4CB8992: read (read.c:26)
==384147==    by 0x40736D: get_next_line (get_next_line.c:37)
==384147==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384147==    by 0x406D09: main (mandatory.cpp:132)
==384147==  Address 0x4de6b30 is 0 bytes inside a block of size 43 free'd
==384147==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384147==    by 0x407640: ft_strjoin (get_next_line_utils.c:82)
==384147==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384147==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384147==    by 0x406D09: main (mandatory.cpp:132)
==384147==  Block was alloc'd at
==384147==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384147==    by 0x40732E: get_next_line (get_next_line.c:27)
==384147==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384147==    by 0x406D09: main (mandatory.cpp:132)
==384147== 
==384147== Invalid write of size 1
==384147==    at 0x40737E: get_next_line (get_next_line.c:38)
==384147==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384147==    by 0x406D09: main (mandatory.cpp:132)
==384147==  Address 0x4de6b5a is 42 bytes inside a block of size 43 free'd
==384147==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384147==    by 0x407640: ft_strjoin (get_next_line_utils.c:82)
==384147==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384147==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384147==    by 0x406D09: main (mandatory.cpp:132)
==384147==  Block was alloc'd at
==384147==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384147==    by 0x40732E: get_next_line (get_next_line.c:27)
==384147==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384147==    by 0x406D09: main (mandatory.cpp:132)
==384147== 
==384147== Invalid read of size 1
==384147==    at 0x40751A: ft_strlen (get_next_line_utils.c:43)
==384147==    by 0x407555: ft_strjoin (get_next_line_utils.c:59)
==384147==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384147==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384147==    by 0x406D09: main (mandatory.cpp:132)
==384147==  Address 0x4de6b5a is 42 bytes inside a block of size 43 free'd
==384147==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384147==    by 0x407640: ft_strjoin (get_next_line_utils.c:82)
==384147==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384147==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384147==    by 0x406D09: main (mandatory.cpp:132)
==384147==  Block was alloc'd at
==384147==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384147==    by 0x40732E: get_next_line (get_next_line.c:27)
==384147==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384147==    by 0x406D09: main (mandatory.cpp:132)
==384147== 
==384147== Invalid read of size 1
==384147==    at 0x40760D: ft_strjoin (get_next_line_utils.c:75)
==384147==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384147==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384147==    by 0x406D09: main (mandatory.cpp:132)
==384147==  Address 0x4de6b5a is 42 bytes inside a block of size 43 free'd
==384147==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384147==    by 0x407640: ft_strjoin (get_next_line_utils.c:82)
==384147==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384147==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384147==    by 0x406D09: main (mandatory.cpp:132)
==384147==  Block was alloc'd at
==384147==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384147==    by 0x40732E: get_next_line (get_next_line.c:27)
==384147==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384147==    by 0x406D09: main (mandatory.cpp:132)
==384147== 
==384147== Invalid free() / delete / delete[] / realloc()
==384147==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384147==    by 0x407640: ft_strjoin (get_next_line_utils.c:82)
==384147==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384147==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384147==    by 0x406D09: main (mandatory.cpp:132)
==384147==  Address 0x4de6b30 is 0 bytes inside a block of size 43 free'd
==384147==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384147==    by 0x407640: ft_strjoin (get_next_line_utils.c:82)
==384147==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384147==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384147==    by 0x406D09: main (mandatory.cpp:132)
==384147==  Block was alloc'd at
==384147==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384147==    by 0x40732E: get_next_line (get_next_line.c:27)
==384147==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384147==    by 0x406D09: main (mandatory.cpp:132)
==384147== 
==384152== Syscall param read(buf) points to unaddressable byte(s)
==384152==    at 0x4CB8992: read (read.c:26)
==384152==    by 0x40736D: get_next_line (get_next_line.c:37)
==384152==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384152==    by 0x406F35: main (mandatory.cpp:136)
==384152==  Address 0x4de6e40 is 0 bytes inside a block of size 43 free'd
==384152==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384152==    by 0x407640: ft_strjoin (get_next_line_utils.c:82)
==384152==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384152==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384152==    by 0x406F35: main (mandatory.cpp:136)
==384152==  Block was alloc'd at
==384152==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384152==    by 0x40732E: get_next_line (get_next_line.c:27)
==384152==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384152==    by 0x406F35: main (mandatory.cpp:136)
==384152== 
==384152== Invalid write of size 1
==384152==    at 0x40737E: get_next_line (get_next_line.c:38)
==384152==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384152==    by 0x406F35: main (mandatory.cpp:136)
==384152==  Address 0x4de6e6a is 42 bytes inside a block of size 43 free'd
==384152==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384152==    by 0x407640: ft_strjoin (get_next_line_utils.c:82)
==384152==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384152==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384152==    by 0x406F35: main (mandatory.cpp:136)
==384152==  Block was alloc'd at
==384152==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384152==    by 0x40732E: get_next_line (get_next_line.c:27)
==384152==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384152==    by 0x406F35: main (mandatory.cpp:136)
==384152== 
==384152== Invalid read of size 1
==384152==    at 0x40751A: ft_strlen (get_next_line_utils.c:43)
==384152==    by 0x407555: ft_strjoin (get_next_line_utils.c:59)
==384152==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384152==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384152==    by 0x406F35: main (mandatory.cpp:136)
==384152==  Address 0x4de6e6a is 42 bytes inside a block of size 43 free'd
==384152==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384152==    by 0x407640: ft_strjoin (get_next_line_utils.c:82)
==384152==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384152==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384152==    by 0x406F35: main (mandatory.cpp:136)
==384152==  Block was alloc'd at
==384152==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384152==    by 0x40732E: get_next_line (get_next_line.c:27)
==384152==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384152==    by 0x406F35: main (mandatory.cpp:136)
==384152== 
==384152== Invalid read of size 1
==384152==    at 0x40760D: ft_strjoin (get_next_line_utils.c:75)
==384152==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384152==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384152==    by 0x406F35: main (mandatory.cpp:136)
==384152==  Address 0x4de6e6a is 42 bytes inside a block of size 43 free'd
==384152==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384152==    by 0x407640: ft_strjoin (get_next_line_utils.c:82)
==384152==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384152==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384152==    by 0x406F35: main (mandatory.cpp:136)
==384152==  Block was alloc'd at
==384152==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384152==    by 0x40732E: get_next_line (get_next_line.c:27)
==384152==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384152==    by 0x406F35: main (mandatory.cpp:136)
==384152== 
==384152== Invalid free() / delete / delete[] / realloc()
==384152==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384152==    by 0x407640: ft_strjoin (get_next_line_utils.c:82)
==384152==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384152==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384152==    by 0x406F35: main (mandatory.cpp:136)
==384152==  Address 0x4de6e40 is 0 bytes inside a block of size 43 free'd
==384152==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384152==    by 0x407640: ft_strjoin (get_next_line_utils.c:82)
==384152==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384152==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384152==    by 0x406F35: main (mandatory.cpp:136)
==384152==  Block was alloc'd at
==384152==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384152==    by 0x40732E: get_next_line (get_next_line.c:27)
==384152==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384152==    by 0x406F35: main (mandatory.cpp:136)
==384152== 
==384152== Invalid read of size 1
==384152==    at 0x407753: f_del_front_bn (get_next_line_utils.c:163)
==384152==    by 0x4073FF: get_next_line (get_next_line.c:52)
==384152==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384152==    by 0x406F35: main (mandatory.cpp:136)
==384152==  Address 0x4f0ecf0 is 0 bytes inside a block of size 10,002 free'd
==384152==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384152==    by 0x407731: f_search_bn (get_next_line_utils.c:119)
==384152==    by 0x4073EC: get_next_line (get_next_line.c:51)
==384152==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384152==    by 0x406F35: main (mandatory.cpp:136)
==384152==  Block was alloc'd at
==384152==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384152==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==384152==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384152==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384152==    by 0x406F35: main (mandatory.cpp:136)
==384152== 
==384152== Invalid free() / delete / delete[] / realloc()
==384152==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384152==    by 0x407412: get_next_line (get_next_line.c:53)
==384152==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384152==    by 0x406F35: main (mandatory.cpp:136)
==384152==  Address 0x4de6e40 is 0 bytes inside a block of size 43 free'd
==384152==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384152==    by 0x407640: ft_strjoin (get_next_line_utils.c:82)
==384152==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384152==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384152==    by 0x406F35: main (mandatory.cpp:136)
==384152==  Block was alloc'd at
==384152==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384152==    by 0x40732E: get_next_line (get_next_line.c:27)
==384152==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384152==    by 0x406F35: main (mandatory.cpp:136)
==384152== 
==384152== Invalid read of size 1
==384152==    at 0x40751A: ft_strlen (get_next_line_utils.c:43)
==384152==    by 0x407547: ft_strjoin (get_next_line_utils.c:59)
==384152==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384152==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384152==    by 0x406F41: main (mandatory.cpp:136)
==384152==  Address 0x4f11401 is 10,001 bytes inside a block of size 10,002 free'd
==384152==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384152==    by 0x407731: f_search_bn (get_next_line_utils.c:119)
==384152==    by 0x4073EC: get_next_line (get_next_line.c:51)
==384152==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384152==    by 0x406F35: main (mandatory.cpp:136)
==384152==  Block was alloc'd at
==384152==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384152==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==384152==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384152==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384152==    by 0x406F35: main (mandatory.cpp:136)
==384152== 
==384152== Invalid read of size 1
==384152==    at 0x4075C1: ft_strjoin (get_next_line_utils.c:68)
==384152==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384152==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384152==    by 0x406F41: main (mandatory.cpp:136)
==384152==  Address 0x4f11401 is 10,001 bytes inside a block of size 10,002 free'd
==384152==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384152==    by 0x407731: f_search_bn (get_next_line_utils.c:119)
==384152==    by 0x4073EC: get_next_line (get_next_line.c:51)
==384152==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384152==    by 0x406F35: main (mandatory.cpp:136)
==384152==  Block was alloc'd at
==384152==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384152==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==384152==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384152==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384152==    by 0x406F35: main (mandatory.cpp:136)
==384152== 
==384152== Invalid free() / delete / delete[] / realloc()
==384152==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384152==    by 0x407634: ft_strjoin (get_next_line_utils.c:81)
==384152==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384152==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384152==    by 0x406F41: main (mandatory.cpp:136)
==384152==  Address 0x4f11401 is 10,001 bytes inside a block of size 10,002 free'd
==384152==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384152==    by 0x407731: f_search_bn (get_next_line_utils.c:119)
==384152==    by 0x4073EC: get_next_line (get_next_line.c:51)
==384152==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384152==    by 0x406F35: main (mandatory.cpp:136)
==384152==  Block was alloc'd at
==384152==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384152==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==384152==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384152==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384152==    by 0x406F35: main (mandatory.cpp:136)
==384152== 
==384155== Invalid read of size 1
==384155==    at 0x407753: f_del_front_bn (get_next_line_utils.c:163)
==384155==    by 0x4073FF: get_next_line (get_next_line.c:52)
==384155==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384155==    by 0x407160: main (mandatory.cpp:141)
==384155==  Address 0x4de6f00 is 0 bytes inside a block of size 43 free'd
==384155==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384155==    by 0x407731: f_search_bn (get_next_line_utils.c:119)
==384155==    by 0x4073EC: get_next_line (get_next_line.c:51)
==384155==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384155==    by 0x407160: main (mandatory.cpp:141)
==384155==  Block was alloc'd at
==384155==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384155==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==384155==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384155==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384155==    by 0x407160: main (mandatory.cpp:141)
==384155== 
==384155== Invalid free() / delete / delete[] / realloc()
==384155==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384155==    by 0x407412: get_next_line (get_next_line.c:53)
==384155==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384155==    by 0x407160: main (mandatory.cpp:141)
==384155==  Address 0x4de6e40 is 0 bytes inside a block of size 43 free'd
==384155==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384155==    by 0x407640: ft_strjoin (get_next_line_utils.c:82)
==384155==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384155==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384155==    by 0x407160: main (mandatory.cpp:141)
==384155==  Block was alloc'd at
==384155==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384155==    by 0x40732E: get_next_line (get_next_line.c:27)
==384155==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384155==    by 0x407160: main (mandatory.cpp:141)
==384155== 
==384155== Invalid read of size 1
==384155==    at 0x40751A: ft_strlen (get_next_line_utils.c:43)
==384155==    by 0x407547: ft_strjoin (get_next_line_utils.c:59)
==384155==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384155==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384155==    by 0x407171: main (mandatory.cpp:141)
==384155==  Address 0x4de6f2a is 42 bytes inside a block of size 43 free'd
==384155==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384155==    by 0x407731: f_search_bn (get_next_line_utils.c:119)
==384155==    by 0x4073EC: get_next_line (get_next_line.c:51)
==384155==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384155==    by 0x407160: main (mandatory.cpp:141)
==384155==  Block was alloc'd at
==384155==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384155==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==384155==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384155==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384155==    by 0x407160: main (mandatory.cpp:141)
==384155== 
==384155== Invalid read of size 1
==384155==    at 0x4075C1: ft_strjoin (get_next_line_utils.c:68)
==384155==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384155==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384155==    by 0x407171: main (mandatory.cpp:141)
==384155==  Address 0x4de6f2a is 42 bytes inside a block of size 43 free'd
==384155==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384155==    by 0x407731: f_search_bn (get_next_line_utils.c:119)
==384155==    by 0x4073EC: get_next_line (get_next_line.c:51)
==384155==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384155==    by 0x407160: main (mandatory.cpp:141)
==384155==  Block was alloc'd at
==384155==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384155==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==384155==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384155==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384155==    by 0x407160: main (mandatory.cpp:141)
==384155== 
==384155== Invalid free() / delete / delete[] / realloc()
==384155==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384155==    by 0x407634: ft_strjoin (get_next_line_utils.c:81)
==384155==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384155==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384155==    by 0x407171: main (mandatory.cpp:141)
==384155==  Address 0x4de6f2a is 42 bytes inside a block of size 43 free'd
==384155==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384155==    by 0x407731: f_search_bn (get_next_line_utils.c:119)
==384155==    by 0x4073EC: get_next_line (get_next_line.c:51)
==384155==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384155==    by 0x407160: main (mandatory.cpp:141)
==384155==  Block was alloc'd at
==384155==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384155==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==384155==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384155==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384155==    by 0x407160: main (mandatory.cpp:141)
==384155== 
==384155== Invalid read of size 1
==384155==    at 0x407753: f_del_front_bn (get_next_line_utils.c:163)
==384155==    by 0x4073FF: get_next_line (get_next_line.c:52)
==384155==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384155==    by 0x407171: main (mandatory.cpp:141)
==384155==  Address 0x4de7050 is 0 bytes inside a block of size 43 free'd
==384155==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384155==    by 0x407731: f_search_bn (get_next_line_utils.c:119)
==384155==    by 0x4073EC: get_next_line (get_next_line.c:51)
==384155==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384155==    by 0x407171: main (mandatory.cpp:141)
==384155==  Block was alloc'd at
==384155==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384155==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==384155==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384155==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384155==    by 0x407171: main (mandatory.cpp:141)
==384155== 
==384155== Invalid free() / delete / delete[] / realloc()
==384155==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384155==    by 0x407412: get_next_line (get_next_line.c:53)
==384155==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384155==    by 0x407171: main (mandatory.cpp:141)
==384155==  Address 0x4de6fe0 is 0 bytes inside a block of size 43 free'd
==384155==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384155==    by 0x407640: ft_strjoin (get_next_line_utils.c:82)
==384155==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384155==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384155==    by 0x407171: main (mandatory.cpp:141)
==384155==  Block was alloc'd at
==384155==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384155==    by 0x40732E: get_next_line (get_next_line.c:27)
==384155==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384155==    by 0x407171: main (mandatory.cpp:141)
==384155== 
==384155== Invalid read of size 1
==384155==    at 0x4075C1: ft_strjoin (get_next_line_utils.c:68)
==384155==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384155==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384155==    by 0x407182: main (mandatory.cpp:141)
==384155==  Address 0x4de7051 is 1 bytes inside a block of size 43 free'd
==384155==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384155==    by 0x407731: f_search_bn (get_next_line_utils.c:119)
==384155==    by 0x4073EC: get_next_line (get_next_line.c:51)
==384155==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384155==    by 0x407171: main (mandatory.cpp:141)
==384155==  Block was alloc'd at
==384155==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384155==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==384155==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384155==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384155==    by 0x407171: main (mandatory.cpp:141)
==384155== 
==384155== Invalid read of size 1
==384155==    at 0x4075A4: ft_strjoin (get_next_line_utils.c:70)
==384155==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384155==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384155==    by 0x407182: main (mandatory.cpp:141)
==384155==  Address 0x4de7051 is 1 bytes inside a block of size 43 free'd
==384155==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384155==    by 0x407731: f_search_bn (get_next_line_utils.c:119)
==384155==    by 0x4073EC: get_next_line (get_next_line.c:51)
==384155==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384155==    by 0x407171: main (mandatory.cpp:141)
==384155==  Block was alloc'd at
==384155==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384155==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==384155==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384155==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384155==    by 0x407171: main (mandatory.cpp:141)
==384155== 
==384155== Invalid read of size 1
==384155==    at 0x407753: f_del_front_bn (get_next_line_utils.c:163)
==384155==    by 0x4073FF: get_next_line (get_next_line.c:52)
==384155==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384155==    by 0x407182: main (mandatory.cpp:141)
==384155==  Address 0x4de7180 is 0 bytes inside a block of size 84 free'd
==384155==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384155==    by 0x407731: f_search_bn (get_next_line_utils.c:119)
==384155==    by 0x4073EC: get_next_line (get_next_line.c:51)
==384155==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384155==    by 0x407182: main (mandatory.cpp:141)
==384155==  Block was alloc'd at
==384155==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384155==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==384155==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384155==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384155==    by 0x407182: main (mandatory.cpp:141)
==384155== 
==384155== Invalid free() / delete / delete[] / realloc()
==384155==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384155==    by 0x407412: get_next_line (get_next_line.c:53)
==384155==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384155==    by 0x407182: main (mandatory.cpp:141)
==384155==  Address 0x4de7110 is 0 bytes inside a block of size 43 free'd
==384155==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384155==    by 0x407640: ft_strjoin (get_next_line_utils.c:82)
==384155==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384155==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384155==    by 0x407182: main (mandatory.cpp:141)
==384155==  Block was alloc'd at
==384155==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384155==    by 0x40732E: get_next_line (get_next_line.c:27)
==384155==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384155==    by 0x407182: main (mandatory.cpp:141)
==384155== 
==384155== Invalid read of size 1
==384155==    at 0x4075C1: ft_strjoin (get_next_line_utils.c:68)
==384155==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384155==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384155==    by 0x407193: main (mandatory.cpp:141)
==384155==  Address 0x4de71ab is 43 bytes inside a block of size 84 free'd
==384155==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384155==    by 0x407731: f_search_bn (get_next_line_utils.c:119)
==384155==    by 0x4073EC: get_next_line (get_next_line.c:51)
==384155==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384155==    by 0x407182: main (mandatory.cpp:141)
==384155==  Block was alloc'd at
==384155==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384155==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==384155==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384155==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384155==    by 0x407182: main (mandatory.cpp:141)
==384155== 
==384155== Invalid read of size 1
==384155==    at 0x4075A4: ft_strjoin (get_next_line_utils.c:70)
==384155==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384155==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384155==    by 0x407193: main (mandatory.cpp:141)
==384155==  Address 0x4de71ab is 43 bytes inside a block of size 84 free'd
==384155==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384155==    by 0x407731: f_search_bn (get_next_line_utils.c:119)
==384155==    by 0x4073EC: get_next_line (get_next_line.c:51)
==384155==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384155==    by 0x407182: main (mandatory.cpp:141)
==384155==  Block was alloc'd at
==384155==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384155==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==384155==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384155==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384155==    by 0x407182: main (mandatory.cpp:141)
==384155== 
==384155== Invalid read of size 1
==384155==    at 0x407753: f_del_front_bn (get_next_line_utils.c:163)
==384155==    by 0x4073FF: get_next_line (get_next_line.c:52)
==384155==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384155==    by 0x407193: main (mandatory.cpp:141)
==384155==  Address 0x4de7300 is 0 bytes inside a block of size 83 free'd
==384155==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384155==    by 0x407731: f_search_bn (get_next_line_utils.c:119)
==384155==    by 0x4073EC: get_next_line (get_next_line.c:51)
==384155==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384155==    by 0x407193: main (mandatory.cpp:141)
==384155==  Block was alloc'd at
==384155==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384155==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==384155==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384155==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384155==    by 0x407193: main (mandatory.cpp:141)
==384155== 
==384155== Invalid free() / delete / delete[] / realloc()
==384155==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384155==    by 0x407412: get_next_line (get_next_line.c:53)
==384155==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384155==    by 0x407193: main (mandatory.cpp:141)
==384155==  Address 0x4de7290 is 0 bytes inside a block of size 43 free'd
==384155==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384155==    by 0x407640: ft_strjoin (get_next_line_utils.c:82)
==384155==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384155==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384155==    by 0x407193: main (mandatory.cpp:141)
==384155==  Block was alloc'd at
==384155==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384155==    by 0x40732E: get_next_line (get_next_line.c:27)
==384155==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384155==    by 0x407193: main (mandatory.cpp:141)
==384155== 
==384155== Invalid read of size 1
==384155==    at 0x4075C1: ft_strjoin (get_next_line_utils.c:68)
==384155==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384155==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384155==    by 0x4071A4: main (mandatory.cpp:141)
==384155==  Address 0x4de7301 is 1 bytes inside a block of size 83 free'd
==384155==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384155==    by 0x407731: f_search_bn (get_next_line_utils.c:119)
==384155==    by 0x4073EC: get_next_line (get_next_line.c:51)
==384155==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384155==    by 0x407193: main (mandatory.cpp:141)
==384155==  Block was alloc'd at
==384155==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384155==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==384155==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384155==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384155==    by 0x407193: main (mandatory.cpp:141)
==384155== 
==384155== Invalid read of size 1
==384155==    at 0x4075A4: ft_strjoin (get_next_line_utils.c:70)
==384155==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384155==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384155==    by 0x4071A4: main (mandatory.cpp:141)
==384155==  Address 0x4de7301 is 1 bytes inside a block of size 83 free'd
==384155==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384155==    by 0x407731: f_search_bn (get_next_line_utils.c:119)
==384155==    by 0x4073EC: get_next_line (get_next_line.c:51)
==384155==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384155==    by 0x407193: main (mandatory.cpp:141)
==384155==  Block was alloc'd at
==384155==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384155==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==384155==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384155==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384155==    by 0x407193: main (mandatory.cpp:141)
==384155== 
==384155== Invalid read of size 1
==384155==    at 0x407753: f_del_front_bn (get_next_line_utils.c:163)
==384155==    by 0x4073FF: get_next_line (get_next_line.c:52)
==384155==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384155==    by 0x4071A4: main (mandatory.cpp:141)
==384155==  Address 0x4de7460 is 0 bytes inside a block of size 124 free'd
==384155==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384155==    by 0x407731: f_search_bn (get_next_line_utils.c:119)
==384155==    by 0x4073EC: get_next_line (get_next_line.c:51)
==384155==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384155==    by 0x4071A4: main (mandatory.cpp:141)
==384155==  Block was alloc'd at
==384155==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384155==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==384155==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384155==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384155==    by 0x4071A4: main (mandatory.cpp:141)
==384155== 
==384155== Invalid free() / delete / delete[] / realloc()
==384155==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384155==    by 0x407412: get_next_line (get_next_line.c:53)
==384155==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384155==    by 0x4071A4: main (mandatory.cpp:141)
==384155==  Address 0x4de73f0 is 0 bytes inside a block of size 43 free'd
==384155==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384155==    by 0x407640: ft_strjoin (get_next_line_utils.c:82)
==384155==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384155==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384155==    by 0x4071A4: main (mandatory.cpp:141)
==384155==  Block was alloc'd at
==384155==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384155==    by 0x40732E: get_next_line (get_next_line.c:27)
==384155==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384155==    by 0x4071A4: main (mandatory.cpp:141)
==384155== 
==384155== Invalid read of size 1
==384155==    at 0x4075C1: ft_strjoin (get_next_line_utils.c:68)
==384155==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384155==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384155==    by 0x4071B5: main (mandatory.cpp:141)
==384155==  Address 0x4de748c is 44 bytes inside a block of size 124 free'd
==384155==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384155==    by 0x407731: f_search_bn (get_next_line_utils.c:119)
==384155==    by 0x4073EC: get_next_line (get_next_line.c:51)
==384155==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384155==    by 0x4071A4: main (mandatory.cpp:141)
==384155==  Block was alloc'd at
==384155==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384155==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==384155==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384155==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384155==    by 0x4071A4: main (mandatory.cpp:141)
==384155== 
==384155== Invalid read of size 1
==384155==    at 0x4075A4: ft_strjoin (get_next_line_utils.c:70)
==384155==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384155==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384155==    by 0x4071B5: main (mandatory.cpp:141)
==384155==  Address 0x4de748c is 44 bytes inside a block of size 124 free'd
==384155==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384155==    by 0x407731: f_search_bn (get_next_line_utils.c:119)
==384155==    by 0x4073EC: get_next_line (get_next_line.c:51)
==384155==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384155==    by 0x4071A4: main (mandatory.cpp:141)
==384155==  Block was alloc'd at
==384155==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384155==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==384155==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384155==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384155==    by 0x4071A4: main (mandatory.cpp:141)
==384155== 
==384155== Invalid read of size 1
==384155==    at 0x407753: f_del_front_bn (get_next_line_utils.c:163)
==384155==    by 0x4073FF: get_next_line (get_next_line.c:52)
==384155==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384155==    by 0x4071B5: main (mandatory.cpp:141)
==384155==  Address 0x4de7600 is 0 bytes inside a block of size 88 free'd
==384155==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384155==    by 0x407731: f_search_bn (get_next_line_utils.c:119)
==384155==    by 0x4073EC: get_next_line (get_next_line.c:51)
==384155==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384155==    by 0x4071B5: main (mandatory.cpp:141)
==384155==  Block was alloc'd at
==384155==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384155==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==384155==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384155==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384155==    by 0x4071B5: main (mandatory.cpp:141)
==384155== 
==384155== Invalid free() / delete / delete[] / realloc()
==384155==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384155==    by 0x407412: get_next_line (get_next_line.c:53)
==384155==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384155==    by 0x4071B5: main (mandatory.cpp:141)
==384155==  Address 0x4de7590 is 0 bytes inside a block of size 43 free'd
==384155==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384155==    by 0x407640: ft_strjoin (get_next_line_utils.c:82)
==384155==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384155==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384155==    by 0x4071B5: main (mandatory.cpp:141)
==384155==  Block was alloc'd at
==384155==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384155==    by 0x40732E: get_next_line (get_next_line.c:27)
==384155==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384155==    by 0x4071B5: main (mandatory.cpp:141)
==384155== 
==384155== Invalid read of size 1
==384155==    at 0x4075C1: ft_strjoin (get_next_line_utils.c:68)
==384155==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384155==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384155==    by 0x4071C6: main (mandatory.cpp:141)
==384155==  Address 0x4de7601 is 1 bytes inside a block of size 88 free'd
==384155==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384155==    by 0x407731: f_search_bn (get_next_line_utils.c:119)
==384155==    by 0x4073EC: get_next_line (get_next_line.c:51)
==384155==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384155==    by 0x4071B5: main (mandatory.cpp:141)
==384155==  Block was alloc'd at
==384155==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384155==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==384155==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384155==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384155==    by 0x4071B5: main (mandatory.cpp:141)
==384155== 
==384155== Invalid read of size 1
==384155==    at 0x4075A4: ft_strjoin (get_next_line_utils.c:70)
==384155==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384155==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384155==    by 0x4071C6: main (mandatory.cpp:141)
==384155==  Address 0x4de7601 is 1 bytes inside a block of size 88 free'd
==384155==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384155==    by 0x407731: f_search_bn (get_next_line_utils.c:119)
==384155==    by 0x4073EC: get_next_line (get_next_line.c:51)
==384155==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384155==    by 0x4071B5: main (mandatory.cpp:141)
==384155==  Block was alloc'd at
==384155==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384155==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==384155==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384155==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384155==    by 0x4071B5: main (mandatory.cpp:141)
==384155== 
==384155== Invalid read of size 1
==384155==    at 0x407753: f_del_front_bn (get_next_line_utils.c:163)
==384155==    by 0x4073FF: get_next_line (get_next_line.c:52)
==384155==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384155==    by 0x4071C6: main (mandatory.cpp:141)
==384155==  Address 0x4de7760 is 0 bytes inside a block of size 87 free'd
==384155==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384155==    by 0x407731: f_search_bn (get_next_line_utils.c:119)
==384155==    by 0x4073EC: get_next_line (get_next_line.c:51)
==384155==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384155==    by 0x4071C6: main (mandatory.cpp:141)
==384155==  Block was alloc'd at
==384155==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384155==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==384155==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384155==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384155==    by 0x4071C6: main (mandatory.cpp:141)
==384155== 
==384155== Invalid free() / delete / delete[] / realloc()
==384155==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384155==    by 0x407412: get_next_line (get_next_line.c:53)
==384155==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384155==    by 0x4071C6: main (mandatory.cpp:141)
==384155==  Address 0x4de76f0 is 0 bytes inside a block of size 43 free'd
==384155==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384155==    by 0x407640: ft_strjoin (get_next_line_utils.c:82)
==384155==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384155==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384155==    by 0x4071C6: main (mandatory.cpp:141)
==384155==  Block was alloc'd at
==384155==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384155==    by 0x40732E: get_next_line (get_next_line.c:27)
==384155==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384155==    by 0x4071C6: main (mandatory.cpp:141)
==384155== 
==384155== Invalid read of size 1
==384155==    at 0x4075C1: ft_strjoin (get_next_line_utils.c:68)
==384155==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384155==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384155==    by 0x4071D7: main (mandatory.cpp:141)
==384155==  Address 0x4de778b is 43 bytes inside a block of size 87 free'd
==384155==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384155==    by 0x407731: f_search_bn (get_next_line_utils.c:119)
==384155==    by 0x4073EC: get_next_line (get_next_line.c:51)
==384155==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384155==    by 0x4071C6: main (mandatory.cpp:141)
==384155==  Block was alloc'd at
==384155==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384155==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==384155==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384155==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384155==    by 0x4071C6: main (mandatory.cpp:141)
==384155== 
==384155== Invalid read of size 1
==384155==    at 0x4075A4: ft_strjoin (get_next_line_utils.c:70)
==384155==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384155==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384155==    by 0x4071D7: main (mandatory.cpp:141)
==384155==  Address 0x4de778b is 43 bytes inside a block of size 87 free'd
==384155==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384155==    by 0x407731: f_search_bn (get_next_line_utils.c:119)
==384155==    by 0x4073EC: get_next_line (get_next_line.c:51)
==384155==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384155==    by 0x4071C6: main (mandatory.cpp:141)
==384155==  Block was alloc'd at
==384155==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384155==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==384155==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384155==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384155==    by 0x4071C6: main (mandatory.cpp:141)
==384155== 
==384155== Invalid read of size 1
==384155==    at 0x407753: f_del_front_bn (get_next_line_utils.c:163)
==384155==    by 0x4073FF: get_next_line (get_next_line.c:52)
==384155==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384155==    by 0x4071D7: main (mandatory.cpp:141)
==384155==  Address 0x4de78e0 is 0 bytes inside a block of size 44 free'd
==384155==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384155==    by 0x407731: f_search_bn (get_next_line_utils.c:119)
==384155==    by 0x4073EC: get_next_line (get_next_line.c:51)
==384155==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384155==    by 0x4071D7: main (mandatory.cpp:141)
==384155==  Block was alloc'd at
==384155==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384155==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==384155==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384155==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384155==    by 0x4071D7: main (mandatory.cpp:141)
==384155== 
==384155== Invalid free() / delete / delete[] / realloc()
==384155==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384155==    by 0x407412: get_next_line (get_next_line.c:53)
==384155==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384155==    by 0x4071D7: main (mandatory.cpp:141)
==384155==  Address 0x4de7870 is 0 bytes inside a block of size 43 free'd
==384155==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384155==    by 0x407640: ft_strjoin (get_next_line_utils.c:82)
==384155==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384155==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384155==    by 0x4071D7: main (mandatory.cpp:141)
==384155==  Block was alloc'd at
==384155==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384155==    by 0x40732E: get_next_line (get_next_line.c:27)
==384155==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384155==    by 0x4071D7: main (mandatory.cpp:141)
==384155== 
==384155== Invalid read of size 1
==384155==    at 0x4075C1: ft_strjoin (get_next_line_utils.c:68)
==384155==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384155==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384155==    by 0x4071E8: main (mandatory.cpp:141)
==384155==  Address 0x4de78e1 is 1 bytes inside a block of size 44 free'd
==384155==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384155==    by 0x407731: f_search_bn (get_next_line_utils.c:119)
==384155==    by 0x4073EC: get_next_line (get_next_line.c:51)
==384155==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384155==    by 0x4071D7: main (mandatory.cpp:141)
==384155==  Block was alloc'd at
==384155==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384155==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==384155==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384155==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384155==    by 0x4071D7: main (mandatory.cpp:141)
==384155== 
==384155== Invalid read of size 1
==384155==    at 0x4075A4: ft_strjoin (get_next_line_utils.c:70)
==384155==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384155==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384155==    by 0x4071E8: main (mandatory.cpp:141)
==384155==  Address 0x4de78e1 is 1 bytes inside a block of size 44 free'd
==384155==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384155==    by 0x407731: f_search_bn (get_next_line_utils.c:119)
==384155==    by 0x4073EC: get_next_line (get_next_line.c:51)
==384155==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384155==    by 0x4071D7: main (mandatory.cpp:141)
==384155==  Block was alloc'd at
==384155==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384155==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==384155==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384155==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384155==    by 0x4071D7: main (mandatory.cpp:141)
==384155== 
==384155== Invalid read of size 1
==384155==    at 0x407753: f_del_front_bn (get_next_line_utils.c:163)
==384155==    by 0x4073FF: get_next_line (get_next_line.c:52)
==384155==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384155==    by 0x4071E8: main (mandatory.cpp:141)
==384155==  Address 0x4de7a10 is 0 bytes inside a block of size 43 free'd
==384155==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384155==    by 0x407731: f_search_bn (get_next_line_utils.c:119)
==384155==    by 0x4073EC: get_next_line (get_next_line.c:51)
==384155==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384155==    by 0x4071E8: main (mandatory.cpp:141)
==384155==  Block was alloc'd at
==384155==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384155==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==384155==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384155==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384155==    by 0x4071E8: main (mandatory.cpp:141)
==384155== 
==384155== Invalid free() / delete / delete[] / realloc()
==384155==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384155==    by 0x407412: get_next_line (get_next_line.c:53)
==384155==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384155==    by 0x4071E8: main (mandatory.cpp:141)
==384155==  Address 0x4de79a0 is 0 bytes inside a block of size 43 free'd
==384155==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384155==    by 0x407640: ft_strjoin (get_next_line_utils.c:82)
==384155==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384155==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384155==    by 0x4071E8: main (mandatory.cpp:141)
==384155==  Block was alloc'd at
==384155==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384155==    by 0x40732E: get_next_line (get_next_line.c:27)
==384155==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384155==    by 0x4071E8: main (mandatory.cpp:141)
==384155== 
==384155== Invalid read of size 1
==384155==    at 0x4075C1: ft_strjoin (get_next_line_utils.c:68)
==384155==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384155==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384155==    by 0x4071F3: main (mandatory.cpp:141)
==384155==  Address 0x4de7a3a is 42 bytes inside a block of size 43 free'd
==384155==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384155==    by 0x407731: f_search_bn (get_next_line_utils.c:119)
==384155==    by 0x4073EC: get_next_line (get_next_line.c:51)
==384155==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384155==    by 0x4071E8: main (mandatory.cpp:141)
==384155==  Block was alloc'd at
==384155==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384155==    by 0x40756B: ft_strjoin (get_next_line_utils.c:64)
==384155==    by 0x4073BD: get_next_line (get_next_line.c:48)
==384155==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384155==    by 0x4071E8: main (mandatory.cpp:141)
==384155== 
==384182== Invalid write of size 1
==384182==    at 0x40734C: get_next_line (get_next_line.c:38)
==384182==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384182==    by 0x404BC6: main (mandatory.cpp:25)
==384182==  Address 0x51d103f is 1 bytes before a block of size 10,000,001 alloc'd
==384182==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384182==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384182==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384182==    by 0x404BC6: main (mandatory.cpp:25)
==384182== 
==384182== Conditional jump or move depends on uninitialised value(s)
==384182==    at 0x4074F3: ft_strlen (get_next_line_utils.c:43)
==384182==    by 0x407529: ft_strjoin (get_next_line_utils.c:59)
==384182==    by 0x40738B: get_next_line (get_next_line.c:48)
==384182==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384182==    by 0x404BC6: main (mandatory.cpp:25)
==384182== 
==384182== Conditional jump or move depends on uninitialised value(s)
==384182==    at 0x4075E6: ft_strjoin (get_next_line_utils.c:75)
==384182==    by 0x40738B: get_next_line (get_next_line.c:48)
==384182==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384182==    by 0x404BC6: main (mandatory.cpp:25)
==384182== 
==384182== Invalid write of size 1
==384182==    at 0x40734C: get_next_line (get_next_line.c:38)
==384182==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384182==    by 0x404BE8: main (mandatory.cpp:25)
==384182==  Address 0x5b5b03f is 1 bytes before a block of size 10,000,001 alloc'd
==384182==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384182==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384182==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384182==    by 0x404BE8: main (mandatory.cpp:25)
==384182== 
==384182== Conditional jump or move depends on uninitialised value(s)
==384182==    at 0x4075E6: ft_strjoin (get_next_line_utils.c:75)
==384182==    by 0x40738B: get_next_line (get_next_line.c:48)
==384182==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384182==    by 0x404BE8: main (mandatory.cpp:25)
==384182== 
==384185== Invalid read of size 1
==384185==    at 0x4074EE: ft_strlen (get_next_line_utils.c:43)
==384185==    by 0x40751B: ft_strjoin (get_next_line_utils.c:59)
==384185==    by 0x40738B: get_next_line (get_next_line.c:48)
==384185==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384185==    by 0x404E6F: main (mandatory.cpp:31)
==384185==  Address 0x4de4660 is 0 bytes inside a block of size 1 free'd
==384185==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384185==    by 0x407433: get_next_line (get_next_line.c:67)
==384185==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384185==    by 0x404E63: main (mandatory.cpp:31)
==384185==  Block was alloc'd at
==384185==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384185==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==384185==    by 0x40738B: get_next_line (get_next_line.c:48)
==384185==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384185==    by 0x404E63: main (mandatory.cpp:31)
==384185== 
==384185== Invalid read of size 1
==384185==    at 0x407595: ft_strjoin (get_next_line_utils.c:68)
==384185==    by 0x40738B: get_next_line (get_next_line.c:48)
==384185==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384185==    by 0x404E6F: main (mandatory.cpp:31)
==384185==  Address 0x4de4660 is 0 bytes inside a block of size 1 free'd
==384185==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384185==    by 0x407433: get_next_line (get_next_line.c:67)
==384185==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384185==    by 0x404E63: main (mandatory.cpp:31)
==384185==  Block was alloc'd at
==384185==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384185==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==384185==    by 0x40738B: get_next_line (get_next_line.c:48)
==384185==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384185==    by 0x404E63: main (mandatory.cpp:31)
==384185== 
==384185== Invalid free() / delete / delete[] / realloc()
==384185==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384185==    by 0x407608: ft_strjoin (get_next_line_utils.c:81)
==384185==    by 0x40738B: get_next_line (get_next_line.c:48)
==384185==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384185==    by 0x404E6F: main (mandatory.cpp:31)
==384185==  Address 0x4de4660 is 0 bytes inside a block of size 1 free'd
==384185==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384185==    by 0x407433: get_next_line (get_next_line.c:67)
==384185==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384185==    by 0x404E63: main (mandatory.cpp:31)
==384185==  Block was alloc'd at
==384185==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384185==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==384185==    by 0x40738B: get_next_line (get_next_line.c:48)
==384185==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384185==    by 0x404E63: main (mandatory.cpp:31)
==384185== 
==384186== Invalid read of size 1
==384186==    at 0x407727: f_del_front_bn (get_next_line_utils.c:163)
==384186==    by 0x4073CD: get_next_line (get_next_line.c:52)
==384186==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384186==    by 0x40508F: main (mandatory.cpp:36)
==384186==  Address 0x4de4660 is 0 bytes inside a block of size 2 free'd
==384186==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384186==    by 0x407705: f_search_bn (get_next_line_utils.c:119)
==384186==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384186==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384186==    by 0x40508F: main (mandatory.cpp:36)
==384186==  Block was alloc'd at
==384186==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384186==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==384186==    by 0x40738B: get_next_line (get_next_line.c:48)
==384186==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384186==    by 0x40508F: main (mandatory.cpp:36)
==384186== 
==384186== Invalid free() / delete / delete[] / realloc()
==384186==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384186==    by 0x4073E0: get_next_line (get_next_line.c:53)
==384186==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384186==    by 0x40508F: main (mandatory.cpp:36)
==384186==  Address 0x51d1040 is 0 bytes inside a block of size 10,000,001 free'd
==384186==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384186==    by 0x407614: ft_strjoin (get_next_line_utils.c:82)
==384186==    by 0x40738B: get_next_line (get_next_line.c:48)
==384186==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384186==    by 0x40508F: main (mandatory.cpp:36)
==384186==  Block was alloc'd at
==384186==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384186==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384186==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384186==    by 0x40508F: main (mandatory.cpp:36)
==384186== 
==384186== Invalid read of size 1
==384186==    at 0x4074EE: ft_strlen (get_next_line_utils.c:43)
==384186==    by 0x40751B: ft_strjoin (get_next_line_utils.c:59)
==384186==    by 0x40738B: get_next_line (get_next_line.c:48)
==384186==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384186==    by 0x40509B: main (mandatory.cpp:36)
==384186==  Address 0x4de4661 is 1 bytes inside a block of size 2 free'd
==384186==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384186==    by 0x407705: f_search_bn (get_next_line_utils.c:119)
==384186==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384186==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384186==    by 0x40508F: main (mandatory.cpp:36)
==384186==  Block was alloc'd at
==384186==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384186==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==384186==    by 0x40738B: get_next_line (get_next_line.c:48)
==384186==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384186==    by 0x40508F: main (mandatory.cpp:36)
==384186== 
==384186== Invalid read of size 1
==384186==    at 0x407595: ft_strjoin (get_next_line_utils.c:68)
==384186==    by 0x40738B: get_next_line (get_next_line.c:48)
==384186==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384186==    by 0x40509B: main (mandatory.cpp:36)
==384186==  Address 0x4de4661 is 1 bytes inside a block of size 2 free'd
==384186==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384186==    by 0x407705: f_search_bn (get_next_line_utils.c:119)
==384186==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384186==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384186==    by 0x40508F: main (mandatory.cpp:36)
==384186==  Block was alloc'd at
==384186==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384186==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==384186==    by 0x40738B: get_next_line (get_next_line.c:48)
==384186==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384186==    by 0x40508F: main (mandatory.cpp:36)
==384186== 
==384186== Invalid free() / delete / delete[] / realloc()
==384186==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384186==    by 0x407608: ft_strjoin (get_next_line_utils.c:81)
==384186==    by 0x40738B: get_next_line (get_next_line.c:48)
==384186==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384186==    by 0x40509B: main (mandatory.cpp:36)
==384186==  Address 0x4de4661 is 1 bytes inside a block of size 2 free'd
==384186==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384186==    by 0x407705: f_search_bn (get_next_line_utils.c:119)
==384186==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384186==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384186==    by 0x40508F: main (mandatory.cpp:36)
==384186==  Block was alloc'd at
==384186==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384186==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==384186==    by 0x40738B: get_next_line (get_next_line.c:48)
==384186==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384186==    by 0x40508F: main (mandatory.cpp:36)
==384186== 
==384195== Invalid read of size 1
==384195==    at 0x407727: f_del_front_bn (get_next_line_utils.c:163)
==384195==    by 0x4073CD: get_next_line (get_next_line.c:52)
==384195==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384195==    by 0x4054E7: main (mandatory.cpp:46)
==384195==  Address 0x4de4c80 is 0 bytes inside a block of size 43 free'd
==384195==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384195==    by 0x407705: f_search_bn (get_next_line_utils.c:119)
==384195==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384195==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384195==    by 0x4054E7: main (mandatory.cpp:46)
==384195==  Block was alloc'd at
==384195==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384195==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==384195==    by 0x40738B: get_next_line (get_next_line.c:48)
==384195==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384195==    by 0x4054E7: main (mandatory.cpp:46)
==384195== 
==384195== Invalid free() / delete / delete[] / realloc()
==384195==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384195==    by 0x4073E0: get_next_line (get_next_line.c:53)
==384195==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384195==    by 0x4054E7: main (mandatory.cpp:46)
==384195==  Address 0x51d1040 is 0 bytes inside a block of size 10,000,001 free'd
==384195==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384195==    by 0x407614: ft_strjoin (get_next_line_utils.c:82)
==384195==    by 0x40738B: get_next_line (get_next_line.c:48)
==384195==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384195==    by 0x4054E7: main (mandatory.cpp:46)
==384195==  Block was alloc'd at
==384195==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384195==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384195==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384195==    by 0x4054E7: main (mandatory.cpp:46)
==384195== 
==384195== Invalid read of size 1
==384195==    at 0x4074EE: ft_strlen (get_next_line_utils.c:43)
==384195==    by 0x40751B: ft_strjoin (get_next_line_utils.c:59)
==384195==    by 0x40738B: get_next_line (get_next_line.c:48)
==384195==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384195==    by 0x4054F9: main (mandatory.cpp:46)
==384195==  Address 0x4de4ca9 is 41 bytes inside a block of size 43 free'd
==384195==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384195==    by 0x407705: f_search_bn (get_next_line_utils.c:119)
==384195==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384195==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384195==    by 0x4054E7: main (mandatory.cpp:46)
==384195==  Block was alloc'd at
==384195==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384195==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==384195==    by 0x40738B: get_next_line (get_next_line.c:48)
==384195==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384195==    by 0x4054E7: main (mandatory.cpp:46)
==384195== 
==384195== Invalid read of size 1
==384195==    at 0x407595: ft_strjoin (get_next_line_utils.c:68)
==384195==    by 0x40738B: get_next_line (get_next_line.c:48)
==384195==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384195==    by 0x4054F9: main (mandatory.cpp:46)
==384195==  Address 0x4de4ca9 is 41 bytes inside a block of size 43 free'd
==384195==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384195==    by 0x407705: f_search_bn (get_next_line_utils.c:119)
==384195==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384195==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384195==    by 0x4054E7: main (mandatory.cpp:46)
==384195==  Block was alloc'd at
==384195==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384195==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==384195==    by 0x40738B: get_next_line (get_next_line.c:48)
==384195==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384195==    by 0x4054E7: main (mandatory.cpp:46)
==384195== 
==384195== Invalid read of size 1
==384195==    at 0x407578: ft_strjoin (get_next_line_utils.c:70)
==384195==    by 0x40738B: get_next_line (get_next_line.c:48)
==384195==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384195==    by 0x4054F9: main (mandatory.cpp:46)
==384195==  Address 0x4de4ca9 is 41 bytes inside a block of size 43 free'd
==384195==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384195==    by 0x407705: f_search_bn (get_next_line_utils.c:119)
==384195==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384195==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384195==    by 0x4054E7: main (mandatory.cpp:46)
==384195==  Block was alloc'd at
==384195==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384195==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==384195==    by 0x40738B: get_next_line (get_next_line.c:48)
==384195==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384195==    by 0x4054E7: main (mandatory.cpp:46)
==384195== 
==384195== Invalid free() / delete / delete[] / realloc()
==384195==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384195==    by 0x407608: ft_strjoin (get_next_line_utils.c:81)
==384195==    by 0x40738B: get_next_line (get_next_line.c:48)
==384195==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384195==    by 0x4054F9: main (mandatory.cpp:46)
==384195==  Address 0x4de4ca9 is 41 bytes inside a block of size 43 free'd
==384195==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384195==    by 0x407705: f_search_bn (get_next_line_utils.c:119)
==384195==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384195==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384195==    by 0x4054E7: main (mandatory.cpp:46)
==384195==  Block was alloc'd at
==384195==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384195==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==384195==    by 0x40738B: get_next_line (get_next_line.c:48)
==384195==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384195==    by 0x4054E7: main (mandatory.cpp:46)
==384195== 
==384195== Invalid read of size 1
==384195==    at 0x484FBD4: strcmp (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384195==    by 0x402D0A: gnl(int, char const*) (gnl.cpp:24)
==384195==    by 0x4054F9: main (mandatory.cpp:46)
==384195==  Address 0x0 is not stack'd, malloc'd or (recently) free'd
==384195== 
==384203== Invalid read of size 1
==384203==    at 0x407727: f_del_front_bn (get_next_line_utils.c:163)
==384203==    by 0x4073CD: get_next_line (get_next_line.c:52)
==384203==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384203==    by 0x405951: main (mandatory.cpp:57)
==384203==  Address 0x4de52a0 is 0 bytes inside a block of size 44 free'd
==384203==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384203==    by 0x407705: f_search_bn (get_next_line_utils.c:119)
==384203==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384203==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384203==    by 0x405951: main (mandatory.cpp:57)
==384203==  Block was alloc'd at
==384203==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384203==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==384203==    by 0x40738B: get_next_line (get_next_line.c:48)
==384203==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384203==    by 0x405951: main (mandatory.cpp:57)
==384203== 
==384203== Invalid free() / delete / delete[] / realloc()
==384203==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384203==    by 0x4073E0: get_next_line (get_next_line.c:53)
==384203==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384203==    by 0x405951: main (mandatory.cpp:57)
==384203==  Address 0x51d1040 is 0 bytes inside a block of size 10,000,001 free'd
==384203==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384203==    by 0x407614: ft_strjoin (get_next_line_utils.c:82)
==384203==    by 0x40738B: get_next_line (get_next_line.c:48)
==384203==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384203==    by 0x405951: main (mandatory.cpp:57)
==384203==  Block was alloc'd at
==384203==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384203==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384203==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384203==    by 0x405951: main (mandatory.cpp:57)
==384203== 
==384203== Invalid read of size 1
==384203==    at 0x4074EE: ft_strlen (get_next_line_utils.c:43)
==384203==    by 0x40751B: ft_strjoin (get_next_line_utils.c:59)
==384203==    by 0x40738B: get_next_line (get_next_line.c:48)
==384203==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384203==    by 0x405963: main (mandatory.cpp:57)
==384203==  Address 0x4de52ca is 42 bytes inside a block of size 44 free'd
==384203==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384203==    by 0x407705: f_search_bn (get_next_line_utils.c:119)
==384203==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384203==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384203==    by 0x405951: main (mandatory.cpp:57)
==384203==  Block was alloc'd at
==384203==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384203==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==384203==    by 0x40738B: get_next_line (get_next_line.c:48)
==384203==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384203==    by 0x405951: main (mandatory.cpp:57)
==384203== 
==384203== Invalid read of size 1
==384203==    at 0x407595: ft_strjoin (get_next_line_utils.c:68)
==384203==    by 0x40738B: get_next_line (get_next_line.c:48)
==384203==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384203==    by 0x405963: main (mandatory.cpp:57)
==384203==  Address 0x4de52ca is 42 bytes inside a block of size 44 free'd
==384203==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384203==    by 0x407705: f_search_bn (get_next_line_utils.c:119)
==384203==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384203==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384203==    by 0x405951: main (mandatory.cpp:57)
==384203==  Block was alloc'd at
==384203==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384203==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==384203==    by 0x40738B: get_next_line (get_next_line.c:48)
==384203==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384203==    by 0x405951: main (mandatory.cpp:57)
==384203== 
==384203== Invalid read of size 1
==384203==    at 0x407578: ft_strjoin (get_next_line_utils.c:70)
==384203==    by 0x40738B: get_next_line (get_next_line.c:48)
==384203==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384203==    by 0x405963: main (mandatory.cpp:57)
==384203==  Address 0x4de52ca is 42 bytes inside a block of size 44 free'd
==384203==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384203==    by 0x407705: f_search_bn (get_next_line_utils.c:119)
==384203==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384203==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384203==    by 0x405951: main (mandatory.cpp:57)
==384203==  Block was alloc'd at
==384203==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384203==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==384203==    by 0x40738B: get_next_line (get_next_line.c:48)
==384203==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384203==    by 0x405951: main (mandatory.cpp:57)
==384203== 
==384203== Invalid free() / delete / delete[] / realloc()
==384203==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384203==    by 0x407608: ft_strjoin (get_next_line_utils.c:81)
==384203==    by 0x40738B: get_next_line (get_next_line.c:48)
==384203==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384203==    by 0x405963: main (mandatory.cpp:57)
==384203==  Address 0x4de52ca is 42 bytes inside a block of size 44 free'd
==384203==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384203==    by 0x407705: f_search_bn (get_next_line_utils.c:119)
==384203==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384203==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384203==    by 0x405951: main (mandatory.cpp:57)
==384203==  Block was alloc'd at
==384203==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384203==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==384203==    by 0x40738B: get_next_line (get_next_line.c:48)
==384203==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384203==    by 0x405951: main (mandatory.cpp:57)
==384203== 
==384203== Invalid read of size 1
==384203==    at 0x484FBD4: strcmp (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384203==    by 0x402D0A: gnl(int, char const*) (gnl.cpp:24)
==384203==    by 0x405963: main (mandatory.cpp:57)
==384203==  Address 0x0 is not stack'd, malloc'd or (recently) free'd
==384203== 
==384207== Invalid read of size 1
==384207==    at 0x407727: f_del_front_bn (get_next_line_utils.c:163)
==384207==    by 0x4073CD: get_next_line (get_next_line.c:52)
==384207==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384207==    by 0x405DC5: main (mandatory.cpp:73)
==384207==  Address 0x4de58c0 is 0 bytes inside a block of size 45 free'd
==384207==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384207==    by 0x407705: f_search_bn (get_next_line_utils.c:119)
==384207==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384207==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384207==    by 0x405DC5: main (mandatory.cpp:73)
==384207==  Block was alloc'd at
==384207==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384207==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==384207==    by 0x40738B: get_next_line (get_next_line.c:48)
==384207==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384207==    by 0x405DC5: main (mandatory.cpp:73)
==384207== 
==384207== Invalid free() / delete / delete[] / realloc()
==384207==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384207==    by 0x4073E0: get_next_line (get_next_line.c:53)
==384207==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384207==    by 0x405DC5: main (mandatory.cpp:73)
==384207==  Address 0x51d1040 is 0 bytes inside a block of size 10,000,001 free'd
==384207==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384207==    by 0x407614: ft_strjoin (get_next_line_utils.c:82)
==384207==    by 0x40738B: get_next_line (get_next_line.c:48)
==384207==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384207==    by 0x405DC5: main (mandatory.cpp:73)
==384207==  Block was alloc'd at
==384207==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384207==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384207==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384207==    by 0x405DC5: main (mandatory.cpp:73)
==384207== 
==384207== Invalid read of size 1
==384207==    at 0x4074EE: ft_strlen (get_next_line_utils.c:43)
==384207==    by 0x40751B: ft_strjoin (get_next_line_utils.c:59)
==384207==    by 0x40738B: get_next_line (get_next_line.c:48)
==384207==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384207==    by 0x405DD7: main (mandatory.cpp:73)
==384207==  Address 0x4de58eb is 43 bytes inside a block of size 45 free'd
==384207==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384207==    by 0x407705: f_search_bn (get_next_line_utils.c:119)
==384207==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384207==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384207==    by 0x405DC5: main (mandatory.cpp:73)
==384207==  Block was alloc'd at
==384207==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384207==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==384207==    by 0x40738B: get_next_line (get_next_line.c:48)
==384207==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384207==    by 0x405DC5: main (mandatory.cpp:73)
==384207== 
==384207== Invalid read of size 1
==384207==    at 0x407595: ft_strjoin (get_next_line_utils.c:68)
==384207==    by 0x40738B: get_next_line (get_next_line.c:48)
==384207==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384207==    by 0x405DD7: main (mandatory.cpp:73)
==384207==  Address 0x4de58eb is 43 bytes inside a block of size 45 free'd
==384207==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384207==    by 0x407705: f_search_bn (get_next_line_utils.c:119)
==384207==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384207==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384207==    by 0x405DC5: main (mandatory.cpp:73)
==384207==  Block was alloc'd at
==384207==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384207==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==384207==    by 0x40738B: get_next_line (get_next_line.c:48)
==384207==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384207==    by 0x405DC5: main (mandatory.cpp:73)
==384207== 
==384207== Invalid read of size 1
==384207==    at 0x407578: ft_strjoin (get_next_line_utils.c:70)
==384207==    by 0x40738B: get_next_line (get_next_line.c:48)
==384207==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384207==    by 0x405DD7: main (mandatory.cpp:73)
==384207==  Address 0x4de58eb is 43 bytes inside a block of size 45 free'd
==384207==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384207==    by 0x407705: f_search_bn (get_next_line_utils.c:119)
==384207==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384207==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384207==    by 0x405DC5: main (mandatory.cpp:73)
==384207==  Block was alloc'd at
==384207==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384207==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==384207==    by 0x40738B: get_next_line (get_next_line.c:48)
==384207==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384207==    by 0x405DC5: main (mandatory.cpp:73)
==384207== 
==384207== Invalid free() / delete / delete[] / realloc()
==384207==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384207==    by 0x407608: ft_strjoin (get_next_line_utils.c:81)
==384207==    by 0x40738B: get_next_line (get_next_line.c:48)
==384207==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384207==    by 0x405DD7: main (mandatory.cpp:73)
==384207==  Address 0x4de58eb is 43 bytes inside a block of size 45 free'd
==384207==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384207==    by 0x407705: f_search_bn (get_next_line_utils.c:119)
==384207==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384207==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384207==    by 0x405DC5: main (mandatory.cpp:73)
==384207==  Block was alloc'd at
==384207==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384207==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==384207==    by 0x40738B: get_next_line (get_next_line.c:48)
==384207==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384207==    by 0x405DC5: main (mandatory.cpp:73)
==384207== 
==384207== Invalid read of size 1
==384207==    at 0x484FBD4: strcmp (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384207==    by 0x402D0A: gnl(int, char const*) (gnl.cpp:24)
==384207==    by 0x405DD7: main (mandatory.cpp:73)
==384207==  Address 0x0 is not stack'd, malloc'd or (recently) free'd
==384207== 
==384209== Invalid read of size 1
==384209==    at 0x407727: f_del_front_bn (get_next_line_utils.c:163)
==384209==    by 0x4073CD: get_next_line (get_next_line.c:52)
==384209==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384209==    by 0x406003: main (mandatory.cpp:79)
==384209==  Address 0x4de5bd0 is 0 bytes inside a block of size 6 free'd
==384209==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384209==    by 0x407705: f_search_bn (get_next_line_utils.c:119)
==384209==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384209==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384209==    by 0x406003: main (mandatory.cpp:79)
==384209==  Block was alloc'd at
==384209==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384209==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==384209==    by 0x40738B: get_next_line (get_next_line.c:48)
==384209==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384209==    by 0x406003: main (mandatory.cpp:79)
==384209== 
==384209== Invalid free() / delete / delete[] / realloc()
==384209==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384209==    by 0x4073E0: get_next_line (get_next_line.c:53)
==384209==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384209==    by 0x406003: main (mandatory.cpp:79)
==384209==  Address 0x51d1040 is 0 bytes inside a block of size 10,000,001 free'd
==384209==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384209==    by 0x407614: ft_strjoin (get_next_line_utils.c:82)
==384209==    by 0x40738B: get_next_line (get_next_line.c:48)
==384209==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384209==    by 0x406003: main (mandatory.cpp:79)
==384209==  Block was alloc'd at
==384209==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384209==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384209==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384209==    by 0x406003: main (mandatory.cpp:79)
==384209== 
==384209== Invalid read of size 1
==384209==    at 0x4074EE: ft_strlen (get_next_line_utils.c:43)
==384209==    by 0x40751B: ft_strjoin (get_next_line_utils.c:59)
==384209==    by 0x40738B: get_next_line (get_next_line.c:48)
==384209==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384209==    by 0x406015: main (mandatory.cpp:79)
==384209==  Address 0x4de5bd1 is 1 bytes inside a block of size 6 free'd
==384209==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384209==    by 0x407705: f_search_bn (get_next_line_utils.c:119)
==384209==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384209==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384209==    by 0x406003: main (mandatory.cpp:79)
==384209==  Block was alloc'd at
==384209==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384209==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==384209==    by 0x40738B: get_next_line (get_next_line.c:48)
==384209==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384209==    by 0x406003: main (mandatory.cpp:79)
==384209== 
==384209== Invalid read of size 1
==384209==    at 0x407595: ft_strjoin (get_next_line_utils.c:68)
==384209==    by 0x40738B: get_next_line (get_next_line.c:48)
==384209==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384209==    by 0x406015: main (mandatory.cpp:79)
==384209==  Address 0x4de5bd1 is 1 bytes inside a block of size 6 free'd
==384209==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384209==    by 0x407705: f_search_bn (get_next_line_utils.c:119)
==384209==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384209==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384209==    by 0x406003: main (mandatory.cpp:79)
==384209==  Block was alloc'd at
==384209==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384209==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==384209==    by 0x40738B: get_next_line (get_next_line.c:48)
==384209==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384209==    by 0x406003: main (mandatory.cpp:79)
==384209== 
==384209== Invalid read of size 1
==384209==    at 0x407578: ft_strjoin (get_next_line_utils.c:70)
==384209==    by 0x40738B: get_next_line (get_next_line.c:48)
==384209==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384209==    by 0x406015: main (mandatory.cpp:79)
==384209==  Address 0x4de5bd1 is 1 bytes inside a block of size 6 free'd
==384209==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384209==    by 0x407705: f_search_bn (get_next_line_utils.c:119)
==384209==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384209==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384209==    by 0x406003: main (mandatory.cpp:79)
==384209==  Block was alloc'd at
==384209==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384209==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==384209==    by 0x40738B: get_next_line (get_next_line.c:48)
==384209==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384209==    by 0x406003: main (mandatory.cpp:79)
==384209== 
==384209== Invalid free() / delete / delete[] / realloc()
==384209==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384209==    by 0x407608: ft_strjoin (get_next_line_utils.c:81)
==384209==    by 0x40738B: get_next_line (get_next_line.c:48)
==384209==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384209==    by 0x406015: main (mandatory.cpp:79)
==384209==  Address 0x4de5bd1 is 1 bytes inside a block of size 6 free'd
==384209==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384209==    by 0x407705: f_search_bn (get_next_line_utils.c:119)
==384209==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384209==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384209==    by 0x406003: main (mandatory.cpp:79)
==384209==  Block was alloc'd at
==384209==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384209==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==384209==    by 0x40738B: get_next_line (get_next_line.c:48)
==384209==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384209==    by 0x406003: main (mandatory.cpp:79)
==384209== 
==384209== Invalid read of size 1
==384209==    at 0x407727: f_del_front_bn (get_next_line_utils.c:163)
==384209==    by 0x4073CD: get_next_line (get_next_line.c:52)
==384209==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384209==    by 0x406015: main (mandatory.cpp:79)
==384209==  Address 0x4de5c70 is 0 bytes inside a block of size 5 free'd
==384209==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384209==    by 0x407705: f_search_bn (get_next_line_utils.c:119)
==384209==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384209==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384209==    by 0x406015: main (mandatory.cpp:79)
==384209==  Block was alloc'd at
==384209==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384209==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==384209==    by 0x40738B: get_next_line (get_next_line.c:48)
==384209==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384209==    by 0x406015: main (mandatory.cpp:79)
==384209== 
==384209== Invalid free() / delete / delete[] / realloc()
==384209==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384209==    by 0x4073E0: get_next_line (get_next_line.c:53)
==384209==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384209==    by 0x406015: main (mandatory.cpp:79)
==384209==  Address 0x5b5b040 is 0 bytes inside a block of size 10,000,001 free'd
==384209==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384209==    by 0x407614: ft_strjoin (get_next_line_utils.c:82)
==384209==    by 0x40738B: get_next_line (get_next_line.c:48)
==384209==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384209==    by 0x406015: main (mandatory.cpp:79)
==384209==  Block was alloc'd at
==384209==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384209==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384209==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384209==    by 0x406015: main (mandatory.cpp:79)
==384209== 
==384209== Invalid read of size 1
==384209==    at 0x407595: ft_strjoin (get_next_line_utils.c:68)
==384209==    by 0x40738B: get_next_line (get_next_line.c:48)
==384209==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384209==    by 0x406027: main (mandatory.cpp:79)
==384209==  Address 0x4de5c71 is 1 bytes inside a block of size 5 free'd
==384209==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384209==    by 0x407705: f_search_bn (get_next_line_utils.c:119)
==384209==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384209==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384209==    by 0x406015: main (mandatory.cpp:79)
==384209==  Block was alloc'd at
==384209==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384209==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==384209==    by 0x40738B: get_next_line (get_next_line.c:48)
==384209==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384209==    by 0x406015: main (mandatory.cpp:79)
==384209== 
==384209== Invalid read of size 1
==384209==    at 0x407578: ft_strjoin (get_next_line_utils.c:70)
==384209==    by 0x40738B: get_next_line (get_next_line.c:48)
==384209==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384209==    by 0x406027: main (mandatory.cpp:79)
==384209==  Address 0x4de5c71 is 1 bytes inside a block of size 5 free'd
==384209==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384209==    by 0x407705: f_search_bn (get_next_line_utils.c:119)
==384209==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384209==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384209==    by 0x406015: main (mandatory.cpp:79)
==384209==  Block was alloc'd at
==384209==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384209==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==384209==    by 0x40738B: get_next_line (get_next_line.c:48)
==384209==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384209==    by 0x406015: main (mandatory.cpp:79)
==384209== 
==384209== Invalid read of size 1
==384209==    at 0x407727: f_del_front_bn (get_next_line_utils.c:163)
==384209==    by 0x4073CD: get_next_line (get_next_line.c:52)
==384209==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384209==    by 0x406027: main (mandatory.cpp:79)
==384209==  Address 0x4de5d10 is 0 bytes inside a block of size 4 free'd
==384209==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384209==    by 0x407705: f_search_bn (get_next_line_utils.c:119)
==384209==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384209==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384209==    by 0x406027: main (mandatory.cpp:79)
==384209==  Block was alloc'd at
==384209==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384209==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==384209==    by 0x40738B: get_next_line (get_next_line.c:48)
==384209==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384209==    by 0x406027: main (mandatory.cpp:79)
==384209== 
==384209== Invalid free() / delete / delete[] / realloc()
==384209==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384209==    by 0x4073E0: get_next_line (get_next_line.c:53)
==384209==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384209==    by 0x406027: main (mandatory.cpp:79)
==384209==  Address 0x51d1040 is 0 bytes inside a block of size 10,000,001 free'd
==384209==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384209==    by 0x407614: ft_strjoin (get_next_line_utils.c:82)
==384209==    by 0x40738B: get_next_line (get_next_line.c:48)
==384209==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384209==    by 0x406027: main (mandatory.cpp:79)
==384209==  Block was alloc'd at
==384209==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384209==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384209==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384209==    by 0x406027: main (mandatory.cpp:79)
==384209== 
==384209== Invalid read of size 1
==384209==    at 0x407595: ft_strjoin (get_next_line_utils.c:68)
==384209==    by 0x40738B: get_next_line (get_next_line.c:48)
==384209==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384209==    by 0x406039: main (mandatory.cpp:79)
==384209==  Address 0x4de5d11 is 1 bytes inside a block of size 4 free'd
==384209==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384209==    by 0x407705: f_search_bn (get_next_line_utils.c:119)
==384209==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384209==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384209==    by 0x406027: main (mandatory.cpp:79)
==384209==  Block was alloc'd at
==384209==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384209==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==384209==    by 0x40738B: get_next_line (get_next_line.c:48)
==384209==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384209==    by 0x406027: main (mandatory.cpp:79)
==384209== 
==384209== Invalid read of size 1
==384209==    at 0x407578: ft_strjoin (get_next_line_utils.c:70)
==384209==    by 0x40738B: get_next_line (get_next_line.c:48)
==384209==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384209==    by 0x406039: main (mandatory.cpp:79)
==384209==  Address 0x4de5d11 is 1 bytes inside a block of size 4 free'd
==384209==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384209==    by 0x407705: f_search_bn (get_next_line_utils.c:119)
==384209==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384209==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384209==    by 0x406027: main (mandatory.cpp:79)
==384209==  Block was alloc'd at
==384209==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384209==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==384209==    by 0x40738B: get_next_line (get_next_line.c:48)
==384209==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384209==    by 0x406027: main (mandatory.cpp:79)
==384209== 
==384209== Invalid read of size 1
==384209==    at 0x407727: f_del_front_bn (get_next_line_utils.c:163)
==384209==    by 0x4073CD: get_next_line (get_next_line.c:52)
==384209==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384209==    by 0x406039: main (mandatory.cpp:79)
==384209==  Address 0x4de5db0 is 0 bytes inside a block of size 3 free'd
==384209==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384209==    by 0x407705: f_search_bn (get_next_line_utils.c:119)
==384209==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384209==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384209==    by 0x406039: main (mandatory.cpp:79)
==384209==  Block was alloc'd at
==384209==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384209==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==384209==    by 0x40738B: get_next_line (get_next_line.c:48)
==384209==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384209==    by 0x406039: main (mandatory.cpp:79)
==384209== 
==384209== Invalid free() / delete / delete[] / realloc()
==384209==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384209==    by 0x4073E0: get_next_line (get_next_line.c:53)
==384209==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384209==    by 0x406039: main (mandatory.cpp:79)
==384209==  Address 0x5b5b040 is 0 bytes inside a block of size 10,000,001 free'd
==384209==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384209==    by 0x407614: ft_strjoin (get_next_line_utils.c:82)
==384209==    by 0x40738B: get_next_line (get_next_line.c:48)
==384209==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384209==    by 0x406039: main (mandatory.cpp:79)
==384209==  Block was alloc'd at
==384209==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384209==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384209==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384209==    by 0x406039: main (mandatory.cpp:79)
==384209== 
==384209== Invalid read of size 1
==384209==    at 0x407595: ft_strjoin (get_next_line_utils.c:68)
==384209==    by 0x40738B: get_next_line (get_next_line.c:48)
==384209==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384209==    by 0x40604B: main (mandatory.cpp:79)
==384209==  Address 0x4de5db1 is 1 bytes inside a block of size 3 free'd
==384209==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384209==    by 0x407705: f_search_bn (get_next_line_utils.c:119)
==384209==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384209==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384209==    by 0x406039: main (mandatory.cpp:79)
==384209==  Block was alloc'd at
==384209==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384209==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==384209==    by 0x40738B: get_next_line (get_next_line.c:48)
==384209==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384209==    by 0x406039: main (mandatory.cpp:79)
==384209== 
==384209== Invalid read of size 1
==384209==    at 0x407578: ft_strjoin (get_next_line_utils.c:70)
==384209==    by 0x40738B: get_next_line (get_next_line.c:48)
==384209==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384209==    by 0x40604B: main (mandatory.cpp:79)
==384209==  Address 0x4de5db1 is 1 bytes inside a block of size 3 free'd
==384209==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384209==    by 0x407705: f_search_bn (get_next_line_utils.c:119)
==384209==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384209==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384209==    by 0x406039: main (mandatory.cpp:79)
==384209==  Block was alloc'd at
==384209==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384209==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==384209==    by 0x40738B: get_next_line (get_next_line.c:48)
==384209==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384209==    by 0x406039: main (mandatory.cpp:79)
==384209== 
==384209== Invalid read of size 1
==384209==    at 0x407727: f_del_front_bn (get_next_line_utils.c:163)
==384209==    by 0x4073CD: get_next_line (get_next_line.c:52)
==384209==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384209==    by 0x40604B: main (mandatory.cpp:79)
==384209==  Address 0x4de5e50 is 0 bytes inside a block of size 2 free'd
==384209==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384209==    by 0x407705: f_search_bn (get_next_line_utils.c:119)
==384209==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384209==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384209==    by 0x40604B: main (mandatory.cpp:79)
==384209==  Block was alloc'd at
==384209==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384209==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==384209==    by 0x40738B: get_next_line (get_next_line.c:48)
==384209==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384209==    by 0x40604B: main (mandatory.cpp:79)
==384209== 
==384209== Invalid free() / delete / delete[] / realloc()
==384209==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384209==    by 0x4073E0: get_next_line (get_next_line.c:53)
==384209==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384209==    by 0x40604B: main (mandatory.cpp:79)
==384209==  Address 0x51d1040 is 0 bytes inside a block of size 10,000,001 free'd
==384209==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384209==    by 0x407614: ft_strjoin (get_next_line_utils.c:82)
==384209==    by 0x40738B: get_next_line (get_next_line.c:48)
==384209==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384209==    by 0x40604B: main (mandatory.cpp:79)
==384209==  Block was alloc'd at
==384209==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384209==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384209==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384209==    by 0x40604B: main (mandatory.cpp:79)
==384209== 
==384209== Invalid read of size 1
==384209==    at 0x407595: ft_strjoin (get_next_line_utils.c:68)
==384209==    by 0x40738B: get_next_line (get_next_line.c:48)
==384209==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384209==    by 0x406057: main (mandatory.cpp:79)
==384209==  Address 0x4de5e51 is 1 bytes inside a block of size 2 free'd
==384209==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384209==    by 0x407705: f_search_bn (get_next_line_utils.c:119)
==384209==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384209==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384209==    by 0x40604B: main (mandatory.cpp:79)
==384209==  Block was alloc'd at
==384209==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384209==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==384209==    by 0x40738B: get_next_line (get_next_line.c:48)
==384209==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384209==    by 0x40604B: main (mandatory.cpp:79)
==384209== 
==384214== Invalid read of size 1
==384214==    at 0x407727: f_del_front_bn (get_next_line_utils.c:163)
==384214==    by 0x4073CD: get_next_line (get_next_line.c:52)
==384214==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384214==    by 0x406277: main (mandatory.cpp:88)
==384214==  Address 0x4de5f00 is 0 bytes inside a block of size 214 free'd
==384214==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384214==    by 0x407705: f_search_bn (get_next_line_utils.c:119)
==384214==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384214==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384214==    by 0x406277: main (mandatory.cpp:88)
==384214==  Block was alloc'd at
==384214==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384214==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==384214==    by 0x40738B: get_next_line (get_next_line.c:48)
==384214==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384214==    by 0x406277: main (mandatory.cpp:88)
==384214== 
==384214== Invalid free() / delete / delete[] / realloc()
==384214==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384214==    by 0x4073E0: get_next_line (get_next_line.c:53)
==384214==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384214==    by 0x406277: main (mandatory.cpp:88)
==384214==  Address 0x51d1040 is 0 bytes inside a block of size 10,000,001 free'd
==384214==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384214==    by 0x407614: ft_strjoin (get_next_line_utils.c:82)
==384214==    by 0x40738B: get_next_line (get_next_line.c:48)
==384214==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384214==    by 0x406277: main (mandatory.cpp:88)
==384214==  Block was alloc'd at
==384214==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384214==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384214==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384214==    by 0x406277: main (mandatory.cpp:88)
==384214== 
==384214== Invalid read of size 1
==384214==    at 0x4074EE: ft_strlen (get_next_line_utils.c:43)
==384214==    by 0x40751B: ft_strjoin (get_next_line_utils.c:59)
==384214==    by 0x40738B: get_next_line (get_next_line.c:48)
==384214==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384214==    by 0x406289: main (mandatory.cpp:88)
==384214==  Address 0x4de5f2a is 42 bytes inside a block of size 214 free'd
==384214==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384214==    by 0x407705: f_search_bn (get_next_line_utils.c:119)
==384214==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384214==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384214==    by 0x406277: main (mandatory.cpp:88)
==384214==  Block was alloc'd at
==384214==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384214==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==384214==    by 0x40738B: get_next_line (get_next_line.c:48)
==384214==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384214==    by 0x406277: main (mandatory.cpp:88)
==384214== 
==384214== Invalid read of size 1
==384214==    at 0x407595: ft_strjoin (get_next_line_utils.c:68)
==384214==    by 0x40738B: get_next_line (get_next_line.c:48)
==384214==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384214==    by 0x406289: main (mandatory.cpp:88)
==384214==  Address 0x4de5f2a is 42 bytes inside a block of size 214 free'd
==384214==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384214==    by 0x407705: f_search_bn (get_next_line_utils.c:119)
==384214==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384214==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384214==    by 0x406277: main (mandatory.cpp:88)
==384214==  Block was alloc'd at
==384214==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384214==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==384214==    by 0x40738B: get_next_line (get_next_line.c:48)
==384214==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384214==    by 0x406277: main (mandatory.cpp:88)
==384214== 
==384214== Invalid read of size 1
==384214==    at 0x407578: ft_strjoin (get_next_line_utils.c:70)
==384214==    by 0x40738B: get_next_line (get_next_line.c:48)
==384214==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384214==    by 0x406289: main (mandatory.cpp:88)
==384214==  Address 0x4de5f2a is 42 bytes inside a block of size 214 free'd
==384214==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384214==    by 0x407705: f_search_bn (get_next_line_utils.c:119)
==384214==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384214==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384214==    by 0x406277: main (mandatory.cpp:88)
==384214==  Block was alloc'd at
==384214==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384214==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==384214==    by 0x40738B: get_next_line (get_next_line.c:48)
==384214==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384214==    by 0x406277: main (mandatory.cpp:88)
==384214== 
==384214== Invalid free() / delete / delete[] / realloc()
==384214==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384214==    by 0x407608: ft_strjoin (get_next_line_utils.c:81)
==384214==    by 0x40738B: get_next_line (get_next_line.c:48)
==384214==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384214==    by 0x406289: main (mandatory.cpp:88)
==384214==  Address 0x4de5f2a is 42 bytes inside a block of size 214 free'd
==384214==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384214==    by 0x407705: f_search_bn (get_next_line_utils.c:119)
==384214==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384214==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384214==    by 0x406277: main (mandatory.cpp:88)
==384214==  Block was alloc'd at
==384214==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384214==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==384214==    by 0x40738B: get_next_line (get_next_line.c:48)
==384214==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384214==    by 0x406277: main (mandatory.cpp:88)
==384214== 
==384214== Invalid read of size 1
==384214==    at 0x407727: f_del_front_bn (get_next_line_utils.c:163)
==384214==    by 0x4073CD: get_next_line (get_next_line.c:52)
==384214==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384214==    by 0x406289: main (mandatory.cpp:88)
==384214==  Address 0x4de6090 is 0 bytes inside a block of size 172 free'd
==384214==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384214==    by 0x407705: f_search_bn (get_next_line_utils.c:119)
==384214==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384214==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384214==    by 0x406289: main (mandatory.cpp:88)
==384214==  Block was alloc'd at
==384214==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384214==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==384214==    by 0x40738B: get_next_line (get_next_line.c:48)
==384214==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384214==    by 0x406289: main (mandatory.cpp:88)
==384214== 
==384214== Invalid free() / delete / delete[] / realloc()
==384214==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384214==    by 0x4073E0: get_next_line (get_next_line.c:53)
==384214==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384214==    by 0x406289: main (mandatory.cpp:88)
==384214==  Address 0x5b5b040 is 0 bytes inside a block of size 10,000,001 free'd
==384214==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384214==    by 0x407614: ft_strjoin (get_next_line_utils.c:82)
==384214==    by 0x40738B: get_next_line (get_next_line.c:48)
==384214==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384214==    by 0x406289: main (mandatory.cpp:88)
==384214==  Block was alloc'd at
==384214==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384214==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384214==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384214==    by 0x406289: main (mandatory.cpp:88)
==384214== 
==384214== Invalid read of size 1
==384214==    at 0x407595: ft_strjoin (get_next_line_utils.c:68)
==384214==    by 0x40738B: get_next_line (get_next_line.c:48)
==384214==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384214==    by 0x40629B: main (mandatory.cpp:88)
==384214==  Address 0x4de60bb is 43 bytes inside a block of size 172 free'd
==384214==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384214==    by 0x407705: f_search_bn (get_next_line_utils.c:119)
==384214==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384214==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384214==    by 0x406289: main (mandatory.cpp:88)
==384214==  Block was alloc'd at
==384214==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384214==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==384214==    by 0x40738B: get_next_line (get_next_line.c:48)
==384214==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384214==    by 0x406289: main (mandatory.cpp:88)
==384214== 
==384214== Invalid read of size 1
==384214==    at 0x407578: ft_strjoin (get_next_line_utils.c:70)
==384214==    by 0x40738B: get_next_line (get_next_line.c:48)
==384214==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384214==    by 0x40629B: main (mandatory.cpp:88)
==384214==  Address 0x4de60bb is 43 bytes inside a block of size 172 free'd
==384214==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384214==    by 0x407705: f_search_bn (get_next_line_utils.c:119)
==384214==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384214==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384214==    by 0x406289: main (mandatory.cpp:88)
==384214==  Block was alloc'd at
==384214==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384214==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==384214==    by 0x40738B: get_next_line (get_next_line.c:48)
==384214==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384214==    by 0x406289: main (mandatory.cpp:88)
==384214== 
==384214== Invalid read of size 1
==384214==    at 0x407727: f_del_front_bn (get_next_line_utils.c:163)
==384214==    by 0x4073CD: get_next_line (get_next_line.c:52)
==384214==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384214==    by 0x40629B: main (mandatory.cpp:88)
==384214==  Address 0x4de61f0 is 0 bytes inside a block of size 129 free'd
==384214==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384214==    by 0x407705: f_search_bn (get_next_line_utils.c:119)
==384214==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384214==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384214==    by 0x40629B: main (mandatory.cpp:88)
==384214==  Block was alloc'd at
==384214==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384214==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==384214==    by 0x40738B: get_next_line (get_next_line.c:48)
==384214==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384214==    by 0x40629B: main (mandatory.cpp:88)
==384214== 
==384214== Invalid free() / delete / delete[] / realloc()
==384214==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384214==    by 0x4073E0: get_next_line (get_next_line.c:53)
==384214==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384214==    by 0x40629B: main (mandatory.cpp:88)
==384214==  Address 0x51d1040 is 0 bytes inside a block of size 10,000,001 free'd
==384214==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384214==    by 0x407614: ft_strjoin (get_next_line_utils.c:82)
==384214==    by 0x40738B: get_next_line (get_next_line.c:48)
==384214==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384214==    by 0x40629B: main (mandatory.cpp:88)
==384214==  Block was alloc'd at
==384214==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384214==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384214==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384214==    by 0x40629B: main (mandatory.cpp:88)
==384214== 
==384214== Invalid read of size 1
==384214==    at 0x407595: ft_strjoin (get_next_line_utils.c:68)
==384214==    by 0x40738B: get_next_line (get_next_line.c:48)
==384214==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384214==    by 0x4062AD: main (mandatory.cpp:88)
==384214==  Address 0x4de621c is 44 bytes inside a block of size 129 free'd
==384214==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384214==    by 0x407705: f_search_bn (get_next_line_utils.c:119)
==384214==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384214==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384214==    by 0x40629B: main (mandatory.cpp:88)
==384214==  Block was alloc'd at
==384214==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384214==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==384214==    by 0x40738B: get_next_line (get_next_line.c:48)
==384214==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384214==    by 0x40629B: main (mandatory.cpp:88)
==384214== 
==384214== Invalid read of size 1
==384214==    at 0x407578: ft_strjoin (get_next_line_utils.c:70)
==384214==    by 0x40738B: get_next_line (get_next_line.c:48)
==384214==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384214==    by 0x4062AD: main (mandatory.cpp:88)
==384214==  Address 0x4de621c is 44 bytes inside a block of size 129 free'd
==384214==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384214==    by 0x407705: f_search_bn (get_next_line_utils.c:119)
==384214==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384214==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384214==    by 0x40629B: main (mandatory.cpp:88)
==384214==  Block was alloc'd at
==384214==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384214==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==384214==    by 0x40738B: get_next_line (get_next_line.c:48)
==384214==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384214==    by 0x40629B: main (mandatory.cpp:88)
==384214== 
==384214== Invalid read of size 1
==384214==    at 0x407727: f_del_front_bn (get_next_line_utils.c:163)
==384214==    by 0x4073CD: get_next_line (get_next_line.c:52)
==384214==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384214==    by 0x4062AD: main (mandatory.cpp:88)
==384214==  Address 0x4de6330 is 0 bytes inside a block of size 85 free'd
==384214==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384214==    by 0x407705: f_search_bn (get_next_line_utils.c:119)
==384214==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384214==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384214==    by 0x4062AD: main (mandatory.cpp:88)
==384214==  Block was alloc'd at
==384214==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384214==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==384214==    by 0x40738B: get_next_line (get_next_line.c:48)
==384214==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384214==    by 0x4062AD: main (mandatory.cpp:88)
==384214== 
==384214== Invalid free() / delete / delete[] / realloc()
==384214==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384214==    by 0x4073E0: get_next_line (get_next_line.c:53)
==384214==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384214==    by 0x4062AD: main (mandatory.cpp:88)
==384214==  Address 0x5b5b040 is 0 bytes inside a block of size 10,000,001 free'd
==384214==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384214==    by 0x407614: ft_strjoin (get_next_line_utils.c:82)
==384214==    by 0x40738B: get_next_line (get_next_line.c:48)
==384214==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384214==    by 0x4062AD: main (mandatory.cpp:88)
==384214==  Block was alloc'd at
==384214==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384214==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384214==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384214==    by 0x4062AD: main (mandatory.cpp:88)
==384214== 
==384214== Invalid read of size 1
==384214==    at 0x407595: ft_strjoin (get_next_line_utils.c:68)
==384214==    by 0x40738B: get_next_line (get_next_line.c:48)
==384214==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384214==    by 0x4062BF: main (mandatory.cpp:88)
==384214==  Address 0x4de635b is 43 bytes inside a block of size 85 free'd
==384214==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384214==    by 0x407705: f_search_bn (get_next_line_utils.c:119)
==384214==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384214==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384214==    by 0x4062AD: main (mandatory.cpp:88)
==384214==  Block was alloc'd at
==384214==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384214==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==384214==    by 0x40738B: get_next_line (get_next_line.c:48)
==384214==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384214==    by 0x4062AD: main (mandatory.cpp:88)
==384214== 
==384214== Invalid read of size 1
==384214==    at 0x407578: ft_strjoin (get_next_line_utils.c:70)
==384214==    by 0x40738B: get_next_line (get_next_line.c:48)
==384214==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384214==    by 0x4062BF: main (mandatory.cpp:88)
==384214==  Address 0x4de635b is 43 bytes inside a block of size 85 free'd
==384214==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384214==    by 0x407705: f_search_bn (get_next_line_utils.c:119)
==384214==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384214==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384214==    by 0x4062AD: main (mandatory.cpp:88)
==384214==  Block was alloc'd at
==384214==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384214==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==384214==    by 0x40738B: get_next_line (get_next_line.c:48)
==384214==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384214==    by 0x4062AD: main (mandatory.cpp:88)
==384214== 
==384214== Invalid read of size 1
==384214==    at 0x484FBD4: strcmp (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384214==    by 0x402D0A: gnl(int, char const*) (gnl.cpp:24)
==384214==    by 0x4062BF: main (mandatory.cpp:88)
==384214==  Address 0x0 is not stack'd, malloc'd or (recently) free'd
==384214== 
==384276== Invalid read of size 1
==384276==    at 0x407727: f_del_front_bn (get_next_line_utils.c:163)
==384276==    by 0x4073CD: get_next_line (get_next_line.c:52)
==384276==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384276==    by 0x4064EB: main (mandatory.cpp:97)
==384276==  Address 0x4de6230 is 0 bytes inside a block of size 210 free'd
==384276==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384276==    by 0x407705: f_search_bn (get_next_line_utils.c:119)
==384276==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384276==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384276==    by 0x4064EB: main (mandatory.cpp:97)
==384276==  Block was alloc'd at
==384276==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384276==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==384276==    by 0x40738B: get_next_line (get_next_line.c:48)
==384276==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384276==    by 0x4064EB: main (mandatory.cpp:97)
==384276== 
==384276== Invalid free() / delete / delete[] / realloc()
==384276==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384276==    by 0x4073E0: get_next_line (get_next_line.c:53)
==384276==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384276==    by 0x4064EB: main (mandatory.cpp:97)
==384276==  Address 0x51d1040 is 0 bytes inside a block of size 10,000,001 free'd
==384276==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384276==    by 0x407614: ft_strjoin (get_next_line_utils.c:82)
==384276==    by 0x40738B: get_next_line (get_next_line.c:48)
==384276==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384276==    by 0x4064EB: main (mandatory.cpp:97)
==384276==  Block was alloc'd at
==384276==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384276==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384276==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384276==    by 0x4064EB: main (mandatory.cpp:97)
==384276== 
==384276== Invalid read of size 1
==384276==    at 0x4074EE: ft_strlen (get_next_line_utils.c:43)
==384276==    by 0x40751B: ft_strjoin (get_next_line_utils.c:59)
==384276==    by 0x40738B: get_next_line (get_next_line.c:48)
==384276==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384276==    by 0x4064FD: main (mandatory.cpp:97)
==384276==  Address 0x4de6259 is 41 bytes inside a block of size 210 free'd
==384276==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384276==    by 0x407705: f_search_bn (get_next_line_utils.c:119)
==384276==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384276==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384276==    by 0x4064EB: main (mandatory.cpp:97)
==384276==  Block was alloc'd at
==384276==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384276==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==384276==    by 0x40738B: get_next_line (get_next_line.c:48)
==384276==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384276==    by 0x4064EB: main (mandatory.cpp:97)
==384276== 
==384276== Invalid read of size 1
==384276==    at 0x407595: ft_strjoin (get_next_line_utils.c:68)
==384276==    by 0x40738B: get_next_line (get_next_line.c:48)
==384276==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384276==    by 0x4064FD: main (mandatory.cpp:97)
==384276==  Address 0x4de6259 is 41 bytes inside a block of size 210 free'd
==384276==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384276==    by 0x407705: f_search_bn (get_next_line_utils.c:119)
==384276==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384276==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384276==    by 0x4064EB: main (mandatory.cpp:97)
==384276==  Block was alloc'd at
==384276==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384276==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==384276==    by 0x40738B: get_next_line (get_next_line.c:48)
==384276==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384276==    by 0x4064EB: main (mandatory.cpp:97)
==384276== 
==384276== Invalid read of size 1
==384276==    at 0x407578: ft_strjoin (get_next_line_utils.c:70)
==384276==    by 0x40738B: get_next_line (get_next_line.c:48)
==384276==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384276==    by 0x4064FD: main (mandatory.cpp:97)
==384276==  Address 0x4de6259 is 41 bytes inside a block of size 210 free'd
==384276==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384276==    by 0x407705: f_search_bn (get_next_line_utils.c:119)
==384276==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384276==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384276==    by 0x4064EB: main (mandatory.cpp:97)
==384276==  Block was alloc'd at
==384276==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384276==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==384276==    by 0x40738B: get_next_line (get_next_line.c:48)
==384276==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384276==    by 0x4064EB: main (mandatory.cpp:97)
==384276== 
==384276== Invalid free() / delete / delete[] / realloc()
==384276==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384276==    by 0x407608: ft_strjoin (get_next_line_utils.c:81)
==384276==    by 0x40738B: get_next_line (get_next_line.c:48)
==384276==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384276==    by 0x4064FD: main (mandatory.cpp:97)
==384276==  Address 0x4de6259 is 41 bytes inside a block of size 210 free'd
==384276==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384276==    by 0x407705: f_search_bn (get_next_line_utils.c:119)
==384276==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384276==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384276==    by 0x4064EB: main (mandatory.cpp:97)
==384276==  Block was alloc'd at
==384276==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384276==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==384276==    by 0x40738B: get_next_line (get_next_line.c:48)
==384276==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384276==    by 0x4064EB: main (mandatory.cpp:97)
==384276== 
==384276== Invalid read of size 1
==384276==    at 0x407727: f_del_front_bn (get_next_line_utils.c:163)
==384276==    by 0x4073CD: get_next_line (get_next_line.c:52)
==384276==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384276==    by 0x4064FD: main (mandatory.cpp:97)
==384276==  Address 0x4de63c0 is 0 bytes inside a block of size 169 free'd
==384276==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384276==    by 0x407705: f_search_bn (get_next_line_utils.c:119)
==384276==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384276==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384276==    by 0x4064FD: main (mandatory.cpp:97)
==384276==  Block was alloc'd at
==384276==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384276==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==384276==    by 0x40738B: get_next_line (get_next_line.c:48)
==384276==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384276==    by 0x4064FD: main (mandatory.cpp:97)
==384276== 
==384276== Invalid free() / delete / delete[] / realloc()
==384276==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384276==    by 0x4073E0: get_next_line (get_next_line.c:53)
==384276==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384276==    by 0x4064FD: main (mandatory.cpp:97)
==384276==  Address 0x5b5b040 is 0 bytes inside a block of size 10,000,001 free'd
==384276==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384276==    by 0x407614: ft_strjoin (get_next_line_utils.c:82)
==384276==    by 0x40738B: get_next_line (get_next_line.c:48)
==384276==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384276==    by 0x4064FD: main (mandatory.cpp:97)
==384276==  Block was alloc'd at
==384276==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384276==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384276==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384276==    by 0x4064FD: main (mandatory.cpp:97)
==384276== 
==384276== Invalid read of size 1
==384276==    at 0x407595: ft_strjoin (get_next_line_utils.c:68)
==384276==    by 0x40738B: get_next_line (get_next_line.c:48)
==384276==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384276==    by 0x40650F: main (mandatory.cpp:97)
==384276==  Address 0x4de63ea is 42 bytes inside a block of size 169 free'd
==384276==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384276==    by 0x407705: f_search_bn (get_next_line_utils.c:119)
==384276==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384276==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384276==    by 0x4064FD: main (mandatory.cpp:97)
==384276==  Block was alloc'd at
==384276==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384276==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==384276==    by 0x40738B: get_next_line (get_next_line.c:48)
==384276==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384276==    by 0x4064FD: main (mandatory.cpp:97)
==384276== 
==384276== Invalid read of size 1
==384276==    at 0x407578: ft_strjoin (get_next_line_utils.c:70)
==384276==    by 0x40738B: get_next_line (get_next_line.c:48)
==384276==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384276==    by 0x40650F: main (mandatory.cpp:97)
==384276==  Address 0x4de63ea is 42 bytes inside a block of size 169 free'd
==384276==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384276==    by 0x407705: f_search_bn (get_next_line_utils.c:119)
==384276==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384276==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384276==    by 0x4064FD: main (mandatory.cpp:97)
==384276==  Block was alloc'd at
==384276==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384276==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==384276==    by 0x40738B: get_next_line (get_next_line.c:48)
==384276==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384276==    by 0x4064FD: main (mandatory.cpp:97)
==384276== 
==384276== Invalid read of size 1
==384276==    at 0x407727: f_del_front_bn (get_next_line_utils.c:163)
==384276==    by 0x4073CD: get_next_line (get_next_line.c:52)
==384276==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384276==    by 0x40650F: main (mandatory.cpp:97)
==384276==  Address 0x4de6520 is 0 bytes inside a block of size 127 free'd
==384276==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384276==    by 0x407705: f_search_bn (get_next_line_utils.c:119)
==384276==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384276==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384276==    by 0x40650F: main (mandatory.cpp:97)
==384276==  Block was alloc'd at
==384276==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384276==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==384276==    by 0x40738B: get_next_line (get_next_line.c:48)
==384276==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384276==    by 0x40650F: main (mandatory.cpp:97)
==384276== 
==384276== Invalid free() / delete / delete[] / realloc()
==384276==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384276==    by 0x4073E0: get_next_line (get_next_line.c:53)
==384276==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384276==    by 0x40650F: main (mandatory.cpp:97)
==384276==  Address 0x51d1040 is 0 bytes inside a block of size 10,000,001 free'd
==384276==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384276==    by 0x407614: ft_strjoin (get_next_line_utils.c:82)
==384276==    by 0x40738B: get_next_line (get_next_line.c:48)
==384276==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384276==    by 0x40650F: main (mandatory.cpp:97)
==384276==  Block was alloc'd at
==384276==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384276==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384276==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384276==    by 0x40650F: main (mandatory.cpp:97)
==384276== 
==384276== Invalid read of size 1
==384276==    at 0x407595: ft_strjoin (get_next_line_utils.c:68)
==384276==    by 0x40738B: get_next_line (get_next_line.c:48)
==384276==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384276==    by 0x406521: main (mandatory.cpp:97)
==384276==  Address 0x4de654b is 43 bytes inside a block of size 127 free'd
==384276==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384276==    by 0x407705: f_search_bn (get_next_line_utils.c:119)
==384276==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384276==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384276==    by 0x40650F: main (mandatory.cpp:97)
==384276==  Block was alloc'd at
==384276==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384276==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==384276==    by 0x40738B: get_next_line (get_next_line.c:48)
==384276==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384276==    by 0x40650F: main (mandatory.cpp:97)
==384276== 
==384276== Invalid read of size 1
==384276==    at 0x407578: ft_strjoin (get_next_line_utils.c:70)
==384276==    by 0x40738B: get_next_line (get_next_line.c:48)
==384276==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384276==    by 0x406521: main (mandatory.cpp:97)
==384276==  Address 0x4de654b is 43 bytes inside a block of size 127 free'd
==384276==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384276==    by 0x407705: f_search_bn (get_next_line_utils.c:119)
==384276==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384276==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384276==    by 0x40650F: main (mandatory.cpp:97)
==384276==  Block was alloc'd at
==384276==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384276==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==384276==    by 0x40738B: get_next_line (get_next_line.c:48)
==384276==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384276==    by 0x40650F: main (mandatory.cpp:97)
==384276== 
==384276== Invalid read of size 1
==384276==    at 0x407727: f_del_front_bn (get_next_line_utils.c:163)
==384276==    by 0x4073CD: get_next_line (get_next_line.c:52)
==384276==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384276==    by 0x406521: main (mandatory.cpp:97)
==384276==  Address 0x4de6650 is 0 bytes inside a block of size 84 free'd
==384276==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384276==    by 0x407705: f_search_bn (get_next_line_utils.c:119)
==384276==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384276==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384276==    by 0x406521: main (mandatory.cpp:97)
==384276==  Block was alloc'd at
==384276==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384276==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==384276==    by 0x40738B: get_next_line (get_next_line.c:48)
==384276==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384276==    by 0x406521: main (mandatory.cpp:97)
==384276== 
==384276== Invalid free() / delete / delete[] / realloc()
==384276==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384276==    by 0x4073E0: get_next_line (get_next_line.c:53)
==384276==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384276==    by 0x406521: main (mandatory.cpp:97)
==384276==  Address 0x5b5b040 is 0 bytes inside a block of size 10,000,001 free'd
==384276==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384276==    by 0x407614: ft_strjoin (get_next_line_utils.c:82)
==384276==    by 0x40738B: get_next_line (get_next_line.c:48)
==384276==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384276==    by 0x406521: main (mandatory.cpp:97)
==384276==  Block was alloc'd at
==384276==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384276==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384276==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384276==    by 0x406521: main (mandatory.cpp:97)
==384276== 
==384276== Invalid read of size 1
==384276==    at 0x407595: ft_strjoin (get_next_line_utils.c:68)
==384276==    by 0x40738B: get_next_line (get_next_line.c:48)
==384276==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384276==    by 0x406533: main (mandatory.cpp:97)
==384276==  Address 0x4de667a is 42 bytes inside a block of size 84 free'd
==384276==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384276==    by 0x407705: f_search_bn (get_next_line_utils.c:119)
==384276==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384276==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384276==    by 0x406521: main (mandatory.cpp:97)
==384276==  Block was alloc'd at
==384276==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384276==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==384276==    by 0x40738B: get_next_line (get_next_line.c:48)
==384276==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384276==    by 0x406521: main (mandatory.cpp:97)
==384276== 
==384276== Invalid read of size 1
==384276==    at 0x407578: ft_strjoin (get_next_line_utils.c:70)
==384276==    by 0x40738B: get_next_line (get_next_line.c:48)
==384276==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384276==    by 0x406533: main (mandatory.cpp:97)
==384276==  Address 0x4de667a is 42 bytes inside a block of size 84 free'd
==384276==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384276==    by 0x407705: f_search_bn (get_next_line_utils.c:119)
==384276==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384276==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384276==    by 0x406521: main (mandatory.cpp:97)
==384276==  Block was alloc'd at
==384276==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384276==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==384276==    by 0x40738B: get_next_line (get_next_line.c:48)
==384276==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384276==    by 0x406521: main (mandatory.cpp:97)
==384276== 
==384276== Invalid read of size 1
==384276==    at 0x407727: f_del_front_bn (get_next_line_utils.c:163)
==384276==    by 0x4073CD: get_next_line (get_next_line.c:52)
==384276==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384276==    by 0x406533: main (mandatory.cpp:97)
==384276==  Address 0x4de6760 is 0 bytes inside a block of size 42 free'd
==384276==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384276==    by 0x407705: f_search_bn (get_next_line_utils.c:119)
==384276==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384276==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384276==    by 0x406533: main (mandatory.cpp:97)
==384276==  Block was alloc'd at
==384276==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384276==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==384276==    by 0x40738B: get_next_line (get_next_line.c:48)
==384276==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384276==    by 0x406533: main (mandatory.cpp:97)
==384276== 
==384276== Invalid free() / delete / delete[] / realloc()
==384276==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384276==    by 0x4073E0: get_next_line (get_next_line.c:53)
==384276==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384276==    by 0x406533: main (mandatory.cpp:97)
==384276==  Address 0x51d1040 is 0 bytes inside a block of size 10,000,001 free'd
==384276==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384276==    by 0x407614: ft_strjoin (get_next_line_utils.c:82)
==384276==    by 0x40738B: get_next_line (get_next_line.c:48)
==384276==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384276==    by 0x406533: main (mandatory.cpp:97)
==384276==  Block was alloc'd at
==384276==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384276==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384276==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384276==    by 0x406533: main (mandatory.cpp:97)
==384276== 
==384276== Invalid read of size 1
==384276==    at 0x407595: ft_strjoin (get_next_line_utils.c:68)
==384276==    by 0x40738B: get_next_line (get_next_line.c:48)
==384276==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384276==    by 0x40653F: main (mandatory.cpp:97)
==384276==  Address 0x4de6789 is 41 bytes inside a block of size 42 free'd
==384276==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384276==    by 0x407705: f_search_bn (get_next_line_utils.c:119)
==384276==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384276==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384276==    by 0x406533: main (mandatory.cpp:97)
==384276==  Block was alloc'd at
==384276==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384276==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==384276==    by 0x40738B: get_next_line (get_next_line.c:48)
==384276==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384276==    by 0x406533: main (mandatory.cpp:97)
==384276== 
==384329== Invalid read of size 1
==384329==    at 0x407727: f_del_front_bn (get_next_line_utils.c:163)
==384329==    by 0x4073CD: get_next_line (get_next_line.c:52)
==384329==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384329==    by 0x40675F: main (mandatory.cpp:106)
==384329==  Address 0x4de6560 is 0 bytes inside a block of size 218 free'd
==384329==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384329==    by 0x407705: f_search_bn (get_next_line_utils.c:119)
==384329==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384329==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384329==    by 0x40675F: main (mandatory.cpp:106)
==384329==  Block was alloc'd at
==384329==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384329==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==384329==    by 0x40738B: get_next_line (get_next_line.c:48)
==384329==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384329==    by 0x40675F: main (mandatory.cpp:106)
==384329== 
==384329== Invalid free() / delete / delete[] / realloc()
==384329==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384329==    by 0x4073E0: get_next_line (get_next_line.c:53)
==384329==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384329==    by 0x40675F: main (mandatory.cpp:106)
==384329==  Address 0x51d1040 is 0 bytes inside a block of size 10,000,001 free'd
==384329==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384329==    by 0x407614: ft_strjoin (get_next_line_utils.c:82)
==384329==    by 0x40738B: get_next_line (get_next_line.c:48)
==384329==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384329==    by 0x40675F: main (mandatory.cpp:106)
==384329==  Block was alloc'd at
==384329==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384329==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384329==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384329==    by 0x40675F: main (mandatory.cpp:106)
==384329== 
==384329== Invalid read of size 1
==384329==    at 0x4074EE: ft_strlen (get_next_line_utils.c:43)
==384329==    by 0x40751B: ft_strjoin (get_next_line_utils.c:59)
==384329==    by 0x40738B: get_next_line (get_next_line.c:48)
==384329==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384329==    by 0x406771: main (mandatory.cpp:106)
==384329==  Address 0x4de658a is 42 bytes inside a block of size 218 free'd
==384329==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384329==    by 0x407705: f_search_bn (get_next_line_utils.c:119)
==384329==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384329==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384329==    by 0x40675F: main (mandatory.cpp:106)
==384329==  Block was alloc'd at
==384329==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384329==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==384329==    by 0x40738B: get_next_line (get_next_line.c:48)
==384329==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384329==    by 0x40675F: main (mandatory.cpp:106)
==384329== 
==384329== Invalid read of size 1
==384329==    at 0x407595: ft_strjoin (get_next_line_utils.c:68)
==384329==    by 0x40738B: get_next_line (get_next_line.c:48)
==384329==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384329==    by 0x406771: main (mandatory.cpp:106)
==384329==  Address 0x4de658a is 42 bytes inside a block of size 218 free'd
==384329==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384329==    by 0x407705: f_search_bn (get_next_line_utils.c:119)
==384329==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384329==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384329==    by 0x40675F: main (mandatory.cpp:106)
==384329==  Block was alloc'd at
==384329==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384329==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==384329==    by 0x40738B: get_next_line (get_next_line.c:48)
==384329==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384329==    by 0x40675F: main (mandatory.cpp:106)
==384329== 
==384329== Invalid read of size 1
==384329==    at 0x407578: ft_strjoin (get_next_line_utils.c:70)
==384329==    by 0x40738B: get_next_line (get_next_line.c:48)
==384329==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384329==    by 0x406771: main (mandatory.cpp:106)
==384329==  Address 0x4de658a is 42 bytes inside a block of size 218 free'd
==384329==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384329==    by 0x407705: f_search_bn (get_next_line_utils.c:119)
==384329==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384329==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384329==    by 0x40675F: main (mandatory.cpp:106)
==384329==  Block was alloc'd at
==384329==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384329==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==384329==    by 0x40738B: get_next_line (get_next_line.c:48)
==384329==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384329==    by 0x40675F: main (mandatory.cpp:106)
==384329== 
==384329== Invalid free() / delete / delete[] / realloc()
==384329==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384329==    by 0x407608: ft_strjoin (get_next_line_utils.c:81)
==384329==    by 0x40738B: get_next_line (get_next_line.c:48)
==384329==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384329==    by 0x406771: main (mandatory.cpp:106)
==384329==  Address 0x4de658a is 42 bytes inside a block of size 218 free'd
==384329==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384329==    by 0x407705: f_search_bn (get_next_line_utils.c:119)
==384329==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384329==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384329==    by 0x40675F: main (mandatory.cpp:106)
==384329==  Block was alloc'd at
==384329==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384329==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==384329==    by 0x40738B: get_next_line (get_next_line.c:48)
==384329==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384329==    by 0x40675F: main (mandatory.cpp:106)
==384329== 
==384329== Invalid read of size 1
==384329==    at 0x407727: f_del_front_bn (get_next_line_utils.c:163)
==384329==    by 0x4073CD: get_next_line (get_next_line.c:52)
==384329==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384329==    by 0x406771: main (mandatory.cpp:106)
==384329==  Address 0x4de66f0 is 0 bytes inside a block of size 176 free'd
==384329==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384329==    by 0x407705: f_search_bn (get_next_line_utils.c:119)
==384329==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384329==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384329==    by 0x406771: main (mandatory.cpp:106)
==384329==  Block was alloc'd at
==384329==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384329==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==384329==    by 0x40738B: get_next_line (get_next_line.c:48)
==384329==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384329==    by 0x406771: main (mandatory.cpp:106)
==384329== 
==384329== Invalid free() / delete / delete[] / realloc()
==384329==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384329==    by 0x4073E0: get_next_line (get_next_line.c:53)
==384329==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384329==    by 0x406771: main (mandatory.cpp:106)
==384329==  Address 0x5b5b040 is 0 bytes inside a block of size 10,000,001 free'd
==384329==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384329==    by 0x407614: ft_strjoin (get_next_line_utils.c:82)
==384329==    by 0x40738B: get_next_line (get_next_line.c:48)
==384329==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384329==    by 0x406771: main (mandatory.cpp:106)
==384329==  Block was alloc'd at
==384329==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384329==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384329==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384329==    by 0x406771: main (mandatory.cpp:106)
==384329== 
==384329== Invalid read of size 1
==384329==    at 0x407595: ft_strjoin (get_next_line_utils.c:68)
==384329==    by 0x40738B: get_next_line (get_next_line.c:48)
==384329==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384329==    by 0x406783: main (mandatory.cpp:106)
==384329==  Address 0x4de66f1 is 1 bytes inside a block of size 176 free'd
==384329==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384329==    by 0x407705: f_search_bn (get_next_line_utils.c:119)
==384329==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384329==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384329==    by 0x406771: main (mandatory.cpp:106)
==384329==  Block was alloc'd at
==384329==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384329==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==384329==    by 0x40738B: get_next_line (get_next_line.c:48)
==384329==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384329==    by 0x406771: main (mandatory.cpp:106)
==384329== 
==384329== Invalid read of size 1
==384329==    at 0x407578: ft_strjoin (get_next_line_utils.c:70)
==384329==    by 0x40738B: get_next_line (get_next_line.c:48)
==384329==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384329==    by 0x406783: main (mandatory.cpp:106)
==384329==  Address 0x4de66f1 is 1 bytes inside a block of size 176 free'd
==384329==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384329==    by 0x407705: f_search_bn (get_next_line_utils.c:119)
==384329==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384329==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384329==    by 0x406771: main (mandatory.cpp:106)
==384329==  Block was alloc'd at
==384329==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384329==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==384329==    by 0x40738B: get_next_line (get_next_line.c:48)
==384329==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384329==    by 0x406771: main (mandatory.cpp:106)
==384329== 
==384329== Invalid read of size 1
==384329==    at 0x407727: f_del_front_bn (get_next_line_utils.c:163)
==384329==    by 0x4073CD: get_next_line (get_next_line.c:52)
==384329==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384329==    by 0x406783: main (mandatory.cpp:106)
==384329==  Address 0x4de6830 is 0 bytes inside a block of size 175 free'd
==384329==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384329==    by 0x407705: f_search_bn (get_next_line_utils.c:119)
==384329==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384329==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384329==    by 0x406783: main (mandatory.cpp:106)
==384329==  Block was alloc'd at
==384329==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384329==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==384329==    by 0x40738B: get_next_line (get_next_line.c:48)
==384329==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384329==    by 0x406783: main (mandatory.cpp:106)
==384329== 
==384329== Invalid free() / delete / delete[] / realloc()
==384329==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384329==    by 0x4073E0: get_next_line (get_next_line.c:53)
==384329==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384329==    by 0x406783: main (mandatory.cpp:106)
==384329==  Address 0x51d1040 is 0 bytes inside a block of size 10,000,001 free'd
==384329==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384329==    by 0x407614: ft_strjoin (get_next_line_utils.c:82)
==384329==    by 0x40738B: get_next_line (get_next_line.c:48)
==384329==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384329==    by 0x406783: main (mandatory.cpp:106)
==384329==  Block was alloc'd at
==384329==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384329==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384329==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384329==    by 0x406783: main (mandatory.cpp:106)
==384329== 
==384329== Invalid read of size 1
==384329==    at 0x407595: ft_strjoin (get_next_line_utils.c:68)
==384329==    by 0x40738B: get_next_line (get_next_line.c:48)
==384329==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384329==    by 0x406795: main (mandatory.cpp:106)
==384329==  Address 0x4de685b is 43 bytes inside a block of size 175 free'd
==384329==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384329==    by 0x407705: f_search_bn (get_next_line_utils.c:119)
==384329==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384329==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384329==    by 0x406783: main (mandatory.cpp:106)
==384329==  Block was alloc'd at
==384329==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384329==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==384329==    by 0x40738B: get_next_line (get_next_line.c:48)
==384329==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384329==    by 0x406783: main (mandatory.cpp:106)
==384329== 
==384329== Invalid read of size 1
==384329==    at 0x407578: ft_strjoin (get_next_line_utils.c:70)
==384329==    by 0x40738B: get_next_line (get_next_line.c:48)
==384329==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384329==    by 0x406795: main (mandatory.cpp:106)
==384329==  Address 0x4de685b is 43 bytes inside a block of size 175 free'd
==384329==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384329==    by 0x407705: f_search_bn (get_next_line_utils.c:119)
==384329==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384329==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384329==    by 0x406783: main (mandatory.cpp:106)
==384329==  Block was alloc'd at
==384329==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384329==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==384329==    by 0x40738B: get_next_line (get_next_line.c:48)
==384329==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384329==    by 0x406783: main (mandatory.cpp:106)
==384329== 
==384329== Invalid read of size 1
==384329==    at 0x407727: f_del_front_bn (get_next_line_utils.c:163)
==384329==    by 0x4073CD: get_next_line (get_next_line.c:52)
==384329==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384329==    by 0x406795: main (mandatory.cpp:106)
==384329==  Address 0x4de6990 is 0 bytes inside a block of size 132 free'd
==384329==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384329==    by 0x407705: f_search_bn (get_next_line_utils.c:119)
==384329==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384329==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384329==    by 0x406795: main (mandatory.cpp:106)
==384329==  Block was alloc'd at
==384329==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384329==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==384329==    by 0x40738B: get_next_line (get_next_line.c:48)
==384329==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384329==    by 0x406795: main (mandatory.cpp:106)
==384329== 
==384329== Invalid free() / delete / delete[] / realloc()
==384329==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384329==    by 0x4073E0: get_next_line (get_next_line.c:53)
==384329==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384329==    by 0x406795: main (mandatory.cpp:106)
==384329==  Address 0x5b5b040 is 0 bytes inside a block of size 10,000,001 free'd
==384329==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384329==    by 0x407614: ft_strjoin (get_next_line_utils.c:82)
==384329==    by 0x40738B: get_next_line (get_next_line.c:48)
==384329==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384329==    by 0x406795: main (mandatory.cpp:106)
==384329==  Block was alloc'd at
==384329==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384329==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384329==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384329==    by 0x406795: main (mandatory.cpp:106)
==384329== 
==384329== Invalid read of size 1
==384329==    at 0x407595: ft_strjoin (get_next_line_utils.c:68)
==384329==    by 0x40738B: get_next_line (get_next_line.c:48)
==384329==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384329==    by 0x4067A7: main (mandatory.cpp:106)
==384329==  Address 0x4de6991 is 1 bytes inside a block of size 132 free'd
==384329==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384329==    by 0x407705: f_search_bn (get_next_line_utils.c:119)
==384329==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384329==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384329==    by 0x406795: main (mandatory.cpp:106)
==384329==  Block was alloc'd at
==384329==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384329==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==384329==    by 0x40738B: get_next_line (get_next_line.c:48)
==384329==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384329==    by 0x406795: main (mandatory.cpp:106)
==384329== 
==384329== Invalid read of size 1
==384329==    at 0x407578: ft_strjoin (get_next_line_utils.c:70)
==384329==    by 0x40738B: get_next_line (get_next_line.c:48)
==384329==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384329==    by 0x4067A7: main (mandatory.cpp:106)
==384329==  Address 0x4de6991 is 1 bytes inside a block of size 132 free'd
==384329==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384329==    by 0x407705: f_search_bn (get_next_line_utils.c:119)
==384329==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384329==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384329==    by 0x406795: main (mandatory.cpp:106)
==384329==  Block was alloc'd at
==384329==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384329==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==384329==    by 0x40738B: get_next_line (get_next_line.c:48)
==384329==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384329==    by 0x406795: main (mandatory.cpp:106)
==384329== 
==384329== Invalid read of size 1
==384329==    at 0x407727: f_del_front_bn (get_next_line_utils.c:163)
==384329==    by 0x4073CD: get_next_line (get_next_line.c:52)
==384329==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384329==    by 0x4067A7: main (mandatory.cpp:106)
==384329==  Address 0x4de6ab0 is 0 bytes inside a block of size 131 free'd
==384329==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384329==    by 0x407705: f_search_bn (get_next_line_utils.c:119)
==384329==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384329==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384329==    by 0x4067A7: main (mandatory.cpp:106)
==384329==  Block was alloc'd at
==384329==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384329==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==384329==    by 0x40738B: get_next_line (get_next_line.c:48)
==384329==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384329==    by 0x4067A7: main (mandatory.cpp:106)
==384329== 
==384329== Invalid free() / delete / delete[] / realloc()
==384329==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384329==    by 0x4073E0: get_next_line (get_next_line.c:53)
==384329==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384329==    by 0x4067A7: main (mandatory.cpp:106)
==384329==  Address 0x51d1040 is 0 bytes inside a block of size 10,000,001 free'd
==384329==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384329==    by 0x407614: ft_strjoin (get_next_line_utils.c:82)
==384329==    by 0x40738B: get_next_line (get_next_line.c:48)
==384329==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384329==    by 0x4067A7: main (mandatory.cpp:106)
==384329==  Block was alloc'd at
==384329==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384329==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384329==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384329==    by 0x4067A7: main (mandatory.cpp:106)
==384329== 
==384329== Invalid read of size 1
==384329==    at 0x407595: ft_strjoin (get_next_line_utils.c:68)
==384329==    by 0x40738B: get_next_line (get_next_line.c:48)
==384329==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384329==    by 0x4067B9: main (mandatory.cpp:106)
==384329==  Address 0x4de6adc is 44 bytes inside a block of size 131 free'd
==384329==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384329==    by 0x407705: f_search_bn (get_next_line_utils.c:119)
==384329==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384329==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384329==    by 0x4067A7: main (mandatory.cpp:106)
==384329==  Block was alloc'd at
==384329==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384329==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==384329==    by 0x40738B: get_next_line (get_next_line.c:48)
==384329==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384329==    by 0x4067A7: main (mandatory.cpp:106)
==384329== 
==384329== Invalid read of size 1
==384329==    at 0x407578: ft_strjoin (get_next_line_utils.c:70)
==384329==    by 0x40738B: get_next_line (get_next_line.c:48)
==384329==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384329==    by 0x4067B9: main (mandatory.cpp:106)
==384329==  Address 0x4de6adc is 44 bytes inside a block of size 131 free'd
==384329==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384329==    by 0x407705: f_search_bn (get_next_line_utils.c:119)
==384329==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384329==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384329==    by 0x4067A7: main (mandatory.cpp:106)
==384329==  Block was alloc'd at
==384329==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384329==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==384329==    by 0x40738B: get_next_line (get_next_line.c:48)
==384329==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384329==    by 0x4067A7: main (mandatory.cpp:106)
==384329== 
==384329== Invalid read of size 1
==384329==    at 0x407727: f_del_front_bn (get_next_line_utils.c:163)
==384329==    by 0x4073CD: get_next_line (get_next_line.c:52)
==384329==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384329==    by 0x4067B9: main (mandatory.cpp:106)
==384329==  Address 0x4de6bf0 is 0 bytes inside a block of size 87 free'd
==384329==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384329==    by 0x407705: f_search_bn (get_next_line_utils.c:119)
==384329==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384329==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384329==    by 0x4067B9: main (mandatory.cpp:106)
==384329==  Block was alloc'd at
==384329==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384329==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==384329==    by 0x40738B: get_next_line (get_next_line.c:48)
==384329==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384329==    by 0x4067B9: main (mandatory.cpp:106)
==384329== 
==384329== Invalid free() / delete / delete[] / realloc()
==384329==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384329==    by 0x4073E0: get_next_line (get_next_line.c:53)
==384329==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384329==    by 0x4067B9: main (mandatory.cpp:106)
==384329==  Address 0x5b5b040 is 0 bytes inside a block of size 10,000,001 free'd
==384329==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384329==    by 0x407614: ft_strjoin (get_next_line_utils.c:82)
==384329==    by 0x40738B: get_next_line (get_next_line.c:48)
==384329==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384329==    by 0x4067B9: main (mandatory.cpp:106)
==384329==  Block was alloc'd at
==384329==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384329==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384329==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384329==    by 0x4067B9: main (mandatory.cpp:106)
==384329== 
==384329== Invalid read of size 1
==384329==    at 0x407595: ft_strjoin (get_next_line_utils.c:68)
==384329==    by 0x40738B: get_next_line (get_next_line.c:48)
==384329==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384329==    by 0x4067CB: main (mandatory.cpp:106)
==384329==  Address 0x4de6bf1 is 1 bytes inside a block of size 87 free'd
==384329==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384329==    by 0x407705: f_search_bn (get_next_line_utils.c:119)
==384329==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384329==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384329==    by 0x4067B9: main (mandatory.cpp:106)
==384329==  Block was alloc'd at
==384329==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384329==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==384329==    by 0x40738B: get_next_line (get_next_line.c:48)
==384329==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384329==    by 0x4067B9: main (mandatory.cpp:106)
==384329== 
==384329== Invalid read of size 1
==384329==    at 0x407578: ft_strjoin (get_next_line_utils.c:70)
==384329==    by 0x40738B: get_next_line (get_next_line.c:48)
==384329==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384329==    by 0x4067CB: main (mandatory.cpp:106)
==384329==  Address 0x4de6bf1 is 1 bytes inside a block of size 87 free'd
==384329==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384329==    by 0x407705: f_search_bn (get_next_line_utils.c:119)
==384329==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384329==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384329==    by 0x4067B9: main (mandatory.cpp:106)
==384329==  Block was alloc'd at
==384329==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384329==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==384329==    by 0x40738B: get_next_line (get_next_line.c:48)
==384329==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384329==    by 0x4067B9: main (mandatory.cpp:106)
==384329== 
==384329== Invalid read of size 1
==384329==    at 0x407727: f_del_front_bn (get_next_line_utils.c:163)
==384329==    by 0x4073CD: get_next_line (get_next_line.c:52)
==384329==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384329==    by 0x4067CB: main (mandatory.cpp:106)
==384329==  Address 0x4de6ce0 is 0 bytes inside a block of size 86 free'd
==384329==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384329==    by 0x407705: f_search_bn (get_next_line_utils.c:119)
==384329==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384329==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384329==    by 0x4067CB: main (mandatory.cpp:106)
==384329==  Block was alloc'd at
==384329==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384329==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==384329==    by 0x40738B: get_next_line (get_next_line.c:48)
==384329==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384329==    by 0x4067CB: main (mandatory.cpp:106)
==384329== 
==384329== Invalid free() / delete / delete[] / realloc()
==384329==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384329==    by 0x4073E0: get_next_line (get_next_line.c:53)
==384329==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384329==    by 0x4067CB: main (mandatory.cpp:106)
==384329==  Address 0x51d1040 is 0 bytes inside a block of size 10,000,001 free'd
==384329==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384329==    by 0x407614: ft_strjoin (get_next_line_utils.c:82)
==384329==    by 0x40738B: get_next_line (get_next_line.c:48)
==384329==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384329==    by 0x4067CB: main (mandatory.cpp:106)
==384329==  Block was alloc'd at
==384329==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384329==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384329==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384329==    by 0x4067CB: main (mandatory.cpp:106)
==384329== 
==384329== Invalid read of size 1
==384329==    at 0x407595: ft_strjoin (get_next_line_utils.c:68)
==384329==    by 0x40738B: get_next_line (get_next_line.c:48)
==384329==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384329==    by 0x4067DD: main (mandatory.cpp:106)
==384329==  Address 0x4de6d0b is 43 bytes inside a block of size 86 free'd
==384329==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384329==    by 0x407705: f_search_bn (get_next_line_utils.c:119)
==384329==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384329==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384329==    by 0x4067CB: main (mandatory.cpp:106)
==384329==  Block was alloc'd at
==384329==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384329==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==384329==    by 0x40738B: get_next_line (get_next_line.c:48)
==384329==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384329==    by 0x4067CB: main (mandatory.cpp:106)
==384329== 
==384329== Invalid read of size 1
==384329==    at 0x407578: ft_strjoin (get_next_line_utils.c:70)
==384329==    by 0x40738B: get_next_line (get_next_line.c:48)
==384329==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384329==    by 0x4067DD: main (mandatory.cpp:106)
==384329==  Address 0x4de6d0b is 43 bytes inside a block of size 86 free'd
==384329==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384329==    by 0x407705: f_search_bn (get_next_line_utils.c:119)
==384329==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384329==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384329==    by 0x4067CB: main (mandatory.cpp:106)
==384329==  Block was alloc'd at
==384329==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384329==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==384329==    by 0x40738B: get_next_line (get_next_line.c:48)
==384329==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384329==    by 0x4067CB: main (mandatory.cpp:106)
==384329== 
==384329== Invalid read of size 1
==384329==    at 0x407727: f_del_front_bn (get_next_line_utils.c:163)
==384329==    by 0x4073CD: get_next_line (get_next_line.c:52)
==384329==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384329==    by 0x4067DD: main (mandatory.cpp:106)
==384329==  Address 0x4de6df0 is 0 bytes inside a block of size 43 free'd
==384329==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384329==    by 0x407705: f_search_bn (get_next_line_utils.c:119)
==384329==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384329==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384329==    by 0x4067DD: main (mandatory.cpp:106)
==384329==  Block was alloc'd at
==384329==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384329==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==384329==    by 0x40738B: get_next_line (get_next_line.c:48)
==384329==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384329==    by 0x4067DD: main (mandatory.cpp:106)
==384329== 
==384329== Invalid free() / delete / delete[] / realloc()
==384329==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384329==    by 0x4073E0: get_next_line (get_next_line.c:53)
==384329==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384329==    by 0x4067DD: main (mandatory.cpp:106)
==384329==  Address 0x5b5b040 is 0 bytes inside a block of size 10,000,001 free'd
==384329==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384329==    by 0x407614: ft_strjoin (get_next_line_utils.c:82)
==384329==    by 0x40738B: get_next_line (get_next_line.c:48)
==384329==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384329==    by 0x4067DD: main (mandatory.cpp:106)
==384329==  Block was alloc'd at
==384329==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384329==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384329==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384329==    by 0x4067DD: main (mandatory.cpp:106)
==384329== 
==384329== Invalid read of size 1
==384329==    at 0x407595: ft_strjoin (get_next_line_utils.c:68)
==384329==    by 0x40738B: get_next_line (get_next_line.c:48)
==384329==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384329==    by 0x4067EF: main (mandatory.cpp:106)
==384329==  Address 0x4de6df1 is 1 bytes inside a block of size 43 free'd
==384329==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384329==    by 0x407705: f_search_bn (get_next_line_utils.c:119)
==384329==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384329==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384329==    by 0x4067DD: main (mandatory.cpp:106)
==384329==  Block was alloc'd at
==384329==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384329==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==384329==    by 0x40738B: get_next_line (get_next_line.c:48)
==384329==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384329==    by 0x4067DD: main (mandatory.cpp:106)
==384329== 
==384329== Invalid read of size 1
==384329==    at 0x407578: ft_strjoin (get_next_line_utils.c:70)
==384329==    by 0x40738B: get_next_line (get_next_line.c:48)
==384329==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384329==    by 0x4067EF: main (mandatory.cpp:106)
==384329==  Address 0x4de6df1 is 1 bytes inside a block of size 43 free'd
==384329==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384329==    by 0x407705: f_search_bn (get_next_line_utils.c:119)
==384329==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384329==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384329==    by 0x4067DD: main (mandatory.cpp:106)
==384329==  Block was alloc'd at
==384329==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384329==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==384329==    by 0x40738B: get_next_line (get_next_line.c:48)
==384329==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384329==    by 0x4067DD: main (mandatory.cpp:106)
==384329== 
==384329== Invalid read of size 1
==384329==    at 0x484FBD4: strcmp (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384329==    by 0x402D0A: gnl(int, char const*) (gnl.cpp:24)
==384329==    by 0x4067EF: main (mandatory.cpp:106)
==384329==  Address 0x0 is not stack'd, malloc'd or (recently) free'd
==384329== 
==384380== Invalid read of size 1
==384380==    at 0x407727: f_del_front_bn (get_next_line_utils.c:163)
==384380==    by 0x4073CD: get_next_line (get_next_line.c:52)
==384380==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384380==    by 0x406A1B: main (mandatory.cpp:119)
==384380==  Address 0x4de6890 is 0 bytes inside a block of size 219 free'd
==384380==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384380==    by 0x407705: f_search_bn (get_next_line_utils.c:119)
==384380==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384380==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384380==    by 0x406A1B: main (mandatory.cpp:119)
==384380==  Block was alloc'd at
==384380==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384380==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==384380==    by 0x40738B: get_next_line (get_next_line.c:48)
==384380==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384380==    by 0x406A1B: main (mandatory.cpp:119)
==384380== 
==384380== Invalid free() / delete / delete[] / realloc()
==384380==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384380==    by 0x4073E0: get_next_line (get_next_line.c:53)
==384380==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384380==    by 0x406A1B: main (mandatory.cpp:119)
==384380==  Address 0x51d1040 is 0 bytes inside a block of size 10,000,001 free'd
==384380==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384380==    by 0x407614: ft_strjoin (get_next_line_utils.c:82)
==384380==    by 0x40738B: get_next_line (get_next_line.c:48)
==384380==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384380==    by 0x406A1B: main (mandatory.cpp:119)
==384380==  Block was alloc'd at
==384380==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384380==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384380==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384380==    by 0x406A1B: main (mandatory.cpp:119)
==384380== 
==384380== Invalid read of size 1
==384380==    at 0x4074EE: ft_strlen (get_next_line_utils.c:43)
==384380==    by 0x40751B: ft_strjoin (get_next_line_utils.c:59)
==384380==    by 0x40738B: get_next_line (get_next_line.c:48)
==384380==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384380==    by 0x406A2D: main (mandatory.cpp:119)
==384380==  Address 0x4de68ba is 42 bytes inside a block of size 219 free'd
==384380==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384380==    by 0x407705: f_search_bn (get_next_line_utils.c:119)
==384380==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384380==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384380==    by 0x406A1B: main (mandatory.cpp:119)
==384380==  Block was alloc'd at
==384380==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384380==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==384380==    by 0x40738B: get_next_line (get_next_line.c:48)
==384380==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384380==    by 0x406A1B: main (mandatory.cpp:119)
==384380== 
==384380== Invalid read of size 1
==384380==    at 0x407595: ft_strjoin (get_next_line_utils.c:68)
==384380==    by 0x40738B: get_next_line (get_next_line.c:48)
==384380==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384380==    by 0x406A2D: main (mandatory.cpp:119)
==384380==  Address 0x4de68ba is 42 bytes inside a block of size 219 free'd
==384380==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384380==    by 0x407705: f_search_bn (get_next_line_utils.c:119)
==384380==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384380==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384380==    by 0x406A1B: main (mandatory.cpp:119)
==384380==  Block was alloc'd at
==384380==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384380==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==384380==    by 0x40738B: get_next_line (get_next_line.c:48)
==384380==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384380==    by 0x406A1B: main (mandatory.cpp:119)
==384380== 
==384380== Invalid read of size 1
==384380==    at 0x407578: ft_strjoin (get_next_line_utils.c:70)
==384380==    by 0x40738B: get_next_line (get_next_line.c:48)
==384380==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384380==    by 0x406A2D: main (mandatory.cpp:119)
==384380==  Address 0x4de68ba is 42 bytes inside a block of size 219 free'd
==384380==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384380==    by 0x407705: f_search_bn (get_next_line_utils.c:119)
==384380==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384380==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384380==    by 0x406A1B: main (mandatory.cpp:119)
==384380==  Block was alloc'd at
==384380==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384380==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==384380==    by 0x40738B: get_next_line (get_next_line.c:48)
==384380==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384380==    by 0x406A1B: main (mandatory.cpp:119)
==384380== 
==384380== Invalid free() / delete / delete[] / realloc()
==384380==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384380==    by 0x407608: ft_strjoin (get_next_line_utils.c:81)
==384380==    by 0x40738B: get_next_line (get_next_line.c:48)
==384380==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384380==    by 0x406A2D: main (mandatory.cpp:119)
==384380==  Address 0x4de68ba is 42 bytes inside a block of size 219 free'd
==384380==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384380==    by 0x407705: f_search_bn (get_next_line_utils.c:119)
==384380==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384380==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384380==    by 0x406A1B: main (mandatory.cpp:119)
==384380==  Block was alloc'd at
==384380==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384380==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==384380==    by 0x40738B: get_next_line (get_next_line.c:48)
==384380==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384380==    by 0x406A1B: main (mandatory.cpp:119)
==384380== 
==384380== Invalid read of size 1
==384380==    at 0x407727: f_del_front_bn (get_next_line_utils.c:163)
==384380==    by 0x4073CD: get_next_line (get_next_line.c:52)
==384380==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384380==    by 0x406A2D: main (mandatory.cpp:119)
==384380==  Address 0x4de6a20 is 0 bytes inside a block of size 177 free'd
==384380==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384380==    by 0x407705: f_search_bn (get_next_line_utils.c:119)
==384380==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384380==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384380==    by 0x406A2D: main (mandatory.cpp:119)
==384380==  Block was alloc'd at
==384380==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384380==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==384380==    by 0x40738B: get_next_line (get_next_line.c:48)
==384380==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384380==    by 0x406A2D: main (mandatory.cpp:119)
==384380== 
==384380== Invalid free() / delete / delete[] / realloc()
==384380==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384380==    by 0x4073E0: get_next_line (get_next_line.c:53)
==384380==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384380==    by 0x406A2D: main (mandatory.cpp:119)
==384380==  Address 0x5b5b040 is 0 bytes inside a block of size 10,000,001 free'd
==384380==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384380==    by 0x407614: ft_strjoin (get_next_line_utils.c:82)
==384380==    by 0x40738B: get_next_line (get_next_line.c:48)
==384380==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384380==    by 0x406A2D: main (mandatory.cpp:119)
==384380==  Block was alloc'd at
==384380==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384380==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384380==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384380==    by 0x406A2D: main (mandatory.cpp:119)
==384380== 
==384380== Invalid read of size 1
==384380==    at 0x407595: ft_strjoin (get_next_line_utils.c:68)
==384380==    by 0x40738B: get_next_line (get_next_line.c:48)
==384380==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384380==    by 0x406A3F: main (mandatory.cpp:119)
==384380==  Address 0x4de6a21 is 1 bytes inside a block of size 177 free'd
==384380==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384380==    by 0x407705: f_search_bn (get_next_line_utils.c:119)
==384380==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384380==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384380==    by 0x406A2D: main (mandatory.cpp:119)
==384380==  Block was alloc'd at
==384380==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384380==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==384380==    by 0x40738B: get_next_line (get_next_line.c:48)
==384380==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384380==    by 0x406A2D: main (mandatory.cpp:119)
==384380== 
==384380== Invalid read of size 1
==384380==    at 0x407578: ft_strjoin (get_next_line_utils.c:70)
==384380==    by 0x40738B: get_next_line (get_next_line.c:48)
==384380==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384380==    by 0x406A3F: main (mandatory.cpp:119)
==384380==  Address 0x4de6a21 is 1 bytes inside a block of size 177 free'd
==384380==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384380==    by 0x407705: f_search_bn (get_next_line_utils.c:119)
==384380==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384380==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384380==    by 0x406A2D: main (mandatory.cpp:119)
==384380==  Block was alloc'd at
==384380==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384380==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==384380==    by 0x40738B: get_next_line (get_next_line.c:48)
==384380==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384380==    by 0x406A2D: main (mandatory.cpp:119)
==384380== 
==384380== Invalid read of size 1
==384380==    at 0x407727: f_del_front_bn (get_next_line_utils.c:163)
==384380==    by 0x4073CD: get_next_line (get_next_line.c:52)
==384380==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384380==    by 0x406A3F: main (mandatory.cpp:119)
==384380==  Address 0x4de6b70 is 0 bytes inside a block of size 176 free'd
==384380==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384380==    by 0x407705: f_search_bn (get_next_line_utils.c:119)
==384380==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384380==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384380==    by 0x406A3F: main (mandatory.cpp:119)
==384380==  Block was alloc'd at
==384380==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384380==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==384380==    by 0x40738B: get_next_line (get_next_line.c:48)
==384380==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384380==    by 0x406A3F: main (mandatory.cpp:119)
==384380== 
==384380== Invalid free() / delete / delete[] / realloc()
==384380==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384380==    by 0x4073E0: get_next_line (get_next_line.c:53)
==384380==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384380==    by 0x406A3F: main (mandatory.cpp:119)
==384380==  Address 0x51d1040 is 0 bytes inside a block of size 10,000,001 free'd
==384380==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384380==    by 0x407614: ft_strjoin (get_next_line_utils.c:82)
==384380==    by 0x40738B: get_next_line (get_next_line.c:48)
==384380==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384380==    by 0x406A3F: main (mandatory.cpp:119)
==384380==  Block was alloc'd at
==384380==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384380==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384380==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384380==    by 0x406A3F: main (mandatory.cpp:119)
==384380== 
==384380== Invalid read of size 1
==384380==    at 0x407595: ft_strjoin (get_next_line_utils.c:68)
==384380==    by 0x40738B: get_next_line (get_next_line.c:48)
==384380==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384380==    by 0x406A51: main (mandatory.cpp:119)
==384380==  Address 0x4de6b9b is 43 bytes inside a block of size 176 free'd
==384380==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384380==    by 0x407705: f_search_bn (get_next_line_utils.c:119)
==384380==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384380==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384380==    by 0x406A3F: main (mandatory.cpp:119)
==384380==  Block was alloc'd at
==384380==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384380==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==384380==    by 0x40738B: get_next_line (get_next_line.c:48)
==384380==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384380==    by 0x406A3F: main (mandatory.cpp:119)
==384380== 
==384380== Invalid read of size 1
==384380==    at 0x407578: ft_strjoin (get_next_line_utils.c:70)
==384380==    by 0x40738B: get_next_line (get_next_line.c:48)
==384380==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384380==    by 0x406A51: main (mandatory.cpp:119)
==384380==  Address 0x4de6b9b is 43 bytes inside a block of size 176 free'd
==384380==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384380==    by 0x407705: f_search_bn (get_next_line_utils.c:119)
==384380==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384380==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384380==    by 0x406A3F: main (mandatory.cpp:119)
==384380==  Block was alloc'd at
==384380==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384380==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==384380==    by 0x40738B: get_next_line (get_next_line.c:48)
==384380==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384380==    by 0x406A3F: main (mandatory.cpp:119)
==384380== 
==384380== Invalid read of size 1
==384380==    at 0x407727: f_del_front_bn (get_next_line_utils.c:163)
==384380==    by 0x4073CD: get_next_line (get_next_line.c:52)
==384380==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384380==    by 0x406A51: main (mandatory.cpp:119)
==384380==  Address 0x4de6cd0 is 0 bytes inside a block of size 133 free'd
==384380==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384380==    by 0x407705: f_search_bn (get_next_line_utils.c:119)
==384380==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384380==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384380==    by 0x406A51: main (mandatory.cpp:119)
==384380==  Block was alloc'd at
==384380==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384380==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==384380==    by 0x40738B: get_next_line (get_next_line.c:48)
==384380==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384380==    by 0x406A51: main (mandatory.cpp:119)
==384380== 
==384380== Invalid free() / delete / delete[] / realloc()
==384380==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384380==    by 0x4073E0: get_next_line (get_next_line.c:53)
==384380==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384380==    by 0x406A51: main (mandatory.cpp:119)
==384380==  Address 0x5b5b040 is 0 bytes inside a block of size 10,000,001 free'd
==384380==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384380==    by 0x407614: ft_strjoin (get_next_line_utils.c:82)
==384380==    by 0x40738B: get_next_line (get_next_line.c:48)
==384380==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384380==    by 0x406A51: main (mandatory.cpp:119)
==384380==  Block was alloc'd at
==384380==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384380==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384380==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384380==    by 0x406A51: main (mandatory.cpp:119)
==384380== 
==384380== Invalid read of size 1
==384380==    at 0x407595: ft_strjoin (get_next_line_utils.c:68)
==384380==    by 0x40738B: get_next_line (get_next_line.c:48)
==384380==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384380==    by 0x406A63: main (mandatory.cpp:119)
==384380==  Address 0x4de6cd1 is 1 bytes inside a block of size 133 free'd
==384380==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384380==    by 0x407705: f_search_bn (get_next_line_utils.c:119)
==384380==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384380==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384380==    by 0x406A51: main (mandatory.cpp:119)
==384380==  Block was alloc'd at
==384380==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384380==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==384380==    by 0x40738B: get_next_line (get_next_line.c:48)
==384380==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384380==    by 0x406A51: main (mandatory.cpp:119)
==384380== 
==384380== Invalid read of size 1
==384380==    at 0x407578: ft_strjoin (get_next_line_utils.c:70)
==384380==    by 0x40738B: get_next_line (get_next_line.c:48)
==384380==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384380==    by 0x406A63: main (mandatory.cpp:119)
==384380==  Address 0x4de6cd1 is 1 bytes inside a block of size 133 free'd
==384380==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384380==    by 0x407705: f_search_bn (get_next_line_utils.c:119)
==384380==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384380==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384380==    by 0x406A51: main (mandatory.cpp:119)
==384380==  Block was alloc'd at
==384380==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384380==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==384380==    by 0x40738B: get_next_line (get_next_line.c:48)
==384380==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384380==    by 0x406A51: main (mandatory.cpp:119)
==384380== 
==384380== Invalid read of size 1
==384380==    at 0x407727: f_del_front_bn (get_next_line_utils.c:163)
==384380==    by 0x4073CD: get_next_line (get_next_line.c:52)
==384380==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384380==    by 0x406A63: main (mandatory.cpp:119)
==384380==  Address 0x4de6df0 is 0 bytes inside a block of size 132 free'd
==384380==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384380==    by 0x407705: f_search_bn (get_next_line_utils.c:119)
==384380==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384380==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384380==    by 0x406A63: main (mandatory.cpp:119)
==384380==  Block was alloc'd at
==384380==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384380==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==384380==    by 0x40738B: get_next_line (get_next_line.c:48)
==384380==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384380==    by 0x406A63: main (mandatory.cpp:119)
==384380== 
==384380== Invalid free() / delete / delete[] / realloc()
==384380==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384380==    by 0x4073E0: get_next_line (get_next_line.c:53)
==384380==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384380==    by 0x406A63: main (mandatory.cpp:119)
==384380==  Address 0x51d1040 is 0 bytes inside a block of size 10,000,001 free'd
==384380==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384380==    by 0x407614: ft_strjoin (get_next_line_utils.c:82)
==384380==    by 0x40738B: get_next_line (get_next_line.c:48)
==384380==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384380==    by 0x406A63: main (mandatory.cpp:119)
==384380==  Block was alloc'd at
==384380==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384380==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384380==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384380==    by 0x406A63: main (mandatory.cpp:119)
==384380== 
==384380== Invalid read of size 1
==384380==    at 0x407595: ft_strjoin (get_next_line_utils.c:68)
==384380==    by 0x40738B: get_next_line (get_next_line.c:48)
==384380==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384380==    by 0x406A75: main (mandatory.cpp:119)
==384380==  Address 0x4de6e1c is 44 bytes inside a block of size 132 free'd
==384380==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384380==    by 0x407705: f_search_bn (get_next_line_utils.c:119)
==384380==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384380==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384380==    by 0x406A63: main (mandatory.cpp:119)
==384380==  Block was alloc'd at
==384380==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384380==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==384380==    by 0x40738B: get_next_line (get_next_line.c:48)
==384380==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384380==    by 0x406A63: main (mandatory.cpp:119)
==384380== 
==384380== Invalid read of size 1
==384380==    at 0x407578: ft_strjoin (get_next_line_utils.c:70)
==384380==    by 0x40738B: get_next_line (get_next_line.c:48)
==384380==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384380==    by 0x406A75: main (mandatory.cpp:119)
==384380==  Address 0x4de6e1c is 44 bytes inside a block of size 132 free'd
==384380==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384380==    by 0x407705: f_search_bn (get_next_line_utils.c:119)
==384380==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384380==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384380==    by 0x406A63: main (mandatory.cpp:119)
==384380==  Block was alloc'd at
==384380==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384380==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==384380==    by 0x40738B: get_next_line (get_next_line.c:48)
==384380==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384380==    by 0x406A63: main (mandatory.cpp:119)
==384380== 
==384380== Invalid read of size 1
==384380==    at 0x407727: f_del_front_bn (get_next_line_utils.c:163)
==384380==    by 0x4073CD: get_next_line (get_next_line.c:52)
==384380==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384380==    by 0x406A75: main (mandatory.cpp:119)
==384380==  Address 0x4de6f30 is 0 bytes inside a block of size 88 free'd
==384380==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384380==    by 0x407705: f_search_bn (get_next_line_utils.c:119)
==384380==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384380==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384380==    by 0x406A75: main (mandatory.cpp:119)
==384380==  Block was alloc'd at
==384380==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384380==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==384380==    by 0x40738B: get_next_line (get_next_line.c:48)
==384380==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384380==    by 0x406A75: main (mandatory.cpp:119)
==384380== 
==384380== Invalid free() / delete / delete[] / realloc()
==384380==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384380==    by 0x4073E0: get_next_line (get_next_line.c:53)
==384380==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384380==    by 0x406A75: main (mandatory.cpp:119)
==384380==  Address 0x5b5b040 is 0 bytes inside a block of size 10,000,001 free'd
==384380==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384380==    by 0x407614: ft_strjoin (get_next_line_utils.c:82)
==384380==    by 0x40738B: get_next_line (get_next_line.c:48)
==384380==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384380==    by 0x406A75: main (mandatory.cpp:119)
==384380==  Block was alloc'd at
==384380==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384380==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384380==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384380==    by 0x406A75: main (mandatory.cpp:119)
==384380== 
==384380== Invalid read of size 1
==384380==    at 0x407595: ft_strjoin (get_next_line_utils.c:68)
==384380==    by 0x40738B: get_next_line (get_next_line.c:48)
==384380==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384380==    by 0x406A87: main (mandatory.cpp:119)
==384380==  Address 0x4de6f31 is 1 bytes inside a block of size 88 free'd
==384380==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384380==    by 0x407705: f_search_bn (get_next_line_utils.c:119)
==384380==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384380==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384380==    by 0x406A75: main (mandatory.cpp:119)
==384380==  Block was alloc'd at
==384380==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384380==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==384380==    by 0x40738B: get_next_line (get_next_line.c:48)
==384380==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384380==    by 0x406A75: main (mandatory.cpp:119)
==384380== 
==384380== Invalid read of size 1
==384380==    at 0x407578: ft_strjoin (get_next_line_utils.c:70)
==384380==    by 0x40738B: get_next_line (get_next_line.c:48)
==384380==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384380==    by 0x406A87: main (mandatory.cpp:119)
==384380==  Address 0x4de6f31 is 1 bytes inside a block of size 88 free'd
==384380==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384380==    by 0x407705: f_search_bn (get_next_line_utils.c:119)
==384380==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384380==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384380==    by 0x406A75: main (mandatory.cpp:119)
==384380==  Block was alloc'd at
==384380==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384380==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==384380==    by 0x40738B: get_next_line (get_next_line.c:48)
==384380==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384380==    by 0x406A75: main (mandatory.cpp:119)
==384380== 
==384380== Invalid read of size 1
==384380==    at 0x407727: f_del_front_bn (get_next_line_utils.c:163)
==384380==    by 0x4073CD: get_next_line (get_next_line.c:52)
==384380==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384380==    by 0x406A87: main (mandatory.cpp:119)
==384380==  Address 0x4de7020 is 0 bytes inside a block of size 87 free'd
==384380==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384380==    by 0x407705: f_search_bn (get_next_line_utils.c:119)
==384380==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384380==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384380==    by 0x406A87: main (mandatory.cpp:119)
==384380==  Block was alloc'd at
==384380==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384380==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==384380==    by 0x40738B: get_next_line (get_next_line.c:48)
==384380==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384380==    by 0x406A87: main (mandatory.cpp:119)
==384380== 
==384380== Invalid free() / delete / delete[] / realloc()
==384380==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384380==    by 0x4073E0: get_next_line (get_next_line.c:53)
==384380==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384380==    by 0x406A87: main (mandatory.cpp:119)
==384380==  Address 0x51d1040 is 0 bytes inside a block of size 10,000,001 free'd
==384380==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384380==    by 0x407614: ft_strjoin (get_next_line_utils.c:82)
==384380==    by 0x40738B: get_next_line (get_next_line.c:48)
==384380==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384380==    by 0x406A87: main (mandatory.cpp:119)
==384380==  Block was alloc'd at
==384380==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384380==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384380==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384380==    by 0x406A87: main (mandatory.cpp:119)
==384380== 
==384380== Invalid read of size 1
==384380==    at 0x407595: ft_strjoin (get_next_line_utils.c:68)
==384380==    by 0x40738B: get_next_line (get_next_line.c:48)
==384380==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384380==    by 0x406A99: main (mandatory.cpp:119)
==384380==  Address 0x4de704b is 43 bytes inside a block of size 87 free'd
==384380==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384380==    by 0x407705: f_search_bn (get_next_line_utils.c:119)
==384380==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384380==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384380==    by 0x406A87: main (mandatory.cpp:119)
==384380==  Block was alloc'd at
==384380==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384380==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==384380==    by 0x40738B: get_next_line (get_next_line.c:48)
==384380==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384380==    by 0x406A87: main (mandatory.cpp:119)
==384380== 
==384380== Invalid read of size 1
==384380==    at 0x407578: ft_strjoin (get_next_line_utils.c:70)
==384380==    by 0x40738B: get_next_line (get_next_line.c:48)
==384380==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384380==    by 0x406A99: main (mandatory.cpp:119)
==384380==  Address 0x4de704b is 43 bytes inside a block of size 87 free'd
==384380==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384380==    by 0x407705: f_search_bn (get_next_line_utils.c:119)
==384380==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384380==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384380==    by 0x406A87: main (mandatory.cpp:119)
==384380==  Block was alloc'd at
==384380==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384380==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==384380==    by 0x40738B: get_next_line (get_next_line.c:48)
==384380==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384380==    by 0x406A87: main (mandatory.cpp:119)
==384380== 
==384380== Invalid read of size 1
==384380==    at 0x407727: f_del_front_bn (get_next_line_utils.c:163)
==384380==    by 0x4073CD: get_next_line (get_next_line.c:52)
==384380==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384380==    by 0x406A99: main (mandatory.cpp:119)
==384380==  Address 0x4de7130 is 0 bytes inside a block of size 44 free'd
==384380==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384380==    by 0x407705: f_search_bn (get_next_line_utils.c:119)
==384380==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384380==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384380==    by 0x406A99: main (mandatory.cpp:119)
==384380==  Block was alloc'd at
==384380==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384380==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==384380==    by 0x40738B: get_next_line (get_next_line.c:48)
==384380==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384380==    by 0x406A99: main (mandatory.cpp:119)
==384380== 
==384380== Invalid free() / delete / delete[] / realloc()
==384380==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384380==    by 0x4073E0: get_next_line (get_next_line.c:53)
==384380==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384380==    by 0x406A99: main (mandatory.cpp:119)
==384380==  Address 0x5b5b040 is 0 bytes inside a block of size 10,000,001 free'd
==384380==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384380==    by 0x407614: ft_strjoin (get_next_line_utils.c:82)
==384380==    by 0x40738B: get_next_line (get_next_line.c:48)
==384380==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384380==    by 0x406A99: main (mandatory.cpp:119)
==384380==  Block was alloc'd at
==384380==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384380==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384380==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384380==    by 0x406A99: main (mandatory.cpp:119)
==384380== 
==384380== Invalid read of size 1
==384380==    at 0x407595: ft_strjoin (get_next_line_utils.c:68)
==384380==    by 0x40738B: get_next_line (get_next_line.c:48)
==384380==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384380==    by 0x406AAB: main (mandatory.cpp:119)
==384380==  Address 0x4de7131 is 1 bytes inside a block of size 44 free'd
==384380==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384380==    by 0x407705: f_search_bn (get_next_line_utils.c:119)
==384380==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384380==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384380==    by 0x406A99: main (mandatory.cpp:119)
==384380==  Block was alloc'd at
==384380==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384380==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==384380==    by 0x40738B: get_next_line (get_next_line.c:48)
==384380==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384380==    by 0x406A99: main (mandatory.cpp:119)
==384380== 
==384380== Invalid read of size 1
==384380==    at 0x407578: ft_strjoin (get_next_line_utils.c:70)
==384380==    by 0x40738B: get_next_line (get_next_line.c:48)
==384380==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384380==    by 0x406AAB: main (mandatory.cpp:119)
==384380==  Address 0x4de7131 is 1 bytes inside a block of size 44 free'd
==384380==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384380==    by 0x407705: f_search_bn (get_next_line_utils.c:119)
==384380==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384380==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384380==    by 0x406A99: main (mandatory.cpp:119)
==384380==  Block was alloc'd at
==384380==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384380==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==384380==    by 0x40738B: get_next_line (get_next_line.c:48)
==384380==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384380==    by 0x406A99: main (mandatory.cpp:119)
==384380== 
==384380== Invalid read of size 1
==384380==    at 0x407727: f_del_front_bn (get_next_line_utils.c:163)
==384380==    by 0x4073CD: get_next_line (get_next_line.c:52)
==384380==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384380==    by 0x406AAB: main (mandatory.cpp:119)
==384380==  Address 0x4de71f0 is 0 bytes inside a block of size 43 free'd
==384380==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384380==    by 0x407705: f_search_bn (get_next_line_utils.c:119)
==384380==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384380==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384380==    by 0x406AAB: main (mandatory.cpp:119)
==384380==  Block was alloc'd at
==384380==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384380==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==384380==    by 0x40738B: get_next_line (get_next_line.c:48)
==384380==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384380==    by 0x406AAB: main (mandatory.cpp:119)
==384380== 
==384380== Invalid free() / delete / delete[] / realloc()
==384380==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384380==    by 0x4073E0: get_next_line (get_next_line.c:53)
==384380==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384380==    by 0x406AAB: main (mandatory.cpp:119)
==384380==  Address 0x51d1040 is 0 bytes inside a block of size 10,000,001 free'd
==384380==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384380==    by 0x407614: ft_strjoin (get_next_line_utils.c:82)
==384380==    by 0x40738B: get_next_line (get_next_line.c:48)
==384380==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384380==    by 0x406AAB: main (mandatory.cpp:119)
==384380==  Block was alloc'd at
==384380==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384380==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384380==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384380==    by 0x406AAB: main (mandatory.cpp:119)
==384380== 
==384380== Invalid read of size 1
==384380==    at 0x407595: ft_strjoin (get_next_line_utils.c:68)
==384380==    by 0x40738B: get_next_line (get_next_line.c:48)
==384380==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384380==    by 0x406AB7: main (mandatory.cpp:119)
==384380==  Address 0x4de721a is 42 bytes inside a block of size 43 free'd
==384380==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384380==    by 0x407705: f_search_bn (get_next_line_utils.c:119)
==384380==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384380==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384380==    by 0x406AAB: main (mandatory.cpp:119)
==384380==  Block was alloc'd at
==384380==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384380==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==384380==    by 0x40738B: get_next_line (get_next_line.c:48)
==384380==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384380==    by 0x406AAB: main (mandatory.cpp:119)
==384380== 
==384397== Invalid read of size 1
==384397==    at 0x407727: f_del_front_bn (get_next_line_utils.c:163)
==384397==    by 0x4073CD: get_next_line (get_next_line.c:52)
==384397==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384397==    by 0x406F03: main (mandatory.cpp:136)
==384397==  Address 0x4de6eb0 is 0 bytes inside a block of size 10,002 free'd
==384397==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384397==    by 0x407705: f_search_bn (get_next_line_utils.c:119)
==384397==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384397==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384397==    by 0x406F03: main (mandatory.cpp:136)
==384397==  Block was alloc'd at
==384397==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384397==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==384397==    by 0x40738B: get_next_line (get_next_line.c:48)
==384397==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384397==    by 0x406F03: main (mandatory.cpp:136)
==384397== 
==384397== Invalid free() / delete / delete[] / realloc()
==384397==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384397==    by 0x4073E0: get_next_line (get_next_line.c:53)
==384397==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384397==    by 0x406F03: main (mandatory.cpp:136)
==384397==  Address 0x51d1040 is 0 bytes inside a block of size 10,000,001 free'd
==384397==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384397==    by 0x407614: ft_strjoin (get_next_line_utils.c:82)
==384397==    by 0x40738B: get_next_line (get_next_line.c:48)
==384397==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384397==    by 0x406F03: main (mandatory.cpp:136)
==384397==  Block was alloc'd at
==384397==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384397==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384397==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384397==    by 0x406F03: main (mandatory.cpp:136)
==384397== 
==384397== Invalid read of size 1
==384397==    at 0x4074EE: ft_strlen (get_next_line_utils.c:43)
==384397==    by 0x40751B: ft_strjoin (get_next_line_utils.c:59)
==384397==    by 0x40738B: get_next_line (get_next_line.c:48)
==384397==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384397==    by 0x406F0F: main (mandatory.cpp:136)
==384397==  Address 0x4de95c1 is 10,001 bytes inside a block of size 10,002 free'd
==384397==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384397==    by 0x407705: f_search_bn (get_next_line_utils.c:119)
==384397==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384397==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384397==    by 0x406F03: main (mandatory.cpp:136)
==384397==  Block was alloc'd at
==384397==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384397==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==384397==    by 0x40738B: get_next_line (get_next_line.c:48)
==384397==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384397==    by 0x406F03: main (mandatory.cpp:136)
==384397== 
==384397== Invalid read of size 1
==384397==    at 0x407595: ft_strjoin (get_next_line_utils.c:68)
==384397==    by 0x40738B: get_next_line (get_next_line.c:48)
==384397==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384397==    by 0x406F0F: main (mandatory.cpp:136)
==384397==  Address 0x4de95c1 is 10,001 bytes inside a block of size 10,002 free'd
==384397==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384397==    by 0x407705: f_search_bn (get_next_line_utils.c:119)
==384397==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384397==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384397==    by 0x406F03: main (mandatory.cpp:136)
==384397==  Block was alloc'd at
==384397==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384397==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==384397==    by 0x40738B: get_next_line (get_next_line.c:48)
==384397==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384397==    by 0x406F03: main (mandatory.cpp:136)
==384397== 
==384397== Invalid free() / delete / delete[] / realloc()
==384397==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384397==    by 0x407608: ft_strjoin (get_next_line_utils.c:81)
==384397==    by 0x40738B: get_next_line (get_next_line.c:48)
==384397==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384397==    by 0x406F0F: main (mandatory.cpp:136)
==384397==  Address 0x4de95c1 is 10,001 bytes inside a block of size 10,002 free'd
==384397==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384397==    by 0x407705: f_search_bn (get_next_line_utils.c:119)
==384397==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384397==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384397==    by 0x406F03: main (mandatory.cpp:136)
==384397==  Block was alloc'd at
==384397==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384397==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==384397==    by 0x40738B: get_next_line (get_next_line.c:48)
==384397==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384397==    by 0x406F03: main (mandatory.cpp:136)
==384397== 
==384454== Invalid read of size 1
==384454==    at 0x407727: f_del_front_bn (get_next_line_utils.c:163)
==384454==    by 0x4073CD: get_next_line (get_next_line.c:52)
==384454==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384454==    by 0x40712E: main (mandatory.cpp:141)
==384454==  Address 0x4de6eb0 is 0 bytes inside a block of size 219 free'd
==384454==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384454==    by 0x407705: f_search_bn (get_next_line_utils.c:119)
==384454==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384454==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384454==    by 0x40712E: main (mandatory.cpp:141)
==384454==  Block was alloc'd at
==384454==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384454==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==384454==    by 0x40738B: get_next_line (get_next_line.c:48)
==384454==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384454==    by 0x40712E: main (mandatory.cpp:141)
==384454== 
==384454== Invalid free() / delete / delete[] / realloc()
==384454==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384454==    by 0x4073E0: get_next_line (get_next_line.c:53)
==384454==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384454==    by 0x40712E: main (mandatory.cpp:141)
==384454==  Address 0x51d1040 is 0 bytes inside a block of size 10,000,001 free'd
==384454==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384454==    by 0x407614: ft_strjoin (get_next_line_utils.c:82)
==384454==    by 0x40738B: get_next_line (get_next_line.c:48)
==384454==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384454==    by 0x40712E: main (mandatory.cpp:141)
==384454==  Block was alloc'd at
==384454==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384454==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384454==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384454==    by 0x40712E: main (mandatory.cpp:141)
==384454== 
==384454== Invalid read of size 1
==384454==    at 0x4074EE: ft_strlen (get_next_line_utils.c:43)
==384454==    by 0x40751B: ft_strjoin (get_next_line_utils.c:59)
==384454==    by 0x40738B: get_next_line (get_next_line.c:48)
==384454==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384454==    by 0x40713F: main (mandatory.cpp:141)
==384454==  Address 0x4de6eda is 42 bytes inside a block of size 219 free'd
==384454==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384454==    by 0x407705: f_search_bn (get_next_line_utils.c:119)
==384454==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384454==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384454==    by 0x40712E: main (mandatory.cpp:141)
==384454==  Block was alloc'd at
==384454==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384454==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==384454==    by 0x40738B: get_next_line (get_next_line.c:48)
==384454==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384454==    by 0x40712E: main (mandatory.cpp:141)
==384454== 
==384454== Invalid read of size 1
==384454==    at 0x407595: ft_strjoin (get_next_line_utils.c:68)
==384454==    by 0x40738B: get_next_line (get_next_line.c:48)
==384454==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384454==    by 0x40713F: main (mandatory.cpp:141)
==384454==  Address 0x4de6eda is 42 bytes inside a block of size 219 free'd
==384454==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384454==    by 0x407705: f_search_bn (get_next_line_utils.c:119)
==384454==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384454==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384454==    by 0x40712E: main (mandatory.cpp:141)
==384454==  Block was alloc'd at
==384454==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384454==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==384454==    by 0x40738B: get_next_line (get_next_line.c:48)
==384454==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384454==    by 0x40712E: main (mandatory.cpp:141)
==384454== 
==384454== Invalid read of size 1
==384454==    at 0x407578: ft_strjoin (get_next_line_utils.c:70)
==384454==    by 0x40738B: get_next_line (get_next_line.c:48)
==384454==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384454==    by 0x40713F: main (mandatory.cpp:141)
==384454==  Address 0x4de6eda is 42 bytes inside a block of size 219 free'd
==384454==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384454==    by 0x407705: f_search_bn (get_next_line_utils.c:119)
==384454==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384454==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384454==    by 0x40712E: main (mandatory.cpp:141)
==384454==  Block was alloc'd at
==384454==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384454==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==384454==    by 0x40738B: get_next_line (get_next_line.c:48)
==384454==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384454==    by 0x40712E: main (mandatory.cpp:141)
==384454== 
==384454== Invalid free() / delete / delete[] / realloc()
==384454==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384454==    by 0x407608: ft_strjoin (get_next_line_utils.c:81)
==384454==    by 0x40738B: get_next_line (get_next_line.c:48)
==384454==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384454==    by 0x40713F: main (mandatory.cpp:141)
==384454==  Address 0x4de6eda is 42 bytes inside a block of size 219 free'd
==384454==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384454==    by 0x407705: f_search_bn (get_next_line_utils.c:119)
==384454==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384454==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384454==    by 0x40712E: main (mandatory.cpp:141)
==384454==  Block was alloc'd at
==384454==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384454==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==384454==    by 0x40738B: get_next_line (get_next_line.c:48)
==384454==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384454==    by 0x40712E: main (mandatory.cpp:141)
==384454== 
==384454== Invalid read of size 1
==384454==    at 0x407727: f_del_front_bn (get_next_line_utils.c:163)
==384454==    by 0x4073CD: get_next_line (get_next_line.c:52)
==384454==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384454==    by 0x40713F: main (mandatory.cpp:141)
==384454==  Address 0x4de7040 is 0 bytes inside a block of size 177 free'd
==384454==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384454==    by 0x407705: f_search_bn (get_next_line_utils.c:119)
==384454==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384454==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384454==    by 0x40713F: main (mandatory.cpp:141)
==384454==  Block was alloc'd at
==384454==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384454==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==384454==    by 0x40738B: get_next_line (get_next_line.c:48)
==384454==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384454==    by 0x40713F: main (mandatory.cpp:141)
==384454== 
==384454== Invalid free() / delete / delete[] / realloc()
==384454==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384454==    by 0x4073E0: get_next_line (get_next_line.c:53)
==384454==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384454==    by 0x40713F: main (mandatory.cpp:141)
==384454==  Address 0x5b5b040 is 0 bytes inside a block of size 10,000,001 free'd
==384454==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384454==    by 0x407614: ft_strjoin (get_next_line_utils.c:82)
==384454==    by 0x40738B: get_next_line (get_next_line.c:48)
==384454==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384454==    by 0x40713F: main (mandatory.cpp:141)
==384454==  Block was alloc'd at
==384454==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384454==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384454==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384454==    by 0x40713F: main (mandatory.cpp:141)
==384454== 
==384454== Invalid read of size 1
==384454==    at 0x407595: ft_strjoin (get_next_line_utils.c:68)
==384454==    by 0x40738B: get_next_line (get_next_line.c:48)
==384454==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384454==    by 0x407150: main (mandatory.cpp:141)
==384454==  Address 0x4de7041 is 1 bytes inside a block of size 177 free'd
==384454==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384454==    by 0x407705: f_search_bn (get_next_line_utils.c:119)
==384454==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384454==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384454==    by 0x40713F: main (mandatory.cpp:141)
==384454==  Block was alloc'd at
==384454==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384454==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==384454==    by 0x40738B: get_next_line (get_next_line.c:48)
==384454==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384454==    by 0x40713F: main (mandatory.cpp:141)
==384454== 
==384454== Invalid read of size 1
==384454==    at 0x407578: ft_strjoin (get_next_line_utils.c:70)
==384454==    by 0x40738B: get_next_line (get_next_line.c:48)
==384454==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384454==    by 0x407150: main (mandatory.cpp:141)
==384454==  Address 0x4de7041 is 1 bytes inside a block of size 177 free'd
==384454==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384454==    by 0x407705: f_search_bn (get_next_line_utils.c:119)
==384454==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384454==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384454==    by 0x40713F: main (mandatory.cpp:141)
==384454==  Block was alloc'd at
==384454==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384454==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==384454==    by 0x40738B: get_next_line (get_next_line.c:48)
==384454==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384454==    by 0x40713F: main (mandatory.cpp:141)
==384454== 
==384454== Invalid read of size 1
==384454==    at 0x407727: f_del_front_bn (get_next_line_utils.c:163)
==384454==    by 0x4073CD: get_next_line (get_next_line.c:52)
==384454==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384454==    by 0x407150: main (mandatory.cpp:141)
==384454==  Address 0x4de7190 is 0 bytes inside a block of size 176 free'd
==384454==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384454==    by 0x407705: f_search_bn (get_next_line_utils.c:119)
==384454==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384454==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384454==    by 0x407150: main (mandatory.cpp:141)
==384454==  Block was alloc'd at
==384454==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384454==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==384454==    by 0x40738B: get_next_line (get_next_line.c:48)
==384454==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384454==    by 0x407150: main (mandatory.cpp:141)
==384454== 
==384454== Invalid free() / delete / delete[] / realloc()
==384454==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384454==    by 0x4073E0: get_next_line (get_next_line.c:53)
==384454==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384454==    by 0x407150: main (mandatory.cpp:141)
==384454==  Address 0x51d1040 is 0 bytes inside a block of size 10,000,001 free'd
==384454==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384454==    by 0x407614: ft_strjoin (get_next_line_utils.c:82)
==384454==    by 0x40738B: get_next_line (get_next_line.c:48)
==384454==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384454==    by 0x407150: main (mandatory.cpp:141)
==384454==  Block was alloc'd at
==384454==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384454==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384454==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384454==    by 0x407150: main (mandatory.cpp:141)
==384454== 
==384454== Invalid read of size 1
==384454==    at 0x407595: ft_strjoin (get_next_line_utils.c:68)
==384454==    by 0x40738B: get_next_line (get_next_line.c:48)
==384454==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384454==    by 0x407161: main (mandatory.cpp:141)
==384454==  Address 0x4de71bb is 43 bytes inside a block of size 176 free'd
==384454==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384454==    by 0x407705: f_search_bn (get_next_line_utils.c:119)
==384454==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384454==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384454==    by 0x407150: main (mandatory.cpp:141)
==384454==  Block was alloc'd at
==384454==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384454==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==384454==    by 0x40738B: get_next_line (get_next_line.c:48)
==384454==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384454==    by 0x407150: main (mandatory.cpp:141)
==384454== 
==384454== Invalid read of size 1
==384454==    at 0x407578: ft_strjoin (get_next_line_utils.c:70)
==384454==    by 0x40738B: get_next_line (get_next_line.c:48)
==384454==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384454==    by 0x407161: main (mandatory.cpp:141)
==384454==  Address 0x4de71bb is 43 bytes inside a block of size 176 free'd
==384454==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384454==    by 0x407705: f_search_bn (get_next_line_utils.c:119)
==384454==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384454==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384454==    by 0x407150: main (mandatory.cpp:141)
==384454==  Block was alloc'd at
==384454==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384454==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==384454==    by 0x40738B: get_next_line (get_next_line.c:48)
==384454==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384454==    by 0x407150: main (mandatory.cpp:141)
==384454== 
==384454== Invalid read of size 1
==384454==    at 0x407727: f_del_front_bn (get_next_line_utils.c:163)
==384454==    by 0x4073CD: get_next_line (get_next_line.c:52)
==384454==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384454==    by 0x407161: main (mandatory.cpp:141)
==384454==  Address 0x4de72f0 is 0 bytes inside a block of size 133 free'd
==384454==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384454==    by 0x407705: f_search_bn (get_next_line_utils.c:119)
==384454==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384454==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384454==    by 0x407161: main (mandatory.cpp:141)
==384454==  Block was alloc'd at
==384454==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384454==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==384454==    by 0x40738B: get_next_line (get_next_line.c:48)
==384454==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384454==    by 0x407161: main (mandatory.cpp:141)
==384454== 
==384454== Invalid free() / delete / delete[] / realloc()
==384454==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384454==    by 0x4073E0: get_next_line (get_next_line.c:53)
==384454==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384454==    by 0x407161: main (mandatory.cpp:141)
==384454==  Address 0x5b5b040 is 0 bytes inside a block of size 10,000,001 free'd
==384454==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384454==    by 0x407614: ft_strjoin (get_next_line_utils.c:82)
==384454==    by 0x40738B: get_next_line (get_next_line.c:48)
==384454==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384454==    by 0x407161: main (mandatory.cpp:141)
==384454==  Block was alloc'd at
==384454==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384454==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384454==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384454==    by 0x407161: main (mandatory.cpp:141)
==384454== 
==384454== Invalid read of size 1
==384454==    at 0x407595: ft_strjoin (get_next_line_utils.c:68)
==384454==    by 0x40738B: get_next_line (get_next_line.c:48)
==384454==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384454==    by 0x407172: main (mandatory.cpp:141)
==384454==  Address 0x4de72f1 is 1 bytes inside a block of size 133 free'd
==384454==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384454==    by 0x407705: f_search_bn (get_next_line_utils.c:119)
==384454==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384454==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384454==    by 0x407161: main (mandatory.cpp:141)
==384454==  Block was alloc'd at
==384454==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384454==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==384454==    by 0x40738B: get_next_line (get_next_line.c:48)
==384454==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384454==    by 0x407161: main (mandatory.cpp:141)
==384454== 
==384454== Invalid read of size 1
==384454==    at 0x407578: ft_strjoin (get_next_line_utils.c:70)
==384454==    by 0x40738B: get_next_line (get_next_line.c:48)
==384454==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384454==    by 0x407172: main (mandatory.cpp:141)
==384454==  Address 0x4de72f1 is 1 bytes inside a block of size 133 free'd
==384454==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384454==    by 0x407705: f_search_bn (get_next_line_utils.c:119)
==384454==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384454==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384454==    by 0x407161: main (mandatory.cpp:141)
==384454==  Block was alloc'd at
==384454==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384454==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==384454==    by 0x40738B: get_next_line (get_next_line.c:48)
==384454==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384454==    by 0x407161: main (mandatory.cpp:141)
==384454== 
==384454== Invalid read of size 1
==384454==    at 0x407727: f_del_front_bn (get_next_line_utils.c:163)
==384454==    by 0x4073CD: get_next_line (get_next_line.c:52)
==384454==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384454==    by 0x407172: main (mandatory.cpp:141)
==384454==  Address 0x4de7410 is 0 bytes inside a block of size 132 free'd
==384454==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384454==    by 0x407705: f_search_bn (get_next_line_utils.c:119)
==384454==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384454==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384454==    by 0x407172: main (mandatory.cpp:141)
==384454==  Block was alloc'd at
==384454==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384454==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==384454==    by 0x40738B: get_next_line (get_next_line.c:48)
==384454==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384454==    by 0x407172: main (mandatory.cpp:141)
==384454== 
==384454== Invalid free() / delete / delete[] / realloc()
==384454==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384454==    by 0x4073E0: get_next_line (get_next_line.c:53)
==384454==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384454==    by 0x407172: main (mandatory.cpp:141)
==384454==  Address 0x51d1040 is 0 bytes inside a block of size 10,000,001 free'd
==384454==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384454==    by 0x407614: ft_strjoin (get_next_line_utils.c:82)
==384454==    by 0x40738B: get_next_line (get_next_line.c:48)
==384454==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384454==    by 0x407172: main (mandatory.cpp:141)
==384454==  Block was alloc'd at
==384454==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384454==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384454==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384454==    by 0x407172: main (mandatory.cpp:141)
==384454== 
==384454== Invalid read of size 1
==384454==    at 0x407595: ft_strjoin (get_next_line_utils.c:68)
==384454==    by 0x40738B: get_next_line (get_next_line.c:48)
==384454==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384454==    by 0x407183: main (mandatory.cpp:141)
==384454==  Address 0x4de743c is 44 bytes inside a block of size 132 free'd
==384454==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384454==    by 0x407705: f_search_bn (get_next_line_utils.c:119)
==384454==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384454==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384454==    by 0x407172: main (mandatory.cpp:141)
==384454==  Block was alloc'd at
==384454==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384454==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==384454==    by 0x40738B: get_next_line (get_next_line.c:48)
==384454==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384454==    by 0x407172: main (mandatory.cpp:141)
==384454== 
==384454== Invalid read of size 1
==384454==    at 0x407578: ft_strjoin (get_next_line_utils.c:70)
==384454==    by 0x40738B: get_next_line (get_next_line.c:48)
==384454==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384454==    by 0x407183: main (mandatory.cpp:141)
==384454==  Address 0x4de743c is 44 bytes inside a block of size 132 free'd
==384454==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384454==    by 0x407705: f_search_bn (get_next_line_utils.c:119)
==384454==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384454==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384454==    by 0x407172: main (mandatory.cpp:141)
==384454==  Block was alloc'd at
==384454==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384454==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==384454==    by 0x40738B: get_next_line (get_next_line.c:48)
==384454==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384454==    by 0x407172: main (mandatory.cpp:141)
==384454== 
==384454== Invalid read of size 1
==384454==    at 0x407727: f_del_front_bn (get_next_line_utils.c:163)
==384454==    by 0x4073CD: get_next_line (get_next_line.c:52)
==384454==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384454==    by 0x407183: main (mandatory.cpp:141)
==384454==  Address 0x4de7550 is 0 bytes inside a block of size 88 free'd
==384454==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384454==    by 0x407705: f_search_bn (get_next_line_utils.c:119)
==384454==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384454==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384454==    by 0x407183: main (mandatory.cpp:141)
==384454==  Block was alloc'd at
==384454==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384454==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==384454==    by 0x40738B: get_next_line (get_next_line.c:48)
==384454==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384454==    by 0x407183: main (mandatory.cpp:141)
==384454== 
==384454== Invalid free() / delete / delete[] / realloc()
==384454==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384454==    by 0x4073E0: get_next_line (get_next_line.c:53)
==384454==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384454==    by 0x407183: main (mandatory.cpp:141)
==384454==  Address 0x5b5b040 is 0 bytes inside a block of size 10,000,001 free'd
==384454==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384454==    by 0x407614: ft_strjoin (get_next_line_utils.c:82)
==384454==    by 0x40738B: get_next_line (get_next_line.c:48)
==384454==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384454==    by 0x407183: main (mandatory.cpp:141)
==384454==  Block was alloc'd at
==384454==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384454==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384454==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384454==    by 0x407183: main (mandatory.cpp:141)
==384454== 
==384454== Invalid read of size 1
==384454==    at 0x407595: ft_strjoin (get_next_line_utils.c:68)
==384454==    by 0x40738B: get_next_line (get_next_line.c:48)
==384454==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384454==    by 0x407194: main (mandatory.cpp:141)
==384454==  Address 0x4de7551 is 1 bytes inside a block of size 88 free'd
==384454==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384454==    by 0x407705: f_search_bn (get_next_line_utils.c:119)
==384454==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384454==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384454==    by 0x407183: main (mandatory.cpp:141)
==384454==  Block was alloc'd at
==384454==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384454==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==384454==    by 0x40738B: get_next_line (get_next_line.c:48)
==384454==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384454==    by 0x407183: main (mandatory.cpp:141)
==384454== 
==384454== Invalid read of size 1
==384454==    at 0x407578: ft_strjoin (get_next_line_utils.c:70)
==384454==    by 0x40738B: get_next_line (get_next_line.c:48)
==384454==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384454==    by 0x407194: main (mandatory.cpp:141)
==384454==  Address 0x4de7551 is 1 bytes inside a block of size 88 free'd
==384454==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384454==    by 0x407705: f_search_bn (get_next_line_utils.c:119)
==384454==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384454==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384454==    by 0x407183: main (mandatory.cpp:141)
==384454==  Block was alloc'd at
==384454==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384454==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==384454==    by 0x40738B: get_next_line (get_next_line.c:48)
==384454==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384454==    by 0x407183: main (mandatory.cpp:141)
==384454== 
==384454== Invalid read of size 1
==384454==    at 0x407727: f_del_front_bn (get_next_line_utils.c:163)
==384454==    by 0x4073CD: get_next_line (get_next_line.c:52)
==384454==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384454==    by 0x407194: main (mandatory.cpp:141)
==384454==  Address 0x4de7640 is 0 bytes inside a block of size 87 free'd
==384454==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384454==    by 0x407705: f_search_bn (get_next_line_utils.c:119)
==384454==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384454==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384454==    by 0x407194: main (mandatory.cpp:141)
==384454==  Block was alloc'd at
==384454==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384454==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==384454==    by 0x40738B: get_next_line (get_next_line.c:48)
==384454==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384454==    by 0x407194: main (mandatory.cpp:141)
==384454== 
==384454== Invalid free() / delete / delete[] / realloc()
==384454==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384454==    by 0x4073E0: get_next_line (get_next_line.c:53)
==384454==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384454==    by 0x407194: main (mandatory.cpp:141)
==384454==  Address 0x51d1040 is 0 bytes inside a block of size 10,000,001 free'd
==384454==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384454==    by 0x407614: ft_strjoin (get_next_line_utils.c:82)
==384454==    by 0x40738B: get_next_line (get_next_line.c:48)
==384454==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384454==    by 0x407194: main (mandatory.cpp:141)
==384454==  Block was alloc'd at
==384454==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384454==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384454==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384454==    by 0x407194: main (mandatory.cpp:141)
==384454== 
==384454== Invalid read of size 1
==384454==    at 0x407595: ft_strjoin (get_next_line_utils.c:68)
==384454==    by 0x40738B: get_next_line (get_next_line.c:48)
==384454==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384454==    by 0x4071A5: main (mandatory.cpp:141)
==384454==  Address 0x4de766b is 43 bytes inside a block of size 87 free'd
==384454==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384454==    by 0x407705: f_search_bn (get_next_line_utils.c:119)
==384454==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384454==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384454==    by 0x407194: main (mandatory.cpp:141)
==384454==  Block was alloc'd at
==384454==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384454==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==384454==    by 0x40738B: get_next_line (get_next_line.c:48)
==384454==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384454==    by 0x407194: main (mandatory.cpp:141)
==384454== 
==384454== Invalid read of size 1
==384454==    at 0x407578: ft_strjoin (get_next_line_utils.c:70)
==384454==    by 0x40738B: get_next_line (get_next_line.c:48)
==384454==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384454==    by 0x4071A5: main (mandatory.cpp:141)
==384454==  Address 0x4de766b is 43 bytes inside a block of size 87 free'd
==384454==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384454==    by 0x407705: f_search_bn (get_next_line_utils.c:119)
==384454==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384454==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384454==    by 0x407194: main (mandatory.cpp:141)
==384454==  Block was alloc'd at
==384454==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384454==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==384454==    by 0x40738B: get_next_line (get_next_line.c:48)
==384454==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384454==    by 0x407194: main (mandatory.cpp:141)
==384454== 
==384454== Invalid read of size 1
==384454==    at 0x407727: f_del_front_bn (get_next_line_utils.c:163)
==384454==    by 0x4073CD: get_next_line (get_next_line.c:52)
==384454==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384454==    by 0x4071A5: main (mandatory.cpp:141)
==384454==  Address 0x4de7750 is 0 bytes inside a block of size 44 free'd
==384454==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384454==    by 0x407705: f_search_bn (get_next_line_utils.c:119)
==384454==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384454==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384454==    by 0x4071A5: main (mandatory.cpp:141)
==384454==  Block was alloc'd at
==384454==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384454==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==384454==    by 0x40738B: get_next_line (get_next_line.c:48)
==384454==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384454==    by 0x4071A5: main (mandatory.cpp:141)
==384454== 
==384454== Invalid free() / delete / delete[] / realloc()
==384454==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384454==    by 0x4073E0: get_next_line (get_next_line.c:53)
==384454==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384454==    by 0x4071A5: main (mandatory.cpp:141)
==384454==  Address 0x5b5b040 is 0 bytes inside a block of size 10,000,001 free'd
==384454==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384454==    by 0x407614: ft_strjoin (get_next_line_utils.c:82)
==384454==    by 0x40738B: get_next_line (get_next_line.c:48)
==384454==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384454==    by 0x4071A5: main (mandatory.cpp:141)
==384454==  Block was alloc'd at
==384454==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384454==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384454==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384454==    by 0x4071A5: main (mandatory.cpp:141)
==384454== 
==384454== Invalid read of size 1
==384454==    at 0x407595: ft_strjoin (get_next_line_utils.c:68)
==384454==    by 0x40738B: get_next_line (get_next_line.c:48)
==384454==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384454==    by 0x4071B6: main (mandatory.cpp:141)
==384454==  Address 0x4de7751 is 1 bytes inside a block of size 44 free'd
==384454==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384454==    by 0x407705: f_search_bn (get_next_line_utils.c:119)
==384454==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384454==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384454==    by 0x4071A5: main (mandatory.cpp:141)
==384454==  Block was alloc'd at
==384454==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384454==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==384454==    by 0x40738B: get_next_line (get_next_line.c:48)
==384454==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384454==    by 0x4071A5: main (mandatory.cpp:141)
==384454== 
==384454== Invalid read of size 1
==384454==    at 0x407578: ft_strjoin (get_next_line_utils.c:70)
==384454==    by 0x40738B: get_next_line (get_next_line.c:48)
==384454==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384454==    by 0x4071B6: main (mandatory.cpp:141)
==384454==  Address 0x4de7751 is 1 bytes inside a block of size 44 free'd
==384454==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384454==    by 0x407705: f_search_bn (get_next_line_utils.c:119)
==384454==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384454==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384454==    by 0x4071A5: main (mandatory.cpp:141)
==384454==  Block was alloc'd at
==384454==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384454==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==384454==    by 0x40738B: get_next_line (get_next_line.c:48)
==384454==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384454==    by 0x4071A5: main (mandatory.cpp:141)
==384454== 
==384454== Invalid read of size 1
==384454==    at 0x407727: f_del_front_bn (get_next_line_utils.c:163)
==384454==    by 0x4073CD: get_next_line (get_next_line.c:52)
==384454==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384454==    by 0x4071B6: main (mandatory.cpp:141)
==384454==  Address 0x4de7810 is 0 bytes inside a block of size 43 free'd
==384454==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384454==    by 0x407705: f_search_bn (get_next_line_utils.c:119)
==384454==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384454==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384454==    by 0x4071B6: main (mandatory.cpp:141)
==384454==  Block was alloc'd at
==384454==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384454==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==384454==    by 0x40738B: get_next_line (get_next_line.c:48)
==384454==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384454==    by 0x4071B6: main (mandatory.cpp:141)
==384454== 
==384454== Invalid free() / delete / delete[] / realloc()
==384454==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384454==    by 0x4073E0: get_next_line (get_next_line.c:53)
==384454==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384454==    by 0x4071B6: main (mandatory.cpp:141)
==384454==  Address 0x51d1040 is 0 bytes inside a block of size 10,000,001 free'd
==384454==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384454==    by 0x407614: ft_strjoin (get_next_line_utils.c:82)
==384454==    by 0x40738B: get_next_line (get_next_line.c:48)
==384454==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384454==    by 0x4071B6: main (mandatory.cpp:141)
==384454==  Block was alloc'd at
==384454==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384454==    by 0x4072FC: get_next_line (get_next_line.c:27)
==384454==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384454==    by 0x4071B6: main (mandatory.cpp:141)
==384454== 
==384454== Invalid read of size 1
==384454==    at 0x407595: ft_strjoin (get_next_line_utils.c:68)
==384454==    by 0x40738B: get_next_line (get_next_line.c:48)
==384454==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384454==    by 0x4071C1: main (mandatory.cpp:141)
==384454==  Address 0x4de783a is 42 bytes inside a block of size 43 free'd
==384454==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384454==    by 0x407705: f_search_bn (get_next_line_utils.c:119)
==384454==    by 0x4073BA: get_next_line (get_next_line.c:51)
==384454==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384454==    by 0x4071B6: main (mandatory.cpp:141)
==384454==  Block was alloc'd at
==384454==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==384454==    by 0x40753F: ft_strjoin (get_next_line_utils.c:64)
==384454==    by 0x40738B: get_next_line (get_next_line.c:48)
==384454==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==384454==    by 0x4071B6: main (mandatory.cpp:141)
==384454== 
