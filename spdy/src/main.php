<?php declare(strict_types=1);

include_once './vendor/autoload.php';

/** Create a new app instance */
$app = new Nickstarlight\Spdy\App();

/** Get the default router instance */
$router = $app->getRouter();

/** Declare a route */
$router->get('/', fn () => [ 'message' => 'Hello World!' ]);

/** Kickstart the event-loop */
$app->run();
