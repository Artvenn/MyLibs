#include <iostream>
#include <fstream>

// #include "./external/MyLibs/Str/include/Str.h"
// #include "./external/MyLibs/Arr/Arr.h"
// #include "./external/MyLibs/Shared/System.h"

// ml::Str read_file(const char* path);
// void write_file(const char* path, ml::Str data);

// const char* BRIDGES_LINK = "https://raw.githubusercontent.com/Artvenn/br/main/bridges";
// const char* TORRC_FILEPATH = "/etc/tor/torrc";
// const char* BRIDGES_FILEPATH = "/home/user/br_f/bridges";
// const char* USER_ID_FILEPATH = "/home/user/br_f/user_id";
// const char* BLOCK_SPLITTER = "##############################";
// const char* BRIDGES_START_MARK = "###bridges_start###";

int main() {
    std::cout << "Hello world" << std::endl;
    // ml::Str user_id = read_file(USER_ID_FILEPATH);
    // remove(BRIDGES_FILEPATH);
    // ml::Sys::exec(ml::Str("wget -O ") + BRIDGES_FILEPATH + " " +  ml::Str(BRIDGES_LINK));
    // ml::Str bridges_text = read_file(BRIDGES_FILEPATH);
    // auto bridge_blocs = bridges_text.split(ml::Str(BLOCK_SPLITTER));
    // i32 finded_user_index = bridge_blocs.first_where([user_id] (ml::Str el) -> bool {
    //     return el.starts_with(user_id);
    // });
    // if (finded_user_index == -1) {
    //     std::cerr << "User with id: " << user_id 
    //     << ", is not in bridges file" << std::endl;
    //     exit(-1);
    // }
    // auto bridge_rows = bridge_blocs[finded_user_index].split('\n');
    // bridge_rows.unshift();
    // auto bridges = bridge_rows.join('\n');
    // auto torrc_rows = read_file(TORRC_FILEPATH).split('\n')
    //     .filter([] (ml::Str el) -> bool {
    //         return !el.starts_with("Bridge");
    //     });

    // auto bridge_mark_index = torrc_rows.first_where([] (auto el) -> bool {
    //     return el == BRIDGES_START_MARK;
    // });
    // if (bridge_mark_index == -1) {
    //     std::cerr << "Fatal error:\t bridge start mark: " << BRIDGES_START_MARK 
    //     << "; is not found in file: " << TORRC_FILEPATH << std::endl;
    //     exit(-1);
    // }
    // torrc_rows.insert(bridge_mark_index+1, bridges);
    // auto torrc_ready = torrc_rows.join('\n');
    // write_file(TORRC_FILEPATH, torrc_ready);

    return 0;
}