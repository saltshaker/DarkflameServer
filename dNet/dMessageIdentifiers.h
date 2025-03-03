#pragma once
#include "MessageIdentifiers.h"

enum CONNECTION_TYPE {
	SERVER = 0,         //!< Means it is used throughout all servers
	AUTH,               //!< Means it is sent from the client authentication
	CHAT,               //!< Means it is sent from and to the chat server
	CHAT_INTERNAL,      //!< Unused - We can potentially use this in the future for various things
	WORLD,              //!< Means it is sent from the client world
	CLIENT,             //!< Means it is sent to the client from the world server
	MASTER              //!< Means it is sent to and from the master server
};

//! The Internal Server Packet Identifiers
enum SERVER {
	MSG_SERVER_VERSION_CONFIRM = 0,     /*!< Sent during a handshake to confirm the server/client version */
	MSG_SERVER_DISCONNECT_NOTIFY,       /*!< Sent when a user disconnected */
	MSG_SERVER_GENERAL_NOTIFY           /*!< A general notification */
};

//! The Internal Authentication Packet Identifiers
enum AUTH {
	MSG_AUTH_LOGIN_REQUEST = 0,             /*!< Sent from the client when a user logs in */
	MSG_AUTH_LOGOUT_REQUEST,                /*!< Sent from the client when a user logs out */
	MSG_AUTH_CREATE_NEW_ACCOUNT_REQUEST,    /*!< Sent from the client when a user creates a new account */
	MSG_AUTH_LEGOINTERFACE_AUTH_RESPONSE,   /*!< Unknown */
	MSG_AUTH_SESSIONKEY_RECEIVED_CONFIRM,   /*!< Sent when the server recieved the session key (?) */
	MSG_AUTH_RUNTIME_CONFIG                 /*!< Unknown */
};

//! The Internal Chat Packet Identifiers
enum CHAT {
	MSG_CHAT_LOGIN_SESSION_NOTIFY = 0,      /*!< When a user logs in */
	MSG_CHAT_GENERAL_CHAT_MESSAGE,          /*!< Used for global chat messages */
	MSG_CHAT_PRIVATE_CHAT_MESSAGE,          /*!< Used for private chat messages */
	MSG_CHAT_USER_CHANNEL_CHAT_MESSAGE,     /*!< Unknown */
	MSG_CHAT_WORLD_DISCONNECT_REQUEST,      /*!< Unknown */
	MSG_CHAT_WORLD_PROXIMITY_RESPONSE,      /*!< Unknown */
	MSG_CHAT_WORLD_PARCEL_RESPONSE,         /*!< Unknown */
	MSG_CHAT_ADD_FRIEND_REQUEST,            /*!< When the client requests to add a friend */
	MSG_CHAT_ADD_FRIEND_RESPONSE,           /*!< Sent from the server when the client adds a friend */
	MSG_CHAT_REMOVE_FRIEND,                 /*!< When the client removes a friend */
	MSG_CHAT_GET_FRIENDS_LIST,              /*!< Sent when the client requests a user's friends list */
	MSG_CHAT_ADD_IGNORE,                    /*!< Sent when the client adds a friend to the "ignore" list */
	MSG_CHAT_REMOVE_IGNORE,                 /*!< Sent when the client removes a friend from the "ignore" list */
	MSG_CHAT_GET_IGNORE_LIST,               /*!< Sent when the client requests a user's ignored list */
	MSG_CHAT_TEAM_MISSED_INVITE_CHECK,      /*!< Unknown (Something with an unresponded-to friend request probably) */
	MSG_CHAT_TEAM_INVITE,                   /*!< When the client invites a user to a team */
	MSG_CHAT_TEAM_INVITE_RESPONSE,          /*!< Sent from the server when the client invites someone to the team */
	MSG_CHAT_TEAM_KICK,                     /*!< Sent when the client kicks a member from a team */
	MSG_CHAT_TEAM_LEAVE,                    /*!< Sent when the client leaves a team */
	MSG_CHAT_TEAM_SET_LOOT,                 /*!< Unknown (Something to do with team loot) */
	MSG_CHAT_TEAM_SET_LEADER,               /*!< Unknown (Probably sets the team leader or something) */
	MSG_CHAT_TEAM_GET_STATUS,               /*!< Check to see if we are in a team or not, sent on world join */
	MSG_CHAT_GUILD_CREATE,                  /*!< Guild Creation */
	MSG_CHAT_GUILD_INVITE,                  /*!< Guild Invitation */
	MSG_CHAT_GUILD_INVITE_RESPONSE,         /*!< Guild Invite Response */
	MSG_CHAT_GUILD_LEAVE,                   /*!< Guild Leave */
	MSG_CHAT_GUILD_KICK,                    /*!< Guild Kick */
	MSG_CHAT_GUILD_GET_STATUS,              /*!< Guild Get Status */
	MSG_CHAT_GUILD_GET_ALL,                 /*!< Guild Get All */
	MSG_CHAT_SHOW_ALL,
	MSG_CHAT_BLUEPRINT_MODERATED,
	MSG_CHAT_BLUEPRINT_MODEL_READY,
	MSG_CHAT_PROPERTY_READY_FOR_APPROVAL,
	MSG_CHAT_PROPERTY_MODERATION_CHANGED,
	MSG_CHAT_PROPERTY_BUILDMODE_CHANGED,
	MSG_CHAT_PROPERTY_BUILDMODE_CHANGED_REPORT,
	MSG_CHAT_MAIL,
	MSG_CHAT_WORLD_INSTANCE_LOCATION_REQUEST,
	MSG_CHAT_REPUTATION_UPDATE,
	MSG_CHAT_SEND_CANNED_TEXT,
	MSG_CHAT_GMLEVEL_UPDATE,
	MSG_CHAT_CHARACTER_NAME_CHANGE_REQUEST,
	MSG_CHAT_CSR_REQUEST,
	MSG_CHAT_CSR_REPLY,
	MSG_CHAT_GM_KICK,
	MSG_CHAT_GM_ANNOUNCE,
	MSG_CHAT_GM_MUTE,
	MSG_CHAT_ACTIVITY_UPDATE,
	MSG_CHAT_WORLD_ROUTE_PACKET,
	MSG_CHAT_GET_ZONE_POPULATIONS,
	MSG_CHAT_REQUEST_MINIMUM_CHAT_MODE,
	MSG_CHAT_REQUEST_MINIMUM_CHAT_MODE_PRIVATE,
	MSG_CHAT_MATCH_REQUEST,
	MSG_CHAT_UGCMANIFEST_REPORT_MISSING_FILE,
	MSG_CHAT_UGCMANIFEST_REPORT_DONE_FILE,
	MSG_CHAT_UGCMANIFEST_REPORT_DONE_BLUEPRINT,
	MSG_CHAT_UGCC_REQUEST,
	MSG_CHAT_WHO,
	MSG_CHAT_WORLD_PLAYERS_PET_MODERATED_ACKNOWLEDGE,
	MSG_CHAT_ACHIEVEMENT_NOTIFY,
	MSG_CHAT_GM_CLOSE_PRIVATE_CHAT_WINDOW,
	MSG_CHAT_UNEXPECTED_DISCONNECT,
	MSG_CHAT_PLAYER_READY,
	MSG_CHAT_GET_DONATION_TOTAL,
	MSG_CHAT_UPDATE_DONATION,
	MSG_CHAT_PRG_CSR_COMMAND,
	MSG_CHAT_HEARTBEAT_REQUEST_FROM_WORLD,
	MSG_CHAT_UPDATE_FREE_TRIAL_STATUS
};

