#include <iostream>
#include <fstream>

int replace(std::string outfile_name, std::string last, std::string current, std::string cpy)
{
    std::ofstream outfile;
    size_t pos;
    size_t i;

    outfile.open((outfile_name + ".replace").c_str());
    if (outfile.fail())
        return (1);

    i = 0;
    while (i < cpy.size())
    {
        pos = cpy.find(last, i);
        if (pos != std::string::npos)
        {
            outfile << current;
            i = pos + last.size();
        }
        else
        {
            outfile << cpy[i];
            i++;
        }
    }
    outfile.close();
    return (0);
}

int main(int argc, char **argv)
{
	char			c;
	std::ifstream	infile;
	std::string		cpy;

	if (argc != 4)
	{
		std::cout << "Usage:\t./replace <file_name> <search> <replace>." << std::endl;
		return (1);
	}
	infile.open(argv[1]);
	if (infile.fail())
	{
		std::cout << "Error:\tno such file or directory." << std::endl;
		return (1);
	}
	while (!infile.eof() && infile >> std::noskipws >> c)
		cpy += c;
	infile.close();
	return (replace(argv[1], argv[2], argv[3], cpy));
}