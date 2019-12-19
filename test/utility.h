//
// Created by cpasjuste on 10/12/2019.
//

#ifndef SSCRAP_UTILITY_H
#define SSCRAP_UTILITY_H

#include <string>
#include <vector>
#include <ss_game.h>
#include "hashlibpp/hashlibpp.h"

class Utility {
public:

    struct ZipInfo {
        std::string name;
        std::string size;
        std::string serial;
        std::string crc;
        std::string md5;
        std::string sha1;
    };

    static int parseInt(const std::string &str, int defValue = 0);

    static std::string getExt(const std::string &file);

    static std::string getZipCrc(const std::string &zipPath);

    static std::string getRomCrc(const std::string &zipPath, std::vector<std::string> whiteList = {});

    static ZipInfo getZipInfo(hashwrapper *md5Wrapper, hashwrapper *sha1Wrapper,
                              const std::string &path, const std::string &file);

    static std::string getZipInfoStr(hashwrapper *md5Wrapper, hashwrapper *sha1Wrapper,
                                     const std::string &path, const std::string &file);

    static void replace(std::string &str, const std::string &from, const std::string &to);

    static void printGame(const ss_api::Game &game);
};

#endif //SSCRAP_UTILITY_H