//! Used for packets related to chatting
enum CHAT_INTERNAL {
	MSG_CHAT_INTERNAL_PLAYER_ADDED_NOTIFICATION = 0,
	MSG_CHAT_INTERNAL_PLAYER_REMOVED_NOTIFICATION,
	MSG_CHAT_INTERNAL_ADD_FRIEND,
	MSG_CHAT_INTERNAL_ADD_BEST_FRIEND,
	MSG_CHAT_INTERNAL_ADD_TO_TEAM,
	MSG_CHAT_INTERNAL_ADD_BLOCK,
	MSG_CHAT_INTERNAL_REMOVE_FRIEND,
	MSG_CHAT_INTERNAL_REMOVE_BLOCK,
	MSG_CHAT_INTERNAL_REMOVE_FROM_TEAM,
	MSG_CHAT_INTERNAL_DELETE_TEAM,
	MSG_CHAT_INTERNAL_REPORT,
	MSG_CHAT_INTERNAL_PRIVATE_CHAT,
	MSG_CHAT_INTERNAL_PRIVATE_CHAT_RESPONSE,
	MSG_CHAT_INTERNAL_ANNOUNCEMENT,
	MSG_CHAT_INTERNAL_MAIL_COUNT_UPDATE,
	MSG_CHAT_INTERNAL_MAIL_SEND_NOTIFY,
	MSG_CHAT_INTERNAL_REQUEST_USER_LIST,
	MSG_CHAT_INTERNAL_FRIEND_LIST,
	MSG_CHAT_INTERNAL_ROUTE_TO_PLAYER,
	MSG_CHAT_INTERNAL_TEAM_UPDATE,
	MSG_CHAT_INTERNAL_MUTE_UPDATE,
	MSG_CHAT_INTERNAL_CREATE_TEAM,
};

