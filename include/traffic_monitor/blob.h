// (c) 2017 Vigilatore

#ifndef INCLUDE_TRAFFIC_MONITOR_DRAWER_BLOB_H_
#define INCLUDE_TRAFFIC_MONITOR_DRAWER_BLOB_H_

#include <cmath>

#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>

#include <glog/logging.h>

class Blob {
 public:
 // todo make the name of those variables shorter
  std::vector<cv::Point> curr_contour_;

  cv::Rect curr_bounding_rect_;

  std::vector<cv::Point> center_positions_;

  double curr_diagonal_size_;
  double curr_aspect_ratio_;

  bool curr_match_found_or_newblob_;

  bool still_being_tracked_;

  int num_consecutive_frames_without_match_;

  cv::Point predicted_next_position_;

  Blob(std::vector<cv::Point> _contour);
  void PredictNextPosition();
};

#endif  // INCLUDE_TRAFFIC_MONITOR_DRAWER_BLOB_H_
