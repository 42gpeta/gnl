==334821== Invalid write of size 1
==334821==    at 0x4079E4: f_ret (get_next_line_utils.c:338)
==334821==    by 0x407331: get_next_line (get_next_line.c:30)
==334821==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==334821==    by 0x404BC6: main (mandatory.cpp:25)
==334821==  Address 0x4de329f is 1 bytes before a block of size 2 alloc'd
==334821==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==334821==    by 0x40799B: f_ret (get_next_line_utils.c:329)
==334821==    by 0x407331: get_next_line (get_next_line.c:30)
==334821==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==334821==    by 0x404BC6: main (mandatory.cpp:25)
==334821== 
==334821== Invalid write of size 1
==334821==    at 0x4079E4: f_ret (get_next_line_utils.c:338)
==334821==    by 0x407331: get_next_line (get_next_line.c:30)
==334821==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==334821==    by 0x404BE8: main (mandatory.cpp:25)
==334821==  Address 0x4de32ef is 1 bytes before a block of size 2 alloc'd
==334821==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==334821==    by 0x40799B: f_ret (get_next_line_utils.c:329)
==334821==    by 0x407331: get_next_line (get_next_line.c:30)
==334821==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==334821==    by 0x404BE8: main (mandatory.cpp:25)
==334821== 
==334821== 2 bytes in 1 blocks are definitely lost in loss record 1 of 2
==334821==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==334821==    by 0x40799B: f_ret (get_next_line_utils.c:329)
==334821==    by 0x407331: get_next_line (get_next_line.c:30)
==334821==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==334821==    by 0x404BC6: main (mandatory.cpp:25)
==334821== 
==334821== 2 bytes in 1 blocks are definitely lost in loss record 2 of 2
==334821==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==334821==    by 0x40799B: f_ret (get_next_line_utils.c:329)
==334821==    by 0x407331: get_next_line (get_next_line.c:30)
==334821==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==334821==    by 0x404BE8: main (mandatory.cpp:25)
==334821== 
==334826== Invalid read of size 1
==334826==    at 0x407374: ft_strchr (get_next_line.c:43)
==334826==    by 0x407303: get_next_line (get_next_line.c:25)
==334826==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==334826==    by 0x404E6F: main (mandatory.cpp:31)
==334826==  Address 0x4de4640 is 0 bytes inside a block of size 1 free'd
==334826==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==334826==    by 0x407AEE: f_free (get_next_line_utils.c:358)
==334826==    by 0x407AB0: f_ret (get_next_line_utils.c:353)
==334826==    by 0x407331: get_next_line (get_next_line.c:30)
==334826==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==334826==    by 0x404E63: main (mandatory.cpp:31)
==334826==  Block was alloc'd at
==334826==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==334826==    by 0x40786D: ft_strdup2 (get_next_line_utils.c:128)
==334826==    by 0x407A38: f_ret (get_next_line_utils.c:346)
==334826==    by 0x407331: get_next_line (get_next_line.c:30)
==334826==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==334826==    by 0x404E63: main (mandatory.cpp:31)
==334826== 
==334826== Invalid read of size 1
==334826==    at 0x4078F7: f_ret_zero (get_next_line_utils.c:148)
==334826==    by 0x407A1B: f_ret (get_next_line_utils.c:342)
==334826==    by 0x407331: get_next_line (get_next_line.c:30)
==334826==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==334826==    by 0x404E6F: main (mandatory.cpp:31)
==334826==  Address 0x4de4640 is 0 bytes inside a block of size 1 free'd
==334826==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==334826==    by 0x407AEE: f_free (get_next_line_utils.c:358)
==334826==    by 0x407AB0: f_ret (get_next_line_utils.c:353)
==334826==    by 0x407331: get_next_line (get_next_line.c:30)
==334826==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==334826==    by 0x404E63: main (mandatory.cpp:31)
==334826==  Block was alloc'd at
==334826==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==334826==    by 0x40786D: ft_strdup2 (get_next_line_utils.c:128)
==334826==    by 0x407A38: f_ret (get_next_line_utils.c:346)
==334826==    by 0x407331: get_next_line (get_next_line.c:30)
==334826==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==334826==    by 0x404E63: main (mandatory.cpp:31)
==334826== 
==334872== Invalid read of size 1
==334872==    at 0x484FBD4: strcmp (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==334872==    by 0x402D0A: gnl(int, char const*) (gnl.cpp:24)
==334872==    by 0x40712E: main (mandatory.cpp:141)
==334872==  Address 0x0 is not stack'd, malloc'd or (recently) free'd
==334872== 
==334895== Invalid write of size 1
==334895==    at 0x407A16: f_ret (get_next_line_utils.c:338)
==334895==    by 0x407363: get_next_line (get_next_line.c:30)
==334895==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==334895==    by 0x404BC6: main (mandatory.cpp:25)
==334895==  Address 0x4de329f is 1 bytes before a block of size 43 alloc'd
==334895==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==334895==    by 0x4079CD: f_ret (get_next_line_utils.c:329)
==334895==    by 0x407363: get_next_line (get_next_line.c:30)
==334895==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==334895==    by 0x404BC6: main (mandatory.cpp:25)
==334895== 
==334895== Invalid write of size 1
==334895==    at 0x407A16: f_ret (get_next_line_utils.c:338)
==334895==    by 0x407363: get_next_line (get_next_line.c:30)
==334895==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==334895==    by 0x404BE8: main (mandatory.cpp:25)
==334895==  Address 0x4de330f is 1 bytes before a block of size 43 alloc'd
==334895==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==334895==    by 0x4079CD: f_ret (get_next_line_utils.c:329)
==334895==    by 0x407363: get_next_line (get_next_line.c:30)
==334895==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==334895==    by 0x404BE8: main (mandatory.cpp:25)
==334895== 
==334895== 43 bytes in 1 blocks are definitely lost in loss record 1 of 2
==334895==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==334895==    by 0x4079CD: f_ret (get_next_line_utils.c:329)
==334895==    by 0x407363: get_next_line (get_next_line.c:30)
==334895==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==334895==    by 0x404BC6: main (mandatory.cpp:25)
==334895== 
==334895== 43 bytes in 1 blocks are definitely lost in loss record 2 of 2
==334895==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==334895==    by 0x4079CD: f_ret (get_next_line_utils.c:329)
==334895==    by 0x407363: get_next_line (get_next_line.c:30)
==334895==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==334895==    by 0x404BE8: main (mandatory.cpp:25)
==334895== 
==334900== Invalid read of size 1
==334900==    at 0x4073A6: ft_strchr (get_next_line.c:43)
==334900==    by 0x407335: get_next_line (get_next_line.c:25)
==334900==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==334900==    by 0x404E6F: main (mandatory.cpp:31)
==334900==  Address 0x4de4660 is 0 bytes inside a block of size 1 free'd
==334900==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==334900==    by 0x407B20: f_free (get_next_line_utils.c:358)
==334900==    by 0x407AE2: f_ret (get_next_line_utils.c:353)
==334900==    by 0x407363: get_next_line (get_next_line.c:30)
==334900==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==334900==    by 0x404E63: main (mandatory.cpp:31)
==334900==  Block was alloc'd at
==334900==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==334900==    by 0x40789F: ft_strdup2 (get_next_line_utils.c:128)
==334900==    by 0x407A6A: f_ret (get_next_line_utils.c:346)
==334900==    by 0x407363: get_next_line (get_next_line.c:30)
==334900==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==334900==    by 0x404E63: main (mandatory.cpp:31)
==334900== 
==334900== Invalid read of size 1
==334900==    at 0x407929: f_ret_zero (get_next_line_utils.c:148)
==334900==    by 0x407A4D: f_ret (get_next_line_utils.c:342)
==334900==    by 0x407363: get_next_line (get_next_line.c:30)
==334900==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==334900==    by 0x404E6F: main (mandatory.cpp:31)
==334900==  Address 0x4de4660 is 0 bytes inside a block of size 1 free'd
==334900==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==334900==    by 0x407B20: f_free (get_next_line_utils.c:358)
==334900==    by 0x407AE2: f_ret (get_next_line_utils.c:353)
==334900==    by 0x407363: get_next_line (get_next_line.c:30)
==334900==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==334900==    by 0x404E63: main (mandatory.cpp:31)
==334900==  Block was alloc'd at
==334900==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==334900==    by 0x40789F: ft_strdup2 (get_next_line_utils.c:128)
==334900==    by 0x407A6A: f_ret (get_next_line_utils.c:346)
==334900==    by 0x407363: get_next_line (get_next_line.c:30)
==334900==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==334900==    by 0x404E63: main (mandatory.cpp:31)
==334900== 
==334942== Invalid read of size 1
==334942==    at 0x484FBD4: strcmp (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==334942==    by 0x402D0A: gnl(int, char const*) (gnl.cpp:24)
==334942==    by 0x407160: main (mandatory.cpp:141)
==334942==  Address 0x0 is not stack'd, malloc'd or (recently) free'd
==334942== 
==334966== Invalid write of size 1
==334966==    at 0x4079E4: f_ret (get_next_line_utils.c:338)
==334966==    by 0x407331: get_next_line (get_next_line.c:30)
==334966==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==334966==    by 0x404BC6: main (mandatory.cpp:25)
==334966==  Address 0x51d103f is 1 bytes before a block of size 10,000,001 alloc'd
==334966==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==334966==    by 0x40799B: f_ret (get_next_line_utils.c:329)
==334966==    by 0x407331: get_next_line (get_next_line.c:30)
==334966==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==334966==    by 0x404BC6: main (mandatory.cpp:25)
==334966== 
==334966== Invalid write of size 1
==334966==    at 0x4079E4: f_ret (get_next_line_utils.c:338)
==334966==    by 0x407331: get_next_line (get_next_line.c:30)
==334966==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==334966==    by 0x404BE8: main (mandatory.cpp:25)
==334966==  Address 0x5b5b03f is 1 bytes before a block of size 10,000,001 alloc'd
==334966==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==334966==    by 0x40799B: f_ret (get_next_line_utils.c:329)
==334966==    by 0x407331: get_next_line (get_next_line.c:30)
==334966==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==334966==    by 0x404BE8: main (mandatory.cpp:25)
==334966== 
==334966== 10,000,001 bytes in 1 blocks are possibly lost in loss record 1 of 2
==334966==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==334966==    by 0x40799B: f_ret (get_next_line_utils.c:329)
==334966==    by 0x407331: get_next_line (get_next_line.c:30)
==334966==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==334966==    by 0x404BC6: main (mandatory.cpp:25)
==334966== 
==334966== 10,000,001 bytes in 1 blocks are definitely lost in loss record 2 of 2
==334966==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==334966==    by 0x40799B: f_ret (get_next_line_utils.c:329)
==334966==    by 0x407331: get_next_line (get_next_line.c:30)
==334966==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==334966==    by 0x404BE8: main (mandatory.cpp:25)
==334966== 
==334973== Invalid read of size 1
==334973==    at 0x407374: ft_strchr (get_next_line.c:43)
==334973==    by 0x407303: get_next_line (get_next_line.c:25)
==334973==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==334973==    by 0x404E6F: main (mandatory.cpp:31)
==334973==  Address 0x4de4610 is 0 bytes inside a block of size 1 free'd
==334973==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==334973==    by 0x407AEE: f_free (get_next_line_utils.c:358)
==334973==    by 0x407AB0: f_ret (get_next_line_utils.c:353)
==334973==    by 0x407331: get_next_line (get_next_line.c:30)
==334973==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==334973==    by 0x404E63: main (mandatory.cpp:31)
==334973==  Block was alloc'd at
==334973==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==334973==    by 0x40786D: ft_strdup2 (get_next_line_utils.c:128)
==334973==    by 0x407A38: f_ret (get_next_line_utils.c:346)
==334973==    by 0x407331: get_next_line (get_next_line.c:30)
==334973==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==334973==    by 0x404E63: main (mandatory.cpp:31)
==334973== 
==334973== Invalid read of size 1
==334973==    at 0x4078F7: f_ret_zero (get_next_line_utils.c:148)
==334973==    by 0x407A1B: f_ret (get_next_line_utils.c:342)
==334973==    by 0x407331: get_next_line (get_next_line.c:30)
==334973==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==334973==    by 0x404E6F: main (mandatory.cpp:31)
==334973==  Address 0x4de4610 is 0 bytes inside a block of size 1 free'd
==334973==    at 0x484B27F: free (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==334973==    by 0x407AEE: f_free (get_next_line_utils.c:358)
==334973==    by 0x407AB0: f_ret (get_next_line_utils.c:353)
==334973==    by 0x407331: get_next_line (get_next_line.c:30)
==334973==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==334973==    by 0x404E63: main (mandatory.cpp:31)
==334973==  Block was alloc'd at
==334973==    at 0x4848899: malloc (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==334973==    by 0x40786D: ft_strdup2 (get_next_line_utils.c:128)
==334973==    by 0x407A38: f_ret (get_next_line_utils.c:346)
==334973==    by 0x407331: get_next_line (get_next_line.c:30)
==334973==    by 0x402CD6: gnl(int, char const*) (gnl.cpp:20)
==334973==    by 0x404E63: main (mandatory.cpp:31)
==334973== 
==335015== Invalid read of size 1
==335015==    at 0x484FBD4: strcmp (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==335015==    by 0x402D0A: gnl(int, char const*) (gnl.cpp:24)
==335015==    by 0x40712E: main (mandatory.cpp:141)
==335015==  Address 0x0 is not stack'd, malloc'd or (recently) free'd
==335015== 