//! Used for packets send to the world
enum WORLD {
	MSG_WORLD_CLIENT_VALIDATION = 1,  // 				Session info
	MSG_WORLD_CLIENT_CHARACTER_LIST_REQUEST,
	MSG_WORLD_CLIENT_CHARACTER_CREATE_REQUEST,
	MSG_WORLD_CLIENT_LOGIN_REQUEST,  // 			Character selected
	MSG_WORLD_CLIENT_GAME_MSG,
	MSG_WORLD_CLIENT_CHARACTER_DELETE_REQUEST,
	MSG_WORLD_CLIENT_CHARACTER_RENAME_REQUEST,
	MSG_WORLD_CLIENT_HAPPY_FLOWER_MODE_NOTIFY,
	MSG_WORLD_CLIENT_SLASH_RELOAD_MAP,  // 			Reload map cmp
	MSG_WORLD_CLIENT_SLASH_PUSH_MAP_REQUEST,  // 	Push map req cmd
	MSG_WORLD_CLIENT_SLASH_PUSH_MAP,  // 			Push map cmd
	MSG_WORLD_CLIENT_SLASH_PULL_MAP,  // 			Pull map cmd
	MSG_WORLD_CLIENT_LOCK_MAP_REQUEST,
	MSG_WORLD_CLIENT_GENERAL_CHAT_MESSAGE,  // 		General chat message
	MSG_WORLD_CLIENT_HTTP_MONITOR_INFO_REQUEST,
	MSG_WORLD_CLIENT_SLASH_DEBUG_SCRIPTS,  // 		Debug scripts cmd
	MSG_WORLD_CLIENT_MODELS_CLEAR,
	MSG_WORLD_CLIENT_EXHIBIT_INSERT_MODEL,
	MSG_WORLD_CLIENT_LEVEL_LOAD_COMPLETE,  // 		Character data request
	MSG_WORLD_CLIENT_TMP_GUILD_CREATE,
	MSG_WORLD_CLIENT_ROUTE_PACKET,  // 				Social?
	MSG_WORLD_CLIENT_POSITION_UPDATE,
	MSG_WORLD_CLIENT_MAIL,
	MSG_WORLD_CLIENT_WORD_CHECK, // 				Whitelist word check
	MSG_WORLD_CLIENT_STRING_CHECK,  // 				Whitelist string check
	MSG_WORLD_CLIENT_GET_PLAYERS_IN_ZONE,
	MSG_WORLD_CLIENT_REQUEST_UGC_MANIFEST_INFO,
	MSG_WORLD_CLIENT_BLUEPRINT_GET_ALL_DATA_REQUEST,
	MSG_WORLD_CLIENT_CANCEL_MAP_QUEUE,
	MSG_WORLD_CLIENT_HANDLE_FUNNESS,
	MSG_WORLD_CLIENT_FAKE_PRG_CSR_MESSAGE,
	MSG_WORLD_CLIENT_REQUEST_FREE_TRIAL_REFRESH,
	MSG_WORLD_CLIENT_GM_SET_FREE_TRIAL_STATUS
};

//! An enum for packets sent to the client
enum CLIENT {
	MSG_CLIENT_LOGIN_RESPONSE = 0,
	MSG_CLIENT_LOGOUT_RESPONSE,
	MSG_CLIENT_LOAD_STATIC_ZONE,
	MSG_CLIENT_CREATE_OBJECT,
	MSG_CLIENT_CREATE_CHARACTER,
	MSG_CLIENT_CREATE_CHARACTER_EXTENDED,
	MSG_CLIENT_CHARACTER_LIST_RESPONSE,
	MSG_CLIENT_CHARACTER_CREATE_RESPONSE,
	MSG_CLIENT_CHARACTER_RENAME_RESPONSE,
	MSG_CLIENT_CHAT_CONNECT_RESPONSE,
	MSG_CLIENT_AUTH_ACCOUNT_CREATE_RESPONSE,
	MSG_CLIENT_DELETE_CHARACTER_RESPONSE,
	MSG_CLIENT_GAME_MSG,
	MSG_CLIENT_CONNECT_CHAT,
	MSG_CLIENT_TRANSFER_TO_WORLD,
	MSG_CLIENT_IMPENDING_RELOAD_NOTIFY,
	MSG_CLIENT_MAKE_GM_RESPONSE,
	MSG_CLIENT_HTTP_MONITOR_INFO_RESPONSE,
	MSG_CLIENT_SLASH_PUSH_MAP_RESPONSE,
	MSG_CLIENT_SLASH_PULL_MAP_RESPONSE,
	MSG_CLIENT_SLASH_LOCK_MAP_RESPONSE,
	MSG_CLIENT_BLUEPRINT_SAVE_RESPONSE,
	MSG_CLIENT_BLUEPRINT_LUP_SAVE_RESPONSE,
	MSG_CLIENT_BLUEPRINT_LOAD_RESPONSE_ITEMID,
	MSG_CLIENT_BLUEPRINT_GET_ALL_DATA_RESPONSE,
	MSG_CLIENT_MODEL_INSTANTIATE_RESPONSE,
	MSG_CLIENT_DEBUG_OUTPUT,
	MSG_CLIENT_ADD_FRIEND_REQUEST,
	MSG_CLIENT_ADD_FRIEND_RESPONSE,
	MSG_CLIENT_REMOVE_FRIEND_RESPONSE,
	MSG_CLIENT_GET_FRIENDS_LIST_RESPONSE,
	MSG_CLIENT_UPDATE_FRIEND_NOTIFY,
	MSG_CLIENT_ADD_IGNORE_RESPONSE,
	MSG_CLIENT_REMOVE_IGNORE_RESPONSE,
	MSG_CLIENT_GET_IGNORE_LIST_RESPONSE,
	MSG_CLIENT_TEAM_INVITE,
	MSG_CLIENT_TEAM_INVITE_INITIAL_RESPONSE,
	MSG_CLIENT_GUILD_CREATE_RESPONSE,
	MSG_CLIENT_GUILD_GET_STATUS_RESPONSE,
	MSG_CLIENT_GUILD_INVITE,
	MSG_CLIENT_GUILD_INVITE_INITIAL_RESPONSE,
	MSG_CLIENT_GUILD_INVITE_FINAL_RESPONSE,
	MSG_CLIENT_GUILD_INVITE_CONFIRM,
	MSG_CLIENT_GUILD_ADD_PLAYER,
	MSG_CLIENT_GUILD_REMOVE_PLAYER,
	MSG_CLIENT_GUILD_LOGIN_LOGOUT,
	MSG_CLIENT_GUILD_RANK_CHANGE,
	MSG_CLIENT_GUILD_DATA,
	MSG_CLIENT_GUILD_STATUS,
	MSG_CLIENT_MAIL,
	MSG_CLIENT_DB_PROXY_RESULT,
	MSG_CLIENT_SHOW_ALL_RESPONSE,
	MSG_CLIENT_WHO_RESPONSE,
	MSG_CLIENT_SEND_CANNED_TEXT,
	MSG_CLIENT_UPDATE_CHARACTER_NAME,
	MSG_CLIENT_SET_NETWORK_SIMULATOR,
	MSG_CLIENT_INVALID_CHAT_MESSAGE,
	MSG_CLIENT_MINIMUM_CHAT_MODE_RESPONSE,
	MSG_CLIENT_MINIMUM_CHAT_MODE_RESPONSE_PRIVATE,
	MSG_CLIENT_CHAT_MODERATION_STRING,
	MSG_CLIENT_UGC_MANIFEST_RESPONSE,
	MSG_CLIENT_IN_LOGIN_QUEUE,
	MSG_CLIENT_SERVER_STATES,
	MSG_CLIENT_GM_CLOSE_TARGET_CHAT_WINDOW,
	MSG_CLIENT_GENERAL_TEXT_FOR_LOCALIZATION,
	MSG_CLIENT_UPDATE_FREE_TRIAL_STATUS,
	MSG_CLIENT_UGC_DOWNLOAD_FAILED = 120
};

