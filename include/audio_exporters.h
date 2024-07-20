//
// Created by bender on 06/12/2021.
//

#ifndef FACTORY_PATTERN_CPP_INCLUDE_AUDIO_EXPORTERS_H_
#define FACTORY_PATTERN_CPP_INCLUDE_AUDIO_EXPORTERS_H_
#include "audio_exporter_abstract.h"
//#include "spdlog/spdlog.h"
#include <iostream>

struct AACAudioExporter final : public AudioExporter {
  void PrepareExport(std::string_view data) override {
    std::cout <<"Preparing audio data for AAC export." << std::endl;
  }

  void DoExport(const std::filesystem::path &folder) override {
    std::cout << "Exporting audio data in AAC format to {}." << folder << std::endl;
  }
};

struct WAVAudioExporter final : public AudioExporter {
  void PrepareExport(std::string_view data) override {
    std::cout <<"Preparing audio data for WAV export." << std::endl;
  }

  void DoExport(const std::filesystem::path &folder) override {
    std::cout <<"Exporting audio data WAV format to {}." << folder << std::endl;
  }
};

#endif//FACTORY_PATTERN_CPP_INCLUDE_AUDIO_EXPORTERS_H_
