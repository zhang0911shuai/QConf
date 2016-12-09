#ifndef CONSTDEF_H
#define CONSTDEF_H
#include <string>

using namespace std;

//config file name
const string CONF_PATH = "conf/monitor.conf";

//config file keys
const string DAEMON_MODE = "daemon_mode";
const string AUTO_RESTART = "auto_restart";
const string LOG_LEVEL = "log_level";
const string CONN_RETRY_COUNT = "connect_retry_count";
const string SCAN_INTERVAL = "scan_interval";
const string INSTANCE_NAME = "instance_name";
const string ZK_HOST = "zookeeper.";
const string ZK_LOG_PATH = "zk_log_path";
const string ZK_RECV_TIMEOUT = "zk_recv_timeout";

constexpr int MIN_LOG_LEVEL = 0;
constexpr int MAX_LOG_LEVEL = 6;

//log file
const string logPath = "logs/";
const string logFileNamePrefix = "qconf_monitor.log";

//process name
const string MONITOR_PROCESS_NAME = "qconf_monitor";

//pid file
const string PIDFILE = "monitor_pid";

//command file
const string CMDFILE = "tmp/cmd";

//return status
enum ERR_CODE {
  MONITOR_OK = 0,
  MONITOR_ERR_OTHER,
  MONITOR_NODE_NOT_EXIST,
  MONITOR_ERR_FAILED_OPEN_FILE,
  MONITOR_ERR_MEM,
  MONITOR_ERR_PARAM,
  MONITOR_ERR_ZOO_FAILED
};

const int MONITOR_MAX_VALUE_SIZE = 1048577;
const int MONITOR_GET_RETRIES = 3;
const int MONITOR_SLEEP = 2;


// server status define
enum SERVER_STAT {
  STATUS_UNKNOWN = -1,
  STATUS_UP,
  STATUS_OFFLINE,
  STATUS_DOWN
};

//multi thread
#ifdef DEBUGT
constexpr int MAX_THREAD_NUM = 1;
#else
constexpr int MAX_THREAD_NUM = 64;
#endif

//op of mpdify serviceFatherToIp
const int DELETE = 0;
const int ADD = 1;
const int CLEAR = 2;

//command to process
const string CMD_RELOAD = "reload";
const string CMD_LIST = "list";
const string STATUS_LIST_FILE = "tmp/list";
const string ALL = "all";
const string UP = "up";
const string DOWN = "down";
const string OFFLINE = "offline";
const int LINE_LENGTH = 100;

#endif