//! Used for packets sent to the master server
enum MASTER {
	MSG_MASTER_REQUEST_PERSISTENT_ID = 1,
	MSG_MASTER_REQUEST_PERSISTENT_ID_RESPONSE,
	MSG_MASTER_REQUEST_ZONE_TRANSFER,
	MSG_MASTER_REQUEST_ZONE_TRANSFER_RESPONSE,
	MSG_MASTER_SERVER_INFO,
	MSG_MASTER_REQUEST_SESSION_KEY,
	MSG_MASTER_SET_SESSION_KEY,
	MSG_MASTER_SESSION_KEY_RESPONSE,
	MSG_MASTER_PLAYER_ADDED,
	MSG_MASTER_PLAYER_REMOVED,

	MSG_MASTER_CREATE_PRIVATE_ZONE,
	MSG_MASTER_REQUEST_PRIVATE_ZONE,

	MSG_MASTER_WORLD_READY,
	MSG_MASTER_PREP_ZONE,
	
	MSG_MASTER_SHUTDOWN,
	MSG_MASTER_SHUTDOWN_RESPONSE,
	MSG_MASTER_SHUTDOWN_IMMEDIATE,

	MSG_MASTER_SHUTDOWN_UNIVERSE,

	MSG_MASTER_AFFIRM_TRANSFER_REQUEST,
	MSG_MASTER_AFFIRM_TRANSFER_RESPONSE,

	MSG_MASTER_NEW_SESSION_ALERT
};

