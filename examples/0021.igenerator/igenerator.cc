#include"../../include/fast_io.h"
#include"../../include/fast_io_device.h"
#include"../../include/fast_io_legacy.h"
int main()
{
	fast_io::ibuf_file ibf("a.txt");

	for(auto const & e : igenerator(ibf))
		put(fast_io::c_stdout,e);
}