//
// Created by bender on 06/12/2021.
//

#ifndef FACTORY_PATTERN_CPP_INCLUDE_VIDEO_EXPORTERS_H_
#define FACTORY_PATTERN_CPP_INCLUDE_VIDEO_EXPORTERS_H_
#include "video_exporter_abstract.h"
//#include "spdlog/spdlog.h"
#include <iostream>

struct LossLessVideoExporter final : public VideoExporter {
  void PrepareExport(std::string_view data) override {
    std::cout << "Preparing video data for lossless export." << std::endl;
  }

  void DoExport(const std::filesystem::path &folder) override {
    std::cout << "Exporting video data in lossless format to {}." << folder << std::endl;
  }
};

struct H264BPVideoExporter final : public VideoExporter {
  void PrepareExport(std::string_view data) override {
    std::cout << "Preparing video data for H.264 (Baseline) export." << std::endl;
  }

  void DoExport(const std::filesystem::path &folder) override {
    std::cout << "Exporting video data in H.264 (Baseline) format to {}." << folder << std::endl;
  }
};

struct H264Hi422PVideoExporter final : public VideoExporter {
  void PrepareExport(std::string_view data) override {
    std::cout << "Preparing video data for H.264 (Hi422P) export." << std::endl;
  }

  void DoExport(const std::filesystem::path &folder) override {
    std::cout << "Exporting video data in H.264 (Hi422P) format to {}." << folder << std::endl;
  }
};


#endif//FACTORY_PATTERN_CPP_INCLUDE_VIDEO_EXPORTERS_H_