//! The Game messages
enum GAME_MSG : unsigned short {
	GAME_MSG_TELEPORT = 19,
	GAME_MSG_SET_PLAYER_CONTROL_SCHEME = 26,
	GAME_MSG_DROP_CLIENT_LOOT = 30,
	GAME_MSG_DIE = 37,
	GAME_MSG_REQUEST_DIE = 38,
	GAME_MSG_PLAY_EMOTE = 41,
	GAME_MSG_PLAY_ANIMATION = 43,
	GAME_MSG_SET_NAME = 72,
	GAME_MSG_ECHO_START_SKILL = 118,
	GAME_MSG_START_SKILL = 119,
	GAME_MSG_VERIFY_ACK = 121,
	GAME_MSG_ADD_SKILL = 127,
	GAME_MSG_REMOVE_SKILL = 128,
	GAME_MSG_SET_CURRENCY = 133,
	GAME_MSG_PICKUP_CURRENCY = 137,
	GAME_MSG_PICKUP_ITEM = 139,
	GAME_MSG_TEAM_PICKUP_ITEM = 140,
	GAME_MSG_PLAY_FX_EFFECT = 154,
	GAME_MSG_STOP_FX_EFFECT = 155,
	GAME_MSG_REQUEST_RESURRECT = 159,
	GAME_MSG_RESURRECT = 160,
	GAME_MSG_PUSH_EQUIPPED_ITEMS_STATE = 191,
	GAME_MSG_POP_EQUIPPED_ITEMS_STATE = 192,
	GAME_MSG_SET_GM_LEVEL = 193,
	GAME_MSG_SET_STUNNED = 198,
	GAME_MSG_KNOCKBACK = 202,
	GAME_MSG_REBUILD_CANCEL = 209,
	GAME_MSG_ENABLE_REBUILD = 213,
	GAME_MSG_MOVE_ITEM_IN_INVENTORY = 224,
	GAME_MSG_ADD_ITEM_TO_INVENTORY_CLIENT_SYNC = 227,
	GAME_MSG_REMOVE_ITEM_FROM_INVENTORY = 230,
	GAME_MSG_EQUIP_ITEM = 231,
	GAME_MSG_UN_EQUIP_ITEM = 233,
	GAME_MSG_OFFER_MISSION = 248,
	GAME_MSG_RESPOND_TO_MISSION = 249,
	GAME_MSG_NOTIFY_MISSION = 254,
	GAME_MSG_NOTIFY_MISSION_TASK = 255,
	GAME_MSG_REBUILD_NOTIFY_STATE = 336,
	GAME_MSG_TERMINATE_INTERACTION = 357,
	GAME_MSG_SERVER_TERMINATE_INTERACTION = 358,
	GAME_MSG_REQUEST_USE = 364,
	GAME_MSG_VENDOR_OPEN_WINDOW = 369,
	GAME_MSG_BUY_FROM_VENDOR = 373,
	GAME_MSG_SELL_TO_VENDOR = 374,
	GAME_MSG_TEAM_SET_OFF_WORLD_FLAG = 383,
	GAME_MSG_SET_INVENTORY_SIZE = 389,
	GAME_MSG_ACKNOWLEDGE_POSSESSION = 391,
	GAME_MSG_SET_SHOOTING_GALLERY_PARAMS = 400,
	GAME_MSG_REQUEST_ACTIVITY_START_STOP = 402,
	GAME_MSG_REQUEST_ACTIVITY_ENTER = 403,
	GAME_MSG_REQUEST_ACTIVITY_EXIT = 404,
	GAME_MSG_ACTIVITY_ENTER = 405,
	GAME_MSG_ACTIVITY_EXIT = 406,
	GAME_MSG_ACTIVITY_START = 407,
	GAME_MSG_ACTIVITY_STOP = 408,
	GAME_MSG_SHOOTING_GALLERY_CLIENT_AIM_UPDATE = 409,
	GAME_MSG_SHOOTING_GALLERY_FIRE = 411,
	GAME_MSG_VENDOR_STATUS_UPDATE = 417,
	GAME_MSG_NOTIFY_CLIENT_SHOOTING_GALLERY_SCORE = 425,
	GAME_MSG_CONSUME_CLIENT_ITEM = 427,
	GAME_MSG_CLIENT_ITEM_CONSUMED = 428,
	GAME_MSG_UPDATE_SHOOTING_GALLERY_ROTATION = 448,
	GAME_MSG_SET_FLAG = 471,
	GAME_MSG_NOTIFY_CLIENT_FLAG_CHANGE = 472,
	GAME_MSG_VENDOR_TRANSACTION_RESULT = 476,
	GAME_MSG_HAS_BEEN_COLLECTED = 486,
	GAME_MSG_DISPLAY_CHAT_BUBBLE = 495,
	GAME_MSG_SPAWN_PET = 498,
	GAME_MSG_DESPAWN_PET = 499,
	GAME_MSG_PLAYER_LOADED = 505,
	GAME_MSG_PLAYER_READY = 509,
	GAME_MSG_REQUEST_LINKED_MISSION = 515,
	GAME_MSG_INVALID_ZONE_TRANSFER_LIST = 519,
	GAME_MSG_MISSION_DIALOGUE_OK = 520,
	GAME_MSG_DISPLAY_MESSAGE_BOX = 529,
	GAME_MSG_MESSAGE_BOX_RESPOND = 530,
	GAME_MSG_CHOICE_BOX_RESPOND = 531,
	GAME_MSG_SET_SHOOTING_GALLERY_RETICULE_EFFECT = 548,
	GAME_MSG_PLACE_MODEL_RESPONSE = 0x223,
	GAME_MSG_SET_JET_PACK_MODE = 561,
	GAME_MSG_REGISTER_PET_ID = 565,
	GAME_MSG_REGISTER_PET_DBID = 566,
	GAME_MSG_SHOW_ACTIVITY_COUNTDOWN = 568,
    GAME_MSG_START_ACTIVITY_TIME = 576,
    GAME_MSG_ACTIVITY_PAUSE = 602,
	GAME_MSG_USE_NON_EQUIPMENT_ITEM = 603,
	GAME_MSG_USE_ITEM_RESULT = 607,
	GAME_MSG_COMMAND_PET = 640,
	GAME_MSG_PET_RESPONSE = 641,
	GAME_MSG_REQUEST_ACTIVITY_SUMMARY_LEADERBOARD_DATA = 648,
	GAME_MSG_SEND_ACTIVITY_SUMMARY_LEADERBOARD_DATA = 649,
	GAME_MSG_NOTIFY_OBJECT = 656,
	GAME_MSG_CLIENT_NOTIFY_PET = 659,
	GAME_MSG_NOTIFY_PET = 660,
	GAME_MSG_NOTIFY_PET_TAMING_MINIGAME = 661,
	GAME_MSG_START_SERVER_PET_MINIGAME_TIMER = 662,
	GAME_MSG_CLIENT_EXIT_TAMING_MINIGAME = 663,
	GAME_MSG_PET_NAME_CHANGED = 686,
	GAME_MSG_PET_TAMING_MINIGAME_RESULT = 667,
	GAME_MSG_PET_TAMING_TRY_BUILD_RESULT = 668,
	GAME_MSG_NOTIFY_TAMING_BUILD_SUCCESS = 673,
	GAME_MSG_NOTIFY_TAMING_MODEL_LOADED_ON_SERVER = 674,
	GAME_MSG_ADD_PET_TO_PLAYER = 681,
	GAME_MSG_REQUEST_SET_PET_NAME = 683,
	GAME_MSG_SET_PET_NAME = 684,
	GAME_MSG_NOTIFY_PET_TAMING_PUZZLE_SELECTED = 675,
	GAME_MSG_SHOW_PET_ACTION_BUTTON = 692,
	GAME_MSG_SET_EMOTE_LOCK_STATE = 693,
	GAME_MSG_PLAY_EMBEDDED_EFFECT_ON_ALL_CLIENTS_NEAR_OBJECT = 713,
	GAME_MSG_DOWNLOAD_PROPERTY_DATA = 716,
	GAME_MSG_QUERY_PROPERTY_DATA = 717,
	GAME_MSG_PROPERTY_EDITOR_BEGIN = 724,
	GAME_MSG_PROPERTY_EDITOR_END = 725,
	GAME_MSG_START_PATHING = 735,
    GAME_MSG_NOTIFY_CLIENT_ZONE_OBJECT = 737,
	GAME_MSG_UPDATE_REPUTATION = 746,
	GAME_MSG_PROPERTY_RENTAL_RESPONSE = 750,
	GAME_MSG_REQUEST_PLATFORM_RESYNC = 760,
	GAME_MSG_PLATFORM_RESYNC = 761,
	GAME_MSG_PLAY_CINEMATIC = 762,
	GAME_MSG_END_CINEMATIC = 763,
    GAME_MSG_CINEMATIC_UPDATE = 764,
	GAME_MSG_TOGGLE_GHOST_REFERENCE_OVERRIDE = 767,
	GAME_MSG_SET_GHOST_REFERENCE_POSITION = 768,
	GAME_MSG_FIRE_EVENT_SERVER_SIDE = 770,
	GAME_MSG_SET_NETWORK_SCRIPT_VAR = 781,
	GAME_MSG_UPDATE_MODEL_FROM_CLIENT = 793,
	GAME_MSG_DELETE_MODEL_FROM_CLIENT = 794,
	GAME_MSG_PLAY_ND_AUDIO_EMITTER = 821,
	GAME_MSG_PLAY2_DAMBIENT_SOUND = 831,
	GAME_MSG_ENTER_PROPERTY1 = 840,
	GAME_MSG_ENTER_PROPERTY2 = 841,
	GAME_MSG_PROPERTY_ENTRANCE_SYNC = 842,
	GAME_MSG_PROPERTY_SELECT_QUERY = 845,
	GAME_MSG_PARSE_CHAT_MESSAGE = 850,
	GAME_MSG_BROADCAST_TEXT_TO_CHATBOX = 858,
	GAME_MSG_OPEN_PROPERTY_MANAGEMENT = 860,
	GAME_MSG_OPEN_PROPERTY_VENDOR = 861,
	GAME_MSG_UPDATE_PROPERTY_OR_MODEL_FOR_FILTER_CHECK = 863,
	GAME_MSG_CLIENT_TRADE_REQUEST = 868,
	GAME_MSG_SERVER_TRADE_REQUEST = 869,
	GAME_MSG_SERVER_TRADE_INVITE = 870,
	GAME_MSG_CLIENT_TRADE_REPLY = 871,
	GAME_MSG_SERVER_TRADE_REPLY = 872,
	GAME_MSG_SERVER_TRADE_INITIAL_REPLY = 873,
	GAME_MSG_SERVER_TRADE_FINAL_REPLY = 874,
	GAME_MSG_CLIENT_TRADE_UPDATE = 875,
	GAME_MSG_SERVER_SIDE_TRADE_UPDATE = 876,
	GAME_MSG_SERVER_TRADE_UPDATE = 877,
	GAME_MSG_CLIENT_TRADE_CANCEL = 878,
	GAME_MSG_CLIENT_SIDE_TRADE_CANCEL = 879,
	GAME_MSG_CLIENT_TRADE_ACCEPT = 880,
	GAME_MSG_SERVER_SIDE_TRADE_ACCEPT = 881,
	GAME_MSG_SERVER_SIDE_TRADE_CANCEL = 882,
	GAME_MSG_SERVER_TRADE_CANCEL = 883,
	GAME_MSG_SERVER_TRADE_ACCEPT = 884,
	GAME_MSG_READY_FOR_UPDATES = 888,
	GAME_MSG_ORIENT_TO_OBJECT = 905,
	GAME_MSG_ORIENT_TO_POSITION = 906,
	GAME_MSG_ORIENT_TO_ANGLE = 907,
	GAME_MSG_BOUNCER_ACTIVE_STATUS = 942,
	GAME_MSG_BBB_LOAD_ITEM_REQUEST = 1000,
	GAME_MSG_BBB_SAVE_REQUEST = 1001,
	GAME_MSG_BBB_SAVE_RESPONSE = 1006,
	GAME_MSG_NOTIFY_CLIENT_OBJECT = 1042,
	GAME_MSG_DISPLAY_ZONE_SUMMARY = 1043,
    GAME_MSG_ACTIVITY_STATE_CHANGE_REQUEST = 1053,
    GAME_MSG_MODIFY_PLAYER_ZONE_STATISTIC = 1046,
	GAME_MSG_START_BUILDING_WITH_ITEM = 1057,
	GAME_MSG_START_ARRANGING_WITH_ITEM = 1061,
	GAME_MSG_FINISH_ARRANGING_WITH_ITEM = 1062,
	GAME_MSG_DONE_ARRANGING_WITH_ITEM = 1063,
	GAME_MSG_SET_BUILD_MODE = 1068,
	GAME_MSG_BUILD_MODE_SET = 1069,
	GAME_MSG_SET_BUILD_MODE_CONFIRMED = 1073,
	GAME_MSG_NOTIFY_CLIENT_FAILED_PRECONDITION = 1081,
	GAME_MSG_MOVE_ITEM_BETWEEN_INVENTORY_TYPES = 1093,
	GAME_MSG_MODULAR_BUILD_BEGIN = 1094,
	GAME_MSG_MODULAR_BUILD_END = 1095,
	GAME_MSG_MODULAR_BUILD_MOVE_AND_EQUIP = 1096,
	GAME_MSG_MODULAR_BUILD_FINISH = 1097,
	GAME_MSG_REPORT_BUG = 1198,
	GAME_MSG_MISSION_DIALOGUE_CANCELLED = 1129,
	GAME_MSG_ECHO_SYNC_SKILL = 1144,
	GAME_MSG_SYNC_SKILL = 1145,
	GAME_MSG_REQUEST_SERVER_PROJECTILE_IMPACT = 1148,
	GAME_MSG_DO_CLIENT_PROJECTILE_IMPACT = 1151,
	GAME_MSG_MODULAR_BUILD_CONVERT_MODEL = 1155,
    GAME_MSG_SET_PLAYER_ALLOWED_RESPAWN = 1165,
	GAME_MSG_UI_MESSAGE_SERVER_TO_SINGLE_CLIENT = 1184,
	GAME_MSG_UI_MESSAGE_SERVER_TO_ALL_CLIENTS = 1185,
	GAME_MSG_PET_TAMING_TRY_BUILD = 1197,
	GAME_MSG_REQUEST_SMASH_PLAYER = 1202,
	GAME_MSG_FIRE_EVENT_CLIENT_SIDE = 1213,
	GAME_MSG_TOGGLE_GM_INVIS = 1218,
	GAME_MSG_CHANGE_OBJECT_WORLD_STATE = 1223,
	GAME_MSG_VEHICLE_LOCK_INPUT = 1230,
	GAME_MSG_VEHICLE_UNLOCK_INPUT = 1231,
	GAME_MSG_RACING_RESET_PLAYER_TO_LAST_RESET = 1252,
	GAME_MSG_RACING_SERVER_SET_PLAYER_LAP_AND_PLANE = 1253,
	GAME_MSG_RACING_SET_PLAYER_RESET_INFO = 1254,
	GAME_MSG_RACING_PLAYER_INFO_RESET_FINISHED = 1255,
	GAME_MSG_LOCK_NODE_ROTATION = 1260,
	GAME_MSG_VEHICLE_SET_WHEEL_LOCK_STATE = 1273,
	GAME_MSG_NOTIFY_VEHICLE_OF_RACING_OBJECT = 1276,
	GAME_MSG_PLAYER_REACHED_RESPAWN_CHECKPOINT = 1296,
	GAME_MSG_HANDLE_UGC_EQUIP_POST_DELETE_BASED_ON_EDIT_MODE = 1300,
	GAME_MSG_HANDLE_UGC_EQUIP_PRE_CREATE_BASED_ON_EDIT_MODE = 1301,
	GAME_MSG_PROPERTY_CONTENTS_FROM_CLIENT = 1305,
	GAME_MSG_GET_MODELS_ON_PROPERTY = 1306,
	GAME_MSG_MATCH_REQUEST = 1308,
	GAME_MSG_MATCH_RESPONSE = 1309,
	GAME_MSG_MATCH_UPDATE = 1310,
	GAME_MSG_MODULE_ASSEMBLY_DB_DATA_FOR_CLIENT = 1131,
	GAME_MSG_MODULE_ASSEMBLY_QUERY_DATA = 1132,
	GAME_MSG_VEHICLE_ADD_PASSIVE_BOOST_ACTION = 1340,
	GAME_MSG_VEHICLE_REMOVE_PASSIVE_BOOST_ACTION = 1341,
	GAME_MSG_VEHICLE_NOTIFY_SERVER_ADD_PASSIVE_BOOST_ACTION = 1342,
	GAME_MSG_VEHICLE_NOTIFY_SERVER_REMOVE_PASSIVE_BOOST_ACTION = 1343,
	GAME_MSG_VEHICLE_ADD_SLOWDOWN_ACTION = 1344,
	GAME_MSG_VEHICLE_REMOVE_SLOWDOWN_ACTION = 1345,
	GAME_MSG_VEHICLE_NOTIFY_SERVER_ADD_SLOWDOWN_ACTION = 1346,
	GAME_MSG_VEHICLE_NOTIFY_SERVER_REMOVE_SLOWDOWN_ACTION = 1347,
	GAME_MSG_BUYBACK_FROM_VENDOR = 1350,
	GAME_MSG_SET_PROPERTY_ACCESS = 1366,
	GAME_MSG_ZONE_PROPERTY_MODEL_PLACED = 1369,
	GAME_MSG_ZONE_PROPERTY_MODEL_ROTATED = 1370,
	GAME_MSG_ZONE_PROPERTY_MODEL_REMOVED_WHILE_EQUIPPED = 1371,
	GAME_MSG_ZONE_PROPERTY_MODEL_EQUIPPED = 1372,
	GAME_MSG_ZONE_PROPERTY_MODEL_PICKED_UP = 1373,
	GAME_MSG_ZONE_PROPERTY_MODEL_REMOVED = 1374,
	GAME_MSG_NOTIFY_RACING_CLIENT = 1390,
	GAME_MSG_RACING_PLAYER_HACK_CAR = 1391,
	GAME_MSG_RACING_PLAYER_LOADED = 1392,
	GAME_MSG_RACING_CLIENT_READY = 1393,
	GAME_MSG_UPDATE_CHAT_MODE = 1395,
	GAME_MSG_VEHICLE_NOTIFY_FINISHED_RACE = 1396,
	GAME_MSG_SET_CONSUMABLE_ITEM = 1409,
	GAME_MSG_SET_PET_NAME_MODERATED = 1448,
	GAME_MSG_MODIFY_LEGO_SCORE = 1459,
	GAME_MSG_RESTORE_TO_POST_LOAD_STATS = 1468,
	GAME_MSG_SET_RAIL_MOVEMENT = 1471,
	GAME_MSG_START_RAIL_MOVEMENT = 1472,
    GAME_MSG_CANCEL_RAIL_MOVEMENT = 1474,
    GAME_MSG_CLIENT_RAIL_MOVEMENT_READY = 1476,
    GAME_MSG_PLAYER_RAIL_ARRIVED_NOTIFICATION = 1477,
    GAME_MSG_UPDATE_PLAYER_STATISTIC = 1481,
	GAME_MSG_MODULAR_ASSEMBLY_NIF_COMPLETED = 1498,
	GAME_MSG_NOTIFY_NOT_ENOUGH_INV_SPACE = 1516,
	GAME_MSG_TEAM_SET_LEADER = 0x0615,
	GAME_MSG_TEAM_INVITE_CONFIRM = 0x0616,
	GAME_MSG_TEAM_GET_STATUS_RESPONSE = 0x0617,
	GAME_MSG_TEAM_ADD_PLAYER = 0x061a,
	GAME_MSG_TEAM_REMOVE_PLAYER = 0x061b,
	GAME_MSG_START_CELEBRATION_EFFECT = 1618,
    GAME_MSG_ADD_BUFF = 1647,
	GAME_MSG_SERVER_DONE_LOADING_ALL_OBJECTS = 1642,
	GAME_MSG_PLACE_PROPERTY_MODEL = 1170,
	GAME_MSG_VEHICLE_NOTIFY_HIT_IMAGINATION_SERVER = 1606,
	GAME_MSG_ADD_RUN_SPEED_MODIFIER = 1505,
	GAME_MSG_REMOVE_RUN_SPEED_MODIFIER = 1506,
	GAME_MSG_UPDATE_PROPERTY_PERFORMANCE_COST = 1547,
	GAME_MSG_PROPERTY_ENTRANCE_BEGIN = 1553,
	GAME_MSG_REQUEST_MOVE_ITEM_BETWEEN_INVENTORY_TYPES = 1666,
	GAME_MSG_RESPONSE_MOVE_ITEM_BETWEEN_INVENTORY_TYPES = 1667,
	GAME_MSG_PLAYER_SET_CAMERA_CYCLING_MODE = 1676,
	GAME_MSG_NOTIFY_SERVER_LEVEL_PROCESSING_COMPLETE = 1734,
	GAME_MSG_NOTIFY_LEVEL_REWARDS = 1735,
	GAME_MSG_MARK_INVENTORY_ITEM_AS_ACTIVE = 1767,
	END
};