    // auto currentTime = std::chrono::system_clock::now();
    // auto timepoint = std::chrono::system_clock::to_time_t(currentTime);
    // std::tm* timeinfo = std::localtime(&timepoint);

    // // Calculate the milliseconds part
    // int milliseconds = std::chrono::duration_cast<std::chrono::milliseconds>(currentTime.time_since_epoch()).count() % 1000;

    // // Reuse the ostringstream for efficiency
    // ostringstream oss;
    // oss << put_time(timeinfo, "%Y%m%d-%H%M%S") << "." << setfill('0') << setw(3) << milliseconds;