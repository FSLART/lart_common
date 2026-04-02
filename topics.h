// Perception
#define TOPIC_ZED_LEFT_IMAGE_COMPRESSED "/zed/left/image_raw/compressed" // sensor_msgs/msg/CompressedImage
#define TOPIC_ZED_LEFT_CAMERA_INFO "/zed/left/camera_info" // sensor_msgs/msg/CameraInfo
#define TOPIC_ZED_DEPTH_IMAGE "/zed/depth/image_raw" // sensor_msgs/msg/Image
#define TOPIC_ZED_DEPTH_CAMERA_INFO "/zed/depth/camera_info" // sensor_msgs/msg/CameraInfo
#define TOPIC_CONES "/mapping/cones" // lart_msgs/msg/ConeArray
#define TOPIC_CONE_MARKERS "/mapping/cone_markers" // visualization_msgs/msg/MarkerArray

// SLAM
#define TOPIC_MAP_MARKERS"/slam/map/markers"
#define TOPIC_MAP "/slam/map"
#define TOPIC_SLAM_POSE "/slam/pose"
#define TOPIC_POSE_MARKER "/slam/pose_marker"
#define TOPIC_STATS "/slam/stats"

// Planning
#define TOPIC_PATH "/planned_path_topic"
#define TOPIC_PATH_MARKER "/planned_path_marker"

// Control
#define TOPIC_DYNAMICS "/acu_origin/dynamics" // lart_msgs/msg/Dynamics
#define TOPIC_DYNAMICS_CMD "/pc_origin/dynamics" // /pc_origin/dynamics
#define TOPIC_TARGET_MARKER "/target_marker_topic"

// System
#define TOPIC_STATE_ACU "/state/acu"
#define TOPIC_STATE_PC "/state"
#define TOPIC_STATE_NODES "/state/nodes"

#define TOPIC_MISSION_ACU "/mission/acu"
#define TOPIC_MISSION_PC "/mission"

#define TOPIC_IMU_ANGULAR_VELOCITY "/imu/angular_velocity" // geometry_msgs/msg/Vector3Stamped
#define TOPIC_IMU_ACCELERATION "/imu/acceleration" // geometry_msgs/msg/Vector3Stamped
#define TOPIC_IMU_GNSS_POSE "/imu/gnss_pose" // geometry_msgs/msg/PoseStamped

#define TOPIC_CAR_STATUS "/status"

// Services
#define SERVICE_STEERING_TIMESTAMP "/steering/last_timestamp"
#define SERVICE_ZED_TIMESTAMP "/zed/last_timestamp"
