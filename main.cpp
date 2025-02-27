#include <fstream>

class StreamParser {
public:
  StreamParser(std::istream &stream) : stream_buffer(stream) {}

private:
  class StreamBuffer {
  private:
    static constexpr ::size_t N = 1024;

  public:
    StreamBuffer(std::istream &stream) : stream_(stream) {}

  private:
    std::istream &stream_;
    char buffer_[N * N];
  };
  StreamBuffer stream_buffer;
};

class Reader {
public:
  Reader(const std::string, int) {
    std::ifstream file;
    throw 42;
    StreamParser parser(file);
  }
};

int main() { auto reader = Reader("file", 1); }