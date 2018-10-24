#include <iostream>
#include <unordered_map>

#include <node.h>
#include <v8.h>

void init(v8::Local<v8::Object> exports) {
  std::cout << "Constructing std::unordered_map..." << std::endl;
  auto map = std::unordered_map<int, int>();
  std::cout << "std::unordered_map's size is " << map.size() << std::endl;
  std::cout << "Inserting into std::unordered_map" << std::endl;
  map[0] = 1;
  std::cout << "std::unordered_map's size is " << map.size() << std::endl;
}

NODE_MODULE(node_addon_unordered_map, init)
