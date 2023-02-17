==3436930== Invalid write of size 1
==3436930==    at 0x407994: f_ret (get_next_line_utils.c:187)
==3436930==    by 0x4072F1: get_next_line (get_next_line.c:30)
==3436930==    by 0x402CB6: gnl(int, char const*) (gnl.cpp:20)
==3436930==    by 0x404B86: main (mandatory.cpp:25)
==3436930==  Address 0x4dc329f is 1 bytes before a block of size 3 alloc'd
==3436930==    at 0x483B7F3: malloc (in /usr/lib/x86_64-linux-gnu/valgrind/vgpreload_memcheck-amd64-linux.so)
==3436930==    by 0x40794C: f_ret (get_next_line_utils.c:177)
==3436930==    by 0x4072F1: get_next_line (get_next_line.c:30)
==3436930==    by 0x402CB6: gnl(int, char const*) (gnl.cpp:20)
==3436930==    by 0x404B86: main (mandatory.cpp:25)
==3436930== 
==3436930== Invalid write of size 1
==3436930==    at 0x407994: f_ret (get_next_line_utils.c:187)
==3436930==    by 0x4072F1: get_next_line (get_next_line.c:30)
==3436930==    by 0x402CB6: gnl(int, char const*) (gnl.cpp:20)
==3436930==    by 0x404BA8: main (mandatory.cpp:25)
==3436930==  Address 0x4dc32ef is 1 bytes before a block of size 3 alloc'd
==3436930==    at 0x483B7F3: malloc (in /usr/lib/x86_64-linux-gnu/valgrind/vgpreload_memcheck-amd64-linux.so)
==3436930==    by 0x40794C: f_ret (get_next_line_utils.c:177)
==3436930==    by 0x4072F1: get_next_line (get_next_line.c:30)
==3436930==    by 0x402CB6: gnl(int, char const*) (gnl.cpp:20)
==3436930==    by 0x404BA8: main (mandatory.cpp:25)
==3436930== 
==3436930== 3 bytes in 1 blocks are definitely lost in loss record 1 of 2
==3436930==    at 0x483B7F3: malloc (in /usr/lib/x86_64-linux-gnu/valgrind/vgpreload_memcheck-amd64-linux.so)
==3436930==    by 0x40794C: f_ret (get_next_line_utils.c:177)
==3436930==    by 0x4072F1: get_next_line (get_next_line.c:30)
==3436930==    by 0x402CB6: gnl(int, char const*) (gnl.cpp:20)
==3436930==    by 0x404B86: main (mandatory.cpp:25)
==3436930== 
==3436930== 3 bytes in 1 blocks are definitely lost in loss record 2 of 2
==3436930==    at 0x483B7F3: malloc (in /usr/lib/x86_64-linux-gnu/valgrind/vgpreload_memcheck-amd64-linux.so)
==3436930==    by 0x40794C: f_ret (get_next_line_utils.c:177)
==3436930==    by 0x4072F1: get_next_line (get_next_line.c:30)
==3436930==    by 0x402CB6: gnl(int, char const*) (gnl.cpp:20)
==3436930==    by 0x404BA8: main (mandatory.cpp:25)
==3436930== 
==3436933== Invalid read of size 1
==3436933==    at 0x407334: ft_strchr (get_next_line.c:43)
==3436933==    by 0x4072C3: get_next_line (get_next_line.c:25)
==3436933==    by 0x402CB6: gnl(int, char const*) (gnl.cpp:20)
==3436933==    by 0x404E2F: main (mandatory.cpp:31)
==3436933==  Address 0x4dc4640 is 0 bytes inside a block of size 1 free'd
==3436933==    at 0x483CA3F: free (in /usr/lib/x86_64-linux-gnu/valgrind/vgpreload_memcheck-amd64-linux.so)
==3436933==    by 0x407A5C: f_ret (get_next_line_utils.c:207)
==3436933==    by 0x4072F1: get_next_line (get_next_line.c:30)
==3436933==    by 0x402CB6: gnl(int, char const*) (gnl.cpp:20)
==3436933==    by 0x404E23: main (mandatory.cpp:31)
==3436933==  Block was alloc'd at
==3436933==    at 0x483B7F3: malloc (in /usr/lib/x86_64-linux-gnu/valgrind/vgpreload_memcheck-amd64-linux.so)
==3436933==    by 0x40782D: ft_strdup2 (get_next_line_utils.c:128)
==3436933==    by 0x4079E8: f_ret (get_next_line_utils.c:195)
==3436933==    by 0x4072F1: get_next_line (get_next_line.c:30)
==3436933==    by 0x402CB6: gnl(int, char const*) (gnl.cpp:20)
==3436933==    by 0x404E23: main (mandatory.cpp:31)
==3436933== 
==3436933== Invalid read of size 1
==3436933==    at 0x4078B7: f_ret_zero (get_next_line_utils.c:148)
==3436933==    by 0x4079CB: f_ret (get_next_line_utils.c:191)
==3436933==    by 0x4072F1: get_next_line (get_next_line.c:30)
==3436933==    by 0x402CB6: gnl(int, char const*) (gnl.cpp:20)
==3436933==    by 0x404E2F: main (mandatory.cpp:31)
==3436933==  Address 0x4dc4640 is 0 bytes inside a block of size 1 free'd
==3436933==    at 0x483CA3F: free (in /usr/lib/x86_64-linux-gnu/valgrind/vgpreload_memcheck-amd64-linux.so)
==3436933==    by 0x407A5C: f_ret (get_next_line_utils.c:207)
==3436933==    by 0x4072F1: get_next_line (get_next_line.c:30)
==3436933==    by 0x402CB6: gnl(int, char const*) (gnl.cpp:20)
==3436933==    by 0x404E23: main (mandatory.cpp:31)
==3436933==  Block was alloc'd at
==3436933==    at 0x483B7F3: malloc (in /usr/lib/x86_64-linux-gnu/valgrind/vgpreload_memcheck-amd64-linux.so)
==3436933==    by 0x40782D: ft_strdup2 (get_next_line_utils.c:128)
==3436933==    by 0x4079E8: f_ret (get_next_line_utils.c:195)
==3436933==    by 0x4072F1: get_next_line (get_next_line.c:30)
==3436933==    by 0x402CB6: gnl(int, char const*) (gnl.cpp:20)
==3436933==    by 0x404E23: main (mandatory.cpp:31)
==3436933== 
==3436991== Invalid read of size 1
==3436991==    at 0x483FED4: strcmp (in /usr/lib/x86_64-linux-gnu/valgrind/vgpreload_memcheck-amd64-linux.so)
==3436991==    by 0x402CEA: gnl(int, char const*) (gnl.cpp:24)
==3436991==    by 0x4070EE: main (mandatory.cpp:141)
==3436991==  Address 0x0 is not stack'd, malloc'd or (recently) free'd
==3436991== 
==3437015== Invalid write of size 1
==3437015==    at 0x4079C6: f_ret (get_next_line_utils.c:187)
==3437015==    by 0x407323: get_next_line (get_next_line.c:30)
==3437015==    by 0x402CB6: gnl(int, char const*) (gnl.cpp:20)
==3437015==    by 0x404B86: main (mandatory.cpp:25)
==3437015==  Address 0x4dc329f is 1 bytes before a block of size 44 alloc'd
==3437015==    at 0x483B7F3: malloc (in /usr/lib/x86_64-linux-gnu/valgrind/vgpreload_memcheck-amd64-linux.so)
==3437015==    by 0x40797E: f_ret (get_next_line_utils.c:177)
==3437015==    by 0x407323: get_next_line (get_next_line.c:30)
==3437015==    by 0x402CB6: gnl(int, char const*) (gnl.cpp:20)
==3437015==    by 0x404B86: main (mandatory.cpp:25)
==3437015== 
==3437015== Invalid write of size 1
==3437015==    at 0x4079C6: f_ret (get_next_line_utils.c:187)
==3437015==    by 0x407323: get_next_line (get_next_line.c:30)
==3437015==    by 0x402CB6: gnl(int, char const*) (gnl.cpp:20)
==3437015==    by 0x404BA8: main (mandatory.cpp:25)
==3437015==  Address 0x4dc330f is 1 bytes before a block of size 44 alloc'd
==3437015==    at 0x483B7F3: malloc (in /usr/lib/x86_64-linux-gnu/valgrind/vgpreload_memcheck-amd64-linux.so)
==3437015==    by 0x40797E: f_ret (get_next_line_utils.c:177)
==3437015==    by 0x407323: get_next_line (get_next_line.c:30)
==3437015==    by 0x402CB6: gnl(int, char const*) (gnl.cpp:20)
==3437015==    by 0x404BA8: main (mandatory.cpp:25)
==3437015== 
==3437015== 44 bytes in 1 blocks are definitely lost in loss record 1 of 2
==3437015==    at 0x483B7F3: malloc (in /usr/lib/x86_64-linux-gnu/valgrind/vgpreload_memcheck-amd64-linux.so)
==3437015==    by 0x40797E: f_ret (get_next_line_utils.c:177)
==3437015==    by 0x407323: get_next_line (get_next_line.c:30)
==3437015==    by 0x402CB6: gnl(int, char const*) (gnl.cpp:20)
==3437015==    by 0x404B86: main (mandatory.cpp:25)
==3437015== 
==3437015== 44 bytes in 1 blocks are definitely lost in loss record 2 of 2
==3437015==    at 0x483B7F3: malloc (in /usr/lib/x86_64-linux-gnu/valgrind/vgpreload_memcheck-amd64-linux.so)
==3437015==    by 0x40797E: f_ret (get_next_line_utils.c:177)
==3437015==    by 0x407323: get_next_line (get_next_line.c:30)
==3437015==    by 0x402CB6: gnl(int, char const*) (gnl.cpp:20)
==3437015==    by 0x404BA8: main (mandatory.cpp:25)
==3437015== 
==3437018== Invalid read of size 1
==3437018==    at 0x407366: ft_strchr (get_next_line.c:43)
==3437018==    by 0x4072F5: get_next_line (get_next_line.c:25)
==3437018==    by 0x402CB6: gnl(int, char const*) (gnl.cpp:20)
==3437018==    by 0x404E2F: main (mandatory.cpp:31)
==3437018==  Address 0x4dc4660 is 0 bytes inside a block of size 1 free'd
==3437018==    at 0x483CA3F: free (in /usr/lib/x86_64-linux-gnu/valgrind/vgpreload_memcheck-amd64-linux.so)
==3437018==    by 0x407A8E: f_ret (get_next_line_utils.c:207)
==3437018==    by 0x407323: get_next_line (get_next_line.c:30)
==3437018==    by 0x402CB6: gnl(int, char const*) (gnl.cpp:20)
==3437018==    by 0x404E23: main (mandatory.cpp:31)
==3437018==  Block was alloc'd at
==3437018==    at 0x483B7F3: malloc (in /usr/lib/x86_64-linux-gnu/valgrind/vgpreload_memcheck-amd64-linux.so)
==3437018==    by 0x40785F: ft_strdup2 (get_next_line_utils.c:128)
==3437018==    by 0x407A1A: f_ret (get_next_line_utils.c:195)
==3437018==    by 0x407323: get_next_line (get_next_line.c:30)
==3437018==    by 0x402CB6: gnl(int, char const*) (gnl.cpp:20)
==3437018==    by 0x404E23: main (mandatory.cpp:31)
==3437018== 
==3437018== Invalid read of size 1
==3437018==    at 0x4078E9: f_ret_zero (get_next_line_utils.c:148)
==3437018==    by 0x4079FD: f_ret (get_next_line_utils.c:191)
==3437018==    by 0x407323: get_next_line (get_next_line.c:30)
==3437018==    by 0x402CB6: gnl(int, char const*) (gnl.cpp:20)
==3437018==    by 0x404E2F: main (mandatory.cpp:31)
==3437018==  Address 0x4dc4660 is 0 bytes inside a block of size 1 free'd
==3437018==    at 0x483CA3F: free (in /usr/lib/x86_64-linux-gnu/valgrind/vgpreload_memcheck-amd64-linux.so)
==3437018==    by 0x407A8E: f_ret (get_next_line_utils.c:207)
==3437018==    by 0x407323: get_next_line (get_next_line.c:30)
==3437018==    by 0x402CB6: gnl(int, char const*) (gnl.cpp:20)
==3437018==    by 0x404E23: main (mandatory.cpp:31)
==3437018==  Block was alloc'd at
==3437018==    at 0x483B7F3: malloc (in /usr/lib/x86_64-linux-gnu/valgrind/vgpreload_memcheck-amd64-linux.so)
==3437018==    by 0x40785F: ft_strdup2 (get_next_line_utils.c:128)
==3437018==    by 0x407A1A: f_ret (get_next_line_utils.c:195)
==3437018==    by 0x407323: get_next_line (get_next_line.c:30)
==3437018==    by 0x402CB6: gnl(int, char const*) (gnl.cpp:20)
==3437018==    by 0x404E23: main (mandatory.cpp:31)
==3437018== 
==3437091== Invalid read of size 1
==3437091==    at 0x483FED4: strcmp (in /usr/lib/x86_64-linux-gnu/valgrind/vgpreload_memcheck-amd64-linux.so)
==3437091==    by 0x402CEA: gnl(int, char const*) (gnl.cpp:24)
==3437091==    by 0x407120: main (mandatory.cpp:141)
==3437091==  Address 0x0 is not stack'd, malloc'd or (recently) free'd
==3437091== 
==3437116== Invalid write of size 1
==3437116==    at 0x407994: f_ret (get_next_line_utils.c:187)
==3437116==    by 0x4072F1: get_next_line (get_next_line.c:30)
==3437116==    by 0x402CB6: gnl(int, char const*) (gnl.cpp:20)
==3437116==    by 0x404B86: main (mandatory.cpp:25)
==3437116==  Address 0x51b103f is 1 bytes before a block of size 10,000,002 alloc'd
==3437116==    at 0x483B7F3: malloc (in /usr/lib/x86_64-linux-gnu/valgrind/vgpreload_memcheck-amd64-linux.so)
==3437116==    by 0x40794C: f_ret (get_next_line_utils.c:177)
==3437116==    by 0x4072F1: get_next_line (get_next_line.c:30)
==3437116==    by 0x402CB6: gnl(int, char const*) (gnl.cpp:20)
==3437116==    by 0x404B86: main (mandatory.cpp:25)
==3437116== 
==3437116== Invalid write of size 1
==3437116==    at 0x407994: f_ret (get_next_line_utils.c:187)
==3437116==    by 0x4072F1: get_next_line (get_next_line.c:30)
==3437116==    by 0x402CB6: gnl(int, char const*) (gnl.cpp:20)
==3437116==    by 0x404BA8: main (mandatory.cpp:25)
==3437116==  Address 0x5b3b03f is 1 bytes before a block of size 10,000,002 alloc'd
==3437116==    at 0x483B7F3: malloc (in /usr/lib/x86_64-linux-gnu/valgrind/vgpreload_memcheck-amd64-linux.so)
==3437116==    by 0x40794C: f_ret (get_next_line_utils.c:177)
==3437116==    by 0x4072F1: get_next_line (get_next_line.c:30)
==3437116==    by 0x402CB6: gnl(int, char const*) (gnl.cpp:20)
==3437116==    by 0x404BA8: main (mandatory.cpp:25)
==3437116== 
==3437116== 10,000,002 bytes in 1 blocks are possibly lost in loss record 1 of 2
==3437116==    at 0x483B7F3: malloc (in /usr/lib/x86_64-linux-gnu/valgrind/vgpreload_memcheck-amd64-linux.so)
==3437116==    by 0x40794C: f_ret (get_next_line_utils.c:177)
==3437116==    by 0x4072F1: get_next_line (get_next_line.c:30)
==3437116==    by 0x402CB6: gnl(int, char const*) (gnl.cpp:20)
==3437116==    by 0x404B86: main (mandatory.cpp:25)
==3437116== 
==3437116== 10,000,002 bytes in 1 blocks are possibly lost in loss record 2 of 2
==3437116==    at 0x483B7F3: malloc (in /usr/lib/x86_64-linux-gnu/valgrind/vgpreload_memcheck-amd64-linux.so)
==3437116==    by 0x40794C: f_ret (get_next_line_utils.c:177)
==3437116==    by 0x4072F1: get_next_line (get_next_line.c:30)
==3437116==    by 0x402CB6: gnl(int, char const*) (gnl.cpp:20)
==3437116==    by 0x404BA8: main (mandatory.cpp:25)
==3437116== 
==3437120== Invalid read of size 1
==3437120==    at 0x407334: ft_strchr (get_next_line.c:43)
==3437120==    by 0x4072C3: get_next_line (get_next_line.c:25)
==3437120==    by 0x402CB6: gnl(int, char const*) (gnl.cpp:20)
==3437120==    by 0x404E2F: main (mandatory.cpp:31)
==3437120==  Address 0x4dc4610 is 0 bytes inside a block of size 1 free'd
==3437120==    at 0x483CA3F: free (in /usr/lib/x86_64-linux-gnu/valgrind/vgpreload_memcheck-amd64-linux.so)
==3437120==    by 0x407A5C: f_ret (get_next_line_utils.c:207)
==3437120==    by 0x4072F1: get_next_line (get_next_line.c:30)
==3437120==    by 0x402CB6: gnl(int, char const*) (gnl.cpp:20)
==3437120==    by 0x404E23: main (mandatory.cpp:31)
==3437120==  Block was alloc'd at
==3437120==    at 0x483B7F3: malloc (in /usr/lib/x86_64-linux-gnu/valgrind/vgpreload_memcheck-amd64-linux.so)
==3437120==    by 0x40782D: ft_strdup2 (get_next_line_utils.c:128)
==3437120==    by 0x4079E8: f_ret (get_next_line_utils.c:195)
==3437120==    by 0x4072F1: get_next_line (get_next_line.c:30)
==3437120==    by 0x402CB6: gnl(int, char const*) (gnl.cpp:20)
==3437120==    by 0x404E23: main (mandatory.cpp:31)
==3437120== 
==3437120== Invalid read of size 1
==3437120==    at 0x4078B7: f_ret_zero (get_next_line_utils.c:148)
==3437120==    by 0x4079CB: f_ret (get_next_line_utils.c:191)
==3437120==    by 0x4072F1: get_next_line (get_next_line.c:30)
==3437120==    by 0x402CB6: gnl(int, char const*) (gnl.cpp:20)
==3437120==    by 0x404E2F: main (mandatory.cpp:31)
==3437120==  Address 0x4dc4610 is 0 bytes inside a block of size 1 free'd
==3437120==    at 0x483CA3F: free (in /usr/lib/x86_64-linux-gnu/valgrind/vgpreload_memcheck-amd64-linux.so)
==3437120==    by 0x407A5C: f_ret (get_next_line_utils.c:207)
==3437120==    by 0x4072F1: get_next_line (get_next_line.c:30)
==3437120==    by 0x402CB6: gnl(int, char const*) (gnl.cpp:20)
==3437120==    by 0x404E23: main (mandatory.cpp:31)
==3437120==  Block was alloc'd at
==3437120==    at 0x483B7F3: malloc (in /usr/lib/x86_64-linux-gnu/valgrind/vgpreload_memcheck-amd64-linux.so)
==3437120==    by 0x40782D: ft_strdup2 (get_next_line_utils.c:128)
==3437120==    by 0x4079E8: f_ret (get_next_line_utils.c:195)
==3437120==    by 0x4072F1: get_next_line (get_next_line.c:30)
==3437120==    by 0x402CB6: gnl(int, char const*) (gnl.cpp:20)
==3437120==    by 0x404E23: main (mandatory.cpp:31)
==3437120== 
==3437168== Invalid read of size 1
==3437168==    at 0x483FED4: strcmp (in /usr/lib/x86_64-linux-gnu/valgrind/vgpreload_memcheck-amd64-linux.so)
==3437168==    by 0x402CEA: gnl(int, char const*) (gnl.cpp:24)
==3437168==    by 0x4070EE: main (mandatory.cpp:141)
==3437168==  Address 0x0 is not stack'd, malloc'd or (recently) free'd
==3437168== 
