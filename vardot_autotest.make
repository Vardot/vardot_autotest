; Varbase Autotest Makefile

api = 2
core = 7.x

projects[behat_ui][version] = "2.x-dev"
projects[behat_ui][download][type] = "git"
projects[behat_ui][download][url] = "http://git.drupal.org/project/behat_ui.git"
projects[behat_ui][subdir] = contrib
projects[behat_ui][patch][2791167] = "https://www.drupal.org/files/issues/temp-features-and-reports-with-user-id-date-and-time-2791167-8.patch"
